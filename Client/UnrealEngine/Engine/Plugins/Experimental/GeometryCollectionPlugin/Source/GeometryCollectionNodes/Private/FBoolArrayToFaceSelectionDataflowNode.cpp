// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e846db0

UScriptStruct * __cdecl FBoolArrayToFaceSelectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode,
                         (UObject *)pUVar1,L"BoolArrayToFaceSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton;
}

// GetType @ 14e846e50

FName __thiscall
FBoolArrayToFaceSelectionDataflowNode::GetType(FBoolArrayToFaceSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoolArrayToFaceSelectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e847060

bool __thiscall
FBoolArrayToFaceSelectionDataflowNode::IsA
          (FBoolArrayToFaceSelectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoolArrayToFaceSelectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8470c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8470c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8470e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8470e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e847120

FStructOnScope * __thiscall
FBoolArrayToFaceSelectionDataflowNode::NewStructOnScope(FBoolArrayToFaceSelectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode,
                           (UObject *)pUVar2,L"BoolArrayToFaceSelectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8472b0

void __thiscall
FBoolArrayToFaceSelectionDataflowNode::SerializeInternal
          (FBoolArrayToFaceSelectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode,
                         (UObject *)pUVar1,L"BoolArrayToFaceSelectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84732d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e847340

FName __thiscall
FBoolArrayToFaceSelectionDataflowNode::GetDisplayName(FBoolArrayToFaceSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BoolArrayToFaceSelection");
  return in_RDX;
}

// GetCategory @ 14e847380

FName __thiscall
FBoolArrayToFaceSelectionDataflowNode::GetCategory(FBoolArrayToFaceSelectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e8473b0

FString * __thiscall
FBoolArrayToFaceSelectionDataflowNode::GetTags
          (FBoolArrayToFaceSelectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8473e0

UScriptStruct * __thiscall
FBoolArrayToFaceSelectionDataflowNode::TypedScriptStruct
          (FBoolArrayToFaceSelectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode,
                         (UObject *)pUVar1,L"BoolArrayToFaceSelectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoolArrayToFaceSelectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e847520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBoolArrayToFaceSelectionDataflowNode::Evaluate
          (FBoolArrayToFaceSelectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStack_88 [32];
  FConnectionReference local_68;
  FDataflowSelection local_50;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowFaceSelection *)puVar1 == &this->FaceSelection) {
    local_68.Reference = &this->BoolAttributeData;
    local_68.Index = -1;
    local_68.ContainerReference = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_68);
    pTVar2 = FDataflowInput::GetValue<TArray<bool,TSizedDefaultAllocator<32>_>_>
                       (this_00,param_1,local_68.Reference);
    local_50.GroupName = FDataflowFaceSelection::FacesGroupName;
    local_50.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_50.SelectionArray.NumBits = 0;
    local_50.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::Initialize(&local_50,pTVar2->ArrayNum,false);
    FDataflowSelection::SetFromArray(&local_50,pTVar2);
    FDataflowNode::SetValue<FDataflowFaceSelection,FDataflowFaceSelection>
              ((FDataflowNode *)this,param_1,(FDataflowFaceSelection *)&local_50,
               &this->FaceSelection);
    if (local_50.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_50.SelectionArray.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// FBoolArrayToFaceSelectionDataflowNode @ 14e912090

FBoolArrayToFaceSelectionDataflowNode * __thiscall
FBoolArrayToFaceSelectionDataflowNode::FBoolArrayToFaceSelectionDataflowNode
          (FBoolArrayToFaceSelectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowFaceSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_48.Reference = &this->BoolAttributeData;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar1 = &this->FaceSelection;
  local_48.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FBoolArrayToFaceSelectionDataflowNode__6B_;
  (((TArray<bool,TSizedDefaultAllocator<32>_> *)local_48.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->BoolAttributeData).ArrayNum = 0;
  (this->BoolAttributeData).ArrayMax = 0;
  uVar2 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = pFVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

