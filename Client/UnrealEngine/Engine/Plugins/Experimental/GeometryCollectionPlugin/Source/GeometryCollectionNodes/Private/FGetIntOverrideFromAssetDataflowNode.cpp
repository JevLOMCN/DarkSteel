// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8b72e0

UScriptStruct * __cdecl FGetIntOverrideFromAssetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetIntOverrideFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton;
}

// GetType @ 14e8b7930

FName __thiscall
FGetIntOverrideFromAssetDataflowNode::GetType(FGetIntOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetIntOverrideFromAssetDataflowNode");
  return in_RDX;
}

// IsA @ 14e8b7960

bool __thiscall
FGetIntOverrideFromAssetDataflowNode::IsA(FGetIntOverrideFromAssetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetIntOverrideFromAssetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8b79c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8b79c8:
    if (!bVar5) {
      bVar5 = FDataflowOverrideNode::IsA((FDataflowOverrideNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8b79e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8b79e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8b7a20

FStructOnScope * __thiscall
FGetIntOverrideFromAssetDataflowNode::NewStructOnScope(FGetIntOverrideFromAssetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode,
                           (UObject *)pUVar2,L"GetIntOverrideFromAssetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8b7ab0

void __thiscall
FGetIntOverrideFromAssetDataflowNode::SerializeInternal
          (FGetIntOverrideFromAssetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetIntOverrideFromAssetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8b7b2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8b7b40

FName __thiscall
FGetIntOverrideFromAssetDataflowNode::GetDisplayName(FGetIntOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetIntOverrideFromAsset");
  return in_RDX;
}

// GetCategory @ 14e8b7b70

FName __thiscall
FGetIntOverrideFromAssetDataflowNode::GetCategory(FGetIntOverrideFromAssetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Overrides");
  return in_RDX;
}

// GetTags @ 14e8b7ba0

FString * __thiscall
FGetIntOverrideFromAssetDataflowNode::GetTags
          (FGetIntOverrideFromAssetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8b7bd0

UScriptStruct * __thiscall
FGetIntOverrideFromAssetDataflowNode::TypedScriptStruct(FGetIntOverrideFromAssetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetIntOverrideFromAssetDataflowNode,
                         (UObject *)pUVar1,L"GetIntOverrideFromAssetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetIntOverrideFromAssetDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8b8040

void __thiscall
FGetIntOverrideFromAssetDataflowNode::Evaluate
          (FGetIntOverrideFromAssetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  FName _Str;
  FContext *pFVar5;
  bool local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  FString local_28;
  
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((int *)puVar4 != &this->Int) &&
      (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (int *)puVar4 != &this->IntDefault)) &&
     (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (longlong *)puVar4 != &this->_padding_)) {
    return;
  }
  local_res18[0] =
       FDataflowOverrideNode::GetDefaultValue<int>((FDataflowOverrideNode *)this,param_1);
  local_res8[0] = false;
  pcVar1 = *(code **)(param_1->_padding_ + 0x18);
  local_res20[0] = local_res18[0];
  ::FName::FName((FName *)&local_28,"TEngineContext");
  cVar2 = (*pcVar1)(param_1,local_28.Data.AllocatorInstance.Data);
  pFVar5 = param_1;
  if (cVar2 == '\0') {
    pFVar5 = (FContext *)0x0;
  }
  if (pFVar5 != (FContext *)0x0) {
    FDataflowOverrideNode::GetValueFromAsset
              ((FDataflowOverrideNode *)this,&local_28,param_1,(UObject *)pFVar5[1]._padding_);
    if ((1 < local_28.Data.ArrayNum) && (bVar3 = ::FString::IsNumeric(&local_28), bVar3)) {
      _Str = (FName)L"";
      if (local_28.Data.ArrayNum != 0) {
        _Str = (FName)local_28.Data.AllocatorInstance;
      }
      local_res18[0] = _wtoi((wchar_t *)_Str);
      local_res8[0] = true;
    }
    if ((FName)local_28.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  FDataflowNode::SetValue<int_&,int>((FDataflowNode *)this,param_1,local_res18,&this->Int);
  FDataflowNode::SetValue<int_const_&,int>
            ((FDataflowNode *)this,param_1,local_res20,&this->IntDefault);
  FDataflowNode::SetValue<bool_&,bool>
            ((FDataflowNode *)this,param_1,local_res8,(bool *)&this->_padding_);
  return;
}

// FGetIntOverrideFromAssetDataflowNode @ 14e920b20

FGetIntOverrideFromAssetDataflowNode * __thiscall
FGetIntOverrideFromAssetDataflowNode::FGetIntOverrideFromAssetDataflowNode
          (FGetIntOverrideFromAssetDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FGetIntOverrideFromAssetDataflowNode__6B_;
  local_28.Reference = &this->Int;
  this->IntDefault = 0;
  *(int *)local_28.Reference = 0;
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
  local_28.Reference = &this->IntDefault;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_48);
  }
  return this;
}

// FGetIntOverrideFromAssetDataflowNode @ 14e920c10

FGetIntOverrideFromAssetDataflowNode * __thiscall
FGetIntOverrideFromAssetDataflowNode::FGetIntOverrideFromAssetDataflowNode
          (FGetIntOverrideFromAssetDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowOverrideNode__6B_;
  ::FName::FName((FName *)&this->_padding_,"Key");
  ::FString::FString((FString *)&this->_padding_,"0");
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGetIntOverrideFromAssetDataflowNode__6B_;
  this->Int = 0;
  this->IntDefault = 0;
  return this;
}

