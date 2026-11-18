// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e84d5c0

UScriptStruct * __cdecl FGeometryCollectionSetKinematicVertexSelectionNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode
                         ,(UObject *)pUVar1,L"GeometryCollectionSetKinematicVertexSelectionNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
         OuterSingleton;
}

// GetType @ 14e84d730

FName __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::GetType
          (FGeometryCollectionSetKinematicVertexSelectionNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGeometryCollectionSetKinematicVertexSelectionNode");
  return in_RDX;
}

// IsA @ 14e84d780

bool __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::IsA
          (FGeometryCollectionSetKinematicVertexSelectionNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGeometryCollectionSetKinematicVertexSelectionNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e84d7e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e84d7e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e84d806;
      }
    }
  }
  bVar5 = true;
LAB_14e84d806:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e84d850

FStructOnScope * __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::NewStructOnScope
          (FGeometryCollectionSetKinematicVertexSelectionNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode
                           ,(UObject *)pUVar2,L"GeometryCollectionSetKinematicVertexSelectionNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e84d930

void __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::SerializeInternal
          (FGeometryCollectionSetKinematicVertexSelectionNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode
                         ,(UObject *)pUVar1,L"GeometryCollectionSetKinematicVertexSelectionNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84d9ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e84dbe0

FName __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::GetDisplayName
          (FGeometryCollectionSetKinematicVertexSelectionNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetKinematicVertexSelection");
  return in_RDX;
}

// GetCategory @ 14e84df70

FName __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::GetCategory
          (FGeometryCollectionSetKinematicVertexSelectionNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e84dfa0

FString * __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::GetTags
          (FGeometryCollectionSetKinematicVertexSelectionNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Set Vertex Collection to be kinematic");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e84dfd0

UScriptStruct * __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::TypedScriptStruct
          (FGeometryCollectionSetKinematicVertexSelectionNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode
                         ,(UObject *)pUVar1,L"GeometryCollectionSetKinematicVertexSelectionNode");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionSetKinematicVertexSelectionNode.
         OuterSingleton;
}

// Evaluate @ 14e84e4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::Evaluate
          (FGeometryCollectionSetKinematicVertexSelectionNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  ESetKinematicVertexSelectionKinematicValue EVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *pFVar4;
  FDataflowInput *pFVar5;
  FDataflowVertexSelection *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  ForElementType<unsigned_int> _Dst;
  void *_Src;
  undefined1 auStack_288 [32];
  FConnectionReference local_268;
  FVertexBoneWeightsFacade local_248;
  FDataflowSelection local_118;
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_288;
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar3 == pFVar1) {
    pFVar4 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_e8,pFVar4);
    local_268.Index = -1;
    local_268.ContainerReference = (void *)0x0;
    local_268.Reference = &this->VertexSelection;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_268);
    if (pFVar5->Connection != (FDataflowOutput *)0x0) {
      pFVar6 = FDataflowNode::GetValue<FDataflowVertexSelection>
                         ((FDataflowNode *)this,param_1,&this->VertexSelection);
      local_118.GroupName.ComparisonIndex.Value = *(uint *)&pFVar6->field_0x0;
      local_118.GroupName.Number = *(uint *)&pFVar6->field_0x4;
      local_118.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_118.SelectionArray.MaxBits = 0;
      local_118.SelectionArray.NumBits = 0;
      uVar8 = *(int *)&pFVar6->field_0x20 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar8) {
        local_118.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar8) {
          local_118.SelectionArray.MaxBits = uVar8;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_118.SelectionArray,0);
      }
      local_118.SelectionArray.NumBits = *(int *)&pFVar6->field_0x20;
      if (local_118.SelectionArray.NumBits != 0) {
        _Src = *(void **)&pFVar6->field_0x18;
        if (*(void **)&pFVar6->field_0x18 == (void *)0x0) {
          _Src = &pFVar6->field_0x8;
        }
        _Dst = (ForElementType<unsigned_int>)&local_118.SelectionArray;
        if (local_118.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          _Dst = local_118.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,_Src,(ulonglong)(local_118.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      GeometryCollection::Facades::FVertexBoneWeightsFacade::FVertexBoneWeightsFacade
                (&local_248,&local_e8,true);
      EVar2 = this->KinematicValue;
      pTVar7 = FDataflowSelection::AsArray
                         (&local_118,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_268);
      GeometryCollection::Facades::FVertexBoneWeightsFacade::SetVertexArrayKinematic
                (&local_248,pTVar7,EVar2 == SetKinematic);
      if (local_268.Reference != (FDataflowVertexSelection *)0x0) {
        FMemory::Free(local_268.Reference);
      }
      if (local_118.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_118.SelectionArray.AllocatorInstance.SecondaryData);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_e8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
  }
  return;
}

// FGeometryCollectionSetKinematicVertexSelectionNode @ 14e91e300

FGeometryCollectionSetKinematicVertexSelectionNode * __thiscall
FGeometryCollectionSetKinematicVertexSelectionNode::
FGeometryCollectionSetKinematicVertexSelectionNode
          (FGeometryCollectionSetKinematicVertexSelectionNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowVertexSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FGeometryCollectionSetKinematicVertexSelectionNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->VertexSelection;
  uVar2 = FDataflowVertexSelection::VerticesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowVertexSelection::VerticesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->VertexSelection).field_0x18 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x20 = 0;
  *(undefined4 *)&(this->VertexSelection).field_0x24 = 0x80;
  this->KinematicValue = SetKinematic;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  return this;
}

