; Rooms Make File
; ---------------
; Brings together all the modules and libraries required to run Rooms

core = 7.x
api = 2

projects[ctools][subdir] = contrib
projects[ctools][version] = "1.0-rc1"
projects[views][subdir] = contrib
projects[views][version] = "3.1"
projects[entity][subdir] = contrib
projects[entity][version] = "1.0-rc1"
projects[rules][subdir] = contrib
projects[rules][version] = "2.0"
projects[commerce][subdir] = contrib
projects[commerce][version] = "1.2"
projects[date][subdir] = contrib
projects[date][version] = "2.0-rc2"
projects[addressfield][subdir] = contrib
projects[addressfield][version] = "1.0-beta2"
projects[colorbox][subdir] = contrib
projects[colorbox][version] = "1.2"
projects[i18n][subdir] = contrib
projects[i18n][version] = "1.3"
projects[tablefield][subdir] = contrib
projects[tablefield][version] = "2.0-beta6"
projects[features][subdir] = contrib
projects[features][version] = "1.0-beta4"
projects[libraries][subdir] = contrib
projects[libraries][version] = "7.x-2.1"

;Rooms
projects[rooms][subdir] = contrib
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

