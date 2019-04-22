//
//  WTCrashReportCustomFields.h
//  KSCrash-iOS
//
//  Created by yuanjilee on 2019/4/22.
//  Copyright © 2019 Karl Stenerud. All rights reserved.
//

#ifndef WTCrashReportCustomFields_h
#define WTCrashReportCustomFields_h


#pragma mark - Report -

#define WTCrashField_ID                    "application_id"   //-- 应用程序Id
#define WTSDK_Version                      "sdk_version" //-- sdk版本
#define WTCrashField_BundleVersion         "application_version"  //-- 应用程序版本
#define WTTitle                            "title" //-- 标题
#define WTOccur_At                         "occur_at"  //--发生时间

#pragma mark - Addition -

#define WTaddition         "addition"  //-- 不同平台的附加信息
#define WTData  "data"
#define WTPhone_Model  "phone_model"
#define WTSystem_Version "system_version"
#define WTCpu_Architecture "cpu_architecture"
#define WTScreen_Direction "screen_direction"
#define WTStorage "storage"
#define WTMemory  "memory"
#define WTBattery "battery"
#define WTNetwork "network"
#define WTApplication_Packages "application_packages"
#define WTBundle_id "bundle_id"
#define WTThread_or_Process "thread_or_process"
#define WTFront_End "front_end"
#define WTDuration_Performance  "duration_performance"
#define WTPlatform "platform"

#pragma mark - Crash -

#define WTStack_Info "stack_info"
#define WTSTACK_name "name"
#define WTIs_Crash "is_crash"
#define WTOriginal_Infos "original_infos"
#define WTStack_Address "address"
#define WTName "name"
#define WTStack_Description "description"


#endif /* WTCrashReportCustomFields_h */
