// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 6

// operator() @ 1464a0640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  int iVar1;
  longlong lVar2;
  UTransformableHandle *pUVar3;
  char cVar4;
  UTickableTransformConstraint *this_00;
  UClass *pUVar5;
  FTickFunction *pFVar6;
  
  this_00 = (UTickableTransformConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (this_00 != (UTickableTransformConstraint *)0x0) {
    pUVar5 = UTickableTransformConstraint::StaticClass();
    lVar2 = this_00->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if ((((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) &&
        (pUVar3 = (this_00->ChildTRSHandle).field0_0x0.DebugPtr,
        pUVar3 != (UTransformableHandle *)0x0)) && (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0)) {
      pUVar3 = (this_00->ChildTRSHandle).field0_0x0.DebugPtr;
      cVar4 = (**(code **)(pUVar3->_padding_ + 0x2b0))
                        (pUVar3,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
      if (cVar4 != '\0') {
        pFVar6 = UTickableTransformConstraint::GetParentHandleTickFunction(this_00);
        if ((pFVar6 != (FTickFunction *)0x0) && (pFVar6 == *(FTickFunction **)this)) {
          return true;
        }
      }
    }
  }
  return false;
}

// operator() @ 1464a1cc0

bool __thiscall
`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1)

{
  int iVar1;
  char cVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  pUVar3 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = UTickableTransformConstraint::StaticClass();
    lVar5 = *(longlong *)&pUVar3->field_0x10;
    iVar1 = (int)pUVar4->_padding_;
    if ((((iVar1 <= *(int *)(lVar5 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) && (*(longlong *)&pUVar3[3].field_0x20 != 0)) &&
       ((*(uint *)(*(longlong *)&pUVar3[3].field_0x20 + 8) >> 0x1e & 1) == 0)) {
      cVar2 = (**(code **)(**(longlong **)&pUVar3[3].field_0x20 + 0x2b0))
                        (*(longlong **)&pUVar3[3].field_0x20,
                         CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      if (cVar2 != '\0') {
        lVar5 = (**(code **)(**(longlong **)&pUVar3[3].field_0x20 + 0x318))();
        if (((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
           (lVar5 == *(longlong *)this)) {
          return true;
        }
      }
    }
  }
  return false;
}

// CheckAndFixCycles @ 1464a8cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FConstraintCycleChecker::CheckAndFixCycles(UTickableTransformConstraint *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UWorld *pUVar5;
  <lambda_1> <Var6;
  FConstraintTickFunction *pFVar7;
  UTickableConstraint *this;
  FConstraintTickFunction *pFVar8;
  UTickableTransformConstraint *pUVar9;
  UClass *pUVar10;
  ulonglong uVar11;
  ForAnyElementType this_00;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_a0;
  TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator> local_88
  ;
  ulonglong local_38;
  
  if ((((param_1 != (UTickableTransformConstraint *)0x0) &&
       (local_38 = __security_cookie.value ^ (ulonglong)auStack_c8,
       ((uint)param_1->_padding_ >> 0x1e & 1) == 0)) &&
      (pUVar5 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(), pUVar5 != (UWorld *)0x0)) &&
     ((((uint)pUVar5->_padding_ >> 0x1e & 1) == 0 &&
      (<Var6.ChildTickFunction = UTickableTransformConstraint::GetChildHandleTickFunction(param_1),
      <Var6.ChildTickFunction != (FTickFunction *)0x0)))) {
    ::Singleton.World = pUVar5;
    FConstraintsManagerController::
    GetConstraintsByPredicate<_FConstraintCycleChecker::CheckAndFixCycles_::__l2::<lambda_1>_>
              (&::Singleton,&local_a0,<Var6,false);
    iVar3 = local_a0.ArrayNum;
    uVar11 = (ulonglong)local_a0.ArrayNum;
    if (local_a0.ArrayNum != 0) {
      local_88.Elements._0_8_ = 0;
      pFVar1 = (FWeakObjectPtr *)(local_a0.AllocatorInstance.Data + uVar11 * 8);
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._44_4_ = 0x80;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      this_00.Data = local_a0.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar11 != iVar3) {
          `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_a8);
        }
        if ((FWeakObjectPtr *)this_00.Data == pFVar1) break;
        pFVar7 = UTickableConstraint::GetTickFunction((UTickableConstraint *)param_1,pUVar5);
        this = (UTickableConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
        pFVar8 = UTickableConstraint::GetTickFunction(this,pUVar5);
        bVar4 = HasPrerequisiteDependencyWith
                          ((FTickFunction *)pFVar8,(FTickFunction *)pFVar7,&local_88);
        if (bVar4) {
          pUVar9 = (UTickableTransformConstraint *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
          if (pUVar9 == (UTickableTransformConstraint *)0x0) {
LAB_1464a8e3f:
            pUVar9 = (UTickableTransformConstraint *)0x0;
          }
          else {
            pUVar10 = UTickableTransformConstraint::StaticClass();
            iVar2 = (int)pUVar10->_padding_;
            if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar2) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
                &pUVar10->_padding_)) goto LAB_1464a8e3f;
          }
          UpdateCyclingDependency(pUVar5,pUVar9);
        }
        uVar11 = (ulonglong)(uint)local_a0.ArrayNum;
        this_00.Data = this_00.Data + 8;
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTickFunction_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
    if ((FWeakObjectPtr *)local_a0.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
  return;
}

// HasPrerequisiteDependencyWith @ 1464b81f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FConstraintCycleChecker::HasPrerequisiteDependencyWith
          (FTickFunction *param_1,FTickFunction *param_2,
          TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
          *param_3)

{
  bool bVar1;
  int iVar2;
  FTickPrerequisite *pFVar3;
  uint uVar4;
  ForElementType<FSetElementId> FVar5;
  FWeakObjectPtr FVar6;
  FWeakObjectPtr *this;
  FWeakObjectPtr *pFVar7;
  FTickFunction *local_res8;
  FTickFunction *local_res10;
  
  if ((param_1 == (FTickFunction *)0x0) || (param_2 == (FTickFunction *)0x0)) {
    return false;
  }
  local_res10 = param_2;
  pFVar3 = TArray<FTickPrerequisite,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FConstraintCycleChecker::HasPrerequisiteDependencyWith_::__l2::<lambda_1>_>
                     (&param_2->Prerequisites,(<lambda_1>)param_1);
  if (pFVar3 == (FTickPrerequisite *)0x0) {
    uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    if (*(int *)&(param_3->Elements).field_0x8 != *(int *)&(param_3->Elements).field_0x34) {
      FVar5 = (param_3->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&param_3->Hash;
      }
      iVar2 = *(int *)((longlong)FVar5 +
                      (ulonglong)(param_3->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
      if (iVar2 != -1) {
        do {
          if (*(FTickFunction **)(*(longlong *)&param_3->Elements + (longlong)iVar2 * 0x10) ==
              param_2) {
            return false;
          }
          iVar2 = *(int *)(*(longlong *)&param_3->Elements + 8 + (longlong)iVar2 * 0x10);
        } while (iVar2 != -1);
      }
    }
    TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>::
    Emplace<FTickFunction_const_*_const_&>(param_3,&local_res8,(bool *)&local_res10);
    iVar2 = (param_2->Prerequisites).ArrayNum;
    this = (FWeakObjectPtr *)(param_2->Prerequisites).AllocatorInstance.Data;
    pFVar7 = this + (longlong)iVar2 * 2;
    while( true ) {
      if ((param_2->Prerequisites).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FTickPrerequisite_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (this == pFVar7) {
        return false;
      }
      bVar1 = FWeakObjectPtr::IsValid(this,true,false);
      if (bVar1) {
        FVar6 = this[1];
      }
      else {
        FVar6.ObjectIndex = 0;
        FVar6.ObjectSerialNumber = 0;
      }
      bVar1 = HasPrerequisiteDependencyWith(param_1,(FTickFunction *)FVar6,param_3);
      if (bVar1) break;
      this = this + 2;
    }
  }
  return true;
}

// IsCycling @ 1464b9280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
FConstraintCycleChecker::IsCycling(TWeakObjectPtr<UTransformableHandle,FWeakObjectPtr> *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FTickFunction *pFVar4;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pUVar3 = FWeakObjectPtr::Get(&param_1->WeakPtr);
  if ((pUVar3 == (UObject *)0x0) || ((*(uint *)&pUVar3->field_0x8 >> 0x1e & 1) != 0)) {
    bVar2 = false;
  }
  else {
    local_3c = 0x80;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = (ForElementType<FSetElementId>)0x0;
    local_20 = 0;
    local_38 = 0xffffffff;
    pUVar3 = FWeakObjectPtr::Get(&param_1->WeakPtr);
    pFVar4 = (FTickFunction *)(**(code **)(*(longlong *)pUVar3 + 800))(pUVar3);
    bVar2 = HasPrerequisiteDependencyWith
                      (pFVar4,pFVar4,
                       (TSet<FTickFunction_const_*,DefaultKeyFuncs<FTickFunction_const_*,0>,FDefaultSetAllocator>
                        *)local_68);
    local_20 = 0;
    if (local_28 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_28);
    }
    iVar1 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
    }
    local_34 = 0;
    local_40 = 0;
    local_38 = 0xffffffff;
    if (0x80 < local_3c) {
      local_3c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free(local_48);
    }
    if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_68._0_8_);
    }
  }
  return bVar2;
}

// UpdateCyclingDependency @ 1464c3e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FConstraintCycleChecker::UpdateCyclingDependency
          (UWorld *param_1,UTickableTransformConstraint *param_2)

{
  FWeakObjectPtr *pFVar1;
  UTransformableHandle *pUVar2;
  bool bVar3;
  char cVar4;
  FConstraintTickFunction *pFVar5;
  <lambda_1> <Var6;
  UObject *pUVar7;
  FTickFunction *pFVar8;
  ForAnyElementType this;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar5 = UTickableConstraint::GetTickFunction((UTickableConstraint *)param_2,param_1);
  if ((pFVar5->_padding_ & 0xc000000) != 0) {
    <Var6.TargetObject =
         (UObject *)
         (**(code **)(((param_2->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_ + 0x318))();
    ::Singleton.World = param_1;
    FConstraintsManagerController::
    GetConstraintsByPredicate<_FConstraintCycleChecker::UpdateCyclingDependency_::__l2::<lambda_1>_>
              (&::Singleton,&local_18,<Var6,true);
    pFVar1 = (FWeakObjectPtr *)(local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8);
    for (this.Data = local_18.AllocatorInstance.Data; (FWeakObjectPtr *)this.Data != pFVar1;
        this.Data = this.Data + 8) {
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this.Data);
      if (((bVar3) &&
          (pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data), pUVar7 != (UObject *)0x0)) &&
         ((*(uint *)&pUVar7->field_0x8 >> 0x1e & 1) == 0)) {
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        cVar4 = (**(code **)(*(longlong *)pUVar7 + 0x2d0))(pUVar7);
        if (cVar4 != '\0') goto LAB_1464c3f00;
      }
    }
    this.Data = (FScriptContainerElement *)0x0;
LAB_1464c3f00:
    pUVar2 = (param_2->ParentTRSHandle).field0_0x0.DebugPtr;
    if (((pUVar2 != (UTransformableHandle *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) &&
       ((pUVar2 = (param_2->ParentTRSHandle).field0_0x0.DebugPtr,
        cVar4 = (**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,1), cVar4 != '\0' &&
        (pFVar8 = (FTickFunction *)
                  (**(code **)(((param_2->ParentTRSHandle).field0_0x0.DebugPtr)->_padding_ + 800))()
        , pFVar8 != (FTickFunction *)0x0)))) {
      pFVar5 = UTickableConstraint::GetTickFunction((UTickableConstraint *)param_2,param_1);
      if ((FWeakObjectPtr *)this.Data == (FWeakObjectPtr *)0x0) {
        FTickFunction::AddPrerequisite((FTickFunction *)pFVar5,<Var6.TargetObject,pFVar8);
      }
      else {
        FTickFunction::RemovePrerequisite((FTickFunction *)pFVar5,<Var6.TargetObject,pFVar8);
      }
    }
    if ((FWeakObjectPtr *)local_18.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return;
}

