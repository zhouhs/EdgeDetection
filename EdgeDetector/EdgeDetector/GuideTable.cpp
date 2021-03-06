//
//  GuideTable.cpp
//  EdgeDetector
//
//  Created by 강진영 on 9/13/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//


//introduction
#include "GuideTable.h"



GuideTable::GuideTable()
{
    init();
}

GuideTable::~GuideTable()
{
    
}
void GuideTable::init()
{
    initStringTable();
};

void GuideTable::initStringTable()
{
    // Inputs guide strings
    if(guideMap.empty())
    {
        guideMap.insert(std::pair<std::string, std::string>(INTRODUCTION_PROGRAM, INTRODUCTION_PROGRAM));
        guideMap.insert(std::pair<std::string, std::string>(INPUT_LIST, INPUT_LIST));
        guideMap.insert(std::pair<std::string, std::string>(DECK, DECK));
        guideMap.insert(std::pair<std::string, std::string>(START_PROGRAM, START_PROGRAM));
        guideMap.insert(std::pair<std::string, std::string>(END_PROGRAM, END_PROGRAM));
        guideMap.insert(std::pair<std::string, std::string>(INPUT_ERROR, INPUT_ERROR));
        guideMap.insert(std::pair<std::string, std::string>(INPUT_SUCCESS, INPUT_SUCCESS));
        guideMap.insert(std::pair<std::string, std::string>(INPUT_DATALIST, INPUT_DATALIST));
        guideMap.insert(std::pair<std::string, std::string>(HELP_DETAIL, HELP_DETAIL));
        guideMap.insert(std::pair<std::string, std::string>(HELP_DETAIL_command, HELP_DETAIL_command));
        guideMap.insert(std::pair<std::string, std::string>(MEMORY_FAILURE, MEMORY_FAILURE));
        guideMap.insert(std::pair<std::string, std::string>(MEMORY_SUCCESS, MEMORY_SUCCESS));
        guideMap.insert(std::pair<std::string, std::string>(FILE_OPEN_SUCCESS, FILE_OPEN_SUCCESS));
        guideMap.insert(std::pair<std::string, std::string>(FILE_OPEN_ERROR, FILE_OPEN_ERROR));
        guideMap.insert(std::pair<std::string, std::string>(FILE_WRITE_SUCCESS, FILE_WRITE_SUCCESS));
        guideMap.insert(std::pair<std::string, std::string>(EDGEDETECTOR_START, EDGEDETECTOR_START));
        guideMap.insert(std::pair<std::string, std::string>(EDGEDETECTOR_FINISH, EDGEDETECTOR_FINISH));
        guideMap.insert(std::pair<std::string, std::string>(FILE_READ_SUCCESS, FILE_READ_SUCCESS));
        guideMap.insert(std::pair<std::string, std::string>(TEST, TEST));
    }
 
};

void GuideTable::showGuideMessage(std::string guide)
{
    std::cout <<  guideMap[guide] << std::endl;
};


void GuideTable::inputedValues(char *filename, int height, int width, int mode)
{
    std::cout <<  filename << std::endl;
    std::cout <<  height << std::endl;
    std::cout <<  width << std::endl;
    std::cout <<  mode << std::endl;   
};

void GuideTable::selectedValues(int mode)
{
    std::cout <<  SELECTED_MODE <<mode << std::endl;
}


void GuideTable::checkEdgeMode(int mode)
{
    switch (mode) {
            
        case 1:
             std::cout <<  DETAIL_MODE_ONE << std::endl;
            break;
            
        case 2:
            std::cout <<  DETAIL_MODE_TWO << std::endl;
            break;
        case 3:
            std::cout <<  DETAIL_MODE_THREE << std::endl;
            break;
        case 4:
            std::cout <<  DETAIL_MODE_FOUR << std::endl;
            break;
    }
    
   
}

void GuideTable::showThreshold(int threshold)
{
    
 std::cout <<  threshold << std::endl;
    
    
}




