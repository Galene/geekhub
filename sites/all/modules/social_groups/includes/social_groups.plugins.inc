<?php

/**
 * @file
 *  CTools plugins declarations.
 */

/**
 * Break out for social_groups_social_groups_plugins().
 */
function _social_groups_social_groups_plugins() {
  $path = drupal_get_path('module', 'social_groups') . '/includes/plugins';
  $info = array();
  
  $info['SocialGroupPluginFacebook'] = array(
    'handler' => array(
      'class' => 'SocialGroupPluginFacebook',
    ),
    'group' => array(
      'name' => 'facebook',
      'title' => t('Facebook Group'),
      'description' => t('Facebook group id or name'),
      'url' => 'https://graph.facebook.com/',
      'group_url' => 'https://facebook.com/',
    ),
  );
  
  $info['SocialGroupPluginTwitter'] = array(
    'handler' => array(
      'class' => 'SocialGroupPluginTwitter',
    ),
    'group' => array(
      'name' => 'twitter',
      'title' => t('Twitter Group'),
      'description' => t('Twitter name'),
      'url' => 'https://api.twitter.com/1/users/show.json?screen_name=',
      'group_url' => 'https://twitter.com/',
    ),
  );
  
  $info['SocialGroupPluginYoutube'] = array(
    'handler' => array(
      'class' => 'SocialGroupPluginYoutube',
    ),
    'group' => array(
      'name' => 'youtube',
      'title' => t('Youtube Group'),
      'description' => t('Youtube name'),
      'url' => 'http://gdata.youtube.com/feeds/api/users/',
      'group_url' => 'http://youtube.com/',
    ),
  );
  
  return $info;
}