(function ($) {

    Drupal.behaviors.ubMap = {
        attach: function(context, settings) {
			console.log(settings.ubMap);

			if (settings.ubMap.length) {
				// set center on first item in array
				var centerLatlng = new google.maps.LatLng(settings.ubMap[0].latitude * 1, settings.ubMap[0].longitude * 1);
				
				var mapOptions = {
				  center: centerLatlng,
				  zoom: 15
				};
				var map = new google.maps.Map(document.getElementById('ub-map-canvas'), mapOptions);

				var markers = [];
				settings.ubMap.forEach(function (item) {
					console.log(item);
					var latlng = new google.maps.LatLng(item.latitude, item.longitude);
					markers.push(new google.maps.Marker({
						position: latlng,
						map: map,
						title: item.label
					}));
				});
				
				if (settings.ubMap.length > 1) {
					var new_boundary = new google.maps.LatLngBounds();

					for(index in markers){
					  position = markers[index].position;
					  new_boundary.extend(position);
					}

					map.fitBounds(new_boundary);
				}

				



			}
    	}
    }
})(jQuery);