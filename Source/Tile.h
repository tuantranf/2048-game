//
//  Tile.h
//  2048
//
//  Created by Minh Tuan on 2014/06/02.
//  Copyright (c) 2014年 Apportable. All rights reserved.
//

#import "CCNode.h"

@interface Tile : CCNode

@property (nonatomic, assign) NSInteger value;

@property (nonatomic, assign) BOOL mergedThisRound;

- (void)updateValueDisplay;

@end
