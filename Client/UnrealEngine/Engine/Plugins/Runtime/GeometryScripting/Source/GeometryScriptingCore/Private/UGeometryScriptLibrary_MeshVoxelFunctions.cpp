// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 12

// StaticClass @ 14cea3a50

UClass * __cdecl UGeometryScriptLibrary_MeshVoxelFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshVoxelFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshVoxelFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshVoxelFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshVoxelFunctions @ 14ceae630

UGeometryScriptLibrary_MeshVoxelFunctions * __thiscall
UGeometryScriptLibrary_MeshVoxelFunctions::UGeometryScriptLibrary_MeshVoxelFunctions
          (UGeometryScriptLibrary_MeshVoxelFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshVoxelFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshVoxelFunctions @ 14ceae660

UGeometryScriptLibrary_MeshVoxelFunctions * __thiscall
UGeometryScriptLibrary_MeshVoxelFunctions::UGeometryScriptLibrary_MeshVoxelFunctions
          (UGeometryScriptLibrary_MeshVoxelFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshVoxelFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshVoxelFunctions @ 14ceaeb10

void __thiscall
UGeometryScriptLibrary_MeshVoxelFunctions::~UGeometryScriptLibrary_MeshVoxelFunctions
          (UGeometryScriptLibrary_MeshVoxelFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshVoxelFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ceaf030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  UGeometryScriptDebug *pUVar4;
  FDynamicMeshAttributeSet *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  bool bVar13;
  undefined8 uVar14;
  bool bVar15;
  int iVar16;
  FText *pFVar17;
  ulonglong uVar18;
  FString *pFVar19;
  undefined8 *puVar20;
  ulong64 uVar21;
  FDynamicMeshAttributeSet *pFVar22;
  undefined ***pppuVar23;
  undefined1 (*pauVar24) [16];
  FDynamicMeshAttributeSet *pFVar25;
  undefined1 auVar26 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar28 [16];
  double dVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auStackY_698 [32];
  undefined8 local_668;
  int local_660;
  undefined8 local_658;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  double local_628;
  double dStack_620;
  FText local_618;
  FText local_608;
  double local_5f8 [2];
  double local_5e8;
  double dStack_5e0;
  double dStack_5d8;
  double dStack_5d0;
  TVector<double>_u_0 local_5c8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  TVector<double>_u_0 local_598;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  undefined1 local_528 [16];
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  undefined1 local_4f8 [16];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  undefined1 local_4c8 [16];
  double local_4b8;
  double dStack_4b0;
  double local_4a8;
  double dStack_4a0;
  undefined1 local_498 [128];
  undefined **local_418;
  code *local_410;
  undefined ***local_400;
  FMarchingCubes local_3f8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_138;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_698;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_138,param_1,true);
  local_418 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_498._0_8_ = (FDynamicMesh3 *)0x0;
  local_498._8_8_ = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_498._24_8_ = __real_3ff0000000000000;
  pFVar25 = (FDynamicMeshAttributeSet *)0x0;
  local_498._56_8_ = __real_7fefffffffffffff;
  local_498._80_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_498._88_8_ = _UNK_1508ffb58;
  local_498._32_8_ = ___xmm_3ff00000000000003ff0000000000000;
  local_498._40_8_ = _UNK_150689688;
  local_410 = UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::<lambda_28_>::
              <lambda_invoker_cdecl>;
  local_498._96_8_ = __real_ffefffffffffffff;
  local_498._16_4_ = Dilate;
  local_498[0x30] = false;
  local_498._64_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_498._72_8_ = _UNK_150a9e648;
  local_400 = (undefined ***)0x0;
  local_498._112_8_ =
       UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  UE::Geometry::FMarchingCubes::FMarchingCubes(&local_3f8);
  lVar2 = *(longlong *)this;
  local_498._0_8_ = param_1;
  local_498._8_8_ = &local_138;
  cVar1 = *(char *)(lVar2 + 0x50);
  if (cVar1 == '\0') {
    if (local_138.RootIndex < 0) {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<2828200105734045879>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                          ,0xb7,"RootIndex >= 0");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_648 = ___xmm_7fefffffffffffff7fefffffffffffff;
      dStack_640 = _UNK_150a9e648;
      local_628 = ___xmm_ffefffffffffffffffefffffffffffff;
      dStack_620 = _UNK_1508ffb58;
      local_638 = ___xmm_ffefffffffffffff7fefffffffffffff;
      dStack_630 = _UNK_150a9e6d8;
    }
    else {
      uVar18 = (ulonglong)(local_138.RootIndex & 0x1ff);
      lVar2 = *(longlong *)
               (local_138.BoxCenters.Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)local_138.RootIndex >> 9) * 8);
      dVar7 = *(double *)(lVar2 + uVar18 * 0x18);
      lVar3 = *(longlong *)
               (local_138.BoxExtents.Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)local_138.RootIndex >> 9) * 8);
      dVar8 = *(double *)(lVar2 + 8 + uVar18 * 0x18);
      dVar9 = *(double *)(lVar2 + 0x10 + uVar18 * 0x18);
      local_648 = dVar7 - *(double *)(lVar3 + uVar18 * 0x18);
      dStack_640 = dVar8 - *(double *)(lVar3 + 8 + uVar18 * 0x18);
      dStack_630 = dVar7 + *(double *)(lVar3 + uVar18 * 0x18);
      local_628 = dVar8 + *(double *)(lVar3 + 8 + uVar18 * 0x18);
      local_638 = dVar9 - *(double *)(lVar3 + 0x10 + uVar18 * 0x18);
      dStack_620 = dVar9 + *(double *)(lVar3 + 0x10 + uVar18 * 0x18);
    }
    pauVar24 = (undefined1 (*) [16])&local_648;
  }
  else {
    local_5f8[0] = *(double *)*(undefined1 (*) [16])(lVar2 + 0x20);
    local_5f8[1] = *(double *)(lVar2 + 0x28);
    pauVar24 = (undefined1 (*) [16])local_5f8;
    local_5e8 = *(double *)(lVar2 + 0x30);
    dStack_5d0 = *(double *)(lVar2 + 0x48);
    dStack_5e0 = *(double *)(lVar2 + 0x38);
    dStack_5d8 = *(double *)(lVar2 + 0x40);
    auVar10._4_8_ = dStack_5d8;
    auVar10._0_4_ = (int)((ulonglong)local_5f8[0] >> 0x20);
    auVar26._0_8_ = auVar10._0_8_ << 0x20;
    auVar26._8_4_ = SUB84(local_5f8[1],0);
    auVar26._12_4_ = SUB84(local_5f8[1],4);
    dVar7 = dStack_5d8 - auVar26._8_8_;
    local_508 = dStack_5d8;
    dStack_500 = dStack_5d0;
    local_528 = *(undefined1 (*) [16])(lVar2 + 0x20);
    local_518 = local_5e8;
    dStack_510 = dStack_5e0;
    if (dStack_5e0 - local_5f8[0] <= dVar7) {
      dVar7 = dStack_5e0 - local_5f8[0];
    }
    if (dStack_5d0 - local_5e8 <= dVar7) {
      dVar7 = dStack_5d0 - local_5e8;
    }
    if (dVar7 <= 0.0) {
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_618,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                           L"ApplyMeshMorphology_EmptyCustomBounds",
                           L"ApplyMeshMorphology: Empty custom bounds");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar17
                );
      if (local_618.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_618.TextData.Reference + 0x10))();
      }
      UE::Geometry::FDynamicMesh3::Clear(param_1);
      goto LAB_14ceaf79b;
    }
  }
  puVar20 = *(undefined8 **)this;
  local_498._72_8_ = *(undefined8 *)pauVar24[1];
  local_498._80_8_ = *(undefined8 *)(pauVar24[1] + 8);
  local_498._56_8_ = *(double *)*pauVar24;
  local_498._64_8_ = *(double *)(*pauVar24 + 8);
  local_498._16_4_ = (uint)*(byte *)(puVar20 + 0xb);
  local_498._88_8_ = *(undefined8 *)pauVar24[2];
  local_498._96_8_ = *(undefined8 *)(pauVar24[2] + 8);
  local_498._24_8_ = (undefined8)*(float *)((longlong)puVar20 + 0x5c);
  if ((double)local_498._24_8_ == 0.0) {
    local_498._24_8_ = __real_3ee4f8b588e368f1;
    local_498._16_4_ = Dilate;
  }
  local_668 = *puVar20;
  iVar16 = *(int *)(puVar20 + 1);
  pUVar4 = (UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8);
  local_660 = iVar16;
  local_498[0x30] = cVar1 != '\0';
  if ((char)local_668 == '\x01') {
    pFVar19 = ::FString::FString(&local_568,L"ApplyMeshMorphology");
    iVar16 = GetClampedGridResolution(iVar16,pFVar19,pUVar4);
    local_4f8 = *pauVar24;
    if (0x4b0 < iVar16) {
      iVar16 = 0x4b0;
    }
    local_4e8 = *(double *)pauVar24[1];
    dStack_4e0 = *(double *)(pauVar24[1] + 8);
    local_4d8 = *(double *)pauVar24[2];
    dStack_4d0 = *(double *)(pauVar24[2] + 8);
    if (local_498[0x30] == false) {
      dVar7 = (double)*(float *)(*(longlong *)this + 0x5c) +
              (double)*(float *)(*(longlong *)this + 0x5c);
    }
    else {
      dVar7 = 0.0;
    }
    auVar11._4_8_ = extraout_XMM0_Qb;
    auVar11._0_4_ = local_4f8._4_4_;
    auVar27._0_8_ = auVar11._0_8_ << 0x20;
    auVar27._8_4_ = local_4f8._8_4_;
    auVar27._12_4_ = local_4f8._12_4_;
    dVar29 = *(double *)pauVar24[2] - auVar27._8_8_;
    dVar9 = *(double *)(pauVar24[2] + 8) - *(double *)pauVar24[1];
    dVar8 = *(double *)(pauVar24[1] + 8) - local_4f8._0_8_;
    if (dVar29 <= 0.0) {
      dVar29 = 0.0;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    if (dVar29 <= dVar9) {
      dVar29 = dVar9;
    }
    if (dVar29 <= dVar8) {
      dVar29 = dVar8;
    }
    local_498._32_8_ = (dVar29 + dVar7) / (double)iVar16;
  }
  else {
    pFVar19 = ::FString::FString(&local_558,L"ApplyMeshMorphology");
    local_5c8._s_0.Z = (double)*(undefined8 *)pauVar24[1];
    uStack_5b0 = *(undefined8 *)(pauVar24[1] + 8);
    local_5c8._s_0.X = *(double *)*pauVar24;
    local_5c8._s_0.Y = *(double *)(*pauVar24 + 8);
    local_5a8 = *(undefined8 *)pauVar24[2];
    uStack_5a0 = *(undefined8 *)(pauVar24[2] + 8);
    local_498._32_8_ =
         GetClampedCellSize((double)local_668._4_4_,(TAxisAlignedBox3<double> *)&local_5c8._s_0,
                            pFVar19,pUVar4);
  }
  if (*(char *)(*(longlong *)this + 0xc) == '\0') {
    puVar20 = &local_668;
  }
  else {
    puVar20 = (undefined8 *)(*(longlong *)this + 0x10);
  }
  local_658 = *puVar20;
  iVar16 = *(int *)(puVar20 + 1);
  pUVar4 = (UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8);
  if ((char)local_658 == '\x01') {
    pFVar19 = ::FString::FString(&local_548,L"ApplyMeshMorphology");
    iVar16 = GetClampedGridResolution(iVar16,pFVar19,pUVar4);
    local_4c8 = *pauVar24;
    local_4b8 = *(double *)pauVar24[1];
    dStack_4b0 = *(double *)(pauVar24[1] + 8);
    if (0x4b0 < iVar16) {
      iVar16 = 0x4b0;
    }
    local_4a8 = *(double *)pauVar24[2];
    dStack_4a0 = *(double *)(pauVar24[2] + 8);
    if (local_498[0x30] == false) {
      dVar7 = (double)*(float *)(*(longlong *)this + 0x5c) +
              (double)*(float *)(*(longlong *)this + 0x5c);
    }
    else {
      dVar7 = 0.0;
    }
    auVar12._4_8_ = extraout_XMM0_Qb_00;
    auVar12._0_4_ = local_4c8._4_4_;
    auVar28._0_8_ = auVar12._0_8_ << 0x20;
    auVar28._8_4_ = local_4c8._8_4_;
    auVar28._12_4_ = local_4c8._12_4_;
    dVar29 = local_4a8 - auVar28._8_8_;
    dVar9 = dStack_4a0 - local_4b8;
    dVar8 = dStack_4b0 - local_4c8._0_8_;
    if (dVar29 <= 0.0) {
      dVar29 = 0.0;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    if (dVar8 <= 0.0) {
      dVar8 = 0.0;
    }
    if (dVar29 <= dVar9) {
      dVar29 = dVar9;
    }
    if (dVar29 <= dVar8) {
      dVar29 = dVar8;
    }
    local_498._40_8_ = (dVar29 + dVar7) / (double)iVar16;
  }
  else {
    pFVar19 = ::FString::FString(&local_538,L"ApplyMeshMorphology");
    local_598._s_0.Z = (double)*(undefined8 *)pauVar24[1];
    uStack_580 = *(undefined8 *)(pauVar24[1] + 8);
    local_598._s_0.X = *(double *)*pauVar24;
    local_598._s_0.Y = *(double *)(*pauVar24 + 8);
    local_578 = *(undefined8 *)pauVar24[2];
    uStack_570 = *(undefined8 *)(pauVar24[2] + 8);
    local_498._40_8_ =
         GetClampedCellSize((double)local_658._4_4_,(TAxisAlignedBox3<double> *)&local_598._s_0,
                            pFVar19,pUVar4);
  }
  UE::Geometry::FMeshShapeGenerator::Reset((FMeshShapeGenerator *)&local_3f8);
  uVar14 = local_498._8_8_;
  if ((FDynamicMesh3 *)local_498._0_8_ == (FDynamicMesh3 *)0x0) goto LAB_14ceaf63c;
  if (((FRefCountVector *)(local_498._0_8_ + 0x140))->UsedCount != 0) {
    if (((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_498._8_8_ ==
         (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) ||
       (*(int *)(local_498._8_8_ + 0xbc) < 0)) {
LAB_14ceaf63c:
      bVar15 = false;
    }
    else {
      uVar21 = UE::Geometry::FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(local_498._8_8_ + 8))
      ;
      if (*(ulong64 *)(uVar14 + 0x10) != uVar21) goto LAB_14ceaf63c;
      bVar15 = true;
    }
    if ((((double)local_498._24_8_ <= 0.0) || ((double)local_498._32_8_ <= 0.0)) ||
       ((double)local_498._40_8_ <= 0.0)) {
LAB_14ceaf679:
      bVar13 = false;
    }
    else {
      iVar16 = _finite((double)local_498._40_8_);
      if (iVar16 == 0) goto LAB_14ceaf679;
      bVar13 = true;
    }
    if ((bVar15) && (bVar13)) {
      uVar32 = (uint)local_498._24_8_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar33 = SUB84(local_498._24_8_,4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar34 = (uint)__xmm_80000000000000008000000000000000;
      uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      uVar30 = uVar32;
      uVar31 = uVar33;
      if ((local_498._16_4_ & ~Close) == Dilate) {
        uVar30 = uVar32 ^ uVar34;
        uVar31 = uVar33 ^ uVar35;
      }
      UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeFirstPass
                ((TImplicitMorphology<UE::Geometry::FDynamicMesh3> *)local_498,
                 (double)CONCAT44(uVar33,uVar32),(double)CONCAT44(uVar31,uVar30));
      if (local_498._16_4_ - Close < 2) {
        UE::Geometry::TImplicitMorphology<UE::Geometry::FDynamicMesh3>::ComputeSecondPass
                  ((TImplicitMorphology<UE::Geometry::FDynamicMesh3> *)local_498,
                   (double)CONCAT44(uVar33,uVar32),(double)CONCAT44(uVar31 ^ uVar35,uVar30 ^ uVar34)
                  );
      }
    }
    else {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3291503738396606353>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\Morphology.h"
                          ,0x6f,"Validate()");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  UE::Geometry::FDynamicMesh3::Copy(param_1,(FMeshShapeGenerator *)&local_3f8);
  if ((param_1->TriangleRefCounts).UsedCount == 0) {
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_608,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                         L"ApplyMeshMorphology_EmptyMesh",
                         L"ApplyMeshMorphology: Morphology operation output an empty mesh");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed,pFVar17
              );
    if (local_608.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_608.TextData.Reference + 0x10))();
    }
  }
  else {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
    pFVar5 = (param_1->AttributeSet).Ptr;
    pFVar22 = pFVar25;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar22 = pFVar5;
    }
    if (0 < (pFVar22->NormalLayers).Array.ArrayNum) {
      pFVar25 = *(FDynamicMeshAttributeSet **)(pFVar22->NormalLayers).Array.AllocatorInstance.Data;
    }
    UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
              ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar25,false);
  }
LAB_14ceaf79b:
  UE::Geometry::FMarchingCubes::~FMarchingCubes(&local_3f8);
  if ((code *)local_498._112_8_ != (code *)0x0) {
    pppuVar23 = &local_418;
    if (local_400 != (undefined ***)0x0) {
      pppuVar23 = local_400;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_138);
  return;
}

// operator() @ 14ceaf840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  char *pcVar3;
  UGeometryScriptDebug *pUVar4;
  FDynamicMeshAttributeSet *pFVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar12;
  int iVar13;
  FText *pFVar14;
  TAxisAlignedBox3<double> *pTVar15;
  ulong64 uVar16;
  FString *pFVar17;
  FMeshShapeGenerator *pFVar18;
  longlong *plVar19;
  longlong lVar20;
  FDynamicMeshAttributeSet *pFVar21;
  undefined ***pppuVar22;
  FDynamicMeshAttributeSet *pFVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_808 [32];
  FText local_7d8;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_7c8;
  FString local_790;
  FDynamicMesh3 local_778;
  TVector<double>_u_0 local_548;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  longlong *local_510;
  undefined8 local_508;
  undefined2 local_500;
  FExtrusionInfo *local_4f8;
  int local_4f0;
  undefined1 local_4e8 [128];
  undefined **local_468;
  code *local_460;
  undefined ***local_450;
  FMarchingCubes local_448;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_198;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_808;
  lVar20 = *(longlong *)this;
  cVar2 = *(char *)(lVar20 + 0x40);
  if (cVar2 == '\0') {
    pTVar15 = UE::Geometry::FDynamicMesh3::GetBounds
                        (param_1,(TAxisAlignedBox3<double> *)&local_548._s_0,true);
    uVar27 = *(undefined4 *)&(pTVar15->Min).field0_0x0;
    uVar28 = *(undefined4 *)((longlong)&(pTVar15->Min).field0_0x0 + 4);
    uVar35 = *(undefined4 *)((longlong)&(pTVar15->Min).field0_0x0 + 8);
    uVar36 = *(undefined4 *)((longlong)&(pTVar15->Min).field0_0x0 + 0xc);
    local_7d8 = *(FText *)&(pTVar15->Min).field0_0x0;
    uVar37 = *(undefined4 *)((longlong)&(pTVar15->Min).field0_0x0 + 0x10);
    uVar38 = *(undefined4 *)((longlong)&(pTVar15->Min).field0_0x0 + 0x14);
    uVar29 = *(undefined4 *)&(pTVar15->Max).field0_0x0;
    uVar30 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 4);
    uVar31 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 8);
    uVar32 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 0xc);
    uVar33 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 0x10);
    uVar34 = *(undefined4 *)((longlong)&(pTVar15->Max).field0_0x0 + 0x14);
  }
  else {
    uVar1 = *(undefined8 *)*(undefined1 (*) [12])(lVar20 + 0x10);
    auVar11 = *(undefined1 (*) [12])(lVar20 + 0x10);
    local_548._0_4_ = (undefined4)uVar1;
    local_548._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    local_548._8_4_ = (undefined4)*(undefined8 *)(lVar20 + 0x18);
    local_548._12_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x18) >> 0x20);
    uVar1 = *(undefined8 *)*(undefined1 (*) [12])(lVar20 + 0x20);
    local_548._16_4_ = (undefined4)uVar1;
    local_548._20_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    auVar9 = *(undefined1 (*) [12])(lVar20 + 0x20);
    uVar1 = *(undefined8 *)*(undefined1 (*) [12])(lVar20 + 0x30);
    uStack_530 = (undefined4)*(undefined8 *)(lVar20 + 0x28);
    uStack_52c = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x28) >> 0x20);
    uStack_528 = (undefined4)uVar1;
    uStack_524 = (undefined4)((ulonglong)uVar1 >> 0x20);
    auVar10 = *(undefined1 (*) [12])(lVar20 + 0x30);
    uStack_520 = (undefined4)*(undefined8 *)(lVar20 + 0x38);
    uStack_51c = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x38) >> 0x20);
    auVar7._12_4_ = uStack_52c;
    auVar7._0_12_ = auVar9;
    uVar37 = auVar9._0_4_;
    uVar38 = auVar9._4_4_;
    uVar29 = auVar9._8_4_;
    auVar8._12_4_ = uStack_51c;
    auVar8._0_12_ = auVar10;
    uVar31 = auVar10._0_4_;
    uVar32 = auVar10._4_4_;
    uVar33 = auVar10._8_4_;
    local_7d8._12_4_ = local_548._12_4_;
    local_7d8.TextData.Reference = (ITextData *)auVar11._0_8_;
    local_7d8.Flags = auVar11._8_4_;
    uVar27 = auVar11._0_4_;
    uVar28 = auVar11._4_4_;
    uVar35 = auVar11._8_4_;
    dVar24 = auVar7._8_8_ - auVar11._0_8_;
    dVar26 = auVar10._0_8_ - local_7d8._8_8_;
    if (dVar24 <= dVar26) {
      dVar26 = dVar24;
    }
    dVar24 = auVar8._8_8_ - auVar9._0_8_;
    if (dVar24 <= dVar26) {
      dVar26 = dVar24;
    }
    uVar30 = uStack_52c;
    uVar34 = uStack_51c;
    uVar36 = local_548._12_4_;
    if (dVar26 <= 0.0) {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_7d8,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                           L"ApplyMeshSolidify_EmptyCustomBounds",
                           L"ApplyMeshSolidify: Empty custom bounds");
      UE::Geometry::AppendError
                ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar14
                );
      if (local_7d8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
      }
      UE::Geometry::FDynamicMesh3::Clear(param_1);
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_778);
  pcVar3 = *(char **)this;
  if (pcVar3[0x58] != '\0') {
    if (*pcVar3 == '\x01') {
      dVar26 = (double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar38,uVar37);
      dVar24 = (double)CONCAT44(uVar30,uVar29) - (double)local_7d8.TextData.Reference;
      dVar25 = (double)CONCAT44(uVar32,uVar31) - (double)CONCAT44(uVar36,uVar35);
      if (dVar26 <= 0.0) {
        dVar26 = 0.0;
      }
      if (dVar24 <= 0.0) {
        dVar24 = 0.0;
      }
      if (dVar25 <= 0.0) {
        dVar25 = 0.0;
      }
      if (dVar26 <= dVar25) {
        dVar26 = dVar25;
      }
      if (dVar26 <= dVar24) {
        dVar26 = dVar24;
      }
      dVar26 = dVar26 / (double)*(int *)(pcVar3 + 8);
    }
    else {
      dVar26 = (double)*(float *)(pcVar3 + 4);
    }
    dVar24 = dVar26 + dVar26;
    if (dVar26 + dVar26 <= *(double *)(pcVar3 + 0x60)) {
      dVar24 = *(double *)(pcVar3 + 0x60);
    }
    UE::Geometry::FDynamicMesh3::Copy(&local_778,param_1,false,false,false,false);
    UE::Geometry::FMeshNormals::QuickComputeVertexNormals(&local_778,false);
    UE::Geometry::FExtrudeMesh::FExtrudeMesh((FExtrudeMesh *)&local_548._s_0,&local_778);
    local_508 = CONCAT44((uint)((ulonglong)dVar24 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(dVar24,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_500 = 0x100;
    UE::Geometry::FExtrudeMesh::Apply((FExtrudeMesh *)&local_548._s_0);
    UE::Geometry::FDynamicMesh3::operator=(param_1,&local_778);
    local_548._0_4_ = 0x528c5578;
    local_548._4_4_ = 1;
    DestructItems<UE::Geometry::FExtrudeMesh::FExtrusionInfo,int>(local_4f8,local_4f0);
    if (local_4f8 != (FExtrusionInfo *)0x0) {
      FMemory::Free(local_4f8);
    }
    if (CONCAT44(local_548._20_4_,local_548._16_4_) != 0) {
      plVar19 = (longlong *)&uStack_528;
      if (local_510 != (longlong *)0x0) {
        plVar19 = local_510;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_198,param_1,true);
  local_7c8.Tree = &local_198;
  pFVar23 = (FDynamicMeshAttributeSet *)0x0;
  local_7c8.FWNBeta = __real_4000000000000000;
  local_7c8.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7c8.FastWindingCache.ArrayNum = 0;
  local_7c8.FastWindingCache.ArrayMax = 0;
  local_7c8.FastWindingCacheOffset = 0;
  local_7c8.FastWindingCacheMeshChangeStamp = 0;
  local_7c8.FWNApproxOrder = 2;
  if ((local_198.RootIndex < 0) ||
     (uVar16 = UE::Geometry::FDynamicMesh3::GetChangeStamp(local_198.Mesh),
     local_198.MeshChangeStamp != uVar16)) {
    pTVar12 = local_7c8.Tree;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(local_7c8.Tree,false);
    uVar16 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar12->Mesh);
    pTVar12->MeshChangeStamp = uVar16;
  }
  UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache(&local_7c8);
  local_7c8.FastWindingCacheMeshChangeStamp = (local_7c8.Tree)->MeshChangeStamp;
  local_4e8._8_8_ = &local_198;
  local_4e8._16_8_ = &local_7c8;
  local_4e8._24_8_ = __real_3fe0000000000000;
  local_468 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_4e8._48_8_ = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_4e8._56_8_ = _UNK_150a9e648;
  local_460 = UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::<lambda_32_>::
              <lambda_invoker_cdecl>;
  local_4e8._40_8_ = __real_7fefffffffffffff;
  local_4e8._80_8_ = ___xmm_3ff0000000000000ffefffffffffffff;
  local_4e8._88_8_ = _UNK_1528d8ae8;
  local_4e8._112_8_ =
       UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  local_4e8._104_8_ = __real_3ff0000000000000;
  local_4e8[0x20] = false;
  local_4e8._64_8_ = ___xmm_ffefffffffffffffffefffffffffffff;
  local_4e8._72_8_ = _UNK_1508ffb58;
  local_4e8[0x60] = true;
  local_4e8._100_4_ = 4;
  local_450 = (undefined ***)0x0;
  local_4e8._0_8_ = param_1;
  UE::Geometry::FMarchingCubes::FMarchingCubes(&local_448);
  local_4e8._44_4_ = uVar28;
  local_4e8._40_4_ = uVar27;
  local_4e8._52_4_ = uVar36;
  local_4e8._48_4_ = uVar35;
  local_4e8._60_4_ = uVar38;
  local_4e8._56_4_ = uVar37;
  local_4e8._68_4_ = uVar30;
  local_4e8._64_4_ = uVar29;
  local_4e8._76_4_ = uVar32;
  local_4e8._72_4_ = uVar31;
  local_4e8._84_4_ = uVar34;
  local_4e8._80_4_ = uVar33;
  pUVar4 = (UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8);
  local_4e8[0x20] = cVar2 != '\0';
  if (**(char **)this == '\x01') {
    pFVar17 = ::FString::FString(&local_790,L"ApplyMeshSolidify");
    iVar13 = GetClampedGridResolution(*(int *)(*(longlong *)this + 8),pFVar17,pUVar4);
    lVar20 = *(longlong *)this;
    if (local_4e8[0x20] == false) {
      dVar26 = (double)*(float *)(lVar20 + 0x50);
    }
    else {
      dVar26 = 0.0;
    }
    dVar25 = (double)CONCAT44(uVar30,uVar29) - (double)local_7d8.TextData.Reference;
    dVar24 = (double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar38,uVar37);
    dVar6 = (double)CONCAT44(uVar32,uVar31) - (double)CONCAT44(uVar36,uVar35);
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    if (dVar24 <= 0.0) {
      dVar24 = 0.0;
    }
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    if (dVar24 <= dVar6) {
      dVar24 = dVar6;
    }
    if (dVar24 <= dVar25) {
      dVar24 = dVar25;
    }
    local_4e8._104_8_ = (dVar24 + dVar26 + dVar26) / (double)iVar13;
  }
  else {
    pFVar17 = ::FString::FString(&local_790,L"ApplyMeshSolidify");
    local_548._0_4_ = uVar27;
    local_548._4_4_ = uVar28;
    local_548._8_4_ = uVar35;
    local_548._12_4_ = uVar36;
    local_548._16_4_ = uVar37;
    local_548._20_4_ = uVar38;
    uStack_530 = uVar29;
    uStack_52c = uVar30;
    uStack_528 = uVar31;
    uStack_524 = uVar32;
    uStack_520 = uVar33;
    uStack_51c = uVar34;
    local_4e8._104_8_ =
         GetClampedCellSize((double)*(float *)(*(longlong *)this + 4),
                            (TAxisAlignedBox3<double> *)&local_548._s_0,pFVar17,pUVar4);
    lVar20 = *(longlong *)this;
  }
  local_4e8._24_8_ = (undefined8)*(float *)(lVar20 + 0x48);
  local_4e8._100_4_ = *(int *)(lVar20 + 0x54);
  local_4e8[0x60] = *(undefined1 *)(lVar20 + 0x4c);
  local_4e8._88_8_ = (undefined8)*(float *)(lVar20 + 0x50);
  pFVar18 = UE::Geometry::TImplicitSolidify<UE::Geometry::FDynamicMesh3>::Generate
                      ((TImplicitSolidify<UE::Geometry::FDynamicMesh3> *)local_4e8);
  UE::Geometry::FDynamicMesh3::Copy(param_1,pFVar18);
  if ((param_1->TriangleRefCounts).UsedCount == 0) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_7d8,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                         L"ApplyMeshSolidify_EmptyMesh",
                         L"ApplyMeshSolidify: Solidify operation output an empty mesh");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),OperationFailed,pFVar14
              );
    if (local_7d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
    }
  }
  else {
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
    pFVar5 = (param_1->AttributeSet).Ptr;
    pFVar21 = pFVar23;
    if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar21 = pFVar5;
    }
    if (0 < (pFVar21->NormalLayers).Array.ArrayNum) {
      pFVar23 = *(FDynamicMeshAttributeSet **)(pFVar21->NormalLayers).Array.AllocatorInstance.Data;
    }
    UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
              ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar23,false);
  }
  UE::Geometry::FMarchingCubes::~FMarchingCubes(&local_448);
  if ((code *)local_4e8._112_8_ != (code *)0x0) {
    pppuVar22 = &local_468;
    if (local_450 != (undefined ***)0x0) {
      pppuVar22 = local_450;
    }
    (*(code *)(*pppuVar22)[2])();
  }
  if (local_7c8.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7c8.FastWindingCache.AllocatorInstance.Data);
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_198);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_778);
  return;
}

// ApplyMeshMorphology @ 14ceb4360

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology
          (UDynamicMesh *param_1,FGeometryScriptMorphologyOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_38;
  undefined1 local_30 [16];
  FGeometryScriptMorphologyOptions *local_20;
  UGeometryScriptDebug **local_18;
  
  local_38 = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                        L"ApplyMeshMorphology_InvalidInput",
                        L"ApplyMeshMorphology: TargetMesh is Null");
    UE::Geometry::AppendError(local_38,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = &local_38;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyMeshSolidify @ 14ceb4410

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify
          (UDynamicMesh *param_1,FGeometryScriptSolidifyOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_38;
  undefined1 local_30 [16];
  FGeometryScriptSolidifyOptions *local_20;
  UGeometryScriptDebug **local_18;
  
  local_38 = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                        L"ApplyMeshSolidify_InvalidInput",L"ApplyMeshSolidify: TargetMesh is Null");
    UE::Geometry::AppendError(local_38,InvalidInputs,pFVar1);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = &local_38;
  local_30._8_8_ = &local_20;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetPrivateStaticClass @ 14cebcd70

UClass * __cdecl UGeometryScriptLibrary_MeshVoxelFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshVoxelFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshVoxelFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshVoxelFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshVoxelFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions @ 14cec26c0

void __cdecl
UGeometryScriptLibrary_MeshVoxelFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshVoxelFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshVoxelFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyMeshMorphology @ 14cec4fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshVoxelFunctions::execApplyMeshMorphology
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined1 auStack_148 [32];
  UGeometryScriptDebug *local_118;
  UDynamicMesh *local_110;
  UGeometryScriptDebug *local_108;
  undefined1 local_100 [16];
  undefined8 *local_f0;
  UGeometryScriptDebug **local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined7 uStack_27;
  uint uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_110 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  local_78 = CONCAT31(local_78._1_3_,1);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_27 = 0;
  uStack_20 = uStack_20 & 0xffffff00;
  uStack_74 = 0x3f000000;
  uStack_70 = 0x40;
  uStack_6c = uStack_6c & 0xffffff00;
  local_68 = CONCAT31(local_68._1_3_,1);
  uStack_64 = 0x3f000000;
  uStack_60 = 0x40;
  local_28 = 0;
  uStack_1c = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_118 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  pUVar2 = local_110;
  local_d8 = CONCAT44(uStack_74,local_78);
  uStack_d0 = CONCAT44(uStack_6c,uStack_70);
  local_c8 = CONCAT44(uStack_64,local_68);
  uStack_c0 = CONCAT44(uStack_5c,uStack_60);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8 = local_58;
  uStack_b0 = uStack_50;
  local_a8 = local_48;
  uStack_a0 = uStack_40;
  local_88 = CONCAT71(uStack_27,local_28);
  uStack_80 = CONCAT44(uStack_1c,uStack_20);
  local_98 = local_38;
  uStack_90 = uStack_30;
  local_108 = local_118;
  if (local_110 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_100,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                        L"ApplyMeshMorphology_InvalidInput",
                        L"ApplyMeshMorphology: TargetMesh is Null");
    UE::Geometry::AppendError(local_108,InvalidInputs,pFVar3);
    if ((ITextData *)local_100._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_100._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_f0 = &local_d8;
    local_e8 = &local_108;
    local_100._8_8_ = &local_f0;
    local_100._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshMorphology'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_110,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_100,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execApplyMeshSolidify @ 14cec51f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshVoxelFunctions::execApplyMeshSolidify
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  undefined1 auStack_168 [32];
  UGeometryScriptDebug *local_138;
  UDynamicMesh *local_130;
  UGeometryScriptDebug *local_128;
  undefined1 local_120 [16];
  undefined8 *local_110;
  UGeometryScriptDebug **local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 uStack_47;
  undefined2 uStack_43;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined7 uStack_2f;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_130 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_88 = CONCAT31(local_88._1_3_,1);
  uStack_84 = 0x3f000000;
  local_68 = 0;
  uStack_60 = 0;
  local_28 = __real_3ff0000000000000;
  uStack_80 = 0x40;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_47 = 0;
  uStack_43 = 0;
  uStack_41 = 0;
  uStack_40 = 0x3f000000;
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  local_38 = 0x3f800000;
  uStack_34 = 3;
  uStack_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_138 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  pUVar2 = local_130;
  local_f8 = CONCAT44(uStack_84,local_88);
  uStack_f0 = CONCAT44(uStack_7c,uStack_80);
  local_e8 = local_78;
  uStack_e0 = uStack_70;
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  local_b8 = CONCAT17(uStack_41,CONCAT25(uStack_43,CONCAT41(uStack_47,local_48)));
  uStack_b0 = CONCAT44(uStack_3c,uStack_40);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8 = local_58;
  uStack_c0 = uStack_50;
  local_a8 = CONCAT44(uStack_34,local_38);
  uStack_a0 = CONCAT71(uStack_2f,uStack_30);
  local_98 = local_28;
  local_128 = local_138;
  if (local_130 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_120,L"UGeometryScriptLibrary_MeshVoxelFunctions",
                        L"ApplyMeshSolidify_InvalidInput",L"ApplyMeshSolidify: TargetMesh is Null");
    UE::Geometry::AppendError(local_128,InvalidInputs,pFVar3);
    if ((ITextData *)local_120._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_120._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_110 = &local_f8;
    local_108 = &local_128;
    local_120._8_8_ = &local_110;
    local_120._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshVoxelFunctions::ApplyMeshSolidify'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_130,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_120,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

