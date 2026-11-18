// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e853660

UScriptStruct * __cdecl FApplyMeshProcessorToGeometryCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode
                         ,(UObject *)pUVar1,L"ApplyMeshProcessorToGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
         OuterSingleton;
}

// GetType @ 14e853840

FName __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::GetType
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FApplyMeshProcessorToGeometryCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e853940

bool __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::IsA
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FApplyMeshProcessorToGeometryCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8539a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8539a8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8539c6;
      }
    }
  }
  bVar5 = true;
LAB_14e8539c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e853a80

FStructOnScope * __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::NewStructOnScope
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode
                           ,(UObject *)pUVar2,L"ApplyMeshProcessorToGeometryCollectionDataflowNode")
      ;
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e853bb0

void __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::SerializeInternal
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode
                         ,(UObject *)pUVar1,L"ApplyMeshProcessorToGeometryCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  return;
}

// GetDisplayName @ 14e853c90

FName __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::GetDisplayName
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ApplyGeometryScriptToCollection");
  return in_RDX;
}

// GetCategory @ 14e853cd0

FName __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::GetCategory
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Mesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e853d00

FString * __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::GetTags
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e853d80

UScriptStruct * __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::TypedScriptStruct
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode
                         ,(UObject *)pUVar1,L"ApplyMeshProcessorToGeometryCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FApplyMeshProcessorToGeometryCollectionDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e854490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::Evaluate
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 *puVar6;
  FDataflowInput *pFVar7;
  FDataflowTransformSelection *pFVar8;
  FManagedArrayCollection *pFVar9;
  FManagedArrayCollection *pFVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  UObject *pUVar12;
  UDynamicMesh *this_00;
  FGeometryCollection *pFVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  ForElementType<unsigned_int> _Dst;
  void *_Src;
  ForAnyElementType FVar16;
  FMeshInfo *pFVar17;
  undefined1 auStack_4b8 [32];
  bool local_488;
  undefined1 local_487 [7];
  FGeometryCollectionToDynamicMeshes local_480;
  FToCollectionOptions local_470;
  FMeshInfo *local_468;
  FContext *local_460;
  FManagedArrayCollection *local_458;
  FConnectionReference local_450;
  FConnectionReference local_438;
  TArray<int,TSizedDefaultAllocator<32>_> local_420;
  FScriptContainerElement *local_408;
  int iStack_400;
  undefined4 uStack_3fc;
  code *local_3f8;
  FMeshInfo **local_3f0;
  FConnectionReference local_3e8;
  FConnectionReference local_3d0;
  FConnectionReference local_3b8;
  TArrayView<int_const_,int> local_398;
  TArray<int,TSizedDefaultAllocator<32>_> local_388;
  FCollectionTransformSelectionFacade local_378;
  FDataflowSelection local_108;
  FDataflowSelection local_e0;
  FToMeshOptions local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_4b8;
  pFVar10 = &this->Collection;
  pFVar1 = &this->TransformSelection;
  local_460 = param_1;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar6 != pFVar10) &&
     (puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FDataflowTransformSelection *)puVar6 != pFVar1)) {
    return;
  }
  if (this->_padding_ == 0) {
    local_450.Index = -1;
    local_450.ContainerReference = (void *)0x0;
    local_450.Reference = pFVar10;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_450);
    if (pFVar7->Connection != (FDataflowOutput *)0x0) {
      local_3e8.Index = -1;
      local_3e8.ContainerReference = (void *)0x0;
      local_3e8.Reference = pFVar10;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_450,&local_3e8);
      return;
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_450.Reference,pFVar10);
    return;
  }
  pFVar8 = FDataflowNode::GetValue<FDataflowTransformSelection>
                     ((FDataflowNode *)this,param_1,pFVar1);
  local_108.GroupName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x0;
  local_108.GroupName.Number = *(uint *)&pFVar8->field_0x4;
  local_108.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_108.SelectionArray.MaxBits = 0;
  local_108.SelectionArray.NumBits = 0;
  uVar14 = *(int *)&pFVar8->field_0x20 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar14) {
    local_108.SelectionArray.MaxBits = 0x80;
    if (0x80 < (int)uVar14) {
      local_108.SelectionArray.MaxBits = uVar14;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_108.SelectionArray,0);
  }
  local_108.SelectionArray.NumBits = *(int *)&pFVar8->field_0x20;
  if (local_108.SelectionArray.NumBits != 0) {
    _Src = *(void **)&pFVar8->field_0x18;
    if (*(void **)&pFVar8->field_0x18 == (void *)0x0) {
      _Src = &pFVar8->field_0x8;
    }
    FVar15 = (ForElementType<unsigned_int>)&local_108.SelectionArray;
    if (local_108.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_108.SelectionArray.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)FVar15,_Src,(ulonglong)(local_108.SelectionArray.NumBits + 0x1fU >> 5) << 2);
  }
  local_3d0.ContainerReference = (void *)0x0;
  local_3d0.Index = -1;
  local_3d0.Reference = pFVar1;
  pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_3d0);
  if (pFVar7->Connection == (FDataflowOutput *)0x0) {
    pFVar9 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar10)
    ;
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_378,pFVar9);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectAll
              (&local_378,&local_420);
    local_e0.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_e0.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_e0.SelectionArray.NumBits = 0;
    local_e0.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::InitializeFromCollection(&local_e0,pFVar9,false);
    FDataflowSelection::SetFromArray(&local_e0,&local_420);
    local_108.GroupName = local_e0.GroupName;
    local_108.SelectionArray.NumBits = 0;
    uVar14 = local_e0.SelectionArray.NumBits + 0x1fU & 0xffffffe0;
    if ((local_108.SelectionArray.MaxBits < (int)uVar14) ||
       (0x80 < local_108.SelectionArray.MaxBits)) {
      local_108.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar14) {
        local_108.SelectionArray.MaxBits = uVar14;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_108.SelectionArray,0);
    }
    local_108.SelectionArray.NumBits = local_e0.SelectionArray.NumBits;
    if (local_e0.SelectionArray.NumBits != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_e0.SelectionArray;
      if (local_e0.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_e0.SelectionArray.AllocatorInstance.SecondaryData;
      }
      _Dst = (ForElementType<unsigned_int>)&local_108.SelectionArray;
      if (local_108.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        _Dst = local_108.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)_Dst,(void *)FVar15,
             (ulonglong)(local_e0.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    if (local_e0.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_e0.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.AllocatorInstance.Data);
    }
  }
  bVar5 = FDataflowSelection::AnySelected(&local_108);
  if (bVar5) {
    pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,pFVar10);
    local_b8.Transform.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_b8.Transform.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_b8.bWeldVertices = this->bWeldVertices;
    local_b8.Transform.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_b8.Transform.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_b8.bSaveIsolatedVertices = this->bPreserveIsolatedVertices;
    local_b8.Transform.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_b8.Transform.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_480.Meshes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_480.Meshes.ArrayNum = 0;
    local_480.Meshes.ArrayMax = 0;
    local_b8.bInternalFaceTagsAsPolygroups = true;
    local_b8.InvisibleFaces = Skip;
    local_458 = pFVar10;
    pTVar11 = FDataflowSelection::AsArray(&local_108,&local_388);
    local_408 = (pTVar11->AllocatorInstance).Data;
    iStack_400 = pTVar11->ArrayNum;
    if ((iStack_400 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_398._12_4_ = uStack_3fc;
    local_398.ArrayNum = iStack_400;
    local_398.DataPtr = (int *)local_408;
    bVar5 = UE::Geometry::FGeometryCollectionToDynamicMeshes::InitFromTransformSelection
                      (&local_480,pFVar10,&local_398,&local_b8);
    if ((bVar5) && (local_480.Meshes.ArrayNum != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_388.AllocatorInstance.Data);
    }
    if (bVar5) {
      pUVar12 = GetTransientPackageAsObject();
      this_00 = NewObject<UDynamicMesh>(pUVar12);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UDynamicMesh *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      iVar4 = local_480.Meshes.ArrayNum;
      bVar5 = false;
      pFVar17 = (FMeshInfo *)
                (local_480.Meshes.AllocatorInstance.Data +
                (longlong)local_480.Meshes.ArrayNum * 0x70);
      FVar16.Data = local_480.Meshes.AllocatorInstance.Data;
      while( true ) {
        if (local_480.Meshes.ArrayNum != iVar4) {
          `TCheckedPointerIterator<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_487);
        }
        param_1 = local_460;
        if ((FMeshInfo *)FVar16.Data == pFVar17) break;
        UDynamicMesh::SetMesh(this_00,(((FMeshInfo *)FVar16.Data)->Mesh).Ptr);
        if (1 < (byte)LogGeometryCollectionMeshNodes._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogGeometryCollectionMeshNodes);
        }
        local_488 = false;
        UDynamicMeshProcessorBlueprint::ProcessDynamicMesh
                  ((UDynamicMeshProcessorBlueprint *)this->_padding_,this_00,&local_488);
        if (local_488 == false) {
          local_3f0 = &local_468;
          bVar5 = true;
          local_3f8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FApplyMeshProcessorToGeometryCollectionDataflowNode::Evaluate'::__l24::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                      ::Call;
          local_468 = (FMeshInfo *)FVar16.Data;
          UDynamicMesh::EditMesh
                    (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_3f8
                     ,GeneralEdit,Unknown,true);
          FVar16.Data = FVar16.Data + 0x70;
        }
        else {
          pFVar2 = (((FMeshInfo *)FVar16.Data)->Mesh).Ptr;
          ((FMeshInfo *)FVar16.Data)->TransformIndex = -1;
          (((FMeshInfo *)FVar16.Data)->Mesh).Ptr = (FDynamicMesh3 *)0x0;
          if (pFVar2 != (FDynamicMesh3 *)0x0) {
            (**(code **)pFVar2->_padding_)(pFVar2,1);
          }
          FVar16.Data = FVar16.Data + 0x70;
        }
      }
      if ((bVar5) &&
         (pFVar13 = FManagedArrayCollection::NewCopy<FGeometryCollection>(local_458),
         pFVar13 != (FGeometryCollection *)0x0)) {
        local_470.bDefaultFaceInternal = false;
        local_470.bAllowAppendAsRoot = false;
        local_470.NewMeshParentIndex = -1;
        local_470.bDefaultFaceVisible = true;
        UE::Geometry::FGeometryCollectionToDynamicMeshes::UpdateGeometryCollection
                  (&local_480,pFVar13,&local_470);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar13,
                   &this->Collection);
        (**(code **)pFVar13->_padding_)(pFVar13,1);
        DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>
                  ((FMeshInfo *)local_480.Meshes.AllocatorInstance.Data,local_480.Meshes.ArrayNum);
        if ((FMeshInfo *)local_480.Meshes.AllocatorInstance.Data != (FMeshInfo *)0x0) {
          FMemory::Free(local_480.Meshes.AllocatorInstance.Data);
        }
        goto LAB_14e854a89;
      }
    }
    DestructItems<UE::Geometry::FGeometryCollectionToDynamicMeshes::FMeshInfo,int>
              ((FMeshInfo *)local_480.Meshes.AllocatorInstance.Data,local_480.Meshes.ArrayNum);
    if ((FMeshInfo *)local_480.Meshes.AllocatorInstance.Data != (FMeshInfo *)0x0) {
      FMemory::Free(local_480.Meshes.AllocatorInstance.Data);
    }
  }
  pFVar10 = &this->Collection;
  local_438.Index = -1;
  local_438.ContainerReference = (void *)0x0;
  local_438.Reference = pFVar10;
  pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_438);
  if (pFVar7->Connection == (FDataflowOutput *)0x0) {
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,local_438.Reference,pFVar10);
  }
  else {
    local_3b8.Index = -1;
    local_3b8.ContainerReference = (void *)0x0;
    local_3b8.Reference = pFVar10;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_438,&local_3b8);
  }
LAB_14e854a89:
  if (local_108.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_108.SelectionArray.AllocatorInstance.SecondaryData);
  }
  return;
}

// FApplyMeshProcessorToGeometryCollectionDataflowNode @ 14e910b30

FApplyMeshProcessorToGeometryCollectionDataflowNode * __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::
FApplyMeshProcessorToGeometryCollectionDataflowNode
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

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
  FMeshProcessorDataflowNodeBase::FMeshProcessorDataflowNodeBase
            ((FMeshProcessorDataflowNodeBase *)this,param_1,(FGuid *)&local_58);
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bWeldVertices = true;
  this->bPreserveIsolatedVertices = true;
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

// FApplyMeshProcessorToGeometryCollectionDataflowNode @ 14e910c60

FApplyMeshProcessorToGeometryCollectionDataflowNode * __thiscall
FApplyMeshProcessorToGeometryCollectionDataflowNode::
FApplyMeshProcessorToGeometryCollectionDataflowNode
          (FApplyMeshProcessorToGeometryCollectionDataflowNode *this)

{
  uint uVar1;
  
  FMeshProcessorDataflowNodeBase::FMeshProcessorDataflowNodeBase
            ((FMeshProcessorDataflowNodeBase *)this);
  this->_padding_ = (longlong)&_vftable__for__FDataflowNode__;
  this->_padding_ = (longlong)&_vftable__for__FDataflowDynamicConnections__IOwnerInterface__;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bWeldVertices = true;
  this->bPreserveIsolatedVertices = true;
  return this;
}

