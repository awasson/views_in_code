views_in_code
=============

A boilerplate module for keeping your Drupal views safely in code. The benefits are safety and a slight performance advantage.

USAGE
=====
 
See the included example view to get an idea of what the exported view should look like

1) Paste the exported view into an empty file below a php opening tag and save with the .views extension.

2) save your views in the views_in_code/views directory.

3) Upload to your modules directory (ie: /sites/all/modules) and enable

4) Your views in code should show up in the views listings

5) If you modify a view that you have in code, export it and overwrite the existing view in code. Once you upload the updated version, clear all caches and then revert the view. This will clear the view and your new code will take precedence.  

NOTES
=====

This is a Drupal 7 + Views 3.0 module. 

You will need to rename this module views_in_code and install it in your modules directory (ie: /sites/all/modules/)