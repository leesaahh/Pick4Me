//
//  LLChoiceOptionTableViewCell.h
//  VerCan'tPick
//
//  Created by Flatiron School on 6/22/16.
//  Copyright © 2016 Lisa Lee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LLChoiceOptionTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *choiceNameLabel
;

@property (weak, nonatomic) IBOutlet UISwitch *isOnSwitch;

@end
