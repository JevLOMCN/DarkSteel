// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationBudgetAllocator
// Functions: 7

// GetBudgetAllocatorForWorld @ 14a68f9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

IAnimationBudgetAllocator * __thiscall
FAnimationBudgetAllocatorModule::GetBudgetAllocatorForWorld
          (FAnimationBudgetAllocatorModule *this,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  IAnimationBudgetAllocator *pIVar3;
  FAnimationBudgetAllocator *this_00;
  FAnimationBudgetAllocator *pFVar4;
  TPairInitializer<TObjectPtr<UWorld>_&&,FAnimationBudgetAllocator_*_const_&> local_res8;
  UWorld *local_res18;
  UWorld *local_res20;
  UWorld **local_28;
  FAnimationBudgetAllocator ***local_20;
  
  if ((param_1 == (UWorld *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AnimationBudgetAllocator\\Source\\AnimationBudgetAllocator\\Private\\AnimationBudgetAllocatorModule.cpp"
                         ,10,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAnimationBudgetAllocator *)(*pcVar1)();
    return pIVar3;
  }
  local_res18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.Value =
       (FAnimationBudgetAllocator **)
       TMapBase<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>_>
       ::FindRef((TMapBase<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>_>
                  *)&this->WorldAnimationBudgetAllocators,(TObjectPtr<UWorld_const_>)&local_res18);
  if (((FAnimationBudgetAllocator *)local_res8.Value == (FAnimationBudgetAllocator *)0x0) &&
     (bVar2 = UWorld::IsGameWorld(param_1), bVar2)) {
    this_00 = ::operator_new(0x158);
    pFVar4 = (FAnimationBudgetAllocator *)0x0;
    if (this_00 != (FAnimationBudgetAllocator *)0x0) {
      pFVar4 = FAnimationBudgetAllocator::FAnimationBudgetAllocator(this_00,param_1);
    }
    local_res8.Value = (FAnimationBudgetAllocator **)pFVar4;
    local_res20 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_28 = &local_res20;
    local_20 = &local_res8.Value;
    TSet<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TObjectPtr<UWorld>_&&,FAnimationBudgetAllocator_*_const_&>_>
              ((TSet<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>,FDefaultSetAllocator>
                *)&this->WorldAnimationBudgetAllocators,&local_res8,(bool *)&local_28);
  }
  return (IAnimationBudgetAllocator *)local_res8.Value;
}

// StartupModule @ 14a68faa0

void __thiscall
FAnimationBudgetAllocatorModule::StartupModule(FAnimationBudgetAllocatorModule *this)

{
  FDelegateHandle FVar1;
  
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
          ::AddRaw<FAnimationBudgetAllocatorModule>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,FWorldInitializationValues),FDefaultDelegateUserPolicy>
                      *)&FWorldDelegates::OnPreWorldInitialization,
                     (FAnimationBudgetAllocatorModule *)&stack0x00000008,(pmf_e34e9e75 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->PreWorldInitializationHandle).ID = *FVar1.ID;
  FVar1 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
          ::AddRaw<FAnimationBudgetAllocatorModule>
                    ((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                      *)&FWorldDelegates::OnPostWorldCleanup,
                     (FAnimationBudgetAllocatorModule *)&stack0x00000008,(pmf_4840640f *)this);
                    /* WARNING: Load size is inaccurate */
  (this->PostWorldCleanupHandle).ID = *FVar1.ID;
  return;
}

// ShutdownModule @ 14a68fb40

void __thiscall
FAnimationBudgetAllocatorModule::ShutdownModule(FAnimationBudgetAllocatorModule *this)

{
  FDelegateHandle FVar1;
  
  FVar1.ID = (this->PreWorldInitializationHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnPreWorldInitialization,FVar1);
  }
  FVar1.ID = (this->PostWorldCleanupHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FWorldDelegates::OnPostWorldCleanup,FVar1);
    return;
  }
  return;
}

// AddReferencedObjects @ 14a68fb90

void __thiscall
FAnimationBudgetAllocatorModule::AddReferencedObjects
          (FAnimationBudgetAllocatorModule *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->WorldAnimationBudgetAllocators).field_0x20;
  puVar1 = &(this->WorldAnimationBudgetAllocators).field_0x8;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = iVar13;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->WorldAnimationBudgetAllocators).field_0x18;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    iVar13 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14a68fc2e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a68fc2e:
  uVar10 = *(uint *)&(this->WorldAnimationBudgetAllocators).field_0x20;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&this->WorldAnimationBudgetAllocators -
                       *(int *)&(this->WorldAnimationBudgetAllocators).field_0x2c);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->WorldAnimationBudgetAllocators).field_0x20;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->WorldAnimationBudgetAllocators).field_0x18;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14a68fd30;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14a68fd30:
  while( true ) {
    if (*(int *)&this->WorldAnimationBudgetAllocators -
        *(int *)&(this->WorldAnimationBudgetAllocators).field_0x2c != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(param_1->_padding_ + 0x88))
              (param_1,(this->PostWorldCleanupHandle).ID +
                       (longlong)TStack_60.CurrentBitIndex * 0x18,0,0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetReferencerName @ 14a68fdb0

FString * __thiscall
FAnimationBudgetAllocatorModule::GetReferencerName
          (FAnimationBudgetAllocatorModule *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FAnimationBudgetAllocatorModule");
  return __return_storage_ptr__;
}

// HandleWorldCleanup @ 14a696ae0

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
FAnimationBudgetAllocatorModule::HandleWorldCleanup
          (FAnimationBudgetAllocatorModule *this,UWorld *param_1,bool param_2,bool param_3)

{
  FAnimationBudgetAllocator *pFVar1;
  uint uVar2;
  TObjectPtr<UWorld_const_>_u_0 local_res8;
  
  local_res8.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = TMapBase<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>_>
           ::FindRef((TMapBase<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>_>
                      *)&this->WorldAnimationBudgetAllocators,(TObjectPtr<UWorld_const_>)&local_res8
                    );
  if (pFVar1 != (FAnimationBudgetAllocator *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x58))(pFVar1,0);
    (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1);
    (**(code **)pFVar1->_padding_)(&pFVar1->_padding_,1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.DebugPtr = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (*(int *)&(this->WorldAnimationBudgetAllocators).field_0x8 !=
        *(int *)&(this->WorldAnimationBudgetAllocators).field_0x34) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      TSet<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UWorld_const_>_>
                ((TSet<TTuple<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*>,TDefaultMapHashableKeyFuncs<TObjectPtr<UWorld>,FAnimationBudgetAllocator_*,0>,FDefaultSetAllocator>
                  *)&this->WorldAnimationBudgetAllocators,uVar2 >> 0x10 ^ uVar2,
                 (TObjectPtr<UWorld_const_> *)&local_res8.ObjectPtr);
    }
  }
  return;
}

// HandleWorldInit @ 14a696c00

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
FAnimationBudgetAllocatorModule::HandleWorldInit
          (FAnimationBudgetAllocatorModule *this,UWorld *param_1,FWorldInitializationValues *param_2
          )

{
                    /* WARNING: Could not recover jumptable at 0x00014a696c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

