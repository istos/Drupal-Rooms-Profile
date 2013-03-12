; Rooms Make File
; ---------------
; Brings together all the modules and libraries required to run Rooms
;
; Run with command drush make --prepare-install --contrib-destination=sites/all drupalrooms.make www


core = 7.x
api = 2

;Core project
projects[] = drupal

;Rooms Profile
projects[drupalrooms][type] = profile
projects[drupalrooms][download][type] = git
projects[drupalrooms][download][url] = git@github.com:istos/Drupal-Rooms-Profile.git
