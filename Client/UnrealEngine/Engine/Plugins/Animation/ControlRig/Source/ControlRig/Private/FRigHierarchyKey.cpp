// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// GetComponent @ 14a25fc70

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigComponentKey * __thiscall FRigHierarchyKey::GetComponent(FRigHierarchyKey *this)

{
  if ((this->Component).bIsSet != false) {
    return &(this->Component).TypedValue;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
      ::__l2::InvalidComponent.ElementKey.Type = None;
      `public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
      ::__l2::InvalidComponent.ElementKey.Name.ComparisonIndex.Value = 0;
      `public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
      ::__l2::InvalidComponent.ElementKey.Name.Number = 0;
      `public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
      ::__l2::InvalidComponent.Name.ComparisonIndex.Value = 0;
      `public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
      ::__l2::InvalidComponent.Name.Number = 0;
      _Init_thread_footer(&`public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_struct_FRigComponentKey_const&___ptr64___cdecl_FRigHierarchyKey::GetComponent(void)const___ptr64'
          ::__l2::InvalidComponent;
}

// GetElement @ 14a262ee0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementKey * __thiscall FRigHierarchyKey::GetElement(FRigHierarchyKey *this)

{
  if ((this->Element).bIsSet != false) {
    return (FRigElementKey *)this;
  }
  if ((this->Component).bIsSet != false) {
    return (FRigElementKey *)&this->Component;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
      ::__l2::InvalidKey.Type = None;
      `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
      ::__l2::InvalidKey.Name.ComparisonIndex.Value = 0;
      `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
      ::__l2::InvalidKey.Name.Number = 0;
      _Init_thread_footer(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
          ::__l2::InvalidKey;
}

// StaticStruct @ 14a2bb290

UScriptStruct * __cdecl FRigHierarchyKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigHierarchyKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigHierarchyKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchyKey,(UObject *)pUVar1,
                         L"RigHierarchyKey");
  }
  return Z_Registration_Info_UScriptStruct_FRigHierarchyKey.OuterSingleton;
}

// FRigHierarchyKey @ 14a2dc670

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyKey * __thiscall
FRigHierarchyKey::FRigHierarchyKey(FRigHierarchyKey *this,FRigHierarchyKey *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  
  (this->Element).bIsSet = false;
  bVar1 = (param_1->Element).bIsSet;
  (this->Element).bIsSet = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined3 *)&(param_1->Element).TypedValue.field_0x1;
    FVar4.Value = (param_1->Element).TypedValue.Name.ComparisonIndex.Value;
    (this->Element).TypedValue.Type = (param_1->Element).TypedValue.Type;
    *(undefined3 *)&(this->Element).TypedValue.field_0x1 = uVar3;
    (this->Element).TypedValue.Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
    (this->Element).TypedValue.Name.Number = (param_1->Element).TypedValue.Name.Number;
  }
  (this->Component).bIsSet = false;
  bVar1 = (param_1->Component).bIsSet;
  (this->Component).bIsSet = bVar1;
  if (bVar1 != false) {
    uVar3 = *(undefined3 *)&(param_1->Component).TypedValue.ElementKey.field_0x1;
    FVar4.Value = (param_1->Component).TypedValue.ElementKey.Name.ComparisonIndex.Value;
    uVar2 = *(undefined8 *)&(param_1->Component).TypedValue.ElementKey.Name.Number;
    (this->Component).TypedValue.ElementKey.Type = (param_1->Component).TypedValue.ElementKey.Type;
    *(undefined3 *)&(this->Component).TypedValue.ElementKey.field_0x1 = uVar3;
    (this->Component).TypedValue.ElementKey.Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
    *(undefined8 *)&(this->Component).TypedValue.ElementKey.Name.Number = uVar2;
    (this->Component).TypedValue.Name.Number = (param_1->Component).TypedValue.Name.Number;
  }
  return this;
}

// FRigHierarchyKey @ 14a2dc6c0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyKey * __thiscall
FRigHierarchyKey::FRigHierarchyKey(FRigHierarchyKey *this,FRigComponentKey *param_1,bool param_2)

{
  TOptional<FRigComponentKey> *pTVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  bool bVar5;
  
  (this->Element).bIsSet = false;
  (this->Component).bIsSet = false;
  bVar5 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (((((!bVar5) || (param_1->Name == (FName)0x0)) ||
       (bVar5 = ::FName::IsWithinBounds
                          ((FNameEntryId)(param_1->ElementKey).Name.ComparisonIndex.Value), !bVar5))
      || (((param_1->ElementKey).Name == (FName)0x0 || ((param_1->ElementKey).Type == None)))) &&
     (!param_2)) {
    return this;
  }
  pTVar1 = &this->Component;
  if ((TOptional<FRigComponentKey> *)param_1 != pTVar1) {
    uVar3 = *(undefined3 *)&(param_1->ElementKey).field_0x1;
    FVar4.Value = (param_1->ElementKey).Name.ComparisonIndex.Value;
    uVar2 = *(undefined8 *)&(param_1->ElementKey).Name.Number;
    (pTVar1->TypedValue).ElementKey.Type = (param_1->ElementKey).Type;
    *(undefined3 *)&(pTVar1->TypedValue).ElementKey.field_0x1 = uVar3;
    (pTVar1->TypedValue).ElementKey.Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
    *(undefined8 *)&(this->Component).TypedValue.ElementKey.Name.Number = uVar2;
    (this->Component).TypedValue.Name.Number = (param_1->Name).Number;
    (this->Component).bIsSet = true;
  }
  return this;
}

// FRigHierarchyKey @ 14a2dc750

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigHierarchyKey * __thiscall
FRigHierarchyKey::FRigHierarchyKey(FRigHierarchyKey *this,FRigElementKey *param_1,bool param_2)

{
  undefined3 uVar1;
  FNameEntryId FVar2;
  bool bVar3;
  
  (this->Element).bIsSet = false;
  (this->Component).bIsSet = false;
  bVar3 = ::FName::IsWithinBounds((FNameEntryId)(param_1->Name).ComparisonIndex.Value);
  if (((((bVar3) && (param_1->Name != (FName)0x0)) && (param_1->Type != None)) || (param_2)) &&
     ((FRigHierarchyKey *)param_1 != this)) {
    uVar1 = *(undefined3 *)&param_1->field_0x1;
    FVar2.Value = (param_1->Name).ComparisonIndex.Value;
    (this->Element).TypedValue.Type = param_1->Type;
    *(undefined3 *)&(this->Element).TypedValue.field_0x1 = uVar1;
    (this->Element).TypedValue.Name.ComparisonIndex = (FNameEntryId)FVar2.Value;
    (this->Element).TypedValue.Name.Number = (param_1->Name).Number;
    (this->Element).bIsSet = true;
  }
  return this;
}

// GetFName @ 14a30edb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName * __thiscall FRigHierarchyKey::GetFName(FRigHierarchyKey *this)

{
  FName *pFVar1;
  
  if ((this->Element).bIsSet != false) {
    return &(this->Element).TypedValue.Name;
  }
  pFVar1 = &(this->Component).TypedValue.Name;
  if ((this->Component).bIsSet == false) {
    pFVar1 = &InvalidName;
  }
  return pFVar1;
}

// Serialize @ 14a3494b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigHierarchyKey::Serialize(FRigHierarchyKey *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  FRigElementKey *pFVar4;
  FRigComponentKey *pFVar5;
  TOptional<FRigComponentKey> *pTVar6;
  uint local_res10 [2];
  FRigHierarchyKey local_58;
  FRigElementKey local_30;
  undefined4 uStack_24;
  uint uStack_20;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) {
      return;
    }
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(this->Element).bIsSet);
    ::operator<<(param_1,(bool *)local_res10);
    if (local_res10[0]._0_1_ != false) {
      pFVar4 = (FRigElementKey *)this;
      if ((this->Element).bIsSet == false) {
        if ((this->Component).bIsSet == false) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
            ::__l2::InvalidKey.Type = None;
            `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
            ::__l2::InvalidKey.Name.ComparisonIndex.Value = 0;
            `public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
            ::__l2::InvalidKey.Name.Number = 0;
            _Init_thread_footer(&`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          pFVar4 = &`public:_struct_FRigElementKey_const&___ptr64___cdecl_FRigHierarchyKey::GetElement(void)const___ptr64'
                    ::__l2::InvalidKey;
        }
        else {
          pFVar4 = (FRigElementKey *)&this->Component;
        }
      }
      local_58.Component.TypedValue.ElementKey.Type =
           (((FRigHierarchyKey *)pFVar4)->Element).TypedValue.Type;
      local_58.Component.TypedValue.ElementKey._1_3_ =
           *(undefined3 *)&(((FRigHierarchyKey *)pFVar4)->Element).TypedValue.field_0x1;
      local_58.Component.TypedValue.ElementKey.Name.ComparisonIndex.Value =
           (((FRigHierarchyKey *)pFVar4)->Element).TypedValue.Name.ComparisonIndex.Value;
      local_58.Component.TypedValue.ElementKey.Name.Number =
           (((FRigHierarchyKey *)pFVar4)->Element).TypedValue.Name.Number;
      ::operator<<(param_1,(FRigElementKey *)&local_58.Component);
    }
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(this->Component).bIsSet);
    ::operator<<(param_1,(bool *)local_res10);
    if (local_res10[0]._0_1_ == false) {
      return;
    }
    pFVar5 = GetComponent(this);
    local_58.Component.TypedValue.ElementKey.Type = (pFVar5->ElementKey).Type;
    local_58.Component.TypedValue.ElementKey._1_3_ = *(undefined3 *)&(pFVar5->ElementKey).field_0x1;
    local_58.Component.TypedValue.ElementKey.Name.ComparisonIndex.Value =
         (pFVar5->ElementKey).Name.ComparisonIndex.Value;
    local_58.Component.TypedValue.ElementKey.Name.Number = (pFVar5->ElementKey).Name.Number;
    local_58.Component.TypedValue.Name.ComparisonIndex.Value = (pFVar5->Name).ComparisonIndex.Value;
    local_58.Component.TypedValue.Name.Number = (pFVar5->Name).Number;
    if ((((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) &&
       ((param_1->field_0x28 & 1) == 0)) {
      return;
    }
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_58.Component.TypedValue.Name);
    ::operator<<(param_1,(FRigElementKey *)&local_58.Component);
    return;
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res10[0];
    if ((param_1->field_0x28 & 1) != 0) goto LAB_14a34951f;
LAB_14a349558:
    if ((this->Element).bIsSet != false) {
      (this->Element).bIsSet = false;
    }
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
LAB_14a34951f:
    if (uVar2 == 0) goto LAB_14a349558;
    local_58.Element.TypedValue._0_4_ = local_58.Element.TypedValue._0_4_ & 0xffffff00;
    local_58.Element.TypedValue.Name.ComparisonIndex.Value = 0;
    local_58.Element.TypedValue.Name.Number = 0;
    ::operator<<(param_1,(FRigElementKey *)&local_58);
    if (&local_58 != this) {
      (this->Element).TypedValue.Type = local_58.Element.TypedValue.Type;
      *(int3 *)&(this->Element).TypedValue.field_0x1 = local_58.Element.TypedValue._1_3_;
      (this->Element).TypedValue.Name.ComparisonIndex =
           (FNameEntryId)local_58.Element.TypedValue.Name.ComparisonIndex.Value;
      (this->Element).TypedValue.Name.Number = local_58.Element.TypedValue.Name.Number;
      (this->Element).bIsSet = true;
    }
  }
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    local_res10[0] = 0;
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    if (1 < local_res10[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar2 = local_res10[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_14a349621;
  }
  else {
    uVar2 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar2 != 0) {
    local_30._0_4_ = local_30._0_4_ & 0xffffff00;
    local_30.Name.ComparisonIndex.Value = 0;
    local_30.Name.Number = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    if ((((param_1->field_0x28 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) ||
       ((param_1->field_0x28 & 1) != 0)) {
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&uStack_24);
      ::operator<<(param_1,&local_30);
    }
    pTVar6 = &this->Component;
    if ((TOptional<FRigComponentKey> *)&local_30 == pTVar6) {
      return;
    }
    (pTVar6->TypedValue).ElementKey.Type = local_30.Type;
    *(int3 *)&(pTVar6->TypedValue).ElementKey.field_0x1 = local_30._1_3_;
    (pTVar6->TypedValue).ElementKey.Name.ComparisonIndex =
         (FNameEntryId)local_30.Name.ComparisonIndex.Value;
    *(ulonglong *)&(this->Component).TypedValue.ElementKey.Name.Number =
         CONCAT44(uStack_24,local_30.Name.Number);
    (this->Component).TypedValue.Name.Number = uStack_20;
    (this->Component).bIsSet = true;
    return;
  }
LAB_14a349621:
  if ((this->Component).bIsSet == false) {
    return;
  }
  (this->Component).bIsSet = false;
  return;
}

