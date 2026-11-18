// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 2

// FConstraintDependencyScope @ 14649df40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FConstraintDependencyScope * __thiscall
FConstraintDependencyScope::FConstraintDependencyScope
          (FConstraintDependencyScope *this,UTickableTransformConstraint *param_1,UWorld *param_2)

{
  bool bVar1;
  UWorld *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UTickableTransformConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->WeakConstraint).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (UWorld *)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UTickableTransformConstraint *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->WeakWorld).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&(this->WeakWorld).WeakPtr,(FObjectPtr)&local_res8);
  if (param_1 == (UTickableTransformConstraint *)0x0) {
    this->bPreviousValidity = false;
  }
  else {
    bVar1 = (bool)(**(code **)(param_1->_padding_ + 0x2c0))(param_1,1);
    this->bPreviousValidity = bVar1;
  }
  return this;
}

// ~FConstraintDependencyScope @ 14649f850

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
FConstraintDependencyScope::~FConstraintDependencyScope(FConstraintDependencyScope *this)

{
  bool bVar1;
  char cVar2;
  UTickableTransformConstraint *pUVar3;
  UObject *pUVar4;
  UWorld *pUVar5;
  
  if ((((this->bPreviousValidity == false) &&
       (bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this), bVar1)) &&
      (pUVar3 = (UTickableTransformConstraint *)FWeakObjectPtr::Get((FWeakObjectPtr *)this),
      pUVar3 != (UTickableTransformConstraint *)0x0)) &&
     (cVar2 = (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,1), cVar2 != '\0')) {
    pUVar4 = DependencyLocals::GetHandleTarget(&pUVar3->ChildTRSHandle);
    bVar1 = FWeakObjectPtr::IsValid(&(this->WeakWorld).WeakPtr);
    if (bVar1) {
      pUVar5 = (UWorld *)FWeakObjectPtr::Get(&(this->WeakWorld).WeakPtr);
    }
    else {
      if (pUVar4 == (UObject *)0x0) {
        return;
      }
      pUVar5 = (UWorld *)(**(code **)(*(longlong *)pUVar4 + 0x180))(pUVar4);
    }
    if ((pUVar5 != (UWorld *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
      FDependencyBuilder::BuildDependencies(pUVar5,pUVar3);
    }
  }
  return;
}

