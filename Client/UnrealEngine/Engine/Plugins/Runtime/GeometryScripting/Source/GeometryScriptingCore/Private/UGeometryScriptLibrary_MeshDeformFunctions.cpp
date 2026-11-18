// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 32

// StaticClass @ 14cd9a5a0

UClass * __cdecl UGeometryScriptLibrary_MeshDeformFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshDeformFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshDeformFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshDeformFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshDeformFunctions @ 14cda6060

UGeometryScriptLibrary_MeshDeformFunctions * __thiscall
UGeometryScriptLibrary_MeshDeformFunctions::UGeometryScriptLibrary_MeshDeformFunctions
          (UGeometryScriptLibrary_MeshDeformFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshDeformFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshDeformFunctions @ 14cda6090

UGeometryScriptLibrary_MeshDeformFunctions * __thiscall
UGeometryScriptLibrary_MeshDeformFunctions::UGeometryScriptLibrary_MeshDeformFunctions
          (UGeometryScriptLibrary_MeshDeformFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshDeformFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshDeformFunctions @ 14cda6b00

void __thiscall
UGeometryScriptLibrary_MeshDeformFunctions::~UGeometryScriptLibrary_MeshDeformFunctions
          (UGeometryScriptLibrary_MeshDeformFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshDeformFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdabbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicMesh3 *this_00;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar7;
  uint *puVar8;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  FSharedReferencer<1> local_1c0;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_1b8;
  FBendMeshOp local_1a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pTVar7 = MakeShared<UE::Geometry::FDynamicMesh3,1>(&local_1b8);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  this_00 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  if (this_00 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::operator=(this_00,param_1);
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)&local_1a8);
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = (longlong)&___7FBendMeshOp_Geometry_UE__6B_;
  local_1a8.bLockBottom = false;
  local_1a8._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1a8._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1a8._padding_ = ___xmm_3ff00000000000000000000000000000;
  local_1a8._padding_ = _UNK_15061cbc8;
  local_1a8.BendDegrees = __real_4056800000000000;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8 = 0;
  local_1c0.ReferenceController = pTVar1;
  local_1a8._padding_ = (longlong)this_00;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)&local_1a8._padding_,&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.ReferenceController);
  plVar2 = *(longlong **)this;
  pcVar3 = *(char **)((longlong)this + 8);
  local_1a8._padding_ = *plVar2;
  local_1a8._padding_ = plVar2[1];
  local_1a8._padding_ = plVar2[2];
  local_1a8._padding_ = plVar2[3];
  local_1a8._padding_ = plVar2[4];
  local_1a8._padding_ = plVar2[5];
  local_1a8._padding_ = plVar2[6];
  if (*pcVar3 == '\0') {
    puVar8 = (uint *)(pcVar3 + 4);
  }
  else {
    puVar8 = *(uint **)((longlong)this + 0x10);
  }
  local_1a8._padding_ = (longlong)(double)(float)(*puVar8 ^ __xmm_80000000800000008000000080000000);
  local_1a8._padding_ = (longlong)(double)**(float **)((longlong)this + 0x10);
  local_1a8.BendDegrees = (double)**(float **)((longlong)this + 0x18);
  local_1a8.bLockBottom = pcVar3[8] == '\0';
  UE::Geometry::FBendMeshOp::CalculateResult(&local_1a8,(FProgressCancel *)0x0);
  lVar5 = local_1a8._padding_;
  local_1a8._padding_ = 0;
  UE::Geometry::FDynamicMesh3::operator=(param_1,(FDynamicMesh3 *)lVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a8._padding_);
  local_1a8._padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_1a8._padding_,(int)local_1a8._padding_);
  if ((FGeometryWarning *)local_1a8._padding_ != (FGeometryWarning *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_1a8._padding_,(int)local_1a8._padding_);
  if ((FGeometryError *)local_1a8._padding_ != (FGeometryError *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  if ((undefined8 *)local_1a8._padding_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1a8._padding_)(local_1a8._padding_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// operator() @ 14cdabe40

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  short sVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  FText *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FDynamicMesh3 **local_res8;
  code *local_48;
  FDynamicMesh3 ***local_40;
  FText local_38;
  FDynamicMesh3 *local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_18 = **(longlong **)this;
  if ((local_18 == 0) ||
     (*(int *)(local_18 + 8) <
      (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyDisplaceFromPerVertexVectors_InvalidVectorLength",
                        L"ApplyDisplaceFromPerVertexVectors: VectorList Length is less than TargetMesh MaxVertexID"
                       );
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar8);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    local_20 = *(undefined8 *)((longlong)this + 0x10);
    plVar2 = *(longlong **)((longlong)this + 0x18);
    local_28 = param_1;
    if ((*plVar2 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *plVar2;
    if (*(int *)(lVar3 + 0x10) == *(int *)(lVar3 + 0x3c)) {
      uVar11 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      uVar10 = 0;
      if ((uVar11 != 0) &&
         (pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar10 = 0,
         0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
        uVar9 = 1;
        uVar10 = 1;
        if (1 < (int)uVar11) {
          do {
            sVar1 = *(short *)(*(longlong *)(pFVar4 + (ulonglong)(uVar9 >> 9) * 8) +
                              (ulonglong)(uVar9 & 0x1ff) * 2);
            if ((sVar1 != 0) && (uVar10 = uVar9, sVar1 != -1)) break;
            uVar9 = uVar9 + 1;
            uVar10 = uVar9;
          } while ((int)uVar9 < (int)uVar11);
        }
      }
joined_r0x00014cdabf28:
      if (uVar10 != uVar11) {
        while( true ) {
          ``UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors'::__l2::
          <lambda_1>::operator()'::__l2::<lambda_1>::operator()(&local_28,uVar10);
          uVar10 = uVar10 + 1;
          if ((int)uVar11 <= (int)uVar10) break;
          pFVar4 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
          while( true ) {
            lVar3 = (ulonglong)(uVar10 >> 9) * 8;
            lVar6 = (ulonglong)(uVar10 & 0x1ff) * 2;
            if ((*(short *)(lVar6 + *(longlong *)(pFVar4 + lVar3)) != 0) &&
               (*(short *)(lVar6 + *(longlong *)(pFVar4 + lVar3)) != -1)) break;
            uVar10 = uVar10 + 1;
            if ((int)uVar11 <= (int)uVar10) goto joined_r0x00014cdabf28;
          }
        }
        goto joined_r0x00014cdabf28;
      }
    }
    else {
      local_res8 = &local_28;
      local_40 = &local_res8;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors'::__l2::<lambda_1>::operator()'::__l14::<lambda_2>,void,int>
                 ::Call;
      FGeometryScriptMeshSelection::ProcessByVertexID
                (*(FGeometryScriptMeshSelection **)((longlong)this + 0x18),param_1,
                 (TFunctionRef<void___cdecl(int)> *)&local_48,false);
    }
  }
  return;
}

// operator() @ 14cdac040

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  FDynamicMeshAttributeSet *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  TDenseGrid2<float> *this_01;
  longlong *plVar15;
  code *pcVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  ForAnyElementType FVar21;
  bool bVar22;
  short sVar23;
  int iVar24;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar25;
  longlong lVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  FText *pFVar31;
  longlong lVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  uint uVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  float fVar45;
  undefined1 in_XMM2 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  uint local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d8;
  longlong local_1c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1c0;
  int local_1b0;
  uint local_1ac;
  ulonglong local_1a8;
  longlong local_1a0;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *local_198;
  uint local_190 [4];
  int local_180 [4];
  TDenseGrid2<float> *local_170;
  undefined8 local_168;
  undefined4 local_160;
  code *local_158;
  TArray<int,TSizedDefaultAllocator<32>_> **local_150;
  TArray<int,TSizedDefaultAllocator<32>_> *local_148;
  FDynamicMesh3 *local_140;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_138;
  FText local_130;
  TVector<double>_u_0 local_120;
  double local_108;
  double dStack_100;
  double local_f8;
  
  pFVar12 = (param_1->AttributeSet).Ptr;
  if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
    iVar11 = **(int **)this;
    iVar24 = (**(code **)(pFVar12->_padding_ + 0xa8))();
    if (iVar11 < iVar24) {
      pTVar25 = UE::Geometry::FDynamicMeshAttributeSet::GetUVLayer
                          ((param_1->AttributeSet).Ptr,iVar11);
      pFVar12 = (param_1->AttributeSet).Ptr;
      if ((pFVar12->NormalLayers).Array.ArrayNum < 1) {
        lVar44 = 0;
      }
      else {
        lVar44 = *(longlong *)(pFVar12->NormalLayers).Array.AllocatorInstance.Data;
      }
      lVar13 = *(longlong *)((longlong)this + 0x10);
      dVar6 = *(double *)(lVar13 + 8);
      dVar7 = *(double *)(lVar13 + 0x10);
      dVar8 = *(double *)(lVar13 + 0x18);
      dVar9 = *(double *)(lVar13 + 0x20);
      iVar11 = *(int *)(*(longlong *)((longlong)this + 0x18) + 0x20);
      local_120._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_120._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      fVar4 = *(float *)(*(longlong *)((longlong)this + 0x18) + 0x34);
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = 0;
      local_1c0.ArrayMax = 0;
      local_120._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1c8 = lVar44;
      local_198 = pTVar25;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::Init
                (&local_1c0,(TVector<double> *)&local_120._s_0,
                 (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
      local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.ArrayNum = 0;
      local_1d8.ArrayMax = 0;
      local_1b0 = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::Init
                (&local_1d8,&local_1b0,
                 (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
      fVar20 = __real_3f800000;
      uVar41 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
               (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
      local_res18 = 0;
      if ((uVar41 != 0) &&
         (pFVar14 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         0xfffd < (ushort)(**(short **)pFVar14 - 1U))) {
        uVar33 = 1;
        local_res18 = 1;
        if (1 < (int)uVar41) {
          do {
            lVar13 = *(longlong *)(pFVar14 + (ulonglong)(uVar33 >> 9) * 8);
            if ((*(short *)(lVar13 + (ulonglong)(uVar33 & 0x1ff) * 2) != 0) &&
               (local_res18 = uVar33, *(short *)(lVar13 + (ulonglong)(uVar33 & 0x1ff) * 2) != -1))
            break;
            uVar33 = uVar33 + 1;
            local_res18 = uVar33;
          } while ((int)uVar33 < (int)uVar41);
        }
      }
      local_1ac = uVar41;
      if (local_res18 != uVar41) {
LAB_14cdac2a0:
        do {
          lVar13 = *(longlong *)&pTVar25->field_0x78;
          uVar35 = local_res18 * 3;
          uVar33 = *(uint *)(*(longlong *)(lVar13 + (ulonglong)(uVar35 >> 9) * 8) +
                            (ulonglong)(uVar35 & 0x1ff) * 4);
          if (-1 < (int)uVar33) {
            lVar44 = *(longlong *)(lVar44 + 0x78);
            iVar24 = *(int *)(*(longlong *)(lVar44 + (ulonglong)(uVar35 >> 9) * 8) +
                             (ulonglong)(uVar35 & 0x1ff) * 4);
            if (-1 < iVar24) {
              local_190[0] = uVar33;
              local_180[0] = iVar24;
              lVar26 = *(longlong *)
                        ((param_1->Triangles).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_res18 >> 9) * 8);
              uVar39 = (ulonglong)(uVar35 + 1 & 0x1ff);
              uVar38 = (ulonglong)(uVar35 + 1 >> 9);
              local_160 = *(undefined4 *)(lVar26 + 8 + (ulonglong)(local_res18 & 0x1ff) * 0xc);
              uVar42 = (ulonglong)(uVar35 + 2 & 0x1ff);
              uVar34 = (ulonglong)(uVar35 + 2 >> 9);
              local_168 = *(undefined8 *)(lVar26 + (ulonglong)(local_res18 & 0x1ff) * 0xc);
              local_190[1] = *(undefined4 *)(*(longlong *)(lVar13 + uVar38 * 8) + uVar39 * 4);
              local_1a0 = 0;
              local_190[2] = *(undefined4 *)(*(longlong *)(lVar13 + uVar34 * 8) + uVar42 * 4);
              local_180[1] = *(undefined4 *)(*(longlong *)(lVar44 + uVar38 * 8) + uVar39 * 4);
              local_180[2] = *(undefined4 *)(*(longlong *)(lVar44 + uVar34 * 8) + uVar42 * 4);
              do {
                this_01 = *(TDenseGrid2<float> **)((longlong)this + 0x18);
                local_1a8 = (ulonglong)*(uint *)((longlong)&local_168 + local_1a0);
                uVar41 = *(uint *)((longlong)local_190 + local_1a0);
                lVar13 = this_01->DimensionX;
                lVar44 = lVar13 + -1;
                fVar49 = (float)dVar6 *
                         *(float *)(*(longlong *)
                                     (*(longlong *)&pTVar25->field_0x48 +
                                     (ulonglong)((uVar41 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar41 * 2 & 0x1ff) * 4) + (float)dVar8;
                fVar48 = (float)dVar7 *
                         *(float *)(*(longlong *)
                                     (*(longlong *)&pTVar25->field_0x48 +
                                     (ulonglong)((uVar41 & 0x7fffffff) >> 8) * 8) +
                                   (ulonglong)(uVar41 * 2 + 1 & 0x1ff) * 4) + (float)dVar9;
                auVar47 = roundps(in_XMM3,ZEXT416((uint)fVar48),1);
                auVar46 = roundps(in_XMM2,ZEXT416((uint)fVar49),1);
                fVar49 = ((fVar49 - auVar46._0_4_) -
                         *(float *)&this_01[1].Buffer.AllocatorInstance.Data) /
                         *(float *)&this_01[1].Buffer.ArrayNum;
                fVar48 = ((fVar48 - auVar47._0_4_) * (float)iVar11 * fVar4 -
                         *(float *)((longlong)&this_01[1].Buffer.AllocatorInstance.Data + 4)) /
                         *(float *)((longlong)&this_01[1].Buffer.ArrayNum + 4);
                lVar32 = (longlong)fVar49;
                lVar40 = (longlong)fVar48;
                lVar26 = lVar44;
                if (lVar32 < lVar44) {
                  lVar26 = lVar32;
                }
                lVar43 = 0;
                if (0 < lVar26) {
                  lVar43 = lVar26;
                }
                if (lVar32 + 1 < lVar44) {
                  lVar44 = lVar32 + 1;
                }
                lVar26 = 0;
                if (0 < lVar44) {
                  lVar26 = lVar44;
                }
                lVar32 = this_01->DimensionY + -1;
                lVar44 = lVar32;
                if (lVar40 < lVar32) {
                  lVar44 = lVar40;
                }
                fVar49 = fVar49 - (float)lVar43;
                lVar36 = 0;
                if (0 < lVar44) {
                  lVar36 = lVar44;
                }
                if (lVar40 + 1 < lVar32) {
                  lVar32 = lVar40 + 1;
                }
                fVar48 = fVar48 - (float)lVar36;
                if (fVar20 <= fVar49) {
                  fVar49 = fVar20;
                }
                if (fVar20 <= fVar48) {
                  fVar48 = fVar20;
                }
                if (fVar49 <= 0.0) {
                  fVar49 = 0.0;
                }
                if (fVar48 <= 0.0) {
                  fVar48 = 0.0;
                }
                local_170 = this_01;
                pfVar27 = UE::Geometry::TDenseGrid2<float>::operator[]
                                    (this_01,lVar36 * lVar13 + lVar43);
                pfVar28 = UE::Geometry::TDenseGrid2<float>::operator[]
                                    (this_01,lVar36 * lVar13 + lVar26);
                lVar44 = 0;
                if (0 < lVar32) {
                  lVar44 = lVar32;
                }
                pfVar29 = UE::Geometry::TDenseGrid2<float>::operator[]
                                    (local_170,lVar44 * lVar13 + lVar43);
                pfVar30 = UE::Geometry::TDenseGrid2<float>::operator[]
                                    (local_170,lVar44 * lVar13 + lVar26);
                lVar26 = local_1a0;
                lVar44 = *(longlong *)(local_1c8 + 0x48);
                uVar41 = *(int *)((longlong)local_180 + local_1a0) * 3;
                uVar33 = (uint)local_1a8;
                lVar32 = (longlong)(int)uVar33;
                fVar5 = *(float *)(*(longlong *)(lVar44 + (ulonglong)(uVar41 + 1 >> 9) * 8) +
                                  (ulonglong)(uVar41 + 1 & 0x1ff) * 4);
                lVar13 = *(longlong *)
                          ((param_1->Vertices).Blocks.AllocatorInstance.Data + (local_1a8 >> 9) * 8)
                ;
                pdVar2 = (double *)(lVar13 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
                dVar17 = *pdVar2;
                dVar18 = pdVar2[1];
                dVar10 = *(double *)(lVar13 + 0x10 + (ulonglong)(uVar33 & 0x1ff) * 0x18);
                in_XMM3._8_8_ = 0;
                in_XMM3._0_8_ = dVar10;
                local_108 = dVar17;
                dStack_100 = dVar18;
                local_f8 = dVar10;
                fVar49 = (((fVar20 - fVar48) * (fVar20 - fVar49) * *pfVar27 +
                           (fVar20 - fVar49) * fVar48 * *pfVar29 +
                          (fVar20 - fVar48) * fVar49 * *pfVar28 + fVar48 * fVar49 * *pfVar30) -
                         (*(float **)((longlong)this + 0x10))[10]) *
                         **(float **)((longlong)this + 0x10);
                fVar48 = *(float *)(*(longlong *)(lVar44 + (ulonglong)(uVar41 >> 9) * 8) +
                                   (ulonglong)(uVar41 & 0x1ff) * 4);
                fVar45 = fVar49 * *(float *)(*(longlong *)
                                              (lVar44 + (ulonglong)(uVar41 + 2 >> 9) * 8) +
                                            (ulonglong)(uVar41 + 2 & 0x1ff) * 4);
                in_XMM2 = ZEXT416((uint)fVar45);
                uVar41 = 0;
                if ((int)uVar33 < local_1c0.ArrayNum) {
                  uVar41 = ~uVar33 >> 0x1f;
                }
                if ((uVar41 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                dVar19 = *(double *)(local_1c0.AllocatorInstance.Data + lVar32 * 0x18 + 8);
                dVar10 = (double)fVar45 + dVar10 +
                         *(double *)(local_1c0.AllocatorInstance.Data + lVar32 * 0x18 + 8 + 8);
                *(double *)(local_1c0.AllocatorInstance.Data + lVar32 * 0x18) =
                     (double)(fVar49 * fVar48) + dVar17 +
                     *(double *)(local_1c0.AllocatorInstance.Data + lVar32 * 0x18);
                auVar46._8_4_ = SUB84(dVar10,0);
                auVar46._0_8_ = (double)(fVar5 * fVar49) + dVar18 + dVar19;
                auVar46._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
                *(undefined1 (*) [16])(local_1c0.AllocatorInstance.Data + lVar32 * 0x18 + 8) =
                     auVar46;
                uVar41 = 0;
                if ((int)uVar33 < local_1d8.ArrayNum) {
                  uVar41 = ~uVar33 >> 0x1f;
                }
                if ((uVar41 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                local_1a0 = lVar26 + 4;
                *(int *)(local_1d8.AllocatorInstance.Data + lVar32 * 4) =
                     *(int *)(local_1d8.AllocatorInstance.Data + lVar32 * 4) + 1;
                pTVar25 = local_198;
                uVar41 = local_1ac;
              } while (local_1a0 < 0xc);
            }
          }
          local_res18 = local_res18 + 1;
          lVar44 = local_1c8;
          if ((int)local_res18 < (int)uVar41) {
            pFVar14 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
            do {
              if ((*(short *)(*(longlong *)(pFVar14 + (ulonglong)(local_res18 >> 9) * 8) +
                             (ulonglong)(local_res18 & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)(pFVar14 + (ulonglong)(local_res18 >> 9) * 8) +
                            (ulonglong)(local_res18 & 0x1ff) * 2) != -1)) goto LAB_14cdac2a0;
              local_res18 = local_res18 + 1;
            } while ((int)local_res18 < (int)uVar41);
          }
        } while (local_res18 != uVar41);
      }
      plVar15 = *(longlong **)((longlong)this + 0x20);
      if ((*plVar15 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      dVar6 = __real_3ff0000000000000;
      lVar44 = *plVar15;
      if (*(int *)(lVar44 + 0x10) == *(int *)(lVar44 + 0x3c)) {
        uVar33 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
        uVar41 = 0;
        if ((uVar33 != 0) &&
           (pFVar14 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar41 = 0
           , 0xfffd < (ushort)(**(short **)pFVar14 - 1U))) {
          uVar35 = 1;
          uVar41 = 1;
          if (1 < (int)uVar33) {
            do {
              sVar23 = *(short *)(*(longlong *)(pFVar14 + (ulonglong)(uVar35 >> 9) * 8) +
                                 (ulonglong)(uVar35 & 0x1ff) * 2);
              if ((sVar23 != 0) && (uVar41 = uVar35, sVar23 != -1)) break;
              uVar35 = uVar35 + 1;
              uVar41 = uVar35;
            } while ((int)uVar35 < (int)uVar33);
          }
        }
joined_r0x00014cdac8ab:
        if (uVar41 != uVar33) {
          while( true ) {
            uVar37 = ~uVar41 >> 0x1f;
            uVar35 = 0;
            if ((int)uVar41 < local_1d8.ArrayNum) {
              uVar35 = uVar37;
            }
            if ((uVar35 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            lVar44 = (longlong)(int)uVar41;
            if (*(int *)(local_1d8.AllocatorInstance.Data + lVar44 * 4) != 0) {
              uVar35 = 0;
              if ((int)uVar41 < local_1c0.ArrayNum) {
                uVar35 = uVar37;
              }
              if ((uVar35 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              FVar21.Data = local_1c0.AllocatorInstance.Data;
              uVar35 = 0;
              if ((int)uVar41 < local_1d8.ArrayNum) {
                uVar35 = uVar37;
              }
              if ((uVar35 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              dVar10 = dVar6 / (double)*(int *)(local_1d8.AllocatorInstance.Data + lVar44 * 4);
              dVar7 = *(double *)(FVar21.Data + lVar44 * 0x18);
              dVar8 = *(double *)(FVar21.Data + lVar44 * 0x18 + 8);
              dVar9 = *(double *)(FVar21.Data + lVar44 * 0x18 + 0x10);
              sVar23 = _dclass();
              if (((sVar23 < 1) && (sVar23 = _dclass(), sVar23 < 1)) &&
                 (sVar23 = _dclass(), sVar23 < 1)) {
                uVar34 = (ulonglong)(uVar41 & 0x1ff);
                lVar44 = *(longlong *)
                          ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar41 >> 9) * 8);
                *(double *)(lVar44 + uVar34 * 0x18) = dVar10 * dVar7;
                *(double *)(lVar44 + 8 + uVar34 * 0x18) = dVar10 * dVar8;
                *(double *)(lVar44 + 0x10 + uVar34 * 0x18) = dVar10 * dVar9;
                if ((param_1->ChangeStampShape).bIsEnabled != false) {
                  this_00 = &(param_1->ChangeStampShape).Mutex;
                  LOCK();
                  bVar22 = this_00->State == (atomic<unsigned_char>)0x0;
                  if (bVar22) {
                    this_00->State = (atomic<unsigned_char>)0x1;
                  }
                  UNLOCK();
                  if (!bVar22) {
                    UE::FMutex::LockSlow(this_00);
                  }
                  puVar1 = &(param_1->ChangeStampShape).Value;
                  *puVar1 = *puVar1 + 1;
                  LOCK();
                  aVar3 = this_00->State;
                  this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                  UNLOCK();
                  if (((byte)aVar3 & 2) != 0) {
                    UE::FMutex::WakeWaitingThread(this_00);
                  }
                }
              }
            }
            uVar41 = uVar41 + 1;
            if ((int)uVar33 <= (int)uVar41) break;
            while( true ) {
              lVar44 = *(longlong *)
                        ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar41 >> 9) * 8);
              if ((*(short *)(lVar44 + (ulonglong)(uVar41 & 0x1ff) * 2) != 0) &&
                 (*(short *)(lVar44 + (ulonglong)(uVar41 & 0x1ff) * 2) != -1)) break;
              uVar41 = uVar41 + 1;
              if ((int)uVar33 <= (int)uVar41) goto joined_r0x00014cdac8ab;
            }
          }
          goto joined_r0x00014cdac8ab;
        }
      }
      else {
        local_148 = &local_1d8;
        local_138 = &local_1c0;
        local_150 = &local_148;
        local_158 = UE::Core::Private::Function::
                    TFunctionRefCaller<``UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap'::__l2::<lambda_1>::operator()'::__l18::<lambda_1>,void,int>
                    ::Call;
        local_140 = param_1;
        FGeometryScriptMeshSelection::ProcessByVertexID
                  (*(FGeometryScriptMeshSelection **)((longlong)this + 0x20),param_1,
                   (TFunctionRef<void___cdecl(int)> *)&local_158,false);
      }
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      if (local_1c0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_1c0.AllocatorInstance.Data);
      return;
    }
  }
  pFVar31 = FText::AsLocalizable_Advanced_LocText
                      (&local_130,L"UGeometryScriptLibrary_MeshDeformFunctions",
                       L"ApplyDisplaceFromTextureMap_InvalidUVLayer",
                       L"ApplyDisplaceFromTextureMap: TargetMesh is missing requested UV Set");
  UE::Geometry::AppendError
            ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar31);
  if (local_130.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
  }
  return;
}

// operator() @ 14cdacb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicMesh3 *this_00;
  undefined8 *puVar2;
  char *pcVar3;
  code *pcVar4;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> TVar5;
  bool bVar6;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar7;
  uint *puVar8;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  FSharedReferencer<1> local_1d0;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_1c8;
  undefined1 local_1b8 [8];
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> local_1b0;
  ForAnyElementType local_150;
  int local_148;
  ForAnyElementType local_140;
  int local_138;
  FDynamicMesh3 *local_130;
  FSharedReferencer<1> local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double local_e8;
  double local_e0;
  double local_58;
  double dStack_50;
  EFlareType local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pTVar7 = MakeShared<UE::Geometry::FDynamicMesh3,1>(&local_1c8);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  this_00 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  if (this_00 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::operator=(this_00,param_1);
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)local_1b8);
  local_128.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_1b8 = (undefined1  [8])&___7FFlareMeshOp_Geometry_UE__6B_;
  local_48 = SinFlare;
  local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  local_58 = ___xmm_40590000000000004059000000000000;
  dStack_50 = _UNK_1512468d8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d8 = 0;
  local_1d0.ReferenceController = pTVar1;
  local_130 = this_00;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_128,&local_1d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.ReferenceController);
  puVar2 = *(undefined8 **)this;
  pcVar3 = *(char **)((longlong)this + 8);
  local_120 = (double)*puVar2;
  dStack_118 = (double)puVar2[1];
  local_110 = (double)puVar2[2];
  uStack_108 = puVar2[3];
  uStack_100 = puVar2[4];
  uStack_f8 = puVar2[5];
  uStack_f0 = puVar2[6];
  if (*pcVar3 == '\0') {
    puVar8 = (uint *)(pcVar3 + 4);
  }
  else {
    puVar8 = *(uint **)((longlong)this + 0x10);
  }
  local_e8 = (double)(float)(*puVar8 ^ __xmm_80000000800000008000000080000000);
  local_e0 = (double)**(float **)((longlong)this + 0x10);
  local_58 = (double)**(float **)((longlong)this + 0x18);
  dStack_50 = (double)**(float **)((longlong)this + 0x20);
  if (pcVar3[8] == '\0') {
    local_48 = SinFlare;
  }
  else {
    local_48 = (pcVar3[8] != '\x01') + SinSqrFlare;
  }
  UE::Geometry::FFlareMeshOp::CalculateResult((FFlareMeshOp *)local_1b8,(FProgressCancel *)0x0);
  TVar5.Ptr = local_1b0.Ptr;
  local_1b0.Ptr = (FDynamicMesh3 *)0x0;
  UE::Geometry::FDynamicMesh3::operator=(param_1,TVar5.Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.ReferenceController);
  local_1b8 = (undefined1  [8])&___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>((FGeometryWarning *)local_140.Data,local_138);
  if ((FGeometryWarning *)local_140.Data != (FGeometryWarning *)0x0) {
    FMemory::Free(local_140.Data);
  }
  DestructItems<UE::Geometry::FGeometryError,int>((FGeometryError *)local_150.Data,local_148);
  if ((FGeometryError *)local_150.Data != (FGeometryError *)0x0) {
    FMemory::Free(local_150.Data);
  }
  if (local_1b0.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_1b0.Ptr)->_padding_)(local_1b0.Ptr,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// operator() @ 14cdace00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FMutex *pFVar1;
  uint *puVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  undefined8 uVar9;
  int iVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  short sVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  <lambda_1> local_res8;
  undefined1 local_res10 [8];
  ulonglong local_res18;
  int local_res20;
  int local_f8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_e0;
  FScriptContainerElement *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  TArray<int,TSizedDefaultAllocator<32>_> **local_b0;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98;
  FDynamicMesh3 **local_90;
  FDynamicMesh3 *local_88;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_80;
  undefined8 local_78;
  TArray<int,TSizedDefaultAllocator<32>_> *local_70;
  FDynamicMesh3 *local_68;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  
  iVar22 = (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  local_res20 = iVar22;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&local_f0,iVar22,Default);
  plVar6 = *(longlong **)this;
  if ((*plVar6 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar16 = *plVar6;
  local_res8 = SUB81(this,0);
  if (*(int *)(lVar16 + 0x10) - *(int *)(lVar16 + 0x3c) < 1) {
    local_f8 = 0;
    if (0 < **(int **)((longlong)this + 8)) {
      do {
        uVar21 = 0;
        local_80 = &local_f0;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh'::__l2::<lambda_1>::operator()'::__l17::<lambda_2>,void,int>
                   ::Call;
        local_78 = *(undefined8 *)((longlong)this + 0x10);
        local_90 = &local_88;
        local_a8.DataPtr = (void **)0x0;
        local_a8.ArrayNum = 0;
        local_88 = param_1;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",iVar22,1,(TFunctionRef<void___cdecl(int)> *)&local_98,
                   local_res8,None,&local_a8);
        iVar10 = local_res20;
        if (0 < iVar22) {
          lVar16 = 0;
          uVar18 = 0;
          do {
            uVar20 = (uint)uVar21;
            if ((int)uVar20 <
                (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (param_1->VertexRefCounts).RefCounts.CurBlockUsed)) {
              uVar17 = (ulonglong)(uVar18 & 0x1ff);
              local_res18 = uVar21 >> 9;
              if ((ushort)(*(short *)(*(longlong *)
                                       ((param_1->VertexRefCounts).RefCounts.Blocks.
                                        AllocatorInstance.Data + local_res18 * 8) + uVar17 * 2) - 1U
                          ) < 0xfffe) {
                uVar15 = 0;
                if ((int)uVar20 < local_f0.ArrayNum) {
                  uVar15 = ~uVar20 >> 0x1f;
                }
                if ((uVar15 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                FVar19.Data = local_f0.AllocatorInstance.Data;
                sVar14 = _dclass(*(undefined8 *)(local_f0.AllocatorInstance.Data + lVar16));
                if (((sVar14 < 1) &&
                    (sVar14 = _dclass(*(undefined8 *)(FVar19.Data + lVar16 + 8)), sVar14 < 1)) &&
                   (sVar14 = _dclass(*(undefined8 *)(FVar19.Data + lVar16 + 0x10)), sVar14 < 1)) {
                  uVar9 = *(undefined8 *)(FVar19.Data + lVar16 + 8);
                  uVar5 = *(undefined8 *)(FVar19.Data + lVar16 + 0x10);
                  lVar7 = *(longlong *)
                           ((param_1->Vertices).Blocks.AllocatorInstance.Data + local_res18 * 8);
                  puVar3 = (undefined8 *)(lVar7 + uVar17 * 0x18);
                  *puVar3 = *(undefined8 *)(FVar19.Data + lVar16);
                  puVar3[1] = uVar9;
                  *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18) = uVar5;
                  if ((param_1->ChangeStampShape).bIsEnabled != false) {
                    pFVar1 = &(param_1->ChangeStampShape).Mutex;
                    LOCK();
                    bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
                    if (bVar13) {
                      pFVar1->State = (atomic<unsigned_char>)0x1;
                    }
                    UNLOCK();
                    if (!bVar13) {
                      UE::FMutex::LockSlow(pFVar1);
                    }
                    puVar2 = &(param_1->ChangeStampShape).Value;
                    *puVar2 = *puVar2 + 1;
                    LOCK();
                    aVar4 = pFVar1->State;
                    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
                    UNLOCK();
                    if (((byte)aVar4 & 2) != 0) {
                      UE::FMutex::WakeWaitingThread(pFVar1);
                    }
                  }
                }
              }
            }
            uVar21 = (ulonglong)(uVar20 + 1);
            uVar18 = uVar18 + 1;
            lVar16 = lVar16 + 0x18;
            iVar22 = local_res20;
          } while ((int)(uVar20 + 1) < iVar10);
        }
        local_f8 = local_f8 + 1;
      } while (local_f8 < **(int **)((longlong)this + 8));
    }
  }
  else {
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    FGeometryScriptMeshSelection::ConvertToMeshIndexArray
              (*(FGeometryScriptMeshSelection **)this,param_1,&local_e0,Vertex);
    iVar22 = local_e0.ArrayNum;
    local_res20 = 0;
    if (0 < **(int **)((longlong)this + 8)) {
      do {
        local_70 = &local_e0;
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<``UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>,void,int>
                   ::Call;
        local_60 = &local_f0;
        local_58 = *(undefined8 *)((longlong)this + 0x10);
        local_b0 = &local_70;
        local_c8.DataPtr = (void **)0x0;
        local_c8.ArrayNum = 0;
        local_68 = param_1;
        ParallelForImpl::
        ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                  (L"ParallelFor Task",iVar22,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,
                   local_res8,None,&local_c8);
        iVar10 = local_e0.ArrayNum;
        local_d0 = local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayNum * 4;
        FVar19.Data = local_e0.AllocatorInstance.Data;
        while( true ) {
          pFVar12 = local_d0;
          if (local_e0.ArrayNum != iVar10) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (FVar19.Data == pFVar12) break;
          uVar18 = *(uint *)FVar19.Data;
          uVar20 = 0;
          if ((int)uVar18 < local_f0.ArrayNum) {
            uVar20 = ~uVar18 >> 0x1f;
          }
          if ((uVar20 == 0) &&
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
          FVar11.Data = local_f0.AllocatorInstance.Data;
          lVar16 = (longlong)(int)uVar18;
          sVar14 = _dclass(*(undefined8 *)(local_f0.AllocatorInstance.Data + lVar16 * 0x18));
          if (((sVar14 < 1) &&
              (sVar14 = _dclass(*(undefined8 *)(FVar11.Data + lVar16 * 0x18 + 8)), sVar14 < 1)) &&
             (sVar14 = _dclass(*(undefined8 *)(FVar11.Data + lVar16 * 0x18 + 0x10)), sVar14 < 1)) {
            uVar9 = *(undefined8 *)(FVar11.Data + lVar16 * 0x18 + 8);
            uVar5 = *(undefined8 *)(FVar11.Data + lVar16 * 0x18 + 0x10);
            lVar7 = *(longlong *)
                     ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar18 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar7 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
            *puVar3 = *(undefined8 *)(FVar11.Data + lVar16 * 0x18);
            puVar3[1] = uVar9;
            *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18) = uVar5;
            if ((param_1->ChangeStampShape).bIsEnabled != false) {
              pFVar1 = &(param_1->ChangeStampShape).Mutex;
              LOCK();
              bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
              if (bVar13) {
                pFVar1->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar13) {
                UE::FMutex::LockSlow(pFVar1);
              }
              puVar2 = &(param_1->ChangeStampShape).Value;
              *puVar2 = *puVar2 + 1;
              LOCK();
              aVar4 = pFVar1->State;
              pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                UE::FMutex::WakeWaitingThread(pFVar1);
              }
            }
          }
          FVar19.Data = FVar19.Data + 4;
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 < **(int **)((longlong)this + 8));
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdad360

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  FDynamicMesh3 **local_40;
  FDynamicMesh3 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = *(undefined8 *)this;
  local_28 = *(undefined8 *)((longlong)this + 8);
  local_20 = *(undefined8 *)((longlong)this + 0x10);
  local_18 = *(undefined8 *)((longlong)this + 0x18);
  local_10 = *(undefined8 *)((longlong)this + 0x20);
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_58.DataPtr = (void **)0x0;
  local_58.ArrayNum = 0;
  local_38 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_48,local_res8,None,&local_58);
  return;
}

// operator() @ 14cdae430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_158 [32];
  <lambda_1> local_118;
  FMeshNormals local_110;
  code *local_f8;
  FDynamicMesh3 **local_f0;
  double local_e8;
  FDynamicMesh3 *local_e0;
  FDynamicMesh3 **local_d8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  FDynamicMesh3 **local_b8;
  FDynamicMesh3 *local_b0;
  FDynamicMesh3 **local_a8;
  FDynamicMesh3 *local_a0;
  undefined8 local_98;
  double *local_90;
  FMeshNormals *local_88;
  char local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  lVar2 = *(longlong *)this;
  uVar7 = *(int *)(lVar2 + 0x20) * 0xbb38435 + 0x3619636b;
  uVar6 = uVar7 * 0xbb38435 + 0x3619636b;
  local_68 = (double)(((float)(uVar7 >> 9 | 0x3f800000) - __real_3f800000) * __real_461c4000);
  local_78 = local_68 + *(double *)(lVar2 + 8);
  local_70 = local_68 + *(double *)(lVar2 + 0x10);
  local_68 = local_68 + *(double *)(lVar2 + 0x18);
  local_50 = (double)(((float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000) * __real_461c4000);
  local_60 = local_50 + *(double *)(lVar2 + 8);
  local_58 = local_50 + *(double *)(lVar2 + 0x10);
  local_50 = local_50 + *(double *)(lVar2 + 0x18);
  local_e8 = *(double *)(lVar2 + 0x18);
  local_110.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.Normals.ArrayNum = 0;
  local_110.Normals.ArrayMax = 0;
  local_38 = (double)(((float)(uVar6 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - __real_3f800000)
                     * __real_461c4000);
  local_48 = local_38 + *(double *)(lVar2 + 8);
  local_40 = local_38 + *(double *)(lVar2 + 0x10);
  local_38 = local_38 + local_e8;
  cVar1 = *(char *)(lVar2 + 0x28);
  local_110.Mesh = param_1;
  if (cVar1 != '\0') {
    UE::Geometry::FMeshNormals::Compute_FaceAvg(&local_110,true,true);
  }
  local_98 = *(undefined8 *)this;
  local_90 = &local_78;
  plVar3 = *(longlong **)((longlong)this + 8);
  local_88 = &local_110;
  local_a0 = param_1;
  local_80 = cVar1;
  if (*plVar3 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *plVar3;
  if (*(int *)(lVar2 + 0x10) == *(int *)(lVar2 + 0x3c)) {
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2'::__l2::<lambda_1>::operator()'::__l11::<lambda_2>,void,int>
               ::Call;
    local_b8 = &local_e0;
    local_d0.DataPtr = (void **)0x0;
    local_d0.ArrayNum = 0;
    local_e0 = param_1;
    local_d8 = &local_a0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed,1,
               (TFunctionRef<void___cdecl(int)> *)&local_c0,local_118,None,&local_d0);
  }
  else {
    local_f0 = &local_b0;
    local_f8 = UE::Core::Private::Function::
               TFunctionRefCaller<``UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2'::__l2::<lambda_1>::operator()'::__l13::<lambda_3>,void,int>
               ::Call;
    local_b0 = param_1;
    local_a8 = &local_a0;
    FGeometryScriptMeshSelection::ProcessByVertexID
              (*(FGeometryScriptMeshSelection **)((longlong)this + 8),param_1,
               (TFunctionRef<void___cdecl(int)> *)&local_f8,false);
  }
  if (local_110.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Normals.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cdae6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicMesh3 *this_00;
  longlong *plVar2;
  char *pcVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar7;
  uint *puVar8;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  FSharedReferencer<1> local_1c0;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_1b8;
  FTwistMeshOp local_1a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pTVar7 = MakeShared<UE::Geometry::FDynamicMesh3,1>(&local_1b8);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  this_00 = pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  if (this_00 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::operator=(this_00,param_1);
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)&local_1a8);
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = 0;
  local_1a8._padding_ = (longlong)&___7FTwistMeshOp_Geometry_UE__6B_;
  local_1a8.bLockBottom = false;
  local_1a8._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1a8._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1a8._padding_ = ___xmm_3ff00000000000000000000000000000;
  local_1a8._padding_ = _UNK_15061cbc8;
  local_1a8.TwistDegrees = __real_4066800000000000;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c8 = 0;
  local_1c0.ReferenceController = pTVar1;
  local_1a8._padding_ = (longlong)this_00;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            ((FSharedReferencer<1> *)&local_1a8._padding_,&local_1c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c0.ReferenceController);
  plVar2 = *(longlong **)this;
  pcVar3 = *(char **)((longlong)this + 8);
  local_1a8._padding_ = *plVar2;
  local_1a8._padding_ = plVar2[1];
  local_1a8._padding_ = plVar2[2];
  local_1a8._padding_ = plVar2[3];
  local_1a8._padding_ = plVar2[4];
  local_1a8._padding_ = plVar2[5];
  local_1a8._padding_ = plVar2[6];
  if (*pcVar3 == '\0') {
    puVar8 = (uint *)(pcVar3 + 4);
  }
  else {
    puVar8 = *(uint **)((longlong)this + 0x10);
  }
  local_1a8._padding_ = (longlong)(double)(float)(*puVar8 ^ __xmm_80000000800000008000000080000000);
  local_1a8._padding_ = (longlong)(double)**(float **)((longlong)this + 0x10);
  local_1a8.TwistDegrees = (double)**(float **)((longlong)this + 0x18);
  local_1a8.bLockBottom = pcVar3[8] == '\0';
  UE::Geometry::FTwistMeshOp::CalculateResult(&local_1a8,(FProgressCancel *)0x0);
  lVar5 = local_1a8._padding_;
  local_1a8._padding_ = 0;
  UE::Geometry::FDynamicMesh3::operator=(param_1,(FDynamicMesh3 *)lVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1a8._padding_);
  local_1a8._padding_ = (longlong)&___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_1a8._padding_,(int)local_1a8._padding_);
  if ((FGeometryWarning *)local_1a8._padding_ != (FGeometryWarning *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_1a8._padding_,(int)local_1a8._padding_);
  if ((FGeometryError *)local_1a8._padding_ != (FGeometryError *)0x0) {
    FMemory::Free((void *)local_1a8._padding_);
  }
  if ((undefined8 *)local_1a8._padding_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1a8._padding_)(local_1a8._padding_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// ApplyBendWarpToMesh @ 14cdc1680

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh
          (UDynamicMesh *param_1,FGeometryScriptBendWarpOptions *param_2,TTransform<double> *param_3
          ,float param_4,float param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  float local_res20 [2];
  undefined1 local_78 [16];
  double local_68;
  double *local_60;
  FGeometryScriptBendWarpOptions *local_58;
  float *local_50;
  float *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyBendWarpToMesh_InvalidInput",
                        L"ApplyBendWarpToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  local_40 = (param_3->Translation).XY.m128d_f64[0];
  dStack_38 = (param_3->Translation).XY.m128d_f64[1];
  local_28 = (param_3->Rotation).XY.m128d_f64[0];
  local_20 = (param_3->Rotation).XY.m128d_f64[1];
  local_60 = &local_40;
  local_50 = &param_5;
  local_48 = local_res20;
  local_78._8_8_ = &local_60;
  local_18 = (param_3->Rotation).ZW.m128d_f64[0];
  local_10 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58 = param_2;
  local_30 = local_68;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyDisplaceFromPerVertexVectors @ 14cdc17a0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptVectorList *param_3,float param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  float local_res20 [2];
  undefined1 local_38 [16];
  FGeometryScriptVectorList *local_28;
  UGeometryScriptDebug **local_20;
  float *local_18;
  FGeometryScriptMeshSelection *local_10;
  
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyDisplaceFromPerVertexVectors_InvalidInput",
                        L"ApplyDisplaceFromPerVertexVectors: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  local_20 = &param_5;
  local_18 = local_res20;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_3;
  local_10 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyDisplaceFromTextureMap @ 14cdc1880

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap
          (UDynamicMesh *param_1,UTexture2D *param_2,FGeometryScriptMeshSelection *param_3,
          FGeometryScriptDisplaceFromTextureOptions *param_4,int param_5,
          UGeometryScriptDebug *param_6)

{
  float fVar1;
  FGeometrySelection *pFVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  UDynamicMesh *pUVar9;
  TVector4<float> *pTVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong local_128;
  TDenseGrid2<float> local_120;
  TVector2<float>_u_0 local_f8;
  undefined8 local_f0;
  TImageBuilder<UE::Math::TVector4<float>_> local_e8;
  code *local_b8;
  int **local_b0;
  int *local_a8;
  UGeometryScriptDebug **local_a0;
  FGeometryScriptDisplaceFromTextureOptions *local_98;
  TDenseGrid2<float> *local_90;
  FGeometryScriptMeshSelection *local_88;
  FText local_80;
  FText local_70;
  FText local_60 [2];
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyDisplaceFromTextureMap_InvalidInput",
                        L"ApplyDisplaceFromTextureMap: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar8);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UTexture2D *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_70,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyDisplaceFromTextureMap_InvalidInput2",
                        L"ApplyDisplaceFromTextureMap: Texture is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar8);
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
  }
  else {
    if (((param_3->GeoSelection).Object == (FGeometrySelection *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pUVar9 = (UDynamicMesh *)(*pcVar3)();
      return pUVar9;
    }
    pFVar2 = (param_3->GeoSelection).Object;
    if ((*(int *)&(pFVar2->Selection).Elements.field_0x8 !=
         *(int *)&(pFVar2->Selection).Elements.field_0x34) ||
       (param_4->EmptyBehavior == FullMeshSelection)) {
      lVar12 = 0;
      local_e8.Dimensions.Width = 0;
      local_e8.Dimensions.Height = 0;
      local_e8.Image.DimensionY = 0;
      local_e8.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e8.Image.Buffer.ArrayNum = 0;
      local_e8.Image.Buffer.ArrayMax = 0;
      local_e8.Image.DimensionX = 0;
      bVar6 = UE::AssetUtils::ReadTexture(param_2,&local_e8,false);
      if (bVar6) {
        iVar5 = local_e8.Dimensions.Height;
        local_128 = (longlong)local_e8.Dimensions.Height;
        iVar11 = 3;
        if (param_4->ImageChannel < 3) {
          iVar11 = param_4->ImageChannel;
        }
        iVar4 = local_e8.Dimensions.Width;
        lVar16 = (longlong)local_e8.Dimensions.Width;
        iVar13 = 0;
        if (0 < iVar11) {
          iVar13 = iVar11;
        }
        local_120.DimensionY = 0;
        local_120.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.Buffer.ArrayNum = 0;
        local_120.Buffer.ArrayMax = 0;
        local_120.DimensionX = 0;
        UE::Geometry::TDenseGrid2<float>::Resize(&local_120,2,2,Default);
        local_f8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_f0 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
        UE::Geometry::TDenseGrid2<float>::Resize(&local_120,iVar4,iVar5,Default);
        lVar14 = local_120.DimensionY * local_120.DimensionX;
        if (0 < lVar14) {
          do {
            if ((local_120.Buffer.ArrayNum <= lVar12) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              pUVar9 = (UDynamicMesh *)(*pcVar3)();
              return pUVar9;
            }
            *(undefined4 *)(local_120.Buffer.AllocatorInstance.Data + lVar12 * 4) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < lVar14);
        }
        local_f0 = (TVector2<float>_u_0)
                   CONCAT44(__real_3f800000 / (float)lVar16,__real_3f800000 / (float)lVar16);
        if (0 < local_128) {
          lVar12 = 0;
          do {
            lVar14 = lVar12;
            lVar15 = lVar16;
            if (0 < lVar16) {
              do {
                pTVar10 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                    (&local_e8.Image,lVar14);
                if ((3 < (ulonglong)(longlong)iVar13) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                       ,0x310,L""), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  pUVar9 = (UDynamicMesh *)(*pcVar3)();
                  return pUVar9;
                }
                fVar1 = (pTVar10->field0_0x0).XYZW[iVar13];
                uVar7 = 0;
                if (lVar14 < local_120.Buffer.ArrayNum) {
                  uVar7 = (uint)((ulonglong)lVar14 >> 0x3f) ^ 1;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  pUVar9 = (UDynamicMesh *)(*pcVar3)();
                  return pUVar9;
                }
                *(float *)(local_120.Buffer.AllocatorInstance.Data + lVar14 * 4) = fVar1;
                lVar15 = lVar15 + -1;
                lVar14 = lVar14 + 1;
              } while (lVar15 != 0);
            }
            lVar12 = lVar12 + lVar16;
            local_128 = local_128 + -1;
          } while (local_128 != 0);
        }
        local_a8 = &param_5;
        local_a0 = &param_6;
        local_90 = &local_120;
        local_b0 = &local_a8;
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
        local_98 = param_4;
        local_88 = param_3;
        UDynamicMesh::EditMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_b8,
                   GeneralEdit,Unknown,false);
        if (local_120.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Buffer.AllocatorInstance.Data);
        }
      }
      else {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (local_60,L"UGeometryScriptLibrary_MeshDeformFunctions",
                            L"ApplyDisplaceFromTextureMap_TexReadFailed",
                            L"ApplyDisplaceFromTextureMap: Error reading source texture data. If using this function at Runtime, The Compression Settings type on the UTexture2D Asset must be set to VectorDisplacementmap (RGBA8)."
                           );
        UE::Geometry::AppendError(param_6,OperationFailed,pFVar8);
        if (local_60[0].TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
        }
      }
      if (local_e8.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Image.Buffer.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
      return param_1;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyFlareWarpToMesh @ 14cdc1cd0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh
          (UDynamicMesh *param_1,FGeometryScriptFlareWarpOptions *param_2,
          TTransform<double> *param_3,float param_4,float param_5,float param_6,
          UGeometryScriptDebug *param_7)

{
  FText *pFVar1;
  float local_res20 [2];
  undefined1 local_88 [16];
  double local_78;
  double *local_70;
  FGeometryScriptFlareWarpOptions *local_68;
  float *local_60;
  float *local_58;
  float *local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyFlareWarpToMesh_InvalidInput",
                        L"ApplyFlareWarpToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar1);
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_78 = (param_3->Translation).ZW.m128d_f64[0];
  local_48 = (param_3->Translation).XY.m128d_f64[0];
  dStack_40 = (param_3->Translation).XY.m128d_f64[1];
  local_30 = (param_3->Rotation).XY.m128d_f64[0];
  local_28 = (param_3->Rotation).XY.m128d_f64[1];
  local_70 = &local_48;
  local_60 = &param_6;
  local_58 = local_res20;
  local_50 = &param_5;
  local_88._8_8_ = &local_70;
  local_20 = (param_3->Rotation).ZW.m128d_f64[0];
  local_18 = (param_3->Rotation).ZW.m128d_f64[1];
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_68 = param_2;
  local_38 = local_78;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_88,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyIterativeSmoothingToMesh @ 14cdc1df0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptIterativeMeshSmoothingOptions *param_3,UGeometryScriptDebug *param_4)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  int iVar6;
  int local_res8 [2];
  double local_48;
  code *local_40;
  FGeometryScriptMeshSelection **local_38;
  FText local_30;
  FGeometryScriptMeshSelection *local_20;
  int *local_18;
  double *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_30,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyIterativeSmoothingToMesh_InvalidInput",
                        L"ApplyIterativeSmoothingToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar4);
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if ((param_2->GeoSelection).Object == (FGeometrySelection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UDynamicMesh *)(*pcVar2)();
        return pUVar5;
      }
    }
    pFVar1 = (param_2->GeoSelection).Object;
    if ((*(int *)&(pFVar1->Selection).Elements.field_0x8 !=
         *(int *)&(pFVar1->Selection).Elements.field_0x34) ||
       (param_3->EmptyBehavior == FullMeshSelection)) {
      local_48 = 0.0;
      if (0.0 <= param_3->Alpha) {
        local_48 = (double)param_3->Alpha;
        if (__real_3ff0000000000000 <= local_48) {
          local_48 = __real_3ff0000000000000;
        }
      }
      iVar6 = 100;
      if (param_3->NumIterations < 100) {
        iVar6 = param_3->NumIterations;
      }
      local_res8[0] = 0;
      if (0 < iVar6) {
        local_res8[0] = iVar6;
      }
      if ((local_res8[0] != 0) && (local_48 != 0.0)) {
        local_18 = local_res8;
        local_10 = &local_48;
        local_38 = &local_20;
        local_40 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
        local_20 = param_2;
        UDynamicMesh::EditMesh
                  (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_40,
                   GeneralEdit,Unknown,false);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// ApplyMathWarpToMesh @ 14cdc2260

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh
          (UDynamicMesh *param_1,TTransform<double> *param_2,EGeometryScriptMathWarpType param_3,
          FGeometryScriptMathWarpOptions *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  double local_res8;
  EGeometryScriptMathWarpType local_res18 [16];
  undefined1 local_a8 [16];
  double local_98;
  double local_90;
  double local_88;
  double *local_80;
  EGeometryScriptMathWarpType *local_78;
  double *local_70;
  double *local_68;
  double *local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_a8,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyFlareWarpToMesh_InvalidInput",
                        L"ApplyFlareWarpToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_a8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_a8._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_58 = (param_2->Rotation).XY.m128d_f64[0];
  local_50 = (param_2->Rotation).XY.m128d_f64[1];
  local_48 = (param_2->Rotation).ZW.m128d_f64[0];
  local_40 = (param_2->Rotation).ZW.m128d_f64[1];
  local_28 = (param_2->Translation).ZW.m128d_f64[0];
  local_98 = (param_2->Scale3D).ZW.m128d_f64[0];
  local_80 = &local_58;
  local_78 = local_res18;
  local_70 = &local_res8;
  local_38 = (param_2->Translation).XY.m128d_f64[0];
  dStack_30 = (param_2->Translation).XY.m128d_f64[1];
  local_68 = &local_90;
  local_88 = (double)param_4->FrequencyShift;
  local_60 = &local_88;
  local_a8._8_8_ = &local_80;
  local_a8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_18 = (param_2->Scale3D).XY.m128d_f64[1];
  local_90 = (double)param_4->Frequency;
  local_res8 = (double)param_4->Magnitude;
  local_10 = local_98;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_a8,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyPerlinNoiseToMesh2 @ 14cdc3b20

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptPerlinNoiseOptions *param_3,UGeometryScriptDebug *param_4)

{
  FGeometrySelection *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  FGeometryScriptPerlinNoiseOptions *local_38;
  FGeometryScriptMeshSelection *local_30;
  code *local_28;
  FGeometryScriptPerlinNoiseOptions **local_20;
  FText local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyPerlinNoiseToMesh_InvalidInput",
                        L"ApplyPerlinNoiseToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar4);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if ((param_2->GeoSelection).Object == (FGeometrySelection *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UDynamicMesh *)(*pcVar2)();
        return pUVar5;
      }
    }
    pFVar1 = (param_2->GeoSelection).Object;
    if ((*(int *)&(pFVar1->Selection).Elements.field_0x8 !=
         *(int *)&(pFVar1->Selection).Elements.field_0x34) ||
       (param_3->EmptyBehavior == FullMeshSelection)) {
      local_20 = &local_38;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      local_38 = param_3;
      local_30 = param_2;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_28,
                 GeneralEdit,Unknown,false);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  }
  return param_1;
}

// ApplyPerlinNoiseToMesh @ 14cdc3c30

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh
          (UDynamicMesh *param_1,FGeometryScriptMeshSelection *param_2,
          FGeometryScriptPerlinNoiseOptions *param_3,UGeometryScriptDebug *param_4)

{
  code *pcVar1;
  TVector<double> *pTVar2;
  bool bVar3;
  FText *pFVar4;
  UDynamicMesh *pUVar5;
  FGeometrySelection *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined8 *local_98;
  FGeometrySelection **local_90;
  code *local_88;
  undefined8 **local_80;
  FText local_78;
  undefined8 local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_38 = (param_3->BaseLayer).Magnitude;
  fStack_34 = (param_3->BaseLayer).Frequency;
  pTVar2 = &(param_3->BaseLayer).FrequencyShift;
  uStack_30 = *(undefined4 *)&pTVar2->field0_0x0;
  uStack_2c = *(undefined4 *)((longlong)&(param_3->BaseLayer).FrequencyShift.field0_0x0 + 4);
  dStack_60 = (pTVar2->field0_0x0)._s_0.X;
  local_a8 = (param_2->GeoSelection).Object;
  local_58 = (param_3->BaseLayer).FrequencyShift.field0_0x0._s_0.Y;
  dStack_50 = (param_3->BaseLayer).FrequencyShift.field0_0x0._s_0.Z;
  local_48 = *(undefined8 *)&(param_3->BaseLayer).RandomSeed;
  uStack_40._0_1_ = param_3->bApplyAlongNormal;
  uStack_40._1_1_ = param_3->EmptyBehavior;
  uStack_40._2_6_ = *(undefined6 *)&param_3->field_0x2a;
  fStack_34 = fStack_34 * fStack_34;
  local_a0 = (param_2->GeoSelection).SharedReferenceCount.ReferenceController;
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = CONCAT44(fStack_34,local_38);
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyPerlinNoiseToMesh_InvalidInput",
                        L"ApplyPerlinNoiseToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar4);
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if ((local_a8 == (FGeometrySelection *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pUVar5 = (UDynamicMesh *)(*pcVar1)();
      return pUVar5;
    }
    if ((*(int *)&(local_a8->Selection).Elements.field_0x8 !=
         *(int *)&(local_a8->Selection).Elements.field_0x34) || (uStack_40._1_1_ == '\0')) {
      local_98 = &local_68;
      local_90 = &local_a8;
      local_80 = &local_98;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      UDynamicMesh::EditMesh
                (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_88,
                 GeneralEdit,Unknown,false);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->GeoSelection).SharedReferenceCount.ReferenceController);
  return param_1;
}

// ApplyTwistWarpToMesh @ 14cdc3db0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh
          (UDynamicMesh *param_1,FGeometryScriptTwistWarpOptions *param_2,
          TTransform<double> *param_3,float param_4,float param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  float local_res20 [2];
  undefined1 local_78 [16];
  double local_68;
  double *local_60;
  FGeometryScriptTwistWarpOptions *local_58;
  float *local_50;
  float *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_res20[0] = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshDeformFunctions",
                        L"ApplyTwistWarpToMesh_InvalidInput",
                        L"ApplyTwistWarpToMesh: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_68 = (param_3->Translation).ZW.m128d_f64[0];
  local_40 = (param_3->Translation).XY.m128d_f64[0];
  dStack_38 = (param_3->Translation).XY.m128d_f64[1];
  local_28 = (param_3->Rotation).XY.m128d_f64[0];
  local_20 = (param_3->Rotation).XY.m128d_f64[1];
  local_60 = &local_40;
  local_50 = &param_5;
  local_48 = local_res20;
  local_78._8_8_ = &local_60;
  local_18 = (param_3->Rotation).ZW.m128d_f64[0];
  local_10 = (param_3->Rotation).ZW.m128d_f64[1];
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_58 = param_2;
  local_30 = local_68;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetPrivateStaticClass @ 14cdd89e0

UClass * __cdecl UGeometryScriptLibrary_MeshDeformFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshDeformFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.InnerSingleton
               ,StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshDeformFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshDeformFunctions>,local_res8
               ,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshDeformFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions @ 14cde72e0

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshDeformFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshDeformFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyBendWarpToMesh @ 14cdef860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyBendWarpToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  undefined1 auStack_1d8 [32];
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined2 local_170;
  ITextData *local_168;
  uint local_160;
  undefined4 local_158 [2];
  undefined4 local_150 [2];
  longlong local_148;
  UDynamicMesh *local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [12];
  undefined8 local_128;
  undefined4 local_120;
  code *local_118;
  undefined8 **local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  FText local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_140 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_180 = CONCAT31(local_180._1_3_,1);
  uStack_17c = 0x41200000;
  local_178 = CONCAT31(local_178._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_184 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_188 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_148 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pUVar5 = local_140;
  lVar4 = local_148;
  local_128 = CONCAT44(uStack_17c,local_180);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_158[0] = local_188;
  local_150[0] = local_184;
  local_120 = local_178;
  if (local_140 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_e8,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyBendWarpToMesh_InvalidInput",L"ApplyBendWarpToMesh: TargetMesh is Null"
                     );
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_168 = (this->TextData).Reference;
    local_170 = 0x200;
    if (local_168 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168 + 8))(local_168,local_138);
    }
    local_160 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_170) &&
          (&local_170 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_170._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_170._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_168;
      if (local_168 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168 + 8))(local_168,local_134);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_160;
    }
    if (local_168 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168 + 0x10))();
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_90 = local_58._0_8_;
    local_c8 = local_58._0_8_;
    local_100 = &local_128;
    local_f8 = local_158;
    local_f0 = local_150;
    local_110 = &local_108;
    local_d8 = local_68._0_8_;
    uStack_d0 = local_68._8_8_;
    local_c0 = local_88._0_8_;
    local_b0 = local_78._0_8_;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyBendWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_b8 = local_88._8_8_;
    local_a8 = local_78._8_8_;
    local_108 = &local_d8;
    UDynamicMesh::EditMesh
              (local_140,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_118,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execApplyDisplaceFromPerVertexVectors @ 14cdefcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyDisplaceFromPerVertexVectors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *this;
  longlong lVar7;
  uchar *puVar8;
  UDynamicMesh *pUVar9;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined2 local_d8;
  ITextData *local_d0;
  uint local_c8;
  longlong local_c0;
  UDynamicMesh *local_b8;
  longlong local_b0;
  uchar local_a8 [8];
  TReferenceControllerBase<1> *pTStack_a0;
  FGeometryScriptMeshSelection local_98;
  undefined1 local_88 [8];
  code *local_80;
  uchar **local_78;
  FGeometrySelection *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  uchar *local_58;
  longlong *local_50;
  undefined4 *local_48;
  FGeometrySelection **local_40;
  FText local_38;
  
  local_b8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
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
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  pTStack_a0 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_res10[0] = 0;
  puVar8 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_c0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  pUVar9 = local_b8;
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
  local_res18[0] = local_res10[0];
  local_b0 = local_c0;
  if (local_b8 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyDisplaceFromPerVertexVectors_InvalidInput",
                      L"ApplyDisplaceFromPerVertexVectors: TargetMesh is Null");
    lVar4 = local_b0;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_d0 = (this->TextData).Reference;
    local_d8 = 0x200;
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 8))(local_d0,local_res20);
    }
    local_c8 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_d8) &&
          (&local_d8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar7 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar7 * 0x18] = local_d8._0_1_;
      pFVar2[lVar7 * 0x18 + 1] = local_d8._1_1_;
      *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar7 * 0x18 + 8) = local_d0;
      if (local_d0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0 + 8))(local_d0,local_88);
      }
      *(uint *)(pFVar2 + lVar7 * 0x18 + 0x10) = local_c8;
    }
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 0x10))();
    }
    pUVar9 = (UDynamicMesh *)0x0;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    local_50 = &local_b0;
    local_48 = local_res18;
    local_40 = &local_68;
    local_78 = &local_58;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromPerVertexVectors'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_58 = puVar8;
    UDynamicMesh::EditMesh
              (local_b8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_80,
               GeneralEdit,Unknown,false);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  *(UDynamicMesh **)param_3 = pUVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyDisplaceFromTextureMap @ 14cdf0090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyDisplaceFromTextureMap
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  float fVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UGeometryScriptDebug *pUVar6;
  UTexture2D *pUVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  FText *pFVar11;
  longlong lVar12;
  TVector4<float> *pTVar13;
  longlong lVar14;
  uint uVar15;
  UDynamicMesh *pUVar16;
  UDynamicMesh *pUVar17;
  UDynamicMesh *pUVar18;
  uint uVar19;
  undefined4 local_res10 [2];
  longlong *local_res18;
  undefined4 local_res20 [2];
  UGeometryScriptDebug *local_228;
  undefined2 local_220;
  ITextData *local_218;
  uint local_210;
  undefined2 local_208;
  ITextData *local_200;
  uint local_1f8;
  UGeometryScriptDebug *local_1f0;
  UTexture2D *local_1e8;
  UDynamicMesh *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  FGeometrySelection *local_1c8;
  TReferenceControllerBase<1> *pTStack_1c0;
  FGeometryScriptMeshSelection local_1b8;
  TDenseGrid2<float> local_1a8;
  TVector2<float>_u_0 local_180;
  undefined8 local_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  UDynamicMesh *local_160;
  TImageBuilder<UE::Math::TVector4<float>_> local_158;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined7 uStack_f7;
  code *local_f0;
  undefined4 **local_e8;
  undefined4 *local_e0;
  UGeometryScriptDebug **local_d8;
  undefined8 *local_d0;
  TDenseGrid2<float> *local_c8;
  FGeometrySelection **local_c0;
  FText local_b8;
  FText local_a8;
  FText local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pUVar18 = (UDynamicMesh *)0x0;
  local_1e0 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  local_1e8 = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_1b8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  fVar2 = __real_3f800000;
  uStack_120 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_118 = _UNK_150689688;
  local_128 = 0x3f800000;
  local_100 = 0x3f000000;
  uStack_110 = 0;
  uStack_108 = 0;
  local_f8 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_1f0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  pUVar17 = local_1e0;
  pUVar7 = local_1e8;
  local_88 = CONCAT44(uStack_124,local_128);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = CONCAT71(uStack_f7,local_f8);
  local_1c8 = local_1b8.GeoSelection.Object;
  pTStack_1c0 = local_1b8.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_1b8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_160 = local_1e0;
  uStack_80 = uStack_120;
  local_78 = uStack_118;
  uStack_70 = uStack_110;
  local_68 = uStack_108;
  uStack_60 = local_100;
  local_228 = local_1f0;
  local_res20[0] = local_res10[0];
  if (local_1e0 == (UDynamicMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_b8,L"UGeometryScriptLibrary_MeshDeformFunctions",
                         L"ApplyDisplaceFromTextureMap_InvalidInput",
                         L"ApplyDisplaceFromTextureMap: TargetMesh is Null");
    pUVar6 = local_228;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar11);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_218 = (pFVar11->TextData).Reference;
    local_220 = 0x200;
    if (local_218 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218 + 8))(local_218,local_170);
    }
    local_210 = pFVar11->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_220) &&
          ((FScriptContainerElement *)&local_220 <
           pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      lVar12 = (longlong)iVar10;
      (pUVar6->Messages).ArrayNum = iVar10 + 1;
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      pFVar4[lVar12 * 0x18] = local_220._0_1_;
      pFVar4[lVar12 * 0x18 + 1] = local_220._1_1_;
      *(undefined8 *)(pFVar4 + lVar12 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar4 + lVar12 * 0x18 + 8) = local_218;
      if (local_218 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_218 + 8))(local_218,local_16c);
      }
      *(uint *)(pFVar4 + lVar12 * 0x18 + 0x10) = local_210;
    }
    if (local_218 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218 + 0x10))();
    }
    pUVar17 = pUVar18;
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
  }
  else if (local_1e8 == (UTexture2D *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_a8,L"UGeometryScriptLibrary_MeshDeformFunctions",
                         L"ApplyDisplaceFromTextureMap_InvalidInput2",
                         L"ApplyDisplaceFromTextureMap: Texture is Null");
    pUVar6 = local_228;
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar11);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_200 = (pFVar11->TextData).Reference;
    local_208 = 0x200;
    if (local_200 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200 + 8))(local_200,local_168);
    }
    local_1f8 = pFVar11->Flags;
    if (pUVar6 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_208) &&
          ((FScriptContainerElement *)&local_208 <
           pFVar4 + (longlong)(pUVar6->Messages).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (pUVar6->Messages).ArrayNum;
      piVar1 = &(pUVar6->Messages).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar6->Messages).AllocatorInstance,piVar1);
      }
      lVar12 = (longlong)iVar10;
      (pUVar6->Messages).ArrayNum = iVar10 + 1;
      pFVar4 = (pUVar6->Messages).AllocatorInstance.Data;
      pFVar4[lVar12 * 0x18] = local_208._0_1_;
      pFVar4[lVar12 * 0x18 + 1] = local_208._1_1_;
      *(undefined8 *)(pFVar4 + lVar12 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar4 + lVar12 * 0x18 + 8) = local_200;
      if (local_200 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_200 + 8))(local_200,local_164);
      }
      *(uint *)(pFVar4 + lVar12 * 0x18 + 0x10) = local_1f8;
    }
    if (local_200 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200 + 0x10))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((local_1b8.GeoSelection.Object == (FGeometrySelection *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(int *)&(local_1c8->Selection).Elements.field_0x8 !=
         *(int *)&(local_1c8->Selection).Elements.field_0x34) || ((char)local_58 == '\0')) {
      local_158.Dimensions.Width = 0;
      local_158.Dimensions.Height = 0;
      local_158.Image.DimensionY = 0;
      local_158.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.Image.Buffer.ArrayNum = 0;
      local_158.Image.Buffer.ArrayMax = 0;
      local_158.Image.DimensionX = 0;
      bVar9 = UE::AssetUtils::ReadTexture(pUVar7,&local_158,false);
      if (bVar9) {
        iVar10 = local_158.Dimensions.Width;
        local_1d0 = (longlong)local_158.Dimensions.Width;
        iVar8 = local_158.Dimensions.Height;
        local_1d8 = (longlong)local_158.Dimensions.Height;
        uVar15 = 3;
        if ((int)uStack_60._4_4_ < 3) {
          uVar15 = uStack_60._4_4_;
        }
        uVar19 = 0;
        if (0 < (int)uVar15) {
          uVar19 = uVar15;
        }
        local_1a8.DimensionY = 0;
        local_1a8.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.Buffer.ArrayNum = 0;
        local_1a8.Buffer.ArrayMax = 0;
        local_1a8.DimensionX = 0;
        UE::Geometry::TDenseGrid2<float>::Resize(&local_1a8,2,2,Default);
        local_180 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
        local_178 = UE::Math::TVector2<float>::UnitVector.field0_0x0;
        UE::Geometry::TDenseGrid2<float>::Resize(&local_1a8,iVar10,iVar8,Default);
        lVar12 = local_1a8.DimensionY * local_1a8.DimensionX;
        pUVar16 = pUVar18;
        if (0 < lVar12) {
          do {
            if ((local_1a8.Buffer.ArrayNum <= (longlong)pUVar16) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(undefined4 *)(local_1a8.Buffer.AllocatorInstance.Data + (longlong)pUVar16 * 4) = 0;
            pUVar16 = (UDynamicMesh *)((longlong)&pUVar16->_padding_ + 1);
          } while ((longlong)pUVar16 < lVar12);
        }
        local_178 = (TVector2<float>_u_0)CONCAT44(fVar2 / (float)local_1d0,fVar2 / (float)local_1d0)
        ;
        lVar12 = local_1d0;
        if (0 < local_1d8) {
          do {
            lVar14 = lVar12;
            pUVar17 = pUVar18;
            if (0 < lVar12) {
              do {
                pTVar13 = UE::Geometry::TDenseGrid2<UE::Math::TVector4<float>_>::operator[]
                                    (&local_158.Image,(long64)pUVar17);
                if ((3 < (ulonglong)(longlong)(int)uVar19) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValidIndex(Index)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                       ,0x310,L""), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                fVar2 = (pTVar13->field0_0x0).XYZW[(int)uVar19];
                uVar15 = 0;
                if ((longlong)pUVar17 < local_1a8.Buffer.ArrayNum) {
                  uVar15 = (uint)((ulonglong)pUVar17 >> 0x3f) ^ 1;
                }
                if ((uVar15 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                *(float *)(local_1a8.Buffer.AllocatorInstance.Data + (longlong)pUVar17 * 4) = fVar2;
                lVar12 = lVar12 + -1;
                lVar14 = local_1d0;
                pUVar17 = (UDynamicMesh *)((longlong)&pUVar17->_padding_ + 1);
              } while (lVar12 != 0);
            }
            pUVar18 = (UDynamicMesh *)((longlong)&pUVar18->_padding_ + lVar14);
            local_1d8 = local_1d8 + -1;
            lVar12 = lVar14;
          } while (local_1d8 != 0);
          local_1d8 = 0;
          pUVar17 = local_160;
        }
        local_e0 = local_res20;
        local_d8 = &local_228;
        local_d0 = &local_88;
        local_c8 = &local_1a8;
        local_c0 = &local_1c8;
        local_e8 = &local_e0;
        local_f0 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyDisplaceFromTextureMap'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
        UDynamicMesh::EditMesh
                  (pUVar17,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_f0,
                   GeneralEdit,Unknown,false);
        if (local_1a8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Buffer.AllocatorInstance.Data);
        }
      }
      else {
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_98,L"UGeometryScriptLibrary_MeshDeformFunctions",
                             L"ApplyDisplaceFromTextureMap_TexReadFailed",
                             L"ApplyDisplaceFromTextureMap: Error reading source texture data. If using this function at Runtime, The Compression Settings type on the UTexture2D Asset must be set to VectorDisplacementmap (RGBA8)."
                            );
        UE::Geometry::AppendError(local_228,OperationFailed,pFVar11);
        if (local_98.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        }
      }
      if (local_158.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Image.Buffer.AllocatorInstance.Data);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c0);
  *local_res18 = (longlong)pUVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyFlareWarpToMesh @ 14cdf09b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyFlareWarpToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  undefined1 auStack_1f8 [32];
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0 [2];
  undefined4 local_198;
  undefined4 uStack_194;
  uint local_190;
  undefined2 local_188;
  ITextData *local_180;
  uint local_178;
  undefined4 local_170 [2];
  undefined4 local_168 [2];
  undefined4 local_160 [2];
  longlong local_158;
  UDynamicMesh *local_150;
  undefined1 local_148 [4];
  undefined1 local_144 [12];
  undefined8 local_138;
  uint local_130;
  code *local_128;
  undefined8 **local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  FText local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_150 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  local_198 = CONCAT31(local_198._1_3_,1);
  uStack_194 = 0x41200000;
  local_190 = local_190 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_1a0[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1a0);
  }
  local_1a4 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a4);
  }
  local_1a8 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_158 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  pUVar5 = local_150;
  lVar4 = local_158;
  local_138 = CONCAT44(uStack_194,local_198);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_170[0] = local_1a8;
  local_160[0] = local_1a4;
  local_168[0] = local_1a0[0];
  local_130 = local_190;
  if (local_150 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_f0,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyFlareWarpToMesh_InvalidInput",
                      L"ApplyFlareWarpToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_180 = (this->TextData).Reference;
    local_188 = 0x200;
    if (local_180 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180 + 8))(local_180,local_148);
    }
    local_178 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_188) &&
          (&local_188 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_188._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_188._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_180;
      if (local_180 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_180 + 8))(local_180,local_144);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_178;
    }
    if (local_180 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180 + 0x10))();
    }
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_98 = local_58._0_8_;
    local_d0 = local_58._0_8_;
    local_118 = &local_e0;
    local_110 = &local_138;
    local_108 = local_170;
    local_100 = local_168;
    local_f8 = local_160;
    local_120 = &local_118;
    local_e0 = local_68._0_8_;
    uStack_d8 = local_68._8_8_;
    local_c8 = local_88._0_8_;
    local_b8 = local_78._0_8_;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyFlareWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_c0 = local_88._8_8_;
    local_b0 = local_78._8_8_;
    UDynamicMesh::EditMesh
              (local_150,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_128,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execApplyIterativeSmoothingToMesh @ 14cdf0ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyIterativeSmoothingToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  UDynamicMesh *this_00;
  int local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_d8;
  float fStack_d4;
  uint local_d0;
  undefined2 local_c8;
  ITextData *local_c0;
  uint local_b8;
  longlong local_b0;
  UDynamicMesh *local_a8 [2];
  FGeometrySelection *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FGeometryScriptMeshSelection local_88;
  double local_78;
  int local_70;
  float fStack_6c;
  code *local_60;
  FGeometrySelection ***local_58;
  FGeometrySelection **local_50;
  int *local_48;
  double *local_40;
  FText local_38;
  
  local_a8[0] = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_88);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  local_d8 = 10;
  fStack_d4 = 0.2;
  local_d0 = local_d0 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_b0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  this_00 = local_a8[0];
  lVar5 = local_b0;
  uVar4 = local_d0;
  local_70 = local_d8;
  fStack_6c = fStack_d4;
  local_98 = local_88.GeoSelection.Object;
  pTStack_90 = local_88.GeoSelection.SharedReferenceCount.ReferenceController;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_88.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_a8[0] == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyIterativeSmoothingToMesh_InvalidInput",
                      L"ApplyIterativeSmoothingToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c0 = (this->TextData).Reference;
    local_c8 = 0x200;
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 8))(local_c0,local_res18);
    }
    local_b8 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_c8) &&
          (&local_c8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar5 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_c8._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_c8._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_c0;
      if (local_c0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0 + 8))(local_c0,local_res20);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_b8;
    }
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((local_88.GeoSelection.Object == (FGeometrySelection *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)&(local_98->Selection).Elements.field_0x8 !=
         *(int *)&(local_98->Selection).Elements.field_0x34) || ((char)uVar4 == '\0')) {
      local_78 = (double)fStack_6c;
      if (0.0 <= local_78) {
        if (__real_3ff0000000000000 <= local_78) {
          local_78 = __real_3ff0000000000000;
        }
      }
      else {
        local_78 = 0.0;
      }
      iVar7 = 100;
      if (local_70 < 100) {
        iVar7 = local_70;
      }
      local_res10[0] = 0;
      if (0 < iVar7) {
        local_res10[0] = iVar7;
      }
      if ((local_res10[0] != 0) && (local_78 != 0.0)) {
        local_50 = &local_98;
        local_48 = local_res10;
        local_40 = &local_78;
        local_58 = &local_50;
        local_60 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyIterativeSmoothingToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                   ::Call;
        UDynamicMesh::EditMesh
                  (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_60,
                   GeneralEdit,Unknown,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  *(UDynamicMesh **)param_3 = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyMathWarpToMesh @ 14cdf1290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyMathWarpToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  undefined1 auStack_208 [32];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  float local_1a8;
  undefined8 local_1a4;
  undefined2 local_198;
  ITextData *local_190;
  uint local_188;
  longlong local_180;
  UDynamicMesh *local_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  double local_168;
  double local_160;
  double local_158;
  code *local_150;
  undefined8 **local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  double *local_130;
  double *local_128;
  double *local_120;
  FText local_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_178 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_1b8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b8);
  }
  local_1a8 = 5.0;
  local_1a4 = &DAT_3e800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a8);
  }
  local_180 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  pUVar5 = local_178;
  lVar4 = local_180;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b0[0] = local_1b8[0];
  if (local_178 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_118,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyFlareWarpToMesh_InvalidInput",
                      L"ApplyFlareWarpToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_190 = (this->TextData).Reference;
    local_198 = 0x200;
    if (local_190 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190 + 8))(local_190,local_170);
    }
    local_188 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_198) &&
          (&local_198 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_198._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_198._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_190;
      if (local_190 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_190 + 8))(local_190,local_16c);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_188;
    }
    if (local_190 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_190 + 0x10))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_108 = local_88._0_8_;
    local_100 = local_88._8_8_;
    local_a8 = local_58._0_8_;
    local_d8 = local_58._0_8_;
    local_90 = local_38._0_8_;
    local_c0 = local_38._0_8_;
    local_138 = local_1b0;
    local_f8 = local_78._0_8_;
    local_130 = &local_168;
    local_f0 = local_78._8_8_;
    local_128 = &local_160;
    local_158 = (double)local_1a4._4_4_;
    local_120 = &local_158;
    local_148 = &local_140;
    local_150 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyMathWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_e8 = local_68._0_8_;
    uStack_e0 = local_68._8_8_;
    local_d0 = local_48._0_8_;
    uStack_c8 = local_48._8_8_;
    local_160 = (double)(float)local_1a4;
    local_168 = (double)local_1a8;
    local_140 = &local_108;
    UDynamicMesh::EditMesh
              (local_178,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_150,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execApplyPerlinNoiseToMesh2 @ 14cdf3160

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyPerlinNoiseToMesh2
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *this;
  longlong lVar7;
  UDynamicMesh *this_00;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_f8;
  ITextData *local_f0;
  uint local_e8;
  UDynamicMesh *local_e0;
  FGeometrySelection *local_d8;
  TReferenceControllerBase<1> *pTStack_d0;
  FGeometryScriptMeshSelection local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined2 uStack_90;
  undefined6 uStack_8e;
  undefined8 *local_88;
  FGeometrySelection **local_80;
  code *local_78;
  undefined8 **local_70;
  FText local_68;
  undefined8 local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_e0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_c8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_b8 = 0x40a00000;
  uStack_b4 = 0x3e800000;
  dStack_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98 = 0;
  dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_90 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  this_00 = local_e0;
  lVar4 = local_res20;
  local_58 = CONCAT44(uStack_b4,local_b8);
  local_38 = CONCAT44(uStack_94,local_98);
  uStack_30 = CONCAT62(uStack_8e,uStack_90);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8 = local_c8.GeoSelection.Object;
  pTStack_d0 = local_c8.GeoSelection.SharedReferenceCount.ReferenceController;
  if (local_c8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.GeoSelection.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  dStack_50 = dStack_b0;
  local_48 = dStack_a8;
  dStack_40 = dStack_a0;
  if (local_e0 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyPerlinNoiseToMesh_InvalidInput",
                      L"ApplyPerlinNoiseToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_f0 = (this->TextData).Reference;
    local_f8 = 0x200;
    if (local_f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0 + 8))(local_f0,local_res10);
    }
    local_e8 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_f8) &&
          (&local_f8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar7 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar7 * 0x18] = local_f8._0_1_;
      pFVar2[lVar7 * 0x18 + 1] = local_f8._1_1_;
      *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar7 * 0x18 + 8) = local_f0;
      if (local_f0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0 + 8))(local_f0,local_res18);
      }
      *(uint *)(pFVar2 + lVar7 * 0x18 + 0x10) = local_e8;
    }
    if (local_f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((local_c8.GeoSelection.Object == (FGeometrySelection *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)&(local_d8->Selection).Elements.field_0x8 !=
         *(int *)&(local_d8->Selection).Elements.field_0x34) || (uStack_30._1_1_ == '\0')) {
      local_88 = &local_58;
      local_80 = &local_d8;
      local_70 = &local_88;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      UDynamicMesh::EditMesh
                (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_78,
                 GeneralEdit,Unknown,false);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d0);
  *(UDynamicMesh **)param_3 = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyPerlinNoiseToMesh @ 14cdf3530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyPerlinNoiseToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  int iVar7;
  atomic<int> *paVar8;
  FText *this;
  longlong lVar9;
  UDynamicMesh *this_00;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_128;
  ITextData *local_120;
  uint local_118;
  UDynamicMesh *local_110;
  FGeometrySelection *local_108;
  TReferenceControllerBase<1> *local_100;
  FGeometryScriptMeshSelection local_f8;
  undefined4 local_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined2 uStack_c0;
  undefined6 uStack_be;
  undefined8 *local_b8;
  FGeometrySelection **local_b0;
  code *local_a8;
  undefined8 **local_a0;
  FText local_98;
  undefined8 local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
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
  FGeometryScriptMeshSelection::FGeometryScriptMeshSelection(&local_f8);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_e8 = 0x40a00000;
  fStack_e4 = 0.25;
  uStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c8 = 0;
  dStack_d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_c0 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FVar5.ReferenceController = local_f8.GeoSelection.SharedReferenceCount.ReferenceController;
  this_00 = local_110;
  lVar4 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = CONCAT44(uStack_c4,local_c8);
  uStack_60 = CONCAT62(uStack_be,uStack_c0);
  if (local_f8.GeoSelection.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = &(local_f8.GeoSelection.SharedReferenceCount.ReferenceController)->SharedReferenceCount
    ;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_108 = local_f8.GeoSelection.Object;
  local_100 = local_f8.GeoSelection.SharedReferenceCount.ReferenceController;
  local_58 = local_e8;
  uStack_50 = (undefined4)uStack_e0;
  uStack_4c = uStack_e0._4_4_;
  fStack_54 = fStack_e4 * fStack_e4;
  if (local_f8.GeoSelection.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_78 = dStack_d8;
  dStack_70 = dStack_d0;
  local_88 = CONCAT44(fStack_54,local_e8);
  dStack_80 = uStack_e0;
  if (local_110 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_98,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyPerlinNoiseToMesh_InvalidInput",
                      L"ApplyPerlinNoiseToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_120 = (this->TextData).Reference;
    local_128 = 0x200;
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 8))(local_120,local_res10);
    }
    local_118 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_128) &&
          (&local_128 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar9 = (longlong)iVar7;
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar9 * 0x18] = local_128._0_1_;
      pFVar2[lVar9 * 0x18 + 1] = local_128._1_1_;
      *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar9 * 0x18 + 8) = local_120;
      if (local_120 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120 + 8))(local_120,local_res18);
      }
      *(uint *)(pFVar2 + lVar9 * 0x18 + 0x10) = local_118;
    }
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 0x10))();
    }
    this_00 = (UDynamicMesh *)0x0;
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
  }
  else {
    if ((local_f8.GeoSelection.Object == (FGeometrySelection *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((*(int *)&(local_108->Selection).Elements.field_0x8 !=
         *(int *)&(local_108->Selection).Elements.field_0x34) || (uStack_60._1_1_ == '\0')) {
      local_b8 = &local_88;
      local_b0 = &local_108;
      local_a0 = &local_b8;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyPerlinNoiseToMesh2'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                 ::Call;
      UDynamicMesh::EditMesh
                (this_00,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_a8,
                 GeneralEdit,Unknown,false);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  *(UDynamicMesh **)param_3 = this_00;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.GeoSelection.SharedReferenceCount.ReferenceController);
  return;
}

// execApplyTwistWarpToMesh @ 14cdf3950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshDeformFunctions::execApplyTwistWarpToMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *pUVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  undefined1 auStack_1d8 [32];
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined2 local_170;
  ITextData *local_168;
  uint local_160;
  undefined4 local_158 [2];
  undefined4 local_150 [2];
  longlong local_148;
  UDynamicMesh *local_140;
  undefined1 local_138 [4];
  undefined1 local_134 [12];
  undefined8 local_128;
  undefined4 local_120;
  code *local_118;
  undefined8 **local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  FText local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_140 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  local_180 = CONCAT31(local_180._1_3_,1);
  uStack_17c = 0x41200000;
  local_178 = CONCAT31(local_178._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_184 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_188 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_148 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pUVar5 = local_140;
  lVar4 = local_148;
  local_128 = CONCAT44(uStack_17c,local_180);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_158[0] = local_188;
  local_150[0] = local_184;
  local_120 = local_178;
  if (local_140 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_e8,L"UGeometryScriptLibrary_MeshDeformFunctions",
                      L"ApplyTwistWarpToMesh_InvalidInput",
                      L"ApplyTwistWarpToMesh: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_168 = (this->TextData).Reference;
    local_170 = 0x200;
    if (local_168 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168 + 8))(local_168,local_138);
    }
    local_160 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_170) &&
          (&local_170 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      if (iVar7 == *(int *)(lVar4 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar7;
      *(int *)(lVar4 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_170._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_170._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_168;
      if (local_168 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_168 + 8))(local_168,local_134);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_160;
    }
    if (local_168 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168 + 0x10))();
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_90 = local_58._0_8_;
    local_c8 = local_58._0_8_;
    local_100 = &local_128;
    local_f8 = local_158;
    local_f0 = local_150;
    local_110 = &local_108;
    local_d8 = local_68._0_8_;
    uStack_d0 = local_68._8_8_;
    local_c0 = local_88._0_8_;
    local_b0 = local_78._0_8_;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshDeformFunctions::ApplyTwistWarpToMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_b8 = local_88._8_8_;
    local_a8 = local_78._8_8_;
    local_108 = &local_d8;
    UDynamicMesh::EditMesh
              (local_140,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_118,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

