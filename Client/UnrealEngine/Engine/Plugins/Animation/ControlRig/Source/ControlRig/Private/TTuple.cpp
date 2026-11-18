// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// TTuple<FRigHierarchyKey,FRigHierarchyKey><FRigComponentKey_const_&,FRigComponentKey_const_&> @ 14a2cb100

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigHierarchyKey,FRigHierarchyKey> * __thiscall
TTuple<FRigHierarchyKey,FRigHierarchyKey>::
TTuple<FRigHierarchyKey,FRigHierarchyKey><FRigComponentKey_const_&,FRigComponentKey_const_&>
          (TTuple<FRigHierarchyKey,FRigHierarchyKey> *this,FRigComponentKey *param_1,
          FRigComponentKey *param_2)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  bool bVar4;
  
  this->field_0xc = 0;
  this->field_0x24 = 0;
  bVar4 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if ((bVar4) && (param_1->Name != (FName)0x0)) {
    bVar4 = ::FName::IsWithinBounds((FNameEntryId)(param_1->ElementKey).Name.ComparisonIndex.Value);
    if ((bVar4) &&
       ((((param_1->ElementKey).Name != (FName)0x0 && ((param_1->ElementKey).Type != None)) &&
        (param_1 != (FRigComponentKey *)&this->field_0x10)))) {
      uVar2 = *(undefined3 *)&(param_1->ElementKey).field_0x1;
      FVar3.Value = (param_1->ElementKey).Name.ComparisonIndex.Value;
      uVar1 = *(undefined8 *)&(param_1->ElementKey).Name.Number;
      this->field_0x10 = (param_1->ElementKey).Type;
      *(undefined3 *)&this->field_0x11 = uVar2;
      *(uint *)&this->field_0x14 = FVar3.Value;
      *(undefined8 *)&this->field_0x18 = uVar1;
      *(uint *)&this->field_0x20 = (param_1->Name).Number;
      this->field_0x24 = 1;
    }
  }
  this->field_0x34 = 0;
  this->field_0x4c = 0;
  bVar4 = ::FName::IsWithinBounds((FNameEntryId)(param_2->Name).ComparisonIndex.Value);
  if ((bVar4) && (param_2->Name != (FName)0x0)) {
    bVar4 = ::FName::IsWithinBounds((FNameEntryId)(param_2->ElementKey).Name.ComparisonIndex.Value);
    if (((bVar4) &&
        (((param_2->ElementKey).Name != (FName)0x0 && ((param_2->ElementKey).Type != None)))) &&
       (param_2 != (FRigComponentKey *)&this->field_0x38)) {
      uVar2 = *(undefined3 *)&(param_2->ElementKey).field_0x1;
      FVar3.Value = (param_2->ElementKey).Name.ComparisonIndex.Value;
      uVar1 = *(undefined8 *)&(param_2->ElementKey).Name.Number;
      this->field_0x38 = (param_2->ElementKey).Type;
      *(undefined3 *)&this->field_0x39 = uVar2;
      *(uint *)&this->field_0x3c = FVar3.Value;
      *(undefined8 *)&this->field_0x40 = uVar1;
      *(uint *)&this->field_0x48 = (param_2->Name).Number;
      this->field_0x4c = 1;
    }
  }
  return this;
}

// TTuple<FRigHierarchyKey,FRigHierarchyKey><FRigHierarchyKey,FRigHierarchyKey> @ 14a2cb1d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigHierarchyKey,FRigHierarchyKey> * __thiscall
TTuple<FRigHierarchyKey,FRigHierarchyKey>::
TTuple<FRigHierarchyKey,FRigHierarchyKey><FRigHierarchyKey,FRigHierarchyKey>
          (TTuple<FRigHierarchyKey,FRigHierarchyKey> *this,FRigHierarchyKey *param_1,
          FRigHierarchyKey *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  
  this->field_0xc = 0;
  bVar1 = (param_1->Element).bIsSet;
  this->field_0xc = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined3 *)&(param_1->Element).TypedValue.field_0x1;
    FVar4.Value = (param_1->Element).TypedValue.Name.ComparisonIndex.Value;
    this->field_0x0 = (param_1->Element).TypedValue.Type;
    *(undefined3 *)&this->field_0x1 = uVar3;
    *(uint *)&this->field_0x4 = FVar4.Value;
    *(uint *)&this->field_0x8 = (param_1->Element).TypedValue.Name.Number;
  }
  this->field_0x24 = 0;
  bVar1 = (param_1->Component).bIsSet;
  this->field_0x24 = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined3 *)&(param_1->Component).TypedValue.ElementKey.field_0x1;
    FVar4.Value = (param_1->Component).TypedValue.ElementKey.Name.ComparisonIndex.Value;
    uVar2 = *(undefined8 *)&(param_1->Component).TypedValue.ElementKey.Name.Number;
    this->field_0x10 = (param_1->Component).TypedValue.ElementKey.Type;
    *(undefined3 *)&this->field_0x11 = uVar3;
    *(uint *)&this->field_0x14 = FVar4.Value;
    *(undefined8 *)&this->field_0x18 = uVar2;
    *(uint *)&this->field_0x20 = (param_1->Component).TypedValue.Name.Number;
  }
  this->field_0x34 = 0;
  bVar1 = (param_2->Element).bIsSet;
  this->field_0x34 = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined3 *)&(param_2->Element).TypedValue.field_0x1;
    FVar4.Value = (param_2->Element).TypedValue.Name.ComparisonIndex.Value;
    this->field_0x28 = (param_2->Element).TypedValue.Type;
    *(undefined3 *)&this->field_0x29 = uVar3;
    *(uint *)&this->field_0x2c = FVar4.Value;
    *(uint *)&this->field_0x30 = (param_2->Element).TypedValue.Name.Number;
  }
  this->field_0x4c = 0;
  bVar1 = (param_2->Component).bIsSet;
  this->field_0x4c = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined3 *)&(param_2->Component).TypedValue.ElementKey.field_0x1;
    FVar4.Value = (param_2->Component).TypedValue.ElementKey.Name.ComparisonIndex.Value;
    uVar2 = *(undefined8 *)&(param_2->Component).TypedValue.ElementKey.Name.Number;
    this->field_0x38 = (param_2->Component).TypedValue.ElementKey.Type;
    *(undefined3 *)&this->field_0x39 = uVar3;
    *(uint *)&this->field_0x3c = FVar4.Value;
    *(undefined8 *)&this->field_0x40 = uVar2;
    *(uint *)&this->field_0x48 = (param_2->Component).TypedValue.Name.Number;
  }
  return this;
}

