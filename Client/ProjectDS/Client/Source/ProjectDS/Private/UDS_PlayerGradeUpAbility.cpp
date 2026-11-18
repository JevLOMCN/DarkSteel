// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b55f7e0

UClass * __cdecl UDS_PlayerGradeUpAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerGradeUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerGradeUpAbility",
               &Z_Registration_Info_UClass_UDS_PlayerGradeUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_PlayerGradeUpAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerGradeUpAbility>,
               InternalVTableHelperCtorCaller<UDS_PlayerGradeUpAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerGradeUpAbility.InnerSingleton;
}

// UDS_PlayerGradeUpAbility @ 14b564180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_PlayerGradeUpAbility * __thiscall
UDS_PlayerGradeUpAbility::UDS_PlayerGradeUpAbility
          (UDS_PlayerGradeUpAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_PlayerGradeUpAbility @ 14b5641c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_PlayerGradeUpAbility * __thiscall
UDS_PlayerGradeUpAbility::UDS_PlayerGradeUpAbility
          (UDS_PlayerGradeUpAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_PlayerGradeUpAbility @ 14b565100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_PlayerGradeUpAbility::~UDS_PlayerGradeUpAbility(UDS_PlayerGradeUpAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b567270

UClass * __cdecl UDS_PlayerGradeUpAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerGradeUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerGradeUpAbility",
               &Z_Registration_Info_UClass_UDS_PlayerGradeUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_PlayerGradeUpAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerGradeUpAbility>,
               InternalVTableHelperCtorCaller<UDS_PlayerGradeUpAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerGradeUpAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerGradeUpAbility @ 14b568060

void __cdecl UDS_PlayerGradeUpAbility::StaticRegisterNativesUDS_PlayerGradeUpAbility(void)

{
  return;
}

// ClearVariables @ 14b827ce0

void __thiscall UDS_PlayerGradeUpAbility::ClearVariables(UDS_PlayerGradeUpAbility *this)

{
  return;
}

// OnAbilityRetryActivate @ 14b837c40

void __thiscall UDS_PlayerGradeUpAbility::OnAbilityRetryActivate(UDS_PlayerGradeUpAbility *this)

{
  return;
}

// OnCanActivate @ 14b8399f0

bool __thiscall UDS_PlayerGradeUpAbility::OnCanActivate(UDS_PlayerGradeUpAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd8);
    return pUVar2[6].field_0x11 != '\x01';
  }
  return false;
}

// OnDeactivateAbility @ 14b83f450

void __thiscall
UDS_PlayerGradeUpAbility::OnDeactivateAbility(UDS_PlayerGradeUpAbility *this,bool *param_1)

{
  return;
}

// OnOpenPlayerGradeUpWidget @ 14b841020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_PlayerGradeUpAbility::OnOpenPlayerGradeUpWidget
          (UDS_PlayerGradeUpAbility *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *pUVar5;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UDS_UserWidget *local_98;
  FWeakObjectPtr local_90;
  FName local_88;
  UDS_UserWidget *local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    pFVar3 = ::operator_new(0x20);
    pFVar7 = (FDS_ViewModelContext *)0x0;
    pFVar6 = pFVar7;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(undefined4 *)&pFVar3->field_0x1c = 0;
      pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
      *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
      (pFVar3->ViewModelName).ComparisonIndex = 0;
      (pFVar3->ViewModelName).Number = 0;
      pFVar3->ViewModelTemplateKey = None;
      pFVar6 = pFVar3;
    }
    local_78.Object = pFVar6;
    pFVar3 = ::operator_new(0x20);
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
    if (pFVar3 != (FDS_ViewModelContext *)0x0) {
      *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar3->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
      ;
      *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
      ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
      local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
    }
    if ((local_78.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar6 = local_78.Object;
    pUVar4 = FDS_ViewModelContext::StaticStruct();
    *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
    pUVar5 = UDS_ViewModelContextManager::GetInst();
    if (pUVar5 != (UDS_ViewModelContextManager *)0x0) {
      UDS_ViewModelContextManager::RegisterContext(pUVar5,&local_78);
    }
    if ((local_78.Object == (FDS_ViewModelContext *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (local_78.Object)->ViewModelTemplateKey = HUD_LevelUp;
    local_48.Object = local_78.Object;
    local_48.SharedReferenceCount.ReferenceController =
         local_78.SharedReferenceCount.ReferenceController;
    if ((FDS_ViewModelContext *)local_78.SharedReferenceCount.ReferenceController !=
        (FDS_ViewModelContext *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_98 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_98);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res18,&local_48,false);
    if (this->field_0xe9 == '\x01') {
      UDS_PlayerData::GetData((ulong64)&local_90,UDS_PlayerData::MainPlayerEntityID,false);
      bVar2 = FWeakObjectPtr::IsValid(&local_90);
      if (bVar2) {
        pFVar3 = ::operator_new(0x28);
        pFVar6 = pFVar7;
        if (pFVar3 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
          (pFVar3->ViewModelName).ComparisonIndex = 0;
          (pFVar3->ViewModelName).Number = 0;
          pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_PlayerData__6B_;
          pFVar3[1]._padding_ = 0;
          pFVar6 = pFVar3;
        }
        pFVar3 = ::operator_new(0x20);
        if (pFVar3 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar3->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PlayerData__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar6;
          pFVar7 = pFVar3;
        }
        if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar4 = FDS_ViewModelContext_PlayerData::StaticStruct();
        *(UScriptStruct **)&pFVar6->DerivedStaticStruct = pUVar4;
        pUVar5 = UDS_ViewModelContextManager::GetInst();
        if (pUVar5 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar7 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar7->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_68.Object = pFVar6;
          local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
          UDS_ViewModelContextManager::RegisterContext(pUVar5,&local_68);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        pFVar6->ViewModelTemplateKey = Data_PlayerData;
        ::FName::FName(&local_88,"DS_VM_PlayerData");
        *(FName *)&(pFVar6->ViewModelName).ComparisonIndex = local_88;
        pFVar6[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
        if (pFVar7 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar7->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar7->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_58.Object = pFVar6;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_80 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_80);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,&local_58,false);
        local_res10[0] = Success;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar7);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPostActivateAbility @ 14b8444d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PlayerGradeUpAbility::OnPostActivateAbility(UDS_PlayerGradeUpAbility *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  float local_1a0 [2];
  UDS_PlayerGradeUpAbility *local_198 [2];
  code *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  bool local_178;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PlayerGradeUpAbility::OnPostActivateAbility",0x2f,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x29,L"windowMng is nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if (this->field_0xe9 == '\x01') {
    uStack_180 = 0;
    local_188 = OnOpenPlayerGradeUpWidget;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_168);
    local_150 = &local_1b0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_PlayerGradeUpAbility____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_198[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)local_198);
      puVar2[4] = local_188;
      puVar2[5] = CONCAT44(uStack_17c,uStack_180);
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    local_1a0[0] = 0.0;
    local_198[0] = (UDS_PlayerGradeUpAbility *)((ulonglong)local_198[0] & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this_00,PlayerLevelUp,(uint *)local_198,local_1a0);
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_188,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1b8);
    UDS_WindowManager::OpenWindow(this_00,PlayerLevelUp,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_188);
    if ((local_1b0.DelegateSize != 0) &&
       (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b0,0,0,0x10);
      local_1b0.DelegateSize = 0;
    }
    if (local_178 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_17c,uStack_180),
                 (FDestructionSentinel *)&local_188);
    }
    if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
  }
  return;
}

// OnTickComponent @ 14b849290

void __thiscall
UDS_PlayerGradeUpAbility::OnTickComponent(UDS_PlayerGradeUpAbility *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  uint uVar6;
  longlong lVar7;
  FWeakObjectPtr FStackX_8;
  
  iVar1 = *(int *)&this->field_0x148;
  uVar6 = 0;
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    do {
      if ((int)uVar6 < 0) {
        return;
      }
      if (*(int *)&this->field_0x148 <= (int)uVar6) {
        return;
      }
      uVar4 = 0;
      if ((int)uVar6 < *(int *)&this->field_0x148) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStackX_8 = *(FWeakObjectPtr *)(*(longlong *)&this->field_0x140 + lVar7 * 8);
      bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&FStackX_8,
                         (void *)0x0);
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar5 + 0x368))(pUVar5,param_1);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
  }
  return;
}

