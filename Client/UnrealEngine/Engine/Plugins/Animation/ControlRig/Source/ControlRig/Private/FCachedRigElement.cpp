// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a2c9620

UScriptStruct * __cdecl FCachedRigElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedRigElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCachedRigElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedRigElement,(UObject *)pUVar1,
                         L"CachedRigElement");
  }
  return Z_Registration_Info_UScriptStruct_FCachedRigElement.OuterSingleton;
}

// GetResolvedKey @ 14a314f00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall FCachedRigElement::GetResolvedKey(FCachedRigElement *this)

{
  if (this->Element != (FRigBaseElement *)0x0) {
    return &this->Element->Key;
  }
  return &InvalidKey;
}

// IsIdentical @ 14a328310

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FCachedRigElement::IsIdentical
          (FCachedRigElement *this,FRigElementKey *param_1,URigHierarchy *param_2)

{
  uint uVar1;
  
  if ((param_1->Name == (this->Key).Name) && (param_1->Type == (this->Key).Type)) {
    uVar1 = URigHierarchy::GetTopologyVersionHash(param_2);
    if (uVar1 == this->ContainerVersion) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14a328dd0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FCachedRigElement::IsValid(FCachedRigElement *this)

{
  bool bVar1;
  
  if (this->Index != 0xffff) {
    bVar1 = ::FName::IsWithinBounds((FNameEntryId)(this->Key).Name.ComparisonIndex.Value);
    if (((bVar1) && ((this->Key).Name != (FName)0x0)) && ((this->Key).Type != None)) {
      return true;
    }
  }
  return false;
}

// Set @ 14a349ad0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FCachedRigElement::Set(FCachedRigElement *this,FRigBaseElement *param_1,int param_2)

{
  code *pcVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  bool bVar4;
  uint uVar5;
  
  if (param_1 == (FRigBaseElement *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InElement",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Private\\Rigs\\RigHierarchyCache.cpp"
                       ,0x5a,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Element = param_1;
  uVar2 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar3.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (this->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(this->Key).field_0x1 = uVar2;
  (this->Key).Name.ComparisonIndex = (FNameEntryId)FVar3.Value;
  (this->Key).Name.Number = (param_1->Key).Name.Number;
  this->Index = (ushort)param_1->Index;
  if (param_2 == -1) {
    if (param_1->Owner != (URigHierarchy *)0x0) {
      uVar5 = URigHierarchy::GetTopologyVersionHash(param_1->Owner);
      this->ContainerVersion = uVar5;
      return;
    }
  }
  else {
    this->ContainerVersion = param_2;
  }
  return;
}

// UpdateCache @ 14a35c720

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FCachedRigElement::UpdateCache
          (FCachedRigElement *this,FRigElementKey *param_1,URigHierarchy *param_2)

{
  undefined8 uVar1;
  ERigElementType EVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  FRigBaseElement *pFVar6;
  FName *pFVar7;
  FRigElementKey local_18;
  
  if (param_2 == (URigHierarchy *)0x0) {
    return false;
  }
  if (this->Index != 0xffff) {
    bVar4 = ::FName::IsWithinBounds((FNameEntryId)(this->Key).Name.ComparisonIndex.Value);
    if ((((bVar4) && (FVar3 = (this->Key).Name, FVar3 != (FName)0x0)) &&
        (EVar2 = (this->Key).Type, EVar2 != None)) &&
       (((param_1->Name == FVar3 && (param_1->Type == EVar2)) &&
        ((uVar5 = URigHierarchy::GetTopologyVersionHash(param_2), uVar5 == this->ContainerVersion &&
         (pFVar6 = URigHierarchy::Get(param_2,(uint)this->Index), this->Element == pFVar6))))))
    goto LAB_14a35c88f;
  }
  uVar1._0_1_ = param_1->Type;
  uVar1._1_3_ = *(undefined3 *)&param_1->field_0x1;
  uVar1._4_4_ = (param_1->Name).ComparisonIndex;
  local_18.Name.Number = (param_1->Name).Number;
  local_18._0_4_ = SUB84(uVar1,0);
  local_18.Name.ComparisonIndex.Value = uVar1._4_4_;
  if ((((int)(uint)this->Index < (param_2->Elements).ArrayNum) &&
      (pFVar6 = URigHierarchy::Get(param_2,(uint)this->Index), pFVar6 != (FRigBaseElement *)0x0)) &&
     ((FVar3.Number = local_18.Name.Number,
      FVar3.ComparisonIndex.Value = local_18.Name.ComparisonIndex.Value, (pFVar6->Key).Name == FVar3
      && ((pFVar6->Key).Type == local_18.Type)))) {
    (this->Key).Type = local_18.Type;
    *(int3 *)&(this->Key).field_0x1 = local_18._1_3_;
    (this->Key).Name.ComparisonIndex = (FNameEntryId)local_18.Name.ComparisonIndex.Value;
    (this->Key).Name.Number = local_18.Name.Number;
    this->Element = pFVar6;
    uVar5 = URigHierarchy::GetTopologyVersionHash(param_2);
    this->ContainerVersion = uVar5;
    bVar4 = IsValid(this);
    return bVar4;
  }
  uVar5 = URigHierarchy::GetIndex(param_2,&local_18,true);
  (this->Key).Type = local_18.Type;
  *(int3 *)&(this->Key).field_0x1 = local_18._1_3_;
  (this->Key).Name.ComparisonIndex = (FNameEntryId)local_18.Name.ComparisonIndex.Value;
  if (uVar5 == 0xffffffff) {
    (this->Key).Name.Number = local_18.Name.Number;
    pFVar6 = (FRigBaseElement *)0x0;
    this->Index = 0xffff;
    this->ContainerVersion = -1;
  }
  else {
    (this->Key).Name.Number = local_18.Name.Number;
    this->Index = (ushort)uVar5;
    pFVar6 = URigHierarchy::Get(param_2,uVar5 & 0xffff);
  }
  this->Element = pFVar6;
  uVar5 = URigHierarchy::GetTopologyVersionHash(param_2);
  this->ContainerVersion = uVar5;
LAB_14a35c88f:
  pFVar7 = &(this->Key).Name;
  if ((((this->Index == 0xffff) ||
       (bVar4 = ::FName::IsWithinBounds((FNameEntryId)(pFVar7->ComparisonIndex).Value), !bVar4)) ||
      (*pFVar7 == (FName)0x0)) || ((this->Key).Type == None)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

// UpdateCache @ 14a35c8e0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FCachedRigElement::UpdateCache(FCachedRigElement *this,URigHierarchy *param_1)

{
  FRigBaseElement *pFVar1;
  bool bVar2;
  uint uVar3;
  FRigBaseElement *pFVar4;
  
  if (param_1 == (URigHierarchy *)0x0) {
    return false;
  }
  if (this->Index != 0xffff) {
    bVar2 = ::FName::IsWithinBounds((FNameEntryId)(this->Key).Name.ComparisonIndex.Value);
    if (((bVar2) && ((this->Key).Name != (FName)0x0)) && ((this->Key).Type != None)) {
      uVar3 = URigHierarchy::GetTopologyVersionHash(param_1);
      if (uVar3 == this->ContainerVersion) {
        pFVar1 = this->Element;
        pFVar4 = URigHierarchy::Get(param_1,(uint)this->Index);
        if (pFVar1 == pFVar4) {
          bVar2 = IsValid(this);
          return bVar2;
        }
      }
    }
  }
  bVar2 = UpdateCache(this,&this->Key,param_1);
  return bVar2;
}

// FCachedRigElement @ 14a50a620

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FCachedRigElement * __thiscall
FCachedRigElement::FCachedRigElement
          (FCachedRigElement *this,FRigElementKey *param_1,URigHierarchy *param_2,bool param_3)

{
  undefined3 uVar1;
  FNameEntryId FVar2;
  
  (this->Key).Type = None;
  (this->Key).Name.ComparisonIndex = 0;
  (this->Key).Name.Number = 0;
  this->Element = (FRigBaseElement *)0x0;
  this->Index = 0xffff;
  this->ContainerVersion = -1;
  UpdateCache(this,param_1,param_2);
  if (param_3) {
    uVar1 = *(undefined3 *)&param_1->field_0x1;
    FVar2.Value = (param_1->Name).ComparisonIndex.Value;
    (this->Key).Type = param_1->Type;
    *(undefined3 *)&(this->Key).field_0x1 = uVar1;
    (this->Key).Name.ComparisonIndex = (FNameEntryId)FVar2.Value;
    (this->Key).Name.Number = (param_1->Name).Number;
  }
  return this;
}

