// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 57

// StaticClass @ 14ce1a370

UClass * __cdecl UGeometryScriptLibrary_MeshNormalsFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshNormalsFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshNormalsFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshNormalsFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshNormalsFunctions @ 14ce26880

UGeometryScriptLibrary_MeshNormalsFunctions * __thiscall
UGeometryScriptLibrary_MeshNormalsFunctions::UGeometryScriptLibrary_MeshNormalsFunctions
          (UGeometryScriptLibrary_MeshNormalsFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshNormalsFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshNormalsFunctions @ 14ce268b0

UGeometryScriptLibrary_MeshNormalsFunctions * __thiscall
UGeometryScriptLibrary_MeshNormalsFunctions::UGeometryScriptLibrary_MeshNormalsFunctions
          (UGeometryScriptLibrary_MeshNormalsFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshNormalsFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshNormalsFunctions @ 14ce27310

void __thiscall
UGeometryScriptLibrary_MeshNormalsFunctions::~UGeometryScriptLibrary_MeshNormalsFunctions
          (UGeometryScriptLibrary_MeshNormalsFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshNormalsFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce324c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined1 auStack_118 [32];
  FMeshRepairOrientation local_f8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_f8.Components.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8._padding_ = (longlong)&___7FMeshRepairOrientation_Geometry_UE__6B_;
  local_f8.Components.ArrayNum = 0;
  local_f8.Components.ArrayMax = 0;
  local_f8.Mesh = param_1;
  UE::Geometry::FMeshRepairOrientation::OrientComponents(&local_f8);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_d8,param_1,true);
  UE::Geometry::FMeshRepairOrientation::SolveGlobalOrientation(&local_f8,&local_d8);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_d8);
  local_f8._padding_ = (longlong)&___7FMeshRepairOrientation_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FMeshRepairOrientation::Component,int>
            ((Component *)local_f8.Components.AllocatorInstance.Data,local_f8.Components.ArrayNum);
  if ((Component *)local_f8.Components.AllocatorInstance.Data != (Component *)0x0) {
    FMemory::Free(local_f8.Components.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce33740

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FPolygroupLayer FVar1;
  bool bVar2;
  FText *pFVar3;
  FPolygroupSet *this_00;
  FDynamicMeshAttributeSet *pFVar4;
  longlong lVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FDynamicMeshAttributeSet *pFVar7;
  float local_res8 [2];
  FDynamicMeshAttributeSet *local_res10;
  FPolygroupLayer local_res18;
  undefined1 local_78 [16];
  FMeshNormals local_68;
  FMeshNormals local_50;
  longlong local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_30;
  float *local_28;
  FDynamicMeshAttributeSet **local_20;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  local_res8[0] = cosf(*(float *)(*(longlong *)this + 4) * __real_3c8efa35);
  pFVar7 = (FDynamicMeshAttributeSet *)0x0;
  local_50.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Normals.ArrayNum = 0;
  local_50.Normals.ArrayMax = 0;
  local_50.Mesh = param_1;
  UE::Geometry::FMeshNormals::Compute_Triangle(&local_50);
  lVar5 = *(longlong *)this;
  local_res10 = (FDynamicMeshAttributeSet *)0x0;
  if (*(char *)(lVar5 + 8) != '\0') {
    local_res18.bIsDefaultLayer = *(bool *)(lVar5 + 0xc);
    local_res18.LayerIndex = *(int *)(lVar5 + 0x10);
    bVar2 = UE::Geometry::FPolygroupLayer::CheckExists(&local_res18,param_1);
    if (!bVar2) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_78,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                          L"ComputeSplitNormals_MissingGroups",
                          L"ComputeSplitNormals: Polygroup Layer does not exist");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar3)
      ;
      if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
      }
      goto LAB_14ce33927;
    }
    this_00 = ::operator_new(0x18);
    pFVar4 = pFVar7;
    if (this_00 != (FPolygroupSet *)0x0) {
      FVar1.LayerIndex = local_res18.LayerIndex;
      FVar1.bIsDefaultLayer = local_res18.bIsDefaultLayer;
      FVar1._1_3_ = local_res18._1_3_;
      pFVar4 = (FDynamicMeshAttributeSet *)
               UE::Geometry::FPolygroupSet::FPolygroupSet(this_00,param_1,FVar1);
    }
    pFVar6 = local_res10;
    local_res10 = pFVar4;
    ::operator_delete(pFVar6,0x18);
    ::operator_delete((void *)0x0,0x18);
    lVar5 = *(longlong *)this;
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar6 = pFVar7;
  if (0 < (pFVar4->NormalLayers).Array.ArrayNum) {
    pFVar6 = *(FDynamicMeshAttributeSet **)(pFVar4->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_30 = &local_50.Normals;
  local_28 = local_res8;
  local_20 = &local_res10;
  local_78._8_8_ = &local_38;
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,int,int,int>
       ::Call;
  local_38 = lVar5;
  UE::Geometry::TDynamicMeshOverlay<float,3>::CreateFromPredicate
            ((TDynamicMeshOverlay<float,3> *)pFVar6,
             (TFunctionRef<bool___cdecl(int,int,int)> *)local_78,0.0);
  local_68.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Normals.ArrayNum = 0;
  local_68.Normals.ArrayMax = 0;
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar6 = pFVar7;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar4;
  }
  pFVar4 = pFVar7;
  if (0 < (pFVar6->NormalLayers).Array.ArrayNum) {
    pFVar4 = *(FDynamicMeshAttributeSet **)(pFVar6->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_68.Mesh = param_1;
  UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
            (&local_68,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar4,
             *(bool *)(*(longlong *)((longlong)this + 0x10) + 1),
             *(bool *)*(longlong *)((longlong)this + 0x10));
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar6 = pFVar7;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar6 = pFVar4;
  }
  if (0 < (pFVar6->NormalLayers).Array.ArrayNum) {
    pFVar7 = *(FDynamicMeshAttributeSet **)(pFVar6->NormalLayers).Array.AllocatorInstance.Data;
  }
  UE::Geometry::FMeshNormals::CopyToOverlay
            (&local_68,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar7,false)
  ;
  if (local_68.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Normals.AllocatorInstance.Data);
  }
LAB_14ce33927:
  ::operator_delete(local_res10,0x18);
  if (local_50.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Normals.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce33960

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FText *pFVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FComputeTangentsOptions local_res10 [4];
  FText local_88;
  TMeshTangents<double> local_78;
  TMeshTangents<double> local_40;
  
  pFVar1 = (param_1->AttributeSet).Ptr;
  if ((pFVar1 != (FDynamicMeshAttributeSet *)0x0) &&
     (iVar5 = *(int *)(*(longlong *)this + 4), iVar4 = (**(code **)(pFVar1->_padding_ + 0xa8))(),
     iVar5 < iVar4)) {
    pFVar1 = (param_1->AttributeSet).Ptr;
    pFVar9 = (FDynamicMeshAttributeSet *)0x0;
    pFVar8 = pFVar9;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar8 = pFVar1;
    }
    iVar5 = (**(code **)(pFVar8->_padding_ + 0xb8))();
    if (iVar5 != 0) {
      pFVar1 = (param_1->AttributeSet).Ptr;
      iVar5 = (pFVar1->NormalLayers).Array.ArrayNum;
      if ((((iVar5 < 1) ||
           (pFVar2 = (pFVar1->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar2 == 0))
          || (iVar5 < 2)) ||
         (((*(longlong *)(pFVar2 + 8) == 0 || (iVar5 < 3)) || (*(longlong *)(pFVar2 + 0x10) == 0))))
      {
        UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(pFVar1);
      }
      if (**(char **)this == '\x02') {
        bVar3 = DynamicMeshMikkTWrapper::IsSupported();
        if (bVar3) {
          local_78.Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Tangents.ArrayNum = 0;
          local_78.Tangents.ArrayMax = 0;
          local_78.Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Bitangents.ArrayNum = 0;
          local_78.Bitangents.ArrayMax = 0;
          local_78.AllDegenerateTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.AllDegenerateTris.ArrayNum = 0;
          local_78.AllDegenerateTris.ArrayMax = 0;
          local_78.Mesh = param_1;
          bVar3 = DynamicMeshMikkTWrapper::ComputeTangents
                            (&local_78,*(int *)(*(longlong *)this + 4));
          if (bVar3) {
            UE::Geometry::TMeshTangents<double>::CopyToOverlays(&local_78,param_1);
          }
          else {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               (&local_88,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                                L"ComputeTangents_MikkTFailed",
                                L"ComputeTangents: Standard MikkT failed to compute a result");
            UE::Geometry::AppendError
                      ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed
                       ,pFVar6);
            if (local_88.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
            }
          }
          if (local_78.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.AllDegenerateTris.AllocatorInstance.Data);
          }
          if (local_78.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Bitangents.AllocatorInstance.Data);
          }
          if (local_78.Tangents.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_78.Tangents.AllocatorInstance.Data);
          return;
        }
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_88,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                            L"ComputeTangents_StandardMikkTEditorOnly",
                            L"ComputeTangents: Standard MikkT not supported by current platform; falling back to Fast MikkT."
                           );
        UE::Geometry::AppendWarning
                  ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,
                   pFVar6);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        **(undefined1 **)this = 0;
      }
      local_res10[0].bAngleWeighted = true;
      local_res10[0].bAveraged = **(char **)this == '\0';
      local_40.Tangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.Tangents.ArrayNum = 0;
      local_40.Tangents.ArrayMax = 0;
      local_40.Bitangents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.Bitangents.ArrayNum = 0;
      local_40.Bitangents.ArrayMax = 0;
      local_40.AllDegenerateTris.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.AllDegenerateTris.ArrayNum = 0;
      local_40.AllDegenerateTris.ArrayMax = 0;
      local_40.Mesh = param_1;
      pTVar7 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                         ((param_1->AttributeSet).Ptr,*(int *)(*(char **)this + 4));
      pFVar1 = (param_1->AttributeSet).Ptr;
      if (0 < (pFVar1->NormalLayers).Array.ArrayNum) {
        pFVar9 = *(FDynamicMeshAttributeSet **)(pFVar1->NormalLayers).Array.AllocatorInstance.Data;
      }
      UE::Geometry::TMeshTangents<double>::ComputeTriVertexTangents
                (&local_40,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar9,
                 pTVar7,local_res10);
      UE::Geometry::TMeshTangents<double>::CopyToOverlays(&local_40,param_1);
      if (local_40.AllDegenerateTris.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllDegenerateTris.AllocatorInstance.Data);
      }
      if (local_40.Bitangents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Bitangents.AllocatorInstance.Data);
      }
      if (local_40.Tangents.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_40.Tangents.AllocatorInstance.Data);
      return;
    }
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_88,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                      L"ComputeTangents_NoUVLayers",
                      L"ComputeTangents: TargetMesh is missing UV Set or Normals required to compute Tangents"
                     );
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar6);
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14ce35ff0

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  UE::Geometry::FDynamicMesh3::ReverseOrientation(param_1,true);
  uVar8 = __xmm_80000000800000008000000080000000;
  pFVar2 = (param_1->AttributeSet).Ptr;
  if (((pFVar2 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar2->NormalLayers).Array.ArrayNum))
     && (pFVar3 = (pFVar2->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar3 != 0)) {
    lVar4 = *(longlong *)pFVar3;
    uVar10 = *(int *)(lVar4 + 0xc) + *(int *)(lVar4 + 8) * 0x200;
    uVar12 = 0;
    if ((uVar10 != 0) &&
       (uVar12 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x10) - 1U))) {
      uVar11 = 1;
      uVar12 = 1;
      if (1 < (int)uVar10) {
        do {
          lVar5 = (*(undefined8 **)(lVar4 + 0x10))[uVar11 >> 9];
          if ((*(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != 0) &&
             (uVar12 = uVar11, *(short *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 2) != -1)) break;
          uVar11 = uVar11 + 1;
          uVar12 = uVar11;
        } while ((int)uVar11 < (int)uVar10);
      }
    }
joined_r0x00014ce360a8:
    if (uVar12 != uVar10) {
      while( true ) {
        lVar5 = *(longlong *)(lVar4 + 0x48);
        uVar7 = uVar12 * 3;
        uVar15 = (ulonglong)(uVar7 + 1 >> 9);
        uVar13 = (ulonglong)(uVar7 + 1 & 0x1ff);
        lVar6 = *(longlong *)(lVar5 + (ulonglong)(uVar7 >> 9) * 8);
        uVar14 = (ulonglong)(uVar7 + 2 & 0x1ff);
        uVar9 = (ulonglong)(uVar7 + 2 >> 9);
        uVar12 = uVar12 + 1;
        uVar11 = *(uint *)(*(longlong *)(lVar5 + uVar15 * 8) + uVar13 * 4);
        uVar1 = *(uint *)(*(longlong *)(lVar5 + uVar9 * 8) + uVar14 * 4);
        *(uint *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 4) =
             *(uint *)(lVar6 + (ulonglong)(uVar7 & 0x1ff) * 4) ^ uVar8;
        *(uint *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar15 * 8) + uVar13 * 4) =
             uVar11 ^ uVar8;
        *(uint *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + uVar9 * 8) + uVar14 * 4) =
             uVar1 ^ uVar8;
        if ((int)uVar10 <= (int)uVar12) break;
        while( true ) {
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
          if ((*(short *)(lVar5 + (ulonglong)(uVar12 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar5 + (ulonglong)(uVar12 & 0x1ff) * 2) != -1)) break;
          uVar12 = uVar12 + 1;
          if ((int)uVar10 <= (int)uVar12) goto joined_r0x00014ce360a8;
        }
      }
      goto joined_r0x00014ce360a8;
    }
  }
  return;
}

// operator() @ 14ce361b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::FlipTriangleSelectionNormals'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  ulonglong uVar2;
  undefined1 auStackY_128 [32];
  code *local_f8;
  FDynamicMesh3 **local_f0;
  FDynamicMesh3 *local_e8;
  ForAnyElementType *local_e0;
  ForAnyElementType *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  undefined4 local_38;
  undefined4 local_34;
  void *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar1 = (param_1->AttributeSet).Ptr;
  local_d0 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_58.NumBits = 0;
  local_58.MaxBits = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8.NumBits = 0;
  local_a8.MaxBits = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  if ((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum)) {
    local_d0 = *(undefined8 *)(pFVar1->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_e0 = &local_68;
  local_d8 = &local_b8;
  local_c8 = *(undefined1 *)((longlong)this + 8);
  local_c7 = *(undefined1 *)((longlong)this + 9);
  local_f0 = &local_e8;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshNormalsFunctions::FlipTriangleSelectionNormals'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_e8 = param_1;
  FGeometryScriptMeshSelection::ProcessByTriangleID
            (*(FGeometryScriptMeshSelection **)this,param_1,
             (TFunctionRef<void___cdecl(int)> *)&local_f8,false);
  local_70 = 0;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  uVar2 = local_b0 >> 0x20;
  local_b0 = local_b0 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_b8,0,(int *)((longlong)&local_b0 + 4));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_a8.NumBits = 0;
  if (0x80 < (uint)local_a8.MaxBits) {
    local_a8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  local_20 = 0;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  uVar2 = local_60 >> 0x20;
  local_60 = local_60 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_68,0,(int *)((longlong)&local_60 + 4));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_58.NumBits = 0;
  if (0x80 < (uint)local_58.MaxBits) {
    local_58.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_58,0);
  }
  if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// operator() @ 14ce37750

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  double dVar2;
  short sVar3;
  uint uVar4;
  FDynamicMeshAttributeSet *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong *plVar22;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_00;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint local_108;
  uint uStack_104;
  TVector<float>_u_0 local_f8;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  TVector<float>_u_0 local_b8;
  TVector<float>_u_0 local_a8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80 [3];
  
  *(bool *)*(undefined8 *)this =
       (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0;
  pFVar5 = (param_1->AttributeSet).Ptr;
  if (pFVar5 == (FDynamicMeshAttributeSet *)0x0) {
    return;
  }
  iVar14 = (**(code **)(pFVar5->_padding_ + 0xb8))();
  if (iVar14 < 1) {
    return;
  }
  pFVar5 = (param_1->AttributeSet).Ptr;
  pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
  this_00 = pTVar18;
  if (0 < (pFVar5->NormalLayers).Array.ArrayNum) {
    this_00 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
               (pFVar5->NormalLayers).Array.AllocatorInstance.Data;
  }
  iVar14 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  if (**(char **)((longlong)this + 8) == '\0') {
    local_80[0]._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_80[0]._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_80[0]._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
              (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                ((longlong)this + 0x10),(TVector<double> *)&local_80[0]._s_0,iVar14);
    uVar20 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    if ((uVar20 == 0) ||
       (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
       pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0,
       (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14ce37d47:
      uVar17 = (uint)pTVar18;
    }
    else {
      pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)&DAT_00000001;
      uVar17 = 1;
      if (1 < (int)uVar20) {
        do {
          sVar3 = *(short *)(*(longlong *)(pFVar6 + ((ulonglong)pTVar18 >> 9) * 8) +
                            (ulonglong)((uint)pTVar18 & 0x1ff) * 2);
          if ((sVar3 != 0) && (sVar3 != -1)) break;
          uVar17 = (uint)pTVar18 + 1;
          pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                    (ulonglong)uVar17;
        } while ((int)uVar17 < (int)uVar20);
        goto LAB_14ce37d47;
      }
    }
joined_r0x00014ce37d49:
    if (uVar17 != uVar20) {
      while( true ) {
        uVar17 = (uint)pTVar18;
        if (-1 < *(int *)(*(longlong *)
                           (*(longlong *)&this_00->field_0x78 + (ulonglong)(uVar17 * 3 >> 9) * 8) +
                         (ulonglong)(uVar17 * 3 & 0x1ff) * 4)) {
          lVar21 = *(longlong *)
                    ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                    ((ulonglong)pTVar18 >> 9) * 8);
          uVar1 = *(undefined8 *)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
          uVar4 = *(uint *)(lVar21 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
          lVar21 = (longlong)(int)uVar4;
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                    (this_00,uVar17,(TVector<float> *)&local_c8._s_0,
                     (TVector<float> *)&local_b8._s_0,(TVector<float> *)&local_a8._s_0);
          local_108 = (uint)uVar1;
          lVar23 = (longlong)(int)local_108;
          plVar22 = *(longlong **)((longlong)this + 0x10);
          dVar10 = (double)local_c8._s_0.X;
          uVar15 = 0;
          if ((int)local_108 < (int)plVar22[1]) {
            uVar15 = ~local_108 >> 0x1f;
          }
          dVar11 = (double)local_c8._s_0.Y;
          dVar12 = (double)local_c8._s_0.Z;
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *plVar22;
          *(double *)(lVar7 + lVar23 * 0x18) = dVar10;
          *(double *)(lVar7 + 8 + lVar23 * 0x18) = dVar11;
          *(double *)(lVar7 + 0x10 + lVar23 * 0x18) = dVar12;
          uStack_104 = (uint)((ulonglong)uVar1 >> 0x20);
          lVar23 = (longlong)(int)uStack_104;
          plVar22 = *(longlong **)((longlong)this + 0x10);
          dVar10 = (double)local_b8._s_0.X;
          uVar15 = 0;
          if ((int)uStack_104 < (int)plVar22[1]) {
            uVar15 = ~uStack_104 >> 0x1f;
          }
          dVar11 = (double)local_b8._s_0.Y;
          dVar12 = (double)local_b8._s_0.Z;
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar7 = *plVar22;
          *(double *)(lVar7 + lVar23 * 0x18) = dVar10;
          *(double *)(lVar7 + 8 + lVar23 * 0x18) = dVar11;
          *(double *)(lVar7 + 0x10 + lVar23 * 0x18) = dVar12;
          plVar22 = *(longlong **)((longlong)this + 0x10);
          dVar10 = (double)local_a8._s_0.X;
          uVar15 = 0;
          if ((int)uVar4 < (int)plVar22[1]) {
            uVar15 = ~uVar4 >> 0x1f;
          }
          dVar11 = (double)local_a8._s_0.Y;
          dVar12 = (double)local_a8._s_0.Z;
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar23 = *plVar22;
          *(double *)(lVar23 + lVar21 * 0x18) = dVar10;
          *(double *)(lVar23 + 8 + lVar21 * 0x18) = dVar11;
          *(double *)(lVar23 + 0x10 + lVar21 * 0x18) = dVar12;
        }
        uVar17 = uVar17 + 1;
        pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(ulonglong)uVar17;
        if ((int)uVar20 <= (int)uVar17) break;
        while( true ) {
          uVar16 = (ulonglong)((uint)pTVar18 & 0x1ff);
          lVar21 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    ((ulonglong)pTVar18 >> 9) * 8);
          if ((*(short *)(lVar21 + uVar16 * 2) != 0) && (*(short *)(lVar21 + uVar16 * 2) != -1))
          break;
          uVar17 = (uint)pTVar18 + 1;
          pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
                    (ulonglong)uVar17;
          if ((int)uVar20 <= (int)uVar17) goto joined_r0x00014ce37d49;
        }
      }
      goto joined_r0x00014ce37d49;
    }
    goto LAB_14ce37fa0;
  }
  local_98._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_98._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
            (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
              ((longlong)this + 0x10),(TVector<double> *)&local_98._s_0,iVar14);
  uVar20 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  dVar10 = __real_3ff0000000000000;
  if ((uVar20 == 0) ||
     (pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0,
     (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14ce378a7:
    uVar17 = (uint)pTVar18;
  }
  else {
    pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)&DAT_00000001;
    uVar17 = 1;
    if (1 < (int)uVar20) {
      do {
        sVar3 = *(short *)(*(longlong *)(pFVar6 + ((ulonglong)pTVar18 >> 9) * 8) +
                          (ulonglong)((uint)pTVar18 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar17 = (uint)pTVar18 + 1;
        pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(ulonglong)uVar17;
      } while ((int)uVar17 < (int)uVar20);
      goto LAB_14ce378a7;
    }
  }
joined_r0x00014ce378a9:
  __real_3ff0000000000000 = dVar10;
  if (uVar17 != uVar20) {
    while( true ) {
      uVar17 = (uint)pTVar18;
      if (-1 < *(int *)(*(longlong *)
                         (*(longlong *)&this_00->field_0x78 + (ulonglong)(uVar17 * 3 >> 9) * 8) +
                       (ulonglong)(uVar17 * 3 & 0x1ff) * 4)) {
        lVar21 = *(longlong *)
                  ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                  ((ulonglong)pTVar18 >> 9) * 8);
        uVar1 = *(undefined8 *)(lVar21 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
        uVar4 = *(uint *)(lVar21 + 8 + (ulonglong)(uVar17 & 0x1ff) * 0xc);
        lVar21 = (longlong)(int)uVar4;
        UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::GetTriElements
                  (this_00,uVar17,(TVector<float> *)&local_f8._s_0,(TVector<float> *)&local_e8._s_0,
                   (TVector<float> *)&local_d8._s_0);
        local_108 = (uint)uVar1;
        lVar23 = (longlong)(int)local_108;
        plVar22 = *(longlong **)((longlong)this + 0x10);
        dVar10 = (double)local_f8._s_0.X;
        uVar15 = 0;
        if ((int)local_108 < (int)plVar22[1]) {
          uVar15 = ~local_108 >> 0x1f;
        }
        dVar11 = (double)local_f8._s_0.Y;
        dVar12 = (double)local_f8._s_0.Z;
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar7 = *plVar22;
        uStack_104 = (uint)((ulonglong)uVar1 >> 0x20);
        lVar24 = (longlong)(int)uStack_104;
        *(double *)(lVar7 + lVar23 * 0x18) = dVar10 + *(double *)(lVar7 + lVar23 * 0x18);
        *(double *)(lVar7 + 8 + lVar23 * 0x18) = dVar11 + *(double *)(lVar7 + 8 + lVar23 * 0x18);
        *(double *)(lVar7 + 0x10 + lVar23 * 0x18) =
             dVar12 + *(double *)(lVar7 + 0x10 + lVar23 * 0x18);
        plVar22 = *(longlong **)((longlong)this + 0x10);
        dVar10 = (double)local_e8._s_0.X;
        uVar15 = 0;
        if ((int)uStack_104 < (int)plVar22[1]) {
          uVar15 = ~uStack_104 >> 0x1f;
        }
        dVar11 = (double)local_e8._s_0.Y;
        dVar12 = (double)local_e8._s_0.Z;
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar23 = *plVar22;
        *(double *)(lVar23 + lVar24 * 0x18) = dVar10 + *(double *)(lVar23 + lVar24 * 0x18);
        *(double *)(lVar23 + 8 + lVar24 * 0x18) = dVar11 + *(double *)(lVar23 + 8 + lVar24 * 0x18);
        *(double *)(lVar23 + 0x10 + lVar24 * 0x18) =
             dVar12 + *(double *)(lVar23 + 0x10 + lVar24 * 0x18);
        plVar22 = *(longlong **)((longlong)this + 0x10);
        dVar10 = (double)local_d8._s_0.X;
        uVar15 = 0;
        if ((int)uVar4 < (int)plVar22[1]) {
          uVar15 = ~uVar4 >> 0x1f;
        }
        dVar11 = (double)local_d8._s_0.Y;
        dVar12 = (double)local_d8._s_0.Z;
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar23 = *plVar22;
        *(double *)(lVar23 + lVar21 * 0x18) = dVar10 + *(double *)(lVar23 + lVar21 * 0x18);
        *(double *)(lVar23 + 8 + lVar21 * 0x18) = dVar11 + *(double *)(lVar23 + 8 + lVar21 * 0x18);
        *(double *)(lVar23 + 0x10 + lVar21 * 0x18) =
             dVar12 + *(double *)(lVar23 + 0x10 + lVar21 * 0x18);
      }
      uVar17 = uVar17 + 1;
      pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(ulonglong)uVar17;
      dVar10 = __real_3ff0000000000000;
      if ((int)uVar20 <= (int)uVar17) break;
      pFVar6 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        uVar16 = (ulonglong)((uint)pTVar18 & 0x1ff);
        if ((*(short *)(*(longlong *)(pFVar6 + ((ulonglong)pTVar18 >> 9) * 8) + uVar16 * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar6 + ((ulonglong)pTVar18 >> 9) * 8) + uVar16 * 2) != -1))
        break;
        uVar17 = (uint)pTVar18 + 1;
        pTVar18 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)(ulonglong)uVar17;
        if ((int)uVar20 <= (int)uVar17) goto joined_r0x00014ce378a9;
      }
    }
    goto joined_r0x00014ce378a9;
  }
  uVar19 = 0;
  plVar22 = *(longlong **)((longlong)this + 0x10);
  uVar16 = uVar19;
  if (0 < (int)plVar22[1]) {
    do {
      uVar17 = (uint)uVar16;
      uVar20 = 0;
      if ((int)uVar17 < (int)plVar22[1]) {
        uVar20 = ~uVar17 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar21 = *plVar22;
      dVar11 = *(double *)(lVar21 + 8 + uVar19);
      dVar12 = *(double *)(lVar21 + 0x10 + uVar19);
      if (0.0 < dVar11 * dVar11 + *(double *)(lVar21 + uVar19) * *(double *)(lVar21 + uVar19) +
                dVar12 * dVar12) {
        plVar22 = *(longlong **)((longlong)this + 0x10);
        uVar20 = 0;
        if ((int)uVar17 < (int)plVar22[1]) {
          uVar20 = ~uVar17 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar21 = *plVar22;
        dVar11 = *(double *)(uVar19 + lVar21);
        dVar12 = *(double *)(uVar19 + 8 + lVar21);
        dVar2 = *(double *)(uVar19 + 0x10 + lVar21);
        auVar25._0_8_ = dVar2 * dVar2;
        auVar25._8_8_ = 0;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar12 * dVar12 + dVar11 * dVar11 + auVar25._0_8_;
        auVar26 = sqrtpd(auVar25,auVar26);
        if (auVar26._0_8_ <= 0.0) {
          *(undefined8 *)(uVar19 + 0x10 + lVar21) = 0;
          *(undefined8 *)(uVar19 + 8 + lVar21) = 0;
          *(undefined8 *)(uVar19 + lVar21) = 0;
        }
        else {
          dVar9 = dVar10 / auVar26._0_8_;
          *(double *)(uVar19 + lVar21) = dVar11 * dVar9;
          *(double *)(uVar19 + 8 + lVar21) = dVar12 * dVar9;
          *(double *)(uVar19 + 0x10 + lVar21) = dVar2 * dVar9;
        }
      }
      plVar22 = *(longlong **)((longlong)this + 0x10);
      uVar19 = uVar19 + 0x18;
      uVar16 = (ulonglong)(uVar17 + 1);
    } while ((int)(uVar17 + 1) < (int)plVar22[1]);
  }
LAB_14ce37fa0:
  **(undefined1 **)((longlong)this + 0x18) = 1;
  return;
}

// operator() @ 14ce38000

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  double dVar1;
  short sVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_00;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_01;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  TVector<float>_u_0 local_180;
  TVector<float>_u_0 local_170;
  TVector<float>_u_0 local_160;
  TVector<float>_u_0 local_150;
  TVector<float>_u_0 local_140;
  TVector<float>_u_0 local_130;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_120;
  uint local_118;
  longlong *local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f0;
  longlong local_e8;
  TVector<double>_u_0 local_e0;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98 [3];
  
  *(bool *)*(undefined8 *)this =
       (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed != 0;
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (((((pFVar3 != (FDynamicMeshAttributeSet *)0x0) &&
        (iVar22 = (pFVar3->NormalLayers).Array.ArrayNum, 0 < iVar22)) &&
       (pFVar4 = (pFVar3->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar4 != 0)) &&
      ((1 < iVar22 && (*(longlong *)(pFVar4 + 8) != 0)))) &&
     ((2 < iVar22 && (*(longlong *)(pFVar4 + 0x10) != 0)))) {
    this_00 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar4 + 8);
    if (iVar22 < 3) {
      this_01 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    }
    else {
      this_01 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)(pFVar4 + 0x10);
    }
    iVar22 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    if (**(char **)((longlong)this + 8) == '\0') {
      local_b0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_b0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_b0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                  ((longlong)this + 0x10),(TVector<double> *)&local_b0._s_0,iVar22);
      local_98[0]._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_98[0]._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_98[0]._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                  ((longlong)this + 0x18),(TVector<double> *)&local_98[0]._s_0,
                 (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
      uVar24 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      uVar18 = 0;
      if ((uVar24 != 0) &&
         (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
         0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
        uVar17 = 1;
        uVar18 = 1;
        if (1 < (int)uVar24) {
          do {
            sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) +
                              (ulonglong)(uVar17 & 0x1ff) * 2);
            if ((sVar2 != 0) && (uVar18 = uVar17, sVar2 != -1)) break;
            uVar17 = uVar17 + 1;
            uVar18 = uVar17;
          } while ((int)uVar17 < (int)uVar24);
        }
      }
joined_r0x00014ce38a49:
      if (uVar18 != uVar24) {
        while( true ) {
          uVar16 = (ulonglong)(uVar18 * 3 & 0x1ff);
          uVar23 = (ulonglong)(uVar18 * 3 >> 9);
          if ((-1 < *(int *)(*(longlong *)(*(longlong *)&this_00->field_0x78 + uVar23 * 8) +
                            uVar16 * 4)) &&
             (-1 < *(int *)(*(longlong *)(*(longlong *)&this_01->field_0x78 + uVar23 * 8) +
                           uVar16 * 4))) {
            lVar19 = *(longlong *)
                      ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar18 >> 9) * 8);
            local_100 = *(undefined8 *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
            uVar17 = *(uint *)(lVar19 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
            lVar26 = (longlong)(int)uVar17;
            UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
            GetTriElements(this_00,uVar18,(TVector<float> *)&local_150._s_0,
                           (TVector<float> *)&local_140._s_0,(TVector<float> *)&local_130._s_0);
            uVar14 = (uint)local_100;
            lVar19 = (longlong)(int)(uint)local_100;
            plVar25 = *(longlong **)((longlong)this + 0x10);
            dVar8 = (double)local_150._s_0.X;
            uVar12 = 0;
            if ((int)(uint)local_100 < (int)plVar25[1]) {
              uVar12 = ~(uint)local_100 >> 0x1f;
            }
            dVar9 = (double)local_150._s_0.Y;
            dVar10 = (double)local_150._s_0.Z;
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar20 = *plVar25;
            *(double *)(lVar20 + lVar19 * 0x18) = dVar8;
            *(double *)(lVar20 + 8 + lVar19 * 0x18) = dVar9;
            *(double *)(lVar20 + 0x10 + lVar19 * 0x18) = dVar10;
            plVar25 = *(longlong **)((longlong)this + 0x10);
            uVar12 = local_100._4_4_;
            lVar20 = (longlong)(int)local_100._4_4_;
            dVar8 = (double)local_140._s_0.X;
            uVar15 = 0;
            if ((int)local_100._4_4_ < (int)plVar25[1]) {
              uVar15 = ~local_100._4_4_ >> 0x1f;
            }
            dVar9 = (double)local_140._s_0.Y;
            dVar10 = (double)local_140._s_0.Z;
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar21 = *plVar25;
            *(double *)(lVar21 + lVar20 * 0x18) = dVar8;
            *(double *)(lVar21 + 8 + lVar20 * 0x18) = dVar9;
            *(double *)(lVar21 + 0x10 + lVar20 * 0x18) = dVar10;
            plVar25 = *(longlong **)((longlong)this + 0x10);
            dVar8 = (double)local_130._s_0.X;
            uVar15 = 0;
            if ((int)uVar17 < (int)plVar25[1]) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            dVar9 = (double)local_130._s_0.Y;
            dVar10 = (double)local_130._s_0.Z;
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar21 = *plVar25;
            *(double *)(lVar21 + lVar26 * 0x18) = dVar8;
            *(double *)(lVar21 + 8 + lVar26 * 0x18) = dVar9;
            *(double *)(lVar21 + 0x10 + lVar26 * 0x18) = dVar10;
            UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
            GetTriElements(this_01,uVar18,(TVector<float> *)&local_150._s_0,
                           (TVector<float> *)&local_140._s_0,(TVector<float> *)&local_130._s_0);
            plVar25 = *(longlong **)((longlong)this + 0x18);
            dVar8 = (double)local_150._s_0.X;
            uVar15 = 0;
            if ((int)uVar14 < (int)plVar25[1]) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            dVar9 = (double)local_150._s_0.Y;
            dVar10 = (double)local_150._s_0.Z;
            if ((uVar15 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar21 = *plVar25;
            *(double *)(lVar21 + lVar19 * 0x18) = dVar8;
            *(double *)(lVar21 + 8 + lVar19 * 0x18) = dVar9;
            *(double *)(lVar21 + 0x10 + lVar19 * 0x18) = dVar10;
            plVar25 = *(longlong **)((longlong)this + 0x18);
            dVar8 = (double)local_140._s_0.X;
            uVar14 = 0;
            if ((int)uVar12 < (int)plVar25[1]) {
              uVar14 = ~uVar12 >> 0x1f;
            }
            dVar9 = (double)local_140._s_0.Y;
            dVar10 = (double)local_140._s_0.Z;
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar19 = *plVar25;
            *(double *)(lVar19 + lVar20 * 0x18) = dVar8;
            *(double *)(lVar19 + 8 + lVar20 * 0x18) = dVar9;
            *(double *)(lVar19 + 0x10 + lVar20 * 0x18) = dVar10;
            plVar25 = *(longlong **)((longlong)this + 0x18);
            dVar8 = (double)local_130._s_0.X;
            uVar14 = 0;
            if ((int)uVar17 < (int)plVar25[1]) {
              uVar14 = ~uVar17 >> 0x1f;
            }
            dVar9 = (double)local_130._s_0.Y;
            dVar10 = (double)local_130._s_0.Z;
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar19 = *plVar25;
            *(double *)(lVar19 + lVar26 * 0x18) = dVar8;
            *(double *)(lVar19 + 8 + lVar26 * 0x18) = dVar9;
            *(double *)(lVar19 + 0x10 + lVar26 * 0x18) = dVar10;
          }
          uVar18 = uVar18 + 1;
          if ((int)uVar24 <= (int)uVar18) break;
          while( true ) {
            lVar19 = *(longlong *)
                      ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar18 >> 9) * 8);
            if ((*(short *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
            uVar18 = uVar18 + 1;
            if ((int)uVar24 <= (int)uVar18) goto joined_r0x00014ce38a49;
          }
        }
        goto joined_r0x00014ce38a49;
      }
    }
    else {
      local_e0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_e0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                  ((longlong)this + 0x10),(TVector<double> *)&local_e0._s_0,iVar22);
      local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (*(TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> **)
                  ((longlong)this + 0x18),(TVector<double> *)&local_c8._s_0,
                 (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
      uVar24 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      local_120 = this_00;
      uVar18 = 0;
      dVar8 = __real_3ff0000000000000;
      if ((uVar24 != 0) &&
         (pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
         0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
        uVar17 = 1;
        uVar18 = 1;
        if (1 < (int)uVar24) {
          do {
            sVar2 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar17 >> 9) * 8) +
                              (ulonglong)(uVar17 & 0x1ff) * 2);
            if ((sVar2 != 0) && (uVar18 = uVar17, sVar2 != -1)) break;
            uVar17 = uVar17 + 1;
            uVar18 = uVar17;
          } while ((int)uVar17 < (int)uVar24);
        }
      }
joined_r0x00014ce381bc:
      __real_3ff0000000000000 = dVar8;
      if (uVar18 != uVar24) {
        while( true ) {
          uVar16 = (ulonglong)(uVar18 * 3 & 0x1ff);
          uVar23 = (ulonglong)(uVar18 * 3 >> 9);
          if ((-1 < *(int *)(*(longlong *)(*(longlong *)&this_00->field_0x78 + uVar23 * 8) +
                            uVar16 * 4)) &&
             (-1 < *(int *)(*(longlong *)(*(longlong *)&this_01->field_0x78 + uVar23 * 8) +
                           uVar16 * 4))) {
            lVar19 = *(longlong *)
                      ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar18 >> 9) * 8);
            uVar17 = *(uint *)(lVar19 + 8 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
            local_100 = *(undefined8 *)(lVar19 + (ulonglong)(uVar18 & 0x1ff) * 0xc);
            UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
            GetTriElements(this_00,uVar18,(TVector<float> *)&local_180._s_0,
                           (TVector<float> *)&local_170._s_0,(TVector<float> *)&local_160._s_0);
            uVar14 = (uint)local_100;
            lVar19 = (longlong)(int)(uint)local_100;
            plVar25 = *(longlong **)((longlong)this + 0x10);
            uVar15 = ~(uint)local_100;
            dVar8 = (double)local_180._s_0.X;
            uVar12 = 0;
            if ((int)(uint)local_100 < (int)plVar25[1]) {
              uVar12 = uVar15 >> 0x1f;
            }
            dVar9 = (double)local_180._s_0.Y;
            dVar10 = (double)local_180._s_0.Z;
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar26 = *plVar25;
            uVar12 = local_100._4_4_;
            lVar20 = (longlong)(int)local_100._4_4_;
            local_118 = ~local_100._4_4_ >> 0x1f;
            *(double *)(lVar26 + lVar19 * 0x18) = dVar8 + *(double *)(lVar26 + lVar19 * 0x18);
            *(double *)(lVar26 + 8 + lVar19 * 0x18) =
                 dVar9 + *(double *)(lVar26 + 8 + lVar19 * 0x18);
            *(double *)(lVar26 + 0x10 + lVar19 * 0x18) =
                 dVar10 + *(double *)(lVar26 + 0x10 + lVar19 * 0x18);
            local_110 = *(longlong **)((longlong)this + 0x10);
            dVar8 = (double)local_170._s_0.X;
            uVar13 = 0;
            if ((int)local_100._4_4_ < (int)local_110[1]) {
              uVar13 = local_118;
            }
            dVar9 = (double)local_170._s_0.Y;
            dVar10 = (double)local_170._s_0.Z;
            local_f0 = lVar19;
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar21 = (longlong)(int)uVar17;
            lVar26 = *local_110;
            local_110 = (longlong *)CONCAT44(local_110._4_4_,~uVar17 >> 0x1f);
            *(double *)(lVar26 + lVar20 * 0x18) = dVar8 + *(double *)(lVar26 + lVar20 * 0x18);
            *(double *)(lVar26 + 8 + lVar20 * 0x18) =
                 dVar9 + *(double *)(lVar26 + 8 + lVar20 * 0x18);
            *(double *)(lVar26 + 0x10 + lVar20 * 0x18) =
                 dVar10 + *(double *)(lVar26 + 0x10 + lVar20 * 0x18);
            local_108 = *(longlong **)((longlong)this + 0x10);
            dVar8 = (double)local_160._s_0.X;
            uVar13 = 0;
            if ((int)uVar17 < (int)local_108[1]) {
              uVar13 = ~uVar17 >> 0x1f;
            }
            dVar9 = (double)local_160._s_0.Y;
            dVar10 = (double)local_160._s_0.Z;
            local_e8 = lVar20;
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar26 = *local_108;
            *(double *)(lVar26 + lVar21 * 0x18) = dVar8 + *(double *)(lVar26 + lVar21 * 0x18);
            *(double *)(lVar26 + 8 + lVar21 * 0x18) =
                 dVar9 + *(double *)(lVar26 + 8 + lVar21 * 0x18);
            *(double *)(lVar26 + 0x10 + lVar21 * 0x18) =
                 dVar10 + *(double *)(lVar26 + 0x10 + lVar21 * 0x18);
            UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
            GetTriElements(this_01,uVar18,(TVector<float> *)&local_180._s_0,
                           (TVector<float> *)&local_170._s_0,(TVector<float> *)&local_160._s_0);
            local_108 = *(longlong **)((longlong)this + 0x18);
            dVar8 = (double)local_180._s_0.X;
            uVar13 = 0;
            if ((int)uVar14 < (int)local_108[1]) {
              uVar13 = uVar15 >> 0x1f;
            }
            dVar9 = (double)local_180._s_0.Y;
            dVar10 = (double)local_180._s_0.Z;
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar26 = *local_108;
            *(double *)(lVar26 + lVar19 * 0x18) = dVar8 + *(double *)(lVar26 + lVar19 * 0x18);
            *(double *)(lVar26 + 8 + lVar19 * 0x18) =
                 dVar9 + *(double *)(lVar26 + 8 + lVar19 * 0x18);
            *(double *)(lVar26 + 0x10 + lVar19 * 0x18) =
                 dVar10 + *(double *)(lVar26 + 0x10 + lVar19 * 0x18);
            plVar25 = *(longlong **)((longlong)this + 0x18);
            dVar8 = (double)local_170._s_0.X;
            uVar14 = 0;
            if ((int)uVar12 < (int)plVar25[1]) {
              uVar14 = local_118;
            }
            dVar9 = (double)local_170._s_0.Y;
            dVar10 = (double)local_170._s_0.Z;
            if ((uVar14 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar19 = *plVar25;
            *(double *)(lVar19 + lVar20 * 0x18) = dVar8 + *(double *)(lVar19 + lVar20 * 0x18);
            *(double *)(lVar19 + 8 + lVar20 * 0x18) =
                 dVar9 + *(double *)(lVar19 + 8 + lVar20 * 0x18);
            *(double *)(lVar19 + 0x10 + lVar20 * 0x18) =
                 dVar10 + *(double *)(lVar19 + 0x10 + lVar20 * 0x18);
            plVar25 = *(longlong **)((longlong)this + 0x18);
            dVar8 = (double)local_160._s_0.X;
            iVar22 = 0;
            if ((int)uVar17 < (int)plVar25[1]) {
              iVar22 = (int)local_110;
            }
            dVar9 = (double)local_160._s_0.Y;
            dVar10 = (double)local_160._s_0.Z;
            if ((iVar22 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar19 = *plVar25;
            *(double *)(lVar19 + lVar21 * 0x18) = dVar8 + *(double *)(lVar19 + lVar21 * 0x18);
            *(double *)(lVar19 + 8 + lVar21 * 0x18) =
                 dVar9 + *(double *)(lVar19 + 8 + lVar21 * 0x18);
            *(double *)(lVar19 + 0x10 + lVar21 * 0x18) =
                 dVar10 + *(double *)(lVar19 + 0x10 + lVar21 * 0x18);
            this_00 = local_120;
          }
          uVar18 = uVar18 + 1;
          dVar8 = __real_3ff0000000000000;
          if ((int)uVar24 <= (int)uVar18) break;
          pFVar4 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          while( true ) {
            if ((*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar18 >> 9) * 8) +
                           (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar18 >> 9) * 8) +
                          (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
            uVar18 = uVar18 + 1;
            if ((int)uVar24 <= (int)uVar18) goto joined_r0x00014ce381bc;
          }
        }
        goto joined_r0x00014ce381bc;
      }
      plVar25 = *(longlong **)((longlong)this + 0x10);
      uVar18 = 0;
      if (0 < (int)plVar25[1]) {
        lVar19 = 0;
        do {
          uVar17 = ~uVar18 >> 0x1f;
          uVar24 = 0;
          if ((int)uVar18 < (int)plVar25[1]) {
            uVar24 = uVar17;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar26 = *plVar25;
          dVar9 = *(double *)(lVar26 + 8 + lVar19);
          dVar10 = *(double *)(lVar26 + 0x10 + lVar19);
          if (0.0 < dVar9 * dVar9 + *(double *)(lVar26 + lVar19) * *(double *)(lVar26 + lVar19) +
                    dVar10 * dVar10) {
            plVar25 = *(longlong **)((longlong)this + 0x10);
            uVar24 = 0;
            if ((int)uVar18 < (int)plVar25[1]) {
              uVar24 = uVar17;
            }
            if ((uVar24 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar26 = *plVar25;
            dVar9 = *(double *)(lVar19 + lVar26);
            dVar10 = *(double *)(lVar19 + 8 + lVar26);
            dVar1 = *(double *)(lVar19 + 0x10 + lVar26);
            auVar27._0_8_ = dVar9 * dVar9;
            auVar27._8_8_ = 0;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = dVar10 * dVar10 + auVar27._0_8_ + dVar1 * dVar1;
            auVar28 = sqrtpd(auVar27,auVar28);
            if (auVar28._0_8_ <= 0.0) {
              *(undefined8 *)(lVar19 + 0x10 + lVar26) = 0;
              *(undefined8 *)(lVar19 + 8 + lVar26) = 0;
              *(undefined8 *)(lVar19 + lVar26) = 0;
            }
            else {
              dVar7 = dVar8 / auVar28._0_8_;
              *(double *)(lVar19 + lVar26) = dVar7 * dVar9;
              *(double *)(lVar19 + 8 + lVar26) = dVar7 * dVar10;
              *(double *)(lVar19 + 0x10 + lVar26) = dVar7 * dVar1;
            }
          }
          plVar25 = *(longlong **)((longlong)this + 0x18);
          uVar24 = 0;
          if ((int)uVar18 < (int)plVar25[1]) {
            uVar24 = uVar17;
          }
          if ((uVar24 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar26 = *plVar25;
          dVar9 = *(double *)(lVar26 + 8 + lVar19);
          dVar10 = *(double *)(lVar26 + 0x10 + lVar19);
          if (0.0 < dVar9 * dVar9 + *(double *)(lVar26 + lVar19) * *(double *)(lVar26 + lVar19) +
                    dVar10 * dVar10) {
            plVar25 = *(longlong **)((longlong)this + 0x18);
            uVar24 = 0;
            if ((int)uVar18 < (int)plVar25[1]) {
              uVar24 = uVar17;
            }
            if ((uVar24 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar26 = *plVar25;
            dVar9 = *(double *)(lVar19 + lVar26);
            dVar10 = *(double *)(lVar19 + 8 + lVar26);
            dVar1 = *(double *)(lVar19 + 0x10 + lVar26);
            auVar29._0_8_ = dVar9 * dVar9;
            auVar29._8_8_ = 0;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = dVar10 * dVar10 + auVar29._0_8_ + dVar1 * dVar1;
            auVar28 = sqrtpd(auVar29,auVar6);
            if (auVar28._0_8_ <= 0.0) {
              *(undefined8 *)(lVar19 + 0x10 + lVar26) = 0;
              *(undefined8 *)(lVar19 + 8 + lVar26) = 0;
              *(undefined8 *)(lVar19 + lVar26) = 0;
            }
            else {
              dVar7 = dVar8 / auVar28._0_8_;
              *(double *)(lVar19 + lVar26) = dVar7 * dVar9;
              *(double *)(lVar19 + 8 + lVar26) = dVar7 * dVar10;
              *(double *)(lVar19 + 0x10 + lVar26) = dVar7 * dVar1;
            }
          }
          plVar25 = *(longlong **)((longlong)this + 0x10);
          uVar18 = uVar18 + 1;
          lVar19 = lVar19 + 0x18;
        } while ((int)uVar18 < (int)plVar25[1]);
      }
    }
    **(undefined1 **)((longlong)this + 0x20) = 1;
  }
  return;
}

// operator() @ 14ce3dbd0

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  FText *pFVar1;
  FDynamicMeshAttributeSet *pFVar2;
  FDynamicMeshAttributeSet *pFVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FText local_38;
  FMeshNormals local_28;
  
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar2 = (param_1->AttributeSet).Ptr;
  pFVar4 = (FDynamicMeshAttributeSet *)0x0;
  local_28.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Normals.ArrayNum = 0;
  local_28.Normals.ArrayMax = 0;
  pFVar3 = pFVar4;
  if (0 < (pFVar2->NormalLayers).Array.ArrayNum) {
    pFVar3 = *(FDynamicMeshAttributeSet **)(pFVar2->NormalLayers).Array.AllocatorInstance.Data;
  }
  local_28.Mesh = param_1;
  if ((pFVar3->NormalLayers).Array.ArrayNum == 0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"RecomputeNormals_NothingToRecompute",
                        L"RecomputeNormals: TargetMesh did not have normals to recompute; falling back to per-vertex normals. Consider using \'Set Mesh To Per Vertex Normals\' or \'Compute Split Normals\' instead."
                       );
    UE::Geometry::AppendWarning((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar1);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    pFVar2 = (param_1->AttributeSet).Ptr;
    pFVar3 = pFVar4;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar3 = pFVar2;
    }
    pFVar2 = pFVar4;
    if (0 < (pFVar3->NormalLayers).Array.ArrayNum) {
      pFVar2 = *(FDynamicMeshAttributeSet **)(pFVar3->NormalLayers).Array.AllocatorInstance.Data;
    }
    UE::Geometry::TDynamicMeshOverlay<float,3>::CreatePerVertex
              ((TDynamicMeshOverlay<float,3> *)pFVar2,0.0);
  }
  pFVar2 = (param_1->AttributeSet).Ptr;
  pFVar3 = pFVar4;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar2;
  }
  pFVar2 = pFVar4;
  if (0 < (pFVar3->NormalLayers).Array.ArrayNum) {
    pFVar2 = *(FDynamicMeshAttributeSet **)(pFVar3->NormalLayers).Array.AllocatorInstance.Data;
  }
  UE::Geometry::FMeshNormals::Compute_Overlay_FaceAvg
            (&local_28,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar2,
             *(bool *)(*(longlong *)((longlong)this + 8) + 1),
             *(bool *)*(longlong *)((longlong)this + 8));
  pFVar2 = (param_1->AttributeSet).Ptr;
  pFVar3 = pFVar4;
  if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar3 = pFVar2;
  }
  if (0 < (pFVar3->NormalLayers).Array.ArrayNum) {
    pFVar4 = *(FDynamicMeshAttributeSet **)(pFVar3->NormalLayers).Array.AllocatorInstance.Data;
  }
  UE::Geometry::FMeshNormals::CopyToOverlay
            (&local_28,(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar4,false)
  ;
  if (local_28.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Normals.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce3dd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormalsForMeshSelection'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  bool bVar1;
  bool bVar2;
  FDynamicMeshAttributeSet *pFVar3;
  int iVar4;
  EGeometryScriptMeshSelectionType EVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FText *pFVar7;
  ForAnyElementType FVar8;
  FDynamicMeshAttributeSet *pFVar9;
  undefined1 auStackY_d8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  undefined1 local_98 [16];
  TArray<int,TSizedDefaultAllocator<32>_> *local_88;
  undefined1 *local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar3 = (param_1->AttributeSet).Ptr;
  if (((pFVar3 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar3->NormalLayers).Array.ArrayNum < 1))
     || (*(longlong *)(pFVar3->NormalLayers).Array.AllocatorInstance.Data == 0)) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_98,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"RecomputeNormalsForMeshSelection_NoAttributes",
                        L"RecomputeNormalsForMeshSelection: TargetMesh has no Normals attribute enabled"
                       );
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar7);
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_98._0_8_ + 0x10))();
    }
  }
  else {
    EVar5 = FGeometryScriptMeshSelection::GetSelectionType
                      (*(FGeometryScriptMeshSelection **)((longlong)this + 8));
    if ((EVar5 == Vertices) || (EVar5 == Edges)) {
      pFVar3 = (param_1->AttributeSet).Ptr;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar9 = (FDynamicMeshAttributeSet *)local_a8.AllocatorInstance.Data;
      if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar9 = pFVar3;
      }
      if (0 < (pFVar9->NormalLayers).Array.ArrayNum) {
                    /* WARNING: Load size is inaccurate */
        local_a8.AllocatorInstance.Data = *(pFVar9->NormalLayers).Array.AllocatorInstance.Data;
      }
      local_88 = &local_a8;
      local_80 = local_78;
      local_78._0_8_ = (FDynamicMeshAttributeSet *)0x0;
      local_98._8_8_ = &local_88;
      local_78._8_8_ = 0;
      local_98._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormalsForMeshSelection'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,void,int>
           ::Call;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_4c = 0x80;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      FGeometryScriptMeshSelection::ProcessByVertexID
                (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,
                 (TFunctionRef<void___cdecl(int)> *)local_98,false);
      bVar1 = *(bool *)*(longlong *)((longlong)this + 0x10);
      bVar2 = *(bool *)(*(longlong *)((longlong)this + 0x10) + 1);
      pTVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                         ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_78,
                          (TArray<int,TSizedDefaultAllocator<32>_> *)local_98);
      UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals(param_1,pTVar6,bVar2,bVar1);
      if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_98._0_8_);
      }
      local_30 = 0;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      iVar4 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar4 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      FVar8.Data = (FScriptContainerElement *)local_78._0_8_;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
        FVar8.Data = (FScriptContainerElement *)local_78._0_8_;
      }
    }
    else {
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      FGeometryScriptMeshSelection::ConvertToMeshIndexArray
                (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,&local_a8,Triangle);
      UE::Geometry::FMeshNormals::RecomputeOverlayTriNormals
                (param_1,&local_a8,*(bool *)(*(longlong *)((longlong)this + 0x10) + 1),
                 *(bool *)*(longlong *)((longlong)this + 0x10));
      FVar8.Data = local_a8.AllocatorInstance.Data;
    }
    if ((FDynamicMeshAttributeSet *)FVar8.Data != (FDynamicMeshAttributeSet *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  return;
}

// operator() @ 14ce40e60

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FText *pFVar11;
  FDynamicMeshAttributeSet *pFVar12;
  int iVar13;
  uint uVar14;
  TDynamicMeshOverlay<float,3> *this_00;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  float local_78;
  float local_74;
  float local_70;
  FIndex3i_u_0 local_6c;
  undefined8 local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  FText local_40;
  
  plVar3 = *(longlong **)this;
  if ((*plVar3 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar3 = (longlong *)*plVar3;
  if ((int)plVar3[1] <
      (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_40,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                         L"SetMeshPerVertexNormals_IncorrectCount",
                         L"SetMeshPerVertexNormals: size of provided VertexNormalList is smaller than MaxVertexID of Mesh"
                        );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar11);
    if (local_40.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    return;
  }
  if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  pFVar12 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar4 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar4;
  }
  if ((pFVar12->NormalLayers).Array.ArrayNum < 1) {
    this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
  }
  else {
    this_00 = *(TDynamicMeshOverlay<float,3> **)(pFVar12->NormalLayers).Array.AllocatorInstance.Data
    ;
  }
  UE::Geometry::TDynamicMeshOverlay<float,3>::ClearElements(this_00);
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&local_50,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
  uVar15 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar14 = 0;
  if (((uVar15 != 0) &&
      (pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar14 = 0,
      0xfffd < (ushort)(**(short **)pFVar5 - 1U))) && (uVar14 = 1, 1 < (int)uVar15)) {
    do {
      sVar1 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8) +
                        (ulonglong)(uVar14 & 0x1ff) * 2);
      if ((sVar1 != 0) && (sVar1 != -1)) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar15);
  }
joined_r0x00014ce40ff3:
  if (uVar14 != uVar15) {
    while( true ) {
      uVar8 = 0;
      if ((int)uVar14 < (int)plVar3[1]) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar16 = *plVar3;
      lVar17 = (longlong)(int)uVar14;
      local_78 = (float)*(double *)(lVar16 + lVar17 * 0x18);
      local_74 = (float)*(double *)(lVar16 + 8 + lVar17 * 0x18);
      local_70 = (float)*(double *)(lVar16 + 0x10 + lVar17 * 0x18);
      iVar9 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement(this_00,&local_78);
      uVar8 = 0;
      if ((int)uVar14 < local_50.ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar14 = uVar14 + 1;
      *(int *)(local_50.AllocatorInstance.Data + lVar17 * 4) = iVar9;
      if ((int)uVar15 <= (int)uVar14) break;
      pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8) +
                       (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8) +
                      (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
        uVar14 = uVar14 + 1;
        if ((int)uVar15 <= (int)uVar14) goto joined_r0x00014ce40ff3;
      }
    }
    goto joined_r0x00014ce40ff3;
  }
  uVar14 = 0;
  uVar15 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if ((uVar15 != 0) &&
     (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
    uVar14 = 1;
    bVar7 = uVar15 == 1;
    if ((int)uVar15 < 2) goto LAB_14ce411a8;
    do {
      lVar16 = *(longlong *)(pFVar5 + (ulonglong)(uVar14 >> 9) * 8);
      if ((*(short *)(lVar16 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar16 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar15);
  }
  bVar7 = uVar14 == uVar15;
LAB_14ce411a8:
  if (!bVar7) {
LAB_14ce411b2:
    do {
      lVar16 = *(longlong *)
                ((param_1->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8);
      uVar8 = *(uint *)(lVar16 + 8 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
      local_60 = *(undefined8 *)(lVar16 + (ulonglong)(uVar14 & 0x1ff) * 0xc);
      uVar10 = 0;
      if ((int)uVar8 < local_50.ArrayNum) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = *(int *)(local_50.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
      lVar16 = (longlong)(int)local_60._4_4_;
      uVar8 = 0;
      if ((int)local_60._4_4_ < local_50.ArrayNum) {
        uVar8 = ~local_60._4_4_ >> 0x1f;
      }
      iVar13 = local_50.ArrayNum;
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar13 = local_50.ArrayNum;
      }
      iVar2 = *(int *)(local_50.AllocatorInstance.Data + lVar16 * 4);
      lVar16 = (longlong)(int)(uint)local_60;
      uVar8 = 0;
      if ((int)(uint)local_60 < iVar13) {
        uVar8 = ~(uint)local_60 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_6c._s_0.A = *(undefined4 *)(local_50.AllocatorInstance.Data + lVar16 * 4);
      local_6c._s_0.B = iVar2;
      local_6c._s_0.C = iVar9;
      UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                (this_00,uVar14,(FIndex3i *)&local_6c._s_0,true);
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar15) {
        do {
          lVar16 = *(longlong *)
                    ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar14 >> 9) * 8);
          if ((*(short *)(lVar16 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar16 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) goto LAB_14ce411b2;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar15);
      }
    } while (uVar14 != uVar15);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ce41380

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  short sVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FText *pFVar11;
  FDynamicMeshAttributeSet *pFVar12;
  FDynamicMeshAttributeSet *pFVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FDynamicMeshAttributeSet *pFVar17;
  uint uVar18;
  longlong lVar19;
  FDynamicMeshAttributeSet *this_00;
  longlong lVar20;
  uint local_res8;
  float local_98;
  float local_94;
  float local_90;
  FIndex3i_u_0 local_8c;
  undefined8 local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  FText local_60 [2];
  
  plVar3 = *(longlong **)this;
  if ((*plVar3 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar3 = (longlong *)*plVar3;
  plVar4 = *(longlong **)((longlong)this + 8);
  if ((*plVar4 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  plVar4 = (longlong *)*plVar4;
  if ((int)plVar3[1] <
      (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (local_60,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                         L"SetMeshPerVertexTangents_IncorrectCount",
                         L"SetMeshPerVertexTangents: size of provided TangentXList is smaller than MaxVertexID of Mesh"
                        );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,
               pFVar11);
    if (local_60[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    if ((param_1->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
    }
    pFVar17 = (param_1->AttributeSet).Ptr;
    pFVar13 = (FDynamicMeshAttributeSet *)0x0;
    iVar9 = (pFVar17->NormalLayers).Array.ArrayNum;
    if (((((iVar9 < 1) ||
          (pFVar5 = (pFVar17->NormalLayers).Array.AllocatorInstance.Data, *(longlong *)pFVar5 == 0))
         || (iVar9 < 2)) || ((*(longlong *)(pFVar5 + 8) == 0 || (iVar9 < 3)))) ||
       (*(longlong *)(pFVar5 + 0x10) == 0)) {
      pFVar12 = pFVar13;
      if (pFVar17 != (FDynamicMeshAttributeSet *)0x0) {
        pFVar12 = pFVar17;
      }
      UE::Geometry::FDynamicMeshAttributeSet::EnableTangents(pFVar12);
    }
    pFVar17 = (param_1->AttributeSet).Ptr;
    pFVar12 = pFVar13;
    if (pFVar17 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar17;
    }
    this_00 = pFVar13;
    if (1 < (pFVar12->NormalLayers).Array.ArrayNum) {
      this_00 = *(FDynamicMeshAttributeSet **)
                 ((pFVar12->NormalLayers).Array.AllocatorInstance.Data + 8);
    }
    pFVar12 = pFVar13;
    if (pFVar17 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar12 = pFVar17;
    }
    pFVar17 = pFVar13;
    if (2 < (pFVar12->NormalLayers).Array.ArrayNum) {
      pFVar17 = *(FDynamicMeshAttributeSet **)
                 ((pFVar12->NormalLayers).Array.AllocatorInstance.Data + 0x10);
    }
    UE::Geometry::TDynamicMeshOverlay<float,3>::ClearElements
              ((TDynamicMeshOverlay<float,3> *)this_00);
    UE::Geometry::TDynamicMeshOverlay<float,3>::ClearElements
              ((TDynamicMeshOverlay<float,3> *)pFVar17);
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&local_70,
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    local_res8 = 0;
    do {
      pFVar12 = pFVar17;
      plVar7 = plVar4;
      if ((int)pFVar13 == 0) {
        pFVar12 = this_00;
        plVar7 = plVar3;
      }
      uVar18 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      uVar16 = 0;
      if ((uVar18 != 0) &&
         (pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
         0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
        uVar15 = 1;
        uVar16 = 1;
        if (1 < (int)uVar18) {
          do {
            sVar1 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar15 >> 9) * 8) +
                              (ulonglong)(uVar15 & 0x1ff) * 2);
            if ((sVar1 != 0) && (uVar16 = uVar15, sVar1 != -1)) break;
            uVar15 = uVar15 + 1;
            uVar16 = uVar15;
          } while ((int)uVar15 < (int)uVar18);
        }
      }
joined_r0x00014ce415c9:
      if (uVar16 != uVar18) {
        while( true ) {
          uVar15 = 0;
          if ((int)uVar16 < (int)plVar7[1]) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar19 = *plVar7;
          lVar20 = (longlong)(int)uVar16;
          local_98 = (float)*(double *)(lVar19 + lVar20 * 0x18);
          local_94 = (float)*(double *)(lVar19 + 8 + lVar20 * 0x18);
          local_90 = (float)*(double *)(lVar19 + 0x10 + lVar20 * 0x18);
          iVar9 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                            ((TDynamicMeshOverlay<float,3> *)pFVar12,&local_98);
          uVar15 = 0;
          if ((int)uVar16 < local_70.ArrayNum) {
            uVar15 = ~uVar16 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar16 = uVar16 + 1;
          *(int *)(local_70.AllocatorInstance.Data + lVar20 * 4) = iVar9;
          if ((int)uVar18 <= (int)uVar16) break;
          pFVar5 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          while( true ) {
            if ((*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                           (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
               (*(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                          (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
            uVar16 = uVar16 + 1;
            if ((int)uVar18 <= (int)uVar16) goto joined_r0x00014ce415c9;
          }
        }
        goto joined_r0x00014ce415c9;
      }
      uVar16 = 0;
      uVar18 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
      if ((uVar18 == 0) ||
         (pFVar5 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         (ushort)(**(short **)pFVar5 - 1U) < 0xfffe)) {
LAB_14ce41777:
        bVar8 = uVar16 == uVar18;
      }
      else {
        uVar16 = 1;
        bVar8 = uVar18 == 1;
        if (1 < (int)uVar18) {
          do {
            sVar1 = *(short *)(*(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8) +
                              (ulonglong)(uVar16 & 0x1ff) * 2);
            if ((sVar1 != 0) && (sVar1 != -1)) break;
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)uVar18);
          goto LAB_14ce41777;
        }
      }
      if (!bVar8) {
LAB_14ce41790:
        do {
          lVar19 = *(longlong *)
                    ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8);
          uVar15 = *(uint *)(lVar19 + 8 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
          local_80 = *(undefined8 *)(lVar19 + (ulonglong)(uVar16 & 0x1ff) * 0xc);
          uVar10 = 0;
          if ((int)uVar15 < local_70.ArrayNum) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar9 = *(int *)(local_70.AllocatorInstance.Data + (longlong)(int)uVar15 * 4);
          lVar19 = (longlong)(int)local_80._4_4_;
          uVar15 = 0;
          if ((int)local_80._4_4_ < local_70.ArrayNum) {
            uVar15 = ~local_80._4_4_ >> 0x1f;
          }
          iVar14 = local_70.ArrayNum;
          if (uVar15 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar14 = local_70.ArrayNum;
          }
          iVar2 = *(int *)(local_70.AllocatorInstance.Data + lVar19 * 4);
          lVar19 = (longlong)(int)(uint)local_80;
          uVar15 = 0;
          if ((int)(uint)local_80 < iVar14) {
            uVar15 = ~(uint)local_80 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_8c._s_0.A = *(undefined4 *)(local_70.AllocatorInstance.Data + lVar19 * 4);
          local_8c._s_0.B = iVar2;
          local_8c._s_0.C = iVar9;
          UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                    ((TDynamicMeshOverlay<float,3> *)pFVar12,uVar16,(FIndex3i *)&local_8c._s_0,true)
          ;
          uVar16 = uVar16 + 1;
          if ((int)uVar16 < (int)uVar18) {
            do {
              lVar19 = *(longlong *)
                        ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar16 >> 9) * 8);
              if ((*(short *)(lVar19 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
                 (*(short *)(lVar19 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) goto LAB_14ce41790;
              uVar16 = uVar16 + 1;
            } while ((int)uVar16 < (int)uVar18);
          }
        } while (uVar16 != uVar18);
      }
      local_res8 = local_res8 + 1;
      pFVar13 = (FDynamicMeshAttributeSet *)(ulonglong)local_res8;
    } while ((int)local_res8 < 2);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14ce422d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::SetSplitNormalsAlongSelectedEdges'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  TDynamicMeshOverlay<float,3> *pTVar9;
  FText *pFVar10;
  byte bVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FDynamicMeshAttributeSet *pFVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  FDynamicMeshAttributeSet *pFVar18;
  FDynamicMeshAttributeSet *pFVar19;
  ulong64 uVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  undefined1 auStackY_248 [32];
  undefined1 local_216 [6];
  undefined8 local_210;
  TArray<int,TSizedDefaultAllocator<32>_> local_208;
  int local_1f8 [2];
  uint local_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  undefined4 local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  uint uStack_1cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c8;
  undefined4 local_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b0;
  void *local_1a0;
  int local_198;
  int local_194;
  TArray<int,TSizedDefaultAllocator<32>_> *local_190;
  TArray<int,TSizedDefaultAllocator<32>_> *local_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_178;
  longlong *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  FSparseArrayAllocationInfo local_130;
  code *local_120;
  TArray<int,TSizedDefaultAllocator<32>_> **local_118;
  code *local_110;
  TArray<int,TSizedDefaultAllocator<32>_> **local_108;
  FText local_100;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar19 = (param_1->AttributeSet).Ptr;
  local_1a0 = this;
  if (((pFVar19 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar19->NormalLayers).Array.ArrayNum < 1))
     || (*(longlong *)(pFVar19->NormalLayers).Array.AllocatorInstance.Data == 0)) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_100,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                         L"SetSplitNormalsAlongSelectedEdges_NoAttributes",
                         L"SetSplitNormalsAlongSelectedEdges: TargetMesh has no Normals attribute enabled"
                        );
    UE::Geometry::AppendError((UGeometryScriptDebug *)**(undefined8 **)this,InvalidInputs,pFVar10);
    if (local_100.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    return;
  }
  uVar12 = 0;
  local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.ArrayNum = 0;
  local_208.ArrayMax = 0;
  FGeometryScriptMeshSelection::ConvertToMeshIndexArray
            (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,&local_208,Edge);
  FVar25.Data = local_208.AllocatorInstance.Data;
  iVar7 = local_208.ArrayNum;
  uVar20 = (ulong64)local_208.ArrayNum;
  if ((local_208.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (iVar7 == 0) goto LAB_14ce42625;
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum(uVar20);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_e8,iVar7);
  uVar16 = 1;
  if (3 < (uint)iVar7) {
    uVar23 = (ulonglong)(((uint)iVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar16 <= (int)local_a0)) goto LAB_14ce42625;
  local_a0 = uVar16;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar16 != 0) {
    uVar17 = uVar16;
    if (uVar16 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar17 = 0;
        goto LAB_14ce4245d;
      }
    }
    else {
LAB_14ce4245d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar17,4);
    }
    if (0 < (int)uVar16) {
      uVar24 = (ulonglong)uVar16;
      uVar23 = uVar12;
      do {
        FVar13.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_a8.Data;
        }
        uVar8 = uVar23 & (longlong)(int)uVar16 - 1U;
        uVar23 = uVar23 + 1;
        *(undefined4 *)(FVar13.Data + uVar8 * 4) = 0xffffffff;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
  }
  if (local_a0 != 0) {
    pTStack_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
    local_1f0 = 0;
    uStack_1ec = 1;
    uStack_1dc = 0;
    uStack_1d8 = 0;
    if (local_c0 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_c8;
      }
      uVar16 = *(uint *)FVar15;
      uVar23 = uVar12;
      while (uVar16 == 0) {
        uStack_1d8 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_1d8;
        iVar7 = (int)uVar12;
        local_1f0 = iVar7 + 1;
        uVar12 = (ulonglong)local_1f0;
        if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1f0)
        goto LAB_14ce4257e;
        uVar16 = ((uint *)((longlong)FVar15 + 4))[iVar7];
      }
      uStack_1ec = -uVar16 & uVar16;
      uVar12 = (ulonglong)uStack_1ec * 2 + 1;
      lVar3 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_1dc = (int)lVar3 + -1 + (int)uVar23;
      uVar12 = (ulonglong)uStack_1dc;
      if ((int)local_c0 < (int)uStack_1dc) {
LAB_14ce4257e:
        uVar12 = (ulonglong)local_c0;
        uStack_1dc = local_c0;
      }
    }
    local_1e0 = 0xffffffff;
    local_180 = (longlong *)local_e8;
    local_178._padding_ = CONCAT44(uStack_1ec,local_1f0);
    local_178.CurrentBitIndex = uStack_1dc;
    local_178.UnvisitedBitMask = 0xffffffff;
    local_178._28_4_ = uStack_1d4;
    local_178.BaseBitIndex = uStack_1d8;
    local_178.Array = pTStack_1e8;
    if ((int)uVar12 < (int)local_c0) {
      do {
        iVar7 = (int)uVar12;
        uVar16 = local_a0 - 1 & *(uint *)(*local_180 + (longlong)iVar7 * 0xc);
        lVar3 = *local_180 + (longlong)iVar7 * 0xc;
        *(uint *)(lVar3 + 8) = uVar16;
        FVar13.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_a8.Data;
        }
        uVar12 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar16;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar13.Data + uVar12 * 4);
        *(int *)(FVar13.Data + uVar12 * 4) = iVar7;
        local_178.UnvisitedBitMask = local_178.UnvisitedBitMask & ~local_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_178);
        uVar12 = (ulonglong)(uint)local_178.CurrentBitIndex;
      } while (local_178.CurrentBitIndex < (local_178.Array)->NumBits);
    }
  }
LAB_14ce42625:
  pFVar1 = FVar25.Data + uVar20 * 4;
  iVar7 = local_b8;
  do {
    local_b8 = iVar7;
    if (FVar25.Data == pFVar1) {
      pFVar19 = (FDynamicMeshAttributeSet *)0x0;
      pFVar18 = pFVar19;
      while( true ) {
        iVar7 = (**(code **)(((param_1->AttributeSet).Ptr)->_padding_ + 0xb8))();
        iVar6 = (int)pFVar18;
        if (iVar7 <= iVar6) break;
        pFVar18 = (param_1->AttributeSet).Ptr;
        if (**(char **)((longlong)this + 0x10) == '\0') {
          pTVar9 = (TDynamicMeshOverlay<float,3> *)
                   UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar18,iVar6);
          UE::Geometry::FDynamicMeshEditor::RemoveSeamsAtEdges
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,pTVar9);
          pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar6 + 1);
        }
        else {
          pTVar9 = (TDynamicMeshOverlay<float,3> *)
                   UE::Geometry::FDynamicMeshAttributeSet::GetNormalLayer(pFVar18,iVar6);
          UE::Geometry::FDynamicMeshEditor::CreateSeamsAtEdges
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,pTVar9,
                     (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
          pFVar18 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar6 + 1);
        }
      }
      if (**(char **)((longlong)this + 0x18) != '\0') {
        pFVar18 = (param_1->AttributeSet).Ptr;
        pFVar14 = pFVar19;
        if (pFVar18 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar14 = pFVar18;
        }
        if (0 < (pFVar14->NormalLayers).Array.ArrayNum) {
          pFVar19 = *(FDynamicMeshAttributeSet **)
                     (pFVar14->NormalLayers).Array.AllocatorInstance.Data;
        }
        iVar7 = local_208.ArrayNum;
        uVar12 = (ulonglong)local_208.ArrayNum;
        local_98.Elements._0_8_ = 0;
        local_98.Elements._32_8_ = 0;
        local_98.Elements._40_4_ = 0;
        local_98.Elements._52_4_ = 0;
        pFVar1 = local_208.AllocatorInstance.Data + uVar12 * 4;
        local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_98.HashSize = 0;
        local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.Elements._8_8_ = 0;
        local_98.Elements._44_4_ = 0x80;
        local_98.Elements._48_4_ = 0xffffffff;
        local_1b0.ArrayNum = 0;
        local_1b0.ArrayMax = 0;
        FVar25.Data = local_208.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar12 != iVar7) {
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_216);
          }
          if (FVar25.Data == pFVar1) break;
          local_210 = *(undefined8 *)
                       (*(longlong *)
                         ((param_1->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)(*(uint *)FVar25.Data >> 9) * 8) +
                       (ulonglong)(*(uint *)FVar25.Data & 0x1ff) * 0x10);
          iVar6 = (int)local_210;
          local_1f8[0] = iVar6;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_198,(bool *)local_1f8);
          local_190 = &local_1b0;
          local_120 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshNormalsFunctions::SetSplitNormalsAlongSelectedEdges'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>::operator()'::__l5::<lambda_1>,bool,int,int,UE::Math::TVector<float>_const_&>
                      ::Call;
          local_118 = &local_190;
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
          EnumerateVertexElements
                    ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar19,iVar6,
                     (TFunctionRef<bool___cdecl(int,int,UE::Math::TVector<float>_const_&)> *)
                     &local_120,true);
          iVar6 = local_210._4_4_;
          local_210 = CONCAT44(local_210._4_4_,local_210._4_4_);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_98,&local_194,(bool *)&local_210);
          local_188 = &local_1b0;
          local_110 = UE::Core::Private::Function::
                      TFunctionRefCaller<```UGeometryScriptLibrary_MeshNormalsFunctions::SetSplitNormalsAlongSelectedEdges'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>::operator()'::__l5::<lambda_1>,bool,int,int,UE::Math::TVector<float>_const_&>
                      ::Call;
          local_108 = &local_188;
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
          EnumerateVertexElements
                    ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar19,iVar6,
                     (TFunctionRef<bool___cdecl(int,int,UE::Math::TVector<float>_const_&)> *)
                     &local_110,true);
          uVar12 = local_208._8_8_ & 0xffffffff;
          FVar25.Data = FVar25.Data + 4;
        }
        UE::Geometry::FMeshNormals::RecomputeOverlayElementNormals
                  (param_1,&local_1b0,*(bool *)*(undefined8 *)((longlong)local_1a0 + 0x20),
                   *(bool *)*(undefined8 *)((longlong)local_1a0 + 0x20));
        if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.AllocatorInstance.Data);
        }
        local_98.HashSize = 0;
        if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_98.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_98.Elements);
      }
      local_a0 = 0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_e8);
      if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.AllocatorInstance.Data);
      }
      return;
    }
    puVar21 = (uint *)0x0;
    if (local_b4 == 0) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_e8,(int *)(local_e8 + 8),
                         (int *)(local_e8 + 0xc));
      iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),1);
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_c8;
      }
      bVar11 = (byte)iVar6 & 0x1f;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0x1f;
        bVar11 = bVar11 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar15 + (longlong)(iVar6 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar11 & 0x1f));
    }
    else {
      local_b4 = local_b4 + -1;
      local_b8 = *(int *)(local_e8._0_8_ + (longlong)iVar7 * 0xc + 4);
      if (local_b4 != 0) {
        *(undefined4 *)(local_e8._0_8_ + (longlong)local_b8 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,&local_130,iVar7);
    if (local_130.Pointer != (uint *)0x0) {
      *(uint *)local_130.Pointer = *(uint *)FVar25.Data;
      *(uint *)((longlong)local_130.Pointer + 4) = 0xffffffff;
      puVar21 = local_130.Pointer;
    }
    uVar16 = *puVar21;
    if ((local_e8._8_4_ - local_b4 != 1) && (local_e8._8_4_ != local_b4)) {
      FVar13.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_a8.Data;
      }
      for (iVar7 = *(int *)(FVar13.Data + (ulonglong)(local_a0 - 1 & uVar16) * 4); iVar7 != -1;
          iVar7 = *(int *)(local_e8._0_8_ + (longlong)iVar7 * 0xc + 4)) {
        if (*(uint *)(local_e8._0_8_ + (longlong)iVar7 * 0xc) == uVar16) {
          if (iVar7 != -1) {
            *(uint *)(local_e8._0_8_ + (longlong)iVar7 * 0xc) = uVar16;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_e8,local_130.Index,1);
            goto LAB_14ce42a45;
          }
          break;
        }
      }
    }
    uVar12 = 0;
    uVar22 = local_e8._8_4_ - local_b4;
    uVar17 = 1;
    if (3 < uVar22) {
      uVar23 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uVar17 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar22 < 1) || ((int)uVar17 <= (int)local_a0)) {
      uVar16 = local_a0 - 1 & uVar16;
      puVar21[2] = uVar16;
      FVar13.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar13.Data = local_a8.Data;
      }
      uVar12 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar16;
      puVar21[1] = *(uint *)(FVar13.Data + uVar12 * 4);
      *(int *)(FVar13.Data + uVar12 * 4) = local_130.Index;
    }
    else {
      local_a0 = uVar17;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
      }
      if (uVar17 != 0) {
        uVar16 = uVar17;
        if (uVar17 < 2) {
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            uVar16 = 0;
            goto LAB_14ce42846;
          }
        }
        else {
LAB_14ce42846:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar16,4)
          ;
        }
        if (0 < (int)uVar17) {
          uVar24 = (ulonglong)uVar17;
          uVar23 = uVar12;
          do {
            FVar13.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_a8.Data;
            }
            uVar8 = uVar23 & (longlong)(int)uVar17 - 1U;
            uVar23 = uVar23 + 1;
            *(undefined4 *)(FVar13.Data + uVar8 * 4) = 0xffffffff;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      if (local_a0 != 0) {
        pTStack_1c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
        local_1d0 = 0;
        uStack_1cc = 1;
        uStack_1bc = 0;
        uStack_1b8 = 0;
        if (local_c0 != 0) {
          FVar15 = (ForElementType<unsigned_int>)((longlong)local_e8 + 0x10);
          if (local_c8 != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_c8;
          }
          uVar16 = *(uint *)FVar15;
          uVar23 = uVar12;
          while (uVar16 == 0) {
            uStack_1b8 = (int)uVar23 + 0x20;
            uVar23 = (ulonglong)uStack_1b8;
            iVar7 = (int)uVar12;
            local_1d0 = iVar7 + 1;
            uVar12 = (ulonglong)local_1d0;
            if ((int)((local_c0 - 1) + ((int)(local_c0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1d0)
            goto LAB_14ce4295b;
            uVar16 = ((uint *)((longlong)FVar15 + 4))[iVar7];
          }
          uStack_1cc = -uVar16 & uVar16;
          uVar12 = (ulonglong)uStack_1cc * 2 + 1;
          lVar3 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uStack_1bc = (int)lVar3 + -1 + (int)uVar23;
          uVar12 = (ulonglong)uStack_1bc;
          if ((int)local_c0 < (int)uStack_1bc) {
LAB_14ce4295b:
            uVar12 = (ulonglong)local_c0;
            uStack_1bc = local_c0;
          }
        }
        local_1c0 = 0xffffffff;
        local_158 = (longlong *)local_e8;
        local_150._padding_ = CONCAT44(uStack_1cc,local_1d0);
        local_150.CurrentBitIndex = uStack_1bc;
        local_150.UnvisitedBitMask = 0xffffffff;
        local_150._28_4_ = uStack_1b4;
        local_150.BaseBitIndex = uStack_1b8;
        local_150.Array = pTStack_1c8;
        if ((int)uVar12 < (int)local_c0) {
          do {
            iVar7 = (int)uVar12;
            uVar16 = local_a0 - 1 & *(uint *)(*local_158 + (longlong)iVar7 * 0xc);
            lVar3 = *local_158 + (longlong)iVar7 * 0xc;
            *(uint *)(lVar3 + 8) = uVar16;
            FVar13.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar13.Data = local_a8.Data;
            }
            uVar12 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar16;
            *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(FVar13.Data + uVar12 * 4);
            *(int *)(FVar13.Data + uVar12 * 4) = iVar7;
            local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
            uVar12 = (ulonglong)(uint)local_150.CurrentBitIndex;
          } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
        }
      }
    }
LAB_14ce42a45:
    FVar25.Data = FVar25.Data + 4;
    this = local_1a0;
    iVar7 = local_b8;
  } while( true );
}

// operator() @ 14ce43d70

bool __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1,
          TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *param_2,
          TVector<double> *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined1 uVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TDynamicMeshOverlay<float,3> *local_res18;
  FIndex3i_u_0 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  code *local_a8;
  TDynamicMeshOverlay<float,3> ***local_a0;
  TDynamicMeshOverlay<float,3> **local_98;
  FDynamicMesh3 *local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  pFVar6 = *(ForAnyElementType **)((longlong)this + 8);
  iVar5 = *(int *)((longlong)&pFVar6[1].Data + 4);
  *(undefined4 *)&pFVar6[1].Data = 0;
  local_res18 = (TDynamicMeshOverlay<float,3> *)param_2;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,pFVar6,0,(int *)((longlong)&pFVar6[1].Data + 4));
  }
  pFVar6 = *(ForAnyElementType **)((longlong)this + 0x10);
  iVar5 = *(int *)((longlong)&pFVar6[1].Data + 4);
  *(undefined4 *)&pFVar6[1].Data = 0;
  if (iVar5 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,pFVar6,0,(int *)((longlong)&pFVar6[1].Data + 4));
  }
  local_98 = &local_res18;
  local_80 = *(undefined8 *)((longlong)this + 8);
  local_78 = *(undefined8 *)((longlong)this + 0x10);
  local_a0 = &local_98;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_90 = param_1;
  local_88 = this;
  UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
            (param_1,*(int *)this,(TFunctionRef<void___cdecl(int)> *)&local_a8);
  if (*(int *)(*(longlong *)((longlong)this + 8) + 8) != 0) {
    puVar7 = *(undefined8 **)((longlong)this + 0x10);
    iVar5 = *(int *)(puVar7 + 1);
    if ((iVar5 == 1) || (*(char *)((longlong)this + 0x18) == '\0')) {
      piVar17 = (int *)*puVar7;
      piVar1 = piVar17 + iVar5;
      while( true ) {
        if (*(int *)(puVar7 + 1) != iVar5) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (piVar17 == piVar1) break;
        dVar2 = (param_3->field0_0x0)._s_0.Z;
        uVar12 = *piVar17 * 3;
        *(float *)(*(longlong *)
                    ((local_res18->Elements).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4) =
             (float)(param_3->field0_0x0)._s_0.X;
        *(float *)(*(longlong *)
                    ((local_res18->Elements).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar12 + 1 >> 9) * 8) + (ulonglong)(uVar12 + 1 & 0x1ff) * 4) =
             (float)(param_3->field0_0x0)._s_0.Y;
        piVar17 = piVar17 + 1;
        *(float *)(*(longlong *)
                    ((local_res18->Elements).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar12 + 2 >> 9) * 8) + (ulonglong)(uVar12 + 2 & 0x1ff) * 4) =
             (float)dVar2;
      }
    }
    else {
      dVar2 = (param_3->field0_0x0)._s_0.X;
      dVar3 = (param_3->field0_0x0)._s_0.Y;
      dVar4 = (param_3->field0_0x0)._s_0.Z;
      if ((iVar5 < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar11 = (code *)swi(3);
        uVar15 = (*pcVar11)();
        return (bool)uVar15;
      }
      uVar12 = *(int *)*puVar7 * 3;
      *(float *)(*(longlong *)
                  ((local_res18->Elements).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4) = (float)dVar2;
      *(float *)(*(longlong *)
                  ((local_res18->Elements).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar12 + 1 >> 9) * 8) + (ulonglong)(uVar12 + 1 & 0x1ff) * 4) =
           (float)dVar3;
      *(float *)(*(longlong *)
                  ((local_res18->Elements).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar12 + 2 >> 9) * 8) + (ulonglong)(uVar12 + 2 & 0x1ff) * 4) =
           (float)dVar4;
      puVar8 = *(undefined8 **)((longlong)this + 8);
      iVar5 = *(int *)(puVar8 + 1);
      puVar16 = (undefined8 *)*puVar8;
      puVar7 = (undefined8 *)((longlong)puVar16 + (longlong)iVar5 * 0xc);
      while( true ) {
        if (*(int *)(puVar8 + 1) != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (puVar16 == puVar7) break;
        local_b0 = *(undefined4 *)(puVar16 + 1);
        local_b8 = *puVar16;
        puVar9 = *(undefined8 **)((longlong)this + 0x10);
        iVar13 = (int)local_b8;
        pFVar10 = (local_res18->ElementTriangles).Blocks.AllocatorInstance.Data;
        uVar12 = (int)local_b8 * 3;
        local_c8._s_0.C =
             *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                     (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
        local_c8._s_0.B =
             *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                     (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
        local_c8._s_0.A =
             *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar12 >> 9) * 8) +
                     (ulonglong)(uVar12 & 0x1ff) * 4);
        if ((*(int *)(puVar9 + 1) < 1) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar11 = (code *)swi(3);
          uVar15 = (*pcVar11)();
          return (bool)uVar15;
        }
        *(undefined4 *)((longlong)&local_c8 + (longlong)local_b8._4_4_ * 4) = *(undefined4 *)*puVar9
        ;
        UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
                  (local_res18,iVar13,(FIndex3i *)&local_c8._s_0,true);
        puVar16 = (undefined8 *)((longlong)puVar16 + 0xc);
      }
    }
    return true;
  }
  return false;
}

// operator() @ 14ce479b0

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals'::__l5::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint uVar1;
  FDynamicMeshAttributeSet *pFVar2;
  double *pdVar3;
  longlong lVar4;
  int iVar5;
  FDynamicMeshAttributeSet *pFVar6;
  FDynamicMeshAttributeSet *this_00;
  float local_28;
  float local_24;
  float local_20;
  FIndex3i_u_0 local_1c;
  
  uVar1 = **(uint **)this;
  if ((((-1 < (int)uVar1) &&
       ((int)uVar1 <
        (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
      ((ushort)(*(short *)(*(longlong *)
                            ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) <
       0xfffe)) &&
     (((pFVar2 = (param_1->AttributeSet).Ptr, pFVar2 != (FDynamicMeshAttributeSet *)0x0 &&
       (0 < (pFVar2->NormalLayers).Array.ArrayNum)) &&
      (*(longlong *)(pFVar2->NormalLayers).Array.AllocatorInstance.Data != 0)))) {
    this_00 = (FDynamicMeshAttributeSet *)0x0;
    **(undefined1 **)((longlong)this + 8) = 1;
    pFVar2 = (param_1->AttributeSet).Ptr;
    pFVar6 = this_00;
    if (pFVar2 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar6 = pFVar2;
    }
    if (0 < (pFVar6->NormalLayers).Array.ArrayNum) {
      this_00 = *(FDynamicMeshAttributeSet **)(pFVar6->NormalLayers).Array.AllocatorInstance.Data;
    }
    pdVar3 = *(double **)((longlong)this + 0x10);
    local_20 = (float)pdVar3[2];
    local_24 = (float)pdVar3[1];
    local_28 = (float)*pdVar3;
    iVar5 = UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                      ((TDynamicMeshOverlay<float,3> *)this_00,&local_28);
    lVar4 = *(longlong *)((longlong)this + 0x10);
    local_20 = (float)*(double *)(lVar4 + 0x28);
    local_24 = (float)*(double *)(lVar4 + 0x20);
    local_28 = (float)*(double *)(lVar4 + 0x18);
    local_1c._s_0.B =
         UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                   ((TDynamicMeshOverlay<float,3> *)this_00,&local_28);
    lVar4 = *(longlong *)((longlong)this + 0x10);
    local_20 = (float)*(double *)(lVar4 + 0x40);
    local_24 = (float)*(double *)(lVar4 + 0x38);
    local_28 = (float)*(double *)(lVar4 + 0x30);
    local_1c._s_0.A = iVar5;
    local_1c._s_0.C =
         UE::Geometry::TDynamicMeshOverlay<float,3>::AppendElement
                   ((TDynamicMeshOverlay<float,3> *)this_00,&local_28);
    UE::Geometry::TDynamicMeshOverlay<float,3>::SetTriangle
              ((TDynamicMeshOverlay<float,3> *)this_00,**(int **)this,(FIndex3i *)&local_1c._s_0,
               true);
  }
  return;
}

// operator() @ 14ce4aeb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal'::__l2::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  double *pdVar5;
  bool bVar6;
  bool bVar7;
  FDynamicMeshAttributeSet *pFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  FDynamicMeshAttributeSet *pFVar10;
  FDynamicMeshAttributeSet *pFVar11;
  TVector<double>_u_0 local_28;
  
  pFVar9 = (param_1->AttributeSet).Ptr;
  if ((((pFVar9 == (FDynamicMeshAttributeSet *)0x0) || ((pFVar9->NormalLayers).Array.ArrayNum < 1))
      || (lVar3 = *(longlong *)(pFVar9->NormalLayers).Array.AllocatorInstance.Data, lVar3 == 0)) ||
     (*(int *)(lVar3 + 0x38) == 0)) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return;
    }
  }
  else {
    if (**(char **)this != '\0') {
      iVar1 = (pFVar9->NormalLayers).Array.ArrayNum;
      pFVar4 = (pFVar9->NormalLayers).Array.AllocatorInstance.Data;
      if (((iVar1 < 2) || (*(longlong *)(pFVar4 + 8) == 0)) ||
         ((iVar1 < 3 || (*(longlong *)(pFVar4 + 0x10) == 0)))) {
        if ((byte)LogGeometry._0_1_ < 3) {
          return;
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
        return;
      }
    }
    uVar2 = **(uint **)((longlong)this + 8);
    if ((((int)uVar2 < 0) ||
        ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance
                                       .Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      if (2 < (byte)LogGeometry._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
        return;
      }
    }
    else {
      pFVar9 = (FDynamicMeshAttributeSet *)0x0;
      **(undefined1 **)((longlong)this + 0x10) = 1;
      if (**(char **)((longlong)this + 0x18) != '\0') {
        pFVar10 = (param_1->AttributeSet).Ptr;
        pFVar8 = pFVar9;
        if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar8 = pFVar10;
        }
        pFVar10 = pFVar9;
        if (0 < (pFVar8->NormalLayers).Array.ArrayNum) {
          pFVar10 = *(FDynamicMeshAttributeSet **)
                     (pFVar8->NormalLayers).Array.AllocatorInstance.Data;
        }
        pdVar5 = *(double **)((longlong)this + 0x28);
        local_28._s_0.X = *pdVar5;
        local_28._s_0.Y = pdVar5[1];
        local_28._s_0.Z = pdVar5[2];
        bVar6 = __l2::<lambda_1>::operator()
                          (*(void **)((longlong)this + 0x20),param_1,
                           (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar10,
                           (TVector<double> *)&local_28._s_0);
        if (!bVar6) {
          if (2 < (byte)LogGeometry._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
          }
          **(undefined1 **)((longlong)this + 0x10) = 0;
        }
      }
      if (**(char **)this != '\0') {
        pFVar10 = (param_1->AttributeSet).Ptr;
        pFVar8 = pFVar9;
        if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar8 = pFVar10;
        }
        pFVar11 = pFVar9;
        if (1 < (pFVar8->NormalLayers).Array.ArrayNum) {
          pFVar11 = *(FDynamicMeshAttributeSet **)
                     ((pFVar8->NormalLayers).Array.AllocatorInstance.Data + 8);
        }
        pFVar8 = pFVar9;
        if (pFVar10 != (FDynamicMeshAttributeSet *)0x0) {
          pFVar8 = pFVar10;
        }
        if (2 < (pFVar8->NormalLayers).Array.ArrayNum) {
          pFVar9 = *(FDynamicMeshAttributeSet **)
                    ((pFVar8->NormalLayers).Array.AllocatorInstance.Data + 0x10);
        }
        pdVar5 = *(double **)((longlong)this + 0x30);
        local_28._s_0.X = *pdVar5;
        local_28._s_0.Y = pdVar5[1];
        local_28._s_0.Z = pdVar5[2];
        bVar6 = __l2::<lambda_1>::operator()
                          (*(void **)((longlong)this + 0x20),param_1,
                           (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar11,
                           (TVector<double> *)&local_28._s_0);
        pdVar5 = *(double **)((longlong)this + 0x38);
        local_28._s_0.X = *pdVar5;
        local_28._s_0.Y = pdVar5[1];
        local_28._s_0.Z = pdVar5[2];
        bVar7 = __l2::<lambda_1>::operator()
                          (*(void **)((longlong)this + 0x20),param_1,
                           (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar9,
                           (TVector<double> *)&local_28._s_0);
        if ((!bVar6) || (!bVar7)) {
          if (2 < (byte)LogGeometry._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
          }
          **(undefined1 **)((longlong)this + 0x10) = 0;
        }
      }
    }
  }
  return;
}

// AutoRepairNormals @ 14ce5ceb0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"AutoRepairNormals_InvalidInput",L"AutoRepairNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ComputeSplitNormals @ 14ce641d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals
          (UDynamicMesh *param_1,FGeometryScriptSplitNormalsOptions *param_2,
          FGeometryScriptCalculateNormalsOptions param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptCalculateNormalsOptions local_res18 [4];
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  FGeometryScriptSplitNormalsOptions *local_28;
  UGeometryScriptDebug **local_20;
  FGeometryScriptCalculateNormalsOptions *local_18;
  
  local_res18[0] = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"ComputeSplitNormals_InvalidInput",
                        L"ComputeSplitNormals: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_20 = &local_res20;
  local_18 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ComputeTangents @ 14ce64290

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents
          (UDynamicMesh *param_1,FGeometryScriptTangentsOptions param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptTangentsOptions local_res10;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptTangentsOptions *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"ComputeTangents_InvalidInput",L"ComputeTangents: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// DiscardTangents @ 14ce686f0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"DiscardTangents_InvalidInput",L"DiscardTangents: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// FlipNormals @ 14ce6a1d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"FlipNormals_InvalidInput",L"FlipNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// FlipTriangleSelectionNormals @ 14ce6a280

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::FlipTriangleSelectionNormals
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,bool param_3,bool param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptMeshSelection *local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"FlipTriangleSelectionNormals_InvalidInput",
                        L"FlipTriangleSelectionNormals: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if ((!param_3) && (!param_4)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return param_1;
  }
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::FlipTriangleSelectionNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  local_1f = param_4;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// GetMeshHasTangents @ 14ce6b6d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents
          (UDynamicMesh *param_1,bool *param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  bool *local_res8;
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"GetMeshHasTangents_InvalidInput",L"GetMeshHasTangents: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18._8_8_ = &local_res8;
  *param_2 = false;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_res8 = param_2;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
  return param_1;
}

// GetMeshPerVertexNormals @ 14ce6b870

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals
          (UDynamicMesh *param_1,FGeometryScriptVectorList *param_2,bool *param_3,bool *param_4,
          bool param_5)

{
  code *pcVar1;
  bool bVar2;
  UDynamicMesh *pUVar3;
  code *local_38;
  bool **local_30;
  bool *local_28;
  bool *local_20;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_18;
  bool *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    FGeometryScriptVectorList::Reset(param_2,0);
    if ((param_2->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
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
    local_18 = (param_2->List).Object;
    local_20 = &param_5;
    local_30 = &local_28;
    *param_4 = false;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    *param_3 = false;
    local_28 = param_4;
    local_10 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_38)
    ;
  }
  return param_1;
}

// GetMeshPerVertexTangents @ 14ce6b960

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents
          (UDynamicMesh *param_1,FGeometryScriptVectorList *param_2,
          FGeometryScriptVectorList *param_3,bool *param_4,bool *param_5,bool param_6)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDynamicMesh *pUVar4;
  code *local_48;
  bool **local_40;
  bool *local_38;
  bool *local_30;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_28;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_20;
  bool *local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    FGeometryScriptVectorList::Reset(param_2,0);
    FGeometryScriptVectorList::Reset(param_3,0);
    if ((param_2->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UDynamicMesh *)(*pcVar2)();
        return pUVar4;
      }
    }
    pTVar1 = (param_2->List).Object;
    if ((param_3->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UDynamicMesh *)(*pcVar2)();
        return pUVar4;
      }
    }
    local_20 = (param_3->List).Object;
    local_38 = param_5;
    *param_5 = false;
    local_30 = &param_6;
    local_40 = &local_38;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    *param_4 = false;
    local_28 = pTVar1;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_48)
    ;
  }
  return param_1;
}

// GetPrivateStaticClass @ 14ce6cdb0

UClass * __cdecl UGeometryScriptLibrary_MeshNormalsFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshNormalsFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshNormalsFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshNormalsFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshNormalsFunctions.InnerSingleton;
}

// RecomputeNormals @ 14ce70e20

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals
          (UDynamicMesh *param_1,FGeometryScriptCalculateNormalsOptions param_2,bool param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptCalculateNormalsOptions local_res10 [8];
  UGeometryScriptDebug *local_res20;
  UGeometryScriptDebug **local_28;
  FGeometryScriptCalculateNormalsOptions *local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"RecomputeNormals_InvalidInput",L"RecomputeNormals: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &local_res20;
  local_20 = local_res10;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,param_3);
  return param_1;
}

// RecomputeNormalsForMeshSelection @ 14ce70ed0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormalsForMeshSelection
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptCalculateNormalsOptions param_3,bool param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptCalculateNormalsOptions local_res18 [8];
  undefined1 local_38 [16];
  UGeometryScriptDebug **local_28;
  FGeometryScriptMeshSelection *local_20;
  FGeometryScriptCalculateNormalsOptions *local_18;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"RecomputeNormalsForMeshSelection_InvalidInput",
                        L"RecomputeNormalsForMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_28 = &param_5;
  local_18 = local_res18;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormalsForMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetMeshPerVertexNormals @ 14ce73d10

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals
          (UDynamicMesh *param_1,FGeometryScriptVectorList *param_2,UGeometryScriptDebug *param_3)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  FText *pFVar2;
  UGeometryScriptDebug *local_res18 [2];
  FGeometryScriptVectorList *local_28;
  UGeometryScriptDebug **local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetMeshPerVertexNormals_InvalidMesh",
                        L"SetMeshPerVertexNormals: TargetMesh is Null");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar2);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  pTVar1 = (param_2->List).Object;
  if ((pTVar1 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar1->ArrayNum == 0)) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetMeshPerVertexNormals_InvalidList",
                        L"SetMeshPerVertexNormals: List is empty");
    UE::Geometry::AppendError(local_res18[0],InvalidInputs,pFVar2);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
  }
  else {
    local_20 = local_res18;
    local_18._8_8_ = &local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_28 = param_2;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetMeshPerVertexTangents @ 14ce73e30

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents
          (UDynamicMesh *param_1,FGeometryScriptVectorList *param_2,
          FGeometryScriptVectorList *param_3,UGeometryScriptDebug *param_4)

{
  int iVar1;
  FText *pFVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  FGeometryScriptVectorList *local_28;
  FGeometryScriptVectorList *local_20;
  UGeometryScriptDebug **local_18;
  
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetMeshPerVertexTangents_InvalidMesh",
                        L"SetMeshPerVertexTangents: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->List).SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->List).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  pTVar3 = (param_2->List).Object;
  if ((pTVar3 == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) ||
     (pTVar3->ArrayNum == 0)) {
    pwVar5 = L"SetMeshPerVertexTangents: TangentXList is empty";
    pwVar4 = L"SetMeshPerVertexTangents_InvalidList";
  }
  else {
    if ((param_3->List).Object !=
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      pTVar3 = TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
               operator->(&param_3->List);
      iVar1 = pTVar3->ArrayNum;
      pTVar3 = TSharedPtr<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
               operator->(&param_2->List);
      if (iVar1 == pTVar3->ArrayNum) {
        local_18 = &local_res20;
        local_38._8_8_ = &local_28;
        local_38._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
        local_28 = param_2;
        local_20 = param_3;
        UDynamicMesh::EditMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
                   GeneralEdit,Unknown,false);
        goto LAB_14ce73f8c;
      }
    }
    pwVar5 = L"SetMeshPerVertexTangents: TangentYList must be the same size as TangentXList";
    pwVar4 = L"SetMeshPerVertexTangents_InvalidListY";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_38,L"UGeometryScriptLibrary_MeshNormalsFunctions",pwVar4,pwVar5
                     );
  UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
  if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
  }
LAB_14ce73f8c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->List).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->List).SharedReferenceCount.ReferenceController);
  return param_1;
}

// SetMeshTriangleNormals @ 14ce73fc0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals
          (UDynamicMesh *param_1,int param_2,FGeometryScriptTriangle *param_3,bool *param_4,
          bool param_5)

{
  int local_res10 [6];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  bool *local_20;
  FGeometryScriptTriangle *local_18;
  
  *param_4 = false;
  if (param_1 != (UDynamicMesh *)0x0) {
    local_28 = local_res10;
    local_30 = &local_28;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_res10[0] = param_2;
    local_20 = param_4;
    local_18 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_38,
               GeneralEdit,Unknown,param_5);
  }
  return param_1;
}

// SetPerFaceNormals @ 14ce74730

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetPerFaceNormals_InvalidInput",L"SetPerFaceNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SetPerVertexNormals @ 14ce747e0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals
          (UDynamicMesh *param_1,UGeometryScriptDebug *param_2)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  undefined1 local_18 [16];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetPerVertexNormals_InvalidInput",
                        L"SetPerVertexNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// SetSplitNormalsAlongSelectedEdges @ 14ce74ad0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::SetSplitNormalsAlongSelectedEdges
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,bool param_3,bool param_4,
          FGeometryScriptCalculateNormalsOptions param_5,bool param_6,UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_48 [16];
  UGeometryScriptDebug **local_38;
  FGeometryScriptMeshSelection *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  FGeometryScriptCalculateNormalsOptions *local_18;
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetSplitNormalsAlongSelectedEdges_InvalidInput",
                        L"SetSplitNormalsAlongSelectedEdges: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_38 = &param_7;
  local_28 = local_res18;
  local_20 = local_res20;
  local_18 = &param_5;
  local_48._8_8_ = &local_38;
  local_48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetSplitNormalsAlongSelectedEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_30 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
             GeneralEdit,NormalsTangents,param_6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions @ 14ce74f00

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshNormalsFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshNormalsFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateVertexNormal @ 14ce75b60

/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal
          (UDynamicMesh *param_1,int param_2,bool param_3,TVector<double> *param_4,bool param_5,
          TVector<double> *param_6,TVector<double> *param_7,bool *param_8,bool param_9,bool param_10
          )

{
  int local_res10 [2];
  undefined1 local_res18 [8];
  ForAnyElementType local_98;
  undefined8 local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  code *local_78;
  bool **local_70;
  int local_68 [2];
  ForAnyElementType *local_60;
  ForAnyElementType *local_58;
  undefined1 local_50;
  bool *local_48;
  int *local_40;
  bool *local_38;
  undefined1 *local_30;
  int *local_28;
  TVector<double> *local_20;
  TVector<double> *local_18;
  TVector<double> *local_10;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    local_88.Data = (FScriptContainerElement *)0x0;
    local_80 = 0;
    local_98.Data = (FScriptContainerElement *)0x0;
    local_90 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x10,&local_88,0,(int *)((longlong)&local_80 + 4));
    if (local_90._4_4_ < 0x10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x10,&local_98,(int)local_90,(int *)((longlong)&local_90 + 4));
    }
    local_48 = &param_5;
    local_68[0] = local_res10[0];
    local_60 = &local_88;
    local_40 = local_res10;
    local_58 = &local_98;
    local_50 = param_9;
    local_38 = param_8;
    *param_8 = false;
    local_30 = local_res18;
    local_28 = local_68;
    local_18 = param_6;
    local_10 = param_7;
    local_70 = &local_48;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_20 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_78,
               GeneralEdit,Unknown,param_10);
    if (local_98.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data);
    }
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
  }
  return param_1;
}

// execAutoRepairNormals @ 14ce890f0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execAutoRepairNormals
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"AutoRepairNormals_InvalidInput",L"AutoRepairNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::AutoRepairNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execComputeSplitNormals @ 14ce8adb0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execComputeSplitNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  UGeometryScriptDebug *local_68;
  undefined1 local_60 [16];
  undefined8 *local_50;
  UGeometryScriptDebug **local_48;
  undefined2 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_88 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_80 = CONCAT31(local_80._1_3_,1);
  uStack_7c = 0x41700000;
  uStack_78 = uStack_78 & 0xffffff00;
  uStack_74 = CONCAT31(uStack_74._1_3_,1);
  local_70 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res10[0] = 0x101;
  FStructProperty::StaticClass();
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
  pUVar2 = local_88;
  local_38 = CONCAT44(uStack_7c,local_80);
  uStack_30 = CONCAT44(uStack_74,uStack_78);
  local_28 = local_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = local_res20;
  local_res18[0] = local_res10[0];
  if (local_88 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"ComputeSplitNormals_InvalidInput",
                        L"ComputeSplitNormals: TargetMesh is Null");
    UE::Geometry::AppendError(local_68,InvalidInputs,pFVar3);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_50 = &local_38;
    local_48 = &local_68;
    local_40 = local_res18;
    local_60._8_8_ = &local_50;
    local_60._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::ComputeSplitNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_88,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_60,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execComputeTangents @ 14ce8afb0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execComputeTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  uint local_res10;
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
  local_res10 = local_res10 & 0xffffff00;
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"ComputeTangents_InvalidInput",L"ComputeTangents: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::ComputeTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execDiscardTangents @ 14ce8e740

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execDiscardTangents
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"DiscardTangents_InvalidInput",L"DiscardTangents: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::DiscardTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execFlipNormals @ 14ce8faa0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execFlipNormals
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"FlipNormals_InvalidInput",L"FlipNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::FlipNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execFlipTriangleSelectionNormals @ 14ce8fbf0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execFlipTriangleSelectionNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  FText *pFVar3;
  UDynamicMesh *pUVar4;
  bool bVar5;
  bool bVar6;
  int local_res10 [2];
  int local_res18 [2];
  UGeometryScriptDebug *local_res20;
  UDynamicMesh *local_88 [2];
  FGeometryScriptMeshSelection local_78;
  FGeometrySelection **local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_58 [16];
  FGeometrySelection *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  local_88[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_78);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar6 = local_res18[0] != 0;
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
  pUVar4 = local_88[0];
  pUVar2 = local_res20;
  local_48 = local_78.GeoSelection.Object;
  pTStack_40 = local_78.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_88[0] == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_58,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"FlipTriangleSelectionNormals_InvalidInput",
                        L"FlipTriangleSelectionNormals: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    pUVar4 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_58._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_58._0_8_ + 0x10))();
    }
  }
  else if ((bVar5) || (bVar6)) {
    local_68 = &local_48;
    local_58._8_8_ = &local_68;
    local_58._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::FlipTriangleSelectionNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_60 = bVar5;
    local_5f = bVar6;
    UDynamicMesh::EditMesh
              (local_88[0],(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_58,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  *(UDynamicMesh **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execGetMeshHasTangents @ 14ce924a0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshHasTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *this;
  FText *pFVar3;
  uchar *puVar4;
  uchar local_res10 [8];
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  uchar *local_48;
  undefined1 local_40 [24];
  
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
  local_res18 = (UGeometryScriptDebug *)0x0;
  puVar4 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this = local_res20;
  pUVar2 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_40,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"GetMeshHasTangents_InvalidInput",L"GetMeshHasTangents: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar3);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_40._8_8_ = &local_48;
  *puVar4 = '\0';
  local_40._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshHasTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_48 = puVar4;
  UDynamicMesh::ProcessMesh
            (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_40);
  *(UDynamicMesh **)param_3 = this;
  return;
}

// execGetMeshPerVertexNormals @ 14ce927f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshPerVertexNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptVectorList *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FGeometryScriptVectorList *this;
  UDynamicMesh *this_00;
  uchar *puVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  int local_88 [2];
  UDynamicMesh *local_80;
  FGeometryScriptVectorList local_78;
  code *local_68;
  uchar **local_60;
  uchar *local_58;
  undefined1 *local_50;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_48;
  uchar *local_40;
  
  local_80 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_78.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_78.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar1 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this = &local_78;
  if (pFVar1 != (FGeometryScriptVectorList *)0x0) {
    this = pFVar1;
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
  puVar5 = param_2->MostRecentPropertyAddress;
  local_res18[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar6 = local_res10;
  if (puVar5 != (uchar *)0x0) {
    puVar6 = puVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_88[0] = 0;
  puVar5 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  this_00 = local_80;
  local_res20[0] = local_88[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_80 == (UDynamicMesh *)0x0) {
    this_00 = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    FGeometryScriptVectorList::Reset(this,0);
    if ((this->List).Object == (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0)
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_48 = (this->List).Object;
    local_50 = local_res20;
    local_60 = &local_58;
    *puVar5 = '\0';
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    *puVar6 = '\0';
    local_58 = puVar5;
    local_40 = puVar6;
    UDynamicMesh::ProcessMesh
              (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_68)
    ;
  }
  *(UDynamicMesh **)param_3 = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.List.SharedReferenceCount.ReferenceController);
  return;
}

// execGetMeshPerVertexTangents @ 14ce92a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execGetMeshPerVertexTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptVectorList *pFVar1;
  FProperty *pFVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  UDynamicMesh *this;
  FGeometryScriptVectorList *this_00;
  FGeometryScriptVectorList *this_01;
  uchar *puVar7;
  uchar local_res10 [8];
  uchar local_res18 [8];
  undefined1 local_res20 [8];
  int local_a8 [2];
  UDynamicMesh *local_a0;
  FGeometryScriptVectorList local_98;
  FGeometryScriptVectorList local_88;
  code *local_78;
  uchar **local_70;
  uchar *local_68;
  undefined1 *local_60;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_50;
  uchar *local_48;
  
  local_a0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_88.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_88.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar1 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  this_00 = &local_88;
  if (pFVar1 != (FGeometryScriptVectorList *)0x0) {
    this_00 = pFVar1;
  }
  local_98.List.Object = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0;
  local_98.List.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pFVar1 = (FGeometryScriptVectorList *)param_2->MostRecentPropertyAddress;
  local_res10[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  this_01 = &local_98;
  if (pFVar1 != (FGeometryScriptVectorList *)0x0) {
    this_01 = pFVar1;
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
  puVar6 = param_2->MostRecentPropertyAddress;
  local_res18[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar7 = local_res10;
  if (puVar6 != (uchar *)0x0) {
    puVar7 = puVar6;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_a8[0] = 0;
  puVar6 = local_res18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  this = local_a0;
  local_res20[0] = local_a8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a0 == (UDynamicMesh *)0x0) {
    this = (UDynamicMesh *)0x0;
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
  }
  else {
    FGeometryScriptVectorList::Reset(this_00,0);
    FGeometryScriptVectorList::Reset(this_01,0);
    if ((this_00->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pTVar3 = (this_00->List).Object;
    if ((this_01->List).Object ==
        (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_50 = (this_01->List).Object;
    local_60 = local_res20;
    local_70 = &local_68;
    *puVar6 = '\0';
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::GetMeshPerVertexTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    *puVar7 = '\0';
    local_68 = puVar6;
    local_58 = pTVar3;
    local_48 = puVar7;
    UDynamicMesh::ProcessMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_78);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.List.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.List.SharedReferenceCount.ReferenceController);
  return;
}

// execRecomputeNormals @ 14ce99720

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execRecomputeNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  bool bVar4;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  int local_res20 [2];
  UGeometryScriptDebug *local_68;
  UDynamicMesh *local_60;
  UGeometryScriptDebug *local_58;
  UGeometryScriptDebug **local_50;
  undefined2 *local_48;
  undefined1 local_40 [24];
  
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
  local_res10[0] = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = local_68;
  local_res18[0] = local_res10[0];
  if (local_60 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_40,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"RecomputeNormals_InvalidInput",L"RecomputeNormals: TargetMesh is Null");
    UE::Geometry::AppendError(local_58,InvalidInputs,pFVar3);
    if ((ITextData *)local_40._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_50 = &local_58;
  local_48 = local_res18;
  local_40._8_8_ = &local_50;
  local_40._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_60,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_40,
             GeneralEdit,Unknown,bVar4);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execRecomputeNormalsForMeshSelection @ 14ce99900

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execRecomputeNormalsForMeshSelection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  bool bVar4;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  int local_res20 [2];
  UGeometryScriptDebug *local_98;
  UDynamicMesh *local_90;
  UGeometryScriptDebug *local_88 [2];
  FGeometryScriptMeshSelection local_78;
  undefined1 local_68 [16];
  FGeometrySelection *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  UGeometryScriptDebug **local_48;
  FGeometrySelection **local_40;
  undefined2 *local_38;
  
  local_90 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_78);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
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
  local_98 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  pUVar3 = local_90;
  local_58 = local_78.GeoSelection.Object;
  pTStack_50 = local_78.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_78.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88[0] = local_98;
  local_res18[0] = local_res10[0];
  if (local_90 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"RecomputeNormalsForMeshSelection_InvalidInput",
                        L"RecomputeNormalsForMeshSelection: TargetMesh is Null");
    UE::Geometry::AppendError(local_88[0],InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
  }
  else {
    local_48 = local_88;
    local_40 = &local_58;
    local_38 = local_res18;
    local_68._8_8_ = &local_48;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::RecomputeNormalsForMeshSelection'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_90,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_68,
               GeneralEdit,Unknown,bVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execSetMeshPerVertexNormals @ 14ce9e1d0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshPerVertexNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  UGeometryScriptDebug *local_res20;
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  longlong *local_38;
  UGeometryScriptDebug **local_30;
  undefined1 local_28 [16];
  
  local_res18 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res18;
  local_48 = local_58;
  pTStack_40 = pTStack_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_50->SharedReferenceCount = (atomic<int>)((int)pTStack_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res20 = local_res10;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetMeshPerVertexNormals_InvalidMesh",
                        L"SetMeshPerVertexNormals: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
  }
  else if ((local_58 == 0) || (*(int *)(local_58 + 8) == 0)) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetMeshPerVertexNormals_InvalidList",
                        L"SetMeshPerVertexNormals: List is empty");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar2);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
  }
  else {
    local_38 = &local_48;
    local_30 = &local_res20;
    local_28._8_8_ = &local_38;
    local_28._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// execSetMeshPerVertexTangents @ 14ce9e3e0

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshPerVertexTangents
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  UGeometryScriptDebug *local_res10;
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  longlong local_88;
  TReferenceControllerBase<1> *pTStack_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  longlong local_68;
  TReferenceControllerBase<1> *pTStack_60;
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined1 local_48 [16];
  longlong *local_38;
  longlong *local_30;
  UGeometryScriptDebug **local_28;
  
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
  local_68 = 0;
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_78 = 0;
  pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
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
  local_58 = local_78;
  pTStack_50 = pTStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88 = local_68;
  pTStack_80 = pTStack_60;
  if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = local_res18;
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetMeshPerVertexTangents_InvalidMesh",
                        L"SetMeshPerVertexTangents: TargetMesh is Null");
    UE::Geometry::AppendError(local_res10,InvalidInputs,pFVar2);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
    pUVar3 = (UDynamicMesh *)0x0;
    goto LAB_14ce9e655;
  }
  if ((local_68 == 0) || (*(int *)(local_68 + 8) == 0)) {
    pwVar5 = L"SetMeshPerVertexTangents: TangentXList is empty";
    pwVar4 = L"SetMeshPerVertexTangents_InvalidList";
LAB_14ce9e61c:
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshNormalsFunctions",pwVar4,
                        pwVar5);
    UE::Geometry::AppendError(local_res10,InvalidInputs,pFVar2);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
  }
  else {
    if ((local_78 == 0) || (*(int *)(local_78 + 8) != *(int *)(local_68 + 8))) {
      pwVar5 = L"SetMeshPerVertexTangents: TangentYList must be the same size as TangentXList";
      pwVar4 = L"SetMeshPerVertexTangents_InvalidListY";
      goto LAB_14ce9e61c;
    }
    local_38 = &local_88;
    local_30 = &local_58;
    local_28 = &local_res10;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshPerVertexTangents'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
LAB_14ce9e655:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// execSetMeshTriangleNormals @ 14ce9e690

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execSetMeshTriangleNormals
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  uchar *puVar3;
  bool bVar4;
  uchar local_res10 [8];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_108 [2];
  UDynamicMesh *local_100;
  code *local_f8;
  undefined4 **local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined4 *local_98;
  uchar *local_90;
  double *local_88;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  
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
  local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
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
  pUVar2 = local_100;
  bVar4 = local_res18[0] != 0;
  local_78 = local_e8;
  dStack_70 = dStack_e0;
  local_68 = local_d8;
  dStack_60 = dStack_d0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = dStack_c8;
  dStack_50 = dStack_c0;
  local_48 = local_b8;
  dStack_40 = dStack_b0;
  local_38 = local_a8;
  local_108[0] = local_res20[0];
  *puVar3 = '\0';
  if (local_100 != (UDynamicMesh *)0x0) {
    local_98 = local_108;
    local_88 = &local_78;
    local_f0 = &local_98;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetMeshTriangleNormals'::__l5::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_90 = puVar3;
    UDynamicMesh::EditMesh
              (local_100,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_f8,
               GeneralEdit,Unknown,bVar4);
  }
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execSetPerFaceNormals @ 14ce9fe30

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execSetPerFaceNormals
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetPerFaceNormals_InvalidInput",L"SetPerFaceNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetPerFaceNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execSetPerVertexNormals @ 14ce9ff80

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execSetPerVertexNormals
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetPerVertexNormals_InvalidInput",
                        L"SetPerVertexNormals: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetPerVertexNormals'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execSetSplitNormalsAlongSelectedEdges @ 14cea0810

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execSetSplitNormalsAlongSelectedEdges
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UDynamicMesh *pUVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined2 local_res20 [4];
  undefined2 local_c8 [4];
  int local_c0;
  int local_bc;
  int local_b8 [2];
  UGeometryScriptDebug *local_b0;
  UDynamicMesh *local_a8;
  UGeometryScriptDebug *local_a0;
  FGeometryScriptMeshSelection local_98;
  undefined1 local_88 [16];
  FGeometrySelection *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  UGeometryScriptDebug **local_68;
  FGeometrySelection **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined2 *local_48;
  
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
  local_c0 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  bVar4 = local_c0 != 0;
  local_bc = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_bc,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_bc);
  }
  bVar5 = local_bc != 0;
  local_res20[0] = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_b8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  bVar6 = local_b8[0] != 0;
  local_b0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pUVar3 = local_a8;
  local_78 = local_98.GeoSelection.Object;
  pTStack_70 = local_98.GeoSelection.SharedReferenceCount.ReferenceController;
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
  local_a0 = local_b0;
  local_c8[0] = local_res20[0];
  local_res10[0] = bVar4;
  local_res18[0] = bVar5;
  if (local_a8 == (UDynamicMesh *)0x0) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshNormalsFunctions",
                        L"SetSplitNormalsAlongSelectedEdges_InvalidInput",
                        L"SetSplitNormalsAlongSelectedEdges: TargetMesh is Null");
    UE::Geometry::AppendError(local_a0,InvalidInputs,pFVar2);
    pUVar3 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
  }
  else {
    local_68 = &local_a0;
    local_60 = &local_78;
    local_58 = local_res10;
    local_50 = local_res18;
    local_48 = local_c8;
    local_88._8_8_ = &local_68;
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::SetSplitNormalsAlongSelectedEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_a8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_88,
               GeneralEdit,NormalsTangents,bVar6);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  *(UDynamicMesh **)param_3 = pUVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execUpdateVertexNormal @ 14cea25c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshNormalsFunctions::execUpdateVertexNormal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *this;
  uchar *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined4 local_188 [2];
  undefined4 local_180 [2];
  ForAnyElementType local_178;
  undefined8 local_170;
  UDynamicMesh *local_168;
  ForAnyElementType local_160;
  undefined8 local_158;
  code *local_150;
  undefined1 **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8 [2];
  ForAnyElementType *local_f0;
  ForAnyElementType *local_e8;
  undefined1 local_e0;
  undefined1 *local_d8;
  undefined4 *local_d0;
  uchar *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_168 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_188[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_198 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  bVar3 = local_198 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_194 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_194,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_194);
  }
  bVar4 = local_194 != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
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
  local_190 = 0;
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  bVar5 = local_190 != 0;
  local_18c = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18c);
  }
  this = local_168;
  bVar6 = local_18c != 0;
  local_58 = local_140;
  uStack_50 = uStack_138;
  local_48 = local_130;
  local_78 = local_128;
  uStack_70 = uStack_120;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = local_118;
  local_98 = local_110;
  uStack_90 = uStack_108;
  local_88 = local_100;
  local_180[0] = local_188[0];
  local_res18[0] = bVar4;
  local_res20[0] = bVar3;
  if (local_168 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = 0;
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0x10,&local_160,0,(int *)((longlong)&local_158 + 4));
    if (local_170._4_4_ < 0x10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x10,&local_178,(int)local_170,(int *)((longlong)&local_170 + 4));
    }
    local_f8[0] = local_180[0];
    local_f0 = &local_160;
    local_e8 = &local_178;
    *puVar2 = '\0';
    local_d8 = local_res18;
    local_d0 = local_180;
    local_c0 = local_res20;
    local_b8 = local_f8;
    local_b0 = &local_98;
    local_a8 = &local_78;
    local_a0 = &local_58;
    local_148 = &local_d8;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshNormalsFunctions::UpdateVertexNormal'::__l2::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_e0 = bVar5;
    local_c8 = puVar2;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_150,
               GeneralEdit,Unknown,bVar6);
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

