//
//  CalculatorViewController.h
//  Calculator
//
//  Created by  on 6/8/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalculatorViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *display;
@property (weak, nonatomic) IBOutlet UILabel *programdisplay;

- (IBAction)digitPressed:(UIButton *)sender;

- (IBAction)enterPressed;

- (IBAction)clearPressed;

- (IBAction)operationPressed:(UIButton *)sender;

@end
