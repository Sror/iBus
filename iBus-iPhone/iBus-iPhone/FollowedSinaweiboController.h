//
//  FollowedSinaweiboController.h
//  iBus-iPhone
//
//  Created by yanghua on 6/22/13.
//  Copyright (c) 2013 yanghua. All rights reserved.
//

#import "ELTableViewController.h"
#import "SinaWeibo.h"
#import "SNSApiOAuthConst.h"

@protocol SinaWeiboRequestDelegate;

@interface FollowedSinaweiboController : ELTableViewController
<
SinaWeiboRequestDelegate,
SinaWeiboDelegate
>

@property (nonatomic,retain) NSMutableDictionary    *userGroupedDictionary;
@property (nonatomic,retain) NSMutableArray         *allIndexCharacter;

- (void)handleDataSourceAndGenerateGroupedUserSet;

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

- (id)initWithRefreshHeaderViewEnabled:(BOOL)enableRefreshHeaderView
          andLoadMoreFooterViewEnabled:(BOOL)enableLoadMoreFooterView
                     andTableViewFrame:(CGRect)frame;

@end
