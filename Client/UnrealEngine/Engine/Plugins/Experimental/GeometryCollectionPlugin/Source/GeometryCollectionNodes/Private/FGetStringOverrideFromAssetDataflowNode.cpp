// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8bc5c0

UScriptStruct * __cdecl FGetStringOverrideFromAssetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetStringOverrideFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton;
}

// GetType @ 14e8bc600

FName __thiscall
FGetStringOverrideFromAssetDataflowNode::GetType(FGetStringOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetStringOverrideFromAssetDataflowNode");
  return in_RDX;
}

// IsA @ 14e8bc690

bool __thiscall
FGetStringOverrideFromAssetDataflowNode::IsA
          (FGetStringOverrideFromAssetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetStringOverrideFromAssetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8bc6f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8bc6f8:
    if (!bVar5) {
      bVar5 = FDataflowOverrideNode::IsA((FDataflowOverrideNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8bc716;
      }
    }
  }
  bVar5 = true;
LAB_14e8bc716:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8bc750

FStructOnScope * __thiscall
FGetStringOverrideFromAssetDataflowNode::NewStructOnScope
          (FGetStringOverrideFromAssetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode,
                           (UObject *)pUVar2,L"GetStringOverrideFromAssetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8bc810

void __thiscall
FGetStringOverrideFromAssetDataflowNode::SerializeInternal
          (FGetStringOverrideFromAssetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetStringOverrideFromAssetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8bc88d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8bc8a0

FName __thiscall
FGetStringOverrideFromAssetDataflowNode::GetDisplayName
          (FGetStringOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetStringOverrideFromAsset");
  return in_RDX;
}

// GetCategory @ 14e8bc8d0

FName __thiscall
FGetStringOverrideFromAssetDataflowNode::GetCategory(FGetStringOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Overrides");
  return in_RDX;
}

// GetTags @ 14e8bc930

FString * __thiscall
FGetStringOverrideFromAssetDataflowNode::GetTags
          (FGetStringOverrideFromAssetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8bc9b0

UScriptStruct * __thiscall
FGetStringOverrideFromAssetDataflowNode::TypedScriptStruct
          (FGetStringOverrideFromAssetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetStringOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetStringOverrideFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetStringOverrideFromAssetDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8bcc60

void __thiscall
FGetStringOverrideFromAssetDataflowNode::Evaluate
          (FGetStringOverrideFromAssetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  ForAnyElementType _Src_00;
  int iVar2;
  void *_Src_01;
  char cVar3;
  undefined1 *puVar4;
  FDataflowInput *this_00;
  FString *pFVar5;
  longlong lVar6;
  FContext *pFVar7;
  bool local_res8 [8];
  FName local_res18 [2];
  FString local_78;
  FString local_68;
  FConnectionReference local_58;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((FString *)puVar4 != &this->String) &&
      (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (FString *)puVar4 != &this->StringDefault)) &&
     (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (longlong *)puVar4 != &this->_padding_)) {
    return;
  }
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = &this->_padding_;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
  pFVar5 = FDataflowInput::GetValue<FString>(this_00,param_1,(FString *)&this->_padding_);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  lVar6 = (longlong)local_68.Data.ArrayNum;
  _Src = (pFVar5->Data).AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar6 * 2);
  }
  iVar2 = local_68.Data.ArrayNum;
  _Src_00.Data = local_68.Data.AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = local_68.Data.ArrayNum;
  if (local_68.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_68.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,_Src_00.Data,(longlong)iVar2 * 2);
  }
  local_res8[0] = false;
  pcVar1 = *(code **)(param_1->_padding_ + 0x18);
  ::FName::FName(local_res18,"TEngineContext");
  cVar3 = (*pcVar1)(param_1,local_res18[0]);
  pFVar7 = param_1;
  if (cVar3 == '\0') {
    pFVar7 = (FContext *)0x0;
  }
  if (pFVar7 != (FContext *)0x0) {
    FDataflowOverrideNode::GetValueFromAsset
              ((FDataflowOverrideNode *)this,(FString *)&local_58,param_1,
               (UObject *)pFVar7[1]._padding_);
    iVar2 = local_58.Index;
    _Src_01 = local_58.Reference;
    if (1 < local_58.Index) {
      local_78.Data.ArrayNum = local_58.Index;
      if ((local_58.Index == 0) && (local_78.Data.ArrayMax == 0)) {
        local_78.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_58.Index,local_78.Data.ArrayMax,(ForAnyElementType *)&local_78,
                   local_58.Index,&local_78.Data.ArrayMax);
        if (iVar2 != 0) {
          memcpy(local_78.Data.AllocatorInstance.Data,_Src_01,(longlong)iVar2 * 2);
        }
      }
      local_res8[0] = true;
    }
    if (local_58.Reference != (longlong *)0x0) {
      FMemory::Free(local_58.Reference);
    }
  }
  FDataflowNode::SetValue<FString_&,FString>((FDataflowNode *)this,param_1,&local_78,&this->String);
  FDataflowNode::SetValue<FString_const_&,FString>
            ((FDataflowNode *)this,param_1,&local_68,&this->StringDefault);
  FDataflowNode::SetValue<bool_&,bool>
            ((FDataflowNode *)this,param_1,local_res8,(bool *)&this->_padding_);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// FGetStringOverrideFromAssetDataflowNode @ 14e921620

FGetStringOverrideFromAssetDataflowNode * __thiscall
FGetStringOverrideFromAssetDataflowNode::FGetStringOverrideFromAssetDataflowNode
          (FGetStringOverrideFromAssetDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FGetStringOverrideFromAssetDataflowNode__6B_;
  local_28.Reference = &this->String;
  (this->StringDefault).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((FString *)local_28.Reference)->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = 0;
  (this->String).Data.ArrayMax = 0;
  (this->StringDefault).Data.ArrayNum = 0;
  (this->StringDefault).Data.ArrayMax = 0;
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
  local_28.Reference = &this->StringDefault;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_48);
  }
  return this;
}

// FGetStringOverrideFromAssetDataflowNode @ 14e921720

FGetStringOverrideFromAssetDataflowNode * __thiscall
FGetStringOverrideFromAssetDataflowNode::FGetStringOverrideFromAssetDataflowNode
          (FGetStringOverrideFromAssetDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowOverrideNode__6B_;
  ::FName::FName((FName *)&this->_padding_,"Key");
  ::FString::FString((FString *)&this->_padding_,"0");
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGetStringOverrideFromAssetDataflowNode__6B_;
  (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->String).Data.ArrayNum = 0;
  (this->String).Data.ArrayMax = 0;
  (this->StringDefault).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringDefault).Data.ArrayNum = 0;
  (this->StringDefault).Data.ArrayMax = 0;
  return this;
}

