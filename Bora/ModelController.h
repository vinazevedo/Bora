//
//  ModelController.h
//  Bora
//
//  Created by Vinicius da Silva Azevedo on 17/03/14.
//  Copyright (c) 2014 Vinicius da Silva Azevedo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
