//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WordbitsNode : NSObject
{
    _Bool _visited;
    int _type;
    int _len;
    NSString *_l;
}

@property int len; // @synthesize len=_len;
@property(retain) NSString *l; // @synthesize l=_l;
@property _Bool visited; // @synthesize visited=_visited;
@property int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
