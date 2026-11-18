// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 19

// CancelRequestRemoveContentOnNextInit @ 148bc6230

void __thiscall
IInstallBundleManager::CancelRequestRemoveContentOnNextInit
          (IInstallBundleManager *this,FName param_1)

{
  FName local_res10 [3];
  FName *local_18;
  undefined4 uStack_10;
  
  local_18 = local_res10;
  uStack_10 = 1;
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this + 0xd0))(local_18._0_4_,&local_18);
  return;
}

// CancelUpdateContent @ 148bc6270

void __thiscall
IInstallBundleManager::CancelUpdateContent(IInstallBundleManager *this,FName param_1)

{
  FName local_res10 [3];
  FName *local_18;
  undefined4 uStack_10;
  
  local_18 = local_res10;
  uStack_10 = 1;
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this + 0xe0))(local_18._0_4_,&local_18);
  return;
}

// CopyReportTo @ 148bc6df0

bool __thiscall
IInstallBundleManager::CopyReportTo
          (IInstallBundleManager *this,FInstallManagerBundleReport *param_1)

{
  return false;
}

// FlushCache @ 148bc9af0

/* WARNING: Enum "Type": Some values do not have unique names */

EInstallBundleResult __thiscall
IInstallBundleManager::FlushCache
          (IInstallBundleManager *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1,Type param_2)

{
  code *pcVar1;
  EInstallBundleResult EVar2;
  TDelegateBase<FNotThreadSafeDelegateMode> local_38;
  undefined1 local_20 [16];
  undefined1 local_10;
  
  pcVar1 = *(code **)(*(longlong *)this + 0xa0);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_38,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  local_10 = 0xff;
  EVar2 = (*pcVar1)(this,local_20,&local_38,param_2);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return EVar2;
}

// GetBundleSource @ 148bca950

TSharedPtr<IInstallBundleSource,1> * __thiscall
IInstallBundleManager::GetBundleSource
          (IInstallBundleManager *this,TSharedPtr<IInstallBundleSource,1> *__return_storage_ptr__,
          FInstallBundleSourceType *param_1)

{
  __return_storage_ptr__->Object = (IInstallBundleSource *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCacheStats @ 148bca980

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FInstallBundleCacheStats> * __thiscall
IInstallBundleManager::GetCacheStats
          (IInstallBundleManager *this,TOptional<FInstallBundleCacheStats> *__return_storage_ptr__,
          TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *param_1,
          EInstallBundleCacheDumpToLog param_2,Type param_3)

{
  uchar uVar1;
  code *pcVar2;
  TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> *pTVar3;
  byte bVar4;
  bool bVar5;
  TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull> local_48;
  
  bVar4 = 0;
  if (param_2 == Default) {
LAB_148bca9b6:
    bVar4 = bVar4 | 1;
  }
  else if (param_2 == CSV) {
    bVar4 = 2;
    goto LAB_148bca9b6;
  }
  pcVar2 = *(code **)(*(longlong *)this + 0xa8);
  pTVar3 = TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull>::
           TUnion<FInstallBundleSourceType,FName,FNull,FNull,FNull,FNull>(&local_48,param_1);
  (*pcVar2)(this,__return_storage_ptr__,pTVar3,bVar4,param_3);
  uVar1 = param_1->CurrentSubtypeIndex;
  switch(uVar1) {
  case '\0':
    bVar5 = uVar1 == '\0';
    break;
  case '\x01':
    bVar5 = uVar1 == '\x01';
    break;
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
    bVar5 = uVar1 == '\x02';
    break;
  default:
    goto switchD_148bcaa00_default;
  }
  if (bVar5) {
    param_1->CurrentSubtypeIndex = 0xff;
  }
switchD_148bcaa00_default:
  return __return_storage_ptr__;
}

// GetCacheStats @ 148bcaa50

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FInstallBundleCacheStats,TSizedDefaultAllocator<32>_> * __thiscall
IInstallBundleManager::GetCacheStats
          (IInstallBundleManager *this,
          TArray<FInstallBundleCacheStats,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EInstallBundleCacheDumpToLog param_1,Type param_2)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_1 != Default) {
    if (param_1 != CSV) goto LAB_148bcaa73;
    bVar1 = 2;
  }
  bVar1 = bVar1 | 1;
LAB_148bcaa73:
  (**(code **)(*(longlong *)this + 0xb0))(this,__return_storage_ptr__,bVar1);
  return __return_storage_ptr__;
}

// GetContentState @ 148bcb040

FDelegateHandle __thiscall
IInstallBundleManager::GetContentState
          (IInstallBundleManager *this,FName param_1,EInstallBundleGetContentStateFlags param_2,
          bool param_3,
          TDelegate<void___cdecl(FInstallBundleCombinedContentState),FDefaultDelegateUserPolicy>
          *param_4,FName param_5)

{
  code *pcVar1;
  undefined4 in_register_00000084;
  undefined7 in_register_00000089;
  undefined8 local_res18;
  undefined8 in_stack_00000038;
  undefined8 *local_38;
  undefined4 uStack_30;
  TDelegateBase<FNotThreadSafeDelegateMode> local_28;
  
  local_res18 = CONCAT44(in_register_00000084,param_2);
  pcVar1 = *(code **)(*(longlong *)this + 0x60);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_28,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  local_38 = &local_res18;
  uStack_30 = 1;
  (*pcVar1)(this,param_1,&local_38,CONCAT71(in_register_00000089,param_3) & 0xffffffff,param_4._0_1_
            ,&local_28,in_stack_00000038);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_5);
  return (FDelegateHandle)param_1;
}

// GetInstallState @ 148bcb7d0

FDelegateHandle __thiscall
IInstallBundleManager::GetInstallState
          (IInstallBundleManager *this,FName param_1,bool param_2,
          TDelegate<void___cdecl(FInstallBundleCombinedInstallState),FDefaultDelegateUserPolicy>
          *param_3,FName param_4)

{
  code *pcVar1;
  undefined7 in_register_00000081;
  undefined8 local_res18;
  undefined8 in_stack_00000030;
  undefined8 *local_38;
  undefined4 uStack_30;
  TDelegateBase<FNotThreadSafeDelegateMode> local_28;
  
  local_res18 = CONCAT71(in_register_00000081,param_2);
  pcVar1 = *(code **)(*(longlong *)this + 0x78);
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_28,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  local_38 = &local_res18;
  uStack_30 = 1;
  (*pcVar1)(this,param_1,&local_38,(ulonglong)param_3 & 0xff,&local_28,in_stack_00000030);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_4);
  return (FDelegateHandle)param_1;
}

// GetInstallStateSynchronous @ 148bcb890

TValueOrError<FInstallBundleCombinedInstallState,EInstallBundleResult> * __thiscall
IInstallBundleManager::GetInstallStateSynchronous
          (IInstallBundleManager *this,
          TValueOrError<FInstallBundleCombinedInstallState,EInstallBundleResult>
          *__return_storage_ptr__,FName param_1,bool param_2)

{
  FName local_res18 [2];
  FName *local_18;
  undefined4 uStack_10;
  
  local_18 = local_res18;
  uStack_10 = 1;
  local_res18[0] = param_1;
  (**(code **)(*(longlong *)this + 0x80))(local_18._0_4_,__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// GetPlatformInstallBundleManager @ 148bcc400

TSharedPtr<IInstallBundleManager,1> * __cdecl
IInstallBundleManager::GetPlatformInstallBundleManager
          (TSharedPtr<IInstallBundleManager,1> *__return_storage_ptr__)

{
  FName FVar1;
  IInstallBundleManagerModule *pIVar2;
  bool bVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  ForAnyElementType FVar7;
  FName local_res10;
  FString local_18;
  
  pIVar2 = Module;
  if (Module == (IInstallBundleManagerModule *)0x0) {
    if ((!bCheckedIni) && (1 < GEngineIni.Data.ArrayNum)) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      FConfigCacheIni::GetString
                (GConfig,L"InstallBundleManager",L"ModuleName",&local_18,&GEngineIni);
      pFVar4 = FModuleManager::Get();
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        FVar7.Data = local_18.Data.AllocatorInstance.Data;
      }
      bVar3 = FModuleManager::ModuleExists(pFVar4,(wchar_t *)FVar7.Data,(FString *)0x0);
      if (bVar3) {
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_18.Data.ArrayNum != 0) {
          FVar7.Data = local_18.Data.AllocatorInstance.Data;
        }
        pFVar5 = ::FName::FName(&local_res10,(wchar_t *)FVar7.Data);
        FVar1 = *pFVar5;
        pFVar4 = FModuleManager::Get();
        Module = (IInstallBundleManagerModule *)FModuleManager::LoadModule(pFVar4,FVar1,None);
      }
      bCheckedIni = true;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pIVar2 = Module;
    if (Module == (IInstallBundleManagerModule *)0x0) {
      __return_storage_ptr__->Object = (IInstallBundleManager *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = (Module->InstallBundleManager).Object;
    pTVar6 = (pIVar2->InstallBundleManager).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  }
  else {
    __return_storage_ptr__->Object = (Module->InstallBundleManager).Object;
    pTVar6 = (pIVar2->InstallBundleManager).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
  }
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    return __return_storage_ptr__;
  }
  LOCK();
  pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
  UNLOCK();
  return __return_storage_ptr__;
}

// PauseUpdateContent @ 148bd20e0

void __thiscall IInstallBundleManager::PauseUpdateContent(IInstallBundleManager *this,FName param_1)

{
  FName local_res10 [3];
  FName *local_18;
  undefined4 uStack_10;
  
  local_18 = local_res10;
  uStack_10 = 1;
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this + 0xe8))(local_18._0_4_,&local_18);
  return;
}

// RequestReleaseContent @ 148bd3b20

/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<FInstallBundleReleaseRequestInfo,EInstallBundleResult> * __thiscall
IInstallBundleManager::RequestReleaseContent
          (IInstallBundleManager *this,
          TValueOrError<FInstallBundleReleaseRequestInfo,EInstallBundleResult>
          *__return_storage_ptr__,FName param_1,EInstallBundleReleaseRequestFlags param_2,
          TArrayView<FName_const_,int> *param_3,Type param_4)

{
  FName local_res18 [2];
  FName *local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_28 = local_res18;
  uStack_20 = 1;
  local_18 = *(undefined4 *)&param_3->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iStack_10 = param_3->ArrayNum;
  uStack_c = *(undefined4 *)&param_3->field_0xc;
  local_res18[0] = param_1;
  (**(code **)(*(longlong *)this + 0x98))
            (local_18,local_28._0_4_,&local_28,param_2,&local_18,param_4);
  return __return_storage_ptr__;
}

// RequestRemoveContentOnNextInit @ 148bd3ba0

void __thiscall
IInstallBundleManager::RequestRemoveContentOnNextInit
          (IInstallBundleManager *this,FName param_1,TArrayView<FName_const_,int> *param_2)

{
  FName local_res10 [3];
  FName *local_28;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_2->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_2->DataPtr + 4);
  iStack_10 = param_2->ArrayNum;
  uStack_c = *(undefined4 *)&param_2->field_0xc;
  local_28 = local_res10;
  uStack_20 = 1;
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this + 200))(local_18,&local_28,&local_18);
  return;
}

// RequestUpdateContent @ 148bd3bf0

/* WARNING: Enum "EInstallBundleRequestFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<FInstallBundleRequestInfo,EInstallBundleResult> * __thiscall
IInstallBundleManager::RequestUpdateContent
          (IInstallBundleManager *this,
          TValueOrError<FInstallBundleRequestInfo,EInstallBundleResult> *__return_storage_ptr__,
          FName param_1,EInstallBundleRequestFlags param_2,Type param_3,
          TSharedPtr<InstallBundleUtil::FContentRequestSharedContext,1> *param_4)

{
  code *pcVar1;
  FName local_res18 [2];
  FName *local_28;
  undefined4 uStack_20;
  FContentRequestSharedContext *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pcVar1 = *(code **)(*(longlong *)this + 0x58);
  local_18 = param_4->Object;
  local_10 = (param_4->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28 = local_res18;
  uStack_20 = 1;
  local_res18[0] = param_1;
  (*pcVar1)(local_28._0_4_,__return_storage_ptr__,&local_28,param_2,param_3,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ResumeUpdateContent @ 148bd4440

void __thiscall
IInstallBundleManager::ResumeUpdateContent(IInstallBundleManager *this,FName param_1)

{
  FName local_res10 [3];
  FName *local_18;
  undefined4 uStack_10;
  
  local_18 = local_res10;
  uStack_10 = 1;
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this + 0xf0))(local_18._0_4_,&local_18);
  return;
}

// SetContext @ 148bd7c70

void __thiscall IInstallBundleManager::SetContext(IInstallBundleManager *this,FName param_1)

{
  return;
}

// StartPatchCheck @ 148bd9200

void __thiscall IInstallBundleManager::StartPatchCheck(IInstallBundleManager *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&PatchCheckCompleteDelegate,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  PatchCheckCompleteDelegate._28_4_ = PatchCheckCompleteDelegate._28_4_ + 1;
  uVar6 = PatchCheckCompleteDelegate._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)PatchCheckCompleteDelegate._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + PatchCheckCompleteDelegate._8_8_) == 0) ||
          (*(longlong **)(lVar7 + PatchCheckCompleteDelegate._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + PatchCheckCompleteDelegate._8_8_) + 0x68))(),
         cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  PatchCheckCompleteDelegate._28_4_ = PatchCheckCompleteDelegate._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&PatchCheckCompleteDelegate,
               false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// UpdateContentRequestFlags @ 148bde190

/* WARNING: Enum "EInstallBundleRequestFlags": Some values do not have unique names */

void __thiscall
IInstallBundleManager::UpdateContentRequestFlags
          (IInstallBundleManager *this,FName param_1,EInstallBundleRequestFlags param_2,
          EInstallBundleRequestFlags param_3)

{
  FName local_res10 [3];
  FName *local_18;
  undefined4 uStack_10;
  
  local_18 = local_res10;
  uStack_10 = 1;
  local_res10[0] = param_1;
  (**(code **)(*(longlong *)this + 0x110))(local_18._0_4_,&local_18);
  return;
}

