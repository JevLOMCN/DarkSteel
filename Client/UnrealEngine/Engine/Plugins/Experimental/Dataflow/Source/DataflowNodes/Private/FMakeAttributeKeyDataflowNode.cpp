// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 12

// StaticStruct @ 14dab9100

UScriptStruct * __cdecl FMakeAttributeKeyDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode,(UObject *)pUVar1,
                         L"MakeAttributeKeyDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton;
}

// GetType @ 14dab9140

FName __thiscall FMakeAttributeKeyDataflowNode::GetType(FMakeAttributeKeyDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeAttributeKeyDataflowNode");
  return in_RDX;
}

// IsA @ 14dab9170

bool __thiscall
FMakeAttributeKeyDataflowNode::IsA(FMakeAttributeKeyDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FMakeAttributeKeyDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dab91d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dab91d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dab91f6;
      }
    }
  }
  bVar5 = true;
LAB_14dab91f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dab9230

FStructOnScope * __thiscall
FMakeAttributeKeyDataflowNode::NewStructOnScope(FMakeAttributeKeyDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode,(UObject *)pUVar2
                           ,L"MakeAttributeKeyDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dab92b0

void __thiscall
FMakeAttributeKeyDataflowNode::SerializeInternal
          (FMakeAttributeKeyDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode,(UObject *)pUVar1,
                         L"MakeAttributeKeyDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dab932d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dab9340

FName __thiscall FMakeAttributeKeyDataflowNode::GetDisplayName(FMakeAttributeKeyDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeAttributeKey");
  return in_RDX;
}

// GetCategory @ 14dab9370

FName __thiscall FMakeAttributeKeyDataflowNode::GetCategory(FMakeAttributeKeyDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14dab9400

FString * __thiscall
FMakeAttributeKeyDataflowNode::GetTags
          (FMakeAttributeKeyDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dab9430

UScriptStruct * __thiscall
FMakeAttributeKeyDataflowNode::TypedScriptStruct(FMakeAttributeKeyDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeAttributeKeyDataflowNode,(UObject *)pUVar1,
                         L"MakeAttributeKeyDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeAttributeKeyDataflowNode.OuterSingleton;
}

// Evaluate @ 14dab9470

void __thiscall
FMakeAttributeKeyDataflowNode::Evaluate
          (FMakeAttributeKeyDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FDataflowInput *pFVar4;
  FString *pFVar5;
  longlong lVar6;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FConnectionReference local_58;
  FCollectionAttributeKey local_40;
  
  local_58.Index = -1;
  local_58.Reference = &this->AttributeIn;
  local_58.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
  pFVar5 = FDataflowInput::GetValue<FString>(pFVar4,param_1,local_58.Reference);
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = (pFVar5->Data).ArrayNum;
  lVar6 = (longlong)local_70;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,pFVar1,lVar6 * 2);
  }
  local_58.Reference = &this->GroupIn;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
  pFVar5 = FDataflowInput::GetValue<FString>(pFVar4,param_1,local_58.Reference);
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = (pFVar5->Data).ArrayNum;
  lVar6 = (longlong)local_80;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,&local_88,local_80,&local_7c);
    memcpy(local_88.Data,pFVar1,lVar6 * 2);
  }
  FVar2.Data = local_78.Data;
  lVar6 = (longlong)local_70;
  local_58.Reference = (void *)0x0;
  local_58.Index = local_70;
  if (local_70 == 0) {
    local_58._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_70,0,(ForAnyElementType *)&local_58,local_70,(int *)&local_58.field_0xc);
    memcpy(local_58.Reference,FVar2.Data,lVar6 * 2);
  }
  iVar3 = local_80;
  FVar2.Data = local_88.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = local_80;
  if (local_80 == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,(ForAnyElementType *)&local_68,local_80,&local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,FVar2.Data,(longlong)iVar3 * 2);
  }
  ::FString::FString(&local_40.Attribute,&local_68);
  ::FString::FString(&local_40.Group,(FString *)&local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Reference != (void *)0x0) {
    FMemory::Free(local_58.Reference);
  }
  FDataflowNode::SetValue<FCollectionAttributeKey,FCollectionAttributeKey>
            ((FDataflowNode *)this,param_1,&local_40,&this->AttributeKeyOut);
  if (local_40.Group.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Group.Data.AllocatorInstance.Data);
  }
  if (local_40.Attribute.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Attribute.Data.AllocatorInstance.Data);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// FMakeAttributeKeyDataflowNode @ 14dacdaa0

FMakeAttributeKeyDataflowNode * __thiscall
FMakeAttributeKeyDataflowNode::FMakeAttributeKeyDataflowNode
          (FMakeAttributeKeyDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&___7FMakeAttributeKeyDataflowNode__6B_;
  ::FString::FString(&this->GroupIn,"");
  ::FString::FString(&this->AttributeIn,"");
  ::FString::FString(&(this->AttributeKeyOut).Attribute,"");
  ::FString::FString(&(this->AttributeKeyOut).Group,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = &this->GroupIn;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->AttributeIn;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->AttributeKeyOut;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  return this;
}

// FMakeAttributeKeyDataflowNode @ 14dacdbe0

FMakeAttributeKeyDataflowNode * __thiscall
FMakeAttributeKeyDataflowNode::FMakeAttributeKeyDataflowNode(FMakeAttributeKeyDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FMakeAttributeKeyDataflowNode__6B_;
  ::FString::FString(&this->GroupIn,"");
  ::FString::FString(&this->AttributeIn,"");
  ::FString::FString(&(this->AttributeKeyOut).Attribute,"");
  ::FString::FString(&(this->AttributeKeyOut).Group,"");
  return this;
}

