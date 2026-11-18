// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// StaticClass @ 147d5ae70

UClass * __cdecl UBlueprintPlatformLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintPlatformLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintPlatformLibrary",
               &Z_Registration_Info_UClass_UBlueprintPlatformLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintPlatformLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintPlatformLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintPlatformLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintPlatformLibrary.InnerSingleton;
}

// UBlueprintPlatformLibrary @ 147d796f0

UBlueprintPlatformLibrary * __thiscall
UBlueprintPlatformLibrary::UBlueprintPlatformLibrary
          (UBlueprintPlatformLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintPlatformLibrary__6B_;
  return this;
}

// UBlueprintPlatformLibrary @ 147d79720

UBlueprintPlatformLibrary * __thiscall
UBlueprintPlatformLibrary::UBlueprintPlatformLibrary
          (UBlueprintPlatformLibrary *this,FObjectInitializer *param_1)

{
  FName FVar1;
  int iVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  IModuleInterface *pIVar4;
  ForAnyElementType FVar5;
  FName local_res8;
  FString local_18;
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UBlueprintPlatformLibrary__6B_;
  if (platformService == (ILocalNotificationService *)0x0) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    FConfigCacheIni::GetString
              (GConfig,L"LocalNotification",L"DefaultPlatformService",&local_18,&GEngineIni);
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    if (0 < iVar2) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar5.Data = local_18.Data.AllocatorInstance.Data;
      }
      pFVar3 = ::FName::FName(&local_res8,(wchar_t *)FVar5.Data);
      FVar1 = *pFVar3;
      this_00 = FModuleManager::Get();
      pIVar4 = FModuleManager::LoadModule(this_00,FVar1,None);
      if (pIVar4 != (IModuleInterface *)0x0) {
        platformService =
             (ILocalNotificationService *)(**(code **)((longlong)*pIVar4 + 0x40))(pIVar4);
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~UBlueprintPlatformLibrary @ 147d7b990

void __thiscall
UBlueprintPlatformLibrary::~UBlueprintPlatformLibrary(UBlueprintPlatformLibrary *this)

{
  *(undefined ***)this = &___7UBlueprintPlatformLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CancelLocalNotification @ 147d8c650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlueprintPlatformLibrary::CancelLocalNotification(FString *param_1)

{
  if (platformService != (ILocalNotificationService *)0x0) {
    if (4 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
                    /* WARNING: Could not recover jumptable at 0x000147d8c6c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*platformService + 0x30))(platformService,param_1);
    return;
  }
  if (2 < (byte)LogBlueprintUserMessages._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages);
    return;
  }
  return;
}

// CancelLocalNotificationById @ 147d8c6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlueprintPlatformLibrary::CancelLocalNotificationById(int param_1)

{
  if (platformService != (ILocalNotificationService *)0x0) {
    if (4 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
                    /* WARNING: Could not recover jumptable at 0x000147d8c745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*platformService + 0x28))(platformService,param_1);
    return;
  }
  if (2 < (byte)LogBlueprintUserMessages._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages);
    return;
  }
  return;
}

// ClearAllLocalNotifications @ 147d8e520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UBlueprintPlatformLibrary::ClearAllLocalNotifications(void)

{
  if (platformService != (ILocalNotificationService *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147d8e54b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*platformService)();
    return;
  }
  if (2 < (byte)LogBlueprintUserMessages._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages);
    return;
  }
  return;
}

// ConvertToDeviceScreenOrientation @ 147d92b10

EDeviceScreenOrientation __cdecl
UBlueprintPlatformLibrary::ConvertToDeviceScreenOrientation(Type param_1)

{
  switch(param_1) {
  case Portrait:
    return Portrait;
  case PortraitUpsideDown:
    return PortraitUpsideDown;
  case LandscapeLeft:
    return LandscapeLeft;
  case LandscapeRight:
    return LandscapeRight;
  case FaceUp:
    return FaceUp;
  case FaceDown:
    return FaceDown;
  case PortraitSensor:
    return PortraitSensor;
  case LandscapeSensor:
    return LandscapeSensor;
  case FullSensor:
    return FullSensor;
  default:
    return Unknown;
  }
}

// ConvertToScreenOrientation @ 147d92c10

Type __cdecl UBlueprintPlatformLibrary::ConvertToScreenOrientation(EDeviceScreenOrientation param_1)

{
  switch(param_1) {
  case Portrait:
    return Portrait;
  case PortraitUpsideDown:
    return PortraitUpsideDown;
  case LandscapeLeft:
    return LandscapeLeft;
  case LandscapeRight:
    return LandscapeRight;
  case FaceUp:
    return FaceUp;
  case FaceDown:
    return FaceDown;
  case PortraitSensor:
    return PortraitSensor;
  case LandscapeSensor:
    return LandscapeSensor;
  case FullSensor:
    return FullSensor;
  default:
    return Unknown;
  }
}

// GetAllowedDeviceOrientation @ 147da3ea0

Type __cdecl UBlueprintPlatformLibrary::GetAllowedDeviceOrientation(void)

{
  EDeviceScreenOrientation EVar1;
  Type TVar2;
  
  EVar1 = FGenericPlatformMisc::GetAllowedDeviceOrientation();
  TVar2 = ConvertToScreenOrientation(EVar1);
  return TVar2;
}

// GetDeviceOrientation @ 147da5740

Type __cdecl UBlueprintPlatformLibrary::GetDeviceOrientation(void)

{
  EDeviceScreenOrientation EVar1;
  Type TVar2;
  
  EVar1 = FGenericPlatformMisc::GetDeviceOrientation();
  TVar2 = ConvertToScreenOrientation(EVar1);
  return TVar2;
}

// GetLaunchNotification @ 147da6450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintPlatformLibrary::GetLaunchNotification(bool *param_1,FString *param_2,int *param_3)

{
  if (platformService != (ILocalNotificationService *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147da6487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*platformService + 0x20))(platformService,param_1,param_2,param_3);
    return;
  }
  if (2 < (byte)LogBlueprintUserMessages._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages);
    return;
  }
  return;
}

// GetPrivateStaticClass @ 147da7a20

UClass * __cdecl UBlueprintPlatformLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintPlatformLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"BlueprintPlatformLibrary",
               &Z_Registration_Info_UClass_UBlueprintPlatformLibrary.InnerSingleton,
               StaticRegisterNativesUBlueprintPlatformLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlueprintPlatformLibrary>,
               InternalVTableHelperCtorCaller<UBlueprintPlatformLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintPlatformLibrary.InnerSingleton;
}

// ScheduleLocalNotificationAtTime @ 147dbea90

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UBlueprintPlatformLibrary::ScheduleLocalNotificationAtTime
          (FDateTime *param_1,bool param_2,FText *param_3,FText *param_4,FText *param_5,
          FString *param_6)

{
  int iVar1;
  
  if (platformService == (ILocalNotificationService *)0x0) {
    if (2 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
    return -1;
  }
  if (4 < (byte)LogBlueprintUserMessages._0_1_) {
    FDateTime::GetYear(param_1);
    FDateTime::GetDay(param_1);
    FDateTime::GetMonth(param_1);
    FText::ToString(param_3);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages);
  }
  iVar1 = (**(code **)((longlong)*platformService + 8))
                    (platformService,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1;
}

// ScheduleLocalNotificationBadgeAtTime @ 147dbecc0

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeAtTime
          (FDateTime *param_1,bool param_2,FString *param_3)

{
  int iVar1;
  
  if (platformService == (ILocalNotificationService *)0x0) {
    if (2 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
    return -1;
  }
  if (4 < (byte)LogBlueprintUserMessages._0_1_) {
    FDateTime::GetYear(param_1);
    FDateTime::GetDay(param_1);
    FDateTime::GetMonth(param_1);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages);
  }
                    /* WARNING: Could not recover jumptable at 0x000147dbeeab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*platformService + 0x18))(platformService,param_1,param_2,param_3);
  return iVar1;
}

// ScheduleLocalNotificationBadgeFromNow @ 147dbeec0

void __cdecl
UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeFromNow(int param_1,FString *param_2)

{
  undefined1 extraout_XMM0 [16];
  undefined1 auVar1 [16];
  FDateTime local_res18 [2];
  
  FDateTime::Now();
  auVar1._0_8_ = (double)param_1 * __real_416312d000000000 + __real_3fe0000000000000;
  auVar1._8_8_ = 0;
  auVar1 = roundpd(extraout_XMM0,auVar1,1);
  local_res18[0].Ticks = local_res18[0].Ticks + (longlong)auVar1._0_8_;
  ScheduleLocalNotificationBadgeAtTime(local_res18,true,param_2);
  return;
}

// ScheduleLocalNotificationFromNow @ 147dbef30

int __cdecl
UBlueprintPlatformLibrary::ScheduleLocalNotificationFromNow
          (int param_1,FText *param_2,FText *param_3,FText *param_4,FString *param_5)

{
  int iVar1;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar2 [16];
  FDateTime local_18 [2];
  
  FDateTime::Now();
  auVar2._0_8_ = (double)param_1 * __real_416312d000000000 + __real_3fe0000000000000;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(extraout_XMM0,auVar2,1);
  local_18[0].Ticks = local_18[0].Ticks + (longlong)auVar2._0_8_;
  iVar1 = ScheduleLocalNotificationAtTime(local_18,true,param_2,param_3,param_4,param_5);
  return iVar1;
}

// SetAllowedDeviceOrientation @ 147dbf120

void __cdecl UBlueprintPlatformLibrary::SetAllowedDeviceOrientation(Type param_1)

{
  switch(param_1) {
  case Portrait:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(Portrait);
    return;
  case PortraitUpsideDown:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(PortraitUpsideDown);
    return;
  case LandscapeLeft:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(LandscapeLeft);
    return;
  case LandscapeRight:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(LandscapeRight);
    return;
  case FaceUp:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(FaceUp);
    return;
  case FaceDown:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(FaceDown);
    return;
  case PortraitSensor:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(PortraitSensor);
    return;
  case LandscapeSensor:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(LandscapeSensor);
    return;
  case FullSensor:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(FullSensor);
    return;
  default:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(Unknown);
    return;
  }
}

// StaticRegisterNativesUBlueprintPlatformLibrary @ 147dc4020

void __cdecl UBlueprintPlatformLibrary::StaticRegisterNativesUBlueprintPlatformLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintPlatformLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCancelLocalNotification @ 147dd9d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintPlatformLibrary::execCancelLocalNotification
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (platformService == (ILocalNotificationService *)0x0) {
    if (2 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
  }
  else {
    if (4 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
    (**(code **)((longlong)*platformService + 0x30))(platformService,&local_18);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execCancelLocalNotificationById @ 147dd9e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintPlatformLibrary::execCancelLocalNotificationById
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined4 local_res10 [6];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (platformService == (ILocalNotificationService *)0x0) {
    if (2 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
      return;
    }
  }
  else {
    if (4 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
    (**(code **)((longlong)*platformService + 0x28))(platformService,uVar2);
  }
  return;
}

// execClearAllLocalNotifications @ 147ddef70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintPlatformLibrary::execClearAllLocalNotifications
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (platformService != (ILocalNotificationService *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ddefae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*platformService)();
    return;
  }
  if (2 < (byte)LogBlueprintUserMessages._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages);
    return;
  }
  return;
}

// execGetAllowedDeviceOrientation @ 147df7140

void __cdecl
UBlueprintPlatformLibrary::execGetAllowedDeviceOrientation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  EDeviceScreenOrientation EVar1;
  Type TVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = FGenericPlatformMisc::GetAllowedDeviceOrientation();
  TVar2 = ConvertToScreenOrientation(EVar1);
  *(char *)param_3 = (char)TVar2;
  return;
}

// execGetDeviceOrientation @ 147df9b40

void __cdecl
UBlueprintPlatformLibrary::execGetDeviceOrientation(UObject *param_1,FFrame *param_2,void *param_3)

{
  EDeviceScreenOrientation EVar1;
  Type TVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = FGenericPlatformMisc::GetDeviceOrientation();
  TVar2 = ConvertToScreenOrientation(EVar1);
  *(char *)param_3 = (char)TVar2;
  return;
}

// execGetLaunchNotification @ 147dfb280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintPlatformLibrary::execGetLaunchNotification(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  void **ppvVar2;
  FProperty *pFVar3;
  void **ppvVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res10 [16];
  uchar local_res20 [8];
  void *local_38;
  undefined8 local_30;
  
  local_res10[0] = '\0';
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  ppvVar4 = &local_38;
  if (ppvVar2 != (void **)0x0) {
    ppvVar4 = ppvVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar5 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (platformService == (ILocalNotificationService *)0x0) {
    if (2 < (byte)LogBlueprintUserMessages._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlueprintUserMessages)
      ;
    }
  }
  else {
    (**(code **)((longlong)*platformService + 0x20))(platformService,puVar6,ppvVar4,puVar5);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execScheduleLocalNotificationAtTime @ 147e2c4b0

void __cdecl
UBlueprintPlatformLibrary::execScheduleLocalNotificationAtTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FText *pFVar3;
  FDateTime *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  bool bVar7;
  int local_res10 [2];
  int *local_res18;
  FDateTime local_res20;
  FString local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  
  local_res20.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_res18 = param_3;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  pFVar4 = &local_res20;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar4 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  FText::FText(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar6 = &local_48;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar6 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar5 = &local_58;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar5 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pFVar3 = &local_68;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = ScheduleLocalNotificationAtTime(pFVar4,bVar7,pFVar6,pFVar5,pFVar3,&local_78);
  *local_res18 = iVar2;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// execScheduleLocalNotificationBadgeAtTime @ 147e2c730

void __cdecl
UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeAtTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FDateTime *pFVar3;
  bool bVar4;
  int local_res10 [2];
  FDateTime local_res18;
  FString local_28;
  
  local_res18.Ticks = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  pFVar3 = &local_res18;
  if ((FDateTime *)param_2->MostRecentPropertyAddress != (FDateTime *)0x0) {
    pFVar3 = (FDateTime *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = ScheduleLocalNotificationBadgeAtTime(pFVar3,bVar4,&local_28);
  *(int *)param_3 = iVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execScheduleLocalNotificationBadgeFromNow @ 147e2c880

void __cdecl
UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeFromNow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar3 [16];
  int local_res10 [4];
  FDateTime local_res20;
  FString local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FDateTime::Now();
  auVar3._0_8_ = (double)iVar2 * __real_416312d000000000 + __real_3fe0000000000000;
  auVar3._8_8_ = 0;
  auVar3 = roundpd(extraout_XMM0,auVar3,1);
  local_res20.Ticks = local_res20.Ticks + (longlong)auVar3._0_8_;
  ScheduleLocalNotificationBadgeAtTime(&local_res20,true,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execScheduleLocalNotificationFromNow @ 147e2c990

void __cdecl
UBlueprintPlatformLibrary::execScheduleLocalNotificationFromNow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FText *pFVar3;
  FText *pFVar4;
  FText *pFVar5;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar6 [16];
  int local_res10 [2];
  FDateTime local_res18;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FText::FText(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pFVar5 = &local_38;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar5 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar4 = &local_48;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar4 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  pFVar3 = &local_58;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar3 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FDateTime::Now();
  auVar6._0_8_ = (double)iVar2 * __real_416312d000000000 + __real_3fe0000000000000;
  auVar6._8_8_ = 0;
  auVar6 = roundpd(extraout_XMM0,auVar6,1);
  local_res18.Ticks = local_res18.Ticks + (longlong)auVar6._0_8_;
  iVar2 = ScheduleLocalNotificationAtTime(&local_res18,true,pFVar5,pFVar4,pFVar3,&local_68);
  *(int *)param_3 = iVar2;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execSetAllowedDeviceOrientation @ 147e2dd50

void __cdecl
UBlueprintPlatformLibrary::execSetAllowedDeviceOrientation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res10 [24];
  
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  switch(local_res10[0]) {
  case 1:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(Portrait);
    return;
  case 2:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(PortraitUpsideDown);
    return;
  case 3:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(LandscapeLeft);
    return;
  case 4:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(LandscapeRight);
    return;
  case 5:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(FaceUp);
    return;
  case 6:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(FaceDown);
    return;
  case 7:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(PortraitSensor);
    return;
  case 8:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(LandscapeSensor);
    return;
  case 9:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(FullSensor);
    return;
  default:
    FGenericPlatformMisc::SetAllowedDeviceOrientation(Unknown);
    return;
  }
}

