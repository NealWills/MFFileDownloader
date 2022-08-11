//
//  MFFileDownloader.h
//  MFFileDownloader
//
//  Created by Administer on 2022/8/10.
//

#import <Foundation/Foundation.h>
#import "MFFileDownloaderHeader.h"

NS_ASSUME_NONNULL_BEGIN

@interface MFFileDownloader : NSObject

+ (void)addDownloadUrl:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
