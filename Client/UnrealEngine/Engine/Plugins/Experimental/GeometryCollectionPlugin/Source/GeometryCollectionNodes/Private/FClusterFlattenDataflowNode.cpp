// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8412f0

UScriptStruct * __cdecl FClusterFlattenDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode,(UObject *)pUVar1,
                         L"ClusterFlattenDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton;
}

// GetType @ 14e842130

FName __thiscall FClusterFlattenDataflowNode::GetType(FClusterFlattenDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FClusterFlattenDataflowNode");
  return in_RDX;
}

// IsA @ 14e8421d0

bool __thiscall FClusterFlattenDataflowNode::IsA(FClusterFlattenDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FClusterFlattenDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e842238;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e842238:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e842256;
      }
    }
  }
  bVar5 = true;
LAB_14e842256:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e842290

FStructOnScope * __thiscall
FClusterFlattenDataflowNode::NewStructOnScope(FClusterFlattenDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode,(UObject *)pUVar2,
                           L"ClusterFlattenDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e842390

void __thiscall
FClusterFlattenDataflowNode::SerializeInternal(FClusterFlattenDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode,(UObject *)pUVar1,
                         L"ClusterFlattenDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84240d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e842420

FName __thiscall FClusterFlattenDataflowNode::GetDisplayName(FClusterFlattenDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Flatten");
  return in_RDX;
}

// GetCategory @ 14e842450

FName __thiscall FClusterFlattenDataflowNode::GetCategory(FClusterFlattenDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Cluster");
  return in_RDX;
}

// GetTags @ 14e842480

FString * __thiscall
FClusterFlattenDataflowNode::GetTags
          (FClusterFlattenDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8424b0

UScriptStruct * __thiscall
FClusterFlattenDataflowNode::TypedScriptStruct(FClusterFlattenDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusterFlattenDataflowNode,(UObject *)pUVar1,
                         L"ClusterFlattenDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FClusterFlattenDataflowNode.OuterSingleton;
}

// Evaluate @ 14e842870

void __thiscall
FClusterFlattenDataflowNode::Evaluate
          (FClusterFlattenDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  FManagedArrayCollection *this_00;
  FGeometryCollection *pFVar8;
  FDataflowInput *pFVar9;
  FDataflowSelection *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_398;
  int local_388 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_380;
  FConnectionReference local_370;
  TArray<int,TSizedDefaultAllocator<32>_> local_358;
  FCollectionHierarchyFacade local_348;
  FCollectionTransformSelectionFacade local_298;
  
  pFVar1 = &this->Collection;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar7 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    iVar6 = FManagedArrayCollection::NumElements(this_00,FTransformCollection::TransformAttribute);
    if (iVar6 < 1) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,this_00,pFVar1);
    }
    else {
      pFVar8 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
      if (pFVar8 != (FGeometryCollection *)0x0) {
        Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
                  (&local_348,(FManagedArrayCollection *)pFVar8);
        Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_348);
        local_370.Index = -1;
        local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_398.ArrayNum = 0;
        local_398.ArrayMax = 0;
        local_370.ContainerReference = (void *)0x0;
        local_370.Reference = &this->OptionalTransformSelection;
        pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_370);
        if (pFVar9->Connection == (FDataflowOutput *)0x0) {
          local_388[0] = Chaos::Facades::FCollectionHierarchyFacade::GetRootIndex(&local_348);
          if (((local_398.AllocatorInstance.Data <= (FScriptContainerElement *)local_388) &&
              ((FScriptContainerElement *)local_388 <
               local_398.AllocatorInstance.Data + (longlong)local_398.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar6 = local_398.ArrayNum;
          if (local_398.ArrayNum == local_398.ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_398.AllocatorInstance,&local_398.ArrayMax);
          }
          local_398.ArrayNum = iVar6 + 1;
          *(int *)(local_398.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_388[0];
        }
        else {
          this_01 = (FDataflowSelection *)
                    FDataflowNode::GetValue<FDataflowTransformSelection>
                              ((FDataflowNode *)this,param_1,&this->OptionalTransformSelection);
          pTVar10 = FDataflowSelection::AsArray(this_01,&local_358);
          if (&local_398 != pTVar10) {
            if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_398.AllocatorInstance.Data);
            }
            local_398.AllocatorInstance.Data = (pTVar10->AllocatorInstance).Data;
            (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
            local_398.ArrayNum = pTVar10->ArrayNum;
            local_398.ArrayMax = pTVar10->ArrayMax;
            pTVar10->ArrayNum = 0;
            pTVar10->ArrayMax = 0;
          }
          if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.AllocatorInstance.Data);
          }
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          FCollectionTransformSelectionFacade(&local_298,(FManagedArrayCollection *)pFVar8);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
                    (&local_298,&local_398,true);
          GeometryCollection::Facades::FCollectionTransformSelectionFacade::
          FilterSelectionBySimulationType(&local_298,&local_398,FST_Clustered);
        }
        iVar6 = local_398.ArrayNum;
        uVar11 = (ulonglong)local_398.ArrayNum;
        pFVar2 = local_398.AllocatorInstance.Data + uVar11 * 4;
        FVar12.Data = local_398.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar11 != iVar6) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (FVar12.Data == pFVar2) break;
          iVar3 = *(int *)FVar12.Data;
          local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_380.ArrayNum = 0;
          local_380.ArrayMax = 0;
          FGeometryCollectionClusteringUtility::GetLeafBones
                    ((FManagedArrayCollection *)pFVar8,iVar3,true,&local_380);
          FGeometryCollectionClusteringUtility::ClusterBonesUnderExistingNode
                    (pFVar8,iVar3,&local_380);
          if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_380.AllocatorInstance.Data);
          }
          uVar11 = local_398._8_8_ & 0xffffffff;
          FVar12.Data = FVar12.Data + 4;
        }
        FGeometryCollectionClusteringUtility::RemoveDanglingClusters(pFVar8);
        Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_348);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar8,&this->Collection
                  );
        if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_398.AllocatorInstance.Data);
        }
        (**(code **)pFVar8->_padding_)(pFVar8,1);
      }
    }
  }
  return;
}

// FClusterFlattenDataflowNode @ 14e9143d0

FClusterFlattenDataflowNode * __thiscall
FClusterFlattenDataflowNode::FClusterFlattenDataflowNode
          (FClusterFlattenDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FClusterFlattenDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->OptionalTransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->OptionalTransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->OptionalTransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->OptionalTransformSelection).field_0x24 = 0x80;
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

