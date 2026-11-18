// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8252c0

UScriptStruct * __cdecl FVectorToStringDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorToStringDataflowNode,(UObject *)pUVar1,
                         L"VectorToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton;
}

// GetType @ 14e8254b0

FName __thiscall FVectorToStringDataflowNode::GetType(FVectorToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FVectorToStringDataflowNode");
  return in_RDX;
}

// IsA @ 14e825520

bool __thiscall FVectorToStringDataflowNode::IsA(FVectorToStringDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FVectorToStringDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e825588;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e825588:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8255a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8255a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e825640

FStructOnScope * __thiscall
FVectorToStringDataflowNode::NewStructOnScope(FVectorToStringDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVectorToStringDataflowNode,(UObject *)pUVar2,
                           L"VectorToStringDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e825800

void __thiscall
FVectorToStringDataflowNode::SerializeInternal(FVectorToStringDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorToStringDataflowNode,(UObject *)pUVar1,
                         L"VectorToStringDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82587d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8258f0

FName __thiscall FVectorToStringDataflowNode::GetDisplayName(FVectorToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VectorToString");
  return in_RDX;
}

// GetCategory @ 14e8259b0

FName __thiscall FVectorToStringDataflowNode::GetCategory(FVectorToStringDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|String");
  return in_RDX;
}

// GetTags @ 14e825a10

FString * __thiscall
FVectorToStringDataflowNode::GetTags
          (FVectorToStringDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e825a70

UScriptStruct * __thiscall
FVectorToStringDataflowNode::TypedScriptStruct(FVectorToStringDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVectorToStringDataflowNode,(UObject *)pUVar1,
                         L"VectorToStringDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVectorToStringDataflowNode.OuterSingleton;
}

// Evaluate @ 14e825b90

void __thiscall
FVectorToStringDataflowNode::Evaluate
          (FVectorToStringDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  FString local_38;
  FConnectionReference local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FString *)puVar1 == &this->String) {
    local_28.Reference = &this->Vector;
    local_28.Index = -1;
    local_28.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_28);
    FDataflowInput::GetValue<UE::Math::TVector<double>_>(this_00,param_1,local_28.Reference);
    ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
    FDataflowNode::SetValue<FString_&,FString>
              ((FDataflowNode *)this,param_1,&local_38,&this->String);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// FVectorToStringDataflowNode @ 14e9314b0

FVectorToStringDataflowNode * __thiscall
FVectorToStringDataflowNode::FVectorToStringDataflowNode
          (FVectorToStringDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->_padding_ = (longlong)&___7FVectorToStringDataflowNode__6B_;
  (this->Vector).field0_0x0._s_0.X = 0.0;
  (this->Vector).field0_0x0._s_0.Y = 0.0;
  (this->Vector).field0_0x0._s_0.Z = 0.0;
  ::FString::FString(&this->String,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Vector;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->String;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

