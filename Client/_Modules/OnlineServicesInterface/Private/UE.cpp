// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 86

// BuildFlagsFromArray<enum_UE::Online::ESchemaAttributeFlags> @ 14ec1d7f0

ESchemaAttributeFlags __cdecl
UE::Online::`anonymous_namespace'::BuildFlagsFromArray<enum_UE::Online::ESchemaAttributeFlags>
          (TArray<UE::Online::ESchemaAttributeFlags,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ESchemaAttributeFlags EVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  EVar4 = None;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_UE::Online::ESchemaAttributeFlags_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    EVar4 = EVar4 | (byte)*pFVar3;
    pFVar3 = pFVar3 + 1;
  }
  return EVar4;
}

// BuildFlagsFromArray<enum_UE::Online::ESchemaServiceAttributeFlags> @ 14ec1d850

ESchemaServiceAttributeFlags __cdecl
UE::Online::`anonymous_namespace'::
BuildFlagsFromArray<enum_UE::Online::ESchemaServiceAttributeFlags>
          (TArray<UE::Online::ESchemaServiceAttributeFlags,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ESchemaServiceAttributeFlags EVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  EVar4 = None;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_UE::Online::ESchemaServiceAttributeFlags_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    EVar4 = EVar4 | (byte)*pFVar3;
    pFVar3 = pFVar3 + 1;
  }
  return EVar4;
}

// BuildFlagsFromArray<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags> @ 14ec1d8b0

ESchemaServiceAttributeSupportedTypeFlags __cdecl
UE::Online::`anonymous_namespace'::
BuildFlagsFromArray<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags>
          (TArray<UE::Online::ESchemaServiceAttributeSupportedTypeFlags,TSizedDefaultAllocator<32>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ESchemaServiceAttributeSupportedTypeFlags EVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  EVar4 = None;
  pFVar1 = pFVar3 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    EVar4 = EVar4 | (byte)*pFVar3;
    pFVar3 = pFVar3 + 1;
  }
  return EVar4;
}

// operator== @ 14ec246b0

bool __cdecl
UE::Online::operator==(FAchievementStateUpdated *param_1,FAchievementStateUpdated *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (((param_1->LocalAccountId).Value == (param_2->LocalAccountId).Value) &&
     (iVar1 = (param_1->AchievementIds).ArrayNum, iVar1 == (param_2->AchievementIds).ArrayNum)) {
    bVar2 = CompareItems<FString,int>
                      ((FString *)(param_1->AchievementIds).AllocatorInstance.Data,
                       (FString *)(param_2->AchievementIds).AllocatorInstance.Data,iVar1);
    if (bVar2) {
      return true;
    }
  }
  return false;
}

// operator== @ 14ec246f0

bool __cdecl UE::Online::operator==(FOnlineError *param_1,FOnlineError *param_2)

{
  FOnlineError *pFVar1;
  
  if (param_1 != (FOnlineError *)0x0) {
    do {
      if (param_2->ErrorCode == param_1->ErrorCode) {
        return true;
      }
      for (pFVar1 = (param_2->Inner).Object; pFVar1 != (FOnlineError *)0x0;
          pFVar1 = (pFVar1->Inner).Object) {
        if (pFVar1->ErrorCode == param_1->ErrorCode) {
          return true;
        }
      }
      param_1 = (param_1->Inner).Object;
    } while (param_1 != (FOnlineError *)0x0);
  }
  return false;
}

// operator== @ 14ec24740

bool __cdecl UE::Online::operator==(FOnlineError *param_1,ulong64 param_2)

{
  FOnlineError *pFVar1;
  
  if (param_1->ErrorCode != param_2) {
    pFVar1 = (param_1->Inner).Object;
    while( true ) {
      if (pFVar1 == (FOnlineError *)0x0) {
        return false;
      }
      if (pFVar1->ErrorCode == param_2) break;
      pFVar1 = (pFVar1->Inner).Object;
    }
  }
  return true;
}

// DestroyAllNamedServices @ 14ec26a90

void __cdecl UE::Online::DestroyAllNamedServices(EOnlineServices param_1)

{
  FOnlineServicesRegistry *this;
  
  this = FOnlineServicesRegistry::Get();
  FOnlineServicesRegistry::DestroyAllNamedServicesInstances(this,param_1);
  return;
}

// DestroyAllServicesWithName @ 14ec270e0

void __cdecl UE::Online::DestroyAllServicesWithName(FName param_1)

{
  FOnlineServicesRegistry *this;
  
  this = FOnlineServicesRegistry::Get();
  FOnlineServicesRegistry::DestroyAllServicesInstancesWithName(this,param_1);
  return;
}

// DestroyService @ 14ec27f90

void __cdecl UE::Online::DestroyService(EOnlineServices param_1,FName param_2,FName param_3)

{
  FOnlineServicesRegistry *this;
  
  this = FOnlineServicesRegistry::Get();
  FOnlineServicesRegistry::DestroyNamedServicesInstance(this,param_1,param_2,param_3);
  return;
}

// ErrorCodeCategory @ 14ec28080

ulong64 __cdecl UE::Online::Errors::ErrorCodeCategory(ulong64 param_1)

{
  return (ulonglong)((uint)(param_1 >> 0x20) & 0xfffffff);
}

// ErrorCodeSystem @ 14ec280a0

ulong64 __cdecl UE::Online::Errors::ErrorCodeSystem(ulong64 param_1)

{
  return param_1 >> 0x3c;
}

// ErrorCodeValue @ 14ec280b0

ulong64 __cdecl UE::Online::Errors::ErrorCodeValue(ulong64 param_1)

{
  return param_1 & 0xffffffff;
}

// FromString @ 14ec28780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<unsigned___int64> * __cdecl
UE::Online::Errors::ErrorCode::FromString
          (TOptional<unsigned___int64> *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  wchar_t **ppwVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  undefined1 auStack_b8 [32];
  int local_98 [4];
  TStringView<wchar_t> local_88;
  wchar_t **local_78;
  int *local_70;
  code *local_68;
  undefined8 **local_60;
  wchar_t *local_58;
  int aiStack_50 [2];
  wchar_t *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  wchar_t *local_28 [2];
  
  local_28[0] = (wchar_t *)(__security_cookie.value ^ (ulonglong)auStack_b8);
  local_88.DataPtr = param_1->DataPtr;
  local_88.Size = param_1->Size;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_98[0] = 0;
  local_58 = (wchar_t *)0x0;
  aiStack_50[0] = 0;
  local_48 = (wchar_t *)0x0;
  iStack_40 = 0;
  local_38 = (wchar_t *)0x0;
  iStack_30 = 0;
  local_78 = &local_58;
  local_70 = local_98;
  local_60 = &local_78;
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Online::Errors::ErrorCode::FromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  String::ParseTokens(&local_88,L'.',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_68,
                      None);
  if (local_98[0] == 3) {
    ppwVar1 = &local_58;
    do {
      if (*(int *)(ppwVar1 + 1) == 0) goto LAB_14ec288a1;
      ppwVar1 = ppwVar1 + 2;
    } while (ppwVar1 != local_28);
    local_88._12_4_ = aiStack_50[1];
    local_88.Size = aiStack_50[0];
    local_88.DataPtr = local_58;
    uVar2 = FParse::HexNumber64(&local_88);
    local_88._12_4_ = uStack_3c;
    local_88.Size = iStack_40;
    local_88.DataPtr = local_48;
    uVar3 = FParse::HexNumber64(&local_88);
    local_88._12_4_ = uStack_2c;
    local_88.Size = iStack_30;
    local_88.DataPtr = local_38;
    uVar4 = FParse::HexNumber64(&local_88);
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue =
         uVar4 & 0xffffffff |
         ((ulonglong)((uint)uVar3 & 0xfffffff) | (uVar2 & 0xffffffff) << 0x1c) << 0x20;
  }
  else {
LAB_14ec288a1:
    __return_storage_ptr__->bIsSet = false;
  }
  return __return_storage_ptr__;
}

// GetBuildUniqueId @ 14ec28f00

/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UE::Online::GetBuildUniqueId(void)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TAutoConsoleVariable<int> *pTVar7;
  undefined8 uVar8;
  ForAnyElementType FVar9;
  undefined1 local_58 [16];
  FString local_48;
  FString local_38;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (!bStaticCheck) {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    bStaticCheck = true;
    pwVar6 = FCommandLine::Get();
    bVar3 = FParse::Value(pwVar6,L"BuildIdOverride=",&local_48,true,(wchar_t **)0x0);
    if (bVar3) {
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar9.Data = local_48.Data.AllocatorInstance.Data;
      }
      BuildIdOverride = _wtoi((wchar_t *)FVar9.Data);
    }
    if (BuildIdOverride == 0) {
      bVar3 = FConfigCacheIni::GetBool
                        (GConfig,L"OnlineServices",L"bUseBuildIdOverride",&bUseBuildIdOverride,
                         &GEngineIni);
      if ((!bVar3) && (2 < (byte)LogOnlineServices._0_1_)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
      bVar3 = FConfigCacheIni::GetInt
                        (GConfig,L"OnlineServices",L"BuildIdOverride",&BuildIdOverride,&GEngineIni);
      if ((!bVar3) && (2 < (byte)LogOnlineServices._0_1_)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
      uVar4 = BuildIdOverride;
      if (bUseBuildIdOverride == false) {
        uVar4 = FNetworkVersion::GetNetworkCompatibleChangelist();
      }
    }
    else {
      bUseBuildIdOverride = true;
      uVar4 = BuildIdOverride;
    }
    BuildId = uVar4;
    pTVar7 = GetBuildIdOverrideCVar();
    local_28 = 0xe000000;
    plVar1 = (longlong *)pTVar7->_padding_;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0xf000000;
    local_10 = 0x1000000;
    ::FString::PrintfImpl(&local_38,L"%d");
    lVar2 = *plVar1;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar9.Data = local_38.Data.AllocatorInstance.Data;
    }
    uVar8 = (**(code **)(lVar2 + 0xa8))(plVar1,local_58,&local_28);
    (**(code **)(lVar2 + 0xb0))(plVar1,FVar9.Data,uVar8);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pTVar7 = GetBuildIdOverrideCVar();
                    /* WARNING: Could not recover jumptable at 0x00014ec29108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar5 = (**(code **)(*(longlong *)pTVar7->_padding_ + 200))();
  return iVar5;
}

// GetServices @ 14ec29820

TSharedPtr<UE::Online::IOnlineServices,1> * __cdecl
UE::Online::GetServices
          (TSharedPtr<UE::Online::IOnlineServices,1> *__return_storage_ptr__,EOnlineServices param_1
          ,FName param_2,FName param_3)

{
  FOnlineServicesRegistry *this;
  
  this = FOnlineServicesRegistry::Get();
  FOnlineServicesRegistry::GetNamedServicesInstance
            (this,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// InvalidParams @ 14ec29e40

FOnlineError * __cdecl
UE::Online::Errors::InvalidParams
          (FOnlineError *__return_storage_ptr__,TOptional<UE::Online::FOnlineError> *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TSharedRef<UE::Online::FOnlineError,1> *pTVar4;
  FText *pFVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FOnlineError *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString local_88;
  FOnlineError *local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<UE::Online::FOnlineError,1> local_58;
  FString local_48;
  FText local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_78 = (FOnlineError *)0x0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->bIsSet != false) {
    pTVar4 = MakeShared<UE::Online::FOnlineError,1,UE::Online::FOnlineError_const_&>
                       (&local_58,&param_1->TypedValue);
    local_60.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_78 = pTVar4->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  FVar2.ReferenceController = FStack_70.ReferenceController;
  pFVar8 = local_78;
  if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"OnlineErrors",L"InvalidParams",L"Invalid params specified");
  pFVar6 = ::FString::FString(&local_48,"Common.InvalidParams");
  pTVar7 = ::operator_new(0x48);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->Details).Object = (IOnlineErrorDetails *)0x10;
    (__return_storage_ptr__->Details).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnlineErrorDetails_Online_UE___00_SharedPointerInternals__6B_
    ;
    ::FString::FString(&local_88,L"invalid_params");
    pTVar7[1]._padding_ = (longlong)&___7FOnlineErrorDetails_Online_UE__6B_;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(FScriptContainerElement **)&pTVar7[1].SharedReferenceCount =
         (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar7[2]._padding_ = (pFVar6->Data).ArrayNum;
    *(int *)((longlong)&pTVar7[2]._padding_ + 4) = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    *(FScriptContainerElement **)&pTVar7[2].SharedReferenceCount =
         local_88.Data.AllocatorInstance.Data;
    *(int *)&pTVar7[3]._padding_ = local_88.Data.ArrayNum;
    *(int *)((longlong)&pTVar7[3]._padding_ + 4) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)&pTVar7[3].SharedReferenceCount,pFVar5);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FOnlineError *)(*pcVar1)();
        return pFVar8;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    (__return_storage_ptr__->Details).Object = (IOnlineErrorDetails *)(pTVar7 + 1);
    (__return_storage_ptr__->Details).SharedReferenceCount.ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar7;
  }
  (__return_storage_ptr__->Inner).Object = pFVar8;
  (__return_storage_ptr__->Inner).SharedReferenceCount.ReferenceController =
       FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = 0x1000000100000009;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __return_storage_ptr__;
}

// InvalidState @ 14ec2a080

FOnlineError * __cdecl
UE::Online::Errors::InvalidState
          (FOnlineError *__return_storage_ptr__,TOptional<UE::Online::FOnlineError> *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TSharedRef<UE::Online::FOnlineError,1> *pTVar4;
  FText *pFVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FOnlineError *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString local_88;
  FOnlineError *local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<UE::Online::FOnlineError,1> local_58;
  FString local_48;
  FText local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_78 = (FOnlineError *)0x0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->bIsSet != false) {
    pTVar4 = MakeShared<UE::Online::FOnlineError,1,UE::Online::FOnlineError_const_&>
                       (&local_58,&param_1->TypedValue);
    local_60.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_78 = pTVar4->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  FVar2.ReferenceController = FStack_70.ReferenceController;
  pFVar8 = local_78;
  if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"OnlineErrors",L"InvalidState",L"Invalid state");
  pFVar6 = ::FString::FString(&local_48,"Common.InvalidState");
  pTVar7 = ::operator_new(0x48);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->Details).Object = (IOnlineErrorDetails *)0x10;
    (__return_storage_ptr__->Details).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnlineErrorDetails_Online_UE___00_SharedPointerInternals__6B_
    ;
    ::FString::FString(&local_88,L"invalid_state");
    pTVar7[1]._padding_ = (longlong)&___7FOnlineErrorDetails_Online_UE__6B_;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(FScriptContainerElement **)&pTVar7[1].SharedReferenceCount =
         (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar7[2]._padding_ = (pFVar6->Data).ArrayNum;
    *(int *)((longlong)&pTVar7[2]._padding_ + 4) = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    *(FScriptContainerElement **)&pTVar7[2].SharedReferenceCount =
         local_88.Data.AllocatorInstance.Data;
    *(int *)&pTVar7[3]._padding_ = local_88.Data.ArrayNum;
    *(int *)((longlong)&pTVar7[3]._padding_ + 4) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)&pTVar7[3].SharedReferenceCount,pFVar5);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FOnlineError *)(*pcVar1)();
        return pFVar8;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    (__return_storage_ptr__->Details).Object = (IOnlineErrorDetails *)(pTVar7 + 1);
    (__return_storage_ptr__->Details).SharedReferenceCount.ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar7;
  }
  (__return_storage_ptr__->Inner).Object = pFVar8;
  (__return_storage_ptr__->Inner).SharedReferenceCount.ReferenceController =
       FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = 0x1000000100000015;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __return_storage_ptr__;
}

// IsLoaded @ 14ec2a360

bool __cdecl UE::Online::IsLoaded(EOnlineServices param_1,FName param_2,FName param_3)

{
  EOnlineServices EVar1;
  FOnlineServicesRegistry *this;
  TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
  *this_00;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar2;
  bool bVar3;
  FName local_18;
  FName local_10;
  
  this = FOnlineServicesRegistry::Get();
  EVar1 = FOnlineServicesRegistry::ResolveServiceName(this,param_1);
  this_00 = TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
            ::Find(&this->NamedServiceInstances,EVar1);
  bVar3 = false;
  if (this_00 !=
      (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
       *)0x0) {
    local_18 = param_2;
    local_10 = param_3;
    pTVar2 = TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
             ::Find((TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                     *)this_00,(TTuple<FName,FName> *)&local_18);
    bVar3 = pTVar2 != (TSharedRef<UE::Online::IOnlineServices,1> *)0x0;
  }
  return bVar3;
}

// LexFromString @ 14ec2a460

void __cdecl UE::Online::LexFromString(FSchemaVariant *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  double dVar9;
  FString local_38 [2];
  
  pwVar5 = wcschr(param_2,L':');
  if (pwVar5 == (wchar_t *)0x0) {
    return;
  }
  ::FString::ConstructFromPtrSize(local_38,param_2,(int)((longlong)pwVar5 - (longlong)param_2 >> 1))
  ;
  pwVar5 = pwVar5 + 1;
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_38[0].Data.ArrayNum != 0) {
    FVar7.Data = local_38[0].Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"Bool");
  if (iVar4 != 0) {
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"Int64");
    if (iVar4 == 0) {
      param_1->VariantType = Int64;
      lVar6 = _wcstoi64(pwVar5,(wchar_t **)0x0,10);
      uVar8 = (ulonglong)(param_1->VariantData).TypeIndex;
      if ((3 < uVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] != Core::Private::TDestructorCaller<bool>::Destruct)
      {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(param_1);
      }
      (param_1->VariantData)._padding_ = lVar6;
      (param_1->VariantData).TypeIndex = '\x01';
      goto LAB_14ec2a6ca;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"Double");
    if (iVar4 == 0) {
      param_1->VariantType = Double;
      dVar9 = wcstod(pwVar5,(wchar_t **)0x0);
      uVar8 = (ulonglong)(param_1->VariantData).TypeIndex;
      if ((3 < uVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] !=
          Core::Private::TDestructorCaller<__int64>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(param_1);
      }
      (param_1->VariantData)._padding_ = (longlong)dVar9;
      (param_1->VariantData).TypeIndex = '\x02';
      goto LAB_14ec2a6ca;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar7.Data,L"String");
    if (iVar4 == 0) {
      param_1->VariantType = String;
      uVar8 = (ulonglong)(param_1->VariantData).TypeIndex;
      if ((3 < uVar8) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] !=
          Core::Private::TDestructorCaller<double>::Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(param_1);
      }
      ::FString::FString((FString *)param_1,pwVar5);
      (param_1->VariantData).TypeIndex = '\0';
      goto LAB_14ec2a6ca;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0xa8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_1->VariantType = Bool;
  bVar2 = FToBoolHelper::FromCStringWide(pwVar5);
  uVar8 = (ulonglong)(param_1->VariantData).TypeIndex;
  if ((3 < uVar8) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,__int64,double,bool>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar8])(param_1);
  *(bool *)&(param_1->VariantData)._padding_ = bVar2;
  (param_1->VariantData).TypeIndex = '\x03';
LAB_14ec2a6ca:
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  return;
}

// LexFromString @ 14ec2a6f0

void __cdecl UE::Online::LexFromString(EExternalAuthTokenMethod *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *local_res10;
  wchar_t **local_res18 [2];
  
  local_res10 = param_2;
  iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"Primary");
  if (iVar2 != 0) {
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"Secondary");
    if (iVar2 == 0) {
      *param_1 = Secondary;
      return;
    }
    local_res18[0] = &local_res10;
    bVar1 = `UE::Online::LexFromString'::__l3::<lambda_1>::operator()(local_res18);
    if (bVar1) {
      return;
    }
  }
  *param_1 = Primary;
  return;
}

// LexFromString @ 14ec2a770

void __cdecl UE::Online::LexFromString(ELobbyJoinPolicy *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"PublicAdvertised");
  if (iVar3 == 0) {
    *param_1 = PublicAdvertised;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"PublicNotAdvertised");
  if (iVar3 == 0) {
    *param_1 = PublicNotAdvertised;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"InvitationOnly");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Lobbies.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = InvitationOnly;
  return;
}

// LexFromString @ 14ec2a810

void __cdecl UE::Online::LexFromString(ELobbyMemberLeaveReason *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Left");
  if (iVar3 == 0) {
    *param_1 = Left;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Kicked");
  if (iVar3 == 0) {
    *param_1 = Kicked;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Disconnected");
  if (iVar3 == 0) {
    *param_1 = Disconnected;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Closed");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Lobbies.cpp"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Closed;
  return;
}

// LexFromString @ 14ec2a8e0

void __cdecl UE::Online::LexFromString(ELoginStatus *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *local_res10;
  wchar_t **local_res18 [2];
  
  local_res10 = param_2;
  iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"LoggedIn");
  if (iVar2 == 0) {
    *param_1 = LoggedIn;
    return;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"UsingLocalProfile");
  if (iVar2 != 0) {
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"LoggedInReducedFunctionality");
    if (iVar2 == 0) {
      *param_1 = LoggedInReducedFunctionality;
      return;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"NotLoggedIn");
    if (iVar2 != 0) {
      local_res18[0] = &local_res10;
      bVar1 = `UE::Online::LexFromString'::__l3::<lambda_1>::operator()(local_res18);
      if (bVar1) {
        return;
      }
    }
    *param_1 = NotLoggedIn;
    return;
  }
  *param_1 = UsingLocalProfile;
  return;
}

// LexFromString @ 14ec2a9a0

void __cdecl UE::Online::LexFromString(EOfferType *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Nonconsumable");
  if (iVar3 == 0) {
    *param_1 = Nonconsumable;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Consumable");
  if (iVar3 == 0) {
    *param_1 = Consumable;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Subscription");
  if (iVar3 == 0) {
    *param_1 = Subscription;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Unknown");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Commerce.cpp"
                       ,0x27,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Unknown;
  return;
}

// LexFromString @ 14ec2aa60

void __cdecl UE::Online::LexFromString(EOnlinePlatformType *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Epic");
  if (iVar3 == 0) {
    *param_1 = Epic;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Steam");
  if (iVar3 == 0) {
    *param_1 = Steam;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"PSN");
  if (iVar3 == 0) {
    *param_1 = PSN;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Nintendo");
  if (iVar3 == 0) {
    *param_1 = Nintendo;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"XBL");
  if (iVar3 == 0) {
    *param_1 = XBL;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Unknown");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\OnlineServices.cpp"
                       ,0x3a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Unknown;
  return;
}

// LexFromString @ 14ec2ab70

void __cdecl UE::Online::LexFromString(EOnlineServicesConnectionStatus *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Connected");
  if (iVar3 == 0) {
    *param_1 = Connected;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"NotConnected");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Connectivity.cpp"
                       ,0x1e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = NotConnected;
  return;
}

// LexFromString @ 14ec2abf0

void __cdecl UE::Online::LexFromString(EPrivilegeResults *param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  wchar_t *pwVar3;
  ForAnyElementType FVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"NoFailures");
  if (iVar1 == 0) {
    *param_1 = NoFailures;
    return;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  ::FString::ParseIntoArray(param_2,&local_18,L" | ",true);
  iVar1 = local_18.ArrayNum;
  pFVar5 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x10;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4.Data == pFVar5) break;
    if (*(int *)(FVar4.Data + 8) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = *(wchar_t **)FVar4.Data;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"RequiredPatchAvailable");
    if (iVar2 == 0) {
      *param_1 = *param_1 | RequiredPatchAvailable;
      FVar4.Data = FVar4.Data + 0x10;
    }
    else {
      if (*(int *)(FVar4.Data + 8) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = *(wchar_t **)FVar4.Data;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"RequiredSystemUpdate");
      if (iVar2 == 0) {
        *param_1 = *param_1 | RequiredSystemUpdate;
        FVar4.Data = FVar4.Data + 0x10;
      }
      else {
        if (*(int *)(FVar4.Data + 8) == 0) {
          pwVar3 = L"";
        }
        else {
          pwVar3 = *(wchar_t **)FVar4.Data;
        }
        iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"AgeRestrictionFailure");
        if (iVar2 == 0) {
          *param_1 = *param_1 | AgeRestrictionFailure;
          FVar4.Data = FVar4.Data + 0x10;
        }
        else {
          if (*(int *)(FVar4.Data + 8) == 0) {
            pwVar3 = L"";
          }
          else {
            pwVar3 = *(wchar_t **)FVar4.Data;
          }
          iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"AccountTypeFailure");
          if (iVar2 == 0) {
            *param_1 = *param_1 | AccountTypeFailure;
            FVar4.Data = FVar4.Data + 0x10;
          }
          else {
            if (*(int *)(FVar4.Data + 8) == 0) {
              pwVar3 = L"";
            }
            else {
              pwVar3 = *(wchar_t **)FVar4.Data;
            }
            iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"UserNotFound");
            if (iVar2 == 0) {
              *param_1 = *param_1 | UserNotFound;
              FVar4.Data = FVar4.Data + 0x10;
            }
            else {
              if (*(int *)(FVar4.Data + 8) == 0) {
                pwVar3 = L"";
              }
              else {
                pwVar3 = *(wchar_t **)FVar4.Data;
              }
              iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"UserNotLoggedIn");
              if (iVar2 == 0) {
                *param_1 = *param_1 | UserNotLoggedIn;
                FVar4.Data = FVar4.Data + 0x10;
              }
              else {
                if (*(int *)(FVar4.Data + 8) == 0) {
                  pwVar3 = L"";
                }
                else {
                  pwVar3 = *(wchar_t **)FVar4.Data;
                }
                iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"ChatRestriction");
                if (iVar2 == 0) {
                  *param_1 = *param_1 | ChatRestriction;
                  FVar4.Data = FVar4.Data + 0x10;
                }
                else {
                  if (*(int *)(FVar4.Data + 8) == 0) {
                    pwVar3 = L"";
                  }
                  else {
                    pwVar3 = *(wchar_t **)FVar4.Data;
                  }
                  iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"UGCRestriction");
                  if (iVar2 == 0) {
                    *param_1 = *param_1 | UGCRestriction;
                    FVar4.Data = FVar4.Data + 0x10;
                  }
                  else {
                    if (*(int *)(FVar4.Data + 8) == 0) {
                      pwVar3 = L"";
                    }
                    else {
                      pwVar3 = *(wchar_t **)FVar4.Data;
                    }
                    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"GenericFailure");
                    if (iVar2 == 0) {
                      *param_1 = *param_1 | GenericFailure;
                      FVar4.Data = FVar4.Data + 0x10;
                    }
                    else {
                      if (*(int *)(FVar4.Data + 8) == 0) {
                        pwVar3 = L"";
                      }
                      else {
                        pwVar3 = *(wchar_t **)FVar4.Data;
                      }
                      iVar2 = FGenericPlatformStricmp::Stricmp(pwVar3,L"OnlinePlayRestricted");
                      if (iVar2 == 0) {
                        *param_1 = *param_1 | OnlinePlayRestricted;
                        FVar4.Data = FVar4.Data + 0x10;
                      }
                      else {
                        if (*(int *)(FVar4.Data + 8) == 0) {
                          pwVar3 = L"";
                        }
                        else {
                          pwVar3 = *(wchar_t **)FVar4.Data;
                        }
                        iVar2 = FGenericPlatformStricmp::Stricmp
                                          (pwVar3,L"NetworkConnectionUnavailable");
                        if (iVar2 == 0) {
                          *param_1 = *param_1 | NetworkConnectionUnavailable;
                        }
                        FVar4.Data = FVar4.Data + 0x10;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// LexFromString @ 14ec2aed0

void __cdecl UE::Online::LexFromString(ERemoteAuthTicketAudience *param_1,wchar_t *param_2)

{
  bool bVar1;
  int iVar2;
  wchar_t *local_res10;
  wchar_t **local_res18 [2];
  
  local_res10 = param_2;
  iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"Peer");
  if (iVar2 != 0) {
    iVar2 = FGenericPlatformStricmp::Stricmp(param_2,L"DedicatedServer");
    if (iVar2 == 0) {
      *param_1 = DedicatedServer;
      return;
    }
    local_res18[0] = &local_res10;
    bVar1 = `UE::Online::LexFromString'::__l3::<lambda_1>::operator()(local_res18);
    if (bVar1) {
      return;
    }
  }
  *param_1 = Peer;
  return;
}

// LexFromString @ 14ec2af50

void __cdecl UE::Online::LexFromString(ESchemaAttributeComparisonOp *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Equals");
  if (iVar3 == 0) {
    *param_1 = Equals;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"NotEquals");
  if (iVar3 == 0) {
    *param_1 = NotEquals;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"GreaterThan");
  if (iVar3 == 0) {
    *param_1 = GreaterThan;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"GreaterThanEquals");
  if (iVar3 == 0) {
    *param_1 = GreaterThanEquals;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"LessThan");
  if (iVar3 == 0) {
    *param_1 = LessThan;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"LessThanEquals");
  if (iVar3 == 0) {
    *param_1 = LessThanEquals;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Near");
  if (iVar3 == 0) {
    *param_1 = Near;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"In");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = In;
  return;
}

// LexFromString @ 14ec2b0a0

void __cdecl UE::Online::LexFromString(ESchemaAttributeFlags *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"None");
  if (iVar3 != 0) {
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Searchable");
    if (iVar3 == 0) {
      *param_1 = Searchable;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Public");
    if (iVar3 == 0) {
      *param_1 = Public;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Private");
    if (iVar3 == 0) {
      *param_1 = Private;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"SchemaCompatibilityId");
    if (iVar3 == 0) {
      *param_1 = SchemaCompatibilityId;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0x82,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = None;
  return;
}

// LexFromString @ 14ec2b190

void __cdecl UE::Online::LexFromString(ESchemaAttributeType *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Bool");
  if (iVar3 != 0) {
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Int64");
    if (iVar3 == 0) {
      *param_1 = Int64;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Double");
    if (iVar3 == 0) {
      *param_1 = Double;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"String");
    if (iVar3 == 0) {
      *param_1 = String;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0xa8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Bool;
  return;
}

// LexFromString @ 14ec2b260

void __cdecl UE::Online::LexFromString(ESchemaAttributeVisibility *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Public");
  if (iVar3 == 0) {
    *param_1 = Public;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Private");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0x58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Private;
  return;
}

// LexFromString @ 14ec2b2e0

void __cdecl UE::Online::LexFromString(ESchemaServiceAttributeFlags *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"None");
  if (iVar3 != 0) {
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Searchable");
    if (iVar3 == 0) {
      *param_1 = Searchable;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Public");
    if (iVar3 == 0) {
      *param_1 = Public;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Private");
    if (iVar3 == 0) {
      *param_1 = Private;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = None;
  return;
}

// LexFromString @ 14ec2b3b0

void __cdecl
UE::Online::LexFromString(ESchemaServiceAttributeSupportedTypeFlags *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Bool");
  if (iVar3 != 0) {
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Int64");
    if (iVar3 == 0) {
      *param_1 = Int64;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Double");
    if (iVar3 == 0) {
      *param_1 = Double;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"String");
    if (iVar3 == 0) {
      *param_1 = String;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0xf2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Bool;
  return;
}

// LexFromString @ 14ec2b480

void __cdecl UE::Online::LexFromString(ESessionJoinPolicy *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Public");
  if (iVar3 == 0) {
    *param_1 = Public;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"FriendsOnly");
  if (iVar3 == 0) {
    *param_1 = FriendsOnly;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"InviteOnly");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Sessions.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = InviteOnly;
  return;
}

// LexFromString @ 14ec2b520

void __cdecl UE::Online::LexFromString(EShowPrivilegeResolutionUI *param_1,FString *param_2)

{
  int iVar1;
  EShowPrivilegeResolutionUI EVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar3,L"Show");
  if (iVar1 == 0) {
    *param_1 = Show;
    return;
  }
  if ((param_2->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,L"NotShow");
  EVar2 = Default;
  if (iVar1 == 0) {
    EVar2 = NotShow;
  }
  *param_1 = EVar2;
  return;
}

// LexFromString @ 14ec2b5b0

void __cdecl UE::Online::LexFromString(EUILobbyJoinRequestedSource *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"FromInvitation");
  if (iVar3 == 0) {
    *param_1 = FromInvitation;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Unspecified");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Lobbies.cpp"
                       ,0x62,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Unspecified;
  return;
}

// LexFromString @ 14ec2b630

void __cdecl UE::Online::LexFromString(EUISessionJoinRequestedSource *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"FromInvitation");
  if (iVar3 == 0) {
    *param_1 = FromInvitation;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Unspecified");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Sessions.cpp"
                       ,0x8a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Unspecified;
  return;
}

// LexFromString @ 14ec2b6b0

void __cdecl UE::Online::LexFromString(EUserPresenceGameStatus *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"PlayingThisGame");
  if (iVar3 == 0) {
    *param_1 = PlayingThisGame;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"PlayingOtherGame");
  if (iVar3 == 0) {
    *param_1 = PlayingOtherGame;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Unknown");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Presence.cpp"
                       ,0x96,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Unknown;
  return;
}

// LexFromString @ 14ec2b750

void __cdecl UE::Online::LexFromString(EUserPresenceJoinability *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Public");
  if (iVar3 == 0) {
    *param_1 = Public;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"FriendsOnly");
  if (iVar3 == 0) {
    *param_1 = FriendsOnly;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"InviteOnly");
  if (iVar3 == 0) {
    *param_1 = InviteOnly;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Private");
  if (iVar3 == 0) {
    *param_1 = Private;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Unknown");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Presence.cpp"
                       ,0x76,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Unknown;
  return;
}

// LexFromString @ 14ec2b830

void __cdecl UE::Online::LexFromString(EUserPresenceStatus *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Offline");
  if (iVar3 == 0) {
    *param_1 = Offline;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Online");
  if (iVar3 == 0) {
    *param_1 = Online;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Away");
  if (iVar3 == 0) {
    *param_1 = Away;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"ExtendedAway");
  if (iVar3 == 0) {
    *param_1 = ExtendedAway;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"DoNotDisturb");
  if (iVar3 == 0) {
    *param_1 = DoNotDisturb;
    return;
  }
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"Unknown");
  if (iVar3 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Presence.cpp"
                       ,0x31,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = Unknown;
  return;
}

// LexFromString @ 14ec2b940

void __cdecl UE::Online::LexFromString(EUserPrivileges *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"CanPlay");
  if (iVar3 != 0) {
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"CanPlayOnline");
    if (iVar3 == 0) {
      *param_1 = CanPlayOnline;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"CanCommunicateViaTextOnline");
    if (iVar3 == 0) {
      *param_1 = CanCommunicateViaTextOnline;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"CanCommunicateViaVoiceOnline");
    if (iVar3 == 0) {
      *param_1 = CanCommunicateViaVoiceOnline;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"CanUseUserGeneratedContent");
    if (iVar3 == 0) {
      *param_1 = CanUseUserGeneratedContent;
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp(param_2,L"CanUserCrossPlay");
    if (iVar3 == 0) {
      *param_1 = CanCrossPlay;
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Privileges.cpp"
                       ,0x32,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *param_1 = CanPlay;
  return;
}

// LexToString @ 14ec2ba50

FString * __cdecl UE::Online::LexToString(FString *__return_storage_ptr__,EPrivilegeResults param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  if (param_1 == NoFailures) {
    ::FString::FString(__return_storage_ptr__,L"NoFailures");
    return __return_storage_ptr__;
  }
  local_30 = 0;
  local_2c = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  if ((param_1 & RequiredPatchAvailable) != NoFailures) {
    iVar2 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_38,&local_2c);
    local_30 = iVar2 + 1;
    ::FString::FString((FString *)(local_38.Data + (longlong)iVar2 * 0x10),L"RequiredPatchAvailable"
                      );
  }
  if ((param_1 & RequiredSystemUpdate) != NoFailures) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"RequiredSystemUpdate");
  }
  if ((param_1 & AgeRestrictionFailure) != NoFailures) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"AgeRestrictionFailure");
  }
  if ((param_1 & AccountTypeFailure) != NoFailures) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"AccountTypeFailure");
  }
  if ((param_1 & UserNotFound) != NoFailures) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"UserNotFound");
  }
  if ((param_1 & UserNotLoggedIn) != NoFailures) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"UserNotLoggedIn");
  }
  if ((param_1 & ChatRestriction) != NoFailures) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"ChatRestriction");
  }
  if ((char)param_1 < '\0') {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"UGCRestriction");
  }
  if ((param_1 >> 8 & 1) != 0) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"GenericFailure");
  }
  if ((param_1 >> 9 & 1) != 0) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"OnlinePlayRestricted");
  }
  if ((param_1 >> 10 & 1) != 0) {
    if (local_30 == local_2c) {
      local_30 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_38,&local_2c);
    }
    lVar3 = (longlong)local_30;
    local_30 = local_30 + 1;
    ::FString::FString((FString *)(local_38.Data + lVar3 * 0x10),L"NetworkConnectionUnavailable");
  }
  iVar2 = local_30;
  bVar1 = true;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = local_38.Data + (longlong)local_30 * 0x10;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  FVar4.Data = local_38.Data;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(__return_storage_ptr__,L" | ",3);
    }
    iVar5 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(__return_storage_ptr__,*(wchar_t **)FVar4.Data,iVar5);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.Data,local_30);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return __return_storage_ptr__;
}

// LexToString @ 14ec2be10

FString * __cdecl
UE::Online::LexToString(FString *__return_storage_ptr__,EShowPrivilegeResolutionUI param_1)

{
  ::FString::FString(__return_storage_ptr__,L"Default");
  return __return_storage_ptr__;
}

// LexToString @ 14ec2be40

FString * __cdecl
UE::Online::LexToString
          (FString *__return_storage_ptr__,FLexToStringAdaptor<UE::Online::FSchemaVariant> *param_1)

{
  FSchemaVariant::ToLogString(param_1->SchemaVariant,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// LexToString @ 14ec2be70

wchar_t * __cdecl UE::Online::LexToString(EExternalAuthTokenMethod param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Primary) {
    return L"Primary";
  }
  if (param_1 != Secondary) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Auth.cpp"
                       ,0x73,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Secondary";
}

// LexToString @ 14ec2bed0

wchar_t * __cdecl UE::Online::LexToString(ELobbyJoinPolicy param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == PublicAdvertised) {
    return L"PublicAdvertised";
  }
  if (param_1 != PublicNotAdvertised) {
    if (param_1 != InvitationOnly) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Lobbies.cpp"
                         ,0xd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pwVar3 = (wchar_t *)(*pcVar1)();
        return pwVar3;
      }
    }
    return L"InvitationOnly";
  }
  return L"PublicNotAdvertised";
}

// LexToString @ 14ec2bf40

wchar_t * __cdecl UE::Online::LexToString(ELobbyMemberLeaveReason param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Left) {
    return L"Left";
  }
  if (param_1 != Kicked) {
    if (param_1 == Disconnected) {
      return L"Disconnected";
    }
    if (param_1 != Closed) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Lobbies.cpp"
                         ,0x2e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pwVar3 = (wchar_t *)(*pcVar1)();
        return pwVar3;
      }
    }
    return L"Closed";
  }
  return L"Kicked";
}

// LexToString @ 14ec2bfc0

wchar_t * __cdecl UE::Online::LexToString(ELoginStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != NotLoggedIn) {
    if (param_1 == UsingLocalProfile) {
      return L"UsingLocalProfile";
    }
    if (param_1 == LoggedInReducedFunctionality) {
      return L"LoggedInReducedFunctionality";
    }
    if (param_1 == LoggedIn) {
      return L"LoggedIn";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Auth.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"NotLoggedIn";
}

// LexToString @ 14ec2c040

wchar_t * __cdecl UE::Online::LexToString(EOfferType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Nonconsumable) {
    return L"Nonconsumable";
  }
  if (param_1 != Consumable) {
    if (param_1 == Subscription) {
      return L"Subscription";
    }
    if (param_1 != Unknown) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Commerce.cpp"
                         ,0xe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pwVar3 = (wchar_t *)(*pcVar1)();
        return pwVar3;
      }
    }
    return L"Unknown";
  }
  return L"Consumable";
}

// LexToString @ 14ec2c0c0

wchar_t * __cdecl UE::Online::LexToString(EOnlinePlatformType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Epic:
    return L"Epic";
  case Steam:
    return L"Steam";
  case PSN:
    return L"PSN";
  case Nintendo:
    return L"Nintendo";
  case XBL:
    return L"XBL";
  case Unknown:
    goto switchD_14ec2c0dd_caseD_5;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\OnlineServices.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
switchD_14ec2c0dd_caseD_5:
    return L"Unknown";
  }
}

// LexToString @ 14ec2c170

wchar_t * __cdecl UE::Online::LexToString(EOnlineServicesConnectionStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Connected) {
    return L"Connected";
  }
  if (param_1 != NotConnected) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Connectivity.cpp"
                       ,0xd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"NotConnected";
}

// LexToString @ 14ec2c1d0

wchar_t * __cdecl UE::Online::LexToString(ERemoteAuthTicketAudience param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Peer) {
    if (param_1 == DedicatedServer) {
      return L"DedicatedServer";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Auth.cpp"
                       ,0x58,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Peer";
}

// LexToString @ 14ec2c230

wchar_t * __cdecl UE::Online::LexToString(ESchemaAttributeComparisonOp param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Equals:
    return L"Equals";
  case NotEquals:
    return L"NotEquals";
  case GreaterThan:
    return L"GreaterThan";
  case GreaterThanEquals:
    return L"GreaterThanEquals";
  case LessThan:
    return L"LessThan";
  case LessThanEquals:
    return L"LessThanEquals";
  case Near:
    return L"Near";
  case In:
    return L"In";
  case NotIn:
    goto switchD_14ec2c24d_caseD_8;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0x14,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
switchD_14ec2c24d_caseD_8:
    return L"NotIn";
  }
}

// LexToString @ 14ec2c310

wchar_t * __cdecl UE::Online::LexToString(ESchemaAttributeFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != None) {
    if (param_1 == Searchable) {
      return L"Searchable";
    }
    if (param_1 == Public) {
      return L"Public";
    }
    if (param_1 == Private) {
      return L"Private";
    }
    if (param_1 == SchemaCompatibilityId) {
      return L"SchemaCompatibilityId";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0x61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"None";
}

// LexToString @ 14ec2c3a0

wchar_t * __cdecl UE::Online::LexToString(ESchemaAttributeType param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Bool) {
    if (param_1 == Int64) {
      return L"Int64";
    }
    if (param_1 == Double) {
      return L"Double";
    }
    if (param_1 == String) {
      return L"String";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0x8b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Bool";
}

// LexToString @ 14ec2c420

wchar_t * __cdecl UE::Online::LexToString(ESchemaAttributeVisibility param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Public) {
    return L"Public";
  }
  if (param_1 != Private) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0x47,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Private";
}

// LexToString @ 14ec2c480

wchar_t * __cdecl UE::Online::LexToString(ESchemaServiceAttributeFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != None) {
    if (param_1 == Searchable) {
      return L"Searchable";
    }
    if (param_1 == Public) {
      return L"Public";
    }
    if (param_1 == Private) {
      return L"Private";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0xb1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"None";
}

// LexToString @ 14ec2c500

wchar_t * __cdecl UE::Online::LexToString(ESchemaServiceAttributeSupportedTypeFlags param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Bool) {
    if (param_1 == Int64) {
      return L"Int64";
    }
    if (param_1 == Double) {
      return L"Double";
    }
    if (param_1 == String) {
      return L"String";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                       ,0xd6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Bool";
}

// LexToString @ 14ec2c580

wchar_t * __cdecl UE::Online::LexToString(ESessionJoinPolicy param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Public) {
    return L"Public";
  }
  if (param_1 != FriendsOnly) {
    if (param_1 != InviteOnly) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Sessions.cpp"
                         ,0xd,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pwVar3 = (wchar_t *)(*pcVar1)();
        return pwVar3;
      }
    }
    return L"InviteOnly";
  }
  return L"FriendsOnly";
}

// LexToString @ 14ec2c5f0

wchar_t * __cdecl UE::Online::LexToString(EUILobbyJoinRequestedSource param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Unspecified) {
    if (param_1 == FromInvitation) {
      return L"FromInvitation";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Lobbies.cpp"
                       ,0x51,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Unspecified";
}

// LexToString @ 14ec2c650

wchar_t * __cdecl UE::Online::LexToString(EUISessionJoinRequestedSource param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 != Unspecified) {
    if (param_1 == FromInvitation) {
      return L"FromInvitation";
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Sessions.cpp"
                       ,0x79,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
  }
  return L"Unspecified";
}

// LexToString @ 14ec2c6b0

wchar_t * __cdecl UE::Online::LexToString(EUserPresenceGameStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == PlayingThisGame) {
    return L"PlayingThisGame";
  }
  if (param_1 != PlayingOtherGame) {
    if (param_1 != Unknown) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Presence.cpp"
                         ,0x81,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pwVar3 = (wchar_t *)(*pcVar1)();
        return pwVar3;
      }
    }
    return L"Unknown";
  }
  return L"PlayingOtherGame";
}

// LexToString @ 14ec2c720

wchar_t * __cdecl UE::Online::LexToString(EUserPresenceJoinability param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == Public) {
    return L"Public";
  }
  if (param_1 == FriendsOnly) {
    return L"FriendsOnly";
  }
  if (param_1 == InviteOnly) {
    return L"InviteOnly";
  }
  if (param_1 != Private) {
    if (param_1 != Unknown) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Presence.cpp"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pwVar3 = (wchar_t *)(*pcVar1)();
        return pwVar3;
      }
    }
    return L"Unknown";
  }
  return L"Private";
}

// LexToString @ 14ec2c7b0

wchar_t * __cdecl UE::Online::LexToString(EUserPresenceStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case Offline:
    return L"Offline";
  case Online:
    return L"Online";
  case Away:
    return L"Away";
  case ExtendedAway:
    return L"ExtendedAway";
  case DoNotDisturb:
    return L"DoNotDisturb";
  case Unknown:
    goto switchD_14ec2c7cd_caseD_5;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Presence.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
switchD_14ec2c7cd_caseD_5:
    return L"Unknown";
  }
}

// LexToString @ 14ec2c860

wchar_t * __cdecl UE::Online::LexToString(EUserPrivileges param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  switch(param_1) {
  case CanPlay:
    goto switchD_14ec2c87d_caseD_0;
  case CanPlayOnline:
    return L"CanPlayOnline";
  case CanCommunicateViaTextOnline:
    return L"CanCommunicateViaTextOnline";
  case CanCommunicateViaVoiceOnline:
    return L"CanCommunicateViaVoiceOnline";
  case CanUseUserGeneratedContent:
    return L"CanUseUserGeneratedContent";
  case CanCrossPlay:
    return L"CanCrossPlay";
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Privileges.cpp"
                       ,0x11,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
switchD_14ec2c87d_caseD_0:
    return L"CanPlay";
  }
}

// LexTryParseString @ 14ec2c910

bool __cdecl UE::Online::LexTryParseString(EExternalAuthTokenMethod *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Primary");
  if (iVar1 == 0) {
    *param_1 = Primary;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Secondary");
  if (iVar1 == 0) {
    *param_1 = Secondary;
    return true;
  }
  return false;
}

// LexTryParseString @ 14ec2c980

bool __cdecl UE::Online::LexTryParseString(ELoginStatus *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"LoggedIn");
  if (iVar1 == 0) {
    *param_1 = LoggedIn;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"UsingLocalProfile");
  if (iVar1 == 0) {
    *param_1 = UsingLocalProfile;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"LoggedInReducedFunctionality");
  if (iVar1 == 0) {
    *param_1 = LoggedInReducedFunctionality;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"NotLoggedIn");
  if (iVar1 == 0) {
    *param_1 = NotLoggedIn;
    return true;
  }
  return false;
}

// LexTryParseString @ 14ec2ca30

bool __cdecl UE::Online::LexTryParseString(ERemoteAuthTicketAudience *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"Peer");
  if (iVar1 == 0) {
    *param_1 = Peer;
    return true;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(param_2,L"DedicatedServer");
  if (iVar1 == 0) {
    *param_1 = DedicatedServer;
    return true;
  }
  return false;
}

// LogSchemaDefinition @ 14ec2caa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::Online::`anonymous_namespace'::LogSchemaDefinition(FSchemaDefinition *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  code *pcVar5;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *pTVar6;
  bool bVar7;
  bool bVar8;
  size_t sVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  wchar_t *_Str;
  int iVar20;
  undefined1 *puVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  int iVar23;
  uint *puVar24;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *pTVar25;
  int iVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  <lambda_1> local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_248 [4];
  uint local_244;
  FString local_240;
  TArray<FString,TSizedDefaultAllocator<32>_> local_230;
  TArray<FString,TSizedDefaultAllocator<32>_> local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  int local_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  uint local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_1b0;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 local_180;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  int iStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_90;
  longlong lStack_88;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  undefined8 uStack_78;
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_44;
  
  if ((byte)LogOnlineSchema._0_1_ < 6) {
    return;
  }
  ::FName::ToString(&param_1->Id,&local_240);
  iVar20 = 0;
  local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.ArrayNum = 0;
  local_230.ArrayMax = 0;
  Algo::
  Transform<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TArray<FString,TSizedDefaultAllocator<32>_>_&,__UE::Online::_anonymous_namespace_::LogSchemaDefinition_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
            (&param_1->ParentSchemaIds,&local_230,local_res10[0]);
  iVar13 = local_230.ArrayNum;
  bVar7 = true;
  pFVar16 = local_230.AllocatorInstance.Data + (longlong)local_230.ArrayNum * 0x10;
  local_1e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e0.Data.ArrayNum = 0;
  local_1e0.Data.ArrayMax = 0;
  FVar14.Data = local_230.AllocatorInstance.Data;
  while( true ) {
    if (local_230.ArrayNum != iVar13) {
      local_res10[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    iVar23 = 0;
    if (FVar14.Data == pFVar16) break;
    if (bVar7) {
      bVar7 = false;
    }
    else {
      ::FString::AppendChars(&local_1e0,L",",1);
    }
    iVar26 = *(int *)(FVar14.Data + 8) + -1;
    if (*(int *)(FVar14.Data + 8) == 0) {
      iVar26 = iVar23;
    }
    ::FString::AppendChars(&local_1e0,*(wchar_t **)FVar14.Data,iVar26);
    FVar14.Data = FVar14.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
  if (local_230.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.AllocatorInstance.Data);
  }
  if ((5 < (byte)LogOnlineSchema._0_1_) &&
     (Logging::Private::BasicLog<6>
                (&`UE::Online::LogSchemaDefinition'::`6'::LOG_Static,
                 (FLogCategoryBase *)&LogOnlineSchema), 5 < (byte)LogOnlineSchema._0_1_)) {
    Logging::Private::BasicLog<6>
              (&`UE::Online::LogSchemaDefinition'::`24'::LOG_Static,
               (FLogCategoryBase *)&LogOnlineSchema);
  }
  if (1 < local_1e0.Data.ArrayNum) {
    if ((byte)LogOnlineSchema._0_1_ < 6) goto LAB_14ec2cd4d;
    Logging::Private::BasicLog<6>
              (&`UE::Online::LogSchemaDefinition'::`45'::LOG_Static,
               (FLogCategoryBase *)&LogOnlineSchema);
  }
  if (5 < (byte)LogOnlineSchema._0_1_) {
    local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_220.ArrayNum = 0;
    local_220.ArrayMax = 0;
    Algo::
    Transform<TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,__UE::Online::_anonymous_namespace_::LogSchemaDefinition_::__l5::<lambda_2>::operator()_::__l2::<lambda_1>_>
              (&param_1->Categories,&local_220,(<lambda_1>)local_res10[0]);
    iVar13 = local_220.ArrayNum;
    bVar7 = true;
    pFVar16 = local_220.AllocatorInstance.Data + (longlong)local_220.ArrayNum * 0x10;
    local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_210.Data.ArrayNum = 0;
    local_210.Data.ArrayMax = 0;
    FVar14.Data = local_220.AllocatorInstance.Data;
    while( true ) {
      if (local_220.ArrayNum != iVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar14.Data == pFVar16) break;
      if (bVar7) {
        bVar7 = false;
      }
      else {
        ::FString::AppendChars(&local_210,L",",1);
      }
      iVar26 = *(int *)(FVar14.Data + 8) + -1;
      if (*(int *)(FVar14.Data + 8) == 0) {
        iVar26 = 0;
      }
      ::FString::AppendChars(&local_210,*(wchar_t **)FVar14.Data,iVar26);
      FVar14.Data = FVar14.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
    if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
    Logging::Private::BasicLog<6>
              (&`UE::Online::LogSchemaDefinition'::`63'::LOG_Static,
               (FLogCategoryBase *)&LogOnlineSchema);
    if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
  }
LAB_14ec2cd4d:
  iVar13 = *(int *)&(param_1->Categories).field_0x28;
  puVar1 = &(param_1->Categories).field_0x10;
  local_178 = &param_1->Categories;
  uStack_16c = 1;
  iStack_15c = 0;
  if (iVar13 != 0) {
    puVar24 = *(uint **)&(param_1->Categories).field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar19 = *puVar24;
    iVar23 = 0;
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar20;
      iVar23 = iVar23 + 0x20;
      iVar20 = iVar20 + 1;
      iStack_15c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14ec2cdcd;
      uVar19 = puVar24[lVar11 + 1];
    }
    uStack_16c = -uVar19 & uVar19;
    uVar2 = (ulonglong)uStack_16c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_148 = (int)lVar11;
    iStack_15c = iVar23 + -1 + local_148;
    if (iVar13 < iStack_15c) {
      iStack_15c = iVar13;
    }
  }
LAB_14ec2cdcd:
  uVar19 = *(uint *)&(param_1->Categories).field_0x28;
  uStack_154 = local_44;
  bVar10 = (byte)uVar19 & 0x1f;
  iStack_150 = *(int *)&(param_1->Categories).field_0x8 - *(int *)&(param_1->Categories).field_0x34;
  uVar18 = uVar19 & 0xffffffe0;
  iVar26 = (int)uVar19 >> 5;
  uStack_1cc = 1 << bVar10;
  uVar15 = -1 << bVar10;
  uStack_160 = 0xffffffff;
  TStack_f8._padding_ = CONCAT44(uStack_16c,iVar20);
  TStack_f8.CurrentBitIndex = iStack_15c;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  TStack_f8._28_4_ = local_44;
  TStack_f8.BaseBitIndex = iVar23;
  uStack_d8 = CONCAT44(uStack_14c,iStack_150);
  local_1d0 = iVar26;
  pTStack_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  local_1c0 = uVar15;
  uStack_1bc = uVar19;
  uStack_1b8 = uVar18;
  iStack_170 = iVar20;
  local_168 = puVar1;
  local_158 = iVar23;
  local_100 = local_178;
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar13 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Categories).field_0x28;
  if (uVar19 != uVar4) {
    puVar21 = *(undefined1 **)&(param_1->Categories).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar15 = uVar15 & *(uint *)(puVar21 + (longlong)iVar26 * 4);
    while (uVar15 == 0) {
      uStack_1b8 = uVar18 + 0x20;
      local_1d0 = iVar26 + 1;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < local_1d0)
      goto LAB_14ec2cf08;
      uVar15 = *(uint *)(puVar21 + (longlong)iVar26 * 4 + 4);
      local_1c0 = 0xffffffff;
      uVar18 = uStack_1b8;
      iVar26 = local_1d0;
    }
    uStack_1cc = -uVar15 & uVar15;
    uVar2 = (ulonglong)uStack_1cc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_144 = (int)lVar11;
    uStack_1bc = (uVar18 - 1) + local_144;
    if ((int)uVar4 < (int)uStack_1bc) {
LAB_14ec2cf08:
      uStack_1bc = uVar4;
    }
  }
  TStack_1a0._padding_ = CONCAT44(uStack_1cc,local_1d0);
  local_1a8 = &param_1->Categories;
  TStack_1a0.CurrentBitIndex = uStack_1bc;
  TStack_1a0.UnvisitedBitMask = local_1c0;
  TStack_1a0._28_4_ = uStack_1b4;
  TStack_1a0.BaseBitIndex = uStack_1b8;
  TStack_1a0.Array = pTStack_1c8;
  local_180 = CONCAT44(local_180._4_4_,
                       *(int *)&(param_1->Categories).field_0x8 -
                       *(int *)&(param_1->Categories).field_0x34);
  local_80 = pTStack_1c8;
  uStack_68 = local_180;
  local_90 = local_1a8;
  lStack_88 = TStack_1a0._padding_;
  uStack_78 = TStack_1a0._16_8_;
  local_70 = TStack_1a0._24_8_;
  do {
    pTVar25 = local_100;
    if (*(int *)&local_100->field_0x8 - *(int *)&local_100->field_0x34 != (int)uStack_d8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaCategoryDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_f8.CurrentBitIndex == iStack_74) && (TStack_f8.Array == local_80)) &&
       (pTVar25 == local_90)) {
      if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
      return;
    }
    lVar11 = (longlong)TStack_f8.CurrentBitIndex * 200 + *(longlong *)pTVar25;
    ::FName::ToString((FName *)(lVar11 + 8),&local_1f0);
    if ((*(longlong *)(lVar11 + 0x10) != 0) && (5 < (byte)LogOnlineSchema._0_1_)) {
      ::FName::ToString((FName *)(lVar11 + 0x10),&local_d0);
      Logging::Private::BasicLog<6>
                (&`UE::Online::LogSchemaDefinition'::`88'::LOG_Static,
                 (FLogCategoryBase *)&LogOnlineSchema);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
    }
    if ((*(longlong *)(lVar11 + 0x18) != 0) && (5 < (byte)LogOnlineSchema._0_1_)) {
      ::FName::ToString((FName *)(lVar11 + 0x18),&local_c0);
      Logging::Private::BasicLog<6>
                (&`UE::Online::LogSchemaDefinition'::`109'::LOG_Static,
                 (FLogCategoryBase *)&LogOnlineSchema);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    iVar20 = *(int *)(lVar11 + 0x48);
    pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar11 + 0x30);
    iStack_128 = 0;
    pTVar25 = (TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
               *)(lVar11 + 0x20);
    local_110 = 0;
    uStack_124 = 1;
    iStack_114 = 0;
    if (iVar20 != 0) {
      pTVar22 = pTVar27;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x40) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x40);
      }
      uVar19 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
      while (uVar19 == 0) {
        lVar12 = (longlong)iStack_128;
        local_110 = local_110 + 0x20;
        iStack_128 = iStack_128 + 1;
        iStack_114 = iVar20;
        if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_128)
        goto LAB_14ec2d13d;
        uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uStack_124 = -uVar19 & uVar19;
      uVar2 = (ulonglong)uStack_124 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_140 = (int)lVar12;
      iStack_114 = local_110 + -1 + local_140;
      if (iVar20 < iStack_114) {
        iStack_114 = iVar20;
      }
    }
LAB_14ec2d13d:
    uVar19 = *(uint *)(lVar11 + 0x48);
    iStack_10c = iStack_15c;
    iStack_108 = *(int *)(lVar11 + 0x28) - *(int *)(lVar11 + 0x54);
    uVar15 = uVar19 & 0xffffffe0;
    TStack_1a0._padding_ = CONCAT44(uStack_124,iStack_128);
    uStack_118 = 0xffffffff;
    TStack_1a0.CurrentBitIndex = iStack_114;
    TStack_1a0.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar19 >> 5;
    TStack_1a0._28_4_ = iStack_15c;
    TStack_1a0.BaseBitIndex = local_110;
    local_180 = CONCAT44(uStack_104,iStack_108);
    local_244 = uVar19;
    local_1b0 = pTVar25;
    local_1a8 = pTVar25;
    TStack_1a0.Array = pTVar27;
    local_138 = pTVar27;
    local_130 = pTVar25;
    local_120 = pTVar27;
    if ((((int)uVar19 < 0) || (iVar20 < (int)uVar19)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar18 = *(uint *)(lVar11 + 0x48);
    if (uVar19 != uVar18) {
      pTVar22 = pTVar27;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x40) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar11 + 0x40);
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) &
               *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
      while (uVar19 == 0) {
        lVar11 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar19 = uVar18;
        local_244 = uVar18;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14ec2d261;
        uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_13c = (int)lVar11;
      uVar19 = (uVar15 - 1) + local_13c;
      local_244 = uVar19;
      if ((int)uVar18 < (int)uVar19) {
        uVar19 = uVar18;
        local_244 = uVar18;
      }
    }
LAB_14ec2d261:
    while( true ) {
      pTVar6 = local_1a8;
      if (*(int *)&local_1a8->field_0x8 - *(int *)&local_1a8->field_0x34 != (int)local_180) {
        local_248[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaAttributeDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_248);
      }
      if (((TStack_1a0.CurrentBitIndex == uVar19) && (TStack_1a0.Array == pTVar27)) &&
         (pTVar6 == pTVar25)) break;
      lVar11 = *(longlong *)pTVar6 + (longlong)TStack_1a0.CurrentBitIndex * 0x28;
      if (5 < (byte)LogOnlineSchema._0_1_) {
        ::FName::ToString((FName *)(lVar11 + 0x18),&local_a0);
        bVar10 = *(byte *)(lVar11 + 0x11);
        bVar7 = true;
        local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_200.Data.ArrayNum = 0;
        local_200.Data.ArrayMax = 0;
        for (; bVar10 != 0; bVar10 = bVar10 & ~(~bVar10 + 1)) {
          bVar17 = bVar10 & ~bVar10 + 1;
          if (bVar7) {
            bVar7 = false;
          }
          else {
            ::FString::AppendChars(&local_200,L"|",1);
          }
          if (bVar17 == 0) {
LAB_14ec2d373:
            _Str = L"None";
          }
          else if (bVar17 == 1) {
            _Str = L"Searchable";
          }
          else if (bVar17 == 2) {
            _Str = L"Public";
          }
          else if (bVar17 == 4) {
            _Str = L"Private";
          }
          else {
            if (bVar17 != 8) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                                 ,0x61,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              goto LAB_14ec2d373;
            }
            _Str = L"SchemaCompatibilityId";
          }
          sVar9 = wcslen(_Str);
          ::FString::AppendChars(&local_200,_Str,(int)sVar9);
        }
        cVar3 = *(char *)(lVar11 + 0x10);
        if (((cVar3 != '\x01') && (cVar3 != '\x02')) &&
           ((cVar3 != '\x03' &&
            ((cVar3 != '\x04' &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\SchemaTypes.cpp"
                                 ,0x8b,L""), bVar7)))))) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FName::ToString((FName *)(lVar11 + 8),&local_b0);
        Logging::Private::BasicLog<6>
                  (&`UE::Online::LogSchemaDefinition'[::D]::LOG_Static,
                   (FLogCategoryBase *)&LogOnlineSchema);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
        pTVar25 = local_1b0;
        uVar19 = local_244;
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          pTVar25 = local_1b0;
          uVar19 = local_244;
        }
      }
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
      pTVar27 = local_138;
    }
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  } while( true );
}

// NotImplemented @ 14ec2d5a0

FOnlineError * __cdecl
UE::Online::Errors::NotImplemented
          (FOnlineError *__return_storage_ptr__,TOptional<UE::Online::FOnlineError> *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  TSharedRef<UE::Online::FOnlineError,1> *pTVar4;
  FText *pFVar5;
  FString *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FOnlineError *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FString local_88;
  FOnlineError *local_78;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<UE::Online::FOnlineError,1> local_58;
  FString local_48;
  FText local_38;
  
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_78 = (FOnlineError *)0x0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->bIsSet != false) {
    pTVar4 = MakeShared<UE::Online::FOnlineError,1,UE::Online::FOnlineError_const_&>
                       (&local_58,&param_1->TypedValue);
    local_60.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_78 = pTVar4->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  FVar2.ReferenceController = FStack_70.ReferenceController;
  pFVar8 = local_78;
  if (FStack_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"OnlineErrors",L"NotImplemented",L"Not implemented");
  pFVar6 = ::FString::FString(&local_48,"Common.NotImplemented");
  pTVar7 = ::operator_new(0x48);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (__return_storage_ptr__->Details).Object = (IOnlineErrorDetails *)0x10;
    (__return_storage_ptr__->Details).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnlineErrorDetails_Online_UE___00_SharedPointerInternals__6B_
    ;
    ::FString::FString(&local_88,L"not_implemented");
    pTVar7[1]._padding_ = (longlong)&___7FOnlineErrorDetails_Online_UE__6B_;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    *(FScriptContainerElement **)&pTVar7[1].SharedReferenceCount =
         (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar7[2]._padding_ = (pFVar6->Data).ArrayNum;
    *(int *)((longlong)&pTVar7[2]._padding_ + 4) = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    *(FScriptContainerElement **)&pTVar7[2].SharedReferenceCount =
         local_88.Data.AllocatorInstance.Data;
    *(int *)&pTVar7[3]._padding_ = local_88.Data.ArrayNum;
    *(int *)((longlong)&pTVar7[3]._padding_ + 4) = local_88.Data.ArrayMax;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FText::FText((FText *)&pTVar7[3].SharedReferenceCount,pFVar5);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FOnlineError *)(*pcVar1)();
        return pFVar8;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    (__return_storage_ptr__->Details).Object = (IOnlineErrorDetails *)(pTVar7 + 1);
    (__return_storage_ptr__->Details).SharedReferenceCount.ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar7;
  }
  (__return_storage_ptr__->Inner).Object = pFVar8;
  (__return_storage_ptr__->Inner).SharedReferenceCount.ReferenceController =
       FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  __return_storage_ptr__->ErrorCode = 0x100000010000000e;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  return __return_storage_ptr__;
}

// SchemaNameCrc32 @ 14ec37110

uint __cdecl UE::Online::`anonymous_namespace'::SchemaNameCrc32(FName *param_1,uint param_2)

{
  wchar_t wVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  FString local_18;
  
  ::FName::ToString(param_1,&local_18);
  uVar2 = ~param_2;
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar3.Data = local_18.Data.AllocatorInstance.Data;
  }
  wVar1 = *(wchar_t *)FVar3.Data;
  while (wVar1 != L'\0') {
    FVar3.Data = FVar3.Data + 2;
    uVar2 = FCrc::CRCTablesSB8[1][(ulonglong)(uVar2 >> 0x10) & 0xff] ^
            FCrc::CRCTablesSB8[2][((ulonglong)(ushort)wVar1 ^ (ulonglong)uVar2) >> 8 & 0xff] ^
            FCrc::CRCTablesSB8[0][uVar2 >> 0x18] ^
            FCrc::CRCTablesSB8[3][((ulonglong)(ushort)wVar1 ^ (ulonglong)uVar2) & 0xff];
    wVar1 = *(wchar_t *)FVar3.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return ~uVar2;
}

// SerializeForLog @ 14ec371c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl UE::Online::SerializeForLog(FCbWriter *param_1,FOnlineError *param_2)

{
  int iVar1;
  IOnlineErrorDetails *pIVar2;
  FOnlineError *this;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  FString *pFVar8;
  undefined8 *puVar9;
  FTextFormat *pFVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_478
  ;
  FText local_468;
  FText local_458;
  FString local_448;
  char *local_438;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  uchar *local_428;
  int iStack_420;
  undefined4 uStack_41c;
  FString local_418;
  char *local_408;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  FScriptContainerElement *local_3f8;
  int iStack_3f0;
  undefined4 uStack_3ec;
  FString local_3e8;
  char *local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  FScriptContainerElement *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  FString local_3b8;
  char *local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  wchar_t *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  FString local_388;
  char *local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  FScriptContainerElement *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  char *local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  FScriptContainerElement *local_348;
  int iStack_340;
  undefined4 uStack_33c;
  char *local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  FScriptContainerElement *local_328;
  int iStack_320;
  undefined4 uStack_31c;
  char *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  FScriptContainerElement *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  char *local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  FScriptContainerElement *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  FFormatArgumentValue local_2d8;
  FFormatArgumentValue local_2b8;
  FFormatArgumentValue local_298;
  FFormatArgumentValue local_278;
  TStringView<wchar_t> local_258;
  TStringView<char8_t> local_248;
  TStringView<wchar_t> local_238;
  FText local_228;
  void *local_218 [2];
  TStringView<char8_t> local_208;
  TStringView<wchar_t> local_1f8;
  void *local_1e8 [2];
  FString local_1d8;
  TStringView<char8_t> local_1c8;
  TStringView<wchar_t> local_1b8;
  TStringView<char8_t> local_1a8;
  TStringView<wchar_t> local_198;
  FText local_188;
  FText local_178;
  TStringView<char8_t> local_168;
  TStringView<wchar_t> local_158;
  FText local_148;
  FText local_138;
  TStringView<char8_t> local_128;
  TStringView<wchar_t> local_118;
  FText local_108;
  FText local_f8;
  TStringView<char8_t> local_e8;
  TStringView<wchar_t> local_d8;
  FText local_c8;
  FText local_b8;
  TStringView<char8_t> local_a8;
  TStringView<char8_t> local_98;
  FText local_88;
  TStringView<char8_t> local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  FCbWriter::BeginObject(param_1);
  uStack_430 = 5;
  local_428 = "OnlineError";
  iStack_420 = 0xb;
  local_438 = "$type";
  local_128._12_4_ = uStack_42c;
  local_128.Size = 5;
  local_128.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_128);
  local_98._12_4_ = uStack_41c;
  local_98.Size = iStack_420;
  local_98.DataPtr = local_428;
  FCbWriter::AddString(param_1,&local_98);
  FText::FText(&local_68);
  local_478.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_478.Pairs.ArrayNum = 0;
  local_478.Pairs.ArrayMax = 0;
  bVar5 = false;
  FOnlineError::GetErrorId(param_2,&local_448);
  pFVar7 = FText::FromString(&local_88,&local_448);
  local_278.Type = Text;
  FText::FText((FText *)&local_278.TextValue,pFVar7);
  if ((local_278.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FString::FString(&local_418,L"ErrorCode");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_478,&local_418,&local_278);
  if (local_418.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_418.Data.AllocatorInstance.Data);
  }
  if (local_278.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_278.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  local_3f8 = local_448.Data.AllocatorInstance.Data;
  uStack_400 = 9;
  iStack_3f0 = local_448.Data.ArrayNum + -1;
  if (local_448.Data.ArrayNum == 0) {
    iStack_3f0 = 0;
  }
  local_408 = "ErrorCode";
  local_78._12_4_ = uStack_3fc;
  local_78.Size = 9;
  local_78.DataPtr = "ErrorCode";
  FCbWriter::SetName(param_1,&local_78);
  local_258._12_4_ = uStack_3ec;
  local_258.Size = iStack_3f0;
  local_258.DataPtr = (wchar_t *)local_3f8;
  FCbWriter::AddString(param_1,&local_258);
  pIVar2 = (param_2->Details).Object;
  iVar6 = 0;
  if (pIVar2 != (IOnlineErrorDetails *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_458,param_2);
    local_2d8.Type = Text;
    local_2d8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_458.TextData.Reference;
    if (local_458.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_458.TextData.Reference + 8))
                (local_458.TextData.Reference,local_res10);
    }
    local_2d8.TextValue.field0_0x0.TypedValue.Flags = local_458.Flags;
    if ((local_2d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_3e8,L"ErrorDetails");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_478,&local_3e8,&local_2d8);
    if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
    }
    if (local_2d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2d8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar8 = FText::ToString(&local_458);
    uStack_3d0 = 0xc;
    local_3c8 = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    iStack_3c0 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_3c0 = iVar6;
    }
    local_3d8 = "ErrorDetails";
    local_248._12_4_ = uStack_3cc;
    local_248.Size = 0xc;
    local_248.DataPtr = "ErrorDetails";
    FCbWriter::SetName(param_1,&local_248);
    local_238._12_4_ = uStack_3bc;
    local_238.Size = iStack_3c0;
    local_238.DataPtr = (wchar_t *)local_3c8;
    FCbWriter::AddString(param_1,&local_238);
    bVar5 = true;
    if (((param_2->Details).Object == (IOnlineErrorDetails *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (param_2->Details).Object;
    pFVar8 = (FString *)(**(code **)*pIVar2)(pIVar2,local_218,param_2);
    pFVar7 = FText::FromString(&local_228,pFVar8);
    local_298.Type = Text;
    FText::FText((FText *)&local_298.TextValue,pFVar7);
    if ((local_298.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_3b8,L"FriendlyErrorCode");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_478,&local_3b8,&local_298);
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    if (local_298.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_298.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_228.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
    }
    if (local_218[0] != (void *)0x0) {
      FMemory::Free(local_218[0]);
    }
    if (((param_2->Details).Object == (IOnlineErrorDetails *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (param_2->Details).Object;
    puVar9 = (undefined8 *)(**(code **)*pIVar2)(pIVar2,local_1e8,param_2);
    uStack_3a0 = 0x11;
    local_398 = (wchar_t *)*puVar9;
    iStack_390 = *(int *)(puVar9 + 1) + -1;
    if (*(int *)(puVar9 + 1) == 0) {
      iStack_390 = iVar6;
    }
    local_3a8 = "FriendlyErrorCode";
    local_208._12_4_ = uStack_39c;
    local_208.Size = 0x11;
    local_208.DataPtr = "FriendlyErrorCode";
    FCbWriter::SetName(param_1,&local_208);
    local_1f8._12_4_ = uStack_38c;
    local_1f8.Size = iStack_390;
    local_1f8.DataPtr = local_398;
    FCbWriter::AddString(param_1,&local_1f8);
    if (local_1e8[0] != (void *)0x0) {
      FMemory::Free(local_1e8[0]);
    }
    if (local_458.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
    }
  }
  this = (param_2->Inner).Object;
  if (this == (FOnlineError *)0x0) {
    if (bVar5) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_f8,L"OnlineError",L"ErrorDetails",
                          L"{ErrorCode} ({FriendlyErrorCode}), {ErrorDetails}");
      pFVar10 = FTextFormat::FTextFormat(&local_38,pFVar7,Default);
      pFVar7 = FText::Format(&local_108,pFVar10,&local_478);
      pFVar8 = FText::ToString(pFVar7);
      uStack_310 = 5;
      local_308 = (pFVar8->Data).AllocatorInstance.Data;
      iVar1 = (pFVar8->Data).ArrayNum;
      iStack_300 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_300 = iVar6;
      }
      local_318 = "$text";
      local_a8._12_4_ = uStack_30c;
      local_a8.Size = 5;
      local_a8.DataPtr = "$text";
      FCbWriter::SetName(param_1,&local_a8);
      local_118._12_4_ = uStack_2fc;
      local_118.Size = iStack_300;
      local_118.DataPtr = (wchar_t *)local_308;
      FCbWriter::AddString(param_1,&local_118);
      local_b8.TextData.Reference = local_f8.TextData.Reference;
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        local_b8.TextData.Reference = local_f8.TextData.Reference;
      }
    }
    else {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_b8,L"OnlineError",L"ErrorCode",L"{ErrorCode}");
      pFVar10 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
      pFVar7 = FText::Format(&local_c8,pFVar10,&local_478);
      pFVar8 = FText::ToString(pFVar7);
      uStack_2f0 = 5;
      local_2e8 = (pFVar8->Data).AllocatorInstance.Data;
      iVar1 = (pFVar8->Data).ArrayNum;
      iStack_2e0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_2e0 = iVar6;
      }
      local_2f8 = "$text";
      local_e8._12_4_ = uStack_2ec;
      local_e8.Size = 5;
      local_e8.DataPtr = "$text";
      FCbWriter::SetName(param_1,&local_e8);
      local_d8._12_4_ = uStack_2dc;
      local_d8.Size = iStack_2e0;
      local_d8.DataPtr = (wchar_t *)local_2e8;
      FCbWriter::AddString(param_1,&local_d8);
      if (local_c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    pIVar2 = (this->Details).Object;
    if (pIVar2 == (IOnlineErrorDetails *)0x0) {
      pFVar8 = FOnlineError::GetErrorId(this,&local_1d8);
      FText::FromString(&local_468,pFVar8);
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
    }
    else {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_468,this);
    }
    local_2b8.Type = Text;
    local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_468.TextData.Reference;
    if (local_468.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_468.TextData.Reference + 8))
                (local_468.TextData.Reference,local_res18);
    }
    local_2b8.TextValue.field0_0x0.TypedValue.Flags = local_468.Flags;
    if ((local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ::FString::FString(&local_388,L"InnerError");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_478,&local_388,&local_2b8);
    if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.Data.AllocatorInstance.Data);
    }
    if (local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2b8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    pFVar8 = FText::ToString(&local_468);
    uStack_370 = 10;
    local_368 = (pFVar8->Data).AllocatorInstance.Data;
    iVar1 = (pFVar8->Data).ArrayNum;
    iStack_360 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_360 = 0;
    }
    local_378 = "InnerError";
    local_1c8._12_4_ = uStack_36c;
    local_1c8.Size = 10;
    local_1c8.DataPtr = "InnerError";
    FCbWriter::SetName(param_1,&local_1c8);
    local_1b8._12_4_ = uStack_35c;
    local_1b8.Size = iStack_360;
    local_1b8.DataPtr = (wchar_t *)local_368;
    FCbWriter::AddString(param_1,&local_1b8);
    if (local_468.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_468.TextData.Reference + 0x10))();
    }
    if (bVar5) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_178,L"OnlineError",L"ErrorDetailsErrorInner",
                          L"{ErrorCode} ({FriendlyErrorCode}), {ErrorDetails}, InnerError:{InnerError}"
                         );
      pFVar10 = FTextFormat::FTextFormat(&local_58,pFVar7,Default);
      pFVar7 = FText::Format(&local_188,pFVar10,&local_478);
      pFVar8 = FText::ToString(pFVar7);
      uStack_350 = 5;
      local_348 = (pFVar8->Data).AllocatorInstance.Data;
      iVar1 = (pFVar8->Data).ArrayNum;
      iStack_340 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_340 = iVar6;
      }
      local_358 = "$text";
      local_1a8._12_4_ = uStack_34c;
      local_1a8.Size = 5;
      local_1a8.DataPtr = "$text";
      FCbWriter::SetName(param_1,&local_1a8);
      local_198._12_4_ = uStack_33c;
      local_198.Size = iStack_340;
      local_198.DataPtr = (wchar_t *)local_348;
      FCbWriter::AddString(param_1,&local_198);
      local_b8.TextData.Reference = local_178.TextData.Reference;
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
        local_b8.TextData.Reference = local_178.TextData.Reference;
      }
    }
    else {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_138,L"OnlineError",L"ErrorInner",
                          L"{ErrorCode}, InnerError:{InnerError}");
      pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar7,Default);
      pFVar7 = FText::Format(&local_148,pFVar10,&local_478);
      pFVar8 = FText::ToString(pFVar7);
      uStack_330 = 5;
      local_328 = (pFVar8->Data).AllocatorInstance.Data;
      iVar1 = (pFVar8->Data).ArrayNum;
      iStack_320 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_320 = iVar6;
      }
      local_338 = "$text";
      local_168._12_4_ = uStack_32c;
      local_168.Size = 5;
      local_168.DataPtr = "$text";
      FCbWriter::SetName(param_1,&local_168);
      local_158._12_4_ = uStack_31c;
      local_158.Size = iStack_320;
      local_158.DataPtr = (wchar_t *)local_328;
      FCbWriter::AddString(param_1,&local_158);
      local_b8.TextData.Reference = local_138.TextData.Reference;
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
        local_b8.TextData.Reference = local_138.TextData.Reference;
      }
    }
  }
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  FCbWriter::EndObject(param_1);
  if (local_448.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_448.Data.AllocatorInstance.Data);
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_478.Pairs.AllocatorInstance.Data,
             local_478.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_478.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_478.Pairs.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return;
}

// SortLobbies @ 14ec37ec0

void __cdecl
UE::Online::SortLobbies
          (TArray<UE::Online::FFindLobbySearchFilter,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TSharedRef<UE::Online::FLobby_const_,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// ToLocText @ 14ec37f60

FText * __cdecl UE::Online::ToLocText(FText *__return_storage_ptr__,EUserPresenceStatus param_1)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  uint uVar3;
  FText *pFVar4;
  int *piVar5;
  undefined1 local_res10 [8];
  
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar5 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FText::AsLocalizable_Advanced_LocText(&OnlineText,L"OnlinePresence",L"Online",L"Online");
    atexit(`UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__OnlineText__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FText::AsLocalizable_Advanced_LocText(&OfflineText,L"OnlinePresence",L"Offline",L"Offline");
    atexit(`UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__OfflineText__);
    _Init_thread_footer(&::_TSS1);
  }
  if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    FText::AsLocalizable_Advanced_LocText(&AwayText,L"OnlinePresence",L"Away",L"Away");
    atexit(`UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__AwayText__);
    _Init_thread_footer(&::_TSS2);
  }
  if ((*piVar5 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&DoNotDisturbText,L"OnlinePresence",L"DoNotDisturb",L"Do Not Disturb");
    atexit(`UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__DoNotDisturbText__);
    _Init_thread_footer(&::_TSS3);
  }
  if ((*piVar5 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    FText::AsLocalizable_Advanced_LocText(&UnknownText,L"OnlinePresence",L"Unknown",L"Unknown");
    atexit(`UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__UnknownText__);
    _Init_thread_footer(&::_TSS4);
  }
  switch(param_1) {
  case Offline:
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar2 = OfflineText.TextData;
    (__return_storage_ptr__->TextData).Reference = OfflineText.TextData.Reference;
    uVar3 = OfflineText.Flags;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res10);
      uVar3 = OfflineText.Flags;
    }
    break;
  case Online:
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar2 = OnlineText.TextData;
    (__return_storage_ptr__->TextData).Reference = OnlineText.TextData.Reference;
    uVar3 = OnlineText.Flags;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res10);
      uVar3 = OnlineText.Flags;
    }
    break;
  case Away:
  case ExtendedAway:
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar2 = AwayText.TextData;
    (__return_storage_ptr__->TextData).Reference = AwayText.TextData.Reference;
    uVar3 = AwayText.Flags;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res10);
      uVar3 = AwayText.Flags;
    }
    break;
  case DoNotDisturb:
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar2 = DoNotDisturbText.TextData;
    (__return_storage_ptr__->TextData).Reference = DoNotDisturbText.TextData.Reference;
    uVar3 = DoNotDisturbText.Flags;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res10);
      uVar3 = DoNotDisturbText.Flags;
    }
    break;
  case Unknown:
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    TVar2 = UnknownText.TextData;
    (__return_storage_ptr__->TextData).Reference = UnknownText.TextData.Reference;
    uVar3 = UnknownText.Flags;
    if (TVar2.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar2.Reference + 8))(TVar2.Reference,local_res10);
      uVar3 = UnknownText.Flags;
    }
    break;
  default:
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
    }
    uVar3 = pFVar4->Flags;
  }
  __return_storage_ptr__->Flags = uVar3;
  return __return_storage_ptr__;
}

// ToLogString @ 14ec385e0

FString * __cdecl
UE::Online::ToLogString(FString *__return_storage_ptr__,FAchievementDefinition *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *local_res10;
  FScriptContainerElement *local_res18;
  FString local_68;
  FString local_58;
  FString local_48;
  
  iVar2 = (param_1->StatDefinitions).ArrayNum;
  pFVar5 = (param_1->StatDefinitions).AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  bVar3 = true;
  pFVar1 = pFVar5 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((param_1->StatDefinitions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Online::FAchievementStatDefinition_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res10);
    }
    if (pFVar5 == pFVar1) break;
    if (bVar3) {
      bVar3 = false;
    }
    else {
      ::FString::AppendChars(&local_68,L", ",2);
    }
    ::FString::PrintfImpl(&local_58,L"StatId=\"%s\" UnlockThreshold=%d");
    iVar6 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar5 = pFVar5 + 0x18;
  }
  pwVar4 = L"true";
  local_res10 = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    local_res10 = local_68.Data.AllocatorInstance.Data;
  }
  if (param_1->bIsHidden == false) {
    pwVar4 = L"false";
  }
  ::FString::FString(&local_48,pwVar4);
  local_res18 = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    local_res18 = local_48.Data.AllocatorInstance.Data;
  }
  FText::ToString(&param_1->FlavorText);
  FText::ToString(&param_1->LockedDescription);
  FText::ToString(&param_1->LockedDisplayName);
  FText::ToString(&param_1->UnlockedDescription);
  FText::ToString(&param_1->UnlockedDisplayName);
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"AchievementId=\"%s\" UnlockedDisplayName=\"%s\" UnlockedDescription=\"%s\" LockedDisplayName=\"%s\" LockedDescription=\"%s\" FlavorText=\"%s\" UnlockedIconUrl=\"%s\" LockedIconUrl=\"%s\" bIsHidden=%s StatDefinitions=[%s]"
            );
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToLogString @ 14ec38850

FString * __cdecl
UE::Online::ToLogString(FString *__return_storage_ptr__,FAchievementStatDefinition *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"StatId=\"%s\" UnlockThreshold=%d");
  return __return_storage_ptr__;
}

// ToLogString @ 14ec38890

FString * __cdecl
UE::Online::ToLogString(FString *__return_storage_ptr__,FAchievementState *param_1)

{
  FString local_18;
  
  FDateTime::ToString(&param_1->UnlockTime,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"AchievementId=\"%s\" Progress=%.2f UnlockTime=%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToLogString @ 14ec38910

FString * __cdecl UE::Online::ToLogString(FString *__return_storage_ptr__,FDateTime *param_1)

{
  FDateTime::ToString(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToLogString @ 14ec38940

FString * __cdecl UE::Online::ToLogString(FString *__return_storage_ptr__,ISession *param_1)

{
  (**(code **)((longlong)*param_1 + 0x38))(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToLogString @ 14ec38970

FString * __cdecl UE::Online::ToLogString(FString *__return_storage_ptr__,ISessionInvite *param_1)

{
  (**(code **)((longlong)*param_1 + 0x20))(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 14ec389a0

FString * __cdecl
UE::Online::Errors::ErrorCode::ToString(FString *__return_storage_ptr__,ulong64 param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llx.%llx.%llx");
  return __return_storage_ptr__;
}

// TranslateAttributeType @ 14ec389e0

ESchemaServiceAttributeSupportedTypeFlags __cdecl
UE::Online::`anonymous_namespace'::TranslateAttributeType(ESchemaAttributeType param_1)

{
  code *pcVar1;
  bool bVar2;
  ESchemaServiceAttributeSupportedTypeFlags EVar3;
  
  if (param_1 != None) {
    if (param_1 == Bool) {
      return Bool;
    }
    if (param_1 == Int64) {
      return Int64;
    }
    if (param_1 == Double) {
      return Double;
    }
    if (param_1 == String) {
      return String;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\Schema.cpp"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  return None;
}

// operator() @ 15059d750

bool __thiscall `UE::Online::LexFromString'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5471694833665966211>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5471694833665966211>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059d7a0

bool __thiscall `UE::Online::LexFromString'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5471694833665966157>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5471694833665966157>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15059d7f0

bool __thiscall `UE::Online::LexFromString'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<5471694833665966184>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5471694833665966184>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

