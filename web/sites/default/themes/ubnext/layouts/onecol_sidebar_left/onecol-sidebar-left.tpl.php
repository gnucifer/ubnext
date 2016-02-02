<div class="container">
  <div class="shortcuts-top row">
    <div class="col-xs-12">
      <?php print render($content['shortcuts']) ?>
    </div>
  </div>
  <div class="row">
    <div class="searchbar-top col-xs-12 col-sm-8 col-sm-offset-2">
      <?php print render($content['searchbartop']); ?>
    </div>
  </div>
  </div>
  <div class="row">
    <aside class="sidebar col-xs-12 col-sm-4">
      <div class="facet-filter">
        <?php print render($content['sidebar']); ?>
      </div>
    </aside>
    <section class="main col-xs-12 col-sm-8">
      <div class="main-inner">
    	   <?php print render($content['main']); ?>
      </div>
    </section>
  </div>
</div>
