// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e856ad0

UScriptStruct * __cdecl FClusterMagnetDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode,(UObject *)pUVar1,
                         L"ClusterMagnetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton;
}

// GetType @ 14e856de0

FName __thiscall FClusterMagnetDataflowNode::GetType(FClusterMagnetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClusterMagnetDataflowNode");
  return in_RDX;
}

// IsA @ 14e856ed0

bool __thiscall FClusterMagnetDataflowNode::IsA(FClusterMagnetDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClusterMagnetDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e856f38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e856f38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e856f56;
      }
    }
  }
  bVar5 = true;
LAB_14e856f56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e856fc0

FStructOnScope * __thiscall
FClusterMagnetDataflowNode::NewStructOnScope(FClusterMagnetDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode,(UObject *)pUVar2,
                           L"ClusterMagnetDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e857160

void __thiscall
FClusterMagnetDataflowNode::SerializeInternal(FClusterMagnetDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode,(UObject *)pUVar1,
                         L"ClusterMagnetDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8571dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8571f0

FName __thiscall FClusterMagnetDataflowNode::GetDisplayName(FClusterMagnetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ClusterMagnet");
  return in_RDX;
}

// GetCategory @ 14e8572d0

FName __thiscall FClusterMagnetDataflowNode::GetCategory(FClusterMagnetDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Cluster");
  return in_RDX;
}

// GetTags @ 14e857300

FString * __thiscall
FClusterMagnetDataflowNode::GetTags
          (FClusterMagnetDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8573f0

UScriptStruct * __thiscall
FClusterMagnetDataflowNode::TypedScriptStruct(FClusterMagnetDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterMagnetDataflowNode,(UObject *)pUVar1,
                         L"ClusterMagnetDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterMagnetDataflowNode.OuterSingleton;
}

// Evaluate @ 14e858a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FClusterMagnetDataflowNode::Evaluate
          (FClusterMagnetDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar4;
  FDataflowTransformSelection *pFVar5;
  FDataflowInput *this_01;
  int *piVar6;
  uint uVar7;
  ForElementType<unsigned_int> _Dst;
  void *_Src;
  int iVar8;
  undefined1 auStack_b8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_98;
  FConnectionReference local_88;
  FDataflowSelection local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar1 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar3 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    pFVar4 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
    if (pFVar4 != (FGeometryCollection *)0x0) {
      pFVar5 = FDataflowNode::GetValue<FDataflowTransformSelection>
                         ((FDataflowNode *)this,param_1,&this->TransformSelection);
      local_70.GroupName.ComparisonIndex.Value = *(uint *)&pFVar5->field_0x0;
      local_70.GroupName.Number = *(uint *)&pFVar5->field_0x4;
      local_70.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_70.SelectionArray.MaxBits = 0;
      local_70.SelectionArray.NumBits = 0;
      uVar7 = *(int *)&pFVar5->field_0x20 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar7) {
        local_70.SelectionArray.MaxBits = 0x80;
        if (0x80 < (int)uVar7) {
          local_70.SelectionArray.MaxBits = uVar7;
        }
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70.SelectionArray,0);
      }
      local_70.SelectionArray.NumBits = *(int *)&pFVar5->field_0x20;
      if (local_70.SelectionArray.NumBits != 0) {
        _Src = *(void **)&pFVar5->field_0x18;
        if (*(void **)&pFVar5->field_0x18 == (void *)0x0) {
          _Src = &pFVar5->field_0x8;
        }
        _Dst = (ForElementType<unsigned_int>)&local_70.SelectionArray;
        if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          _Dst = local_70.SelectionArray.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,_Src,(ulonglong)(local_70.SelectionArray.NumBits + 0x1fU >> 5) << 2);
      }
      local_88.Reference = &this->Iterations;
      local_88.Index = -1;
      local_88.ContainerReference = (void *)0x0;
      this_01 = FDataflowNode::FindInput((FDataflowNode *)this,&local_88);
      piVar6 = FDataflowInput::GetValue<int>(this_01,param_1,local_88.Reference);
      iVar8 = *piVar6;
      FDataflowSelection::AsArray(&local_70,&local_98);
      if (iVar8 < 1) {
        iVar8 = 1;
      }
      bVar2 = FFractureEngineClustering::ClusterMagnet(pFVar4,&local_98,iVar8);
      if (bVar2) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar4,pFVar1);
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
        }
        (**(code **)pFVar4->_padding_)(pFVar4,1);
        return;
      }
      if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.AllocatorInstance.Data);
      }
      if (local_70.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_70.SelectionArray.AllocatorInstance.SecondaryData);
      }
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,this_00,pFVar1);
  }
  return;
}

// FClusterMagnetDataflowNode @ 14e9144e0

FClusterMagnetDataflowNode * __thiscall
FClusterMagnetDataflowNode::FClusterMagnetDataflowNode
          (FClusterMagnetDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
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
  this->_padding_ = (longlong)&___7FClusterMagnetDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->Iterations = 1;
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
  local_58.Reference = &this->Iterations;
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

