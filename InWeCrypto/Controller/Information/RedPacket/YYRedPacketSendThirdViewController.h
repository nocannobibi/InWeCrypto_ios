//
//  YYRedPacketSendThirdViewController.h
//  FBG
//
//  Created by yy on 2018/4/25.
//  Copyright © 2018年 ButtonRoot. All rights reserved.
//

#import "BaseViewController.h"

#define REDPACKET_SEND_THIRD_STORYBOARD_ID @"REDPACKET_SEND_THIRD_ID"

@interface YYRedPacketSendThirdViewController : BaseViewController

@property (nonatomic, strong) YYRedPacketDetailModel *model;
@property (nonatomic, strong) NSMutableArray *ethWalletsArray;

@end
