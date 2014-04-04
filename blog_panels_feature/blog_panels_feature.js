(function($) {
  Drupal.behaviors.blogPanelsFeature = {
    attach: function(context) {
      $('#panels-ipe-quick-edit').once('panels-ipe-quick-edit').on('click', function(e) {
        var entity = Drupal.settings.blogPanelsFeature && Drupal.settings.blogPanelsFeature.entity;
        if (!entity) return;
        var entityModel = Drupal.edit.collections.entities.findWhere({
          entityID: entity
        });
        if (entityModel) {
          entityModel.set('state', 'launching');
          e.preventDefault();
        }
      });
    }
  };
}(jQuery));
