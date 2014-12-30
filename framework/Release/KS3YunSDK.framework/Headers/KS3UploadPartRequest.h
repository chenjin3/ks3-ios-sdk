//
//  KSS3UploadPartRequest.h
//  KS3SDK
//
//  Created by JackWong on 12/15/14.
//  Copyright (c) 2014 kingsoft. All rights reserved.
//

#import "KS3Request.h"
#import "KS3MultipartUpload.h"
@interface KS3UploadPartRequest : KS3Request

@property (nonatomic, strong) NSString *key;

@property (nonatomic, assign) int32_t partNumber;

@property (nonatomic, assign) BOOL generateMD5;

@property (nonatomic, strong) NSString *uploadId;

@property (nonatomic, strong) NSData *data;


- (id)initWithMultipartUpload:(KS3MultipartUpload *)multipartUpload;

@end
