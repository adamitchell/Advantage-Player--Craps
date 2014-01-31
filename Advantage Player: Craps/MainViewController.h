//
//  MainViewController.h
//  Advantage Player: Craps
//
//  Created by Adam Mitchell on 1/23/14.
//  Copyright (c) 2014 IXLabs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ixlPlayerProfile.h"
#import "AppDelegate.h"

@interface MainViewController : UIViewController{
    ixlPlayerProfile *newProfile;
    NSMutableArray *playerProfileArray;
}

////////These are for LOG and EDIT buttons///////
- (IBAction)logDictionary:(id)sender;
- (IBAction)editDictionary:(id)sender;
/////////////////////////////////////////////////


@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet UILabel *labelFavNumber;
@property (nonatomic, retain) IBOutlet UITextField *textNumber;
@property (nonatomic, retain) IBOutlet UIButton *buttonSubmit;
@property (nonatomic, retain) IBOutlet UILabel *currentArray;
@property (nonatomic, retain) IBOutlet NSMutableArray *playerProfileArray;

@end
