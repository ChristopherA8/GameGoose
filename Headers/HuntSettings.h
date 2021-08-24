//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameSettings.h"

@class NSMutableArray, NSString, SettingsCustomizeButton, SettingsOptionButton, SettingsOptionPartition;

@interface HuntSettings : GameSettings
{
    NSMutableArray *locks;
    SettingsOptionPartition *part2;
    SettingsOptionPartition *part1;
    SettingsOptionButton *option1;
    SettingsOptionButton *option2;
    SettingsOptionButton *option3;
    SettingsOptionButton *option4;
    SettingsCustomizeButton *customize;
    NSString *map;
}

@property(retain) NSString *map; // @synthesize map;
- (void).cxx_destruct;
- (void)selectLanguage:(id)arg1;
- (void)update;
- (void)resize;
- (void)changeOption:(id)arg1;
- (id)init;
- (void)Customize:(id)arg1;

@end
