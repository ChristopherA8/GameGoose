//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKScene.h"

@class SKLabelNode, SKNode;

@interface MoreScene : SKScene
{
    SKNode *screen;
    SKNode *more;
    SKLabelNode *more_label;
    SKLabelNode *new_label;
    _Bool landscape;
    struct CGSize stageSize;
    float ratio;
    SKNode *selected;
}

- (void).cxx_destruct;
- (void)resize;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchUpAtPoint:(struct CGPoint)arg1;
- (void)touchMovedToPoint:(struct CGPoint)arg1;
- (void)touchDownAtPoint:(struct CGPoint)arg1;
- (id)playSound:(id)arg1;
- (void)buttonCancel;
- (void)buttonDown;
- (void)buttonUp;
- (void)didMoveToView:(id)arg1;

@end
