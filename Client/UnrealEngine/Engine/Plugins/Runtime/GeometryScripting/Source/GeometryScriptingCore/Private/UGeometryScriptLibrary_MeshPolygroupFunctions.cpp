// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 60

// StaticClass @ 14ce1a720

UClass * __cdecl UGeometryScriptLibrary_MeshPolygroupFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPolygroupFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPolygroupFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPolygroupFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshPolygroupFunctions @ 14ce268e0

UGeometryScriptLibrary_MeshPolygroupFunctions * __thiscall
UGeometryScriptLibrary_MeshPolygroupFunctions::UGeometryScriptLibrary_MeshPolygroupFunctions
          (UGeometryScriptLibrary_MeshPolygroupFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPolygroupFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshPolygroupFunctions @ 14ce26910

UGeometryScriptLibrary_MeshPolygroupFunctions * __thiscall
UGeometryScriptLibrary_MeshPolygroupFunctions::UGeometryScriptLibrary_MeshPolygroupFunctions
          (UGeometryScriptLibrary_MeshPolygroupFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPolygroupFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshPolygroupFunctions @ 14ce27330

void __thiscall
UGeometryScriptLibrary_MeshPolygroupFunctions::~UGeometryScriptLibrary_MeshPolygroupFunctions
          (UGeometryScriptLibrary_MeshPolygroupFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshPolygroupFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce2a120

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::AddNamedPolygroupLayer'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  FDynamicMeshAttributeSet *this_00;
  int iVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FDynamicMeshAttributeSet *this_01;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  iVar2 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 200))();
  this_01 = (FDynamicMeshAttributeSet *)0x0;
  pFVar5 = this_01;
  if (0 < iVar2) {
    do {
      pFVar1 = (param_1->AttributeSet).Ptr;
      this_00 = this_01;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        this_00 = pFVar1;
      }
      iVar4 = (int)pFVar5;
      pTVar3 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,iVar4);
      if (*(longlong *)&pTVar3->field_0x8 == *(longlong *)((longlong)this + 0x10)) {
        **(undefined1 **)this = 0;
        *(int *)(*(longlong *)this + 4) = iVar4;
        return;
      }
      pFVar5 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < iVar2);
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  (**(code **)(pFVar5->_padding_ + 0xd0))(pFVar5,iVar2 + 1);
  pFVar5 = (param_1->AttributeSet).Ptr;
  if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
    this_01 = pFVar5;
  }
  pTVar3 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(this_01,iVar2);
  *(undefined8 *)&pTVar3->field_0x8 = *(undefined8 *)((longlong)this + 0x10);
  **(undefined1 **)this = 0;
  *(int *)(*(longlong *)this + 4) = iVar2;
  return;
}

// operator() @ 14ce32790

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  longlong lVar5;
  FPolygroupLayer FVar6;
  bool bVar7;
  FText *pFVar8;
  FPolygroupSet *this_00;
  FPolygroupSet *pFVar9;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar10;
  int iVar11;
  FDynamicMeshAttributeSet *this_01;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  FPolygroupLayer local_res8;
  FText local_38;
  
  pFVar9 = (FPolygroupSet *)0x0;
  local_res8.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res8.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar7 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
  if (!bVar7) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ClearPolygroups_MissingGroups",
                        L"ClearPolygroups: Target Polygroup Layer does not exist");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar8);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    goto LAB_14ce32a28;
  }
  this_00 = ::operator_new(0x18);
  if (this_00 != (FPolygroupSet *)0x0) {
    FVar6.LayerIndex = local_res8.LayerIndex;
    FVar6.bIsDefaultLayer = local_res8.bIsDefaultLayer;
    FVar6._1_3_ = local_res8._1_3_;
    pFVar9 = UE::Geometry::FPolygroupSet::FPolygroupSet(this_00,param_1,FVar6);
  }
  ::operator_delete((void *)0x0,0x18);
  ::operator_delete((void *)0x0,0x18);
  uVar14 = 0;
  uVar12 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar12 == 0) ||
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar3 - 1U) < 0xfffe)) {
LAB_14ce328ca:
    uVar13 = (uint)uVar14;
  }
  else {
    uVar14 = 1;
    uVar13 = 1;
    if (1 < (int)uVar12) {
      do {
        lVar1 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
        if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar14 >> 9) * 8)) != 0) &&
           (*(short *)(lVar1 + *(longlong *)(pFVar3 + (uVar14 >> 9) * 8)) != -1)) break;
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < (int)uVar12);
      goto LAB_14ce328ca;
    }
  }
joined_r0x00014ce328cc:
  if (uVar13 != uVar12) {
    while( true ) {
      iVar2 = **(int **)((longlong)this + 0x10);
      uVar13 = (uint)uVar14;
      if ((-1 < (int)uVar13) &&
         ((int)uVar13 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        uVar15 = (ulonglong)(uVar13 & 0x1ff);
        lVar1 = (uVar14 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar1) + uVar15 * 2) - 1U) < 0xfffe) {
          if (pFVar9->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
            if ((param_1->TriangleGroups).bIsSet != false) {
              *(int *)(*(longlong *)
                        ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data + lVar1)
                      + uVar15 * 4) = iVar2;
              iVar11 = iVar2 + 1;
              if (iVar2 + 1 < param_1->GroupIDCounter) {
                iVar11 = param_1->GroupIDCounter;
              }
              param_1->GroupIDCounter = iVar11;
            }
          }
          else {
            pFVar4 = (param_1->AttributeSet).Ptr;
            this_01 = (FDynamicMeshAttributeSet *)0x0;
            if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
              this_01 = pFVar4;
            }
            pTVar10 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                                (this_01,pFVar9->GroupLayerIndex);
            *(int *)(*(longlong *)(*(longlong *)&pTVar10->field_0x20 + lVar1) + uVar15 * 4) = iVar2;
          }
        }
      }
      iVar11 = iVar2 + 1;
      if (iVar2 + 1 < pFVar9->MaxGroupID) {
        iVar11 = pFVar9->MaxGroupID;
      }
      uVar13 = uVar13 + 1;
      uVar14 = (ulonglong)uVar13;
      pFVar9->MaxGroupID = iVar11;
      if ((int)uVar12 <= (int)uVar13) break;
      pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar1 = (uVar14 >> 9) * 8;
        lVar5 = (ulonglong)((uint)uVar14 & 0x1ff) * 2;
        if ((*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
           (*(short *)(lVar5 + *(longlong *)(pFVar3 + lVar1)) != -1)) break;
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if ((int)uVar12 <= (int)uVar13) goto joined_r0x00014ce328cc;
      }
    }
    goto joined_r0x00014ce328cc;
  }
LAB_14ce32a28:
  ::operator_delete(pFVar9,0x18);
  return;
}

// operator() @ 14ce33430

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold'::__l2::
<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  FPolygroupLayer FVar1;
  bool bVar2;
  FText *pFVar3;
  FPolygroupSet *this_00;
  FPolygroupSet *pFVar4;
  double dVar5;
  FPolygroupLayer local_res8;
  FText local_58;
  FPolygroupsGenerator local_48;
  
  pFVar4 = (FPolygroupSet *)0x0;
  local_res8.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res8.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar2 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
  if (bVar2) {
    this_00 = ::operator_new(0x18);
    if (this_00 != (FPolygroupSet *)0x0) {
      FVar1.LayerIndex = local_res8.LayerIndex;
      FVar1.bIsDefaultLayer = local_res8.bIsDefaultLayer;
      FVar1._1_3_ = local_res8._1_3_;
      pFVar4 = UE::Geometry::FPolygroupSet::FPolygroupSet(this_00,param_1,FVar1);
    }
    ::operator_delete((void *)0x0,0x18);
    ::operator_delete((void *)0x0,0x18);
    UE::Geometry::FPolygroupsGenerator::FPolygroupsGenerator(&local_48,param_1);
    local_48.bApplyPostProcessing = 1 < **(int **)((longlong)this + 0x10);
    local_48.MinGroupSize = **(int **)((longlong)this + 0x10);
    local_48.bCopyToMesh = false;
    dVar5 = cos((double)**(float **)((longlong)this + 0x18) * __real_3f91df46a2529d39);
    UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromFaceNormals
              (&local_48,__real_3ff0000000000000 - dVar5,false,false,false);
    UE::Geometry::FPolygroupsGenerator::CopyPolygroupsToPolygroupSet(&local_48,pFVar4,param_1);
    if (local_48.PolygroupEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.PolygroupEdges.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_48.FoundPolygroups.AllocatorInstance.Data,local_48.FoundPolygroups.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.FoundPolygroups.AllocatorInstance.Data
        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.FoundPolygroups.AllocatorInstance.Data);
    }
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ComputePolygroupsFromAngleThreshold_MissingGroups",
                        L"ComputePolygroupsFromAngleThreshold: Target Polygroup Layer does not exist"
                       );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar3);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  ::operator_delete(pFVar4,0x18);
  return;
}

// operator() @ 14ce335c0

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection'::__l2::
<lambda_1>::operator()(void *this,FDynamicMesh3 *param_1)

{
  FPolygroupLayer FVar1;
  bool bVar2;
  FText *pFVar3;
  FPolygroupSet *this_00;
  FPolygroupSet *pFVar4;
  FPolygroupLayer local_res8;
  FText local_58;
  FPolygroupsGenerator local_48;
  
  pFVar4 = (FPolygroupSet *)0x0;
  local_res8.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res8.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar2 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
  if (bVar2) {
    this_00 = ::operator_new(0x18);
    if (this_00 != (FPolygroupSet *)0x0) {
      FVar1.LayerIndex = local_res8.LayerIndex;
      FVar1.bIsDefaultLayer = local_res8.bIsDefaultLayer;
      FVar1._1_3_ = local_res8._1_3_;
      pFVar4 = UE::Geometry::FPolygroupSet::FPolygroupSet(this_00,param_1,FVar1);
    }
    ::operator_delete((void *)0x0,0x18);
    ::operator_delete((void *)0x0,0x18);
    UE::Geometry::FPolygroupsGenerator::FPolygroupsGenerator(&local_48,param_1);
    local_48.bApplyPostProcessing = false;
    local_48.bCopyToMesh = false;
    UE::Geometry::FPolygroupsGenerator::FindSourceMeshPolygonPolygroups
              (&local_48,*(bool *)*(undefined8 *)((longlong)this + 0x10),
               *(bool *)*(undefined8 *)((longlong)this + 0x18),**(double **)((longlong)this + 0x20),
               **(double **)((longlong)this + 0x28),**(int **)((longlong)this + 0x30));
    UE::Geometry::FPolygroupsGenerator::CopyPolygroupsToPolygroupSet(&local_48,pFVar4,param_1);
    if (local_48.PolygroupEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.PolygroupEdges.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_48.FoundPolygroups.AllocatorInstance.Data,local_48.FoundPolygroups.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.FoundPolygroups.AllocatorInstance.Data
        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.FoundPolygroups.AllocatorInstance.Data);
    }
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ComputePolygroupsFromPolygonDetection_MissingGroups",
                        L"ComputePolygroupsFromPolygonDetection: Target Polygroup Layer does not exist"
                       );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar3);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  ::operator_delete(pFVar4,0x18);
  return;
}

// operator() @ 14ce345b0

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FPolygroupLayer FVar1;
  bool bVar2;
  FText *pFVar3;
  FPolygroupSet *this_00;
  FPolygroupSet *pFVar4;
  FPolygroupLayer local_res8;
  FText local_88;
  TFunction<bool___cdecl(int,int)> local_78;
  FPolygroupsGenerator local_48;
  
  pFVar4 = (FPolygroupSet *)0x0;
  local_res8.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res8.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar2 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
  if (bVar2) {
    this_00 = ::operator_new(0x18);
    if (this_00 != (FPolygroupSet *)0x0) {
      FVar1.LayerIndex = local_res8.LayerIndex;
      FVar1.bIsDefaultLayer = local_res8.bIsDefaultLayer;
      FVar1._1_3_ = local_res8._1_3_;
      pFVar4 = UE::Geometry::FPolygroupSet::FPolygroupSet(this_00,param_1,FVar1);
    }
    ::operator_delete((void *)0x0,0x18);
    ::operator_delete((void *)0x0,0x18);
    UE::Geometry::FPolygroupsGenerator::FPolygroupsGenerator(&local_48,param_1);
    local_48.bApplyPostProcessing = false;
    local_48.bCopyToMesh = false;
    local_78._0_8_ = 0;
    local_78._40_8_ = 0;
    UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromConnectedTris(&local_48,&local_78);
    UE::Geometry::FPolygroupsGenerator::CopyPolygroupsToPolygroupSet(&local_48,pFVar4,param_1);
    if (local_48.PolygroupEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.PolygroupEdges.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_48.FoundPolygroups.AllocatorInstance.Data,local_48.FoundPolygroups.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_48.FoundPolygroups.AllocatorInstance.Data
        != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_48.FoundPolygroups.AllocatorInstance.Data);
    }
  }
  else {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_88,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ConvertUVIslandsToPolygroups_MissingGroups",
                        L"ConvertUVIslandsToPolygroups: Target Polygroup Layer does not exist");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar3);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
  ::operator_delete(pFVar4,0x18);
  return;
}

// operator() @ 14ce34720

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FPolygroupLayer FVar3;
  bool bVar4;
  int iVar5;
  FText *pFVar6;
  FPolygroupSet *this_00;
  FPolygroupSet *pFVar7;
  FPolygroupLayer local_res10;
  FText local_58;
  FPolygroupsGenerator local_48;
  
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    iVar1 = **(int **)this;
    iVar5 = (**(code **)(pFVar2->_padding_ + 0xa8))();
    if (iVar1 < iVar5) {
      pFVar7 = (FPolygroupSet *)0x0;
      local_res10.bIsDefaultLayer = (bool)**(undefined1 **)((longlong)this + 0x10);
      local_res10.LayerIndex = *(int *)(*(undefined1 **)((longlong)this + 0x10) + 4);
      bVar4 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res10,param_1);
      if (bVar4) {
        this_00 = ::operator_new(0x18);
        if (this_00 != (FPolygroupSet *)0x0) {
          FVar3.LayerIndex = local_res10.LayerIndex;
          FVar3.bIsDefaultLayer = local_res10.bIsDefaultLayer;
          FVar3._1_3_ = local_res10._1_3_;
          pFVar7 = UE::Geometry::FPolygroupSet::FPolygroupSet(this_00,param_1,FVar3);
        }
        ::operator_delete((void *)0x0,0x18);
        ::operator_delete((void *)0x0,0x18);
        UE::Geometry::FPolygroupsGenerator::FPolygroupsGenerator(&local_48,param_1);
        local_48.bApplyPostProcessing = false;
        local_48.bCopyToMesh = false;
        UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromUVIslands(&local_48,**(int **)this);
        UE::Geometry::FPolygroupsGenerator::CopyPolygroupsToPolygroupSet(&local_48,pFVar7,param_1);
        if (local_48.PolygroupEdges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.PolygroupEdges.AllocatorInstance.Data);
        }
        DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)
                   local_48.FoundPolygroups.AllocatorInstance.Data,local_48.FoundPolygroups.ArrayNum
                  );
        if ((TArray<int,TSizedDefaultAllocator<32>_> *)
            local_48.FoundPolygroups.AllocatorInstance.Data !=
            (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          FMemory::Free(local_48.FoundPolygroups.AllocatorInstance.Data);
        }
      }
      else {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                            L"ConvertUVIslandsToPolygroups_MissingGroups",
                            L"ConvertUVIslandsToPolygroups: Target Polygroup Layer does not exist");
        UE::Geometry::AppendError
                  ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,
                   pFVar6);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      ::operator_delete(pFVar7,0x18);
      return;
    }
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                      L"ConvertUVIslandsToPolygroups_InvalidUVLayers",
                      L"ConvertUVIslandsToPolygroups: Requested UV layer does not exist");
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar6);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce34f30

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FPolygroupLayer FVar5;
  FPolygroupLayer FVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  FPolygroupSet *pFVar10;
  FPolygroupSet *this_00;
  FPolygroupSet *this_01;
  uint uVar11;
  int iVar12;
  FPolygroupSet *pFVar13;
  uint uVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  FPolygroupLayer local_res8;
  FPolygroupLayer local_res18 [2];
  FText local_38;
  
  bVar7 = (bool)**(char **)this;
  local_res8.bIsDefaultLayer = bVar7;
  local_res8.LayerIndex = *(int *)(*(char **)this + 4);
  bVar2 = (bool)**(char **)((longlong)this + 8);
  local_res18[0].bIsDefaultLayer = bVar2;
  local_res18[0].LayerIndex = *(int *)(*(char **)((longlong)this + 8) + 4);
  if (bVar7 == false) {
    if ((bVar2 != false) || (local_res8.LayerIndex != local_res18[0].LayerIndex)) {
LAB_14ce34fbd:
      bVar7 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
      if (bVar7) {
        bVar7 = UE::Geometry::FPolygroupLayer::CheckExists(local_res18,param_1);
        if (!bVar7) {
          pwVar16 = L"CopyPolygroupsLayer: To Polygroup Layer does not exist";
          pwVar15 = L"CopyPolygroupsLayer_MissingToGroups";
          goto LAB_14ce34f80;
        }
        pFVar10 = ::operator_new(0x18);
        pFVar13 = (FPolygroupSet *)0x0;
        this_00 = pFVar13;
        if (pFVar10 != (FPolygroupSet *)0x0) {
          FVar5.LayerIndex = local_res8.LayerIndex;
          FVar5.bIsDefaultLayer = local_res8.bIsDefaultLayer;
          FVar5._1_3_ = local_res8._1_3_;
          this_00 = UE::Geometry::FPolygroupSet::FPolygroupSet(pFVar10,param_1,FVar5);
        }
        this_01 = ::operator_new(0x18);
        pFVar10 = pFVar13;
        if (this_01 != (FPolygroupSet *)0x0) {
          FVar6.LayerIndex = local_res18[0].LayerIndex;
          FVar6.bIsDefaultLayer = local_res18[0].bIsDefaultLayer;
          FVar6._1_3_ = local_res18[0]._1_3_;
          pFVar10 = UE::Geometry::FPolygroupSet::FPolygroupSet(this_01,param_1,FVar6);
        }
        uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
                 (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
        if ((uVar14 != 0) &&
           (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
           0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
          pFVar13 = (FPolygroupSet *)&DAT_00000001;
          uVar11 = 1;
          if ((int)uVar14 < 2) goto joined_r0x00014ce350d7;
          do {
            lVar1 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
            if ((*(short *)(lVar1 + *(longlong *)(pFVar3 + ((ulonglong)pFVar13 >> 9) * 8)) != 0) &&
               (*(short *)(lVar1 + *(longlong *)(pFVar3 + ((ulonglong)pFVar13 >> 9) * 8)) != -1))
            break;
            uVar11 = (uint)pFVar13 + 1;
            pFVar13 = (FPolygroupSet *)(ulonglong)uVar11;
          } while ((int)uVar11 < (int)uVar14);
        }
        uVar11 = (uint)pFVar13;
joined_r0x00014ce350d7:
        do {
          if (uVar11 == uVar14) {
            ::operator_delete(pFVar10,0x18);
            ::operator_delete(this_00,0x18);
            return;
          }
          while( true ) {
            iVar12 = (int)pFVar13;
            iVar8 = UE::Geometry::FPolygroupSet::GetGroup(this_00,iVar12);
            UE::Geometry::FPolygroupSet::SetGroup(pFVar10,iVar12,iVar8,param_1);
            uVar11 = iVar12 + 1;
            pFVar13 = (FPolygroupSet *)(ulonglong)uVar11;
            if ((int)uVar14 <= (int)uVar11) break;
            pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
            while( true ) {
              lVar1 = ((ulonglong)pFVar13 >> 9) * 8;
              lVar4 = (ulonglong)((uint)pFVar13 & 0x1ff) * 2;
              if ((*(short *)(lVar4 + *(longlong *)(pFVar3 + lVar1)) != 0) &&
                 (*(short *)(lVar4 + *(longlong *)(pFVar3 + lVar1)) != -1)) break;
              uVar11 = (uint)pFVar13 + 1;
              pFVar13 = (FPolygroupSet *)(ulonglong)uVar11;
              if ((int)uVar14 <= (int)uVar11) goto joined_r0x00014ce350d7;
            }
          }
        } while( true );
      }
      pwVar16 = L"CopyPolygroupsLayer: From Polygroup Layer does not exist";
      pwVar15 = L"CopyPolygroupsLayer_MissingFromGroups";
      goto LAB_14ce34f80;
    }
  }
  else if (bVar2 == false) goto LAB_14ce34fbd;
  pwVar16 = L"CopyPolygroupsLayer: tried to copy Polygroup Layer to itself";
  pwVar15 = L"CopyPolygroupsLayer_SameGroups";
LAB_14ce34f80:
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",pwVar15,pwVar16);
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,pFVar9);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce35f50

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::FindExtendedPolygroupLayerByName'::__l2::<lambda_1>
::operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  int iVar2;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar3;
  FDynamicMeshAttributeSet *this_00;
  int iVar4;
  
  if ((param_1->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
    for (iVar4 = 0; iVar2 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 200))(),
        iVar4 < iVar2; iVar4 = iVar4 + 1) {
      pFVar1 = (param_1->AttributeSet).Ptr;
      this_00 = (FDynamicMeshAttributeSet *)0x0;
      if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
        this_00 = pFVar1;
      }
      pTVar3 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer(this_00,iVar4);
      if (*(longlong *)&pTVar3->field_0x8 == *(longlong *)((longlong)this + 0x10)) {
        **(undefined1 **)this = 0;
        **(undefined1 **)((longlong)this + 8) = 0;
        *(int *)(*(longlong *)((longlong)this + 8) + 4) = iVar4;
        return;
      }
    }
  }
  return;
}

// operator() @ 14ce36470

int __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,FPolygroupSet *param_2)

{
  int *piVar1;
  longlong lVar2;
  FDynamicMesh3 *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 local_38 [4];
  
  uVar9 = 0;
  iVar8 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (0 < iVar8) {
    uVar11 = 0;
    do {
      if ((int)uVar9 <
          (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed)) {
        uVar10 = (ulonglong)(uVar11 & 0x1ff);
        lVar2 = (ulonglong)(uVar9 >> 9) * 8;
        if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                           AllocatorInstance.Data + lVar2) + uVar10 * 2) - 1U))
        goto LAB_14ce3656b;
        if (param_2->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
          pFVar3 = param_2->Mesh;
          if ((pFVar3->TriangleGroups).bIsSet == false) goto LAB_14ce3656b;
          if (((int)uVar9 <
               (int)((pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar2) + uVar10 * 2) - 1U) < 0xfffe)) {
            local_38[0] = *(undefined4 *)
                           (*(longlong *)
                             ((pFVar3->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                             lVar2) + uVar10 * 4);
          }
          else {
            local_38[0] = 0;
          }
        }
        else {
          local_38[0] = *(undefined4 *)
                         (*(longlong *)(*(longlong *)&param_2->PolygroupAttrib->field_0x20 + lVar2)
                         + uVar10 * 4);
        }
      }
      else {
LAB_14ce3656b:
        local_38[0] = 0xffffffff;
      }
      pFVar4 = *(ForAnyElementType **)this;
      if (((pFVar4->Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar7 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar7 + 1;
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(pFVar4->Data + (longlong)iVar7 * 4) = local_38[0];
    } while ((int)uVar9 < iVar8);
  }
  return 0;
}

// operator() @ 14ce3a1b0

bool __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupBoundingBox'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TFunctionRef<int___cdecl(int)> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  uint local_res8 [2];
  
  uVar17 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar16 = 0;
  if ((uVar17 != 0) &&
     (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
     0xfffd < (ushort)(**(short **)pFVar6 - 1U))) {
    uVar15 = 1;
    uVar16 = 1;
    if (1 < (int)uVar17) {
      do {
        lVar7 = *(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8);
        if ((*(short *)(lVar7 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
           (uVar16 = uVar15, *(short *)(lVar7 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
        uVar15 = uVar15 + 1;
        uVar16 = uVar15;
      } while ((int)uVar15 < (int)uVar17);
    }
  }
joined_r0x00014ce3a248:
  do {
    if (uVar16 == uVar17) {
      return *(char *)(*(longlong *)((longlong)this + 8) + 0x30) != '\0';
    }
    while( true ) {
      local_res8[0] = uVar16;
      iVar11 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res8);
      if (*(int *)this == iVar11) {
        uVar12 = (ulonglong)(uVar16 & 0x1ff);
        lVar7 = *(longlong *)
                 ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8)
        ;
        pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
        uVar15 = *(uint *)(lVar7 + uVar12 * 0xc);
        uVar13 = (ulonglong)(uVar15 & 0x1ff);
        uVar5 = *(uint *)(lVar7 + 4 + uVar12 * 0xc);
        lVar8 = *(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8);
        uVar14 = (ulonglong)(uVar5 & 0x1ff);
        dVar27 = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
        auVar2 = *(undefined1 (*) [16])(lVar8 + uVar13 * 0x18);
        uVar19 = auVar2._8_4_;
        uVar23 = auVar2._12_4_;
        dVar28 = *(double *)
                  (*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + 0x10 + uVar14 * 0x18);
        auVar3 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8) + uVar14 * 0x18);
        uVar20 = auVar3._8_4_;
        uVar24 = auVar3._12_4_;
        uVar15 = *(uint *)(lVar7 + 8 + uVar12 * 0xc);
        uVar12 = (ulonglong)(uVar15 & 0x1ff);
        dVar29 = *(double *)
                  (*(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8) + 0x10 + uVar12 * 0x18);
        auVar4 = *(undefined1 (*) [16])
                  (*(longlong *)(pFVar6 + (ulonglong)(uVar15 >> 9) * 8) + uVar12 * 0x18);
        uVar21 = auVar4._8_4_;
        uVar25 = auVar4._12_4_;
        pdVar9 = *(double **)((longlong)this + 8);
        if (*(char *)(pdVar9 + 6) == '\0') {
          *(undefined1 (*) [16])(pdVar9 + 3) = auVar2;
          dVar27 = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
          pdVar9[5] = dVar27;
          *(undefined1 *)(pdVar9 + 6) = 1;
          *pdVar9 = pdVar9[3];
          pdVar9[1] = pdVar9[4];
          pdVar9[2] = dVar27;
        }
        else {
          dVar26 = *pdVar9;
          uVar18 = auVar2._0_4_;
          uVar22 = auVar2._4_4_;
          if (dVar26 <= auVar2._0_8_) {
            uVar18 = SUB84(dVar26,0);
            uVar22 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          dVar30 = auVar2._8_8_;
          dVar26 = pdVar9[2];
          if (dVar27 <= pdVar9[2]) {
            dVar26 = dVar27;
          }
          if (dVar27 <= pdVar9[5]) {
            dVar27 = pdVar9[5];
          }
          *pdVar9 = (double)CONCAT44(uVar22,uVar18);
          dVar1 = pdVar9[1];
          if (dVar1 <= dVar30) {
            uVar19 = SUB84(dVar1,0);
            uVar23 = (undefined4)((ulonglong)dVar1 >> 0x20);
          }
          if (dVar30 <= pdVar9[4]) {
            dVar30 = pdVar9[4];
          }
          pdVar9[2] = dVar26;
          pdVar9[5] = dVar27;
          pdVar9[1] = (double)CONCAT44(uVar23,uVar19);
          dVar27 = pdVar9[3];
          uVar19 = SUB84(dVar27,0);
          uVar23 = (int)((ulonglong)dVar27 >> 0x20);
          if (dVar27 <= auVar2._0_8_) {
            uVar19 = auVar2._0_4_;
            uVar23 = auVar2._4_4_;
          }
          pdVar9[4] = dVar30;
          pdVar9[3] = (double)CONCAT44(uVar23,uVar19);
        }
        pauVar10 = *(undefined1 (**) [16])((longlong)this + 8);
        if (pauVar10[3][0] == '\0') {
          *(undefined1 (*) [16])(pauVar10[1] + 8) = auVar3;
          pauVar10[3][0] = 1;
          *pauVar10 = auVar3;
          *(double *)(pauVar10[2] + 8) = dVar28;
          *(double *)pauVar10[1] = dVar28;
        }
        else {
          dVar27 = *(double *)*pauVar10;
          dVar26 = auVar3._8_8_;
          uVar19 = SUB84(dVar27,0);
          uVar23 = (int)((ulonglong)dVar27 >> 0x20);
          if (auVar3._0_8_ <= dVar27) {
            uVar19 = auVar3._0_4_;
            uVar23 = auVar3._4_4_;
          }
          dVar27 = *(double *)pauVar10[1];
          if (dVar28 <= *(double *)pauVar10[1]) {
            dVar27 = dVar28;
          }
          if (dVar28 <= *(double *)(pauVar10[2] + 8)) {
            dVar28 = *(double *)(pauVar10[2] + 8);
          }
          *(ulonglong *)*pauVar10 = CONCAT44(uVar23,uVar19);
          dVar30 = *(double *)(*pauVar10 + 8);
          if (dVar30 <= dVar26) {
            uVar20 = SUB84(dVar30,0);
            uVar24 = (undefined4)((ulonglong)dVar30 >> 0x20);
          }
          if (dVar26 <= *(double *)pauVar10[2]) {
            dVar26 = *(double *)pauVar10[2];
          }
          *(double *)pauVar10[1] = dVar27;
          *(double *)(pauVar10[2] + 8) = dVar28;
          *(ulonglong *)(*pauVar10 + 8) = CONCAT44(uVar24,uVar20);
          dVar27 = *(double *)(pauVar10[1] + 8);
          uVar19 = SUB84(dVar27,0);
          uVar20 = (int)((ulonglong)dVar27 >> 0x20);
          if (dVar27 <= auVar3._0_8_) {
            uVar19 = auVar3._0_4_;
            uVar20 = auVar3._4_4_;
          }
          *(double *)pauVar10[2] = dVar26;
          *(ulonglong *)(pauVar10[1] + 8) = CONCAT44(uVar20,uVar19);
        }
        pauVar10 = *(undefined1 (**) [16])((longlong)this + 8);
        if (pauVar10[3][0] == '\0') {
          *(undefined1 (*) [16])(pauVar10[1] + 8) = auVar4;
          pauVar10[3][0] = 1;
          *pauVar10 = auVar4;
          *(double *)(pauVar10[2] + 8) = dVar29;
          *(double *)pauVar10[1] = dVar29;
        }
        else {
          dVar27 = *(double *)*pauVar10;
          dVar28 = auVar4._8_8_;
          uVar19 = SUB84(dVar27,0);
          uVar20 = (int)((ulonglong)dVar27 >> 0x20);
          if (auVar4._0_8_ <= dVar27) {
            uVar19 = auVar4._0_4_;
            uVar20 = auVar4._4_4_;
          }
          dVar27 = *(double *)pauVar10[1];
          if (dVar29 <= *(double *)pauVar10[1]) {
            dVar27 = dVar29;
          }
          if (dVar29 <= *(double *)(pauVar10[2] + 8)) {
            dVar29 = *(double *)(pauVar10[2] + 8);
          }
          *(ulonglong *)*pauVar10 = CONCAT44(uVar20,uVar19);
          dVar26 = *(double *)(*pauVar10 + 8);
          if (dVar26 <= dVar28) {
            uVar21 = SUB84(dVar26,0);
            uVar25 = (undefined4)((ulonglong)dVar26 >> 0x20);
          }
          if (dVar28 <= *(double *)pauVar10[2]) {
            dVar28 = *(double *)pauVar10[2];
          }
          *(double *)pauVar10[1] = dVar27;
          *(double *)(pauVar10[2] + 8) = dVar29;
          *(ulonglong *)(*pauVar10 + 8) = CONCAT44(uVar25,uVar21);
          dVar27 = *(double *)(pauVar10[1] + 8);
          uVar19 = SUB84(dVar27,0);
          uVar20 = (int)((ulonglong)dVar27 >> 0x20);
          if (dVar27 <= auVar4._0_8_) {
            uVar19 = auVar4._0_4_;
            uVar20 = auVar4._4_4_;
          }
          *(double *)pauVar10[2] = dVar28;
          *(ulonglong *)(pauVar10[1] + 8) = CONCAT44(uVar20,uVar19);
        }
      }
      uVar16 = uVar16 + 1;
      if ((int)uVar17 <= (int)uVar16) break;
      pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar16 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar6 + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
        uVar16 = uVar16 + 1;
        if ((int)uVar17 <= (int)uVar16) goto joined_r0x00014ce3a248;
      }
    }
  } while( true );
}

// operator() @ 14ce3a530

bool __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVBoundingBox'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TFunctionRef<int___cdecl(int)> *param_2)

{
  FDynamicMeshAttributeSet *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint local_res10 [2];
  undefined8 local_38;
  undefined4 local_30;
  
  this_00 = (param_1->AttributeSet).Ptr;
  if ((this_00 == (FDynamicMeshAttributeSet *)0x0) ||
     (pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         (this_00,*(int *)((longlong)this + 4)),
     pTVar6 == (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
    return false;
  }
  uVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar8 = 0;
  if ((uVar9 != 0) &&
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar8 = 0,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar7 = 1;
    uVar8 = 1;
    if (1 < (int)uVar9) {
      do {
        lVar2 = *(longlong *)(pFVar1 + (ulonglong)(uVar7 >> 9) * 8);
        if ((*(short *)(lVar2 + (ulonglong)(uVar7 & 0x1ff) * 2) != 0) &&
           (uVar8 = uVar7, *(short *)(lVar2 + (ulonglong)(uVar7 & 0x1ff) * 2) != -1)) break;
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
      } while ((int)uVar7 < (int)uVar9);
    }
  }
joined_r0x00014ce3a5e8:
  do {
    if (uVar8 == uVar9) {
      return (bool)*(undefined1 *)(*(longlong *)((longlong)this + 8) + 0x20);
    }
    while( true ) {
      local_res10[0] = uVar8;
      iVar5 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
      if (*(int *)this == iVar5) {
        lVar2 = *(longlong *)&pTVar6->field_0x78;
        uVar7 = uVar8 * 3;
        local_38 = 0xffffffffffffffff;
        local_30 = 0xffffffff;
        iVar5 = *(int *)(*(longlong *)(lVar2 + (ulonglong)(uVar7 >> 9) * 8) +
                        (ulonglong)(uVar7 & 0x1ff) * 4);
        if (-1 < iVar5) {
          local_38 = CONCAT44(*(undefined4 *)
                               (*(longlong *)(lVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                               (ulonglong)(uVar7 + 1 & 0x1ff) * 4),iVar5);
          lVar10 = 0;
          local_30 = *(undefined4 *)
                      (*(longlong *)(lVar2 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                      (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
          do {
            uVar7 = *(uint *)((longlong)&local_38 + lVar10 * 4);
            dVar12 = (double)*(float *)(*(longlong *)
                                         (*(longlong *)&pTVar6->field_0x48 +
                                         (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
            pdVar3 = *(double **)((longlong)this + 8);
            dVar13 = (double)*(float *)(*(longlong *)
                                         (*(longlong *)&pTVar6->field_0x48 +
                                         (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                                       (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
            if (*(char *)(pdVar3 + 4) == '\0') {
              pdVar3[2] = dVar12;
              pdVar3[3] = dVar13;
              *(undefined1 *)(pdVar3 + 4) = 1;
              *pdVar3 = pdVar3[2];
              pdVar3[1] = pdVar3[3];
            }
            else {
              dVar4 = dVar12;
              if (*pdVar3 <= dVar12) {
                dVar4 = *pdVar3;
              }
              dVar11 = dVar13;
              if (pdVar3[1] <= dVar13) {
                dVar11 = pdVar3[1];
              }
              *pdVar3 = dVar4;
              pdVar3[1] = dVar11;
              dVar4 = pdVar3[2];
              if (pdVar3[2] <= dVar12) {
                dVar4 = dVar12;
              }
              dVar12 = pdVar3[3];
              if (pdVar3[3] <= dVar13) {
                dVar12 = dVar13;
              }
              pdVar3[2] = dVar4;
              pdVar3[3] = dVar12;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < 3);
        }
      }
      uVar8 = uVar8 + 1;
      if ((int)uVar9 <= (int)uVar8) break;
      pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar1 + (ulonglong)(uVar8 >> 9) * 8) +
                       (ulonglong)(uVar8 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar1 + (ulonglong)(uVar8 >> 9) * 8) +
                      (ulonglong)(uVar8 & 0x1ff) * 2) != -1)) break;
        uVar8 = uVar8 + 1;
        if ((int)uVar9 <= (int)uVar8) goto joined_r0x00014ce3a5e8;
      }
    }
  } while( true );
}

// operator() @ 14ce3a7c0

bool __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVCentroid'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,TFunctionRef<int___cdecl(int)> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  FDynamicMeshAttributeSet *this_00;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  int iVar15;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  uint local_res10 [2];
  double local_d8;
  double dStack_d0;
  
  this_00 = (param_1->AttributeSet).Ptr;
  if ((this_00 != (FDynamicMeshAttributeSet *)0x0) &&
     (pTVar16 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                          (this_00,*(int *)((longlong)this + 4)), dVar14 = __real_3fd5555555555555,
     fVar13 = __real_3f000000, uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff,
     pTVar16 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0)) {
    dVar21 = 0.0;
    uVar19 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    uVar18 = 0;
    if ((uVar19 != 0) &&
       (pFVar9 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
       0xfffd < (ushort)(**(short **)pFVar9 - 1U))) {
      uVar17 = 1;
      uVar18 = 1;
      if (1 < (int)uVar19) {
        do {
          lVar10 = *(longlong *)(pFVar9 + (ulonglong)(uVar17 >> 9) * 8);
          if ((*(short *)(lVar10 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
             (uVar18 = uVar17, *(short *)(lVar10 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
          uVar17 = uVar17 + 1;
          uVar18 = uVar17;
        } while ((int)uVar17 < (int)uVar19);
      }
    }
    if (uVar18 != uVar19) {
      dStack_d0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._8_8_;
      local_d8 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._0_8_;
LAB_14ce3a900:
      do {
        local_res10[0] = uVar18;
        iVar15 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_res10);
        if (*(int *)this == iVar15) {
          lVar10 = *(longlong *)&pTVar16->field_0x78;
          uVar8 = uVar18 * 3;
          uVar17 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar8 >> 9) * 8) +
                            (ulonglong)(uVar8 & 0x1ff) * 4);
          if (-1 < (int)uVar17) {
            uVar7 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                             (ulonglong)(uVar8 + 1 & 0x1ff) * 4);
            uVar8 = *(uint *)(*(longlong *)(lVar10 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                             (ulonglong)(uVar8 + 2 & 0x1ff) * 4);
            lVar10 = *(longlong *)&pTVar16->field_0x48;
            fVar1 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar17 * 2 & 0x1ff) * 4);
            fVar2 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar17 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar17 * 2 + 1 & 0x1ff) * 4);
            fVar3 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar7 * 2 & 0x1ff) * 4);
            fVar4 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar7 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar7 * 2 + 1 & 0x1ff) * 4);
            fVar5 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar8 * 2 & 0x1ff) * 4);
            fVar6 = *(float *)(*(longlong *)(lVar10 + (ulonglong)((uVar8 & 0x7fffffff) >> 8) * 8) +
                              (ulonglong)(uVar8 * 2 + 1 & 0x1ff) * 4);
            dVar20 = (double)((float)((uint)((fVar6 - fVar2) * (fVar3 - fVar1) -
                                            (fVar4 - fVar2) * (fVar5 - fVar1)) & uVar12) * fVar13);
            local_d8 = local_d8 + (double)(fVar3 + fVar1 + fVar5) * dVar14 * dVar20;
            dStack_d0 = dStack_d0 + (double)(fVar4 + fVar2 + fVar6) * dVar14 * dVar20;
            dVar21 = dVar21 + dVar20;
          }
        }
        uVar18 = uVar18 + 1;
        if ((int)uVar18 < (int)uVar19) {
          pFVar9 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          do {
            if ((*(short *)(*(longlong *)(pFVar9 + (ulonglong)(uVar18 >> 9) * 8) +
                           (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)(pFVar9 + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) goto LAB_14ce3a900;
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)uVar19);
        }
      } while (uVar18 != uVar19);
      if (0.0 < dVar21) {
        pdVar11 = *(double **)((longlong)this + 8);
        dVar21 = __real_3ff0000000000000 / dVar21;
        *pdVar11 = dVar21 * local_d8;
        pdVar11[1] = dVar21 * dStack_d0;
        return true;
      }
    }
  }
  return false;
}

// operator() @ 14ce3ab80

int __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,FPolygroupSet *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FDynamicMesh3 *pFVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int local_res10 [2];
  int local_38 [4];
  
  uVar13 = 0;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar14 != 0) &&
     (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar13 = 1;
    uVar12 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014ce3ac27;
    do {
      lVar6 = (ulonglong)((uint)uVar13 & 0x1ff) * 2;
      if ((*(short *)(lVar6 + *(longlong *)(pFVar2 + (uVar13 >> 9) * 8)) != 0) &&
         (*(short *)(lVar6 + *(longlong *)(pFVar2 + (uVar13 >> 9) * 8)) != -1)) break;
      uVar12 = (uint)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)uVar14);
  }
  uVar12 = (uint)uVar13;
joined_r0x00014ce3ac27:
  if (uVar12 == uVar14) {
    return 0;
  }
  do {
    uVar12 = (uint)uVar13;
    if (param_2->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pFVar3 = param_2->Mesh;
      if ((pFVar3->TriangleGroups).bIsSet == false) {
        uVar13 = 0xffffffff;
      }
      else {
        if ((-1 < (int)uVar12) &&
           ((int)uVar12 <
            (int)((pFVar3->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar3->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar6 = (uVar13 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar3->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar6) + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)
          {
            uVar13 = (ulonglong)
                     *(uint *)(*(longlong *)
                                ((pFVar3->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                lVar6) + (ulonglong)(uVar12 & 0x1ff) * 4);
            goto LAB_14ce3acca;
          }
        }
        uVar13 = 0;
      }
    }
    else {
      uVar13 = (ulonglong)
               *(uint *)(*(longlong *)
                          (*(longlong *)&param_2->PolygroupAttrib->field_0x20 + (uVar13 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
    }
LAB_14ce3acca:
    this_00 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this;
    local_38[0] = (int)uVar13;
    if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
      FVar4 = (this_00->Hash).SecondaryData;
      FVar11 = (ForElementType<FSetElementId>)&this_00->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar11 = FVar4;
      }
      iVar10 = *(int *)((longlong)FVar11 + (this_00->HashSize - 1 & uVar13) * 4);
      if (iVar10 != -1) {
        do {
          if (*(int *)(*(longlong *)&this_00->Elements + (longlong)iVar10 * 0xc) == local_38[0])
          goto LAB_14ce3addc;
          iVar10 = *(int *)(*(longlong *)&this_00->Elements + 4 + (longlong)iVar10 * 0xc);
        } while (iVar10 != -1);
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (this_00,local_res10,(bool *)local_38);
    pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
    if (((pFVar5->Data <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      iVar10 = (*pcVar7)();
      return iVar10;
    }
    iVar10 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar10 + 1;
    *(int *)(pFVar5->Data + (longlong)iVar10 * 4) = local_38[0];
LAB_14ce3addc:
    uVar12 = uVar12 + 1;
    uVar13 = (ulonglong)uVar12;
    if ((int)uVar14 <= (int)uVar12) goto joined_r0x00014ce3ac27;
    while( true ) {
      lVar8 = (ulonglong)((uint)uVar13 & 0x1ff) * 2;
      lVar6 = *(longlong *)
               ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
               (uVar13 >> 9) * 8);
      if ((*(short *)(lVar8 + lVar6) != 0) && (*(short *)(lVar8 + lVar6) != -1)) break;
      uVar12 = (uint)uVar13 + 1;
      uVar13 = (ulonglong)uVar12;
      if ((int)uVar14 <= (int)uVar12) goto joined_r0x00014ce3ac27;
    }
  } while( true );
}

// operator() @ 14ce3b9a0

int __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1,FPolygroupSet *param_2)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FDynamicMesh3 *pFVar4;
  ForAnyElementType *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint local_38 [4];
  
  uVar11 = 0;
  uVar12 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar12 != 0) &&
     (pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar3 - 1U))) {
    uVar11 = 1;
    uVar10 = 1;
    if ((int)uVar12 < 2) goto joined_r0x00014ce3ba37;
    do {
      lVar2 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar2 + *(longlong *)(pFVar3 + (uVar11 >> 9) * 8)) != 0) &&
         (*(short *)(lVar2 + *(longlong *)(pFVar3 + (uVar11 >> 9) * 8)) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
    } while ((int)uVar10 < (int)uVar12);
  }
  uVar10 = (uint)uVar11;
joined_r0x00014ce3ba37:
  if (uVar10 == uVar12) {
    return 0;
  }
  do {
    uVar10 = (uint)uVar11;
    if (param_2->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pFVar4 = param_2->Mesh;
      if ((pFVar4->TriangleGroups).bIsSet == false) {
        iVar9 = -1;
      }
      else {
        if ((-1 < (int)uVar10) &&
           ((int)uVar10 <
            (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar2 = (uVar11 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar2) + (ulonglong)(uVar10 & 0x1ff) * 2) - 1U) < 0xfffe)
          {
            iVar9 = *(int *)(*(longlong *)
                              ((pFVar4->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                              lVar2) + (ulonglong)(uVar10 & 0x1ff) * 4);
            goto LAB_14ce3bae6;
          }
        }
        iVar9 = 0;
      }
    }
    else {
      iVar9 = *(int *)(*(longlong *)
                        (*(longlong *)&param_2->PolygroupAttrib->field_0x20 + (uVar11 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
    }
LAB_14ce3bae6:
    if (iVar9 == **(int **)this) {
      pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
      local_38[0] = uVar10;
      if (((pFVar5->Data <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      iVar9 = *(int *)&pFVar5[1].Data;
      piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar5,piVar1);
      }
      *(int *)&pFVar5[1].Data = iVar9 + 1;
      *(uint *)(pFVar5->Data + (longlong)iVar9 * 4) = local_38[0];
    }
    uVar10 = uVar10 + 1;
    uVar11 = (ulonglong)uVar10;
    if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014ce3ba37;
    pFVar3 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    while( true ) {
      lVar2 = (uVar11 >> 9) * 8;
      lVar7 = (ulonglong)((uint)uVar11 & 0x1ff) * 2;
      if ((*(short *)(lVar7 + *(longlong *)(pFVar3 + lVar2)) != 0) &&
         (*(short *)(lVar7 + *(longlong *)(pFVar3 + lVar2)) != -1)) break;
      uVar10 = (uint)uVar11 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)uVar12 <= (int)uVar10) goto joined_r0x00014ce3ba37;
    }
  } while( true );
}

// operator() @ 14ce45e20

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup'::__l5::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  FPolygroupLayer FVar5;
  bool bVar6;
  int iVar7;
  EMeshResult EVar8;
  FText *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  FDynamicMesh3 *pFVar15;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar16;
  undefined1 local_res8 [8];
  FPolygroupLayer local_res18 [2];
  uint local_78 [2];
  ForAnyElementType local_70;
  undefined8 local_68;
  FText local_60;
  FPolygroupSet local_50;
  
  local_res18[0].bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res18[0].LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar6 = UE::Geometry::FPolygroupLayer::CheckExists(local_res18,param_1);
  if (!bVar6) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"DeleteTrianglesInPolygroup_MissingGroups",
                        L"DeleteTrianglesInPolygroup: Specified Polygroup Layer does not exist");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar9);
    if (local_60.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    return;
  }
  FVar5.LayerIndex = local_res18[0].LayerIndex;
  FVar5.bIsDefaultLayer = local_res18[0].bIsDefaultLayer;
  FVar5._1_3_ = local_res18[0]._1_3_;
  UE::Geometry::FPolygroupSet::FPolygroupSet(&local_50,param_1,FVar5);
  iVar10 = 0;
  FVar14.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  uVar12 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  uVar13 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  pFVar15 = local_50.Mesh;
  pTVar16 = local_50.PolygroupAttrib;
  if ((uVar13 != 0) &&
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    uVar12 = 1;
    uVar11 = 1;
    if ((int)uVar13 < 2) goto joined_r0x00014ce45f62;
    do {
      lVar4 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
      lVar2 = *(longlong *)(pFVar1 + (uVar12 >> 9) * 8);
      if ((*(short *)(lVar4 + lVar2) != 0) && (*(short *)(lVar4 + lVar2) != -1)) break;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar13);
  }
  uVar11 = (uint)uVar12;
joined_r0x00014ce45f62:
  if (uVar11 == uVar13) {
    pFVar1 = FVar14.Data + (longlong)iVar10 * 4;
    iVar7 = iVar10;
    while( true ) {
      if (iVar7 != iVar10) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      EVar8 = UE::Geometry::FDynamicMesh3::RemoveTriangle(param_1,*(uint *)FVar14.Data,true,false);
      if (EVar8 == Ok) {
        **(int **)((longlong)this + 0x18) = **(int **)((longlong)this + 0x18) + 1;
      }
      FVar14.Data = FVar14.Data + 4;
      iVar7 = (int)local_68;
    }
    if (local_70.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data);
    }
    return;
  }
  do {
    uVar11 = (uint)uVar12;
    if (pTVar16 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      if ((pFVar15->TriangleGroups).bIsSet == false) {
        iVar7 = -1;
      }
      else {
        if ((-1 < (int)uVar11) &&
           ((int)uVar11 <
            (int)((pFVar15->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar15->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar2 = (uVar12 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar15->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar2) + (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe)
          {
            iVar7 = *(int *)(*(longlong *)
                              ((pFVar15->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                              lVar2) + (ulonglong)(uVar11 & 0x1ff) * 4);
            goto LAB_14ce46013;
          }
        }
        iVar7 = 0;
      }
    }
    else {
      iVar7 = *(int *)(*(longlong *)(*(longlong *)&pTVar16->field_0x20 + (uVar12 >> 9) * 8) +
                      (ulonglong)(uVar11 & 0x1ff) * 4);
    }
LAB_14ce46013:
    local_78[0] = uVar11;
    if (iVar7 == **(int **)((longlong)this + 0x10)) {
      iVar7 = iVar10;
      if ((FVar14.Data <= (FScriptContainerElement *)local_78) &&
         ((FScriptContainerElement *)local_78 < FVar14.Data + (longlong)local_68._4_4_ * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar14.Data = local_70.Data;
        iVar7 = (int)local_68;
      }
      if (iVar7 == local_68._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_70,(int *)((longlong)&local_68 + 4));
        FVar14.Data = local_70.Data;
      }
      iVar10 = iVar7 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      *(uint *)(FVar14.Data + (longlong)iVar7 * 4) = local_78[0];
      FVar14.Data = local_70.Data;
      pFVar15 = local_50.Mesh;
      pTVar16 = local_50.PolygroupAttrib;
    }
    uVar11 = uVar11 + 1;
    uVar12 = (ulonglong)uVar11;
    if ((int)uVar13 <= (int)uVar11) goto joined_r0x00014ce45f62;
    pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
    while( true ) {
      lVar2 = (uVar12 >> 9) * 8;
      lVar4 = (ulonglong)((uint)uVar12 & 0x1ff) * 2;
      if ((*(short *)(lVar4 + *(longlong *)(pFVar1 + lVar2)) != 0) &&
         (*(short *)(lVar4 + *(longlong *)(pFVar1 + lVar2)) != -1)) break;
      uVar11 = (uint)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      if ((int)uVar13 <= (int)uVar11) goto joined_r0x00014ce45f62;
    }
  } while( true );
}

// operator() @ 14ce47f70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection'::__l5::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FPolygroupLayer FVar1;
  bool bVar2;
  FPolygroupLayer local_res8;
  code *local_48;
  undefined1 **local_40;
  FPolygroupSet local_38;
  FPolygroupSet *local_20;
  undefined8 local_18;
  FDynamicMesh3 *local_10;
  
  local_res8.bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_res8.LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar2 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res8,param_1);
  if (bVar2) {
    FVar1.LayerIndex = local_res8.LayerIndex;
    FVar1.bIsDefaultLayer = local_res8.bIsDefaultLayer;
    FVar1._1_3_ = local_res8._1_3_;
    UE::Geometry::FPolygroupSet::FPolygroupSet(&local_38,param_1,FVar1);
    if (**(char **)((longlong)this + 8) != '\0') {
      **(int **)((longlong)this + 0x10) = local_38.MaxGroupID;
      **(undefined4 **)((longlong)this + 0x18) = **(undefined4 **)((longlong)this + 0x10);
      local_38.MaxGroupID = local_38.MaxGroupID + 1;
    }
    local_20 = &local_38;
    local_18 = *(undefined8 *)((longlong)this + 0x10);
    local_40 = (undefined1 **)&local_20;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
               ::Call;
    local_10 = param_1;
    FGeometryScriptMeshSelection::ProcessByTriangleID
              (*(FGeometryScriptMeshSelection **)((longlong)this + 0x20),param_1,
               (TFunctionRef<void___cdecl(int)> *)&local_48,false);
  }
  else if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    return;
  }
  return;
}

// AddNamedPolygroupLayer @ 14ce4f570

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::AddNamedPolygroupLayer
          (UDynamicMesh *param_1,FName param_2,FGeometryScriptGroupLayer *param_3,bool *param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  FGeometryScriptGroupLayer *local_28;
  bool *local_20;
  FName local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"AddNamedPolygroupLayer_InvalidInput",
                        L"AddNamedPolygroupLayer: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::AddNamedPolygroupLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_3;
  local_20 = param_4;
  local_18 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ClearPolygroups @ 14ce60260

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptGroupLayer local_res10;
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  FGeometryScriptGroupLayer *local_28;
  UGeometryScriptDebug **local_20;
  int *local_18;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ClearPolygroups_InvalidInput",L"ClearPolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &local_res10;
  local_20 = &local_res20;
  local_18 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ComputePolygroupsFromAngleThreshold @ 14ce617f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,float param_3,int param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptGroupLayer local_res10;
  float local_res18 [2];
  int local_res20 [2];
  undefined1 local_38 [16];
  FGeometryScriptGroupLayer *local_28;
  UGeometryScriptDebug **local_20;
  int *local_18;
  float *local_10;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ComputePolygroupsFromAngleThreshold_InvalidInput",
                        L"ComputePolygroupsFromAngleThreshold: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &local_res10;
  local_20 = &param_5;
  local_18 = local_res20;
  local_10 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ComputePolygroupsFromPolygonDetection @ 14ce618d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,bool param_3,bool param_4,
          double param_5,double param_6,int param_7,UGeometryScriptDebug *param_8)

{
  FText *pFVar1;
  FGeometryScriptGroupLayer local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58 [16];
  FGeometryScriptGroupLayer *local_48;
  UGeometryScriptDebug **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  double *local_28;
  double *local_20;
  int *local_18;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_58,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ComputePolygroupsFromPolygonDetection_InvalidInput",
                        L"ComputePolygroupsFromPolygonDetection: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
    if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_48 = &local_res10;
  local_40 = &param_8;
  local_38 = local_res18;
  local_30 = local_res20;
  local_28 = &param_5;
  local_20 = &param_6;
  local_18 = &param_7;
  local_58._8_8_ = &local_48;
  local_58._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_58,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ConvertComponentsToPolygroups @ 14ce65b10

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptGroupLayer local_res10;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptGroupLayer *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ConvertComponentsToPolygroups_InvalidInput",
                        L"ConvertComponentsToPolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &local_res10;
  local_20 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ConvertUVIslandsToPolygroups @ 14ce67b40

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptGroupLayer local_res10;
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  int *local_28;
  UGeometryScriptDebug **local_20;
  FGeometryScriptGroupLayer *local_18;
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ConvertUVIslandsToPolygroups_InvalidInput",
                        L"ConvertUVIslandsToPolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res18;
  local_20 = &local_res20;
  local_18 = &local_res10;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// CopyPolygroupsLayer @ 14ce67ed0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,FGeometryScriptGroupLayer param_3
          ,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptGroupLayer local_res10;
  FGeometryScriptGroupLayer local_res18;
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  FGeometryScriptGroupLayer *local_28;
  FGeometryScriptGroupLayer *local_20;
  UGeometryScriptDebug **local_18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"CopyPolygroupsLayer_InvalidInput",
                        L"CopyPolygroupsLayer: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &local_res10;
  local_20 = &local_res18;
  local_18 = &local_res20;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// DeleteTrianglesInPolygroup @ 14ce682f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,int *param_4,
          bool param_5,UGeometryScriptDebug *param_6)

{
  FGeometryScriptGroupLayer local_res10;
  int local_res18 [4];
  code *local_38;
  undefined8 **local_30;
  FGeometryScriptGroupLayer *local_28;
  UGeometryScriptDebug **local_20;
  int *local_18;
  int *local_10;
  
  *param_4 = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &local_res10;
    local_20 = &param_6;
    local_18 = local_res18;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10 = param_2;
    local_res18[0] = param_3;
    local_10 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_5);
  }
  return param_1;
}

// EnablePolygroups @ 14ce688b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"EnablePolygroups_InvalidInput",L"EnablePolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(param_2,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = local_res8;
  local_res8[0] = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// FindExtendedPolygroupLayerByName @ 14ce69f90

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::FindExtendedPolygroupLayerByName
          (UDynamicMesh *param_1,FName param_2,FGeometryScriptGroupLayer *param_3,
          EGeometryScriptSearchOutcomePins *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  undefined1 local_38 [16];
  EGeometryScriptSearchOutcomePins *local_28;
  FGeometryScriptGroupLayer *local_20;
  FName local_18;
  
  *param_4 = NotFound;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"FindExtendedPolygroupLayerByName_InvalidInput",
                        L"FindExtendedPolygroupLayerByName: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::FindExtendedPolygroupLayerByName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_28 = param_4;
  local_20 = param_3;
  local_18 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
  return param_1;
}

// GetAllTrianglePolygroupIDs @ 14ce6aa70

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,FGeometryScriptIndexList *param_3
          )

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  FGeometryScriptGroupLayer local_res20;
  code *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined8 **local_40;
  FGeometryScriptGroupLayer *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  
  FGeometryScriptIndexList::Reset(param_3,PolygroupID,0);
  if ((param_3->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_res18 = (param_3->List).Object;
  local_50 = &local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  local_res8[0] = 0;
  local_res10[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_38 = &local_res20;
    local_30 = local_res8;
    local_28 = local_res10;
    local_20 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res20 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
  }
  return param_1;
}

// GetPolyGroupBoundingBox @ 14ce6c930

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupBoundingBox
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,TBox<double> *param_4
          )

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 local_res8 [16];
  undefined1 local_res18 [16];
  int local_58 [2];
  TBox<double> *local_50;
  code *local_48;
  FGeometryScriptGroupLayer *local_40;
  FGeometryScriptGroupLayer local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  int *local_18;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res18[0] = 0;
  local_res8[0] = 0;
  (param_4->Max).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->Max).field0_0x0._s_0.Y = (double)uVar3;
  (param_4->Max).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar1 = (param_4->Max).field0_0x0._s_0.Z;
  param_4->IsValid = '\0';
  dVar2 = (param_4->Max).field0_0x0._s_0.Y;
  (param_4->Min).field0_0x0._s_0.X = (param_4->Max).field0_0x0._s_0.X;
  (param_4->Min).field0_0x0._s_0.Y = dVar2;
  (param_4->Min).field0_0x0._s_0.Z = dVar1;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_30 = local_res18;
    local_28 = local_res8;
    local_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupBoundingBox'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,TFunctionRef<int___cdecl(int)>_>
               ::Call;
    local_18 = local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58[0] = param_3;
    local_50 = param_4;
    local_38 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
  }
  return param_1;
}

// GetPolyGroupUVBoundingBox @ 14ce6c9e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVBoundingBox
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,int param_4,
          TBox2<double> *param_5)

{
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_58;
  int local_54;
  TBox2<double> *local_50;
  code *local_48;
  FGeometryScriptGroupLayer *local_40;
  FGeometryScriptGroupLayer local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  int *local_18;
  
  local_50 = param_5;
  local_res18[0] = 0;
  local_res20[0] = 0;
  (param_5->Min).field0_0x0._s_0.X = 0.0;
  (param_5->Min).field0_0x0._s_0.Y = 0.0;
  (param_5->Max).field0_0x0._s_0.X = 0.0;
  (param_5->Max).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&param_5->bIsValid = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_30 = local_res18;
    local_28 = local_res20;
    local_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVBoundingBox'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,TFunctionRef<int___cdecl(int)>_>
               ::Call;
    local_18 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = param_3;
    local_54 = param_4;
    local_38 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
  }
  return param_1;
}

// GetPolyGroupUVCentroid @ 14ce6ca80

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVCentroid
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,int param_4,
          TVector2<double> *param_5,bool *param_6)

{
  bool local_res18 [8];
  undefined1 local_res20 [8];
  int local_58;
  int local_54;
  TVector2<double> *local_50;
  code *local_48;
  FGeometryScriptGroupLayer *local_40;
  FGeometryScriptGroupLayer local_38;
  undefined1 *local_30;
  bool *local_28;
  code *local_20;
  int *local_18;
  
  local_50 = param_5;
  local_res20[0] = 0;
  local_res18[0] = false;
  (param_5->field0_0x0)._s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_30 = local_res20;
    local_28 = local_res18;
    local_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVCentroid'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,TFunctionRef<int___cdecl(int)>_>
               ::Call;
    local_18 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_58 = param_3;
    local_54 = param_4;
    local_38 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
    *param_6 = local_res18[0];
    return param_1;
  }
  *param_6 = false;
  return (UDynamicMesh *)0x0;
}

// GetPolygroupIDsInMesh @ 14ce6cb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,FGeometryScriptIndexList *param_3
          )

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  UDynamicMesh *pUVar4;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  FGeometryScriptGroupLayer local_d0;
  ForAnyElementType *local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_c0;
  code *local_b8;
  undefined8 **local_b0;
  code *local_a8;
  undefined8 **local_a0;
  FGeometryScriptGroupLayer *local_98;
  undefined1 *local_90;
  undefined4 *local_88;
  code **local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  FGeometryScriptIndexList::Reset(param_3,PolygroupID,0);
  if ((param_3->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDynamicMesh *)(*pcVar1)();
      return pUVar4;
    }
  }
  local_68.MaxBits = 0x80;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_c8 = &local_78;
  local_c0 = (param_3->List).Object;
  local_b0 = &local_c8;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_d8[0] = 0;
  local_d4 = 0;
  local_d0 = param_2;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_98 = &local_d0;
    local_90 = local_d8;
    local_88 = &local_d4;
    local_80 = &local_b8;
    local_a0 = &local_98;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a8)
    ;
  }
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14ce6ce70

UClass * __cdecl UGeometryScriptLibrary_MeshPolygroupFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshPolygroupFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshPolygroupFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshPolygroupFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions.InnerSingleton;
}

// GetTrianglePolygroupID @ 14ce6dcc0

int __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,bool *param_4)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  FGeometryScriptGroupLayer local_res20;
  bool *local_58;
  int *local_50;
  code *local_48;
  bool **local_40;
  code *local_38;
  undefined8 **local_30;
  FGeometryScriptGroupLayer *local_28;
  undefined1 *local_20;
  int *local_18;
  code **local_10;
  
  *param_4 = false;
  local_50 = local_res18;
  local_40 = &local_58;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  local_res8[0] = 0;
  local_res10[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = &local_res20;
    local_20 = local_res8;
    local_18 = local_res10;
    local_10 = &local_48;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res18[0] = param_3;
    local_res20 = param_2;
    local_58 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
    return local_res10[0];
  }
  return 0;
}

// GetTrianglesInPolygroup @ 14ce6df80

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,int param_3,
          FGeometryScriptIndexList *param_4)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  int local_res18 [2];
  FGeometryScriptGroupLayer local_res20;
  int *local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_60;
  code *local_58;
  undefined4 **local_50;
  code *local_48;
  undefined8 **local_40;
  FGeometryScriptGroupLayer *local_38;
  undefined1 *local_30;
  undefined4 *local_28;
  code **local_20;
  
  local_res18[0] = param_3;
  FGeometryScriptIndexList::Reset(param_4,Triangle,0);
  if ((param_4->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UDynamicMesh *)(*pcVar1)();
      return pUVar3;
    }
  }
  local_68 = local_res18;
  local_60 = (param_4->List).Object;
  local_50 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  local_res8[0] = 0;
  local_res10[0] = 0;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_38 = &local_res20;
    local_30 = local_res8;
    local_28 = local_res10;
    local_20 = &local_58;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res20 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
  }
  return param_1;
}

// SetNumExtendedPolygroupLayers @ 14ce74580

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int *local_res8;
  int local_res10 [2];
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"SetNumExtendedPolygroupLayers_InvalidInput",
                        L"SetNumExtendedPolygroupLayers: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_res8 = local_res10;
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SetPolygroupForMeshSelection @ 14ce74890

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptGroupLayer param_2,
          FGeometryScriptMeshSelection *param_3,int *param_4,int param_5,bool param_6,bool param_7)

{
  FGeometryScriptGroupLayer local_res10 [3];
  code *local_48;
  FGeometryScriptGroupLayer **local_40;
  FGeometryScriptGroupLayer *local_38;
  bool *local_30;
  int *local_28;
  int *local_20;
  FGeometryScriptMeshSelection *local_18;
  
  *param_4 = param_5;
  local_res10[0] = param_2;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_38 = local_res10;
    local_30 = &param_6;
    local_28 = &param_5;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_20 = param_4;
    local_18 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_48,
               GeneralEdit,Unknown,param_7);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions @ 14ce74f40

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshPolygroupFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x13;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshPolygroupFunctions_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddNamedPolygroupLayer @ 14ce76ee0

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execAddNamedPolygroupLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  undefined8 local_res18;
  uchar local_res20 [4];
  undefined4 local_res24;
  UGeometryScriptDebug *local_78;
  UDynamicMesh *local_70;
  undefined1 local_68 [16];
  uchar *local_58;
  uchar *local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  local_70 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20[0] = '\x01';
  local_res24 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar5 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_res20;
  if (puVar5 != (uchar *)0x0) {
    puVar6 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = (UGeometryScriptDebug *)0x0;
  puVar5 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar3 = local_70;
  pUVar2 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_70 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"AddNamedPolygroupLayer_InvalidInput",
                        L"AddNamedPolygroupLayer: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_48 = (undefined4)local_res18;
  local_44 = local_res18._4_4_;
  local_68._8_8_ = &local_58;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::AddNamedPolygroupLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58 = puVar6;
  local_50 = puVar5;
  UDynamicMesh::EditMesh
            (local_70,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execClearPolygroups @ 14ce89440

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execClearPolygroups
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  UGeometryScriptDebug *local_68;
  UDynamicMesh *local_60;
  UGeometryScriptDebug *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 *local_38;
  UGeometryScriptDebug **local_30;
  undefined4 *local_28;
  
  local_60 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20 = CONCAT31(local_res20._1_3_,1);
  uStackX_24 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pUVar2 = local_60;
  local_58 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  local_50 = CONCAT44(uStackX_24,local_res20);
  if (local_60 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ClearPolygroups_InvalidInput",L"ClearPolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(local_58,InvalidInputs,pFVar3);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_38 = &local_50;
    local_30 = &local_58;
    local_28 = local_res18;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ClearPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_60,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execComputePolygroupsFromAngleThreshold @ 14ce8a480

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execComputePolygroupsFromAngleThreshold
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70 [2];
  UGeometryScriptDebug *local_68;
  UDynamicMesh *local_60;
  UGeometryScriptDebug *local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 *local_38;
  UGeometryScriptDebug **local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  
  local_60 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_78 = CONCAT31(local_78._1_3_,1);
  uStack_74 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pUVar2 = local_60;
  local_70[0] = local_res18[0];
  local_58 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = local_res10[0];
  local_40 = CONCAT44(uStack_74,local_78);
  if (local_60 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_50,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ComputePolygroupsFromAngleThreshold_InvalidInput",
                        L"ComputePolygroupsFromAngleThreshold: TargetMesh is Null");
    UE::Geometry::AppendError(local_58,InvalidInputs,pFVar3);
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_38 = &local_40;
    local_30 = &local_58;
    local_28 = local_res20;
    local_20 = local_70;
    local_50._8_8_ = &local_38;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromAngleThreshold'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_60,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_50,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execComputePolygroupsFromPolygonDetection @ 14ce8a6b0

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execComputePolygroupsFromPolygonDetection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  bool bVar4;
  bool bVar5;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8 [2];
  UGeometryScriptDebug *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  UDynamicMesh *local_a8;
  UGeometryScriptDebug *local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  UGeometryScriptDebug **local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  
  local_a8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_d0 = CONCAT31(local_d0._1_3_,1);
  uStack_cc = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_d8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  bVar5 = local_d8 != 0;
  local_b0 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_b8 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_d4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d4);
  }
  local_c0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pUVar2 = local_a8;
  local_78 = local_b8;
  local_80 = local_b0;
  local_a0 = local_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8[0] = local_d4;
  local_88 = CONCAT44(uStack_cc,local_d0);
  local_res10[0] = bVar4;
  local_res18[0] = bVar5;
  if (local_a8 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_98,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ComputePolygroupsFromPolygonDetection_InvalidInput",
                        L"ComputePolygroupsFromPolygonDetection: TargetMesh is Null");
    UE::Geometry::AppendError(local_a0,InvalidInputs,pFVar3);
    if ((ITextData *)local_98._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_98._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_70 = &local_88;
    local_68 = &local_a0;
    local_60 = local_res10;
    local_58 = local_res18;
    local_50 = &local_80;
    local_48 = &local_78;
    local_40 = local_c8;
    local_98._8_8_ = &local_70;
    local_98._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ComputePolygroupsFromPolygonDetection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_a8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_98,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execConvertComponentsToPolygroups @ 14ce8baa0

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execConvertComponentsToPolygroups
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined4 local_res10;
  undefined4 uStackX_14;
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  UGeometryScriptDebug *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  UGeometryScriptDebug **local_30;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = CONCAT31(local_res10._1_3_,1);
  uStackX_14 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_res18;
  local_40 = CONCAT44(uStackX_14,local_res10);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ConvertComponentsToPolygroups_InvalidInput",
                        L"ConvertComponentsToPolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(local_48,InvalidInputs,pFVar3);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_38 = &local_40;
  local_30 = &local_48;
  local_28._8_8_ = &local_38;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertComponentsToPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execConvertUVIslandsToPolygroups @ 14ce8cfd0

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execConvertUVIslandsToPolygroups
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  UGeometryScriptDebug *local_68;
  UDynamicMesh *local_60;
  UGeometryScriptDebug *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined4 *local_38;
  UGeometryScriptDebug **local_30;
  undefined8 *local_28;
  
  local_60 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20 = CONCAT31(local_res20._1_3_,1);
  uStackX_24 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pUVar2 = local_60;
  local_58 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  local_50 = CONCAT44(uStackX_24,local_res20);
  if (local_60 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"ConvertUVIslandsToPolygroups_InvalidInput",
                        L"ConvertUVIslandsToPolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(local_58,InvalidInputs,pFVar3);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_38 = local_res18;
    local_30 = &local_58;
    local_28 = &local_50;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::ConvertUVIslandsToPolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_60,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execCopyPolygroupsLayer @ 14ce8d920

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execCopyPolygroupsLayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined4 local_res10;
  undefined4 uStackX_14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_68;
  UGeometryScriptDebug *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined8 *local_38;
  undefined8 *local_30;
  UGeometryScriptDebug **local_28;
  
  local_68 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res18 = CONCAT31(local_res18._1_3_,1);
  uStackX_1c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = CONCAT31(local_res10._1_3_,1);
  uStackX_14 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar2 = local_68;
  local_60 = local_res20;
  local_50 = CONCAT44(uStackX_14,local_res10);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = CONCAT44(uStackX_1c,local_res18);
  if (local_68 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"CopyPolygroupsLayer_InvalidInput",
                        L"CopyPolygroupsLayer: TargetMesh is Null");
    UE::Geometry::AppendError(local_60,InvalidInputs,pFVar3);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_38 = &local_58;
    local_30 = &local_50;
    local_28 = &local_60;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::CopyPolygroupsLayer'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_68,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execDeleteTrianglesInPolygroup @ 14ce8e340

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execDeleteTrianglesInPolygroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  UDynamicMesh *local_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 **local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  uchar *local_30;
  
  local_70 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_88 = CONCAT31(local_88._1_3_,1);
  uStack_84 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  puVar3 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_78 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar2 = local_70;
  local_60 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_80[0] = local_res20[0];
  local_68 = CONCAT44(uStack_84,local_88);
  puVar3[0] = '\0';
  puVar3[1] = '\0';
  puVar3[2] = '\0';
  puVar3[3] = '\0';
  if (local_70 != (UDynamicMesh *)0x0) {
    local_48 = &local_68;
    local_40 = &local_60;
    local_38 = local_80;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::DeleteTrianglesInPolygroup'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_30 = puVar3;
    UDynamicMesh::EditMesh
              (local_70,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_58,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execEnablePolygroups @ 14ce8e890

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execEnablePolygroups
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined1 local_28 [16];
  
  local_res20 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"EnablePolygroups_InvalidInput",L"EnablePolygroups: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_28._8_8_ = local_res10;
  local_res10[0] = 0;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::EnablePolygroups'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execFindExtendedPolygroupLayerByName @ 14ce8f140

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execFindExtendedPolygroupLayerByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ITextData *pIVar2;
  UGeometryScriptDebug *pUVar3;
  UDynamicMesh *pUVar4;
  FText *pFVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar local_res10 [8];
  uchar local_res18 [4];
  undefined4 local_res1c;
  ITextData *local_res20;
  UGeometryScriptDebug *local_78;
  UDynamicMesh *local_70;
  undefined1 local_68 [16];
  uchar *local_58;
  uchar *local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  local_70 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res20 = (ITextData *)0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = '\x01';
  local_res1c = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  puVar6 = param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res18;
  if (puVar6 != (uchar *)0x0) {
    puVar7 = puVar6;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = (UGeometryScriptDebug *)0x0;
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pUVar4 = local_70;
  pUVar3 = local_78;
  pIVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68._0_8_ = local_res20;
  *puVar6 = '\x01';
  if (local_70 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"FindExtendedPolygroupLayerByName_InvalidInput",
                        L"FindExtendedPolygroupLayerByName: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar3,InvalidInputs,pFVar5);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_48 = SUB84(pIVar2,0);
  local_68._4_4_ = (undefined4)((ulonglong)pIVar2 >> 0x20);
  local_44 = local_68._4_4_;
  local_68._8_8_ = &local_58;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::FindExtendedPolygroupLayerByName'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_58 = puVar6;
  local_50 = puVar7;
  UDynamicMesh::ProcessMesh
            (local_70,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_68);
  *(UDynamicMesh **)param_3 = pUVar4;
  return;
}

// execGetAllTrianglePolygroupIDs @ 14ce904f0

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execGetAllTrianglePolygroupIDs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  UDynamicMesh *this;
  bool bVar4;
  FGeometryScriptIndexList *this_00;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  UDynamicMesh *local_98;
  TArray<int,TSizedDefaultAllocator<32>_> *local_90;
  undefined8 local_88;
  FGeometryScriptIndexList local_80;
  code *local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 **local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  code **local_30;
  
  local_98 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res20 = CONCAT31(local_res20._1_3_,1);
  uStackX_24 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_80.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_80.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_80.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  this = local_98;
  this_00 = &local_80;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = CONCAT44(uStackX_24,local_res20);
  FGeometryScriptIndexList::Reset(this_00,PolygroupID,0);
  if ((this_00->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_90 = (this_00->List).Object;
  local_60 = &local_90;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetAllTrianglePolygroupIDs'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  local_res10[0] = 0;
  local_res18[0] = 0;
  local_88 = uVar3;
  if (this != (UDynamicMesh *)0x0) {
    local_48 = &local_88;
    local_40 = local_res10;
    local_38 = local_res18;
    local_30 = &local_68;
    local_50 = &local_48;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_80.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetPolyGroupBoundingBox @ 14ce95200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execGetPolyGroupBoundingBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b7 [3];
  undefined4 local_b4;
  undefined1 local_b0 [4];
  undefined4 uStack_ac;
  UDynamicMesh *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  code *local_78;
  undefined4 *local_70;
  undefined4 local_68 [2];
  uchar *local_60;
  uchar local_58 [48];
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b0[0] = 1;
  uStack_ac = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b0);
  }
  local_b4 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  local_28 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  pUVar2 = local_a8;
  local_68[0] = local_b4;
  local_60 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_60 = param_2->MostRecentPropertyAddress;
  }
  local_b8 = 0;
  local_b7[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)(local_60 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(double *)(local_60 + 0x20) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)(local_60 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_60[0x30] = '\0';
  *(undefined8 *)local_60 = *(undefined8 *)(local_60 + 0x18);
  *(undefined8 *)(local_60 + 8) = *(undefined8 *)(local_60 + 0x20);
  *(undefined8 *)(local_60 + 0x10) = *(undefined8 *)(local_60 + 0x28);
  if (local_a8 != (UDynamicMesh *)0x0) {
    local_90[0] = local_b0[0];
    local_a0._1_2_ = local_b0._1_2_;
    local_90._1_2_ = local_a0._1_2_;
    local_a0._3_1_ = local_b0[3];
    local_90[3] = local_a0._3_1_;
    local_8c = uStack_ac;
    local_88 = &local_b8;
    local_80 = local_b7;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupBoundingBox'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,TFunctionRef<int___cdecl(int)>_>
               ::Call;
    local_70 = local_68;
    local_98 = local_90;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_a8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a0
              );
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execGetPolyGroupUVBoundingBox @ 14ce95420

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execGetPolyGroupUVBoundingBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_a8 [2];
  undefined1 local_a0 [4];
  undefined4 uStack_9c;
  UDynamicMesh *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uchar *local_78;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined4 *local_50;
  uchar local_48 [48];
  
  local_98 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_a0[0] = 1;
  uStack_9c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_a8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pUVar2 = local_98;
  local_78 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_78 = param_2->MostRecentPropertyAddress;
  }
  local_80 = local_a8[0];
  local_7c = local_res20[0];
  local_res10[0] = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = 0;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  if (local_98 != (UDynamicMesh *)0x0) {
    local_70[0] = local_a0[0];
    local_90._1_2_ = local_a0._1_2_;
    local_70._1_2_ = local_90._1_2_;
    local_90._3_1_ = local_a0[3];
    local_70[3] = local_90._3_1_;
    local_6c = uStack_9c;
    local_68 = local_res10;
    local_60 = local_res18;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVBoundingBox'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,TFunctionRef<int___cdecl(int)>_>
               ::Call;
    local_50 = &local_80;
    local_88 = local_70;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_98,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_90
              );
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execGetPolyGroupUVCentroid @ 14ce95640

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execGetPolyGroupUVCentroid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector2<double>_u_0 *pTVar1;
  FProperty *pFVar2;
  UDynamicMesh *pUVar3;
  uchar *puVar4;
  TVector2<double>_u_0 *pTVar5;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [4];
  undefined4 uStack_8c;
  UDynamicMesh *local_88;
  code *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  TVector2<double>_u_0 *local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined1 *local_58;
  uchar *local_50;
  code *local_48;
  undefined4 *local_40;
  TVector2<double>_u_0 local_38;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_90[0] = 1;
  uStack_8c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_94 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_94,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_94);
  }
  local_98 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar1 = (TVector2<double>_u_0 *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pTVar5 = &local_38;
  if (pTVar1 != (TVector2<double>_u_0 *)0x0) {
    pTVar5 = pTVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_88;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_70 = local_94;
  local_6c = local_98;
  local_res20[0] = 0;
  local_res18[0] = '\0';
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar5->_s_0 = (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (local_88 == (UDynamicMesh *)0x0) {
    *puVar4 = '\0';
  }
  else {
    local_60[0] = local_90[0];
    local_80._1_2_ = local_90._1_2_;
    local_60._1_2_ = local_80._1_2_;
    local_80._3_1_ = local_90[3];
    local_60[3] = local_80._3_1_;
    local_5c = uStack_8c;
    local_58 = local_res20;
    local_50 = local_res18;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolyGroupUVCentroid'::__l2::<lambda_1>,bool,UE::Geometry::FDynamicMesh3_const_&,TFunctionRef<int___cdecl(int)>_>
               ::Call;
    local_40 = &local_70;
    local_78 = local_60;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<bool>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_68 = pTVar5;
    UDynamicMesh::ProcessMesh
              (local_88,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_80
              );
    *puVar4 = local_res18[0];
  }
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execGetPolygroupIDsInMesh @ 14ce958c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execGetPolygroupIDsInMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  UDynamicMesh *this;
  bool bVar5;
  FGeometryScriptIndexList *this_00;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108 [2];
  UDynamicMesh *local_100;
  undefined8 local_f8;
  FGeometryScriptIndexList local_f0;
  ForAnyElementType *local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d0;
  code *local_c8;
  undefined8 **local_c0;
  code *local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined4 *local_98;
  code **local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  local_100 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_110 = CONCAT31(local_110._1_3_,1);
  uStack_10c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_f0.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_f0.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_f0.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  this = local_100;
  this_00 = &local_f0;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = CONCAT44(uStack_10c,local_110);
  FGeometryScriptIndexList::Reset(this_00,PolygroupID,0);
  if ((this_00->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_88.Data = (FScriptContainerElement *)0x0;
  local_d8 = &local_88;
  local_d0 = (this_00->List).Object;
  local_c0 = &local_d8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetPolygroupIDsInMesh'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_118[0] = 0;
  local_108[0] = 0;
  local_f8 = uVar3;
  if (this != (UDynamicMesh *)0x0) {
    local_a8 = &local_f8;
    local_a0 = local_118;
    local_98 = local_108;
    local_90 = &local_c8;
    local_b0 = &local_a8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_b8);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  uVar4 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetTrianglePolygroupID @ 14ce96570

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execGetTrianglePolygroupID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88 [2];
  UDynamicMesh *local_80;
  undefined8 local_78;
  uchar *local_70;
  undefined4 *local_68;
  code *local_60;
  uchar **local_58;
  code *local_50;
  undefined8 **local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  code **local_28;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_90 = CONCAT31(local_90._1_3_,1);
  uStack_8c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  local_98[0] = 0;
  local_70 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    local_70 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88[0] = local_res20[0];
  local_78 = CONCAT44(uStack_8c,local_90);
  *local_70 = '\0';
  local_68 = local_88;
  local_58 = &local_70;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglePolygroupID'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  if (local_80 == (UDynamicMesh *)0x0) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    local_40 = &local_78;
    local_38 = local_res18;
    local_30 = local_98;
    local_28 = &local_60;
    local_48 = &local_40;
    local_50 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_80,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_50
              );
    *(undefined4 *)param_3 = local_98[0];
  }
  return;
}

// execGetTrianglesInPolygroup @ 14ce96ef0

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execGetTrianglesInPolygroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  UDynamicMesh *this;
  bool bVar4;
  FGeometryScriptIndexList *this_00;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0 [2];
  UDynamicMesh *local_a8;
  undefined8 local_a0;
  FGeometryScriptIndexList local_98;
  undefined4 *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> *local_78;
  code *local_70;
  undefined4 **local_68;
  code *local_60;
  undefined8 **local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  code **local_38;
  
  local_a8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8 = CONCAT31(local_b8._1_3_,1);
  uStack_b4 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_98.IndexType = Any;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_98.List.Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  this = local_a8;
  this_00 = &local_98;
  if ((FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptIndexList *)0x0) {
    this_00 = (FGeometryScriptIndexList *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = CONCAT44(uStack_b4,local_b8);
  local_res20[0] = local_res18[0];
  FGeometryScriptIndexList::Reset(this_00,Triangle,0);
  if ((this_00->List).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_80 = local_res20;
  local_78 = (this_00->List).Object;
  local_68 = &local_80;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::GetTrianglesInPolygroup'::__l2::<lambda_1>,int,UE::Geometry::FDynamicMesh3_const_&,UE::Geometry::FPolygroupSet_const_&>
             ::Call;
  local_res10[0] = 0;
  local_b0[0] = 0;
  local_a0 = uVar3;
  if (this != (UDynamicMesh *)0x0) {
    local_50 = &local_a0;
    local_48 = local_res10;
    local_40 = local_b0;
    local_38 = &local_70;
    local_58 = &local_50;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`SimpleMeshPolygroupQuery<int>'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_60);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.List.SharedReferenceCount.ReferenceController);
  return;
}

// execSetNumExtendedPolygroupLayers @ 14ce9fa80

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execSetNumExtendedPolygroupLayers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_38;
  undefined4 *local_30;
  undefined1 local_28 [16];
  
  local_38 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_38;
  pUVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18[0] = local_res10[0];
  if (local_38 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshPolygroupFunctions",
                        L"SetNumExtendedPolygroupLayers_InvalidInput",
                        L"SetNumExtendedPolygroupLayers: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_30 = local_res18;
  local_28._8_8_ = &local_30;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::SetNumExtendedPolygroupLayers'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_38,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execSetPolygroupForMeshSelection @ 14cea00d0

void __cdecl
UGeometryScriptLibrary_MeshPolygroupFunctions::execSetPolygroupForMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  undefined1 local_res10 [8];
  uchar local_res18 [8];
  int local_res20 [2];
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8 [2];
  UDynamicMesh *local_a0;
  FGeometryScriptMeshSelection local_98;
  undefined8 local_88;
  code *local_80;
  undefined8 **local_78;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  uchar *local_40;
  FGeometrySelection **local_38;
  
  local_a0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_b0 = CONCAT31(local_b0._1_3_,1);
  uStack_ac = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_98);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res18[0] = '\0';
  local_res18[1] = '\0';
  local_res18[2] = '\0';
  local_res18[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_b4 = 0;
  puVar3 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar4 = local_res20[0] != 0;
  local_b8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pUVar2 = local_a0;
  local_68 = local_98.GeoSelection.Object;
  pTStack_60 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_98.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = CONCAT44(uStack_ac,local_b0);
  local_a8[0] = local_b4;
  *(undefined4 *)puVar3 = local_b4;
  local_res10[0] = bVar4;
  if (local_a0 != (UDynamicMesh *)0x0) {
    local_58 = &local_88;
    local_50 = local_res10;
    local_48 = local_a8;
    local_38 = &local_68;
    local_78 = &local_58;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshPolygroupFunctions::SetPolygroupForMeshSelection'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_40 = puVar3;
    UDynamicMesh::EditMesh
              (local_a0,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_80,
               GeneralEdit,Unknown,local_b8 != 0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

