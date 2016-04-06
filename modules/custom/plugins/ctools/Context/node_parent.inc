<?php
// TODO ctools_api implementation.
/**
 * @file
 * Node parent.
 */

$plugin = array(
  'title' => t('Node parent'),
  'keyword' => 'node_parent',
  'description' => t('Adds a node parent from a node context.'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'context' => 'node_parent_context',
);

/**
 * Return a new context based on an existing context.
 */
function node_parent_context($context, $conf) {
  // If unset it wants a generic, unfilled context, which is just NULL.
  if (empty($context->data)) {
    return ctools_context_create_empty('node');
  }

  if (isset($context->data->menu_node_links)) {
    $parent_link = menu_link_load(reset($context->data->menu_node_links)->plid);

    // Remove node/% from router_path.
    if (!empty($nid = substr($parent_link['link_path'], 5))) {
      // Load the node.
      $node = node_load($nid);

      // Generate the context.
      if (node_access('view', $node)) {
        return ctools_context_create('node', $node);
      }
    }
  }
  else {
    return ctools_context_create_empty('node');
  }
}
