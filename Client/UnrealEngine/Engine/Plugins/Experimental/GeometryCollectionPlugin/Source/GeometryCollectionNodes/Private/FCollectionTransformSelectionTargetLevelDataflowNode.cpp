// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e830020

UScriptStruct * __cdecl FCollectionTransformSelectionTargetLevelDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
         OuterSingleton;
}

// GetType @ 14e830190

FName __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::GetType
          (FCollectionTransformSelectionTargetLevelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionTargetLevelDataflowNode");
  return in_RDX;
}

// IsA @ 14e830270

bool __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::IsA
          (FCollectionTransformSelectionTargetLevelDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionTargetLevelDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8302d8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8302d8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8302f6;
      }
    }
  }
  bVar5 = true;
LAB_14e8302f6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8303f0

FStructOnScope * __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionTargetLevelDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionTargetLevelDataflowNode"
                          );
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e830550

void __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::SerializeInternal
          (FCollectionTransformSelectionTargetLevelDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8305cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e830670

FName __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::GetDisplayName
          (FCollectionTransformSelectionTargetLevelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectTargetLevel");
  return in_RDX;
}

// GetCategory @ 14e8306d0

FName __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::GetCategory
          (FCollectionTransformSelectionTargetLevelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e830770

FString * __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::GetTags
          (FCollectionTransformSelectionTargetLevelDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8307d0

UScriptStruct * __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionTargetLevelDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionTargetLevelDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionTargetLevelDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e830950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::Evaluate
          (FCollectionTransformSelectionTargetLevelDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *pFVar4;
  FDataflowInput *this_00;
  int *piVar5;
  undefined1 auStack_488 [32];
  FConnectionReference local_468;
  TArray<int,TSizedDefaultAllocator<32>_> local_450;
  FCollectionHierarchyFacade local_438;
  FCollectionTransformSelectionFacade local_388;
  FDataflowSelection local_118;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_488;
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FDataflowTransformSelection *)puVar3 != &this->TransformSelection) &&
     (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FManagedArrayCollection *)puVar3 != pFVar1)) {
    return;
  }
  pFVar4 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  FManagedArrayCollection::FManagedArrayCollection(&local_e8,pFVar4);
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_438,&local_e8);
  bVar2 = Chaos::Facades::FCollectionHierarchyFacade::HasLevelAttribute(&local_438);
  if (!bVar2) {
    Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_438);
  }
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_388,&local_e8);
  local_468.Reference = &this->TargetLevel;
  local_468.Index = -1;
  local_468.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_468);
  piVar5 = FDataflowInput::GetValue<int>(this_00,param_1,local_468.Reference);
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::GetBonesExactlyAtLevel
            (&local_388,&local_450,*piVar5,this->bSkipEmbedded);
  local_118.GroupName = FDataflowTransformSelection::TransformGroupName;
  local_118.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_118.SelectionArray.NumBits = 0;
  local_118.SelectionArray.MaxBits = 0x80;
  FDataflowSelection::InitializeFromCollection(&local_118,&local_e8,false);
  FDataflowSelection::SetFromArray(&local_118,&local_450);
  FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
            ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_118,
             &this->TransformSelection);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_e8,pFVar1);
  if (local_118.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_118.SelectionArray.AllocatorInstance.SecondaryData);
  }
  if (local_450.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.AllocatorInstance.Data);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
  return;
}

// FCollectionTransformSelectionTargetLevelDataflowNode @ 14e919480

FCollectionTransformSelectionTargetLevelDataflowNode * __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::
FCollectionTransformSelectionTargetLevelDataflowNode
          (FCollectionTransformSelectionTargetLevelDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionTargetLevelDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this->bSkipEmbedded = false;
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->TargetLevel = 1;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->TargetLevel;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  return this;
}

// FCollectionTransformSelectionTargetLevelDataflowNode @ 14e919600

FCollectionTransformSelectionTargetLevelDataflowNode * __thiscall
FCollectionTransformSelectionTargetLevelDataflowNode::
FCollectionTransformSelectionTargetLevelDataflowNode
          (FCollectionTransformSelectionTargetLevelDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionTargetLevelDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->TargetLevel = 1;
  this->bSkipEmbedded = false;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}

