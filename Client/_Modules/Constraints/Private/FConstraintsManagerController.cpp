// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 41

// AllocateConstraintT<UTickableLookAtConstraint> @ 1464907c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableLookAtConstraint * __thiscall
FConstraintsManagerController::AllocateConstraintT<UTickableLookAtConstraint>
          (FConstraintsManagerController *this,FName *param_1,bool param_2)

{
  FName FVar1;
  UClass *this_00;
  FName FVar2;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar3;
  UClass *pUVar4;
  UTickableConstraint *pUVar5;
  UTickableLookAtConstraint *pUVar6;
  FName local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = (UClass *)UConstraintSubsystem::Get();
  if (this_00 == (UClass *)0x0) {
    return (UTickableLookAtConstraint *)0x0;
  }
  FVar1 = *param_1;
  FVar2 = (FName)UTickableLookAtConstraint::StaticClass();
  MakeUniqueObjectName((UObject *)&local_res20,this_00,FVar2,FVar1.ComparisonIndex.Value.Value);
  UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)this_00,&local_30,this->World);
  pTVar3 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableLookAtConstraint>_::__l2::<lambda_1>_>
                     (&local_30,(<lambda_1>)local_res20);
  if (pTVar3 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
    FVar1 = *param_1;
    FVar2 = (FName)UTickableLookAtConstraint::StaticClass();
    local_res20 = MakeUniqueObjectName
                            ((UObject *)&stack0xffffffffffffffc8,this_00,FVar2,
                             FVar1.ComparisonIndex.Value.Value);
    local_res20 = *(FName *)local_res20;
  }
  if (param_2) {
    pUVar4 = UTickableLookAtConstraint::StaticClass();
    pUVar5 = UConstraintSubsystem::GetConfig((UConstraintSubsystem *)this_00,pUVar4);
  }
  else {
    pUVar5 = (UTickableConstraint *)0x0;
  }
  pUVar6 = NewObject<UTickableLookAtConstraint>
                     ((UObject *)this_00,local_res20,RF_Transactional,(UObject *)pUVar5,
                      pUVar5 != (UTickableConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                      (UPackage *)0x0);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return pUVar6;
}

// AllocateConstraintT<UTickableParentConstraint> @ 146490900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableParentConstraint * __thiscall
FConstraintsManagerController::AllocateConstraintT<UTickableParentConstraint>
          (FConstraintsManagerController *this,FName *param_1,bool param_2)

{
  FName FVar1;
  UClass *this_00;
  FName FVar2;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar3;
  UClass *pUVar4;
  UTickableConstraint *pUVar5;
  UTickableParentConstraint *pUVar6;
  FName local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = (UClass *)UConstraintSubsystem::Get();
  if (this_00 == (UClass *)0x0) {
    return (UTickableParentConstraint *)0x0;
  }
  FVar1 = *param_1;
  FVar2 = (FName)UTickableParentConstraint::StaticClass();
  MakeUniqueObjectName((UObject *)&local_res20,this_00,FVar2,FVar1.ComparisonIndex.Value.Value);
  UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)this_00,&local_30,this->World);
  pTVar3 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableParentConstraint>_::__l2::<lambda_1>_>
                     (&local_30,(<lambda_1>)local_res20);
  if (pTVar3 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
    FVar1 = *param_1;
    FVar2 = (FName)UTickableParentConstraint::StaticClass();
    local_res20 = MakeUniqueObjectName
                            ((UObject *)&stack0xffffffffffffffc8,this_00,FVar2,
                             FVar1.ComparisonIndex.Value.Value);
    local_res20 = *(FName *)local_res20;
  }
  if (param_2) {
    pUVar4 = UTickableParentConstraint::StaticClass();
    pUVar5 = UConstraintSubsystem::GetConfig((UConstraintSubsystem *)this_00,pUVar4);
  }
  else {
    pUVar5 = (UTickableConstraint *)0x0;
  }
  pUVar6 = NewObject<UTickableParentConstraint>
                     ((UObject *)this_00,local_res20,RF_Transactional,(UObject *)pUVar5,
                      pUVar5 != (UTickableConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                      (UPackage *)0x0);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return pUVar6;
}

// AllocateConstraintT<UTickableRotationConstraint> @ 146490a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableRotationConstraint * __thiscall
FConstraintsManagerController::AllocateConstraintT<UTickableRotationConstraint>
          (FConstraintsManagerController *this,FName *param_1,bool param_2)

{
  FName FVar1;
  UClass *this_00;
  FName FVar2;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar3;
  UClass *pUVar4;
  UTickableConstraint *pUVar5;
  UTickableRotationConstraint *pUVar6;
  FName local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = (UClass *)UConstraintSubsystem::Get();
  if (this_00 == (UClass *)0x0) {
    return (UTickableRotationConstraint *)0x0;
  }
  FVar1 = *param_1;
  FVar2 = (FName)UTickableRotationConstraint::StaticClass();
  MakeUniqueObjectName((UObject *)&local_res20,this_00,FVar2,FVar1.ComparisonIndex.Value.Value);
  UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)this_00,&local_30,this->World);
  pTVar3 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableRotationConstraint>_::__l2::<lambda_1>_>
                     (&local_30,(<lambda_1>)local_res20);
  if (pTVar3 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
    FVar1 = *param_1;
    FVar2 = (FName)UTickableRotationConstraint::StaticClass();
    local_res20 = MakeUniqueObjectName
                            ((UObject *)&stack0xffffffffffffffc8,this_00,FVar2,
                             FVar1.ComparisonIndex.Value.Value);
    local_res20 = *(FName *)local_res20;
  }
  if (param_2) {
    pUVar4 = UTickableRotationConstraint::StaticClass();
    pUVar5 = UConstraintSubsystem::GetConfig((UConstraintSubsystem *)this_00,pUVar4);
  }
  else {
    pUVar5 = (UTickableConstraint *)0x0;
  }
  pUVar6 = NewObject<UTickableRotationConstraint>
                     ((UObject *)this_00,local_res20,RF_Transactional,(UObject *)pUVar5,
                      pUVar5 != (UTickableConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                      (UPackage *)0x0);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return pUVar6;
}

// AllocateConstraintT<UTickableScaleConstraint> @ 146490b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableScaleConstraint * __thiscall
FConstraintsManagerController::AllocateConstraintT<UTickableScaleConstraint>
          (FConstraintsManagerController *this,FName *param_1,bool param_2)

{
  FName FVar1;
  UClass *this_00;
  FName FVar2;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar3;
  UClass *pUVar4;
  UTickableConstraint *pUVar5;
  UTickableScaleConstraint *pUVar6;
  FName local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = (UClass *)UConstraintSubsystem::Get();
  if (this_00 == (UClass *)0x0) {
    return (UTickableScaleConstraint *)0x0;
  }
  FVar1 = *param_1;
  FVar2 = (FName)UTickableScaleConstraint::StaticClass();
  MakeUniqueObjectName((UObject *)&local_res20,this_00,FVar2,FVar1.ComparisonIndex.Value.Value);
  UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)this_00,&local_30,this->World);
  pTVar3 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableScaleConstraint>_::__l2::<lambda_1>_>
                     (&local_30,(<lambda_1>)local_res20);
  if (pTVar3 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
    FVar1 = *param_1;
    FVar2 = (FName)UTickableScaleConstraint::StaticClass();
    local_res20 = MakeUniqueObjectName
                            ((UObject *)&stack0xffffffffffffffc8,this_00,FVar2,
                             FVar1.ComparisonIndex.Value.Value);
    local_res20 = *(FName *)local_res20;
  }
  if (param_2) {
    pUVar4 = UTickableScaleConstraint::StaticClass();
    pUVar5 = UConstraintSubsystem::GetConfig((UConstraintSubsystem *)this_00,pUVar4);
  }
  else {
    pUVar5 = (UTickableConstraint *)0x0;
  }
  pUVar6 = NewObject<UTickableScaleConstraint>
                     ((UObject *)this_00,local_res20,RF_Transactional,(UObject *)pUVar5,
                      pUVar5 != (UTickableConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                      (UPackage *)0x0);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return pUVar6;
}

// AllocateConstraintT<UTickableTranslationConstraint> @ 146490cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableTranslationConstraint * __thiscall
FConstraintsManagerController::AllocateConstraintT<UTickableTranslationConstraint>
          (FConstraintsManagerController *this,FName *param_1,bool param_2)

{
  FName FVar1;
  UClass *this_00;
  FName FVar2;
  TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *pTVar3;
  UClass *pUVar4;
  UTickableConstraint *pUVar5;
  UTickableTranslationConstraint *pUVar6;
  FName local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = (UClass *)UConstraintSubsystem::Get();
  if (this_00 == (UClass *)0x0) {
    return (UTickableTranslationConstraint *)0x0;
  }
  FVar1 = *param_1;
  FVar2 = (FName)UTickableTranslationConstraint::StaticClass();
  MakeUniqueObjectName((UObject *)&local_res20,this_00,FVar2,FVar1.ComparisonIndex.Value.Value);
  UConstraintSubsystem::GetConstraints((UConstraintSubsystem *)this_00,&local_30,this->World);
  pTVar3 = TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FConstraintsManagerController::AllocateConstraintT<UTickableTranslationConstraint>_::__l2::<lambda_1>_>
                     (&local_30,(<lambda_1>)local_res20);
  if (pTVar3 != (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)0x0) {
    FVar1 = *param_1;
    FVar2 = (FName)UTickableTranslationConstraint::StaticClass();
    local_res20 = MakeUniqueObjectName
                            ((UObject *)&stack0xffffffffffffffc8,this_00,FVar2,
                             FVar1.ComparisonIndex.Value.Value);
    local_res20 = *(FName *)local_res20;
  }
  if (param_2) {
    pUVar4 = UTickableTranslationConstraint::StaticClass();
    pUVar5 = UConstraintSubsystem::GetConfig((UConstraintSubsystem *)this_00,pUVar4);
  }
  else {
    pUVar5 = (UTickableConstraint *)0x0;
  }
  pUVar6 = NewObject<UTickableTranslationConstraint>
                     ((UObject *)this_00,local_res20,RF_Transactional,(UObject *)pUVar5,
                      pUVar5 != (UTickableConstraint *)0x0,(FObjectInstancingGraph *)0x0,
                      (UPackage *)0x0);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return pUVar6;
}

// operator() @ 1464a1e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildSelfDependencies'::__l2::<lambda_1>_>'::__l2::
<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UTickableConstraint *this_00;
  UTickableConstraint *this_01;
  FConstraintTickFunction *pFVar2;
  FConstraintTickFunction *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(&param_2->WeakPtr), !bVar1)) {
    return false;
  }
  this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  pFVar2 = UTickableConstraint::GetTickFunction(this_00,(UWorld *)**(undefined8 **)this);
  pFVar3 = UTickableConstraint::GetTickFunction(this_01,(UWorld *)**(undefined8 **)this);
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    if (*(FConstraintTickFunction **)(lVar4 + 8) == pFVar3) goto LAB_1464a1eb1;
  }
  lVar4 = 0;
LAB_1464a1eb1:
  return lVar4 != 0;
}

// operator() @ 1464a1ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::
GetConstraintsByPredicate<`FConstraintCycleChecker::CheckAndFixCycles'::__l2::<lambda_1>_>'::__l2::
<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UTickableConstraint *this_00;
  UTickableConstraint *this_01;
  FConstraintTickFunction *pFVar2;
  FConstraintTickFunction *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(&param_2->WeakPtr), !bVar1)) {
    return false;
  }
  this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  pFVar2 = UTickableConstraint::GetTickFunction(this_00,(UWorld *)**(undefined8 **)this);
  pFVar3 = UTickableConstraint::GetTickFunction(this_01,(UWorld *)**(undefined8 **)this);
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    if (*(FConstraintTickFunction **)(lVar4 + 8) == pFVar3) goto LAB_1464a1f71;
  }
  lVar4 = 0;
LAB_1464a1f71:
  return lVar4 != 0;
}

// operator() @ 1464a1fa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::
GetConstraintsByPredicate<`UE::TransformConstraintUtil::FConstraintsInteractionCache::Get'::__l2::<lambda_1>_>'
::__l2::<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UTickableConstraint *this_00;
  UTickableConstraint *this_01;
  FConstraintTickFunction *pFVar2;
  FConstraintTickFunction *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(&param_2->WeakPtr), !bVar1)) {
    return false;
  }
  this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  pFVar2 = UTickableConstraint::GetTickFunction(this_00,(UWorld *)**(undefined8 **)this);
  pFVar3 = UTickableConstraint::GetTickFunction(this_01,(UWorld *)**(undefined8 **)this);
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    if (*(FConstraintTickFunction **)(lVar4 + 8) == pFVar3) goto LAB_1464a2031;
  }
  lVar4 = 0;
LAB_1464a2031:
  return lVar4 != 0;
}

// operator() @ 1464a2060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::
GetConstraintsByPredicate<`UE::TransformConstraintUtil::GetChildrenConstraints'::__l2::<lambda_1>_>'
::__l2::<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UTickableConstraint *this_00;
  UTickableConstraint *this_01;
  FConstraintTickFunction *pFVar2;
  FConstraintTickFunction *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(&param_2->WeakPtr), !bVar1)) {
    return false;
  }
  this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  pFVar2 = UTickableConstraint::GetTickFunction(this_00,(UWorld *)**(undefined8 **)this);
  pFVar3 = UTickableConstraint::GetTickFunction(this_01,(UWorld *)**(undefined8 **)this);
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    if (*(FConstraintTickFunction **)(lVar4 + 8) == pFVar3) goto LAB_1464a20f1;
  }
  lVar4 = 0;
LAB_1464a20f1:
  return lVar4 != 0;
}

// operator() @ 1464a2120

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::
GetConstraintsByPredicate<`FConstraintCycleChecker::UpdateCyclingDependency'::__l2::<lambda_1>_>'::
__l2::<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UTickableConstraint *this_00;
  UTickableConstraint *this_01;
  FConstraintTickFunction *pFVar2;
  FConstraintTickFunction *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(&param_2->WeakPtr), !bVar1)) {
    return false;
  }
  this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  pFVar2 = UTickableConstraint::GetTickFunction(this_00,(UWorld *)**(undefined8 **)this);
  pFVar3 = UTickableConstraint::GetTickFunction(this_01,(UWorld *)**(undefined8 **)this);
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    if (*(FConstraintTickFunction **)(lVar4 + 8) == pFVar3) goto LAB_1464a21b1;
  }
  lVar4 = 0;
LAB_1464a21b1:
  return lVar4 != 0;
}

// operator() @ 1464a21e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildAttachmentsDependencies'::__l18::<lambda_1>_>'::
__l2::<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UTickableConstraint *this_00;
  UTickableConstraint *this_01;
  FConstraintTickFunction *pFVar2;
  FConstraintTickFunction *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(&param_2->WeakPtr), !bVar1)) {
    return false;
  }
  this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  pFVar2 = UTickableConstraint::GetTickFunction(this_00,(UWorld *)**(undefined8 **)this);
  pFVar3 = UTickableConstraint::GetTickFunction(this_01,(UWorld *)**(undefined8 **)this);
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    if (*(FConstraintTickFunction **)(lVar4 + 8) == pFVar3) goto LAB_1464a2271;
  }
  lVar4 = 0;
LAB_1464a2271:
  return lVar4 != 0;
}

// operator() @ 1464a22a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::
GetConstraintsByPredicate<`FDependencyBuilder::BuildExternalDependencies'::__l108::<lambda_3>_>'::
__l2::<lambda_2>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  bool bVar1;
  UTickableConstraint *this_00;
  UTickableConstraint *this_01;
  FConstraintTickFunction *pFVar2;
  FConstraintTickFunction *pFVar3;
  longlong lVar4;
  longlong lVar5;
  
  bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr);
  if ((!bVar1) || (bVar1 = FWeakObjectPtr::IsValid(&param_2->WeakPtr), !bVar1)) {
    return false;
  }
  this_00 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  pFVar2 = UTickableConstraint::GetTickFunction(this_00,(UWorld *)**(undefined8 **)this);
  pFVar3 = UTickableConstraint::GetTickFunction(this_01,(UWorld *)**(undefined8 **)this);
  lVar4 = pFVar2->_padding_;
  lVar5 = (longlong)(int)pFVar2->_padding_ * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    if (*(FConstraintTickFunction **)(lVar4 + 8) == pFVar3) goto LAB_1464a2331;
  }
  lVar4 = 0;
LAB_1464a2331:
  return lVar4 != 0;
}

// operator() @ 1464a23e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FConstraintsManagerController::GetParentConstraints'::__l11::<lambda_3>::operator()
          (void *this,TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_1,
          TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *param_2)

{
  FWeakObjectPtr *this_00;
  bool bVar1;
  UTickableConstraint *this_01;
  UTickableConstraint *this_02;
  UWorld *pUVar2;
  FConstraintTickFunction *pFVar3;
  FConstraintTickFunction *pFVar4;
  longlong lVar5;
  longlong lVar6;
  
  this_01 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_2->WeakPtr);
  this_02 = (UTickableConstraint *)FWeakObjectPtr::Get(&param_1->WeakPtr);
  this_00 = *(FWeakObjectPtr **)this;
  bVar1 = FWeakObjectPtr::IsValid(this_00);
  if ((bVar1) && (pUVar2 = (UWorld *)FWeakObjectPtr::Get(this_00), pUVar2 != (UWorld *)0x0)) {
    pFVar3 = UTickableConstraint::GetTickFunction(this_01,pUVar2);
    pFVar4 = UTickableConstraint::GetTickFunction(this_02,pUVar2);
    lVar5 = pFVar3->_padding_;
    lVar6 = (longlong)(int)pFVar3->_padding_ * 0x10 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
      if (*(FConstraintTickFunction **)(lVar5 + 8) == pFVar4) goto LAB_1464a2471;
    }
    lVar5 = 0;
LAB_1464a2471:
    bVar1 = lVar5 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// AddConstraint @ 1464a30f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FConstraintsManagerController::AddConstraint
          (FConstraintsManagerController *this,UTickableConstraint *param_1)

{
  code *pcVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  UWorld *pUVar4;
  FWeakObjectPtr local_res10;
  UWorld *local_res18 [2];
  
  if (((param_1 != (UTickableConstraint *)0x0) && (this->World != (UWorld *)0x0)) &&
     (this_00 = UConstraintSubsystem::Get(), this_00 != (UConstraintSubsystem *)0x0)) {
    pUVar3 = this->World;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = (UWorld *)0x0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    pUVar3 = pUVar4;
    if (bVar2) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
    }
    bVar2 = UConstraintSubsystem::HasConstraint(this_00,pUVar3,param_1);
    if (!bVar2) {
      pcVar1 = *(code **)(param_1->_padding_ + 0x300);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      pUVar3 = pUVar4;
      if (bVar2) {
        pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
      }
      (*pcVar1)(param_1,pUVar3);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      pUVar3 = pUVar4;
      if (bVar2) {
        pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
      }
      UConstraintSubsystem::AddConstraint(this_00,pUVar3,param_1);
      pcVar1 = *(code **)(param_1->_padding_ + 0x310);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar2) {
        pUVar4 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
      }
      (*pcVar1)(param_1,pUVar4);
      bVar2 = FWeakObjectPtr::IsValid(&local_res10);
      if ((bVar2) && (pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10), pUVar3 != (UWorld *)0x0)
         ) {
        ::Singleton.World = pUVar3;
      }
      Notify(ConstraintAdded,(UObject *)param_1);
      return true;
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar2) && (pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10), pUVar3 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar3;
    }
  }
  return false;
}

// DestroyManager @ 1464ace70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FConstraintsManagerController::DestroyManager(FConstraintsManagerController *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ULevel *pUVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  
  if ((this->World != (UWorld *)0x0) &&
     (pUVar7 = UWorld::GetCurrentLevel(this->World), pUVar7 != (ULevel *)0x0)) {
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 0;
    pUVar7 = UWorld::GetCurrentLevel(this->World);
    pFVar10 = (pUVar7->Actors).AllocatorInstance.Data;
    iVar2 = (pUVar7->Actors).ArrayNum;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    while( true ) {
      if ((pUVar7->Actors).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<AActor>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar1) break;
      lVar3 = *(longlong *)pFVar10;
      if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
        pUVar8 = AConstraintsActor::StaticClass();
        iVar6 = (int)pUVar8->_padding_;
        if ((iVar6 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
            &pUVar8->_padding_)) {
          local_48 = *(longlong *)pFVar10;
          if (((local_40.Data <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 < local_40.Data + (longlong)local_38._4_4_ * 8))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = (int)local_38;
          if ((int)local_38 == local_38._4_4_) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_40,(int *)((longlong)&local_38 + 4));
          }
          local_38 = CONCAT44(local_38._4_4_,iVar6 + 1);
          *(longlong *)(local_40.Data + (longlong)iVar6 * 8) = local_48;
        }
      }
      pFVar10 = pFVar10 + 8;
    }
    iVar2 = (int)local_38;
    uVar9 = (ulonglong)(int)local_38;
    pFVar1 = local_40.Data + uVar9 * 8;
    FVar11.Data = local_40.Data;
    while( true ) {
      if ((int)uVar9 != iVar2) {
        `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar11.Data == pFVar1) break;
      UWorld::DestroyActor(this->World,*(AActor **)FVar11.Data,true,true);
      uVar9 = local_38 & 0xffffffff;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
  }
  return;
}

// DoesExistInAnyWorld @ 1464ad220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FConstraintsManagerController::DoesExistInAnyWorld
          (FConstraintsManagerController *this,UTickableConstraint *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  UConstraintSubsystem *this_00;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  UWorld *pUVar9;
  FScriptContainerElement *this_01;
  FScriptContainerElement *pFVar10;
  UWorld *local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  
  bVar6 = false;
  if (param_1 == (UTickableConstraint *)0x0) {
    return false;
  }
  this_00 = UConstraintSubsystem::Get();
  if (this_00 != (UConstraintSubsystem *)0x0) {
    pUVar9 = this->World;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res10 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res10);
    pFVar10 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    iVar3 = *piVar1;
    pFVar2 = pFVar10 + (longlong)iVar3 * 8;
    while( true ) {
      if (*piVar1 != iVar3) {
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      bVar6 = false;
      if (pFVar10 == pFVar2) break;
      if (*(UWorld **)(*(longlong *)pFVar10 + 0x2c0) == (UWorld *)0x0) {
LAB_1464ad3cc:
        pFVar10 = pFVar10 + 8;
      }
      else {
        pTVar8 = UConstraintSubsystem::GetConstraintsArray
                           (this_00,*(UWorld **)(*(longlong *)pFVar10 + 0x2c0));
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_res20.ObjectIndex = 0;
        local_res20.ObjectSerialNumber = 0;
        local_res10 = (UWorld *)param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res10);
        pFVar5 = (pTVar8->AllocatorInstance).Data;
        iVar4 = pTVar8->ArrayNum;
        this_01 = pFVar5;
        if (pFVar5 == pFVar5 + (longlong)iVar4 * 8) goto LAB_1464ad3cc;
        do {
          bVar6 = TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>::
                  UEOpEquals<UTickableConstraint,bool>
                            ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)this_01,
                             (TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)&local_res20);
          if (bVar6) {
            if ((int)((longlong)this_01 - (longlong)pFVar5 >> 3) == -1) goto LAB_1464ad3cc;
            bVar6 = true;
            goto LAB_1464ad3de;
          }
          this_01 = this_01 + 8;
        } while (this_01 != pFVar5 + (longlong)iVar4 * 8);
        pFVar10 = pFVar10 + 8;
      }
    }
LAB_1464ad3de:
    bVar7 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar7) && (pUVar9 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar9 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar9;
    }
  }
  return bVar6;
}

// EvaluateAllConstraints @ 1464aeb00

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
FConstraintsManagerController::EvaluateAllConstraints(FConstraintsManagerController *this)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  int iVar4;
  ForAnyElementType this_00;
  undefined1 local_res10 [8];
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  GetAllConstraints(this,&local_18,true);
  iVar4 = local_18.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_18.AllocatorInstance.Data + (longlong)iVar4 * 8);
  this_00.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar4) {
      `TCheckedPointerIterator<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((FWeakObjectPtr *)this_00.Data == pFVar1) break;
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00.Data);
    if (bVar2) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.Data);
      (**(code **)(*(longlong *)pUVar3 + 0x2b8))(pUVar3,1);
    }
    this_00.Data = this_00.Data + 8;
  }
  if ((FWeakObjectPtr *)local_18.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FindManager @ 1464afc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UConstraintsManager * __thiscall
FConstraintsManagerController::FindManager(FConstraintsManagerController *this)

{
  FObjectPtr_u_0 *this_00;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ULevel *pUVar8;
  UClass *pUVar9;
  FObjectPtr_u_0 FVar10;
  UConstraintsManager *pUVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  FObjectPtr_u_0 FVar14;
  
  if (this->World == (UWorld *)0x0) {
    return (UConstraintsManager *)0x0;
  }
  pUVar8 = UWorld::GetCurrentLevel(this->World);
  FVar14.Handle = (UObject *)0x0;
  if (pUVar8 != (ULevel *)0x0) {
    iVar1 = (pUVar8->Actors).ArrayNum;
    pFVar3 = (pUVar8->Actors).AllocatorInstance.Data;
    for (pFVar13 = pFVar3; FVar10.Handle = FVar14.Handle, pFVar13 != pFVar3 + (longlong)iVar1 * 8;
        pFVar13 = pFVar13 + 8) {
      lVar4 = *(longlong *)pFVar13;
      if ((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) {
        pUVar9 = AConstraintsActor::StaticClass();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) {
          uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar3 >> 3);
          if (uVar12 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar12 < (pUVar8->Actors).ArrayNum) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              pUVar11 = (UConstraintsManager *)(*pcVar5)();
              return pUVar11;
            }
            pFVar3 = (pUVar8->Actors).AllocatorInstance.Data;
            this_00 = (FObjectPtr_u_0 *)(pFVar3 + (longlong)(int)uVar12 * 8);
            if (*(longlong *)(pFVar3 + (longlong)(int)uVar12 * 8) != 0) {
              pUVar9 = AConstraintsActor::StaticClass();
              bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
              if (bVar6) {
                FVar10.Handle = this_00->Handle;
              }
            }
          }
          break;
        }
      }
    }
    if (((FVar10.Handle != (UObject *)0x0) &&
        (FVar14 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)&FVar10.Handle[0x11].field_0x18,
        UE::GC::GIsIncrementalReachabilityPending != false)) && (FVar14.Handle != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(FVar14.Handle);
    }
  }
  return (UConstraintsManager *)FVar14.Handle;
}

// FlushEvaluationGraph @ 1464b0210

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
FConstraintsManagerController::FlushEvaluationGraph(FConstraintsManagerController *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UConstraintSubsystem *this_00;
  UWorld *pUVar4;
  FConstraintsInWorld *this_01;
  FConstraintsEvaluationGraph *this_02;
  UWorld *pUVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FConstraintNode *pFVar8;
  FConstraintNode *pFVar9;
  undefined1 local_res10 [8];
  FWeakObjectPtr local_res18;
  UWorld *local_res20;
  
  if (((ConstraintsEvaluationGraph::bUseEvaluationGraph) &&
      (this_00 = UConstraintSubsystem::Get(), this_00 != (UConstraintSubsystem *)0x0)) &&
     (pUVar5 = this->World, pUVar5 != (UWorld *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pUVar4 = (UWorld *)0x0;
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      pUVar4 = (UWorld *)FWeakObjectPtr::Get(&local_res18);
    }
    this_01 = UConstraintSubsystem::ConstraintsInWorldFindOrAdd(this_00,pUVar4);
    this_02 = FConstraintsInWorld::GetEvaluationGraph(this_01);
    if ((this_02->State == PendingEvaluation) && ((this_02->Nodes).ArrayNum != 0)) {
      if ((ConstraintsEvaluationGraph::bDebugGraph != false) && (2 < (byte)LogTemp._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      this_02->State = Flushing;
      iVar1 = (this_02->Nodes).ArrayNum;
      pFVar8 = (FConstraintNode *)(this_02->Nodes).AllocatorInstance.Data;
      pFVar9 = pFVar8 + iVar1;
      while( true ) {
        if ((this_02->Nodes).ArrayNum != iVar1) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FConstraintNode,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar8 == pFVar9) break;
        if (pFVar8->bMarkedForEvaluation != false) {
          FConstraintsEvaluationGraph::Evaluate(this_02,pFVar8);
        }
        pFVar8 = pFVar8 + 1;
      }
      pFVar6 = (this_02->Nodes).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)(this_02->Nodes).ArrayNum * 200;
      for (; pFVar6 != pFVar7; pFVar6 = pFVar6 + 200) {
        if (pFVar6[0xc0] != (FScriptContainerElement)0x0) {
          bVar3 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7515207077300535390>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Animation\\Constraints\\Private\\ConstraintsEvaluationGraph.cpp"
                             ,0x5e,"!bHasNodesToEvaluate");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
      }
      this_02->State = ReadyForEvaluation;
    }
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar3) && (pUVar5 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar5 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar5;
    }
  }
  return;
}

// Get @ 1464b0da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintsManagerController * __cdecl FConstraintsManagerController::Get(UWorld *param_1)

{
  ::Singleton.World = param_1;
  return &::Singleton;
}

// GetAllConstraints @ 1464b1030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::GetAllConstraints
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,bool param_1)

{
  bool bVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  FConstraintsInWorld *this_01;
  FConstraintsEvaluationGraph *this_02;
  UWorld *pUVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ForAnyElementType FVar9;
  FWeakObjectPtr local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_58;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_48;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 == (UConstraintSubsystem *)0x0) || (pUVar3 = this->World, pUVar3 == (UWorld *)0x0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::GetAllConstraints'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    FVar9 = ::Empty.AllocatorInstance;
    iVar7 = ::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
      return __return_storage_ptr__;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar7,0,&__return_storage_ptr__->AllocatorInstance,iVar7,
               &__return_storage_ptr__->ArrayMax);
    memcpy((__return_storage_ptr__->AllocatorInstance).Data,FVar9.Data,(longlong)iVar7 << 3);
    return __return_storage_ptr__;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = (UWorld *)0x0;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
  if ((ConstraintsEvaluationGraph::bUseEvaluationGraph != false) && (param_1)) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    pUVar3 = pUVar4;
    if (bVar1) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
    }
    this_01 = UConstraintSubsystem::ConstraintsInWorldFindOrAdd(this_00,pUVar3);
    this_02 = FConstraintsInWorld::GetEvaluationGraph(this_01);
    bVar1 = FConstraintsEvaluationGraph::GetSortedConstraints(this_02,&local_58);
    if (bVar1) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
      __return_storage_ptr__->ArrayNum = local_58.ArrayNum;
      iVar7 = local_58.ArrayMax;
      local_58.ArrayNum = 0;
      local_58.ArrayMax = 0;
      local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      goto LAB_1464b126d;
    }
    if ((UWorld *)local_58.AllocatorInstance.Data != (UWorld *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  pUVar3 = pUVar4;
  if (bVar1) {
    pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
  }
  UConstraintSubsystem::GetConstraints(this_00,&local_48,pUVar3);
  FVar9.Data = local_48.AllocatorInstance.Data;
  iVar7 = local_48.ArrayNum;
  uVar8 = 0;
  if (local_48.ArrayNum != 0) {
    local_58.AllocatorInstance.Data = local_48.AllocatorInstance.Data;
    uVar8 = 0;
    bVar1 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)local_48.AllocatorInstance.Data,true,false);
    bVar1 = !bVar1;
    pUVar3 = pUVar4;
    do {
      uVar5 = (uint)pUVar3;
      uVar6 = uVar5;
      do {
        uVar6 = uVar6 + 1;
        pUVar3 = (UWorld *)(ulonglong)uVar6;
        if (iVar7 <= (int)uVar6) break;
        bVar2 = FWeakObjectPtr::IsStale
                          ((FWeakObjectPtr *)(&((UWorld *)FVar9.Data)->_padding_ + (int)uVar6),true,
                           false);
      } while (bVar1 == !bVar2);
      if (bVar1 != false) {
        if (uVar8 != uVar5) {
          memmove(local_58.AllocatorInstance.Data + (longlong)(int)uVar8 * 8,
                  local_58.AllocatorInstance.Data + (longlong)(int)uVar5 * 8,
                  (longlong)(int)(uVar6 - uVar5) << 3);
        }
        uVar8 = uVar8 + (uVar6 - uVar5);
      }
      bVar1 = (bool)(bVar1 ^ 1);
      FVar9.Data = local_58.AllocatorInstance.Data;
    } while ((int)uVar6 < iVar7);
    local_48.ArrayNum = uVar8;
  }
  if (param_1) {
    bVar1 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar1) {
      pUVar4 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
    }
    UE::Constraints::Graph::SortConstraints(pUVar4,&local_48);
    (__return_storage_ptr__->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_48.ArrayNum;
    iVar7 = local_48.ArrayMax;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = local_48.AllocatorInstance.Data;
    iVar7 = local_48.ArrayMax;
    local_48.ArrayNum = 0;
    local_48.ArrayMax = 0;
    local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = uVar8;
  }
LAB_1464b126d:
  __return_storage_ptr__->ArrayMax = iVar7;
  bVar1 = FWeakObjectPtr::IsValid(&local_res20);
  if ((bVar1) && (pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res20), pUVar3 != (UWorld *)0x0)) {
    ::Singleton.World = pUVar3;
  }
  return __return_storage_ptr__;
}

// GetConstraint @ 1464b1da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableConstraint * __thiscall
FConstraintsManagerController::GetConstraint(FConstraintsManagerController *this,FGuid *param_1)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  UConstraintSubsystem *this_00;
  UWorld *pUVar8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  UTickableConstraint *pUVar11;
  UWorld *pUVar12;
  int iVar13;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr local_res18;
  UWorld *local_res20;
  int local_48;
  int iStack_44;
  int iStack_3c;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 == (UConstraintSubsystem *)0x0) || (pUVar8 = this->World, pUVar8 == (UWorld *)0x0)) {
    return (UTickableConstraint *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar12 = (UWorld *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar7 = FWeakObjectPtr::IsValid(&local_res18);
  pUVar8 = pUVar12;
  if (bVar7) {
    pUVar8 = (UWorld *)FWeakObjectPtr::Get(&local_res18);
  }
  pTVar9 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar8);
  uVar3 = param_1->A;
  uVar4 = param_1->B;
  uVar5 = param_1->C;
  uVar6 = param_1->D;
  pFVar1 = (FWeakObjectPtr *)(pTVar9->AllocatorInstance).Data;
  iVar13 = pTVar9->ArrayNum;
  this_01 = pFVar1;
  do {
    if (this_01 == pFVar1 + iVar13) {
LAB_1464b1f52:
      bVar7 = FWeakObjectPtr::IsValid(&local_res18);
      if ((bVar7) && (pUVar8 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar8 != (UWorld *)0x0)
         ) {
        ::Singleton.World = pUVar8;
      }
      return (UTickableConstraint *)pUVar12;
    }
    bVar7 = FWeakObjectPtr::IsValid(this_01);
    if ((bVar7) &&
       (pUVar10 = FWeakObjectPtr::Get(this_01),
       ((uVar6 == *(int *)&pUVar10[1].field_0x10 && uVar5 == *(int *)&pUVar10[1].field_0xc) &&
       uVar4 == *(int *)&pUVar10[1].field_0x8) && uVar3 == *(int *)&pUVar10[1].field_0x4)) {
      iVar13 = (int)((longlong)this_01 - (longlong)pFVar1 >> 3);
      if ((-1 < iVar13) && (iVar13 < pTVar9->ArrayNum)) {
        if ((iVar13 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          pUVar11 = (UTickableConstraint *)(*pcVar2)();
          return pUVar11;
        }
        pUVar12 = (UWorld *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((pTVar9->AllocatorInstance).Data + (longlong)iVar13 * 8));
      }
      goto LAB_1464b1f52;
    }
    this_01 = this_01 + 1;
  } while( true );
}

// GetConstraint @ 1464b1fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTickableConstraint * __thiscall
FConstraintsManagerController::GetConstraint(FConstraintsManagerController *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  UTickableConstraint *pUVar5;
  UWorld *pUVar6;
  FWeakObjectPtr local_res18;
  UWorld *local_res20;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 == (UConstraintSubsystem *)0x0) || (pUVar3 = this->World, pUVar3 == (UWorld *)0x0)) {
    return (UTickableConstraint *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar6 = (UWorld *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  pUVar3 = pUVar6;
  if (bVar2) {
    pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res18);
  }
  pTVar4 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar3);
  if ((-1 < param_1) && (param_1 < pTVar4->ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UTickableConstraint *)(*pcVar1)();
      return pUVar5;
    }
    pUVar6 = (UWorld *)
             FWeakObjectPtr::Get((FWeakObjectPtr *)
                                 ((pTVar4->AllocatorInstance).Data + (longlong)param_1 * 8));
  }
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if ((bVar2) && (pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar3 != (UWorld *)0x0)) {
    ::Singleton.World = pUVar3;
  }
  return (UTickableConstraint *)pUVar6;
}

// GetConstraintIndex @ 1464b20f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FConstraintsManagerController::GetConstraintIndex
          (FConstraintsManagerController *this,FName *param_1)

{
  FName FVar1;
  FWeakObjectPtr *pFVar2;
  FName FVar3;
  bool bVar4;
  UConstraintSubsystem *this_00;
  UWorld *pUVar5;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar6;
  UObject *pUVar7;
  UWorld *pUVar8;
  int iVar9;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr local_res18;
  UWorld *local_res20;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 == (UConstraintSubsystem *)0x0) || (pUVar8 = this->World, pUVar8 == (UWorld *)0x0)) {
    return -1;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pUVar5 = (UWorld *)0x0;
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar4) {
    pUVar5 = (UWorld *)FWeakObjectPtr::Get(&local_res18);
  }
  pTVar6 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar5);
  FVar1 = *param_1;
  pFVar2 = (FWeakObjectPtr *)(pTVar6->AllocatorInstance).Data;
  iVar9 = pTVar6->ArrayNum;
  this_01 = pFVar2;
  do {
    if (this_01 == pFVar2 + iVar9) {
      iVar9 = -1;
LAB_1464b21c8:
      bVar4 = FWeakObjectPtr::IsValid(&local_res18);
      if ((bVar4) && (pUVar8 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar8 != (UWorld *)0x0)
         ) {
        ::Singleton.World = pUVar8;
      }
      return iVar9;
    }
    bVar4 = FWeakObjectPtr::IsValid(this_01);
    if ((bVar4) &&
       (pUVar7 = FWeakObjectPtr::Get(this_01),
       FVar3.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18,
       FVar3.Number = *(uint *)&pUVar7->field_0x1c, FVar3 == FVar1)) {
      iVar9 = (int)((longlong)this_01 - (longlong)pFVar2 >> 3);
      goto LAB_1464b21c8;
    }
    this_01 = this_01 + 1;
  } while( true );
}

// GetConstraintsArray @ 1464b23c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::GetConstraintsArray(FConstraintsManagerController *this)

{
  bool bVar1;
  UConstraintSubsystem *this_00;
  UWorld *pUVar2;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  UWorld *pUVar4;
  FWeakObjectPtr local_res10;
  UWorld *local_res18;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 != (UConstraintSubsystem *)0x0) && (pUVar4 = this->World, pUVar4 != (UWorld *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    pUVar2 = (UWorld *)0x0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = pUVar4;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar2 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
    }
    pTVar3 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar2);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar4 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
      if (pUVar4 != (UWorld *)0x0) {
        ::Singleton.World = pUVar4;
      }
    }
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FConstraintsManagerController::GetConstraintsArray'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
      return &::Empty;
    }
  }
  return &::Empty;
}

// GetManager @ 1464b4590

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

UConstraintsManager * __thiscall
FConstraintsManagerController::GetManager(FConstraintsManagerController *this)

{
  bool bVar1;
  UConstraintsManager *pUVar2;
  UWorld *this_00;
  FActorSpawnParameters *pFVar3;
  AConstraintsActor *pAVar4;
  UWorld *pUVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  FWeakObjectPtr local_98;
  UWorld *local_90;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pUVar5 = this->World;
  if (pUVar5 == (UWorld *)0x0) {
    pUVar2 = (UConstraintsManager *)0x0;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    this_00 = (UWorld *)0x0;
    local_98.ObjectIndex = 0;
    local_98.ObjectSerialNumber = 0;
    local_90 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_90);
    pUVar2 = FindManager(this);
    if (pUVar2 == (UConstraintsManager *)0x0) {
      bVar1 = FWeakObjectPtr::IsValid(&local_98);
      if (bVar1) {
        this_00 = (UWorld *)FWeakObjectPtr::Get(&local_98);
      }
      pFVar3 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
      pAVar4 = UWorld::SpawnActor<AConstraintsActor>(this_00,pFVar3);
      if (local_88._64_8_ != 0) {
        plVar6 = (longlong *)(local_88 + 0x50);
        if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_88._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      pUVar2 = (pAVar4->ConstraintsManager).field0_0x0.DebugPtr;
    }
    bVar1 = FWeakObjectPtr::IsValid(&local_98);
    if ((bVar1) && (pUVar5 = (UWorld *)FWeakObjectPtr::Get(&local_98), pUVar5 != (UWorld *)0x0)) {
      ::Singleton.World = pUVar5;
    }
  }
  return pUVar2;
}

// GetNotifyDelegate @ 1464b4d60

TMulticastDelegate<void___cdecl(EConstraintsManagerNotifyType,UObject_*),FDefaultDelegateUserPolicy>
* __cdecl FConstraintsManagerController::GetNotifyDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FConstraintsManagerController::GetNotifyDelegate'::__l2::
             _dynamic_atexit_destructor_for__NotifyDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &NotifyDelegate;
    }
  }
  return &NotifyDelegate;
}

// GetParentConstraints @ 1464b4e50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::GetParentConstraints
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,uint param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UConstraintSubsystem *this_00;
  UWorld *pUVar6;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  UObject *pUVar8;
  UWorld *pUVar9;
  FWeakObjectPtr *this_01;
  FIdentityFunctor local_res18;
  FWeakObjectPtr local_48;
  UWorld *local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FConstraintsManagerController::GetParentConstraints'::__l2::
           _dynamic_atexit_destructor_for__DummyArray__);
    _Init_thread_footer(&::_TSS0);
  }
  if (((param_1 == 0) ||
      (this_00 = UConstraintSubsystem::Get(), this_00 == (UConstraintSubsystem *)0x0)) ||
     (pUVar9 = this->World, pUVar9 == (UWorld *)0x0)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    _Src = DummyArray.AllocatorInstance;
    iVar5 = DummyArray.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 == 0) {
      __return_storage_ptr__->ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar5,0,&__return_storage_ptr__->AllocatorInstance,iVar5,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar5 << 3);
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar6 = (UWorld *)0x0;
    local_48.ObjectIndex = 0;
    local_48.ObjectSerialNumber = 0;
    local_40 = pUVar9;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_40);
    bVar3 = FWeakObjectPtr::IsValid(&local_48);
    if (bVar3) {
      pUVar6 = (UWorld *)FWeakObjectPtr::Get(&local_48);
    }
    pTVar7 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar6);
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = 0;
    this_01 = (FWeakObjectPtr *)(pTVar7->AllocatorInstance).Data;
    pFVar1 = this_01 + pTVar7->ArrayNum;
    local_30._0_4_ = 0;
    if (this_01 != pFVar1) {
      do {
        bVar3 = FWeakObjectPtr::IsValid(this_01);
        if (((bVar3) && (pUVar8 = FWeakObjectPtr::Get(this_01), pUVar8 != (UObject *)0x0)) &&
           ((*(uint *)&pUVar8->field_0x8 >> 0x1e & 1) == 0)) {
          pUVar8 = FWeakObjectPtr::Get(this_01);
          uVar4 = (**(code **)(*(longlong *)pUVar8 + 0x2e8))(pUVar8);
          if (uVar4 == param_1) {
            if (((local_38.Data <= this_01) &&
                (this_01 < (FWeakObjectPtr *)(local_38.Data + (longlong)local_30._4_4_ * 8))) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar7 = (TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                        *)(*pcVar2)();
              return pTVar7;
            }
            iVar5 = (int)local_30;
            if ((int)local_30 == local_30._4_4_) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&local_38,(int *)((longlong)&local_30 + 4));
            }
            local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
            *(FWeakObjectPtr *)(local_38.Data + (longlong)iVar5 * 8) = *this_01;
          }
        }
        this_01 = this_01 + 1;
      } while (this_01 != pFVar1);
    }
    iVar5 = (int)local_30;
    if (param_2) {
      AlgoImpl::
      StableSortInternal<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,FIdentityFunctor,_FConstraintsManagerController::GetParentConstraints_::__l11::<lambda_3>_>
                ((TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)local_38.Data,(int)local_30,
                 local_res18,(<lambda_3>)&local_48);
      iVar5 = (int)local_30;
    }
    (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = iVar5;
    __return_storage_ptr__->ArrayMax = local_30._4_4_;
    local_30 = 0;
    bVar3 = FWeakObjectPtr::IsValid(&local_48);
    if ((bVar3) && (pUVar9 = (UWorld *)FWeakObjectPtr::Get(&local_48), pUVar9 != (UWorld *)0x0)) {
      ::Singleton.World = pUVar9;
    }
  }
  return __return_storage_ptr__;
}

// GetStaticConstraints @ 1464b6ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
FConstraintsManagerController::GetStaticConstraints
          (FConstraintsManagerController *this,
          TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,bool param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  byte bVar2;
  UConstraintsManager *pUVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_58;
  ulonglong uVar8;
  
  pUVar3 = FindManager(this);
  if (pUVar3 == (UConstraintsManager *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FConstraintsManagerController::GetStaticConstraints'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    _Src = ::Empty.AllocatorInstance;
    iVar4 = ::Empty.ArrayNum;
    __return_storage_ptr__->ArrayNum = iVar4;
    if (iVar4 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,0,&__return_storage_ptr__->AllocatorInstance,iVar4,
                 &__return_storage_ptr__->ArrayMax);
      memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src.Data,(longlong)iVar4 << 3);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  iVar4 = (pUVar3->Constraints).ArrayNum;
  uVar5 = 0;
  if (iVar4 != 0) {
    pFVar1 = (pUVar3->Constraints).AllocatorInstance.Data;
    uVar8 = uVar5;
    uVar11 = uVar5;
    if ((*(longlong *)pFVar1 == 0) || ((*(uint *)(*(longlong *)pFVar1 + 8) >> 0x1e & 1) != 0)) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    do {
      uVar6 = (uint)uVar8;
      uVar7 = uVar6;
      do {
        uVar5 = uVar5 + 1;
        uVar7 = uVar7 + 1;
        if ((longlong)iVar4 <= (longlong)uVar5) break;
        if ((*(longlong *)(pFVar1 + uVar5 * 8) == 0) ||
           (bVar2 = 1, (*(uint *)(*(longlong *)(pFVar1 + uVar5 * 8) + 8) >> 0x1e & 1) != 0)) {
          bVar2 = 0;
        }
      } while (bVar9 == bVar2);
      if (bVar9 != 0) {
        uVar10 = (uint)uVar11;
        if (uVar10 != uVar6) {
          memmove(pFVar1 + (longlong)(int)uVar10 * 8,pFVar1 + (longlong)(int)uVar6 * 8,
                  (longlong)(int)(uVar7 - uVar6) << 3);
        }
        uVar11 = (ulonglong)(uVar10 + (uVar7 - uVar6));
      }
      bVar9 = bVar9 ^ 1;
      uVar8 = (ulonglong)uVar7;
    } while ((longlong)uVar5 < (longlong)iVar4);
    (pUVar3->Constraints).ArrayNum = (int)uVar11;
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = (pUVar3->Constraints).ArrayNum;
  pFVar1 = (pUVar3->Constraints).AllocatorInstance.Data;
  local_58.ArrayNum = iVar4;
  if (iVar4 == 0) {
    local_58.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar4,0,&local_58.AllocatorInstance,iVar4,&local_58.ArrayMax);
    ConstructItems<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TObjectPtr<UTickableConstraint>,int>
              (local_58.AllocatorInstance.Data,(TObjectPtr<UTickableConstraint> *)pFVar1,iVar4);
  }
  if (param_1) {
    UE::Constraints::Graph::SortConstraints(this->World,&local_58);
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_58.ArrayNum;
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = local_58.AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = local_58.ArrayNum;
  }
  __return_storage_ptr__->ArrayMax = local_58.ArrayMax;
  return __return_storage_ptr__;
}

// InvalidateEvaluationGraph @ 1464b9070

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
FConstraintsManagerController::InvalidateEvaluationGraph(FConstraintsManagerController *this)

{
  int *piVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  FConstraintsInWorld *this_01;
  FConstraintsEvaluationGraph *pFVar4;
  UWorld *pUVar5;
  FWeakObjectPtr local_res10;
  UWorld *local_res18;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 != (UConstraintSubsystem *)0x0) && (pUVar5 = this->World, pUVar5 != (UWorld *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pUVar3 = (UWorld *)0x0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18 = pUVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
    }
    this_01 = UConstraintSubsystem::ConstraintsInWorldFindOrAdd(this_00,pUVar3);
    pFVar4 = FConstraintsInWorld::GetEvaluationGraph(this_01);
    pFVar4->State = InvalidData;
    DestructItems<FConstraintNode,int>
              ((FConstraintNode *)(pFVar4->Nodes).AllocatorInstance.Data,(pFVar4->Nodes).ArrayNum);
    piVar1 = &(pFVar4->Nodes).ArrayMax;
    (pFVar4->Nodes).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (200,8,0,&(pFVar4->Nodes).AllocatorInstance,0,piVar1);
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar2) && (pUVar5 = (UWorld *)FWeakObjectPtr::Get(&local_res10), pUVar5 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar5;
    }
    Notify(GraphUpdated,(UObject *)0x0);
  }
  return;
}

// MarkConstraintForEvaluation @ 1464b9da0

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
FConstraintsManagerController::MarkConstraintForEvaluation
          (FConstraintsManagerController *this,UTickableConstraint *param_1)

{
  FWeakObjectPtr FVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  FConstraintsInWorld *this_01;
  FConstraintsEvaluationGraph *this_02;
  FConstraintNode *pFVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FName local_38;
  FString local_30;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 != (UConstraintSubsystem *)0x0) &&
     (FVar1 = (FWeakObjectPtr)this->World, FVar1 != (FWeakObjectPtr)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar1);
    }
    pUVar3 = (UWorld *)0x0;
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = FVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)FVar1);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar2) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res18);
    }
    this_01 = UConstraintSubsystem::ConstraintsInWorldFindOrAdd(this_00,pUVar3);
    this_02 = FConstraintsInWorld::GetEvaluationGraph(this_01);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UTickableConstraint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_38 = (FName)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UTickableConstraint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
    if (this_02->State == InvalidData) {
      FConstraintsEvaluationGraph::Rebuild(this_02);
    }
    if ((this_02->State != Flushing) &&
       (pFVar4 = FConstraintsEvaluationGraph::FindNode
                           (this_02,(TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr> *)
                                    &local_res20), pFVar4 != (FConstraintNode *)0x0)) {
      if ((ConstraintsEvaluationGraph::bDebugGraph != false) && (2 < (byte)LogTemp._0_1_)) {
        pUVar5 = FWeakObjectPtr::Get(&local_res20);
        local_38.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
        local_38.Number = *(uint *)&pUVar5->field_0x1c;
        ::FName::ToString(&local_38,&local_30);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
        }
      }
      pFVar4->bMarkedForEvaluation = true;
      if (this_02->State == ReadyForEvaluation) {
        this_02->State = PendingEvaluation;
      }
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar2) && (pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar3 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar3;
    }
  }
  return;
}

// Notify @ 1464ba120

void __cdecl
FConstraintsManagerController::Notify(EConstraintsManagerNotifyType param_1,UObject *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)GetNotifyDelegate();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if (((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
          (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,param_1,param_2), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// OnSceneComponentConstrained @ 1464bb2a0

TMulticastDelegate<void___cdecl(USceneComponent_*),FDefaultDelegateUserPolicy> * __cdecl
FConstraintsManagerController::OnSceneComponentConstrained(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FConstraintsManagerController::OnSceneComponentConstrained'::__l2::
             _dynamic_atexit_destructor_for__SceneComponentConstrained__);
      _Init_thread_footer(&::_TSS0);
      return &SceneComponentConstrained;
    }
  }
  return &SceneComponentConstrained;
}

// RemoveAllConstraints @ 1464be5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FConstraintsManagerController::RemoveAllConstraints
          (FConstraintsManagerController *this,bool param_1)

{
  bool bVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  UTickableConstraint *pUVar5;
  UWorld *pUVar6;
  int iVar7;
  FWeakObjectPtr local_res18;
  UWorld *local_res20;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_48;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 != (UConstraintSubsystem *)0x0) && (pUVar3 = this->World, pUVar3 != (UWorld *)0x0)) {
    pUVar6 = (UWorld *)0x0;
    iVar7 = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res20 = pUVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    pUVar3 = pUVar6;
    if (bVar1) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res18);
    }
    pTVar4 = UConstraintSubsystem::GetConstraints(this_00,&local_48,pUVar3);
    if (&local_38 != pTVar4) {
      pUVar6 = (UWorld *)(pTVar4->AllocatorInstance).Data;
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar7 = pTVar4->ArrayNum;
      pTVar4->ArrayNum = 0;
      pTVar4->ArrayMax = 0;
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    bVar1 = FWeakObjectPtr::IsValid(&local_res18);
    if ((bVar1) && (pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res18), pUVar3 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar3;
    }
    bVar1 = false;
    for (pUVar3 = pUVar6; pUVar3 != (UWorld *)(&pUVar6->_padding_ + iVar7);
        pUVar3 = (UWorld *)&pUVar3->_padding_) {
      pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)pUVar3);
      bVar2 = RemoveConstraint(this,pUVar5,param_1);
      bVar1 = (bool)(bVar1 | bVar2);
    }
    if (pUVar6 != (UWorld *)0x0) {
      FMemory::Free(pUVar6);
    }
    return bVar1;
  }
  return false;
}

// RemoveConstraint @ 1464be960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FConstraintsManagerController::RemoveConstraint
          (FConstraintsManagerController *this,int param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar5;
  undefined1 uVar6;
  UConstraintSubsystem *this_01;
  UWorld *pUVar7;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  UWorld *pUVar9;
  UConstraintsManager *this_02;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  UWorld *pUVar16;
  FWeakObjectPtr local_res20;
  UWorld *local_c8;
  FWeakObjectPtr local_c0;
  FWeakObjectPtr local_b8;
  UWorld *local_b0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_a8;
  FSharedReferencer<1> FStack_a0;
  UWorld *local_98;
  UWorld *local_90;
  UWorld *local_88;
  UConstraintsManager *local_80;
  undefined8 local_78;
  FSharedReferencer<1> local_70;
  UConstraintsManager *local_68;
  UWorld *local_60;
  undefined1 local_58;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_50;
  
  this_01 = UConstraintSubsystem::Get();
  if ((this_01 != (UConstraintSubsystem *)0x0) && (pUVar7 = this->World, pUVar7 != (UWorld *)0x0)) {
    pUVar16 = (UWorld *)0x0;
    local_b0 = (UWorld *)0x0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_98 = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_98);
    bVar5 = FWeakObjectPtr::IsValid(&local_res20);
    pUVar7 = pUVar16;
    if (bVar5) {
      pUVar7 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
    }
    pTVar8 = UConstraintSubsystem::GetConstraintsArray(this_01,pUVar7);
    pUVar7 = pUVar16;
    if ((-1 < param_1) && (pUVar7 = (UWorld *)0x0, param_1 < pTVar8->ArrayNum)) {
      if ((param_1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pUVar7 = (UWorld *)
               FWeakObjectPtr::Get((FWeakObjectPtr *)
                                   ((pTVar8->AllocatorInstance).Data + (longlong)param_1 * 8));
      local_b0 = pUVar7;
    }
    bVar5 = FWeakObjectPtr::IsValid(&local_res20);
    if ((bVar5) && (pUVar9 = (UWorld *)FWeakObjectPtr::Get(&local_res20), pUVar9 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar9;
    }
    if (pUVar7 != (UWorld *)0x0) {
      pUVar9 = this->World;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      local_c0.ObjectIndex = 0;
      local_c0.ObjectSerialNumber = 0;
      local_90 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_90);
      Notify((param_2 ^ 1) + ConstraintRemoved,(UObject *)pUVar7);
      bVar5 = FWeakObjectPtr::IsValid(&local_c0);
      pUVar9 = pUVar16;
      if (bVar5) {
        pUVar9 = (UWorld *)FWeakObjectPtr::Get(&local_c0);
      }
      UConstraintSubsystem::RemoveConstraint(this_01,pUVar9,(UTickableConstraint *)pUVar7,param_2);
      bVar5 = FWeakObjectPtr::IsValid(&local_c0);
      if ((bVar5) && (pUVar9 = (UWorld *)FWeakObjectPtr::Get(&local_c0), pUVar9 != (UWorld *)0x0)) {
        ::Singleton.World = pUVar9;
      }
      this_02 = FindManager(this);
      if (this_02 != (UConstraintsManager *)0x0) {
        pFVar11 = (this_02->Constraints).AllocatorInstance.Data;
        pFVar2 = pFVar11 + (longlong)(this_02->Constraints).ArrayNum * 8;
        if (pFVar11 != pFVar2) {
          while ((*(UWorld **)pFVar11 == (UWorld *)0x0 || (*(UWorld **)pFVar11 != pUVar7))) {
            pFVar11 = pFVar11 + 8;
            if (pFVar11 == pFVar2) {
              return true;
            }
          }
          pUVar9 = this->World;
          local_80 = this_02;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          local_b8.ObjectIndex = 0;
          local_b8.ObjectSerialNumber = 0;
          local_88 = pUVar9;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UWorld *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_88);
          local_c8 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar7);
          }
          pFVar2 = (this_02->Constraints).AllocatorInstance.Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar2 + (longlong)(this_02->Constraints).ArrayMax * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          iVar1 = (this_02->Constraints).ArrayNum;
          if (iVar1 != 0) {
            pFVar2 = (this_02->Constraints).AllocatorInstance.Data;
            bVar5 = *(UWorld **)pFVar2 != local_c8;
            lVar12 = 0;
            pUVar7 = local_c8;
            iVar13 = 0;
            do {
              iVar14 = iVar13;
              do {
                lVar12 = lVar12 + 1;
                iVar14 = iVar14 + 1;
                if (iVar1 <= lVar12) break;
              } while (bVar5 == (*(UWorld **)(pFVar2 + lVar12 * 8) != pUVar7));
              if (bVar5 != false) {
                iVar15 = (int)pUVar16;
                if (iVar15 != iVar13) {
                  memmove(pFVar2 + (longlong)iVar15 * 8,pFVar2 + (longlong)iVar13 * 8,
                          (longlong)(iVar14 - iVar13) << 3);
                  pUVar7 = local_c8;
                }
                pUVar16 = (UWorld *)(ulonglong)(uint)(iVar15 + (iVar14 - iVar13));
              }
              bVar5 = (bool)(bVar5 ^ 1);
              iVar13 = iVar14;
            } while (lVar12 < iVar1);
            (local_80->Constraints).ArrayNum = (int)pUVar16;
            this_02 = local_80;
            pUVar7 = local_b0;
          }
          local_a8 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
          FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (this_02->OnConstraintRemoved_BP != (FOnConstraintRemoved)0x0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x9d4c) <
                 `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                                     ::__l2::_thread_safe_static_guard_0__),
               `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                              ::__l2::DelegateFName,"OnConstraintRemoved_BP");
              _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintRemoved_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintRemovedInfoGetter>::GetDelegateName(void)const___ptr64'
                    ::__l2::DelegateFName;
            bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this_02,false);
            if ((!bVar5) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DelegateOwner->IsValidLowLevelFast(false)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                                   ,0xd7,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate
                                (&local_50,(UObject *)this_02,FVar4);
            local_70.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
            local_a8 = pTVar10->Object;
            if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_70.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_78 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_a0,&local_70);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_70.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50.SharedReferenceCount.ReferenceController);
          }
          this_00 = local_a8;
          if (local_a8 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
            if ((local_a8 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            local_68 = this_02;
            local_60 = pUVar7;
            local_58 = param_2;
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                      (this_00,&local_68);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_a0.ReferenceController);
          bVar5 = FWeakObjectPtr::IsValid(&local_b8);
          if ((bVar5) &&
             (pUVar7 = (UWorld *)FWeakObjectPtr::Get(&local_b8), pUVar7 != (UWorld *)0x0)) {
            ::Singleton.World = pUVar7;
          }
          if ((this_02->Constraints).ArrayNum == 0) {
            DestroyManager(this);
          }
        }
      }
      return true;
    }
  }
  return false;
}

// RemoveConstraint @ 1464beeb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FConstraintsManagerController::RemoveConstraint
          (FConstraintsManagerController *this,UTickableConstraint *param_1,bool param_2)

{
  FWeakObjectPtr *pFVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  UTickableConstraint *pUVar5;
  UWorld *pUVar6;
  int iVar7;
  FWeakObjectPtr *this_01;
  FWeakObjectPtr local_res20;
  UWorld *local_38 [2];
  
  if (((bDoNotRemoveConstraint) ||
      (this_00 = UConstraintSubsystem::Get(), this_00 == (UConstraintSubsystem *)0x0)) ||
     (pUVar6 = this->World, pUVar6 == (UWorld *)0x0)) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar3 = (UWorld *)0x0;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_38[0] = pUVar6;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_38);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
  }
  pTVar4 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar3);
  pFVar1 = (FWeakObjectPtr *)(pTVar4->AllocatorInstance).Data;
  iVar7 = pTVar4->ArrayNum;
  this_01 = pFVar1;
  do {
    if (this_01 == pFVar1 + iVar7) {
      iVar7 = -1;
LAB_1464bef9b:
      bVar2 = FWeakObjectPtr::IsValid(&local_res20);
      if ((bVar2) && (pUVar6 = (UWorld *)FWeakObjectPtr::Get(&local_res20), pUVar6 != (UWorld *)0x0)
         ) {
        ::Singleton.World = pUVar6;
      }
      if (iVar7 == -1) {
        return false;
      }
      bVar2 = RemoveConstraint(this,iVar7,param_2);
      return bVar2;
    }
    bVar2 = FWeakObjectPtr::IsValid(this_01);
    if ((bVar2) && (pUVar5 = (UTickableConstraint *)FWeakObjectPtr::Get(this_01), pUVar5 == param_1)
       ) {
      iVar7 = (int)((longlong)this_01 - (longlong)pFVar1 >> 3);
      goto LAB_1464bef9b;
    }
    this_01 = this_01 + 1;
  } while( true );
}

// SetConstraintsDependencies @ 1464c0280

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
FConstraintsManagerController::SetConstraintsDependencies
          (FConstraintsManagerController *this,FGuid *param_1,FGuid *param_2)

{
  int iVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  UConstraintSubsystem *this_00;
  UWorld *pUVar13;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar14;
  UObject *pUVar15;
  UWorld *pUVar16;
  UTickableConstraint *pUVar17;
  FConstraintTickFunction *pFVar18;
  FConstraintTickFunction *pFVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  FWeakObjectPtr *pFVar23;
  FWeakObjectPtr local_res10;
  UWorld *local_68;
  UConstraintSubsystem *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  if (((param_1->D != 0 || param_1->C != 0) || param_1->B != 0) || param_1->A != 0) {
    if ((((((param_2->D != 0 || param_2->C != 0) || param_2->B != 0) || param_2->A != 0) &&
         (((param_1->D != param_2->D || param_1->C != param_2->C) || param_1->B != param_2->B) ||
          param_1->A != param_2->A)) &&
        (this_00 = UConstraintSubsystem::Get(), this_00 != (UConstraintSubsystem *)0x0)) &&
       (pUVar16 = this->World, pUVar16 != (UWorld *)0x0)) {
      local_60 = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      pUVar13 = (UWorld *)0x0;
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_68 = pUVar16;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar16);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_68);
      bVar12 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar12) {
        pUVar13 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
      }
      pTVar14 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar13);
      uVar4 = param_1->A;
      uVar5 = param_1->B;
      uVar6 = param_1->C;
      uVar7 = param_1->D;
      pFVar2 = (FWeakObjectPtr *)(pTVar14->AllocatorInstance).Data;
      iVar1 = pTVar14->ArrayNum;
      local_58 = uVar4;
      iStack_54 = uVar5;
      iStack_50 = uVar6;
      iStack_4c = uVar7;
      for (pFVar23 = pFVar2; pFVar23 != pFVar2 + iVar1; pFVar23 = pFVar23 + 1) {
        bVar12 = FWeakObjectPtr::IsValid(pFVar23);
        if ((bVar12) &&
           (pUVar15 = FWeakObjectPtr::Get(pFVar23),
           ((uVar7 == *(int *)&pUVar15[1].field_0x10 && uVar6 == *(int *)&pUVar15[1].field_0xc) &&
           uVar5 == *(int *)&pUVar15[1].field_0x8) && uVar4 == *(int *)&pUVar15[1].field_0x4)) {
          uVar22 = (uint)((longlong)pFVar23 - (longlong)pFVar2 >> 3);
          goto LAB_1464c0425;
        }
      }
      uVar22 = 0xffffffff;
LAB_1464c0425:
      uVar8 = param_2->A;
      uVar9 = param_2->B;
      uVar10 = param_2->C;
      uVar11 = param_2->D;
      pFVar2 = (FWeakObjectPtr *)(pTVar14->AllocatorInstance).Data;
      iVar1 = pTVar14->ArrayNum;
      local_48 = uVar8;
      iStack_44 = uVar9;
      iStack_40 = uVar10;
      iStack_3c = uVar11;
      for (pFVar23 = pFVar2; pFVar23 != pFVar2 + iVar1; pFVar23 = pFVar23 + 1) {
        bVar12 = FWeakObjectPtr::IsValid(pFVar23);
        if ((bVar12) &&
           (pUVar15 = FWeakObjectPtr::Get(pFVar23),
           ((uVar11 == *(int *)&pUVar15[1].field_0x10 && uVar10 == *(int *)&pUVar15[1].field_0xc) &&
           uVar9 == *(int *)&pUVar15[1].field_0x8) && uVar8 == *(int *)&pUVar15[1].field_0x4)) {
          uVar21 = (uint)((longlong)pFVar23 - (longlong)pFVar2 >> 3);
          goto LAB_1464c04a5;
        }
      }
      uVar21 = 0xffffffff;
LAB_1464c04a5:
      if ((((uVar22 != 0xffffffff) && (uVar21 != 0xffffffff)) && (uVar21 != uVar22)) &&
         ((bVar12 = FWeakObjectPtr::IsValid(&local_res10), bVar12 &&
          (pUVar16 = (UWorld *)FWeakObjectPtr::Get(&local_res10), pUVar16 != (UWorld *)0x0)))) {
        uVar20 = 0;
        if ((int)uVar22 < pTVar14->ArrayNum) {
          uVar20 = ~uVar22 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar17 = (UTickableConstraint *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar22 * 8
                                      ));
        pFVar18 = UTickableConstraint::GetTickFunction(pUVar17,pUVar16);
        uVar22 = 0;
        if ((int)uVar21 < pTVar14->ArrayNum) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar17 = (UTickableConstraint *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)
                                      ((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar21 * 8
                                      ));
        pFVar19 = UTickableConstraint::GetTickFunction(pUVar17,pUVar16);
        UConstraintSubsystem::SetConstraintDependencies(local_60,pFVar18,pFVar19);
        InvalidateEvaluationGraph(this);
      }
      bVar12 = FWeakObjectPtr::IsValid(&local_res10);
      if ((bVar12) &&
         (pUVar16 = (UWorld *)FWeakObjectPtr::Get(&local_res10), pUVar16 != (UWorld *)0x0)) {
        ::Singleton.World = pUVar16;
      }
    }
  }
  return;
}

// SetConstraintsDependencies @ 1464c0660

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
FConstraintsManagerController::SetConstraintsDependencies
          (FConstraintsManagerController *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FName FVar2;
  FWeakObjectPtr *pFVar3;
  FName FVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  UConstraintSubsystem *this_00;
  UWorld *pUVar8;
  TArray<TWeakObjectPtr<UTickableConstraint,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar9;
  UObject *pUVar10;
  UWorld *pUVar11;
  UTickableConstraint *pUVar12;
  FConstraintTickFunction *pFVar13;
  FConstraintTickFunction *pFVar14;
  uint uVar15;
  uint uVar16;
  FWeakObjectPtr *pFVar17;
  uint uVar18;
  FWeakObjectPtr local_res20;
  UWorld *local_48 [2];
  
  this_00 = UConstraintSubsystem::Get();
  if ((this_00 != (UConstraintSubsystem *)0x0) && (pUVar11 = this->World, pUVar11 != (UWorld *)0x0))
  {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    pUVar8 = (UWorld *)0x0;
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48[0] = pUVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_48);
    bVar7 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar7) {
      pUVar8 = (UWorld *)FWeakObjectPtr::Get(&local_res20);
    }
    pTVar9 = UConstraintSubsystem::GetConstraintsArray(this_00,pUVar8);
    FVar2 = *param_1;
    pFVar3 = (FWeakObjectPtr *)(pTVar9->AllocatorInstance).Data;
    iVar1 = pTVar9->ArrayNum;
    for (pFVar17 = pFVar3; pFVar17 != pFVar3 + iVar1; pFVar17 = pFVar17 + 1) {
      bVar7 = FWeakObjectPtr::IsValid(pFVar17);
      if ((bVar7) &&
         (pUVar10 = FWeakObjectPtr::Get(pFVar17),
         FVar4.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18,
         FVar4.Number = *(uint *)&pUVar10->field_0x1c, FVar4 == FVar2)) {
        uVar16 = (uint)((longlong)pFVar17 - (longlong)pFVar3 >> 3);
        goto LAB_1464c076c;
      }
    }
    uVar16 = 0xffffffff;
LAB_1464c076c:
    FVar2 = *param_2;
    pFVar3 = (FWeakObjectPtr *)(pTVar9->AllocatorInstance).Data;
    iVar1 = pTVar9->ArrayNum;
    for (pFVar17 = pFVar3; pFVar17 != pFVar3 + iVar1; pFVar17 = pFVar17 + 1) {
      bVar7 = FWeakObjectPtr::IsValid(pFVar17);
      if ((bVar7) &&
         (pUVar10 = FWeakObjectPtr::Get(pFVar17),
         FVar5.ComparisonIndex.Value = *(uint *)&pUVar10->field_0x18,
         FVar5.Number = *(uint *)&pUVar10->field_0x1c, FVar5 == FVar2)) {
        uVar18 = (uint)((longlong)pFVar17 - (longlong)pFVar3 >> 3);
        goto LAB_1464c07ae;
      }
    }
    uVar18 = 0xffffffff;
LAB_1464c07ae:
    if (((((-1 < (int)uVar16) && ((int)uVar16 < pTVar9->ArrayNum)) && (-1 < (int)uVar18)) &&
        (((int)uVar18 < pTVar9->ArrayNum && (uVar18 != uVar16)))) &&
       ((bVar7 = FWeakObjectPtr::IsValid(&local_res20), bVar7 &&
        (pUVar11 = (UWorld *)FWeakObjectPtr::Get(&local_res20), pUVar11 != (UWorld *)0x0)))) {
      uVar15 = 0;
      if ((int)uVar16 < pTVar9->ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar12 = (UTickableConstraint *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar16 * 8));
      pFVar13 = UTickableConstraint::GetTickFunction(pUVar12,pUVar11);
      uVar16 = 0;
      if ((int)uVar18 < pTVar9->ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pUVar12 = (UTickableConstraint *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar9->AllocatorInstance).Data + (longlong)(int)uVar18 * 8));
      pFVar14 = UTickableConstraint::GetTickFunction(pUVar12,pUVar11);
      UConstraintSubsystem::SetConstraintDependencies(this_00,pFVar13,pFVar14);
      InvalidateEvaluationGraph(this);
    }
    bVar7 = FWeakObjectPtr::IsValid(&local_res20);
    if ((bVar7) && (pUVar11 = (UWorld *)FWeakObjectPtr::Get(&local_res20), pUVar11 != (UWorld *)0x0)
       ) {
      ::Singleton.World = pUVar11;
    }
  }
  return;
}

// StaticConstraintCreated @ 1464c1b70

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
FConstraintsManagerController::StaticConstraintCreated
          (FConstraintsManagerController *this,UTickableConstraint *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar5;
  int iVar6;
  TObjectPtr<UConstraintsManager>_u_0 this_01;
  UWorld *pUVar7;
  FActorSpawnParameters *pFVar8;
  AConstraintsActor *pAVar9;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  UTickableConstraint **local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  FWeakObjectPtr local_f8;
  UTickableConstraint *local_f0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_e8;
  FSharedReferencer<1> FStack_e0;
  UWorld *local_d8;
  undefined8 local_d0;
  FSharedReferencer<1> local_c8;
  TObjectPtr<UConstraintsManager>_u_0 local_c0;
  UTickableConstraint *local_b8;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> local_b0;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pUVar7 = this->World;
  if (pUVar7 != (UWorld *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_f8.ObjectIndex = 0;
    local_f8.ObjectSerialNumber = 0;
    local_d8 = pUVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=(&local_f8,(FObjectPtr)&local_d8);
    this_01.DebugPtr = FindManager(this);
    if (this_01.DebugPtr == (UConstraintsManager *)0x0) {
      bVar5 = FWeakObjectPtr::IsValid(&local_f8);
      if (bVar5) {
        pUVar7 = (UWorld *)FWeakObjectPtr::Get(&local_f8);
      }
      else {
        pUVar7 = (UWorld *)0x0;
      }
      pFVar8 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
      pAVar9 = UWorld::SpawnActor<AConstraintsActor>(pUVar7,pFVar8);
      if (local_98._64_8_ != 0) {
        plVar11 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      this_01 = (TObjectPtr<UConstraintsManager>_u_0)
                (pAVar9->ConstraintsManager).field0_0x0.DebugPtr;
      bVar5 = FWeakObjectPtr::IsValid(&local_f8);
      if ((bVar5) && (pUVar7 = (UWorld *)FWeakObjectPtr::Get(&local_f8), pUVar7 != (UWorld *)0x0)) {
        ::Singleton.World = pUVar7;
      }
      if (this_01.DebugPtr == (UConstraintsManager *)0x0) {
        return;
      }
    }
    else {
      bVar5 = FWeakObjectPtr::IsValid(&local_f8);
      if ((bVar5) && (pUVar7 = (UWorld *)FWeakObjectPtr::Get(&local_f8), pUVar7 != (UWorld *)0x0)) {
        ::Singleton.World = pUVar7;
      }
    }
    pFVar12 = (((TArray<TObjectPtr<UTickableConstraint>,TSizedDefaultAllocator<32>_> *)
               ((longlong)this_01 + 0x38))->AllocatorInstance).Data;
    pFVar2 = pFVar12 + (longlong)((this_01.DebugPtr)->Constraints).ArrayNum * 8;
    for (; pFVar12 != pFVar2; pFVar12 = pFVar12 + 8) {
      if (*(UTickableConstraint **)pFVar12 == (UTickableConstraint *)0x0) {
        bVar5 = param_1 == (UTickableConstraint *)0x0;
      }
      else {
        bVar5 = *(UTickableConstraint **)pFVar12 == param_1;
      }
      if (bVar5) {
        return;
      }
    }
    local_f0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UTickableConstraint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar2 = ((this_01.DebugPtr)->Constraints).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_f0) &&
       (lVar13 = (longlong)((this_01.DebugPtr)->Constraints).ArrayMax,
       (FScriptContainerElement *)&local_f0 < pFVar2 + lVar13 * 8)) {
      local_110 = (longlong)((this_01.DebugPtr)->Constraints).ArrayNum;
      local_108 = 8;
      local_128 = &local_f0;
      local_120 = pFVar2;
      local_118 = lVar13;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = ((this_01.DebugPtr)->Constraints).ArrayNum;
    piVar1 = &((this_01.DebugPtr)->Constraints).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&((this_01.DebugPtr)->Constraints).AllocatorInstance,piVar1);
    }
    ((this_01.DebugPtr)->Constraints).ArrayNum = iVar6 + 1;
    *(UTickableConstraint **)
     (((this_01.DebugPtr)->Constraints).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_f0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_f0 != (UTickableConstraint *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_f0);
    }
    (**(code **)(param_1->_padding_ + 0x170))(param_1,0,this_01.DebugPtr,0x10);
    local_e8 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
    FStack_e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((this_01.DebugPtr)->OnConstraintAdded_BP != (FOnConstraintAdded)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintAdded_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintAddedInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintAdded_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintAddedInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintAdded_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintAddedInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintAdded_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintAddedInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"OnConstraintAdded_BP");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintAdded_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintAddedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar4 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<UConstraintsManager::FOnConstraintAdded_MCSignature,UConstraintsManager,UConstraintsManager::FOnConstraintAddedInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar5 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this_01.DebugPtr,false);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate
                          (&local_b0,(UObject *)this_01.DebugPtr,FVar4);
      local_c8.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
      local_e8 = pTVar10->Object;
      if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d0 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_e0,&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
    }
    this_00 = local_e8;
    if (local_e8 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
      if ((local_e8 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c0 = this_01;
      local_b8 = param_1;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                (this_00,&local_c0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_e0.ReferenceController);
  }
  return;
}

// StaticConstraintCreated @ 1464c1f60

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
FConstraintsManagerController::StaticConstraintCreated
          (FConstraintsManagerController *this,UWorld *param_1,UTickableConstraint *param_2)

{
  StaticConstraintCreated(this,param_2);
  return;
}

// UnregisterConstraint @ 1464c3b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FConstraintsManagerController::UnregisterConstraint
          (FConstraintsManagerController *this,UTickableConstraint *param_1)

{
  bool bVar1;
  bool bVar2;
  UConstraintSubsystem *this_00;
  UWorld *pUVar3;
  UWorld *pUVar4;
  FWeakObjectPtr local_res10;
  UWorld *local_res18 [2];
  
  if (((param_1 != (UTickableConstraint *)0x0) && (this->World != (UWorld *)0x0)) &&
     (this_00 = UConstraintSubsystem::Get(), this_00 != (UConstraintSubsystem *)0x0)) {
    pUVar3 = this->World;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    pUVar4 = (UWorld *)0x0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UWorld *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    pUVar3 = pUVar4;
    if (bVar1) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
    }
    bVar1 = UConstraintSubsystem::HasConstraint(this_00,pUVar3,param_1);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar1) {
        pUVar4 = (UWorld *)FWeakObjectPtr::Get(&local_res10);
      }
      UConstraintSubsystem::RemoveConstraint(this_00,pUVar4,param_1,true);
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if ((bVar2) && (pUVar3 = (UWorld *)FWeakObjectPtr::Get(&local_res10), pUVar3 != (UWorld *)0x0))
    {
      ::Singleton.World = pUVar3;
    }
    return bVar1;
  }
  return false;
}

