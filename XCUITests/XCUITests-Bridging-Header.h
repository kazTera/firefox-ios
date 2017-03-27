//
//  XCUITests-Bridging-Header.h
//  Client
//
//  Created by mozilla on 3/30/17.
//  Copyright © 2017 Mozilla. All rights reserved.
//

#ifndef XCUITests_Bridging_Header_h
#define XCUITests_Bridging_Header_h

#import "XCTest/XCUIApplication.h"
#import "XCTest/XCUIElement.h"
@interface XCUIApplication (Private)
- (id)initPrivateWithPath:(NSString *)path bundleID:(NSString *)bundleID;
@end

#endif /* XCUITests_Bridging_Header_h */
