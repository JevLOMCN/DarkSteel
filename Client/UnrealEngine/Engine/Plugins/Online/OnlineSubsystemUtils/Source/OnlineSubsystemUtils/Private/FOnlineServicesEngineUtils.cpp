// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 6

// ~FOnlineServicesEngineUtils @ 14ec55fe0

void __thiscall
UE::Online::FOnlineServicesEngineUtils::~FOnlineServicesEngineUtils
          (FOnlineServicesEngineUtils *this)

{
  FDelegateHandle FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  FVar1.ID = (this->OnOnlineServicesCreatedDelegateHandle).ID;
  this->_padding_ = (longlong)&___7FOnlineServicesEngineUtils_Online_UE__6B_;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &Online::OnOnlineServicesCreated,FVar1);
  }
  DestructItems<UE::Online::FOnlineEventDelegateHandle,int>
            ((FOnlineEventDelegateHandle *)(this->ExternalUIDelegateHandles).AllocatorInstance.Data,
             (this->ExternalUIDelegateHandles).ArrayNum);
  pFVar2 = (this->ExternalUIDelegateHandles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExternalUIChangeDelegate);
  pvVar3 = *(void **)&(this->OnExternalUIChangeDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalUIChangeDelegate);
  this->_padding_ = (longlong)&___7IOnlineServicesEngineUtils_Online_UE__6B_;
  return;
}

// GetOnlineIdentifier @ 14ec76400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UE::Online::FOnlineServicesEngineUtils::GetOnlineIdentifier
          (FOnlineServicesEngineUtils *this,FWorldContext *param_1)

{
  *(undefined8 *)param_1 = 0;
  return (FName)param_1;
}

// GetOnlineIdentifier @ 14ec76410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
UE::Online::FOnlineServicesEngineUtils::GetOnlineIdentifier
          (FOnlineServicesEngineUtils *this,UWorld *param_1)

{
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// Init @ 14ec7e540

void __thiscall UE::Online::FOnlineServicesEngineUtils::Init(FOnlineServicesEngineUtils *this)

{
  FDelegateHandle FVar1;
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Online::FOnlineServicesEngineUtils>
                    ((TMulticastDelegateRegistration<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>
                      *)&Online::OnOnlineServicesCreated,
                     (FOnlineServicesEngineUtils *)&stack0x00000008,(pmf_e1fe90f6)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnOnlineServicesCreatedDelegateHandle).ID = *FVar1.ID;
  return;
}

// OnOnlineServicesCreated @ 14ec89360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineServicesEngineUtils::OnOnlineServicesCreated
          (FOnlineServicesEngineUtils *this,TSharedRef<UE::Online::IOnlineServices,1> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  bool bVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  TReferenceControllerBase<1> *local_80;
  <lambda_1> local_78;
  undefined1 local_70 [8];
  FReadAccessScope local_68;
  FOnlineEventDelegateHandle local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnExternalUIChangeDelegate,&local_68);
  if (((*(int *)&(this->OnExternalUIChangeDelegate).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(this->OnExternalUIChangeDelegate).field_0x8,
      plVar2 == (longlong *)0x0)) || (cVar11 = (**(code **)(*plVar2 + 0x38))(), cVar11 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    (**(code **)(*(longlong *)param_1->Object + 0x48))(param_1->Object,&local_88);
    if (local_88 != (longlong *)0x0) {
      if ((local_88 == (longlong *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_78.__this = this;
      puVar14 = (undefined8 *)(**(code **)(*local_88 + 0x10))(local_88,local_70);
      TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>::
      Add<_UE::Online::FOnlineServicesEngineUtils::OnOnlineServicesCreated_::__l8::<lambda_1>_>
                ((TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)> *
                 )*puVar14,&local_48,&local_78);
      iVar13 = (this->ExternalUIDelegateHandles).ArrayNum;
      piVar1 = &(this->ExternalUIDelegateHandles).ArrayMax;
      if (iVar13 == *piVar1) {
        iVar13 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1030,&(this->ExternalUIDelegateHandles).AllocatorInstance,piVar1);
      }
      (this->ExternalUIDelegateHandles).ArrayNum = iVar13 + 1;
      lVar15 = (longlong)iVar13;
      pFVar3 = (this->ExternalUIDelegateHandles).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar15 * 0x30) = 0;
      *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x28) = 0;
      uVar5 = *(undefined8 *)(pFVar3 + lVar15 * 0x30);
      uVar6 = *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 8);
      uVar7 = *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x10);
      uVar8 = *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x10 + 8);
      uVar9 = *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x20);
      uVar10 = *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x20 + 8);
      *(undefined8 *)(pFVar3 + lVar15 * 0x30) = local_48.DelegateUnbinder._0_8_;
      *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 8) = local_48.DelegateUnbinder._8_8_;
      *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x10) = local_48.DelegateUnbinder._16_8_;
      *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x10 + 8) = local_48.DelegateUnbinder._24_8_;
      *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x20) = local_48.DelegateUnbinder._32_8_;
      *(undefined8 *)(pFVar3 + lVar15 * 0x30 + 0x20 + 8) = local_48.DelegateUnbinder._40_8_;
      local_48.DelegateUnbinder._0_8_ = uVar5;
      local_48.DelegateUnbinder._8_8_ = uVar6;
      local_48.DelegateUnbinder._16_8_ = uVar7;
      local_48.DelegateUnbinder._24_8_ = uVar8;
      local_48.DelegateUnbinder._32_8_ = uVar9;
      local_48.DelegateUnbinder._40_8_ = uVar10;
      FOnlineEventDelegateHandle::~FOnlineEventDelegateHandle(&local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetEngineExternalUIBinding @ 14ec97600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Online::FOnlineServicesEngineUtils::SetEngineExternalUIBinding
          (FOnlineServicesEngineUtils *this,
          TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  FOnlineServicesRegistry *this_00;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar17;
  ForAnyElementType FVar18;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  TArray<TSharedRef<UE::Online::IOnlineServices,1>,TSizedDefaultAllocator<32>_> local_d0;
  <lambda_1> local_c0;
  longlong *local_b8;
  TReferenceControllerBase<1> *local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  longlong local_98 [3];
  longlong *plStack_80;
  undefined1 local_78 [16];
  code *local_68 [2];
  longlong local_58 [3];
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->OnExternalUIChangeDelegate,param_1);
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  this_00 = FOnlineServicesRegistry::Get();
  FOnlineServicesRegistry::GetAllServicesInstances(this_00,&local_d0);
  iVar7 = local_d0.ArrayNum;
  pTVar17 = (TSharedRef<UE::Online::IOnlineServices,1> *)
            (local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10);
  FVar18.Data = local_d0.AllocatorInstance.Data;
  while( true ) {
    if (local_d0.ArrayNum != iVar7) {
      `TCheckedPointerIterator<TSharedRef<UE::Online::IOnlineServices,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d8);
    }
    if ((TSharedRef<UE::Online::IOnlineServices,1> *)FVar18.Data == pTVar17) break;
    (**(code **)(*(longlong *)((TSharedRef<UE::Online::IOnlineServices,1> *)FVar18.Data)->Object +
                0x48))(((TSharedRef<UE::Online::IOnlineServices,1> *)FVar18.Data)->Object,&local_b8)
    ;
    if (local_b8 != (longlong *)0x0) {
      local_c0.__this = this;
      puVar13 = (undefined8 *)(**(code **)(*local_b8 + 0x10))(local_b8,local_78);
      TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)>::
      Add<_UE::Online::FOnlineServicesEngineUtils::SetEngineExternalUIBinding_::__l9::<lambda_1>_>
                ((TOnlineEventCallable<void___cdecl(UE::Online::FExternalUIStatusChanged_const_&)> *
                 )*puVar13,(FOnlineEventDelegateHandle *)local_68,&local_c0);
      iVar12 = (this->ExternalUIDelegateHandles).ArrayNum;
      piVar1 = &(this->ExternalUIDelegateHandles).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1030,&(this->ExternalUIDelegateHandles).AllocatorInstance,piVar1);
      }
      lVar14 = (longlong)iVar12;
      (this->ExternalUIDelegateHandles).ArrayNum = iVar12 + 1;
      pFVar2 = (this->ExternalUIDelegateHandles).AllocatorInstance.Data;
      *(undefined8 *)(pFVar2 + lVar14 * 0x30) = 0;
      *(undefined8 *)(pFVar2 + lVar14 * 0x30 + 0x28) = 0;
      pcVar3 = *(code **)(pFVar2 + lVar14 * 0x30);
      uVar15 = *(undefined8 *)(pFVar2 + lVar14 * 0x30 + 8);
      lVar4 = *(longlong *)(pFVar2 + lVar14 * 0x30 + 0x10);
      uVar5 = *(undefined8 *)(pFVar2 + lVar14 * 0x30 + 0x10 + 8);
      uVar6 = *(undefined8 *)(pFVar2 + lVar14 * 0x30 + 0x20);
      plVar16 = *(longlong **)(pFVar2 + lVar14 * 0x30 + 0x20 + 8);
      *(code **)(pFVar2 + lVar14 * 0x30) = local_68[0];
      *(code **)(pFVar2 + lVar14 * 0x30 + 8) = local_68[1];
      *(longlong *)(pFVar2 + lVar14 * 0x30 + 0x10) = local_58[0];
      *(longlong *)(pFVar2 + lVar14 * 0x30 + 0x10 + 8) = local_58[1];
      *(longlong *)(pFVar2 + lVar14 * 0x30 + 0x20) = local_58[2];
      *(longlong **)(pFVar2 + lVar14 * 0x30 + 0x20 + 8) = plStack_40;
      local_68[0] = pcVar3;
      local_68[1] = (code *)uVar15;
      local_58[0] = lVar4;
      local_58[1] = uVar5;
      local_58[2] = uVar6;
      plStack_40 = plVar16;
      if (pcVar3 != (code *)0x0) {
        Core::Private::Function::CheckCallable(pcVar3);
        pcVar3 = local_68[0];
        plVar16 = local_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar16 = plStack_40;
        }
        uVar15 = (**(code **)(*plVar16 + 8))();
        (*pcVar3)(uVar15);
        plStack_80 = plStack_40;
        lVar4 = local_58[2];
        pcVar3 = local_68[1];
        local_a8 = local_68[0];
        uVar8 = (undefined4)local_58[0];
        uVar9 = local_58[0]._4_4_;
        uVar10 = (undefined4)local_58[1];
        uVar11 = local_58[1]._4_4_;
        local_68[0] = (code *)0x0;
        local_68[1] = (code *)uStack_a0;
        local_58[2] = local_98[2];
        plStack_40 = (longlong *)0x0;
        local_58[0] = CONCAT44(local_98[0]._4_4_,(undefined4)local_98[0]);
        local_58[1] = CONCAT44(local_98[1]._4_4_,(undefined4)local_98[1]);
        uStack_a0 = pcVar3;
        local_98[0]._0_4_ = uVar8;
        local_98[0]._4_4_ = uVar9;
        local_98[1]._0_4_ = uVar10;
        local_98[1]._4_4_ = uVar11;
        local_98[2] = lVar4;
        if (local_a8 != (code *)0x0) {
          plVar16 = local_98;
          if (plStack_80 != (longlong *)0x0) {
            plVar16 = plStack_80;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
        if (local_68[0] != (code *)0x0) {
          plVar16 = local_58;
          if (plStack_40 != (longlong *)0x0) {
            plVar16 = plStack_40;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    FVar18.Data = FVar18.Data + 0x10;
  }
  DestructItems<TSharedRef<UE::Online::IOnlineServices,1>,int>
            ((TSharedRef<UE::Online::IOnlineServices,1> *)local_d0.AllocatorInstance.Data,
             local_d0.ArrayNum);
  if ((TSharedRef<UE::Online::IOnlineServices,1> *)local_d0.AllocatorInstance.Data !=
      (TSharedRef<UE::Online::IOnlineServices,1> *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

