// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8c4240

UScriptStruct * __cdecl FUpdateVolumeAttributesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode,
                         (UObject *)pUVar1,L"UpdateVolumeAttributesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton;
}

// GetType @ 14e8c4480

FName __thiscall
FUpdateVolumeAttributesDataflowNode::GetType(FUpdateVolumeAttributesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FUpdateVolumeAttributesDataflowNode");
  return in_RDX;
}

// IsA @ 14e8c4550

bool __thiscall
FUpdateVolumeAttributesDataflowNode::IsA(FUpdateVolumeAttributesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FUpdateVolumeAttributesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8c45b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8c45b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8c45d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8c45d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8c4640

FStructOnScope * __thiscall
FUpdateVolumeAttributesDataflowNode::NewStructOnScope(FUpdateVolumeAttributesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode,
                           (UObject *)pUVar2,L"UpdateVolumeAttributesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8c4750

void __thiscall
FUpdateVolumeAttributesDataflowNode::SerializeInternal
          (FUpdateVolumeAttributesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode,
                         (UObject *)pUVar1,L"UpdateVolumeAttributesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8c47cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8c47e0

FName __thiscall
FUpdateVolumeAttributesDataflowNode::GetDisplayName(FUpdateVolumeAttributesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"UpdateVolumeAttributes");
  return in_RDX;
}

// GetCategory @ 14e8c4810

FName __thiscall
FUpdateVolumeAttributesDataflowNode::GetCategory(FUpdateVolumeAttributesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8c4840

FString * __thiscall
FUpdateVolumeAttributesDataflowNode::GetTags
          (FUpdateVolumeAttributesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8c4870

UScriptStruct * __thiscall
FUpdateVolumeAttributesDataflowNode::TypedScriptStruct(FUpdateVolumeAttributesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUpdateVolumeAttributesDataflowNode,
                         (UObject *)pUVar1,L"UpdateVolumeAttributesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FUpdateVolumeAttributesDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8c4a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUpdateVolumeAttributesDataflowNode::Evaluate
          (FUpdateVolumeAttributesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  int iVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *pFVar4;
  undefined1 auStack_f8 [32];
  FManagedArrayCollection local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar3 == pFVar1) {
    pFVar4 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_d8,pFVar4);
    iVar2 = FManagedArrayCollection::NumElements(&local_d8,FTransformCollection::TransformGroup);
    if (0 < iVar2) {
      FGeometryCollectionConvexUtility::SetVolumeAttributes(&local_d8);
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_d8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
  }
  return;
}

// FUpdateVolumeAttributesDataflowNode @ 14e9311f0

FUpdateVolumeAttributesDataflowNode * __thiscall
FUpdateVolumeAttributesDataflowNode::FUpdateVolumeAttributesDataflowNode
          (FUpdateVolumeAttributesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FUpdateVolumeAttributesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_48);
  }
  return this;
}

