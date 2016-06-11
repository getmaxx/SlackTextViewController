//
//  SLKTextView+KGAttachments.h
//  SlackTextViewController
//
//  Created by Igor Vedeneev on 11.06.16.
//  Copyright © 2016 Slack Technologies, Inc. All rights reserved.
//

#import <SlackTextViewController/SlackTextViewController.h>

@interface SLKTextView (KGAttachments)

- (void)slk_insertImage:(UIImage *)image roundedCorners:(BOOL)roundedCorners;
- (BOOL)slk_hasImageAttachment;

@end
