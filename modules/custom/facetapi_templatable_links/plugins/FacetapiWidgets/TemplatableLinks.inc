<?php
/**
 * @file
 * Templatable links.
 */

namespace FacetapiWidgets;

/**
 * Class TemplatableLinks.
 */
class TemplatableLinks extends \FacetapiWidgetLinks {

  /**
   * {@inheritdoc}
   */
  public function execute() {
    parent::execute();

    $this->build[$this->facet['field alias']]['#theme'] = 'facetapi_templatable_links';
    $this->build[$this->facet['field alias']]['#title'] = $this->build['#title'];
  }

  /**
   * {@inheritdoc}
   */
  public function buildListItems($build) {
    $rows = parent::buildListItems($build);

    foreach (array_keys($build) as $number => $key) {
      $rows[$number]['attributes'] = [];

      if ($build[$key]['#active']) {
        $rows[$number]['attributes']['class'][] = 'active';
      }
    }

    return $rows;
  }

}
