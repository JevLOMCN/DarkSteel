// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// FRigElementHandle @ 14a2da200

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementHandle * __thiscall
FRigElementHandle::FRigElementHandle
          (FRigElementHandle *this,URigHierarchy *param_1,FRigElementKey *param_2)

{
  undefined3 uVar1;
  FNameEntryId FVar2;
  URigHierarchy *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Hierarchy).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  uVar1 = *(undefined3 *)&param_2->field_0x1;
  FVar2.Value = (param_2->Name).ComparisonIndex.Value;
  (this->Key).Type = param_2->Type;
  *(undefined3 *)&(this->Key).field_0x1 = uVar1;
  (this->Key).Name.ComparisonIndex = (FNameEntryId)FVar2.Value;
  (this->Key).Name.Number = (param_2->Name).Number;
  return this;
}

// FRigElementHandle @ 14a2da290

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementHandle * __thiscall
FRigElementHandle::FRigElementHandle
          (FRigElementHandle *this,URigHierarchy *param_1,FRigBaseElement *param_2)

{
  undefined3 uVar1;
  FNameEntryId FVar2;
  URigHierarchy *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->Hierarchy).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (URigHierarchy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  uVar1 = *(undefined3 *)&(param_2->Key).field_0x1;
  FVar2.Value = (param_2->Key).Name.ComparisonIndex.Value;
  (this->Key).Type = (param_2->Key).Type;
  *(undefined3 *)&(this->Key).field_0x1 = uVar1;
  (this->Key).Name.ComparisonIndex = (FNameEntryId)FVar2.Value;
  (this->Key).Name.Number = (param_2->Key).Name.Number;
  return this;
}

// Get @ 14a307c10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseElement * __thiscall FRigElementHandle::Get(FRigElementHandle *this)

{
  bool bVar1;
  int iVar2;
  URigHierarchy *this_00;
  FRigBaseElement *pFVar3;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (URigHierarchy *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    iVar2 = URigHierarchy::GetIndex(this_00,&this->Key,true);
    pFVar3 = URigHierarchy::Get(this_00,iVar2);
    return pFVar3;
  }
  return (FRigBaseElement *)0x0;
}

// Get @ 14a307c70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseElement * __thiscall FRigElementHandle::Get(FRigElementHandle *this)

{
  bool bVar1;
  int iVar2;
  URigHierarchy *this_00;
  FRigBaseElement *pFVar3;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (bVar1) {
    this_00 = (URigHierarchy *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
    iVar2 = URigHierarchy::GetIndex(this_00,&this->Key,true);
    pFVar3 = URigHierarchy::Get(this_00,iVar2);
    return pFVar3;
  }
  return (FRigBaseElement *)0x0;
}

