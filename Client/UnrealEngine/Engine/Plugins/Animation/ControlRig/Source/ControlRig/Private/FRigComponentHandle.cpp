// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// FRigComponentHandle @ 14a2d9330

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigComponentHandle * __thiscall
FRigComponentHandle::FRigComponentHandle
          (FRigComponentHandle *this,URigHierarchy *param_1,FRigComponentKey *param_2)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
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
  uVar2 = *(undefined3 *)&(param_2->ElementKey).field_0x1;
  FVar3.Value = (param_2->ElementKey).Name.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(param_2->ElementKey).Name.Number;
  (this->Key).ElementKey.Type = (param_2->ElementKey).Type;
  *(undefined3 *)&(this->Key).ElementKey.field_0x1 = uVar2;
  (this->Key).ElementKey.Name.ComparisonIndex = (FNameEntryId)FVar3.Value;
  *(undefined8 *)&(this->Key).ElementKey.Name.Number = uVar1;
  (this->Key).Name.Number = (param_2->Name).Number;
  return this;
}

// FRigComponentHandle @ 14a2d93b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigComponentHandle * __thiscall
FRigComponentHandle::FRigComponentHandle
          (FRigComponentHandle *this,URigHierarchy *param_1,FRigBaseComponent *param_2)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
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
  uVar2 = *(undefined3 *)&(param_2->Key).ElementKey.field_0x1;
  FVar3.Value = (param_2->Key).ElementKey.Name.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(param_2->Key).ElementKey.Name.Number;
  (this->Key).ElementKey.Type = (param_2->Key).ElementKey.Type;
  *(undefined3 *)&(this->Key).ElementKey.field_0x1 = uVar2;
  (this->Key).ElementKey.Name.ComparisonIndex = (FNameEntryId)FVar3.Value;
  *(undefined8 *)&(this->Key).ElementKey.Name.Number = uVar1;
  (this->Key).Name.Number = (param_2->Key).Name.Number;
  return this;
}

// Get @ 14a307580

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall FRigComponentHandle::Get(FRigComponentHandle *this)

{
  int iVar1;
  URigHierarchy *this_00;
  FRigBaseComponent *pFVar2;
  
  this_00 = (URigHierarchy *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (URigHierarchy *)0x0) {
    iVar1 = URigHierarchy::GetComponentIndex(this_00,&this->Key,true);
    if (iVar1 != -1) {
      pFVar2 = URigHierarchy::GetComponent(this_00,iVar1);
      return pFVar2;
    }
  }
  return (FRigBaseComponent *)0x0;
}

// Get @ 14a3075e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigBaseComponent * __thiscall FRigComponentHandle::Get(FRigComponentHandle *this)

{
  int iVar1;
  URigHierarchy *this_00;
  FRigBaseComponent *pFVar2;
  
  this_00 = (URigHierarchy *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  if (this_00 != (URigHierarchy *)0x0) {
    iVar1 = URigHierarchy::GetComponentIndex(this_00,&this->Key,true);
    if (iVar1 != -1) {
      pFVar2 = URigHierarchy::GetComponent(this_00,iVar1);
      return pFVar2;
    }
  }
  return (FRigBaseComponent *)0x0;
}

