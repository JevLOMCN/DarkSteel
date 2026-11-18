// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 5

// ExportRequirements @ 147219510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMassSubsystemRequirements::ExportRequirements
          (FMassSubsystemRequirements *this,FMassExecutionRequirements *param_1)

{
  TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
  *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
  *_Dst;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *_Dst_00;
  ForElementType<unsigned_int> FVar6;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *this_01;
  undefined1 auStackY_98 [32];
  <lambda_1> local_68;
  <lambda_1> local_67 [7];
  TBitArray<FDefaultBitArrayAllocator> local_60;
  TBitArray<FDefaultBitArrayAllocator> local_40;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this_00 = &param_1->RequiredSubsystems;
  if ((FMassSubsystemRequirements *)this_00 == this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60.NumBits = 0;
  local_60.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
             (TBitArray<FDefaultBitArrayAllocator> *)this,&local_60,MaxSize,&local_68);
  if (this_00 !=
      (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
       *)&local_60) {
    iVar1 = *(int *)&(param_1->RequiredSubsystems).Read.field_0x1c;
    *(undefined4 *)&(param_1->RequiredSubsystems).Read.field_0x18 = 0;
    uVar5 = local_60.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar5) || (0x80 < iVar1)) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)&(param_1->RequiredSubsystems).Read.field_0x1c = uVar4;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,0);
    }
    *(int *)&(param_1->RequiredSubsystems).Read.field_0x18 = local_60.NumBits;
    if (local_60.NumBits != 0) {
      _Dst = *(TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
               **)&(param_1->RequiredSubsystems).Read.field_0x10;
      FVar6 = (ForElementType<unsigned_int>)&local_60;
      if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar6 = local_60.AllocatorInstance.SecondaryData;
      }
      if (_Dst == (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                   *)0x0) {
        _Dst = this_00;
      }
      memcpy(_Dst,(void *)FVar6,(ulonglong)(local_60.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
  }
  this_01 = &(param_1->RequiredSubsystems).Write;
  if (this_01 == &this->RequiredMutableSubsystems) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&A != &B",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x52d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_40.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40.NumBits = 0;
  local_40.MaxBits = 0x80;
  UE::Core::Private::
  BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
            ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
             (TBitArray<FDefaultBitArrayAllocator> *)&this->RequiredMutableSubsystems,&local_40,
             MaxSize,local_67);
  if ((TBitArray<FDefaultBitArrayAllocator> *)this_01 != &local_40) {
    iVar1 = *(int *)&(param_1->RequiredSubsystems).Write.field_0x1c;
    *(undefined4 *)&(param_1->RequiredSubsystems).Write.field_0x18 = 0;
    uVar5 = local_40.NumBits + 0x1fU & 0xffffffe0;
    if ((iVar1 < (int)uVar5) || (0x80 < iVar1)) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar4 = uVar5;
      }
      *(uint *)&(param_1->RequiredSubsystems).Write.field_0x1c = uVar4;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)this_01,0);
    }
    *(int *)&(param_1->RequiredSubsystems).Write.field_0x18 = local_40.NumBits;
    if (local_40.NumBits != 0) {
      _Dst_00 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  **)&(param_1->RequiredSubsystems).Write.field_0x10;
      FVar6 = (ForElementType<unsigned_int>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar6 = local_40.AllocatorInstance.SecondaryData;
      }
      if (_Dst_00 ==
          (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *)
          0x0) {
        _Dst_00 = this_01;
      }
      memcpy(_Dst_00,(void *)FVar6,(ulonglong)(local_40.NumBits + 0x1fU >> 5) << 2);
    }
  }
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return;
}

// IsGameThreadOnlySubsystem @ 147232b40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __cdecl
FMassSubsystemRequirements::IsGameThreadOnlySubsystem
          (TSubclassOf<USubsystem> param_1,TSharedRef<FMassEntityManager,1> *param_2)

{
  int iVar1;
  UObject *pUVar2;
  FTypeManager *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  FTypeInfo *pFVar6;
  TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
  *pTVar7;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar2 = *(UObject **)param_1.Class.field0_0x0;
  pFVar3 = (param_2->Object->TypeManager).Object;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
LAB_147232b7e:
      pUVar5 = Z_Construct_UClass_USubsystem_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)&pUVar2[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar2[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
          goto LAB_147232bf6;
        }
      }
    }
  }
  else if (pUVar2 != (UObject *)0x0) goto LAB_147232b7e;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
LAB_147232bf6:
  pFVar6 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
           ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                   *)&pFVar3->TypeDataMap,(FTypeHandle *)&local_res8);
  if ((pFVar6 == (FTypeInfo *)0x0) &&
     (local_res8 = (FWeakObjectPtr)param_1.Class.field0_0x0,
     bVar4 = `FMassSubsystemRequirements::IsGameThreadOnlySubsystem'::__l3::<lambda_1>::operator()
                       (&local_res8), !bVar4)) {
    return true;
  }
  pTVar7 = &pFVar6->Traits;
  if ((pFVar6->Traits).TypeIndex != '\x01') {
    pTVar7 = (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
              *)0x0;
  }
  if ((pTVar7 == (TVariant<UE::Mass::FEmptyTypeTraits,UE::Mass::FSubsystemTypeTraits,UE::Mass::FSharedFragmentTypeTraits,UE::Mass::Relations::FRelationTypeTraits>
                  *)0x0) &&
     (local_res8 = (FWeakObjectPtr)param_1.Class.field0_0x0,
     bVar4 = `FMassSubsystemRequirements::IsGameThreadOnlySubsystem'::__l6::<lambda_2>::operator()
                       (&local_res8), !bVar4)) {
    return true;
  }
  return (bool)*(undefined1 *)pTVar7;
}

// Reset @ 147248d90

void __thiscall FMassSubsystemRequirements::Reset(FMassSubsystemRequirements *this)

{
  *(undefined4 *)&(this->RequiredConstSubsystems).field_0x18 = 0;
  *(undefined4 *)&(this->RequiredMutableSubsystems).field_0x18 = 0;
  this->bRequiresGameThreadExecution = false;
  return;
}

// operator() @ 150503a90

bool __thiscall
`FMassSubsystemRequirements::IsGameThreadOnlySubsystem'::__l3::<lambda_1>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  bool bVar8;
  FName local_res10 [3];
  FString local_18;
  
  bVar8 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2502732341651177547>);
  if (bVar5) {
    plVar2 = *(longlong **)this;
    lVar3 = *plVar2;
    if ((lVar3 == 0) ||
       (pUVar7 = Z_Construct_UClass_USubsystem_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_150503b14:
      ::FString::FString(&local_18,L"None");
    }
    else {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((!bVar5) || (lVar3 = *plVar2, lVar3 == 0)) goto LAB_150503b14;
      local_res10[0] = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar8 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2502732341651177547>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150503b5b;
    }
  }
  bVar5 = false;
LAB_150503b5b:
  if ((bVar8) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 1505059d0

bool __thiscall
`FMassSubsystemRequirements::IsGameThreadOnlySubsystem'::__l6::<lambda_2>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  bool bVar8;
  FName local_res10 [3];
  FString local_18;
  
  bVar8 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2502732341651177550>);
  if (bVar5) {
    plVar2 = *(longlong **)this;
    lVar3 = *plVar2;
    if ((lVar3 == 0) ||
       (pUVar7 = Z_Construct_UClass_USubsystem_NoRegister(), pUVar7 == (UClass *)0x0)) {
LAB_150505a54:
      ::FString::FString(&local_18,L"None");
    }
    else {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((!bVar5) || (lVar3 = *plVar2, lVar3 == 0)) goto LAB_150505a54;
      local_res10[0] = *(FName *)(lVar3 + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar8 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2502732341651177550>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150505a9b;
    }
  }
  bVar5 = false;
LAB_150505a9b:
  if ((bVar8) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

