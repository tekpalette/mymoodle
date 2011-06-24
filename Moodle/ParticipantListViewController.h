//
//  ParticipantListViewController.h
//  Moodle
//
//  Created by jerome Mouneyrac on 14/04/11.
//  Copyright 2011 Moodle. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"
#import "EGORefreshTableHeaderView.h"
#import "AppDelegate.h"
#import "MBProgressHUD.h"


@interface ParticipantListViewController : UITableViewController <NSFetchedResultsControllerDelegate, EGORefreshTableHeaderDelegate, MBProgressHUDDelegate> {
    AppDelegate *appDelegate;
    NSManagedObject *course;
    AppDelegate *appDelegte;
    DetailViewController *participantViewController;
    NSManagedObjectContext *managedObjectContext;
    EGORefreshTableHeaderView *_refreshHeaderView;
	BOOL _reloading;
    MBProgressHUD *HUD;
}
- (void) updateParticipants;
@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObject *course;
@property (nonatomic, retain) DetailViewController *detailViewController;

@end
