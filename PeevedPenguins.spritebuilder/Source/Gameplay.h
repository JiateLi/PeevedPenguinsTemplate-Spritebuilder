//
//  Gameplay.h
//  PeevedPenguins
//
//  Created by Jiate Li on 15/1/27.
//  Copyright (c) 2015年 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface Gameplay : CCNode

- (void)didLoadFromCCB;
- (void)touchBegan:(CCTouch *)touch withEvent:(CCTouchEvent *)event;
- (void)launchPenguin;

@end