//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKNode.h"

@class NSString, SKLabelNode, SKSpriteNode;

@interface HuntWord : SKNode
{
    SKSpriteNode *shadow;
    SKNode *container;
    SKSpriteNode *answer_bg;
    SKSpriteNode *answer_shadow;
    SKLabelNode *answer;
    SKLabelNode *num;
    NSString *question;
    int answr;
    int num_i;
    SKSpriteNode *bg;
}

- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)setWhite;
- (void)setGreen;
- (void)setRepeat;
- (id)init;

@end
