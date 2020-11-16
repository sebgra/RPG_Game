cmake_minimum_required(VERSION 2.8.11)
project (Game)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets)
add_definitions(${Qt5Widgets_DEFINITIONS})

Set(SOURCES_FILES
	${PROJECT_SOURCE_DIR}/main.cpp
	${PROJECT_SOURCE_DIR}/FenetrePrincipale.cpp
	${PROJECT_SOURCE_DIR}/FenetreCombat.cpp
	${PROJECT_SOURCE_DIR}/Win.cpp
	${PROJECT_SOURCE_DIR}/Loose.cpp
	${PROJECT_SOURCE_DIR}/FenetreChoix.cpp
	${PROJECT_SOURCE_DIR}/Personnage.cpp
	${PROJECT_SOURCE_DIR}/Case.cpp)

QT5_WRAP_CPP(HEADERS_MOC ${HEADERS_FILES})

include_directories(${Qt5Widgets_INCLUDES})
add_executable(${PROJECT_NAME} ${SOURCES_FILES})
target_link_libraries(${PROJECT_NAME} ${QT_LIBRARIES})
qt5_use_modules(${PROJECT_NAME}  Widgets)