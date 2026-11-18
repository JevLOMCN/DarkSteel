// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a2c9910

UScriptStruct * __cdecl FCachedRigComponent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedRigComponent.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCachedRigComponent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedRigComponent,(UObject *)pUVar1,
                         L"CachedRigComponent");
  }
  return Z_Registration_Info_UScriptStruct_FCachedRigComponent.OuterSingleton;
}

// GetResolvedElementKey @ 14a314ed0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall FCachedRigComponent::GetResolvedElementKey(FCachedRigComponent *this)

{
  FRigBaseElement *pFVar1;
  
  if ((this->Component != (FRigBaseComponent *)0x0) &&
     (pFVar1 = this->Component->Element, pFVar1 != (FRigBaseElement *)0x0)) {
    return &pFVar1->Key;
  }
  return &InvalidKey;
}

// IsIdentical @ 14a3282c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FCachedRigComponent::IsIdentical
          (FCachedRigComponent *this,FRigElementKey *param_1,FName *param_2,URigHierarchy *param_3)

{
  uint uVar1;
  
  if (((*param_2 == this->Name) && (param_1->Name == (this->CachedElement).Key.Name)) &&
     (param_1->Type == (this->CachedElement).Key.Type)) {
    uVar1 = URigHierarchy::GetTopologyVersionHash(param_3);
    if (uVar1 == (this->CachedElement).ContainerVersion) {
      return true;
    }
  }
  return false;
}

// IsValid @ 14a328d80

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FCachedRigComponent::IsValid(FCachedRigComponent *this)

{
  bool bVar1;
  
  if ((this->Index != 0xffff) && ((this->CachedElement).Index != 0xffff)) {
    bVar1 = ::FName::IsWithinBounds
                      ((FNameEntryId)(this->CachedElement).Key.Name.ComparisonIndex.Value);
    if ((bVar1) &&
       (((this->CachedElement).Key.Name != (FName)0x0 && ((this->CachedElement).Key.Type != None))))
    {
      return true;
    }
  }
  return false;
}

// UpdateCache @ 14a35c4b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FCachedRigComponent::UpdateCache
          (FCachedRigComponent *this,FRigComponentKey *param_1,URigHierarchy *param_2)

{
  bool bVar1;
  
  bVar1 = UpdateCache(this,&param_1->ElementKey,&param_1->Name,param_2);
  return bVar1;
}

// UpdateCache @ 14a35c4d0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
FCachedRigComponent::UpdateCache
          (FCachedRigComponent *this,FRigElementKey *param_1,FName *param_2,URigHierarchy *param_3)

{
  ERigElementType EVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FRigBaseComponent *pFVar6;
  FRigComponentKey local_48;
  
  if (param_3 == (URigHierarchy *)0x0) {
    return false;
  }
  if (((((this->Index == 0xffff) || ((this->CachedElement).Index == 0xffff)) ||
       (bVar3 = ::FName::IsWithinBounds
                          ((FNameEntryId)(this->CachedElement).Key.Name.ComparisonIndex.Value),
       !bVar3)) ||
      ((((FVar2 = (this->CachedElement).Key.Name, FVar2 == (FName)0x0 ||
         (EVar1 = (this->CachedElement).Key.Type, EVar1 == None)) ||
        ((*param_2 != this->Name || ((param_1->Name != FVar2 || (param_1->Type != EVar1)))))) ||
       (uVar4 = URigHierarchy::GetTopologyVersionHash(param_3),
       uVar4 != (this->CachedElement).ContainerVersion)))) ||
     (pFVar6 = URigHierarchy::GetComponent(param_3,(uint)this->Index), this->Component != pFVar6)) {
    bVar3 = FCachedRigElement::UpdateCache(&this->CachedElement,param_1,param_3);
    if (bVar3) {
      local_48.ElementKey.Name.Number = (param_1->Name).Number;
      local_48.ElementKey.Type = param_1->Type;
      local_48.ElementKey._1_3_ = *(undefined3 *)&param_1->field_0x1;
      local_48.ElementKey.Name.ComparisonIndex.Value = (param_1->Name).ComparisonIndex.Value;
      local_48.Name = *param_2;
      iVar5 = URigHierarchy::GetComponentIndex(param_3,&local_48,true);
      if (iVar5 == -1) {
        this->Component = (FRigBaseComponent *)0x0;
      }
      else {
        pFVar6 = URigHierarchy::GetComponent(param_3,iVar5);
        this->Component = pFVar6;
        if (pFVar6 != (FRigBaseComponent *)0x0) {
          this->Index = (ushort)pFVar6->IndexInHierarchy;
          goto LAB_14a35c609;
        }
      }
      (this->CachedElement).Index = 0xffff;
      (this->CachedElement).ContainerVersion = -1;
      (this->CachedElement).Element = (FRigBaseElement *)0x0;
      this->Index = 0xffff;
      this->Component = (FRigBaseComponent *)0x0;
    }
  }
LAB_14a35c609:
  if ((((this->Index != 0xffff) && ((this->CachedElement).Index != 0xffff)) &&
      (bVar3 = ::FName::IsWithinBounds
                         ((FNameEntryId)(this->CachedElement).Key.Name.ComparisonIndex.Value), bVar3
      )) && (((this->CachedElement).Key.Name != (FName)0x0 &&
             ((this->CachedElement).Key.Type != None)))) {
    return true;
  }
  return false;
}

// UpdateCache @ 14a35c680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall FCachedRigComponent::UpdateCache(FCachedRigComponent *this,URigHierarchy *param_1)

{
  FRigBaseComponent *pFVar1;
  bool bVar2;
  uint uVar3;
  FRigBaseComponent *pFVar4;
  
  if ((this->Index != 0xffff) && ((this->CachedElement).Index != 0xffff)) {
    bVar2 = ::FName::IsWithinBounds
                      ((FNameEntryId)(this->CachedElement).Key.Name.ComparisonIndex.Value);
    if ((bVar2) &&
       (((this->CachedElement).Key.Name != (FName)0x0 && ((this->CachedElement).Key.Type != None))))
    {
      uVar3 = URigHierarchy::GetTopologyVersionHash(param_1);
      if (uVar3 == (this->CachedElement).ContainerVersion) {
        pFVar1 = this->Component;
        pFVar4 = URigHierarchy::GetComponent(param_1,(uint)this->Index);
        if (pFVar1 == pFVar4) {
          bVar2 = IsValid(this);
          return bVar2;
        }
      }
    }
  }
  bVar2 = UpdateCache(this,(FRigElementKey *)this,&this->Name,param_1);
  return bVar2;
}

