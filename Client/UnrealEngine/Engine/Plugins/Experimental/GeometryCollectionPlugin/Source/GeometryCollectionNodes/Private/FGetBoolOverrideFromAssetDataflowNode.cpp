// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8ba010

UScriptStruct * __cdecl FGetBoolOverrideFromAssetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetBoolOverrideFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton;
}

// GetType @ 14e8ba200

FName __thiscall
FGetBoolOverrideFromAssetDataflowNode::GetType(FGetBoolOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetBoolOverrideFromAssetDataflowNode");
  return in_RDX;
}

// IsA @ 14e8ba230

bool __thiscall
FGetBoolOverrideFromAssetDataflowNode::IsA
          (FGetBoolOverrideFromAssetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetBoolOverrideFromAssetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8ba298;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8ba298:
    if (!bVar5) {
      bVar5 = FDataflowOverrideNode::IsA((FDataflowOverrideNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8ba2b6;
      }
    }
  }
  bVar5 = true;
LAB_14e8ba2b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ba390

FStructOnScope * __thiscall
FGetBoolOverrideFromAssetDataflowNode::NewStructOnScope(FGetBoolOverrideFromAssetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode,
                           (UObject *)pUVar2,L"GetBoolOverrideFromAssetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8ba410

void __thiscall
FGetBoolOverrideFromAssetDataflowNode::SerializeInternal
          (FGetBoolOverrideFromAssetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetBoolOverrideFromAssetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8ba48d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8ba4a0

FName __thiscall
FGetBoolOverrideFromAssetDataflowNode::GetDisplayName(FGetBoolOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetBoolOverrideFromAsset");
  return in_RDX;
}

// GetCategory @ 14e8ba4d0

FName __thiscall
FGetBoolOverrideFromAssetDataflowNode::GetCategory(FGetBoolOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Overrides");
  return in_RDX;
}

// GetTags @ 14e8ba580

FString * __thiscall
FGetBoolOverrideFromAssetDataflowNode::GetTags
          (FGetBoolOverrideFromAssetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8ba5b0

UScriptStruct * __thiscall
FGetBoolOverrideFromAssetDataflowNode::TypedScriptStruct
          (FGetBoolOverrideFromAssetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetBoolOverrideFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetBoolOverrideFromAssetDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8ba750

void __thiscall
FGetBoolOverrideFromAssetDataflowNode::Evaluate
          (FGetBoolOverrideFromAssetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  char cVar2;
  undefined1 *puVar3;
  FDataflowInput *this_00;
  FString *pFVar4;
  longlong lVar5;
  FContext *pFVar6;
  bool local_res8 [16];
  bool local_res18 [8];
  bool local_res20 [8];
  FString local_68;
  FConnectionReference local_58;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((bool *)puVar3 != &this->Bool) &&
      (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (bool *)puVar3 != &this->BoolDefault)) &&
     (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (longlong *)puVar3 != &this->_padding_)) {
    return;
  }
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = &this->_padding_;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
  pFVar4 = FDataflowInput::GetValue<FString>(this_00,param_1,(FString *)&this->_padding_);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (pFVar4->Data).ArrayNum;
  lVar5 = (longlong)local_68.Data.ArrayNum;
  _Src = (pFVar4->Data).AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
  }
  local_res8[0] = StringToBool(&local_68,false);
  local_res20[0] = local_res8[0];
  if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_res18[0] = false;
  pcVar1 = *(code **)(param_1->_padding_ + 0x18);
  ::FName::FName((FName *)&local_68,"TEngineContext");
  cVar2 = (*pcVar1)(param_1,local_68.Data.AllocatorInstance.Data);
  pFVar6 = param_1;
  if (cVar2 == '\0') {
    pFVar6 = (FContext *)0x0;
  }
  if (pFVar6 != (FContext *)0x0) {
    FDataflowOverrideNode::GetValueFromAsset
              ((FDataflowOverrideNode *)this,&local_68,param_1,(UObject *)pFVar6[1]._padding_);
    if (1 < local_68.Data.ArrayNum) {
      local_res8[0] = StringToBool(&local_68,false);
      local_res18[0] = true;
    }
    if ((FName)local_68.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  FDataflowNode::SetValue<bool_&,bool>((FDataflowNode *)this,param_1,local_res8,&this->Bool);
  FDataflowNode::SetValue<bool_const_&,bool>
            ((FDataflowNode *)this,param_1,local_res20,&this->BoolDefault);
  FDataflowNode::SetValue<bool_&,bool>
            ((FDataflowNode *)this,param_1,local_res18,(bool *)&this->_padding_);
  return;
}

// FGetBoolOverrideFromAssetDataflowNode @ 14e91f830

FGetBoolOverrideFromAssetDataflowNode * __thiscall
FGetBoolOverrideFromAssetDataflowNode::FGetBoolOverrideFromAssetDataflowNode
          (FGetBoolOverrideFromAssetDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowOverrideNode::FDataflowOverrideNode
            ((FDataflowOverrideNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FGetBoolOverrideFromAssetDataflowNode__6B_;
  local_28.Reference = &this->Bool;
  this->BoolDefault = false;
  *(bool *)local_28.Reference = false;
  local_48.Reference = (void *)0x0;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_48);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->BoolDefault;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_48);
  }
  return this;
}

// FGetBoolOverrideFromAssetDataflowNode @ 14e91f930

FGetBoolOverrideFromAssetDataflowNode * __thiscall
FGetBoolOverrideFromAssetDataflowNode::FGetBoolOverrideFromAssetDataflowNode
          (FGetBoolOverrideFromAssetDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowOverrideNode__6B_;
  ::FName::FName((FName *)&this->_padding_,"Key");
  ::FString::FString((FString *)&this->_padding_,"0");
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGetBoolOverrideFromAssetDataflowNode__6B_;
  this->Bool = false;
  this->BoolDefault = false;
  return this;
}

