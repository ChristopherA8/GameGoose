@implementation PaintScene
-(void)showEnemy {
  PaintTire *v3 = self->target2;
  PaintTire *v5 = [self->dude tire]; // -[PaintDude tire]

  if (v3 == v5) {
    [self->enemy showEnemy:0]; // -[PaintTire showEnemy:]
  } else {
    uint v6 = [self->target2 num]; // -[PaintTire num]
    PaintTire *v8 = [self->dude tire]; // -[PaintDude tire]
    uint v9 = [v8 num];

    PaintTire *v10 = self->enemy;

    if (v6 <= v9) {
      [v10 showEnemy:4294967295]; // 0xFFFFFFFFLL
    } else {
      [v10 showEnemy:1];
    }
  }

  [self->super.main playSound:@"whoosh1.mp3" volume:1.0]; // -[MessagesViewController playSound:volume:]

  PaintTire *v13 = self->target;
  PaintTire *v14 = self->enemy;

  SKSpriteNode *v44 = [v13 target]; // -[PaintTire target]

  if (v13 == v14) { // If the target == the enemy
    
    // rest of it
    // https://chr1s.dev/sharex/files/dTGWHlr.png

    ...
    // [SKAction waitForDuration]
    // [SKAction fadeAlphaTo:duration:]
    // [NSArray arrayWithObjects:count:]
    // [SKAction sequence:]
    ...

  } else {

    // rest of it
    // https://chr1s.dev/sharex/files/SfD4Mhs.png

    ...
    // [SKAction waitForDuration]
    // [SKAction fadeAlphaTo:duration:]
    // [NSArray arrayWithObjects:count:]
    // [SKAction sequence:]
    ...

  }

  // the rest of the dissassembly 
  // https://chr1s.dev/sharex/files/4YOUtzH.png

  // [SKAction waitForDuration]
  // [SKAction fadeAlphaTo:duration:]
  // [NSArray arrayWithObjects:count:]
  // [SKAction sequence:]
  // [SkSpriteNode runAction:]
  // meShoot
  // wait
  // heShoot

}
@end