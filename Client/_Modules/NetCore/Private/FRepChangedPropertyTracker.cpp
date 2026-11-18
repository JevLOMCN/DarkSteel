// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 4

// FRepChangedPropertyTracker @ 1441d2600

FRepChangedPropertyTracker * __thiscall
FRepChangedPropertyTracker::FRepChangedPropertyTracker
          (FRepChangedPropertyTracker *this,FCustomPropertyConditionState *param_1)

{
  FCustomPropertyConditionState::FCustomPropertyConditionState(&this->ActiveState,param_1);
  return this;
}

// CountBytes @ 1441d79b0

void __thiscall
FRepChangedPropertyTracker::CountBytes(FRepChangedPropertyTracker *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,0x78,0x78);
                    /* WARNING: Could not recover jumptable at 0x0001441d79ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)((this->ActiveState).CurrentState.NumBits + 0x1fU >> 5) << 2,
             (ulonglong)((this->ActiveState).CurrentState.MaxBits + 0x1fU >> 5) << 2);
  return;
}

// SetCustomIsActiveOverride @ 1441eb640

void __thiscall
FRepChangedPropertyTracker::SetCustomIsActiveOverride
          (FRepChangedPropertyTracker *this,UObject *param_1,ushort param_2,bool param_3)

{
  ForElementType<unsigned_int> FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<unsigned_int> FVar11;
  FDestructionSentinel local_48;
  
  if (((this->ActiveState).CurrentState.NumBits <= (int)(uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (this->ActiveState).CurrentState.AllocatorInstance.SecondaryData;
  FVar11 = (ForElementType<unsigned_int>)this;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FVar11 = FVar1;
  }
  uVar8 = 1 << ((byte)param_2 & 0x1f);
  lVar10 = (ulonglong)(param_2 >> 5) * 4;
  uVar9 = *(uint *)(lVar10 + (longlong)FVar11);
  if (((this->ActiveState).CurrentState.NumBits <= (int)(uint)param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar1 = (this->ActiveState).CurrentState.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    this = (FRepChangedPropertyTracker *)FVar1;
  }
  if (param_3) {
    uVar7 = *(uint *)(lVar10 + (longlong)this) | uVar8;
  }
  else {
    uVar7 = *(uint *)(lVar10 + (longlong)this) & ~uVar8;
  }
  *(uint *)(lVar10 + (longlong)this) = uVar7;
  if ((((uVar9 & uVar8) != 0) != param_3) &&
     (bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &UE::Net::Private::FPropertyConditionDelegates::
                          OnPropertyCustomConditionChangedDelegate), bVar4)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &UE::Net::Private::FPropertyConditionDelegates::
                OnPropertyCustomConditionChangedDelegate,(FWriteAccessScope *)&local_48);
    bVar4 = false;
    UE::Net::Private::FPropertyConditionDelegates::OnPropertyCustomConditionChangedDelegate._28_4_ =
         UE::Net::Private::FPropertyConditionDelegates::OnPropertyCustomConditionChangedDelegate.
         _28_4_ + 1;
    uVar9 = UE::Net::Private::FPropertyConditionDelegates::OnPropertyCustomConditionChangedDelegate.
            _16_4_ - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      do {
        uVar8 = 0;
        if ((int)uVar9 <
            (int)UE::Net::Private::FPropertyConditionDelegates::
                 OnPropertyCustomConditionChangedDelegate._16_4_) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)(lVar10 + 8 +
                      UE::Net::Private::FPropertyConditionDelegates::
                      OnPropertyCustomConditionChangedDelegate._8_8_) == 0) ||
            (plVar2 = *(longlong **)
                       (lVar10 + UE::Net::Private::FPropertyConditionDelegates::
                                 OnPropertyCustomConditionChangedDelegate._8_8_),
            plVar2 == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3), cVar6 == '\0')) {
          bVar4 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    UE::Net::Private::FPropertyConditionDelegates::OnPropertyCustomConditionChangedDelegate._28_4_ =
         UE::Net::Private::FPropertyConditionDelegates::OnPropertyCustomConditionChangedDelegate.
         _28_4_ + -1;
    if (bVar4) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &UE::Net::Private::FPropertyConditionDelegates::
                  OnPropertyCustomConditionChangedDelegate,false);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  return;
}

// SetDynamicCondition @ 1441eb860

void __thiscall
FRepChangedPropertyTracker::SetDynamicCondition
          (FRepChangedPropertyTracker *this,UObject *param_1,ushort param_2,
          ELifetimeCondition param_3)

{
  uint *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  ELifetimeCondition EVar7;
  uint uVar8;
  short *psVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 local_res8 [4];
  ushort local_res20 [4];
  TPairInitializer<unsigned_short_const_&,short_&&> local_58;
  undefined2 *local_48;
  FDestructionSentinel local_40;
  
  psVar9 = TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
           ::Find((TMapBase<unsigned_short,short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>_>
                   *)&(this->ActiveState).DynamicConditions,param_2);
  if (psVar9 == (short *)0x0) {
    EVar7 = COND_Dynamic;
  }
  else {
    EVar7 = (ELifetimeCondition)*psVar9;
  }
  if (param_3 != EVar7) {
    puVar1 = &(this->ActiveState).DynamicConditionChangeCounter;
    *puVar1 = *puVar1 + 1;
    local_58.Value = (short *)local_res20;
    local_48 = local_res8;
    local_res8[0] = (undefined2)param_3;
    local_res20[0] = param_2;
    TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_short_const_&,short_&&>_>
              ((TSet<TTuple<unsigned_short,short>,TDefaultMapHashableKeyFuncs<unsigned_short,short,0>,FDefaultSetAllocator>
                *)&(this->ActiveState).DynamicConditions,&local_58,(bool *)&local_58.Value);
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &UE::Net::Private::FPropertyConditionDelegates::
                        OnPropertyDynamicConditionChangedDelegate);
    if (bVar4) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &UE::Net::Private::FPropertyConditionDelegates::
                  OnPropertyDynamicConditionChangedDelegate,(FWriteAccessScope *)&local_40);
      bVar4 = false;
      UE::Net::Private::FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate.
      _28_4_ = UE::Net::Private::FPropertyConditionDelegates::
               OnPropertyDynamicConditionChangedDelegate._28_4_ + 1;
      uVar10 = UE::Net::Private::FPropertyConditionDelegates::
               OnPropertyDynamicConditionChangedDelegate._16_4_ - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar4 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 <
              (int)UE::Net::Private::FPropertyConditionDelegates::
                   OnPropertyDynamicConditionChangedDelegate._16_4_) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar11 + 8 +
                        UE::Net::Private::FPropertyConditionDelegates::
                        OnPropertyDynamicConditionChangedDelegate._8_8_) == 0) ||
              (plVar2 = *(longlong **)
                         (lVar11 + UE::Net::Private::FPropertyConditionDelegates::
                                   OnPropertyDynamicConditionChangedDelegate._8_8_),
              plVar2 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2,param_3), cVar6 == '\0'))
          {
            bVar4 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      UE::Net::Private::FPropertyConditionDelegates::OnPropertyDynamicConditionChangedDelegate.
      _28_4_ = UE::Net::Private::FPropertyConditionDelegates::
               OnPropertyDynamicConditionChangedDelegate._28_4_ + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &UE::Net::Private::FPropertyConditionDelegates::
                    OnPropertyDynamicConditionChangedDelegate,false);
      }
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
    }
  }
  return;
}

