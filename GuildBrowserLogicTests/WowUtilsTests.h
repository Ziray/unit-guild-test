//
//  WowUtilsTests.h
//  GuildBrowser
//
//  Created by Michael Ziray on 7/17/13.
//  Copyright (c) 2013 Charlie Fulton. All rights reserved.
//

#import <SenTestingKit/SenTestingKit.h>

#import "Character.h"
#import "Item.h"


@interface WowUtilsTests : SenTestCase

+(NSString *)classFromCharacterType:(CharacterClassType)type;
+(NSString *)raceFromRaceType:(CharacterRaceType)type;
+(NSString *)qualityFromQualityType:(ItemQuality)quality;

@end
