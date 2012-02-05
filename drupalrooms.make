; Rooms Make File
; ---------------
; Brings together all the modules and libraries required to run Rooms

core = 7.x
api = 2

projects[ctools][version] = "1.0-rc1"
projects[views][version] = "3.1"
projects[entity][version] = "1.0-rc1"
projects[rules][version] = "2.0"
projects[commerce][version] = "1.2"
projects[date][version] = "2.0-rc2"
projects[addressfield][version] = "1.0-beta2"
projects[colorbox][version] = "1.2"
projects['i18n']['version'] = "1.3"
projects['tablefield']['version'] = "2.0-beta6"

# Libraries is required by for now geofield takes care of it. 
# Not quite sure how to stop the geofield nested make file from running 
# which means that for now we will have to trust it to do it.
#projects[libraries][version] = "1.0"

projects[features][version] = "1.0-beta4"

;Rooms
projects[rooms][download][type] = "git"
projects[rooms][download][module] = "rooms"
projects[rooms][download][revision] = "master"


;libraries
libraries[fullcalendar][download][type] = "get"
libraries[fullcalendar][download][url] = "http://arshaw.com/fullcalendar/downloads/fullcalendar-1.5.1.zip"
libraries[fullcalendar][directory_name] = "fullcalendar"
libraries[fullcalendar][destination] = "libraries"

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "http://jacklmoore.com/colorbox/colorbox.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"

