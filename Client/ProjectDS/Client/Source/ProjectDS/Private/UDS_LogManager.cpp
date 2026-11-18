// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4e4880

UClass * __cdecl UDS_LogManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LogManager",
               &Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton,
               StaticRegisterNativesUDS_LogManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LogManager>,InternalVTableHelperCtorCaller<UDS_LogManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton;
}

// UDS_LogManager @ 14b4e83b0

UDS_LogManager * __thiscall
UDS_LogManager::UDS_LogManager(UDS_LogManager *this,FVTableHelper *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->bEnable_DisplayLog = true;
  this->bEnable_WarningLog = true;
  this->_padding_ = (longlong)&___7UDS_LogManager__6B_;
  this->bEnable_ErrorLog = true;
  return this;
}

// UDS_LogManager @ 14b4e83f0

UDS_LogManager * __thiscall
UDS_LogManager::UDS_LogManager(UDS_LogManager *this,FObjectInitializer *param_1)

{
  UDS_ManagerBase::UDS_ManagerBase((UDS_ManagerBase *)this,param_1);
  this->bEnable_DisplayLog = true;
  this->bEnable_WarningLog = true;
  this->_padding_ = (longlong)&___7UDS_LogManager__6B_;
  this->bEnable_ErrorLog = true;
  return this;
}

// ~UDS_LogManager @ 14b4e96f0

void __thiscall UDS_LogManager::~UDS_LogManager(UDS_LogManager *this)

{
  this->_padding_ = (longlong)&___7UDS_LogManager__6B_;
  UDS_ManagerBase::~UDS_ManagerBase((UDS_ManagerBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb0b0

UClass * __cdecl UDS_LogManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LogManager",
               &Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton,
               StaticRegisterNativesUDS_LogManager,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LogManager>,InternalVTableHelperCtorCaller<UDS_LogManager>,
               local_res8,UDS_ManagerBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LogManager.InnerSingleton;
}

// StaticRegisterNativesUDS_LogManager @ 14b4ec0b0

void __cdecl UDS_LogManager::StaticRegisterNativesUDS_LogManager(void)

{
  return;
}

// Created @ 14bb01570

void __thiscall UDS_LogManager::Created(UDS_LogManager *this)

{
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

// Destroyed @ 14bb02ec0

void __thiscall UDS_LogManager::Destroyed(UDS_LogManager *this)

{
  return;
}

// GetInst @ 14bb0bb70

UDS_LogManager * __cdecl UDS_LogManager::GetInst(void)

{
  int iVar1;
  UDS_GameInstance *this;
  UClass *pUVar2;
  UDS_LogManager *pUVar3;
  
  this = UDS_GameInstance::GetInst();
  if (this == (UDS_GameInstance *)0x0) {
    return (UDS_LogManager *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UDS_LogManager_NoRegister();
  pUVar3 = (UDS_LogManager *)UDS_GameInstance::GetManager(this,(FName)pUVar2->_padding_);
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_LogManager_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
  }
  return (UDS_LogManager *)0x0;
}

// Init @ 14bb13820

void __thiscall UDS_LogManager::Init(UDS_LogManager *this)

{
  return;
}

// PrintLog @ 14bb28120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_LogManager::PrintLog
          (UDS_LogManager *this,int param_1,Type param_2,wchar_t *param_3,uint param_4,
          wchar_t *param_5)

{
  ulong64 *puVar1;
  bool bVar2;
  undefined1 auStackY_10b8 [32];
  int local_1068;
  int local_1064;
  int local_1060;
  int local_105c;
  int local_1058;
  int local_1054;
  int local_1050;
  int local_104c;
  FString local_1048;
  wchar_t local_1038 [2];
  undefined1 local_1034 [2044];
  undefined4 local_838;
  undefined1 local_834 [2044];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_10b8;
  if (param_2 == Error) {
    bVar2 = this->bEnable_ErrorLog == false;
  }
  else if (param_2 == Warning) {
    bVar2 = this->bEnable_WarningLog == false;
  }
  else {
    if (param_2 != Display) goto LAB_14bb2817f;
    bVar2 = this->bEnable_DisplayLog == false;
  }
  if (bVar2) {
    return;
  }
LAB_14bb2817f:
  local_838 = 0;
  memset(local_834,0,0x7fc);
  puVar1 = __local_stdio_printf_options();
  __stdio_common_vswprintf(*puVar1,&local_838,0x400,param_5);
  FWindowsPlatformTime::SystemTime
            (&local_104c,&local_1050,&local_1054,&local_1058,&local_105c,&local_1060,&local_1064,
             &local_1068);
  local_1038[0] = L'\0';
  local_1038[1] = L'\0';
  memset(local_1034,0,0x7fc);
  TCString<wchar_t>::SprintfImpl(local_1038,L"[%02d:%02d:%02d.%03d][%s %d] %s");
  if ((param_1 & 1U) != 0) {
    if (param_2 == Error) {
      if (1 < (byte)DS_CommonLog._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
      }
    }
    else if (param_2 == Warning) {
      if (2 < (byte)DS_CommonLog._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
      }
    }
    else if ((param_2 == Display) && (3 < (byte)DS_CommonLog._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
    }
  }
  if ((param_1 & 2U) != 0) {
    ::FString::FString(&local_1048,local_1038);
    UEngine::AddOnScreenDebugMessage
              (GEngine,-1,__real_40a00000,FColor::Yellow,&local_1048,true,
               &UE::Math::TVector2<double>::UnitVector);
    if (local_1048.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1048.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1 & 4U) != 0) {
    if (param_2 == Error) {
      if (1 < (byte)DS_LogNetwork._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&DS_LogNetwork);
      }
    }
    else if (param_2 == Warning) {
      if (2 < (byte)DS_LogNetwork._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_LogNetwork);
      }
    }
    else if ((param_2 == Display) && (3 < (byte)DS_LogNetwork._0_1_)) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&DS_LogNetwork);
    }
  }
  return;
}

// PrintSimpleLog @ 14bb28400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_LogManager::PrintSimpleLog(UDS_LogManager *this,wchar_t *param_1)

{
  ulong64 *puVar1;
  undefined1 local_res18 [16];
  undefined1 auStack_858 [32];
  undefined8 local_838;
  undefined1 *local_830;
  undefined4 local_828;
  undefined1 local_824 [2044];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_858;
  local_828 = 0;
  memset(local_824,0,0x7fc);
  puVar1 = __local_stdio_printf_options();
  local_838 = 0;
  local_830 = local_res18;
  __stdio_common_vswprintf(*puVar1,&local_828,0x400,param_1);
  if (2 < (byte)DS_CommonLog._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&DS_CommonLog);
  }
  return;
}

// Update @ 14bb3f050

void __thiscall UDS_LogManager::Update(UDS_LogManager *this,float *param_1)

{
  return;
}

