//
//  RESTEngine.h
//  AVT Underground
//
//  Created by paul on 3/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASINetworkQueue.h"

@interface RESTEngine : NSObject {
    id delegate;
}

+ (RESTEngine*) sharedInstance;
@property (nonatomic, retain) ASINetworkQueue *networkQueue;
@property (nonatomic, retain) id delegate;
@end
