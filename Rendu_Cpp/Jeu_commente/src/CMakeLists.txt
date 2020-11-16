cmake_minimum_required(VERSION 2.6)
project(Game)

set(SOURCE_FILES
		${PROJECT_SOURCE_DIR}/main.cpp
		${PROJECT_SOURCE_DIR}/Rand.cpp
		${PROJECT_SOURCE_DIR}/Personnage.cpp
		${PROJECT_SOURCE_DIR}/Guerrier.cpp
		${PROJECT_SOURCE_DIR}/Magicien.cpp
		${PROJECT_SOURCE_DIR}/Voleur.cpp
		${PROJECT_SOURCE_DIR}/Squelette.cpp
		${PROJECT_SOURCE_DIR}/Araignee.cpp
		${PROJECT_SOURCE_DIR}/Gobelin.cpp
		${PROJECT_SOURCE_DIR}/Boss.cpp
		${PROJECT_SOURCE_DIR}/Case.cpp
		${PROJECT_SOURCE_DIR}/Drop.cpp
		${PROJECT_SOURCE_DIR}/Combat.cpp
		${PROJECT_SOURCE_DIR}/Combat_Guerrier.cpp
		${PROJECT_SOURCE_DIR}/Combat_Magicien.cpp
		${PROJECT_SOURCE_DIR}/Combat_Voleur.cpp
		${PROJECT_SOURCE_DIR}/Deplacement.cpp
		${PROJECT_SOURCE_DIR}/Scenario_Guerrier.cpp
		${PROJECT_SOURCE_DIR}/Scenario_Magicien.cpp
		${PROJECT_SOURCE_DIR}/Scenario_Voleur.cpp
		)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})