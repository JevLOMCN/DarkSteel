// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 62

// StaticClass @ 14cd94600

UClass * __cdecl UGeometryScriptLibrary_CollisionFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_CollisionFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_CollisionFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_CollisionFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_CollisionFunctions @ 14cda5d00

UGeometryScriptLibrary_CollisionFunctions * __thiscall
UGeometryScriptLibrary_CollisionFunctions::UGeometryScriptLibrary_CollisionFunctions
          (UGeometryScriptLibrary_CollisionFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_CollisionFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_CollisionFunctions @ 14cda5d30

UGeometryScriptLibrary_CollisionFunctions * __thiscall
UGeometryScriptLibrary_CollisionFunctions::UGeometryScriptLibrary_CollisionFunctions
          (UGeometryScriptLibrary_CollisionFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_CollisionFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_CollisionFunctions @ 14cda69e0

void __thiscall
UGeometryScriptLibrary_CollisionFunctions::~UGeometryScriptLibrary_CollisionFunctions
          (UGeometryScriptLibrary_CollisionFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_CollisionFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdae930

bool __thiscall
`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l2
::<lambda_1>::operator()
          (void *this,FKConvexElem *param_1,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>)> *param_2)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  undefined1 local_res10 [8];
  double local_b8;
  double local_b0;
  double local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double local_68;
  double local_50;
  
  iVar2 = (param_1->VertexData).ArrayNum;
  pFVar16 = (param_1->VertexData).AllocatorInstance.Data;
  pFVar3 = pFVar16 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((param_1->VertexData).ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    dVar9 = __real_3fd5555555555555;
    if (pFVar16 == pFVar3) break;
    local_98 = *(undefined4 *)pFVar16;
    uStack_94 = *(undefined4 *)(pFVar16 + 4);
    uStack_90 = *(undefined4 *)(pFVar16 + 8);
    uStack_8c = *(undefined4 *)(pFVar16 + 0xc);
    local_88 = *(undefined8 *)(pFVar16 + 0x10);
    cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_98);
    if (cVar10 == '\0') {
      return false;
    }
    pFVar16 = pFVar16 + 0x18;
  }
  if ((param_1->IndexData).ArrayNum < 3) {
    return true;
  }
  uVar15 = 2;
  lVar17 = 8;
  do {
    uVar13 = 0;
    if ((int)(uVar15 - 2) < (param_1->IndexData).ArrayNum) {
      uVar13 = ~(uVar15 - 2) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    uVar13 = *(uint *)((param_1->IndexData).AllocatorInstance.Data + lVar17 + -8);
    uVar14 = 0;
    if ((int)uVar13 < (param_1->VertexData).ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    pFVar3 = (param_1->VertexData).AllocatorInstance.Data;
    local_68 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18 + 0x10);
    pFVar3 = pFVar3 + (longlong)(int)uVar13 * 0x18;
    dVar5 = *(double *)pFVar3;
    dVar6 = *(double *)(pFVar3 + 8);
    uVar13 = 0;
    if ((int)(uVar15 - 1) < (param_1->IndexData).ArrayNum) {
      uVar13 = ~(uVar15 - 1) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    uVar13 = *(uint *)((param_1->IndexData).AllocatorInstance.Data + lVar17 + -4);
    uVar14 = 0;
    if ((int)uVar13 < (param_1->VertexData).ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    pFVar3 = (param_1->VertexData).AllocatorInstance.Data;
    local_50 = *(double *)(pFVar3 + (longlong)(int)uVar13 * 0x18 + 0x10);
    pFVar3 = pFVar3 + (longlong)(int)uVar13 * 0x18;
    dVar7 = *(double *)pFVar3;
    dVar8 = *(double *)(pFVar3 + 8);
    uVar13 = 0;
    if ((int)uVar15 < (param_1->IndexData).ArrayNum) {
      uVar13 = ~uVar15 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    uVar13 = *(uint *)((param_1->IndexData).AllocatorInstance.Data + lVar17);
    uVar14 = 0;
    if ((int)uVar13 < (param_1->VertexData).ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
    pFVar16 = (param_1->VertexData).AllocatorInstance.Data;
    pFVar3 = pFVar16 + (longlong)(int)uVar13 * 0x18;
    dVar1 = *(double *)(pFVar16 + (longlong)(int)uVar13 * 0x18 + 0x10);
    local_b8 = (dVar5 + dVar7 + *(double *)pFVar3) * dVar9;
    local_b0 = (dVar6 + dVar8 + *(double *)(pFVar3 + 8)) * dVar9;
    local_a8 = (local_68 + local_50 + dVar1) * dVar9;
    local_50 = dVar1;
    cVar10 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_b8);
    if (cVar10 == '\0') {
      return false;
    }
    uVar15 = uVar15 + 3;
    lVar17 = lVar17 + 0xc;
  } while ((int)uVar15 < (param_1->IndexData).ArrayNum);
  return true;
}

// operator() @ 14cdb0040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cdb0107) */
/* WARNING: Removing unreachable block (ram,0x00014cdb0118) */
/* WARNING: Removing unreachable block (ram,0x00014cdb011c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FKConvexElem *this_00;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  undefined ***pppuVar17;
  uint uVar18;
  undefined1 auStackY_3f8 [32];
  undefined1 local_3a8 [4];
  int local_3a4;
  int *local_3a0;
  TVector<double> *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_388;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_378;
  undefined1 local_368 [32];
  undefined **local_348;
  code *pcStack_340;
  undefined ***pppuStack_330;
  undefined8 local_328;
  undefined8 uStack_300;
  code *local_2f8;
  undefined8 uStack_2f0;
  undefined **local_2e8 [3];
  undefined ***pppuStack_2d0;
  undefined1 local_2c8 [192];
  undefined1 local_208 [64];
  void *local_1c8;
  undefined4 local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [80];
  code *local_148;
  undefined8 uStack_140;
  undefined **local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined ***pppuStack_120;
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  double local_e8;
  double dStack_e0;
  __m128d local_d8;
  __m128d local_c8;
  __m128d local_b8;
  __m128d local_a8;
  __m128d local_98;
  __m128d local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_3f8;
  uVar18 = 0;
  pppuStack_330 = (undefined ***)0x0;
  local_348 = &
              ___7__TFunction_OwnedObject_P6AXAEAVFDynamicMesh3_Geometry_UE__AEBU__TAxisAlignedBox3_N_23__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  pcStack_340 = ``UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::
                __l2::<lambda_1>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_328 = 0;
  uStack_300 = 0;
  uStack_300 = 0;
  local_328 = 0;
  pppuStack_330 = (undefined ***)0x0;
  pcStack_340 = ``UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::
                __l2::<lambda_1>::operator()'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_348 = &
              ___7__TFunction_OwnedObject_P6AXAEAVFDynamicMesh3_Geometry_UE__AEBU__TAxisAlignedBox3_N_23__Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_368._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UE::Geometry::FDynamicMesh3_&,UE::Geometry::TAxisAlignedBox3<double>_const_&),void,UE::Geometry::FDynamicMesh3_&,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_368._8_8_ = 0.0;
  local_368[0] = true;
  local_2c8._0_8_ = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
  local_2c8._8_8_ = _UNK_150afcb08;
  local_2c8._32_8_ = ___xmm_4065400000000000403e000000000000;
  local_2c8._40_8_ = _UNK_150b37cc8;
  local_2c8._48_8_ = __real_3fb999999999999a;
  local_2c8._96_8_ = 0.0;
  local_2c8._104_8_ = 0.0;
  local_2c8._56_4_ = 0x32;
  local_2c8._16_8_ = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
  local_2c8._24_8_ = _UNK_150b37cb8;
  local_2c8._128_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_2c8._136_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_2c8._112_8_ = ___xmm_3ff00000000000000000000000000000;
  local_2c8._120_8_ = _UNK_15061cbc8;
  local_2c8[0x3c] = true;
  local_2c8[0x3d] = true;
  local_2c8._144_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2c8._168_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_2c8._72_4_ = -1;
  local_2c8._80_8_ = (FScriptContainerElement *)0x0;
  local_2c8._88_4_ = 0;
  local_2c8._92_4_ = 0;
  local_2c8._152_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_2c8._160_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_2c8._176_8_ = (FScriptContainerElement *)0x0;
  local_2c8._184_4_ = 0;
  local_2c8._188_4_ = 0;
  local_208._0_8_ = 0;
  local_208._8_8_ = 0;
  local_208._32_8_ = 0;
  local_208._40_4_ = 0;
  local_208._44_4_ = 0x80;
  local_208._48_4_ = 0xffffffff;
  local_208._52_4_ = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  local_1b0._0_4_ = 0;
  local_1b0._4_4_ = 0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0._0_4_ = 0;
  local_1a0._4_4_ = 0;
  local_2c8._64_8_ = local_368._8_8_;
  UE::Geometry::FConvexDecomposition3::InitializeFromMesh
            ((FConvexDecomposition3 *)local_2c8,param_1,(FPreprocessMeshOptions *)local_368);
  if ((local_2c8._88_4_ != 1) ||
     (iVar12 = 1, *(char *)(*(longlong *)local_2c8._80_8_ + 0x2d8) != '\0')) {
    local_3a8[0] = 0;
    bVar11 = `UE::Geometry::FConvexDecomposition3::IsInputSolid'::__l3::<lambda_1>::operator()
                       (local_3a8);
    if (!bVar11) {
      bVar11 = false;
      goto LAB_14cdb02d7;
    }
    iVar12 = local_2c8._88_4_;
  }
  if ((iVar12 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar11 = UE::Geometry::FDynamicMesh3::IsClosed(*(FDynamicMesh3 **)local_2c8._80_8_);
LAB_14cdb02d7:
  dVar8 = __real_3f1a36e2eb1c432d;
  pdVar2 = *(double **)this;
  local_e8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_e0 = _UNK_150689688;
  local_c8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_a8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_d8.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  local_2c8[0x3d] = bVar11;
  local_198[0x40] = bVar11 ^ 1;
  local_88.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_b8.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_198._56_8_ = __real_3ff0000000000000;
  local_198._72_8_ = __real_3f1a36e2eb1c432d;
  local_198[0x10] = false;
  local_148 = (code *)0x0;
  pppuStack_120 = (undefined ***)0x0;
  local_118 = 0;
  local_f0 = (longlong *)0x0;
  local_98.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_198._44_4_ = 0x400;
  local_198[0] = NavigableVoxelSearch;
  local_198[0x30] = true;
  local_198[0x28] = true;
  local_198[0x29] = *(undefined1 *)(pdVar2 + 2);
  local_198._4_4_ = 0;
  local_198._24_8_ = pdVar2[1];
  local_198._32_8_ = *pdVar2;
  local_198._8_8_ = 0.0;
  UELocal::ApplyNegativeSpaceToleranceDirectionalScales
            ((FNegativeSpaceSampleSettings *)local_198,
             (TArray<FNegativeSpaceDirectionalToleranceScale,TSizedDefaultAllocator<32>_> *)
             (pdVar2 + 7));
  pppuVar17 = pppuStack_120;
  uVar10 = local_128;
  uVar9 = uStack_140;
  pcVar5 = local_148;
  if (*(int *)(*(longlong *)this + 0x30) != 0) {
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<``UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_2>,double,UE::Math::TVector<double>_>
                ::Call;
    uStack_140 = uStack_2f0;
    local_128 = local_2e8[2];
    pppuStack_120 = (undefined ***)0x0;
    local_138 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<``UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::`2'::<lambda_1>::operator()'::`5'::<lambda_2>,0,0>
                 ::_vftable_;
    lStack_130 = *(longlong *)this;
    local_2f8 = pcVar5;
    uStack_2f0 = uVar9;
    local_2e8[2] = (undefined **)uVar10;
    pppuStack_2d0 = pppuVar17;
    if (pcVar5 != (code *)0x0) {
      pppuVar15 = local_2e8;
      if (pppuVar17 != (undefined ***)0x0) {
        pppuVar15 = pppuVar17;
      }
      (*(code *)(*pppuVar15)[2])();
    }
  }
  local_398 = *(TVector<double> **)(*(longlong *)this + 0x18);
  iVar12 = *(int *)(*(longlong *)this + 0x20);
  if ((iVar12 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_388._12_4_ = uStack_38c;
  local_388.ArrayNum = iVar12;
  local_388.DataPtr = local_398;
  iStack_390 = iVar12;
  UE::Geometry::FConvexDecomposition3::InitializeNegativeSpace
            ((FConvexDecomposition3 *)local_2c8,(FNegativeSpaceSampleSettings *)local_198,&local_388
            );
  dVar7 = __real_bff0000000000000;
  dVar6 = __real_3fe0000000000000;
  local_2c8._56_4_ = 4;
  local_2c8._32_8_ = __real_4066800000000000;
  local_2c8._60_2_ = local_2c8._60_2_ & 0xff00;
  local_2c8._64_8_ = (double)local_198._24_8_ * __real_3f847ae147ae147b;
  if ((double)local_198._24_8_ * __real_3f847ae147ae147b <= __real_3e45798ee2308c3a) {
    local_2c8._64_8_ = __real_3e45798ee2308c3a;
  }
  local_3a4 = 0;
  iVar12 = UE::Geometry::FConvexDecomposition3::SplitWorst
                     ((FConvexDecomposition3 *)local_2c8,false,__real_bff0000000000000,true,
                      local_e8 * (double)local_198._24_8_ * __real_3fe0000000000000);
  while (iVar12 != 0) {
    if (999999 < local_3a4) {
      local_3a0 = &local_3a4;
      bVar11 = ``UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::
               __l2::<lambda_1>::operator()'::__l8::<lambda_3>::operator()(&local_3a0);
      if (!bVar11) break;
    }
    local_3a4 = local_3a4 + 1;
    iVar12 = UE::Geometry::FConvexDecomposition3::SplitWorst
                       ((FConvexDecomposition3 *)local_2c8,false,dVar7,true,
                        local_e8 * (double)local_198._24_8_ * dVar6);
  }
  UE::Geometry::FConvexDecomposition3::FixHullOverlapsInNegativeSpace
            ((FConvexDecomposition3 *)local_2c8,dVar8,dVar8);
  UE::Geometry::FConvexDecomposition3::MergeBest
            ((FConvexDecomposition3 *)local_2c8,-1,0.0,0.0,true,false,-1,(FSphereCovering *)0x0,
             (TTransform<double> *)0x0);
  if (0 < (int)local_2c8._88_4_) {
    do {
      uVar13 = 0;
      if ((int)uVar18 < (int)local_2c8._88_8_) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar3 = *(longlong *)((longlong)this + 8);
      iVar12 = *(int *)(lVar3 + 0x38);
      if (iVar12 == *(int *)(lVar3 + 0x3c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x100,0x10,(ForAnyElementType *)(lVar3 + 0x30),(int *)(lVar3 + 0x3c));
      }
      *(int *)(lVar3 + 0x38) = iVar12 + 1;
      this_00 = FKConvexElem::FKConvexElem
                          ((FKConvexElem *)((longlong)iVar12 * 0x100 + *(longlong *)(lVar3 + 0x30)))
      ;
      pTVar14 = UE::Geometry::FConvexDecomposition3::GetVertices<double>
                          ((FConvexDecomposition3 *)local_2c8,&local_378,uVar18,true);
      pTVar1 = &this_00->VertexData;
      if (pTVar1 != pTVar14) {
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar1->AllocatorInstance).Data = (pTVar14->AllocatorInstance).Data;
        (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this_00->VertexData).ArrayNum = pTVar14->ArrayNum;
        (this_00->VertexData).ArrayMax = pTVar14->ArrayMax;
        pTVar14->ArrayNum = 0;
        pTVar14->ArrayMax = 0;
      }
      if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_378.AllocatorInstance.Data);
      }
      FKConvexElem::UpdateElemBox(this_00);
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (int)local_2c8._88_4_);
  }
  if (local_118 != 0) {
    plVar16 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar16 = local_f0;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if (local_148 != (code *)0x0) {
    pppuVar17 = &local_138;
    if (pppuStack_120 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_120;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  local_1c0 = 0;
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  if ((FScriptContainerElement *)local_2c8._176_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._176_8_);
  }
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
            ((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
              *)(local_2c8 + 0x50));
  if ((code *)local_368._16_8_ != (code *)0x0) {
    pppuVar17 = &local_348;
    if (pppuStack_330 != (undefined ***)0x0) {
      pppuVar17 = pppuStack_330;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  return;
}

// operator() @ 14cdb4f60

void __thiscall
`UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_1>::
operator()(void *this,FMeshShapeGenerator *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  FIndex3i_u_0 local_78;
  undefined8 local_68;
  TVector<double>_u_0 local_58;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  float local_2c;
  TVector2<float>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  
  lVar3 = **(longlong **)this;
  if (lVar3 != 0) {
    pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
    iVar2 = (param_1->Vertices).ArrayNum;
    iVar5 = *(int *)(lVar3 + 0x20) * 0x200 + *(int *)(lVar3 + 0x24);
    pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((param_1->Vertices).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_58._s_0.X = (double)*(undefined8 *)pFVar4;
      local_58._s_0.Y = (double)*(undefined8 *)(pFVar4 + 8);
      local_58._s_0.Z = (double)*(undefined8 *)(pFVar4 + 0x10);
      local_38 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_2c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_40 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_34 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_28 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_20 = 0;
      local_1e = 0;
      UE::Geometry::FDynamicMesh3::AppendVertex
                ((FDynamicMesh3 *)**(undefined8 **)this,(FVertexInfo *)&local_58._s_0);
      pFVar4 = pFVar4 + 0x18;
    }
    iVar2 = (param_1->Triangles).ArrayNum;
    pFVar4 = (param_1->Triangles).AllocatorInstance.Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((param_1->Triangles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (pFVar4 == pFVar1) break;
      local_68 = *(undefined8 *)pFVar4;
      local_78._s_0.A = (int)local_68 + iVar5;
      local_78._s_0.B = (int)((ulonglong)local_68 >> 0x20) + iVar5;
      local_78._s_0.C = *(int *)(pFVar4 + 8) + iVar5;
      UE::Geometry::FDynamicMesh3::AppendTriangle
                ((FDynamicMesh3 *)**(undefined8 **)this,(FIndex3i *)&local_78._s_0,0);
      pFVar4 = pFVar4 + 0xc;
    }
  }
  return;
}

// operator() @ 14cdbc3d0

void __thiscall
`UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_3>::
operator()(void *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,double param_2,
          FKShapeElem *param_3,TTransform<double> *param_4)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  double local_res18;
  FKShapeElem *local_res20;
  int local_b8 [2];
  undefined1 local_b0 [16];
  double local_a0;
  undefined1 local_98 [16];
  
  local_res18 = param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)this + 8) != *(int *)(*(longlong *)((longlong)this + 8) + 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("HullToShapeElem.Num() == HullVolumes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\CollisionFunctions.cpp"
                          ,0x4ee,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = *(ForAnyElementType **)this;
  if (((pFVar4->Data <= (FScriptContainerElement *)&local_res20) &&
      ((FScriptContainerElement *)&local_res20 <
       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,pFVar4,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  *(int *)&pFVar4[1].Data = iVar15 + 1;
  *(FKShapeElem **)(pFVar4->Data + (longlong)iVar15 * 8) = local_res20;
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
  iVar15 = *(int *)&pFVar4[1].Data;
  uVar19 = (ulonglong)iVar15;
  if (iVar3 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x9a9,L"Invalid range size: %lld");
    if (bVar14) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (iVar3 == 0) goto LAB_14cdbc566;
  iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,8,iVar3,pFVar4,(int *)(pFVar4 + 1),(int *)((longlong)&pFVar4[1].Data + 4)
                     );
  memcpy(pFVar4->Data + (longlong)iVar16 * 0x18,param_1->DataPtr,(longlong)iVar3 * 0x18);
LAB_14cdbc566:
  if ((param_4 != (TTransform<double> *)0x0) &&
     (plVar21 = *(longlong **)((longlong)this + 0x10), iVar15 < (int)plVar21[1])) {
    lVar20 = uVar19 * 0x18;
    do {
      uVar18 = (uint)uVar19;
      uVar17 = 0;
      if ((int)uVar18 < (int)plVar21[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auVar30 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
      local_98 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      auVar26 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
      dVar13 = (param_4->Rotation).ZW.m128d_f64[1];
      pdVar2 = (double *)(lVar20 + *plVar21);
      plVar5 = *(longlong **)((longlong)this + 0x10);
      dVar9 = *pdVar2 * (param_4->Scale3D).XY.m128d_f64[0];
      dVar31 = pdVar2[1] * (param_4->Scale3D).XY.m128d_f64[1];
      uVar35 = (undefined4)((ulonglong)dVar31 >> 0x20);
      uVar17 = 0;
      if ((int)uVar18 < (int)plVar5[1]) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      auVar32._8_4_ = SUB84(dVar31,0);
      auVar32._0_8_ = dVar9;
      auVar32._12_4_ = uVar35;
      dVar10 = *(double *)(lVar20 + 0x10 + *plVar21) * (param_4->Scale3D).ZW.m128d_f64[0];
      dVar11 = (param_4->Scale3D).ZW.m128d_f64[1] * 0.0;
      auVar24 = blendpd(local_98,auVar30,2);
      dVar8 = auVar30._0_8_;
      auVar33._0_8_ = auVar32._8_8_ * local_98._0_8_ - local_98._8_8_ * dVar9;
      auVar33._8_8_ = dVar10 * local_98._8_8_ - dVar8 * dVar31;
      auVar27._8_4_ = SUB84(dVar31,0);
      auVar27._0_8_ = dVar9;
      auVar27._12_4_ = uVar35;
      auVar22._8_4_ = SUB84(dVar11,0);
      auVar22._0_8_ = dVar10;
      auVar22._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar22 = blendpd(auVar27,auVar22,2);
      auVar23._0_8_ = auVar22._0_8_ * dVar8 - auVar24._0_8_ * dVar10;
      auVar23._8_8_ = auVar22._8_8_ * auVar30._8_8_ - auVar24._8_8_ * dVar11;
      auVar22 = blendpd(auVar33,auVar23,2);
      dVar11 = auVar33._8_8_ + auVar33._8_8_;
      dVar12 = auVar23._0_8_ + auVar23._0_8_;
      uVar35 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar34._0_8_ = auVar22._0_8_ + auVar22._0_8_;
      auVar34._8_8_ = auVar22._8_8_ + auVar22._8_8_;
      auVar28._8_4_ = SUB84(dVar12,0);
      auVar28._0_8_ = dVar11;
      auVar28._12_4_ = uVar35;
      auVar25._8_4_ = SUB84(dVar12,0);
      auVar25._0_8_ = dVar11;
      auVar25._12_4_ = uVar35;
      auVar22 = blendpd(auVar25,auVar34,2);
      auVar29._0_8_ = auVar28._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar11;
      auVar29._8_8_ = auVar34._0_8_ * auVar26._8_8_ - dVar8 * dVar12;
      auVar24._8_4_ = SUB84(auVar29._8_8_,0);
      auVar24._0_8_ = auVar29._0_8_;
      auVar24._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
      auVar27 = blendpd(auVar26,auVar30,2);
      auVar26._0_8_ = auVar22._0_8_ * dVar8 - auVar27._0_8_ * auVar34._0_8_;
      auVar26._8_8_ = auVar22._8_8_ * auVar30._8_8_ - auVar27._8_8_ * auVar34._8_8_;
      auVar30 = blendpd(auVar29,auVar26,2);
      dVar9 = dVar11 * dVar13 + dVar9 + auVar24._8_8_ + (param_4->Translation).XY.m128d_f64[0];
      dVar31 = dVar12 * dVar13 + dVar31 + auVar26._0_8_ + (param_4->Translation).XY.m128d_f64[1];
      uVar35 = SUB84(dVar31,0);
      uVar36 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar31 = auVar34._0_8_ * dVar13 + dVar10 + auVar30._0_8_ +
               (param_4->Translation).ZW.m128d_f64[0];
      local_b0._8_4_ = uVar35;
      local_b0._0_8_ = dVar9;
      local_b0._12_4_ = uVar36;
      local_a0 = dVar31;
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *plVar5;
      uVar19 = (ulonglong)(uVar18 + 1);
      auVar30._8_4_ = uVar35;
      auVar30._0_8_ = dVar9;
      auVar30._12_4_ = uVar36;
      *(undefined1 (*) [16])(lVar6 + lVar20) = auVar30;
      *(double *)(lVar6 + 0x10 + lVar20) = dVar31;
      lVar20 = lVar20 + 0x18;
      plVar21 = *(longlong **)((longlong)this + 0x10);
    } while ((int)(uVar18 + 1) < (int)plVar21[1]);
  }
  local_b8[0] = param_1->ArrayNum;
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
  if (((pFVar4->Data <= (FScriptContainerElement *)local_b8) &&
      ((FScriptContainerElement *)local_b8 <
       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar15 + 1;
  *(int *)(pFVar4->Data + (longlong)iVar15 * 4) = local_b8[0];
  pFVar4 = *(ForAnyElementType **)((longlong)this + 8);
  if (((pFVar4->Data <= (FScriptContainerElement *)&local_res18) &&
      ((FScriptContainerElement *)&local_res18 <
       pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar15 + 1;
  *(double *)(pFVar4->Data + (longlong)iVar15 * 8) = local_res18;
  return;
}

// operator() @ 14cdbcc60

TVector<double> * __thiscall
`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l11
::<lambda_3>::operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x38)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  pdVar1 = (double *)(lVar3 + (longlong)param_1 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14cdbd010

TVector<double> * __thiscall
`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l17
::<lambda_5>::operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x38)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  pdVar1 = (double *)(lVar3 + (longlong)param_1 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14cdbd4b0

bool __thiscall
`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l19
::<lambda_6>::operator()(void *this,TVector<double> *param_1)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  double dVar4;
  
  pdVar1 = *(double **)this;
  local_28.field0_0x0._s_0.Z = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X - *pdVar1;
  local_48._s_0.Z = local_28.field0_0x0._s_0.Z - pdVar1[2];
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y - pdVar1[1];
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(pdVar1 + 3),&local_28,(TVector<double> *)&local_48._s_0);
  dVar6 = (double)CONCAT44((uint)((ulonglong)local_28.field0_0x0._8_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_28.field0_0x0._s_0.Y,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) - pdVar1[8];
  dVar3 = (double)CONCAT44((uint)((ulonglong)local_28.field0_0x0._0_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_28.field0_0x0._s_0.X,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) - pdVar1[7];
  dVar7 = (double)CONCAT44((uint)((ulonglong)local_28.field0_0x0._16_8_ >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(local_28.field0_0x0._s_0.Z,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) - pdVar1[9];
  dVar4 = dVar6;
  if (dVar6 <= dVar3) {
    dVar4 = dVar3;
  }
  if (dVar4 <= dVar7) {
    dVar4 = dVar7;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar4;
  if (0.0 <= dVar4) {
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar3 * dVar3 + dVar6 * dVar6 + dVar7 * dVar7;
    auVar5 = sqrtpd(auVar5,auVar2);
    dVar4 = auVar5._0_8_;
  }
  return (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
         (double)*(float *)(*(longlong *)((longlong)this + 8) + 4);
}

// operator() @ 14cdbd840

TVector<double> * __thiscall
`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l23
::<lambda_7>::operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  lVar3 = *(longlong *)this;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar3 + 0x38)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x30);
  pdVar1 = (double *)(lVar3 + (longlong)param_1 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14cdbd9c0

TVector<double> * __thiscall
`UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_8>::
operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  uint uVar11;
  
  plVar3 = *(longlong **)this;
  plVar4 = *(longlong **)((longlong)this + 8);
  uVar10 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar6)();
      return pTVar9;
    }
  }
  uVar11 = *(int *)(*plVar3 + (longlong)param_1 * 4) + param_2;
  uVar10 = 0;
  if ((int)uVar11 < (int)plVar4[1]) {
    uVar10 = ~uVar11 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar6)();
      return pTVar9;
    }
  }
  lVar5 = *plVar4;
  pdVar1 = (double *)(lVar5 + (longlong)(int)uVar11 * 0x18);
  dVar7 = pdVar1[1];
  dVar2 = *(double *)(lVar5 + 0x10 + (longlong)(int)uVar11 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14cdbdad0

bool __thiscall
`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l25
::<lambda_8>::operator()(void *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  
  pdVar9 = *(double **)this;
  dVar13 = (param_1->field0_0x0)._s_0.X;
  dVar1 = *pdVar9;
  dVar2 = pdVar9[2];
  dVar3 = pdVar9[3];
  dVar4 = pdVar9[4];
  dVar5 = pdVar9[5];
  dVar14 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = pdVar9[1];
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = (dVar7 - dVar6) * dVar4 + (dVar13 - dVar1) * dVar3 + (dVar14 - dVar2) * dVar5;
  dVar8 = pdVar9[6];
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar8;
  if (dVar11 < dVar8) {
    if ((double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^
                         __xmm_80000000000000008000000000000000._4_4_,
                         SUB84(dVar8,0) ^ (uint)__xmm_80000000000000008000000000000000) < dVar11) {
      dVar7 = dVar7 - (dVar4 * dVar11 + dVar6);
      dVar13 = dVar13 - (dVar3 * dVar11 + dVar1);
      dVar14 = dVar14 - (dVar5 * dVar11 + dVar2);
      dVar13 = dVar7 * dVar7 + dVar13 * dVar13 + dVar14 * dVar14;
    }
    else {
      dVar13 = (dVar1 - dVar3 * dVar8) - dVar13;
      dVar7 = (dVar6 - dVar4 * dVar8) - dVar7;
      dVar14 = (dVar2 - dVar5 * dVar8) - dVar14;
      dVar13 = dVar7 * dVar7 + dVar13 * dVar13 + dVar14 * dVar14;
    }
  }
  else {
    dVar7 = (dVar4 * dVar8 + dVar6) - dVar7;
    dVar13 = (dVar3 * dVar8 + dVar1) - dVar13;
    dVar14 = (dVar5 * dVar8 + dVar2) - dVar14;
    dVar13 = dVar7 * dVar7 + dVar13 * dVar13 + dVar14 * dVar14;
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar13;
  auVar12 = sqrtpd(auVar12,auVar10);
  dVar13 = auVar12._0_8_ - pdVar9[7];
  return (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
         (double)*(float *)(*(longlong *)((longlong)this + 8) + 4);
}

// ApproximateConvexHullsWithSimplerCollisionShapes @ 14cdc43a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes
          (FGeometryScriptSimpleCollision *param_1,
          FGeometryScriptConvexHullApproximationOptions *param_2,bool *param_3,
          UGeometryScriptDebug *param_4)

{
  int *piVar1;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *this;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  TVector2<double> *pTVar19;
  TRotator<double> *pTVar20;
  char cVar21;
  FKConvexElem *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 local_res10 [8];
  bool *local_res18;
  TMinVolumeSphere3<double> local_3f0;
  TMinVolumeBox3<double> local_3e8;
  longlong local_3e0;
  TVector<double>_u_0 local_3d8;
  double local_3c0;
  FKConvexElem *local_3b8;
  FKConvexElem *local_3b0;
  FKConvexElem *local_3a8 [2];
  TVector<double>_u_0 local_398;
  double local_380;
  double dStack_378;
  double dStack_370;
  double dStack_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  TVector<double>_u_0 local_348;
  TVector<double>_u_0 TStack_330;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  TQuaternion<double>_u_0 local_2f0;
  TIndexMeshArrayAdapter<int,double,UE::Math::TVector<double>_> local_2d0;
  code *local_2c0;
  FKConvexElem **local_2b8;
  TVector<double>_u_0 *local_2b0;
  FGeometryScriptConvexHullApproximationOptions *local_2a8;
  code *local_2a0;
  TVector<double>_u_0 **local_298;
  code *local_290;
  FKConvexElem **local_288;
  TVector<double>_u_0 *local_280;
  FGeometryScriptConvexHullApproximationOptions *local_278;
  code *local_270;
  TVector<double>_u_0 **local_268;
  code *local_260;
  FKConvexElem **local_258;
  TVector<double>_u_0 *local_250;
  FGeometryScriptConvexHullApproximationOptions *local_248;
  code *local_240;
  TVector<double>_u_0 **local_238;
  TFitCapsule3<double> local_228;
  TQuat<double> local_1d8;
  TQuat<double> local_1b8;
  TVector<double>_u_0 local_198;
  TVector2<double> local_180;
  TRotator<double> local_170;
  TRotator<double> local_158;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  
  *param_3 = false;
  dVar13 = __real_c010c152382d7365;
  dVar12 = __real_c020000000000000;
  dVar11 = __real_4000000000000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3ff0000000000000;
  if (((param_2->bFitBoxes != false) || (param_2->bFitSpheres != false)) ||
     (param_2->bFitCapsules != false)) {
    iVar18 = (param_1->AggGeom).ConvexElems.ArrayNum;
    uVar24 = 0;
    if (0 < iVar18) {
      uVar34 = (uint)__real_7fefffffffffffff;
      uVar35 = (uint)((ulonglong)__real_7fefffffffffffff >> 0x20);
      local_3e0 = 0;
      local_res18 = param_3;
      do {
        lVar14 = local_3e0;
        uVar30 = 0;
        if ((int)uVar24 < iVar18) {
          uVar30 = ~uVar24 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar22 = (FKConvexElem *)((param_1->AggGeom).ConvexElems.AllocatorInstance.Data + lVar14);
        local_138 = (pFVar22->Transform).Rotation.XY.m128d_f64[0];
        dStack_130 = (pFVar22->Transform).Rotation.XY.m128d_f64[1];
        local_2d0.SourceVertices = &pFVar22->VertexData;
        local_128 = (pFVar22->Transform).Rotation.ZW.m128d_f64[0];
        dStack_120 = (pFVar22->Transform).Rotation.ZW.m128d_f64[1];
        local_2d0.SourceTriangles = &pFVar22->IndexData;
        dVar3 = (pFVar22->Transform).Scale3D.XY.m128d_f64[0];
        dVar25 = (pFVar22->Transform).Scale3D.XY.m128d_f64[1];
        dVar4 = (pFVar22->Transform).Scale3D.ZW.m128d_f64[0];
        local_118 = (pFVar22->Transform).Translation.XY.m128d_f64[0];
        dStack_110 = (pFVar22->Transform).Translation.XY.m128d_f64[1];
        local_108 = (pFVar22->Transform).Translation.ZW.m128d_f64[0];
        dStack_100 = (pFVar22->Transform).Translation.ZW.m128d_f64[1];
        pTVar19 = UE::Geometry::
                  TMeshQueries<UE::Geometry::TIndexMeshArrayAdapter<int,double,UE::Math::TVector<double>_>_>
                  ::GetVolumeArea(&local_180,&local_2d0);
        bVar6 = false;
        bVar17 = false;
        bVar15 = false;
        uVar28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar29 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        bVar7 = false;
        dVar3 = dVar25 * dVar3 * dVar4 * (pTVar19->field0_0x0)._s_0.X;
        dStack_378 = 0.0;
        dStack_370 = 0.0;
        dStack_368 = ___xmm_3ff00000000000003ff0000000000000;
        dStack_360 = _UNK_150689688;
        local_358 = ___xmm_3ff00000000000003ff0000000000000;
        dStack_350 = _UNK_150689688;
        local_318 = 0.0;
        dStack_310 = 0.0;
        local_3c0 = 0.0;
        local_380 = 0.0;
        local_3d8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_3d8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_3d8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_3d8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_3d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_398._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_398._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_398._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_398._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_398._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_348._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_348._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_348._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        local_348._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_348._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        TStack_330._4_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
        TStack_330._0_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
        TStack_330._12_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
        TStack_330._8_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
        TStack_330._s_0.Z = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
        uVar30 = uVar34;
        uVar31 = uVar35;
        if (param_2->bFitSpheres != false) {
          local_2b8 = &local_3b8;
          local_3f0.Internal.Ptr =
               (TPimplPtr<UE::Geometry::TMinVolumeSphere3Internal<double>,0>)
               (TMinVolumeSphere3Internal<double> *)0x0;
          local_2c0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l11::<lambda_3>,UE::Math::TVector<double>,int>
                      ::Call;
          local_3b8 = pFVar22;
          bVar16 = UE::Geometry::TMinVolumeSphere3<double>::Solve
                             (&local_3f0,(pFVar22->VertexData).ArrayNum,
                              (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_2c0,
                              false);
          bVar15 = bVar17;
          if (bVar16) {
            UE::Geometry::TMinVolumeSphere3<double>::GetResult
                      (&local_3f0,(TSphere3<double> *)&local_3d8._s_0);
            dVar25 = (dVar13 / dVar3) * local_3c0 * local_3c0 * local_3c0 - dVar8;
            uVar30 = SUB84(dVar25,0) & uVar9;
            uVar31 = (uint)((ulonglong)dVar25 >> 0x20) & uVar10;
            if ((double)CONCAT44(uVar31,uVar30) < (double)param_2->VolumeDiffThreshold_Fraction) {
              local_2b0 = &local_3d8;
              local_298 = &local_2b0;
              local_2a0 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l13::<lambda_4>,bool,UE::Math::TVector<double>_>
                          ::Call;
              local_2a8 = param_2;
              bVar17 = `UGeometryScriptLibrary_CollisionFunctions::
                       ApproximateConvexHullsWithSimplerCollisionShapes'::__l2::<lambda_1>::
                       operator()(local_res10,pFVar22,
                                  (TFunctionRef<bool___cdecl(UE::Math::TVector<double>)> *)
                                  &local_2a0);
              if (bVar17) {
                bVar15 = true;
              }
            }
          }
          if (local_3f0.Internal.Ptr != (TMinVolumeSphere3Internal<double> *)0x0) {
            (*(code *)*(Vector<3,gte::BSRational<gte::UIntegerAP32>_> **)
                       ((longlong)local_3f0.Internal.Ptr + -0x10))();
          }
          uVar28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar29 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        uVar32 = uVar34;
        uVar33 = uVar35;
        if (param_2->bFitBoxes != false) {
          local_288 = &local_3b0;
          local_3e8.Internal.Ptr =
               (TPimplPtr<UE::Geometry::TMinVolumeBox3Internal<double>,0>)
               (TMinVolumeBox3Internal<double> *)0x0;
          local_290 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l17::<lambda_5>,UE::Math::TVector<double>,int>
                      ::Call;
          local_3b0 = pFVar22;
          bVar17 = UE::Geometry::TMinVolumeBox3<double>::Solve
                             (&local_3e8,(pFVar22->VertexData).ArrayNum,
                              (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_290,
                              false,(FProgressCancel *)0x0);
          if (bVar17) {
            UE::Geometry::TMinVolumeBox3<double>::GetResult
                      (&local_3e8,(TOrientedBox3<double> *)&local_398._s_0);
            uVar28 = SUB84(dStack_350,0);
            uVar29 = (undefined4)((ulonglong)dStack_350 >> 0x20);
            dVar25 = local_358;
            if (local_358 <= 0.0) {
              dVar25 = 0.0;
            }
            uVar26 = SUB84(dStack_360,0);
            uVar27 = (undefined4)((ulonglong)dStack_360 >> 0x20);
            if (dStack_350 <= 0.0) {
              uVar28 = 0;
              uVar29 = 0;
            }
            if (dStack_360 <= 0.0) {
              uVar26 = 0;
              uVar27 = 0;
            }
            dVar25 = (double)CONCAT44(uVar29,uVar28) * dVar25 *
                     (double)CONCAT44(uVar27,uVar26) * (dVar12 / dVar3) - dVar8;
            uVar32 = SUB84(dVar25,0) & uVar9;
            uVar33 = (uint)((ulonglong)dVar25 >> 0x20) & uVar10;
            if ((double)CONCAT44(uVar33,uVar32) < (double)param_2->VolumeDiffThreshold_Fraction) {
              local_280 = &local_398;
              local_268 = &local_280;
              local_270 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l19::<lambda_6>,bool,UE::Math::TVector<double>_>
                          ::Call;
              local_278 = param_2;
              bVar17 = `UGeometryScriptLibrary_CollisionFunctions::
                       ApproximateConvexHullsWithSimplerCollisionShapes'::__l2::<lambda_1>::
                       operator()(local_res10,pFVar22,
                                  (TFunctionRef<bool___cdecl(UE::Math::TVector<double>)> *)
                                  &local_270);
              if (bVar17) {
                bVar6 = true;
              }
            }
          }
          if (local_3e8.Internal.Ptr != (TMinVolumeBox3Internal<double> *)0x0) {
            (**(code **)((longlong)local_3e8.Internal.Ptr + -0x10))
                      ((int *)((longlong)local_3e8.Internal.Ptr + -0x10));
          }
          uVar28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar29 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        }
        if (param_2->bFitCapsules != false) {
          local_260 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l23::<lambda_7>,UE::Math::TVector<double>,int>
                      ::Call;
          local_258 = local_3a8;
          local_228.bResultValid = false;
          local_228.Capsule.Segment.Center.field0_0x0._s_0.Z = (double)CONCAT44(uVar29,uVar28);
          local_228.Capsule.Segment.Extent = 0.0;
          local_228.Capsule.Radius = 0.0;
          local_3a8[0] = pFVar22;
          local_228.Capsule.Segment.Center.field0_0x0._0_4_ =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          local_228.Capsule.Segment.Center.field0_0x0._4_4_ =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          local_228.Capsule.Segment.Center.field0_0x0._8_4_ =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          local_228.Capsule.Segment.Center.field0_0x0._12_4_ =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
          local_228.Capsule.Segment.Direction.field0_0x0._0_4_ =
               UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
          local_228.Capsule.Segment.Direction.field0_0x0._4_4_ =
               UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
          local_228.Capsule.Segment.Direction.field0_0x0._8_4_ =
               UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
          local_228.Capsule.Segment.Direction.field0_0x0._12_4_ =
               UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
          local_228.Capsule.Segment.Direction.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
          UE::Geometry::TFitCapsule3<double>::Solve
                    (&local_228,(pFVar22->VertexData).ArrayNum,
                     (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_260);
          local_348._s_0.X =
               (double)CONCAT44(local_228.Capsule.Segment.Center.field0_0x0._4_4_,
                                local_228.Capsule.Segment.Center.field0_0x0._0_4_);
          local_348._s_0.Y =
               (double)CONCAT44(local_228.Capsule.Segment.Center.field0_0x0._12_4_,
                                local_228.Capsule.Segment.Center.field0_0x0._8_4_);
          TStack_330._s_0.X =
               (double)CONCAT44(local_228.Capsule.Segment.Direction.field0_0x0._4_4_,
                                local_228.Capsule.Segment.Direction.field0_0x0._0_4_);
          TStack_330._s_0.Y =
               (double)CONCAT44(local_228.Capsule.Segment.Direction.field0_0x0._12_4_,
                                local_228.Capsule.Segment.Direction.field0_0x0._8_4_);
          local_348._s_0.Z = local_228.Capsule.Segment.Center.field0_0x0._s_0.Z;
          TStack_330._s_0.Z = local_228.Capsule.Segment.Direction.field0_0x0._s_0.Z;
          local_318 = local_228.Capsule.Segment.Extent;
          dStack_310 = local_228.Capsule.Radius;
          if (local_228.bResultValid != false) {
            dVar25 = local_228.Capsule.Radius * __real_400921fb54442d18 * local_228.Capsule.Radius;
            dVar3 = (__real_bff0000000000000 / dVar3) *
                    (local_228.Capsule.Segment.Extent * dVar11 * dVar25 +
                    dVar25 * ___real_3ff5555555555555 * local_228.Capsule.Radius) - dVar8;
            uVar34 = SUB84(dVar3,0) & uVar9;
            uVar35 = (uint)((ulonglong)dVar3 >> 0x20) & uVar10;
            if ((double)CONCAT44(uVar35,uVar34) < (double)param_2->VolumeDiffThreshold_Fraction) {
              local_250 = &local_348;
              local_238 = &local_250;
              local_240 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes'::__l25::<lambda_8>,bool,UE::Math::TVector<double>_>
                          ::Call;
              local_248 = param_2;
              bVar17 = `UGeometryScriptLibrary_CollisionFunctions::
                       ApproximateConvexHullsWithSimplerCollisionShapes'::__l2::<lambda_1>::
                       operator()(local_res10,pFVar22,
                                  (TFunctionRef<bool___cdecl(UE::Math::TVector<double>)> *)
                                  &local_240);
              if (bVar17) {
                bVar7 = true;
                goto LAB_14cdc497e;
              }
            }
            bVar7 = false;
          }
        }
LAB_14cdc497e:
        if (((bVar15) || (bVar6)) || (bVar7)) {
          if ((double)CONCAT44(uVar31,uVar30) <= (double)CONCAT44(uVar33,uVar32) &&
              (double)CONCAT44(uVar33,uVar32) != (double)CONCAT44(uVar31,uVar30)) {
            cVar21 = ((double)CONCAT44(uVar35,uVar34) < (double)CONCAT44(uVar31,uVar30)) + '\x01';
          }
          else {
            cVar21 = '\x02';
            if ((double)CONCAT44(uVar33,uVar32) <= (double)CONCAT44(uVar35,uVar34)) {
              cVar21 = '\0';
            }
          }
          if (cVar21 == '\0') {
            iVar18 = (param_1->AggGeom).BoxElems.ArrayNum;
            piVar1 = &(param_1->AggGeom).BoxElems.ArrayMax;
            if (iVar18 == *piVar1) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x870,&(param_1->AggGeom).BoxElems.AllocatorInstance,piVar1);
            }
            pFVar23 = (param_1->AggGeom).BoxElems.AllocatorInstance.Data;
            (param_1->AggGeom).BoxElems.ArrayNum = iVar18 + 1;
            pFVar23 = pFVar23 + (longlong)iVar18 * 0x70;
            *(undefined8 *)(pFVar23 + 8) = 0;
            *(undefined4 *)(pFVar23 + 0x10) = 0;
            pFVar23[0x18] = (FScriptContainerElement)((byte)pFVar23[0x18] | 1);
            *(undefined4 *)(pFVar23 + 0x14) = 1;
            pFVar23[0x19] = (FScriptContainerElement)0x3;
            *(undefined4 *)(pFVar23 + 0x20) = 6;
            *(FScriptContainerElement **)(pFVar23 + 0x28) = pFVar23;
            *(undefined ***)pFVar23 = &___7FKBoxElem__6B_;
            uVar5 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            *(ulonglong *)(pFVar23 + 0x30) =
                 CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            *(undefined8 *)(pFVar23 + 0x38) = uVar5;
            *(double *)(pFVar23 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            *(double *)(pFVar23 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            *(double *)(pFVar23 + 0x50) = dVar3;
            *(double *)(pFVar23 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
            *(undefined4 *)(pFVar23 + 0x60) = 0x3f800000;
            *(undefined4 *)(pFVar23 + 100) = 0x3f800000;
            *(undefined4 *)(pFVar23 + 0x68) = 0x3f800000;
            *(float *)(pFVar23 + 0x60) = (float)dStack_360 + (float)dStack_360;
            *(float *)(pFVar23 + 100) = (float)local_358 + (float)local_358;
            *(float *)(pFVar23 + 0x68) = (float)dStack_350 + (float)dStack_350;
            *(ulonglong *)(pFVar23 + 0x30) = CONCAT44(local_398._4_4_,local_398._0_4_);
            *(ulonglong *)(pFVar23 + 0x38) = CONCAT44(local_398._12_4_,local_398._8_4_);
            *(double *)(pFVar23 + 0x40) = local_398._s_0.Z;
            local_1b8.X = local_380;
            local_1b8.Y = dStack_378;
            local_1b8.Z = dStack_370;
            local_1b8.W = dStack_368;
            pTVar20 = UE::Math::TRotator<double>::TRotator<double>(&local_158,&local_1b8);
            dVar3 = pTVar20->Yaw;
            *(double *)(pFVar23 + 0x48) = pTVar20->Pitch;
            *(double *)(pFVar23 + 0x50) = dVar3;
            *(double *)(pFVar23 + 0x58) = pTVar20->Roll;
          }
          else if (cVar21 == '\x01') {
            iVar18 = (param_1->AggGeom).SphereElems.ArrayNum;
            piVar1 = &(param_1->AggGeom).SphereElems.ArrayMax;
            if (iVar18 == *piVar1) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,(ForAnyElementType *)param_1,piVar1);
            }
            (param_1->AggGeom).SphereElems.ArrayNum = iVar18 + 1;
            pFVar23 = (param_1->AggGeom).SphereElems.AllocatorInstance.Data +
                      (longlong)iVar18 * 0x50;
            *(undefined8 *)(pFVar23 + 8) = 0;
            *(undefined8 *)(pFVar23 + 0x10) = 0;
            pFVar23[0x18] = (FScriptContainerElement)((byte)pFVar23[0x18] | 1);
            pFVar23[0x19] = (FScriptContainerElement)0x3;
            *(undefined4 *)(pFVar23 + 0x20) = 6;
            *(FScriptContainerElement **)(pFVar23 + 0x28) = pFVar23;
            *(undefined ***)pFVar23 = &___7FKSphereElem__6B_;
            uVar5 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            *(ulonglong *)(pFVar23 + 0x30) =
                 CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            *(undefined8 *)(pFVar23 + 0x38) = uVar5;
            *(double *)(pFVar23 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            *(undefined4 *)(pFVar23 + 0x48) = 0x3f800000;
            *(ulonglong *)(pFVar23 + 0x30) = CONCAT44(local_3d8._4_4_,local_3d8._0_4_);
            *(ulonglong *)(pFVar23 + 0x38) = CONCAT44(local_3d8._12_4_,local_3d8._8_4_);
            *(double *)(pFVar23 + 0x40) = local_3d8._s_0.Z;
            *(float *)(pFVar23 + 0x48) = (float)local_3c0;
          }
          else if (cVar21 == '\x02') {
            iVar18 = (param_1->AggGeom).SphylElems.ArrayNum;
            piVar1 = &(param_1->AggGeom).SphylElems.ArrayMax;
            if (iVar18 == *piVar1) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,&(param_1->AggGeom).SphylElems.AllocatorInstance,piVar1);
            }
            pFVar23 = (param_1->AggGeom).SphylElems.AllocatorInstance.Data;
            (param_1->AggGeom).SphylElems.ArrayNum = iVar18 + 1;
            local_2f0._s_0.X = 0.0;
            local_2f0._s_0.W = dVar8;
            local_2f0._s_0.Y = 0.0;
            local_2f0._s_0.Z = 0.0;
            pFVar23 = pFVar23 + (longlong)iVar18 * 0x68;
            *(undefined8 *)(pFVar23 + 8) = 0;
            *(undefined4 *)(pFVar23 + 0x10) = 0;
            pFVar23[0x18] = (FScriptContainerElement)((byte)pFVar23[0x18] | 1);
            *(undefined4 *)(pFVar23 + 0x14) = 2;
            pFVar23[0x19] = (FScriptContainerElement)0x3;
            *(undefined4 *)(pFVar23 + 0x20) = 6;
            *(FScriptContainerElement **)(pFVar23 + 0x28) = pFVar23;
            *(undefined ***)pFVar23 = &___7FKSphylElem__6B_;
            uVar5 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                             UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
            *(ulonglong *)(pFVar23 + 0x30) =
                 CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
            *(undefined8 *)(pFVar23 + 0x38) = uVar5;
            *(double *)(pFVar23 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            dVar3 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
            *(double *)(pFVar23 + 0x48) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
            *(double *)(pFVar23 + 0x50) = dVar3;
            *(double *)(pFVar23 + 0x58) = UE::Math::TRotator<double>::ZeroRotator.Roll;
            *(undefined4 *)(pFVar23 + 0x60) = 0x3f800000;
            *(undefined4 *)(pFVar23 + 100) = 0x3f800000;
            local_308 = local_348._s_0.X;
            dStack_300 = local_348._s_0.Y;
            local_2f8 = local_348._s_0.Z;
            local_198._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_198._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_198._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            UE::Geometry::TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_2f0._s_0,(TVector<double> *)&local_198._s_0,
                       (TVector<double> *)&TStack_330._s_0);
            *(double *)(pFVar23 + 0x30) = local_308;
            *(double *)(pFVar23 + 0x38) = dStack_300;
            *(double *)(pFVar23 + 0x40) = local_2f8;
            local_1d8.X = local_2f0._s_0.X;
            local_1d8.Y = local_2f0._s_0.Y;
            local_1d8.Z = local_2f0._s_0.Z;
            local_1d8.W = local_2f0._s_0.W;
            pTVar20 = UE::Math::TRotator<double>::TRotator<double>(&local_170,&local_1d8);
            dVar3 = pTVar20->Yaw;
            *(double *)(pFVar23 + 0x48) = pTVar20->Pitch;
            *(double *)(pFVar23 + 0x50) = dVar3;
            *(double *)(pFVar23 + 0x58) = pTVar20->Roll;
            *(float *)(pFVar23 + 100) = (float)(local_318 * dVar11);
            *(float *)(pFVar23 + 0x60) = (float)dStack_310;
          }
          else {
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("!\"Enclosing block should never be called\"",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\CollisionFunctions.cpp"
                                ,0x4ac,L"");
            if (bVar15) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          this = &(param_1->AggGeom).ConvexElems;
          uVar34 = 0;
          if ((int)uVar24 < (param_1->AggGeom).ConvexElems.ArrayNum) {
            uVar34 = ~uVar24 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          TArray<FKConvexElem,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this,uVar24);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x100,0x10,&this->AllocatorInstance,(param_1->AggGeom).ConvexElems.ArrayNum,
                     &(param_1->AggGeom).ConvexElems.ArrayMax);
          uVar24 = uVar24 - 1;
          local_3e0 = local_3e0 + -0x100;
          *local_res18 = true;
        }
        iVar18 = (param_1->AggGeom).ConvexElems.ArrayNum;
        local_3e0 = local_3e0 + 0x100;
        uVar34 = (uint)__real_7fefffffffffffff;
        uVar35 = (uint)((ulonglong)__real_7fefffffffffffff >> 0x20);
        uVar24 = uVar24 + 1;
      } while ((int)uVar24 < iVar18);
    }
  }
  return;
}

// CombineSimpleCollision @ 14cdcc180

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::CombineSimpleCollision
          (FGeometryScriptSimpleCollision *param_1,FGeometryScriptSimpleCollision *param_2,
          UGeometryScriptDebug *param_3)

{
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FKTaperedCapsuleElem,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FKTaperedCapsuleElem,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  FText *pFVar15;
  TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar17;
  FText local_18;
  
  if (param_1 == param_2) {
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_18,L"UGeometryScriptLibrary_CollisionFunctions",
                         L"CombineSimpleCollision Combining Collision Shapes with Self",
                         L"CombineSimpleCollision: Collision and AppendCollision must be different Simple Collision objects."
                        );
    UE::Geometry::AppendWarning(param_3,InvalidInputs,pFVar15);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    pTVar1 = &(param_2->AggGeom).BoxElems;
    pTVar2 = &(param_1->AggGeom).BoxElems;
    if (pTVar2 == pTVar1) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    iVar11 = (param_2->AggGeom).BoxElems.ArrayNum;
    if (iVar11 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x70,8,iVar11,&pTVar2->AllocatorInstance,
                          &(param_1->AggGeom).BoxElems.ArrayNum,
                          &(param_1->AggGeom).BoxElems.ArrayMax);
      ConstructItems<FKBoxElem,FKBoxElem,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x70,
                 (FKBoxElem *)(pTVar1->AllocatorInstance).Data,iVar11);
    }
    pTVar3 = &(param_1->AggGeom).ConvexElems;
    pTVar4 = &(param_2->AggGeom).ConvexElems;
    if (pTVar3 == pTVar4) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    iVar11 = (param_2->AggGeom).ConvexElems.ArrayNum;
    if (iVar11 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x100,0x10,iVar11,&pTVar3->AllocatorInstance,
                          &(param_1->AggGeom).ConvexElems.ArrayNum,
                          &(param_1->AggGeom).ConvexElems.ArrayMax);
      ConstructItems<FKConvexElem,FKConvexElem,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 0x100,
                 (FKConvexElem *)(pTVar4->AllocatorInstance).Data,iVar11);
    }
    pTVar5 = &(param_1->AggGeom).SphylElems;
    pTVar6 = &(param_2->AggGeom).SphylElems;
    if (pTVar5 == pTVar6) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    iVar11 = (param_2->AggGeom).SphylElems.ArrayNum;
    if (iVar11 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x68,8,iVar11,&pTVar5->AllocatorInstance,
                          &(param_1->AggGeom).SphylElems.ArrayNum,
                          &(param_1->AggGeom).SphylElems.ArrayMax);
      ConstructItems<FKSphylElem,FKSphylElem,int>
                ((pTVar5->AllocatorInstance).Data + (longlong)iVar14 * 0x68,
                 (FKSphylElem *)(pTVar6->AllocatorInstance).Data,iVar11);
    }
    iVar11 = (param_2->AggGeom).SphereElems.ArrayNum;
    if (iVar11 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x50,8,iVar11,(ForAnyElementType *)param_1,
                          &(param_1->AggGeom).SphereElems.ArrayNum,
                          &(param_1->AggGeom).SphereElems.ArrayMax);
      ConstructItems<FKSphereElem,FKSphereElem,int>
                ((param_1->AggGeom).SphereElems.AllocatorInstance.Data + (longlong)iVar14 * 0x50,
                 (FKSphereElem *)(param_2->AggGeom).SphereElems.AllocatorInstance.Data,iVar11);
    }
    pTVar7 = &(param_1->AggGeom).TaperedCapsuleElems;
    pTVar8 = &(param_2->AggGeom).TaperedCapsuleElems;
    if (pTVar7 == pTVar8) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    iVar11 = (param_2->AggGeom).TaperedCapsuleElems.ArrayNum;
    if (iVar11 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x70,8,iVar11,&pTVar7->AllocatorInstance,
                          &(param_1->AggGeom).TaperedCapsuleElems.ArrayNum,
                          &(param_1->AggGeom).TaperedCapsuleElems.ArrayMax);
      ConstructItems<FKTaperedCapsuleElem,FKTaperedCapsuleElem,int>
                ((pTVar7->AllocatorInstance).Data + (longlong)iVar14 * 0x70,
                 (FKTaperedCapsuleElem *)(pTVar8->AllocatorInstance).Data,iVar11);
    }
    pTVar9 = &(param_1->AggGeom).LevelSetElems;
    pTVar10 = &(param_2->AggGeom).LevelSetElems;
    if (pTVar9 == pTVar10) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    iVar11 = (param_2->AggGeom).LevelSetElems.ArrayNum;
    if (iVar11 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xa0,0x10,iVar11,&pTVar9->AllocatorInstance,
                          &(param_1->AggGeom).LevelSetElems.ArrayNum,
                          &(param_1->AggGeom).LevelSetElems.ArrayMax);
      ConstructItems<FKLevelSetElem,FKLevelSetElem,int>
                ((pTVar9->AllocatorInstance).Data + (longlong)iVar14 * 0xa0,
                 (FKLevelSetElem *)(pTVar10->AllocatorInstance).Data,iVar11);
    }
    pTVar17 = &(param_1->AggGeom).SkinnedLevelSetElems;
    pTVar16 = &(param_2->AggGeom).SkinnedLevelSetElems;
    if (pTVar17 == pTVar16) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L"");
      if (bVar13) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    iVar11 = (param_2->AggGeom).SkinnedLevelSetElems.ArrayNum;
    if (iVar11 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,iVar11,&pTVar17->AllocatorInstance,
                          &(param_1->AggGeom).SkinnedLevelSetElems.ArrayNum,
                          &(param_1->AggGeom).SkinnedLevelSetElems.ArrayMax);
      ConstructItems<FKSkinnedLevelSetElem,FKSkinnedLevelSetElem,int>
                ((pTVar17->AllocatorInstance).Data + (longlong)iVar14 * 0x38,
                 (FKSkinnedLevelSetElem *)(pTVar16->AllocatorInstance).Data,iVar11);
    }
  }
  return;
}

// CombineSimpleCollisionArray @ 14cdcc540

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::CombineSimpleCollisionArray
          (TArray<FGeometryScriptSimpleCollision,TSizedDefaultAllocator<32>_> *param_1,
          FGeometryScriptSimpleCollision *param_2,UGeometryScriptDebug *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xa0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FGeometryScriptSimpleCollision_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    CombineSimpleCollision(param_2,(FGeometryScriptSimpleCollision *)pFVar2,param_3);
    pFVar2 = pFVar2 + 0xa0;
  }
  return;
}

// ComputeNavigableConvexDecomposition @ 14cdcd440

FGeometryScriptSimpleCollision * __cdecl
UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition
          (FGeometryScriptSimpleCollision *__return_storage_ptr__,UDynamicMesh *param_1,
          FNavigableConvexDecompositionOptions *param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FNavigableConvexDecompositionOptions *local_28;
  FGeometryScriptSimpleCollision *local_20;
  undefined1 local_18 [16];
  
  (__return_storage_ptr__->AggGeom).SphereElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (__return_storage_ptr__->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"ComputeNavigableConvexDecomposition_NullInput",
                        L"ComputeNavigableConvexDecomposition: Dynamic Mesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    local_18._8_8_ = &local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_28 = param_2;
    local_20 = __return_storage_ptr__;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
  }
  return __return_storage_ptr__;
}

// ComputeNegativeSpace @ 14cdcd540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FGeometryScriptSphereCovering * __cdecl
UGeometryScriptLibrary_CollisionFunctions::ComputeNegativeSpace
          (FGeometryScriptSphereCovering *__return_storage_ptr__,
          FGeometryScriptDynamicMeshBVH *param_1,FComputeNegativeSpaceOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FSphereCovering *this;
  code *pcVar1;
  bool bVar2;
  FGeometryScriptSphereCovering *pFVar3;
  FText *pFVar4;
  longlong *plVar5;
  undefined1 auStack_188 [40];
  FText local_160;
  undefined1 local_148 [128];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  (__return_storage_ptr__->Spheres).Object = (FSphereCovering *)0x0;
  (__return_storage_ptr__->Spheres).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (((param_1->FWNTree).Object == (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0) ||
     ((param_1->Spatial).Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0)) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_160,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"ComputeNegativeSpace_Null_BVH",
                        L"ComputeNegativeSpace: BVH must be initialized");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar4);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
  }
  else {
    UELocal::ConvertNegativeSpaceOptions((FNegativeSpaceSampleSettings *)local_148,param_2);
    FGeometryScriptSphereCovering::Reset(__return_storage_ptr__);
    if ((__return_storage_ptr__->Spheres).Object == (FSphereCovering *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FGeometryScriptSphereCovering *)(*pcVar1)();
        return pFVar3;
      }
    }
    this = (__return_storage_ptr__->Spheres).Object;
    if ((param_1->FWNTree).Object == (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FGeometryScriptSphereCovering *)(*pcVar1)();
        return pFVar3;
      }
    }
    UE::Geometry::FSphereCovering::AddNegativeSpace
              (this,(param_1->FWNTree).Object,(FNegativeSpaceSampleSettings *)local_148,false);
    if (local_c8 != 0) {
      plVar5 = local_b8;
      if (local_a0 != (longlong *)0x0) {
        plVar5 = local_a0;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_148._80_8_ != 0) {
      plVar5 = (longlong *)(local_148 + 0x60);
      if ((longlong *)local_148._120_8_ != (longlong *)0x0) {
        plVar5 = (longlong *)local_148._120_8_;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return __return_storage_ptr__;
}

// Conv_GeometryScriptSphereCoveringToSphereArray @ 14cdcd7d0

TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> * __cdecl
UGeometryScriptLibrary_CollisionFunctions::Conv_GeometryScriptSphereCoveringToSphereArray
          (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FGeometryScriptSphereCovering *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  uint uVar3;
  FSphereCovering *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  uVar13 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayMax = 0;
  __return_storage_ptr__->ArrayNum = 0;
  pFVar4 = (param_1->Spheres).Object;
  if (pFVar4 != (FSphereCovering *)0x0) {
    uVar3 = (pFVar4->Position).ArrayNum;
    if ((int)uVar3 < 1) {
      if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar3,&__return_storage_ptr__->AllocatorInstance,
                 &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
    }
    uVar14 = uVar13;
    uVar16 = uVar13;
    uVar17 = uVar13;
    if (0 < (int)uVar3) {
      do {
        if (((param_1->Spheres).Object == (FSphereCovering *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        pFVar4 = (param_1->Spheres).Object;
        uVar12 = (uint)uVar13;
        uVar15 = ~uVar12 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar12 < (pFVar4->Position).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        pFVar5 = (pFVar4->Position).AllocatorInstance.Data;
        pFVar1 = pFVar5 + uVar17;
        uVar7 = *(undefined8 *)pFVar1;
        uVar8 = *(undefined8 *)(pFVar1 + 8);
        uVar2 = *(undefined8 *)(pFVar5 + uVar17 + 0x10);
        uVar10 = 0;
        if ((int)uVar12 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
        pFVar1 = pFVar5 + uVar14;
        *(undefined8 *)pFVar1 = uVar7;
        *(undefined8 *)(pFVar1 + 8) = uVar8;
        *(undefined8 *)(pFVar5 + uVar14 + 0x10) = uVar2;
        if (((param_1->Spheres).Object == (FSphereCovering *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        pFVar4 = (param_1->Spheres).Object;
        uVar10 = 0;
        if ((int)uVar12 < (pFVar4->Radius).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        uVar2 = *(undefined8 *)((pFVar4->Radius).AllocatorInstance.Data + uVar16 * 8);
        uVar10 = 0;
        if ((int)uVar12 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar11;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar16 = uVar16 + 1;
        *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + uVar14 + 0x18) = uVar2;
        uVar14 = uVar14 + 0x20;
        uVar17 = uVar17 + 0x18;
      } while ((longlong)uVar16 < (longlong)(int)uVar3);
    }
  }
  return __return_storage_ptr__;
}

// Conv_SphereArrayToGeometryScriptSphereCovering @ 14cdcda80

FGeometryScriptSphereCovering * __cdecl
UGeometryScriptLibrary_CollisionFunctions::Conv_SphereArrayToGeometryScriptSphereCovering
          (FGeometryScriptSphereCovering *__return_storage_ptr__,
          TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TSphere<double> *pTVar2;
  FSphereCovering *this;
  code *pcVar3;
  bool bVar4;
  FGeometryScriptSphereCovering *pFVar5;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TSphere<double>_const_,int> local_18;
  
  (__return_storage_ptr__->Spheres).Object = (FSphereCovering *)0x0;
  (__return_storage_ptr__->Spheres).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FGeometryScriptSphereCovering::Reset(__return_storage_ptr__);
  if ((__return_storage_ptr__->Spheres).Object == (FSphereCovering *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FGeometryScriptSphereCovering *)(*pcVar3)();
      return pFVar5;
    }
  }
  pTVar2 = (TSphere<double> *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  this = (__return_storage_ptr__->Spheres).Object;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FGeometryScriptSphereCovering *)(*pcVar3)();
      return pFVar5;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pTVar2;
  UE::Geometry::FSphereCovering::AppendSpheres(this,&local_18);
  return __return_storage_ptr__;
}

// GenerateCollisionFromMesh @ 14cdd4900

FGeometryScriptSimpleCollision * __cdecl
UGeometryScriptLibrary_CollisionFunctions::GenerateCollisionFromMesh
          (FGeometryScriptSimpleCollision *__return_storage_ptr__,UDynamicMesh *param_1,
          FGeometryScriptCollisionFromMeshOptions *param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptSimpleCollision *local_28;
  FGeometryScriptCollisionFromMeshOptions *local_20;
  undefined1 local_18 [16];
  
  (__return_storage_ptr__->AggGeom).SphereElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (__return_storage_ptr__->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"GenerateCollisionFromMesh_InvalidInput",
                        L"GenerateCollisionFromMesh: FromDynamicMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
      return __return_storage_ptr__;
    }
  }
  else {
    local_18._8_8_ = &local_28;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::GenerateCollisionFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_28 = __return_storage_ptr__;
    local_20 = param_2;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_18);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cdd8320

UClass * __cdecl UGeometryScriptLibrary_CollisionFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_CollisionFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_CollisionFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_CollisionFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_CollisionFunctions.InnerSingleton;
}

// GetSimpleCollisionFromComponent @ 14cdda470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGeometryScriptSimpleCollision * __cdecl
UGeometryScriptLibrary_CollisionFunctions::GetSimpleCollisionFromComponent
          (FGeometryScriptSimpleCollision *__return_storage_ptr__,UPrimitiveComponent *param_1,
          UGeometryScriptDebug *param_2)

{
  longlong lVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FText local_18;
  
  (__return_storage_ptr__->AggGeom).SphereElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (__return_storage_ptr__->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    pwVar4 = L"GetSimpleCollisionFromComponent: Component is Null";
    pwVar3 = L"GetSimpleCollisionFromComponent_InvalidComponent";
  }
  else {
    lVar1 = (**(code **)(*(longlong *)param_1 + 0x800))(param_1);
    if (lVar1 != 0) {
      FKAggregateGeom::FreeRenderInfo(&__return_storage_ptr__->AggGeom);
      FKAggregateGeom::CloneAgg(&__return_storage_ptr__->AggGeom,(FKAggregateGeom *)(lVar1 + 0x38));
      return __return_storage_ptr__;
    }
    pwVar4 = L"GetSimpleCollisionFromComponent: Component\'s BodySetup is Null";
    pwVar3 = L"GetSimpleCollisionFromComponent_InvalidBodySetup";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_CollisionFunctions",pwVar3,pwVar4);
  UE::Geometry::AppendError(param_2,InvalidInputs,pFVar2);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// GetSimpleCollisionFromStaticMesh @ 14cdda590

FGeometryScriptSimpleCollision * __cdecl
UGeometryScriptLibrary_CollisionFunctions::GetSimpleCollisionFromStaticMesh
          (FGeometryScriptSimpleCollision *__return_storage_ptr__,UStaticMesh *param_1,
          UGeometryScriptDebug *param_2)

{
  UBodySetup *pUVar1;
  FText *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FText local_18;
  
  (__return_storage_ptr__->AggGeom).SphereElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphereElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).BoxElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SphylElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).ConvexElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).TaperedCapsuleElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).LevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).MLLevelSetElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  (__return_storage_ptr__->AggGeom).SkinnedTriangleMeshElems.ArrayMax = 0;
  (__return_storage_ptr__->AggGeom).RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  (__return_storage_ptr__->AggGeom).RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (param_1 == (UStaticMesh *)0x0) {
    pwVar4 = L"GetSimpleCollisionFromStaticMesh: Input Mesh is Null";
    pwVar3 = L"GetSimpleCollisionFromStaticMesh_InvalidStaticMesh";
  }
  else {
    pUVar1 = (param_1->BodySetup).field0_0x0.DebugPtr;
    if (pUVar1 != (UBodySetup *)0x0) {
      FKAggregateGeom::FreeRenderInfo(&__return_storage_ptr__->AggGeom);
      FKAggregateGeom::CloneAgg(&__return_storage_ptr__->AggGeom,&pUVar1->AggGeom);
      return __return_storage_ptr__;
    }
    pwVar4 = L"GetSimpleCollisionFromStaticMesh: Input Mesh\'s BodySetup is Null";
    pwVar3 = L"GetSimpleCollisionFromStaticMesh_InvalidBodySetup";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_CollisionFunctions",pwVar3,pwVar4);
  UE::Geometry::AppendError(param_2,InvalidInputs,pFVar2);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// MergeSimpleCollisionShapes @ 14cddd430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGeometryScriptSimpleCollision * __cdecl
UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes
          (FGeometryScriptSimpleCollision *__return_storage_ptr__,
          FGeometryScriptSimpleCollision *param_1,
          FGeometryScriptMergeSimpleCollisionOptions *param_2,bool *param_3,
          UGeometryScriptDebug *param_4)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar12;
  double dVar13;
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined8 uVar16;
  float fVar17;
  FDynamicMesh3 *pFVar18;
  FDynamicMesh3 **ppFVar19;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar20;
  bool bVar21;
  uint uVar22;
  FDynamicMesh3 *pFVar23;
  FDynamicMesh3 *pFVar24;
  TQuat<double> *pTVar25;
  FGeometryScriptSimpleCollision *pFVar26;
  TVector<double> *pTVar27;
  TVector2<double> *pTVar28;
  ulong64 uVar29;
  FText *pFVar30;
  FKConvexElem *pFVar31;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar32;
  int iVar33;
  ulonglong uVar34;
  longlong *plVar35;
  FKSkinnedLevelSetElem *this;
  FSphereCovering *pFVar36;
  uint uVar37;
  FKShapeElem *pFVar38;
  FSphereCovering *pFVar39;
  FKTaperedCapsuleElem *pFVar40;
  FKSkinnedLevelSetElem *pFVar41;
  FKLevelSetElem *pFVar42;
  int iVar43;
  uint uVar44;
  FKShapeElem *pFVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  FSphereCovering *pFVar49;
  int iVar50;
  FScriptContainerElement *pFVar51;
  ForAnyElementType FVar52;
  FScriptContainerElement *pFVar53;
  TTransform<double> *pTVar54;
  FKTaperedCapsuleElem *pFVar55;
  FKSkinnedLevelSetElem *pFVar56;
  FKLevelSetElem *pFVar57;
  int iVar58;
  FGeometryScriptMergeSimpleCollisionOptions *pFVar59;
  FKConvexElem *pFVar60;
  undefined4 uVar61;
  double dVar62;
  undefined4 uVar67;
  double dVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar77;
  undefined4 uVar78;
  double dVar79;
  undefined4 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auStackY_dc8 [32];
  undefined1 local_d78;
  undefined1 local_d77;
  undefined1 local_d76;
  undefined1 local_d75;
  undefined1 local_d74;
  undefined1 local_d73;
  undefined1 local_d72;
  undefined1 local_d71;
  undefined1 local_d70;
  undefined1 local_d6f;
  undefined1 local_d6e;
  undefined1 local_d6d [5];
  FDynamicMesh3 *local_d68;
  uint local_d60;
  ForAnyElementType local_d58;
  uint local_d50;
  int local_d4c;
  int *local_d48;
  undefined8 local_d40;
  FDynamicMesh3 **local_d38;
  TArray<int,TSizedDefaultAllocator<32>_> local_d30;
  FGeometryScriptMergeSimpleCollisionOptions *local_d20;
  void *local_d18;
  undefined8 local_d10;
  FKAggregateGeom local_d08;
  FKAggregateGeom *local_c68;
  FKShapeElem *local_c60;
  undefined8 local_c58;
  void *local_c48;
  undefined8 local_c40;
  void *local_c38;
  undefined8 local_c30;
  FSphereCovering local_c28;
  FIndex3i_u_0 local_c08;
  FIndex3i_u_0 local_bfc;
  undefined1 local_be8 [16];
  ulonglong local_bd8;
  ForAnyElementType local_bd0;
  longlong local_bc8;
  ForAnyElementType local_bc0;
  longlong local_bb8;
  ForAnyElementType local_bb0;
  longlong local_ba8;
  ForAnyElementType local_ba0;
  longlong local_b98;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_b90;
  ForAnyElementType local_b80;
  longlong local_b78;
  ForAnyElementType local_b70;
  longlong local_b68;
  ForAnyElementType local_b60;
  longlong local_b58;
  bool local_b50;
  double local_b48;
  double dStack_b40;
  int local_b38;
  int local_b34;
  int local_b30;
  bool local_b2c;
  void **local_b28;
  void **local_b20;
  void **local_b18;
  int **local_b10;
  UGeometryScriptDebug *local_b08;
  int **local_b00;
  void **local_af8;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_af0;
  bool *local_ab8;
  FScriptContainerElement *local_aa8;
  int iStack_aa0;
  undefined4 uStack_a9c;
  TIndexMeshArrayAdapter<int,double,UE::Math::TVector<double>_> local_a98;
  FScriptContainerElement *local_a88;
  int iStack_a80;
  undefined4 uStack_a7c;
  TArray<int,TSizedDefaultAllocator<32>_> *local_a78;
  void **local_a70;
  TTuple<int,int> *local_a68;
  int iStack_a60;
  undefined4 uStack_a5c;
  code *local_a58;
  TArray<int,TSizedDefaultAllocator<32>_> **local_a50;
  code *local_a48;
  int ***local_a40;
  code *local_a38;
  void ***local_a30;
  FScriptContainerElement *local_a28;
  int iStack_a20;
  undefined4 uStack_a1c;
  TVector<double> *local_a18;
  int iStack_a10;
  undefined4 uStack_a0c;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> local_a08;
  FScriptContainerElement *local_9f8;
  uint uStack_9f0;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> local_9e8;
  TVector<double>_u_0 local_9d8;
  undefined8 local_9c0;
  float local_9b8;
  undefined8 local_9b4;
  float local_9ac;
  TVector2<float>_u_0 local_9a8;
  undefined2 local_9a0;
  undefined1 local_99e;
  TVector<double>_u_0 local_998;
  undefined8 local_980;
  float local_978;
  undefined8 local_974;
  float local_96c;
  TVector2<float>_u_0 local_968;
  undefined2 local_960;
  undefined1 local_95e;
  undefined1 local_958 [152];
  bool local_8c0;
  TVector<double>_u_0 local_8b8;
  TQuaternion<double>_u_0 TStack_8a0;
  TVector<double>_u_0 TStack_880;
  FIndex3i_u_0 local_868;
  undefined2 local_85c;
  TVector<double>_u_0 local_858;
  double dStack_840;
  double local_838;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  double dStack_820;
  double dStack_818;
  double local_810;
  TArrayView<UE::Math::TVector<double>_const_,int> local_808;
  TArrayView<UE::Math::TVector<double>_const_,int> local_7f8;
  TArrayView<TTuple<int,int>_const_,int> local_7e8;
  FText local_7d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_7c8;
  TVector<double>_u_0 local_7b8;
  TArrayView<UE::Math::TVector<double>_const_,int> local_798;
  TArrayView<UE::Math::TVector<double>_const_,int> local_788;
  undefined1 local_778 [16];
  undefined1 local_768 [16];
  TVector2<double>_u_0 local_758;
  TArrayView<UE::Math::TVector<double>_const_,int> local_748;
  TVector2<double>_u_0 local_738;
  undefined1 local_728 [16];
  double local_718;
  undefined1 local_708 [16];
  uint local_6f8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_6b0 [4];
  TVector<double>_u_0 local_668 [3];
  FIndex3i_u_0 local_618;
  float local_608;
  ESphereProjectionMethod local_604;
  TTransform<double> local_5f8;
  TVector2<double> local_598;
  TVector<double> local_588;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  TQuat<double> local_508;
  TQuat<double> local_4e8;
  undefined1 local_4c8 [192];
  undefined1 local_408 [32];
  void *local_3e8;
  undefined4 local_3e0;
  uint local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  void *local_3c8;
  undefined4 local_3c0;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  ForAnyElementType local_3a8;
  undefined8 local_3a0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_398;
  undefined1 local_2d8 [128];
  longlong local_258;
  longlong local_248 [3];
  longlong *local_230;
  TVector<double> local_1b8 [8];
  int local_f8;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = __security_cookie.value ^ (ulonglong)auStackY_dc8;
  local_b08 = param_4;
  local_d20 = param_2;
  local_c68 = &__return_storage_ptr__->AggGeom;
  local_ab8 = param_3;
  FKAggregateGeom::FKAggregateGeom(&local_d08);
  *param_3 = false;
  if ((param_1->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
      (param_1->AggGeom).MLLevelSetElems.ArrayNum + (param_1->AggGeom).SkinnedLevelSetElems.ArrayNum
      + (param_1->AggGeom).LevelSetElems.ArrayNum + (param_1->AggGeom).TaperedCapsuleElems.ArrayNum
      + (param_1->AggGeom).ConvexElems.ArrayNum + (param_1->AggGeom).SphylElems.ArrayNum +
      (param_1->AggGeom).BoxElems.ArrayNum + (param_1->AggGeom).SphereElems.ArrayNum < 2) {
    FKAggregateGeom::FKAggregateGeom(&__return_storage_ptr__->AggGeom,&param_1->AggGeom);
    FKAggregateGeom::~FKAggregateGeom(&local_d08);
  }
  else {
    pFVar24 = (FDynamicMesh3 *)0x0;
    local_c38 = (void *)0x0;
    local_c30 = 0;
    local_d48 = (int *)0x0;
    local_d40 = 0;
    local_c48 = (void *)0x0;
    local_c40 = 0;
    local_d18 = (void *)0x0;
    local_d10 = 0;
    local_d68 = (FDynamicMesh3 *)0x0;
    pFVar23 = local_d68;
    if (param_2->bComputeNegativeSpace != false) {
      pFVar23 = ::operator_new(0x230);
      if (pFVar23 != (FDynamicMesh3 *)0x0) {
        pFVar24 = UE::Geometry::FDynamicMesh3::FDynamicMesh3(pFVar23);
      }
      pFVar18 = local_d68;
      pFVar23 = pFVar24;
      if (local_d68 != (FDynamicMesh3 *)0x0) {
        plVar35 = &local_d68->_padding_;
        local_d68 = pFVar24;
        (**(code **)*plVar35)(pFVar18,1);
        pFVar23 = local_d68;
      }
    }
    local_d68 = pFVar23;
    dVar3 = _UNK_150689678;
    dVar62 = ___xmm_3fe00000000000003fe0000000000000;
    auVar84 = ___xmm_7fffffffffffffff7fffffffffffffff;
    dVar83 = __real_3fe0000000000000;
    iVar43 = (param_1->AggGeom).BoxElems.ArrayNum;
    local_d38 = &local_d68;
    pFVar38 = (FKShapeElem *)(param_1->AggGeom).BoxElems.AllocatorInstance.Data;
    uVar78 = SUB84(__real_3fe0000000000000,0);
    uVar80 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
    local_b28 = &local_d18;
    local_b20 = &local_c48;
    local_b18 = &local_c38;
    local_b10 = &local_d48;
    pFVar45 = (FKShapeElem *)((longlong)pFVar38 + (longlong)iVar43 * 0x70);
    while( true ) {
      if ((param_1->AggGeom).BoxElems.ArrayNum != iVar43) {
        local_d78 = 0;
        `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_d78);
      }
      ppFVar19 = local_d38;
      fVar17 = __real_358637bd;
      if (pFVar38 == pFVar45) break;
      dVar4 = (double)pFVar38[1]._padding_;
      dVar5 = *(double *)&pFVar38[1].RestOffset;
      dVar2 = *(double *)&pFVar38[1].Name.Number;
      dStack_820 = (double)(float)pFVar38[2]._padding_ * dVar62;
      dStack_818 = (double)(float)((ulonglong)pFVar38[2]._padding_ >> 0x20) * dVar3;
      local_810 = (double)pFVar38[2].RestOffset * dVar83;
      local_858._s_0.X = dVar4;
      local_858._s_0.Y = dVar5;
      local_858._s_0.Z = dVar2;
      pTVar25 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&pFVar38[1].field_0x18,&local_508);
      uVar8 = pTVar25->X;
      uVar11 = pTVar25->Y;
      auVar14._4_8_ = in_XMM3._8_8_;
      auVar14._0_4_ = (int)((ulonglong)uVar8 >> 0x20);
      auVar76._0_8_ = auVar14._0_8_ << 0x20;
      auVar76._8_4_ = (int)uVar11;
      auVar76._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
      uStack_830 = *(undefined4 *)&pTVar25->Z;
      uStack_82c = *(undefined4 *)((longlong)&pTVar25->Z + 4);
      local_828 = *(undefined4 *)&pTVar25->W;
      uStack_824 = *(undefined4 *)((longlong)&pTVar25->W + 4);
      local_838 = auVar76._8_8_;
      in_XMM3._8_8_ = uVar11;
      in_XMM3._0_8_ = local_838;
      dStack_840 = (double)uVar8;
      if (local_d68 == (FDynamicMesh3 *)0x0) {
        local_f8 = 0;
        local_f4 = 8;
        UE::Geometry::TOrientedBox3<double>::
        EnumerateCorners<_UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes_::__l17::<lambda_5>_>
                  ((TOrientedBox3<double> *)&local_858._s_0,
                   (TArray<UE::Math::TVector<double>,TFixedAllocator<8>_> *)local_1b8);
        iVar33 = local_f8;
        local_a18 = local_1b8;
        dVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y *
                UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
                UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
                (double)*(float *)&pFVar38[2]._padding_ *
                (double)*(float *)((longlong)&pFVar38[2]._padding_ + 4) *
                (double)pFVar38[2].RestOffset;
        if ((local_f8 < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar21)) {
          pcVar12 = (code *)swi(3);
          pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
          return pFVar26;
        }
        iStack_a10 = iVar33;
        local_788._12_4_ = uStack_a0c;
        local_788.ArrayNum = iVar33;
        local_788.DataPtr = local_a18;
        `UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_3>::
        operator()(&local_b28,&local_788,
                   (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & auVar84._4_4_,
                                    SUB84(dVar2,0) & auVar84._0_4_),pFVar38,
                   (TTransform<double> *)0x0);
        pFVar38 = (FKShapeElem *)&pFVar38[2].Name.Number;
      }
      else {
        local_958._8_8_ = (FScriptContainerElement *)0x0;
        TStack_880._s_0.Y = dStack_818;
        TStack_880._s_0.Z = local_810;
        local_958._16_8_ = 0;
        local_958._24_8_ = (FScriptContainerElement *)0x0;
        local_958._32_8_ = 0;
        local_958._40_8_ = (FScriptContainerElement *)0x0;
        local_958._48_8_ = 0;
        local_958._56_8_ = (FScriptContainerElement *)0x0;
        local_958._64_8_ = 0;
        local_958._72_8_ = (FScriptContainerElement *)0x0;
        local_958._80_8_ = 0;
        local_958._88_8_ = (FScriptContainerElement *)0x0;
        local_958._96_8_ = 0;
        local_958._104_8_ = (FScriptContainerElement *)0x0;
        local_958._112_8_ = 0;
        local_958._120_8_ = (FScriptContainerElement *)0x0;
        local_958._128_8_ = 0;
        local_958._136_8_ = (FScriptContainerElement *)0x0;
        local_958._144_8_ = 0;
        local_8c0 = false;
        local_958._0_8_ = &___7FGridBoxMeshGenerator_Geometry_UE__6B_;
        local_85c._0_1_ = true;
        local_85c._1_1_ = false;
        local_868._s_0.A = 1;
        local_868._s_0.B = 1;
        local_868._s_0.C = 1;
        TStack_880._s_0.X = dStack_820;
        local_8b8._s_0.X = dVar4;
        local_8b8._s_0.Y = dVar5;
        local_8b8._s_0.Z = dVar2;
        TStack_8a0._s_0.X = (double)uVar8;
        TStack_8a0._s_0.Y = local_838;
        TStack_8a0._16_4_ = uStack_830;
        TStack_8a0._20_4_ = uStack_82c;
        TStack_8a0._s_0.W = pTVar25->W;
        local_858._s_0.Z = dVar2;
        UE::Geometry::FGridBoxMeshGenerator::Generate((FGridBoxMeshGenerator *)local_958);
        uVar61 = local_958._16_4_;
        local_a28 = (FScriptContainerElement *)local_958._8_8_;
        dVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y *
                UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
                UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
                (double)*(float *)&pFVar38[2]._padding_ *
                (double)*(float *)((longlong)&pFVar38[2]._padding_ + 4) *
                (double)pFVar38[2].RestOffset;
        if (((int)local_958._16_4_ < 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar21)) {
          pcVar12 = (code *)swi(3);
          pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
          return pFVar26;
        }
        iStack_a20 = uVar61;
        local_798._12_4_ = uStack_a1c;
        local_798.ArrayNum = uVar61;
        local_798.DataPtr = (TVector<double> *)local_a28;
        `UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_3>::
        operator()(&local_b28,&local_798,
                   (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) & auVar84._4_4_,
                                    SUB84(dVar2,0) & auVar84._0_4_),pFVar38,
                   (TTransform<double> *)0x0);
        `UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_1>::
        operator()(&local_d38,(FMeshShapeGenerator *)local_958);
        UE::Geometry::FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)local_958);
        pFVar38 = (FKShapeElem *)&pFVar38[2].Name.Number;
      }
    }
    local_d60 = (param_1->AggGeom).SphereElems.ArrayNum;
    uVar34 = (ulonglong)(int)local_d60;
    pFVar38 = (FKShapeElem *)(param_1->AggGeom).SphereElems.AllocatorInstance.Data;
    local_c60 = (FKShapeElem *)((longlong)pFVar38 + uVar34 * 0x50);
    pFVar59 = local_d20;
    while( true ) {
      pFVar45 = local_c60;
      if ((param_1->AggGeom).SphereElems.ArrayNum != (int)uVar34) {
        local_d77 = 0;
        `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d77);
      }
      dVar62 = _UNK_150689518;
      dVar83 = ___xmm_00000000000000003ff0000000000000;
      if (pFVar38 == pFVar45) break;
      UE::Geometry::FGridBoxMeshGenerator::FGridBoxMeshGenerator((FGridBoxMeshGenerator *)local_708)
      ;
      local_668[0]._0_8_ = pFVar38[1]._padding_;
      local_668[0]._8_8_ = *(undefined8 *)&pFVar38[1].RestOffset;
      local_618._s_0.A = (pFVar59->ShapeToHullTriangulation).SphereStepsPerSide;
      local_668[0]._16_8_ = *(undefined8 *)&pFVar38[1].Name.Number;
      if (local_618._s_0.A < 1) {
        local_618._s_0.A = 1;
      }
      local_608 = *(float *)&pFVar38[1].field_0x18;
      if (*(float *)&pFVar38[1].field_0x18 <= fVar17) {
        local_608 = fVar17;
      }
      local_604 = CubeMapping;
      local_708._0_8_ = &___7FBoxSphereGenerator_Geometry_UE__6B_;
      local_618._s_0.B = local_618._s_0.A;
      local_618._s_0.C = local_618._s_0.A;
      UE::Geometry::FBoxSphereGenerator::Generate((FBoxSphereGenerator *)local_708);
      local_a08.SourceVertices =
           (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(local_708 + 8);
      local_a08.SourceTriangles = local_6b0;
      UE::Geometry::
      TMeshQueries<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
      ::GetVolumeArea((TVector2<double> *)&local_758._s_0,&local_a08);
      uVar37 = local_6f8;
      uVar16 = local_758._s_0.X;
      local_9f8 = (FScriptContainerElement *)local_708._8_8_;
      if (((int)local_6f8 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
        return pFVar26;
      }
      uStack_9f0 = uVar37;
      local_748.DataPtr = (TVector<double> *)local_9f8;
      `UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_3>::
      operator()(&local_b28,&local_748,(double)uVar16,pFVar38,(TTransform<double> *)0x0);
      uVar37 = local_6f8;
      pFVar23 = *ppFVar19;
      if (pFVar23 != (FDynamicMesh3 *)0x0) {
        uVar34 = (ulonglong)(int)local_6f8;
        iVar43 = (pFVar23->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar23->VertexRefCounts).RefCounts.CurBlockUsed;
        pFVar53 = (FScriptContainerElement *)(local_708._8_8_ + uVar34 * 0x18);
        pFVar51 = (FScriptContainerElement *)local_708._8_8_;
        while( true ) {
          if ((uint)uVar34 != uVar37) {
            local_d76 = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_d76);
          }
          iVar33 = local_6b0[0].ArrayNum;
          if (pFVar51 == pFVar53) break;
          local_9d8._s_0.X = (double)*(undefined8 *)pFVar51;
          local_9d8._s_0.Y = (double)*(undefined8 *)(pFVar51 + 8);
          local_9d8._s_0.Z = (double)*(undefined8 *)(pFVar51 + 0x10);
          local_9b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_9ac = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_9c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_9b4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_9a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_9a0 = 0;
          local_99e = 0;
          UE::Geometry::FDynamicMesh3::AppendVertex(*ppFVar19,(FVertexInfo *)&local_9d8._s_0);
          uVar34 = (ulonglong)local_6f8;
          pFVar51 = pFVar51 + 0x18;
        }
        uVar34 = (ulonglong)local_6b0[0].ArrayNum;
        pFVar53 = local_6b0[0].AllocatorInstance.Data + uVar34 * 0xc;
        FVar52.Data = local_6b0[0].AllocatorInstance.Data;
        while( true ) {
          if ((uint)uVar34 != iVar33) {
            local_d75 = 0;
            `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_d75);
          }
          pFVar59 = local_d20;
          if (FVar52.Data == pFVar53) break;
          local_c58 = *(undefined8 *)FVar52.Data;
          local_c08._s_0.A = (int)local_c58 + iVar43;
          local_c08._s_0.B = (int)((ulonglong)local_c58 >> 0x20) + iVar43;
          local_c08._s_0.C = *(int *)(FVar52.Data + 8) + iVar43;
          UE::Geometry::FDynamicMesh3::AppendTriangle(*ppFVar19,(FIndex3i *)&local_c08._s_0,0);
          uVar34 = (ulonglong)(uint)local_6b0[0].ArrayNum;
          FVar52.Data = FVar52.Data + 0xc;
        }
      }
      UE::Geometry::FMeshShapeGenerator::~FMeshShapeGenerator((FMeshShapeGenerator *)local_708);
      uVar34 = (ulonglong)local_d60;
      pFVar38 = (FKShapeElem *)&pFVar38[1].UserData;
    }
    local_d60 = (param_1->AggGeom).SphylElems.ArrayNum;
    uVar34 = (ulonglong)(int)local_d60;
    pFVar38 = (FKShapeElem *)(param_1->AggGeom).SphylElems.AllocatorInstance.Data;
    local_c60 = (FKShapeElem *)((longlong)pFVar38 + uVar34 * 0x68);
    while( true ) {
      pFVar45 = local_c60;
      uVar37 = __xmm_80000000800000008000000080000000;
      uVar67 = 0;
      uVar61 = 0;
      if ((param_1->AggGeom).SphylElems.ArrayNum != (int)uVar34) {
        local_d74 = 0;
        `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d74);
      }
      uVar16 = __xmm_80000000000000008000000000000000;
      if (pFVar38 == pFVar45) break;
      iVar43 = (pFVar59->ShapeToHullTriangulation).CapsuleHemisphereSteps;
      local_b48 = (double)(float)pFVar38[2]._padding_;
      dStack_b40 = (double)(float)((ulonglong)pFVar38[2]._padding_ >> 0x20);
      local_be8._0_8_ = &___7FCapsuleGenerator_Geometry_UE__6B_;
      iVar33 = (pFVar59->ShapeToHullTriangulation).CapsuleCircleSteps;
      if (iVar43 < 2) {
        iVar43 = 2;
      }
      local_be8._8_8_ = (FScriptContainerElement *)0x0;
      local_bd8 = 0;
      local_bd0.Data = (FScriptContainerElement *)0x0;
      if (iVar33 < 3) {
        iVar33 = 3;
      }
      local_bc8 = 0;
      local_bc0.Data = (FScriptContainerElement *)0x0;
      local_bb8 = 0;
      local_b38 = 2;
      if (2 < iVar43) {
        local_b38 = iVar43;
      }
      local_bb0.Data = (FScriptContainerElement *)0x0;
      local_ba8 = 0;
      local_b34 = 3;
      if (3 < iVar33) {
        local_b34 = iVar33;
      }
      local_ba0.Data = (FScriptContainerElement *)0x0;
      iVar33 = local_b38 * 2 + -2;
      local_b98 = 0;
      iVar58 = iVar33 * local_b34;
      local_b90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b90.ArrayNum = 0;
      local_b90.ArrayMax = 0;
      local_b80.Data = (FScriptContainerElement *)0x0;
      local_b78 = 0;
      local_b70.Data = (FScriptContainerElement *)0x0;
      local_b68 = 0;
      iVar43 = iVar58 + 2;
      local_b60.Data = (FScriptContainerElement *)0x0;
      local_b58 = 0;
      local_b50 = false;
      local_b30 = 0;
      local_b2c = false;
      UE::Geometry::FMeshShapeGenerator::SetBufferSizes
                ((FMeshShapeGenerator *)local_be8,iVar43,iVar58 * 2,
                 (local_b34 + 1) * iVar33 + local_b34 * 2,iVar43);
      UE::Geometry::FCapsuleGenerator::GenerateVertices((FCapsuleGenerator *)local_be8);
      UE::Geometry::FCapsuleGenerator::GenerateUVVertices((FCapsuleGenerator *)local_be8);
      UE::Geometry::FCapsuleGenerator::OutputEquatorialTriangles((FCapsuleGenerator *)local_be8);
      UE::Geometry::FCapsuleGenerator::OutputPolarTriangles((FCapsuleGenerator *)local_be8);
      local_7b8._s_0.X = 0.0;
      local_7b8._s_0.Y = 0.0;
      local_7b8._s_0.Z =
           (double)(float)(*(uint *)((longlong)&pFVar38[2]._padding_ + 4) ^ uVar37) *
           (double)CONCAT44(uVar80,uVar78);
      pTVar27 = UE::Math::TRotator<double>::RotateVector
                          ((TRotator<double> *)&pFVar38[1].field_0x18,&local_588,
                           (TVector<double> *)&local_7b8._s_0);
      dVar3 = (double)pFVar38[1]._padding_;
      dVar2 = (pTVar27->field0_0x0)._s_0.Y;
      dVar4 = (pTVar27->field0_0x0)._s_0.Z;
      dVar5 = *(double *)&pFVar38[1].RestOffset;
      dVar6 = *(double *)&pFVar38[1].Name.Number;
      dVar7 = (pTVar27->field0_0x0)._s_0.X;
      pTVar25 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)&pFVar38[1].field_0x18,&local_4e8);
      pFVar53 = (FScriptContainerElement *)local_be8._8_8_;
      auVar10._0_8_ = pTVar25->X;
      auVar10._8_8_ = pTVar25->Y;
      lVar46 = (longlong)(int)local_bd8;
      auVar9._0_8_ = pTVar25->Z;
      auVar9._8_8_ = pTVar25->W;
      local_778 = auVar10;
      local_768 = auVar9;
      if (((int)local_bd8 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
        return pFVar26;
      }
      pFVar51 = (FScriptContainerElement *)((undefined8)pFVar53 + lVar46 * 0x18);
      if (pFVar53 != pFVar51) {
        auVar84._8_8_ = auVar9._8_8_;
        auVar84._0_8_ = (double)auVar9._8_8_;
        auVar85 = blendpd(auVar10,auVar9,2);
        do {
          auVar76 = *(undefined1 (*) [16])pFVar53;
          dVar13 = *(double *)(pFVar53 + 0x10) * dVar83;
          uVar78 = SUB84(dVar62 * 0.0,0);
          uVar80 = (undefined4)((ulonglong)(dVar62 * 0.0) >> 0x20);
          dVar68 = auVar76._8_8_;
          auVar69._8_4_ = uVar78;
          auVar69._0_8_ = dVar13;
          auVar69._12_4_ = uVar80;
          auVar69 = blendpd(auVar76,auVar69,2);
          auVar81._0_8_ = dVar68 * (double)auVar10._0_8_ - auVar76._0_8_ * (double)auVar10._8_8_;
          auVar81._8_8_ = dVar13 * (double)auVar10._8_8_ - dVar68 * (double)auVar9._0_8_;
          auVar63._8_4_ = uVar78;
          auVar63._0_8_ = dVar13;
          auVar63._12_4_ = uVar80;
          auVar70._0_8_ = auVar69._0_8_ * (double)auVar9._0_8_ - dVar13 * auVar85._0_8_;
          auVar70._8_8_ = auVar69._8_8_ * (double)auVar9._8_8_ - auVar63._8_8_ * auVar85._8_8_;
          auVar69 = blendpd(auVar81,auVar70,2);
          dVar77 = auVar81._8_8_ + auVar81._8_8_;
          dVar79 = auVar70._0_8_ + auVar70._0_8_;
          auVar82._0_8_ = auVar69._0_8_ + auVar69._0_8_;
          auVar82._8_8_ = auVar69._8_8_ + auVar69._8_8_;
          uVar78 = SUB84(dVar79,0);
          auVar74._8_4_ = uVar78;
          auVar74._0_8_ = dVar77;
          uVar80 = (undefined4)((ulonglong)dVar79 >> 0x20);
          auVar74._12_4_ = uVar80;
          auVar64._8_4_ = uVar78;
          auVar64._0_8_ = dVar77;
          auVar64._12_4_ = uVar80;
          auVar72._8_4_ = uVar78;
          auVar72._0_8_ = dVar77;
          auVar72._12_4_ = uVar80;
          auVar69 = blendpd(auVar72,auVar82,2);
          auVar75._0_8_ = auVar74._8_8_ * (double)auVar10._0_8_ - dVar77 * (double)auVar10._8_8_;
          auVar75._8_8_ =
               auVar82._0_8_ * (double)auVar10._8_8_ - auVar64._8_8_ * (double)auVar9._0_8_;
          auVar65._8_4_ = SUB84(auVar82._8_8_,0);
          auVar65._0_8_ = auVar82._0_8_;
          auVar65._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
          auVar71._8_4_ = (int)auVar9._8_8_;
          auVar71._0_8_ = auVar9._8_8_;
          auVar71._12_4_ = (int)((ulonglong)auVar9._8_8_ >> 0x20);
          auVar73._0_8_ = auVar69._0_8_ * (double)auVar9._0_8_ - auVar82._0_8_ * auVar85._0_8_;
          auVar73._8_8_ = auVar69._8_8_ * (double)auVar9._8_8_ - auVar65._8_8_ * auVar85._8_8_;
          auVar66._8_4_ = SUB84(auVar75._8_8_,0);
          auVar66._0_8_ = auVar75._0_8_;
          auVar66._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
          local_728._0_8_ =
               (double)auVar9._8_8_ * dVar77 + auVar76._0_8_ + auVar66._8_8_ + dVar3 + dVar7;
          local_728._8_8_ = auVar71._8_8_ * dVar79 + dVar68 + auVar73._0_8_ + dVar2 + dVar5;
          *(undefined1 (*) [16])pFVar53 = local_728;
          auVar76 = blendpd(auVar75,auVar73,2);
          local_718 = (double)auVar9._8_8_ * auVar82._0_8_ + dVar13 + auVar76._0_8_ + dVar4 + dVar6;
          *(double *)(pFVar53 + 0x10) = local_718;
          pFVar53 = pFVar53 + 0x18;
        } while (pFVar53 != pFVar51);
      }
      local_9e8.SourceVertices =
           (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(local_be8 + 8);
      local_9e8.SourceTriangles = &local_b90;
      UE::Geometry::
      TMeshQueries<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
      ::GetVolumeArea((TVector2<double> *)&local_738._s_0,&local_9e8);
      uVar16 = local_738._s_0.X;
      iVar43 = (int)local_bd8;
      local_aa8 = (FScriptContainerElement *)local_be8._8_8_;
      if (((int)local_bd8 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
        return pFVar26;
      }
      iStack_aa0 = iVar43;
      local_808._12_4_ = uStack_a9c;
      local_808.ArrayNum = iVar43;
      local_808.DataPtr = (TVector<double> *)local_aa8;
      `UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_3>::
      operator()(&local_b28,&local_808,(double)uVar16,pFVar38,(TTransform<double> *)0x0);
      pFVar23 = *ppFVar19;
      if (pFVar23 != (FDynamicMesh3 *)0x0) {
        iVar43 = (int)local_bd8;
        uVar34 = (ulonglong)(int)local_bd8;
        iVar33 = (pFVar23->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar23->VertexRefCounts).RefCounts.CurBlockUsed;
        pFVar53 = (FScriptContainerElement *)(local_be8._8_8_ + uVar34 * 0x18);
        pFVar51 = (FScriptContainerElement *)local_be8._8_8_;
        while( true ) {
          if ((int)uVar34 != iVar43) {
            local_d73 = 0;
            `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_d73);
          }
          if (pFVar51 == pFVar53) break;
          local_998._s_0.X = (double)*(undefined8 *)pFVar51;
          local_998._s_0.Y = (double)*(undefined8 *)(pFVar51 + 8);
          local_998._s_0.Z = (double)*(undefined8 *)(pFVar51 + 0x10);
          local_978 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_96c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_980 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_974 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          local_968 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_960 = 0;
          local_95e = 0;
          UE::Geometry::FDynamicMesh3::AppendVertex(*ppFVar19,(FVertexInfo *)&local_998._s_0);
          uVar34 = local_bd8 & 0xffffffff;
          pFVar51 = pFVar51 + 0x18;
        }
        iVar43 = local_b90.ArrayNum;
        uVar34 = (ulonglong)local_b90.ArrayNum;
        pFVar53 = local_b90.AllocatorInstance.Data + uVar34 * 0xc;
        FVar52.Data = local_b90.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar34 != iVar43) {
            local_d72 = 0;
            `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_d72);
          }
          pFVar59 = local_d20;
          if (FVar52.Data == pFVar53) break;
          local_c58 = *(undefined8 *)FVar52.Data;
          local_bfc._s_0.A = (int)local_c58 + iVar33;
          local_bfc._s_0.B = (int)((ulonglong)local_c58 >> 0x20) + iVar33;
          local_bfc._s_0.C = *(int *)(FVar52.Data + 8) + iVar33;
          UE::Geometry::FDynamicMesh3::AppendTriangle(*ppFVar19,(FIndex3i *)&local_bfc._s_0,0);
          uVar34 = local_b90._8_8_ & 0xffffffff;
          FVar52.Data = FVar52.Data + 0xc;
        }
      }
      local_be8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
      if (local_b60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b60.Data);
      }
      if (local_b70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b70.Data);
      }
      if (local_b80.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b80.Data);
      }
      if (local_b90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b90.AllocatorInstance.Data);
      }
      if (local_ba0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ba0.Data);
      }
      if (local_bb0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bb0.Data);
      }
      if (local_bc0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bc0.Data);
      }
      if (local_bd0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bd0.Data);
      }
      if ((FScriptContainerElement *)local_be8._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_be8._8_8_);
      }
      uVar78 = SUB84(__real_3fe0000000000000,0);
      uVar80 = (undefined4)((ulonglong)__real_3fe0000000000000 >> 0x20);
      pFVar38 = (FKShapeElem *)&pFVar38[2].RestOffset;
      uVar34 = (ulonglong)local_d60;
    }
    pFVar31 = (FKConvexElem *)(param_1->AggGeom).ConvexElems.AllocatorInstance.Data;
    iVar43 = (param_1->AggGeom).ConvexElems.ArrayNum;
    pTVar54 = &pFVar31->Transform;
    pFVar60 = pFVar31 + iVar43;
    while( true ) {
      if ((param_1->AggGeom).ConvexElems.ArrayNum != iVar43) {
        local_d71 = 0;
        `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d71);
      }
      __return_storage_ptr__ = (FGeometryScriptSimpleCollision *)local_c68;
      if (pFVar31 == pFVar60) break;
      local_568 = (pTVar54->Rotation).XY.m128d_f64[0];
      dStack_560 = (pTVar54->Rotation).XY.m128d_f64[1];
      local_a98.SourceTriangles =
           (TArray<int,TSizedDefaultAllocator<32>_> *)
           ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar54 + -1) + 1);
      local_558 = (pTVar54->Rotation).ZW.m128d_f64[0];
      dStack_550 = (pTVar54->Rotation).ZW.m128d_f64[1];
      auVar10 = *(undefined1 (*) [16])(pTVar54->Scale3D).XY.m128d_f64;
      dVar83 = (pTVar54->Scale3D).ZW.m128d_f64[0];
      local_548 = (pTVar54->Translation).XY.m128d_f64[0];
      dStack_540 = (pTVar54->Translation).XY.m128d_f64[1];
      local_538 = (pTVar54->Translation).ZW.m128d_f64[0];
      dStack_530 = (pTVar54->Translation).ZW.m128d_f64[1];
      local_a98.SourceVertices =
           (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar54 + -1);
      pTVar28 = UE::Geometry::
                TMeshQueries<UE::Geometry::TIndexMeshArrayAdapter<int,double,UE::Math::TVector<double>_>_>
                ::GetVolumeArea(&local_598,&local_a98);
      local_5f8.Rotation.XY.m128d_f64[0] = (pTVar54->Rotation).XY.m128d_f64[0];
      local_5f8.Rotation.XY.m128d_f64[1] = (pTVar54->Rotation).XY.m128d_f64[1];
      local_5f8.Rotation.ZW.m128d_f64[0] = (pTVar54->Rotation).ZW.m128d_f64[0];
      local_5f8.Rotation.ZW.m128d_f64[1] = (pTVar54->Rotation).ZW.m128d_f64[1];
      auVar15._4_8_ = auVar84._8_8_;
      auVar15._0_4_ = auVar10._4_4_;
      auVar85._0_8_ = auVar15._0_8_ << 0x20;
      auVar85._8_4_ = auVar10._8_4_;
      auVar85._12_4_ = auVar10._12_4_;
      local_5f8.Translation.XY.m128d_f64[0] = (pTVar54->Translation).XY.m128d_f64[0];
      local_5f8.Translation.XY.m128d_f64[1] = (pTVar54->Translation).XY.m128d_f64[1];
      local_5f8.Translation.ZW.m128d_f64[0] = (pTVar54->Translation).ZW.m128d_f64[0];
      local_5f8.Translation.ZW.m128d_f64[1] = (pTVar54->Translation).ZW.m128d_f64[1];
      local_5f8.Scale3D.XY.m128d_f64[0] = (pTVar54->Scale3D).XY.m128d_f64[0];
      local_5f8.Scale3D.XY.m128d_f64[1] = (pTVar54->Scale3D).XY.m128d_f64[1];
      dVar83 = auVar85._8_8_ * auVar10._0_8_ * dVar83 * (pTVar28->field0_0x0)._s_0.X;
      local_a88 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar54 + -1))
                  ->AllocatorInstance).Data;
      iVar33 = ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar54 + -1))->
               ArrayNum;
      auVar84._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar83 >> 0x20) ^ (uint)((ulonglong)uVar16 >> 0x20),
                            SUB84(dVar83,0) ^ (uint)uVar16);
      auVar84._8_4_ = auVar10._8_4_;
      auVar84._12_4_ = auVar10._12_4_;
      local_5f8.Scale3D.ZW.m128d_f64[0] = (pTVar54->Scale3D).ZW.m128d_f64[0];
      local_5f8.Scale3D.ZW.m128d_f64[1] = (pTVar54->Scale3D).ZW.m128d_f64[1];
      if ((iVar33 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
        return pFVar26;
      }
      local_7f8._12_4_ = uStack_a7c;
      local_7f8.ArrayNum = iVar33;
      local_7f8.DataPtr = (TVector<double> *)local_a88;
      iStack_a80 = iVar33;
      `UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_3>::
      operator()(&local_b28,&local_7f8,auVar84._0_8_,(FKShapeElem *)pFVar31,&local_5f8);
      if (local_d68 != (FDynamicMesh3 *)0x0) {
        UELocal::AppendConvexElemToCompactDynamicMesh(pFVar31,local_d68,0);
      }
      pFVar31 = pFVar31 + 1;
      pTVar54 = (TTransform<double> *)((longlong)(pTVar54 + 2) + 0x40);
    }
    iVar43 = (int)local_d40;
    lVar46 = (longlong)(int)local_d40;
    if ((int)local_d40 < 2) {
      FKAggregateGeom::FKAggregateGeom(local_c68,&param_1->AggGeom);
    }
    else {
      local_d30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d30.ArrayNum = 0;
      local_d30.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_d30,(int)local_d40,Default);
      if ((local_d30.ArrayNum < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
        return pFVar26;
      }
      uVar37 = 1;
      *(undefined4 *)local_d30.AllocatorInstance.Data = 0;
      if (((int)local_d40 < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
        return pFVar26;
      }
      iVar33 = *local_d48;
      if (1 < iVar43) {
        lVar47 = 1;
        do {
          uVar44 = 0;
          if ((int)uVar37 < local_d30.ArrayNum) {
            uVar44 = ~uVar37 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar12 = (code *)swi(3);
            pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
            return pFVar26;
          }
          *(int *)(local_d30.AllocatorInstance.Data + lVar47 * 4) = iVar33;
          uVar44 = 0;
          if ((int)uVar37 < (int)local_d40) {
            uVar44 = ~uVar37 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar21)) {
            pcVar12 = (code *)swi(3);
            pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
            return pFVar26;
          }
          uVar37 = uVar37 + 1;
          lVar48 = lVar47 + 1;
          iVar33 = iVar33 + local_d48[lVar47];
          lVar47 = lVar48;
        } while (lVar48 < lVar46);
      }
      pFVar59 = local_d20;
      pFVar49 = (FSphereCovering *)0x0;
      iVar33 = 0;
      local_d58.Data = (FScriptContainerElement *)0x0;
      local_d50 = 0;
      local_d4c = 0;
      pFVar39 = pFVar49;
      pFVar36 = pFVar49;
      if (local_d20->bConsiderAllPossibleMerges != false) {
        while( true ) {
          iVar33 = (int)pFVar39;
          iVar58 = (int)pFVar36;
          iVar50 = iVar58 + 1;
          if (iVar43 <= iVar50) break;
          do {
            iVar33 = (int)pFVar39;
            if (iVar33 == local_d4c) {
              iVar33 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&local_d58,&local_d4c);
            }
            local_d50 = iVar33 + 1;
            *(int *)(local_d58.Data + (longlong)iVar33 * 8) = iVar58;
            *(int *)(local_d58.Data + (longlong)iVar33 * 8 + 4) = iVar50;
            iVar50 = iVar50 + 1;
            pFVar39 = (FSphereCovering *)(ulonglong)local_d50;
          } while (iVar50 < iVar43);
          pFVar36 = (FSphereCovering *)(ulonglong)(iVar58 + 1);
        }
      }
      dVar83 = __real_3fb999999999999a;
      local_4c8._0_8_ = ___xmm_3f50624dd2f1a9fc3f50624dd2f1a9fc;
      local_4c8._8_8_ = _UNK_150afcb08;
      local_4c8._32_8_ = ___xmm_4065400000000000403e000000000000;
      local_4c8._40_8_ = _UNK_150b37cc8;
      local_4c8._96_8_ = 0.0;
      local_4c8._104_8_ = 0.0;
      local_4c8._16_8_ = ___xmm_3fefae147ae147ae3e7ad7f29abcaf48;
      local_4c8._24_8_ = _UNK_150b37cb8;
      local_4c8._112_8_ = ___xmm_3ff00000000000000000000000000000;
      local_4c8._120_8_ = _UNK_15061cbc8;
      local_4c8._48_8_ = __real_3fb999999999999a;
      local_4c8._64_8_ = 0.0;
      local_4c8._56_4_ = 0x32;
      local_4c8[0x3c] = true;
      local_4c8[0x3d] = true;
      local_4c8._72_4_ = -1;
      local_4c8._80_8_ = (FScriptContainerElement *)0x0;
      local_4c8._88_8_ = 0;
      local_4c8._176_8_ = (FScriptContainerElement *)0x0;
      local_4c8._184_4_ = 0;
      local_4c8._188_4_ = 0;
      local_408._0_8_ = (FScriptContainerElement *)0x0;
      local_408._8_8_ = 0;
      local_3e8 = (void *)0x0;
      local_3e0 = 0;
      local_3dc = 0x80;
      local_3d8 = 0xffffffff;
      local_3d4 = 0;
      local_3c8 = (void *)0x0;
      local_3c0 = 0;
      local_3b8.Data = (FScriptContainerElement *)0x0;
      local_3b0._0_4_ = 0;
      local_3b0._4_4_ = 0;
      local_3a8.Data = (FScriptContainerElement *)0x0;
      local_3a0._0_4_ = 0;
      local_3a0._4_4_ = 0;
      local_a68 = (TTuple<int,int> *)local_d58.Data;
      local_4c8._128_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_4c8._136_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_4c8._144_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_4c8._168_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      local_4c8._152_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      local_4c8._160_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      if ((iVar33 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar12 = (code *)swi(3);
        pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
        return pFVar26;
      }
      local_a78 = &local_d30;
      local_a70 = &local_c38;
      local_7e8._12_4_ = uStack_a5c;
      local_7e8.ArrayNum = iVar33;
      local_a50 = &local_a78;
      local_7e8.DataPtr = local_a68;
      local_a58 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_8>,UE::Math::TVector<double>,int,int>
                  ::Call;
      local_b00 = &local_d48;
      local_a40 = &local_b00;
      local_a48 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_7>,int,int>
                  ::Call;
      local_af8 = &local_c48;
      local_a30 = &local_af8;
      local_a38 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l2::<lambda_6>,double,int>
                  ::Call;
      iStack_a60 = iVar33;
      UE::Geometry::FConvexDecomposition3::InitializeFromHulls
                ((FConvexDecomposition3 *)local_4c8,local_d30.ArrayNum,
                 (TFunctionRef<double___cdecl(int)> *)&local_a38,
                 (TFunctionRef<int___cdecl(int)> *)&local_a48,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(int,int)> *)&local_a58,&local_7e8);
      local_c28.Position.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c28.Position.ArrayNum = 0;
      local_c28.Position.ArrayMax = 0;
      local_c28.Radius.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c28.Radius.ArrayNum = 0;
      local_c28.Radius.ArrayMax = 0;
      if (pFVar59->bComputeNegativeSpace != false) {
        UELocal::ConvertNegativeSpaceOptions
                  ((FNegativeSpaceSampleSettings *)local_2d8,&pFVar59->ComputeNegativeSpaceOptions);
        dVar62 = (double)local_2d8._24_8_ * (double)CONCAT44(uVar80,uVar78);
        if (dVar62 <= 0.0) {
          dVar62 = 0.0;
        }
        uVar61 = SUB84(dVar62,0);
        uVar67 = (undefined4)((ulonglong)dVar62 >> 0x20);
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
        TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_398,local_d68,true);
        local_af0.Tree = &local_398;
        local_af0.FWNBeta = __real_4000000000000000;
        local_af0.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_af0.FastWindingCache.ArrayNum = 0;
        local_af0.FastWindingCache.ArrayMax = 0;
        local_af0.FastWindingCacheOffset = 0;
        local_af0.FastWindingCacheMeshChangeStamp = 0;
        local_af0.FWNApproxOrder = 2;
        if ((local_398.RootIndex < 0) ||
           (uVar29 = UE::Geometry::FDynamicMesh3::GetChangeStamp(local_398.Mesh),
           local_398.MeshChangeStamp != uVar29)) {
          pTVar20 = local_af0.Tree;
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                    (local_af0.Tree,false);
          uVar29 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar20->Mesh);
          pTVar20->MeshChangeStamp = uVar29;
        }
        UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
                  (&local_af0);
        local_af0.FastWindingCacheMeshChangeStamp = (local_af0.Tree)->MeshChangeStamp;
        UE::Geometry::FSphereCovering::AddNegativeSpace
                  (&local_c28,&local_af0,(FNegativeSpaceSampleSettings *)local_2d8,false);
        if (local_af0.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_af0.FastWindingCache.AllocatorInstance.Data);
        }
        UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
        ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_398);
        if (local_258 != 0) {
          plVar35 = local_248;
          if (local_230 != (longlong *)0x0) {
            plVar35 = local_230;
          }
          (**(code **)(*plVar35 + 0x10))();
        }
        if (local_2d8._80_8_ != 0) {
          plVar35 = (longlong *)(local_2d8 + 0x60);
          if ((longlong *)local_2d8._120_8_ != (longlong *)0x0) {
            plVar35 = (longlong *)local_2d8._120_8_;
          }
          (**(code **)(*plVar35 + 0x10))();
        }
      }
      pFVar39 = (pFVar59->PrecomputedNegativeSpace).Spheres.Object;
      if ((pFVar39 != (FSphereCovering *)0x0) && (0 < (pFVar39->Position).ArrayNum)) {
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
        Append<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>
                  (&local_c28.Position,&pFVar39->Position);
        TArray<double,TSizedDefaultAllocator<32>_>::Append<double,TSizedDefaultAllocator<32>_>
                  (&local_c28.Radius,&pFVar39->Radius);
      }
      pFVar39 = &local_c28;
      if (local_c28.Position.ArrayNum < 1) {
        pFVar39 = pFVar49;
      }
      if (pFVar59->bConsiderAllPossibleMerges == false) {
        UE::Geometry::FConvexDecomposition3::InitializeProximityFromDecompositionBoundingBoxOverlaps
                  ((FConvexDecomposition3 *)local_4c8,__real_3fd0000000000000,dVar83,
                   (double)CONCAT44(uVar67,uVar61));
      }
      pFVar36 = (FSphereCovering *)(ulonglong)(uint)pFVar59->MaxShapeCount;
      if (pFVar59->MaxShapeCount < 0) {
        pFVar36 = pFVar49;
      }
      iVar33 = (int)pFVar36;
      local_4c8._72_4_ = iVar33 * iVar33 + 1000;
      UE::Geometry::FConvexDecomposition3::MergeBest
                ((FConvexDecomposition3 *)local_4c8,iVar33,pFVar59->ErrorTolerance,
                 pFVar59->MinThicknessTolerance,true,false,iVar33,pFVar39,(TTransform<double> *)0x0)
      ;
      __return_storage_ptr__ = (FGeometryScriptSimpleCollision *)local_c68;
      if (local_4c8._88_4_ == iVar43) {
        FKAggregateGeom::FKAggregateGeom(local_c68,&param_1->AggGeom);
        if (local_c28.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c28.Radius.AllocatorInstance.Data);
        }
        if (local_c28.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c28.Position.AllocatorInstance.Data);
        }
        if (local_3a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data);
        }
        if (local_3b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data);
        }
        local_3c0 = 0;
        if (local_3c8 != (void *)0x0) {
          FMemory::Free(local_3c8);
        }
        bVar21 = local_408._12_4_ != 0;
        local_408._8_8_ = (ulonglong)(uint)local_408._12_4_ << 0x20;
        if (bVar21) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,0,(ForAnyElementType *)local_408,0,(int *)(local_408 + 0xc));
        }
        local_3d8 = 0xffffffff;
        local_3d4 = 0;
        local_3e0 = 0;
        if (0x80 < local_3dc) {
          local_3dc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_408 + 0x10),0);
        }
        if (local_3e8 != (void *)0x0) {
          FMemory::Free(local_3e8);
        }
        if ((FScriptContainerElement *)local_408._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_408._0_8_);
        }
        if ((FScriptContainerElement *)local_4c8._176_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_4c8._176_8_);
        }
        pFVar53 = (FScriptContainerElement *)local_4c8._80_8_;
        for (iVar43 = local_4c8._88_4_; iVar43 != 0; iVar43 = iVar43 + -1) {
          pFVar23 = *(FDynamicMesh3 **)pFVar53;
          if (pFVar23 != (FDynamicMesh3 *)0x0) {
            pFVar51 = pFVar23[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
            if (pFVar51 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar51);
            }
            pFVar51 = pFVar23[1].Vertices.Blocks.AllocatorInstance.Data;
            if (pFVar51 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar51);
            }
            if ((void *)pFVar23[1]._padding_ != (void *)0x0) {
              FMemory::Free((void *)pFVar23[1]._padding_);
            }
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(pFVar23);
            ::operator_delete(pFVar23,0x2e0);
          }
          pFVar53 = pFVar53 + 8;
        }
        local_4c8._92_4_ = (undefined4)((ulonglong)local_4c8._88_8_ >> 0x20);
        bVar21 = local_4c8._92_4_ != 0;
        local_4c8._88_8_ = (ulonglong)(uint)local_4c8._92_4_ << 0x20;
        if (bVar21) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)(local_4c8 + 0x50),0,(int *)(local_4c8 + 0x5c));
        }
        if ((FScriptContainerElement *)local_4c8._80_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_4c8._80_8_);
        }
      }
      else {
        *local_ab8 = true;
        if ((((param_1->AggGeom).TaperedCapsuleElems.ArrayNum != 0) ||
            ((param_1->AggGeom).SkinnedLevelSetElems.ArrayNum != 0)) ||
           ((param_1->AggGeom).LevelSetElems.ArrayNum != 0)) {
          pFVar30 = FText::AsLocalizable_Advanced_LocText
                              (&local_7d8,L"UGeometryScriptLibrary_CollisionFunctions",
                               L"PrimitiveFunctions_AppendSimpleCollisionShapes Unsupported Shapes",
                               L"MergeSimpleCollisionShapes: Merging for Tapered Capsules and Level Set collision is not yet supported; these shapes will be copied without considering them for merging."
                              );
          UE::Geometry::AppendWarning(local_b08,OperationFailed,pFVar30);
          if (local_7d8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_7d8.TextData.Reference + 0x10))();
          }
          iVar43 = (param_1->AggGeom).TaperedCapsuleElems.ArrayNum;
          pFVar40 = (FKTaperedCapsuleElem *)
                    (param_1->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data;
          pFVar55 = pFVar40 + iVar43;
          while( true ) {
            if ((param_1->AggGeom).TaperedCapsuleElems.ArrayNum != iVar43) {
              local_d70 = 0;
              `TCheckedPointerIterator<FKTaperedCapsuleElem_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_d70);
            }
            if (pFVar40 == pFVar55) break;
            if (((local_d08.TaperedCapsuleElems.AllocatorInstance.Data <= pFVar40) &&
                (pFVar40 < (FKTaperedCapsuleElem *)
                           (local_d08.TaperedCapsuleElems.AllocatorInstance.Data +
                           (longlong)local_d08.TaperedCapsuleElems.ArrayMax * 0x70))) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar12 = (code *)swi(3);
              pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
              return pFVar26;
            }
            if (local_d08.TaperedCapsuleElems.ArrayNum == local_d08.TaperedCapsuleElems.ArrayMax) {
              local_d08.TaperedCapsuleElems.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,&local_d08.TaperedCapsuleElems.AllocatorInstance,
                              &local_d08.TaperedCapsuleElems.ArrayMax);
            }
            lVar46 = (longlong)local_d08.TaperedCapsuleElems.ArrayNum;
            local_d08.TaperedCapsuleElems.ArrayNum = local_d08.TaperedCapsuleElems.ArrayNum + 1;
            FKTaperedCapsuleElem::FKTaperedCapsuleElem
                      ((FKTaperedCapsuleElem *)
                       (local_d08.TaperedCapsuleElems.AllocatorInstance.Data + lVar46 * 0x70),
                       pFVar40);
            pFVar40 = pFVar40 + 1;
          }
          iVar43 = (param_1->AggGeom).SkinnedLevelSetElems.ArrayNum;
          pFVar41 = (FKSkinnedLevelSetElem *)
                    (param_1->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data;
          pFVar56 = pFVar41 + iVar43;
          while( true ) {
            if ((param_1->AggGeom).SkinnedLevelSetElems.ArrayNum != iVar43) {
              local_d6f = 0;
              `TCheckedPointerIterator<FKSkinnedLevelSetElem_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_d6f);
            }
            if (pFVar41 == pFVar56) break;
            if (((local_d08.SkinnedLevelSetElems.AllocatorInstance.Data <= pFVar41) &&
                (pFVar41 < (FKSkinnedLevelSetElem *)
                           (local_d08.SkinnedLevelSetElems.AllocatorInstance.Data +
                           (longlong)local_d08.SkinnedLevelSetElems.ArrayMax * 0x38))) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar12 = (code *)swi(3);
              pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
              return pFVar26;
            }
            if (local_d08.SkinnedLevelSetElems.ArrayNum == local_d08.SkinnedLevelSetElems.ArrayMax)
            {
              local_d08.SkinnedLevelSetElems.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&local_d08.SkinnedLevelSetElems.AllocatorInstance,
                              &local_d08.SkinnedLevelSetElems.ArrayMax);
            }
            this = (FKSkinnedLevelSetElem *)
                   (local_d08.SkinnedLevelSetElems.AllocatorInstance.Data +
                   (longlong)local_d08.SkinnedLevelSetElems.ArrayNum * 0x38);
            this->_padding_ = 0;
            *(undefined4 *)&this->_padding_ = 0;
            *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
            *(undefined4 *)((longlong)&this->_padding_ + 4) = 9;
            *(undefined1 *)((longlong)&this->_padding_ + 1) = 3;
            *(undefined4 *)&this->_padding_ = 6;
            this->_padding_ = (longlong)this;
            this->_padding_ = (longlong)&___7FKSkinnedLevelSetElem__6B_;
            (this->WeightedLatticeLevelSet).Reference =
                 (TWeightedLatticeImplicitObject<Chaos::FLevelSet> *)0x0;
            local_d08.SkinnedLevelSetElems.ArrayNum = local_d08.SkinnedLevelSetElems.ArrayNum + 1;
            FKSkinnedLevelSetElem::CloneElem(this,pFVar41);
            pFVar41 = pFVar41 + 1;
          }
          iVar43 = (param_1->AggGeom).LevelSetElems.ArrayNum;
          pFVar42 = (FKLevelSetElem *)(param_1->AggGeom).LevelSetElems.AllocatorInstance.Data;
          pFVar57 = pFVar42 + iVar43;
          while( true ) {
            if ((param_1->AggGeom).LevelSetElems.ArrayNum != iVar43) {
              local_d6e = 0;
              `TCheckedPointerIterator<FKLevelSetElem_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_d6e);
            }
            if (pFVar42 == pFVar57) break;
            if (((local_d08.LevelSetElems.AllocatorInstance.Data <= pFVar42) &&
                (pFVar42 < (FKLevelSetElem *)
                           (local_d08.LevelSetElems.AllocatorInstance.Data +
                           (longlong)local_d08.LevelSetElems.ArrayMax * 0xa0))) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar12 = (code *)swi(3);
              pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
              return pFVar26;
            }
            if (local_d08.LevelSetElems.ArrayNum == local_d08.LevelSetElems.ArrayMax) {
              local_d08.LevelSetElems.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10a0,&local_d08.LevelSetElems.AllocatorInstance,
                              &local_d08.LevelSetElems.ArrayMax);
            }
            lVar46 = (longlong)local_d08.LevelSetElems.ArrayNum;
            local_d08.LevelSetElems.ArrayNum = local_d08.LevelSetElems.ArrayNum + 1;
            FKLevelSetElem::FKLevelSetElem
                      ((FKLevelSetElem *)
                       (local_d08.LevelSetElems.AllocatorInstance.Data + lVar46 * 0xa0),pFVar42);
            pFVar42 = pFVar42 + 1;
          }
        }
        pFVar39 = pFVar49;
        iVar43 = local_4c8._88_4_;
        if (0 < (int)local_4c8._88_4_) {
          do {
            uVar44 = (uint)pFVar49;
            uVar37 = 0;
            if ((int)uVar44 < iVar43) {
              uVar37 = ~uVar44 >> 0x1f;
            }
            if ((uVar37 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar12 = (code *)swi(3);
              pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
              return pFVar26;
            }
            uVar37 = *(uint *)(*(longlong *)(local_4c8._80_8_ + (longlong)&pFVar39->Position) +
                              0x250);
            if ((int)uVar37 < 0) {
LAB_14cddf157:
              if (local_d08.ConvexElems.ArrayNum == local_d08.ConvexElems.ArrayMax) {
                local_d08.ConvexElems.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x100,0x10,&local_d08.ConvexElems.AllocatorInstance,
                                &local_d08.ConvexElems.ArrayMax);
              }
              lVar46 = (longlong)local_d08.ConvexElems.ArrayNum;
              local_d08.ConvexElems.ArrayNum = local_d08.ConvexElems.ArrayNum + 1;
              pFVar31 = FKConvexElem::FKConvexElem
                                  ((FKConvexElem *)
                                   (local_d08.ConvexElems.AllocatorInstance.Data + lVar46 * 0x100));
              pTVar32 = UE::Geometry::FConvexDecomposition3::GetVertices<double>
                                  ((FConvexDecomposition3 *)local_4c8,&local_7c8,uVar44,true);
              pTVar1 = &pFVar31->VertexData;
              if (pTVar1 != pTVar32) {
                pFVar53 = (pTVar1->AllocatorInstance).Data;
                if (pFVar53 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar53);
                }
                (pTVar1->AllocatorInstance).Data = (pTVar32->AllocatorInstance).Data;
                (pTVar32->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
                (pFVar31->VertexData).ArrayNum = pTVar32->ArrayNum;
                (pFVar31->VertexData).ArrayMax = pTVar32->ArrayMax;
                pTVar32->ArrayNum = 0;
                pTVar32->ArrayMax = 0;
              }
              if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7c8.AllocatorInstance.Data);
              }
              FKConvexElem::UpdateElemBox(pFVar31);
            }
            else {
              uVar22 = 0;
              if ((int)uVar37 < (int)local_d10) {
                uVar22 = ~uVar37 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar21)) {
                pcVar12 = (code *)swi(3);
                pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
                return pFVar26;
              }
              pFVar31 = *(FKConvexElem **)((longlong)local_d18 + (longlong)(int)uVar37 * 8);
              iVar43 = *(int *)&pFVar31->field_0x14;
              if (iVar43 == 0) {
                if (((local_d08.SphereElems.AllocatorInstance.Data <= pFVar31) &&
                    (pFVar31 < (FKConvexElem *)
                               (local_d08.SphereElems.AllocatorInstance.Data +
                               (longlong)local_d08.SphereElems.ArrayMax * 0x50))) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar12 = (code *)swi(3);
                  pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
                  return pFVar26;
                }
                if (local_d08.SphereElems.ArrayNum == local_d08.SphereElems.ArrayMax) {
                  local_d08.SphereElems.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x850,(ForAnyElementType *)&local_d08,
                                  &local_d08.SphereElems.ArrayMax);
                }
                pFVar53 = local_d08.SphereElems.AllocatorInstance.Data +
                          (longlong)local_d08.SphereElems.ArrayNum * 0x50;
                *(undefined ***)pFVar53 = &___7FKShapeElem__6B_;
                *(undefined4 *)(pFVar53 + 8) = *(undefined4 *)&pFVar31->field_0x8;
                *(undefined8 *)(pFVar53 + 0xc) = *(undefined8 *)&pFVar31->field_0xc;
                *(undefined4 *)(pFVar53 + 0x14) = *(undefined4 *)&pFVar31->field_0x14;
                pFVar53[0x18] =
                     (FScriptContainerElement)
                     ((byte)pFVar53[0x18] ^ ((byte)pFVar53[0x18] ^ pFVar31->field_0x18) & 1);
                pFVar53[0x19] = (FScriptContainerElement)pFVar31->field_0x19;
                *(undefined4 *)(pFVar53 + 0x20) = 6;
                *(FScriptContainerElement **)(pFVar53 + 0x28) = pFVar53;
                *(undefined ***)pFVar53 = &___7FKSphereElem__6B_;
                uVar16 = *(undefined8 *)&(pFVar31->VertexData).ArrayNum;
                *(FScriptContainerElement **)(pFVar53 + 0x30) =
                     (pFVar31->VertexData).AllocatorInstance.Data;
                *(undefined8 *)(pFVar53 + 0x38) = uVar16;
                *(FScriptContainerElement **)(pFVar53 + 0x40) =
                     (pFVar31->IndexData).AllocatorInstance.Data;
                *(int *)(pFVar53 + 0x48) = (pFVar31->IndexData).ArrayNum;
                local_d08.SphereElems.ArrayNum = local_d08.SphereElems.ArrayNum + 1;
              }
              else if (iVar43 == 1) {
                if (((local_d08.BoxElems.AllocatorInstance.Data <= pFVar31) &&
                    (pFVar31 < (FKConvexElem *)
                               (local_d08.BoxElems.AllocatorInstance.Data +
                               (longlong)local_d08.BoxElems.ArrayMax * 0x70))) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar12 = (code *)swi(3);
                  pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
                  return pFVar26;
                }
                if (local_d08.BoxElems.ArrayNum == local_d08.BoxElems.ArrayMax) {
                  local_d08.BoxElems.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x870,&local_d08.BoxElems.AllocatorInstance,
                                  &local_d08.BoxElems.ArrayMax);
                }
                pFVar53 = local_d08.BoxElems.AllocatorInstance.Data +
                          (longlong)local_d08.BoxElems.ArrayNum * 0x70;
                *(undefined ***)pFVar53 = &___7FKShapeElem__6B_;
                *(undefined4 *)(pFVar53 + 8) = *(undefined4 *)&pFVar31->field_0x8;
                *(undefined8 *)(pFVar53 + 0xc) = *(undefined8 *)&pFVar31->field_0xc;
                *(undefined4 *)(pFVar53 + 0x14) = *(undefined4 *)&pFVar31->field_0x14;
                pFVar53[0x18] =
                     (FScriptContainerElement)
                     ((byte)pFVar53[0x18] ^ ((byte)pFVar53[0x18] ^ pFVar31->field_0x18) & 1);
                pFVar53[0x19] = (FScriptContainerElement)pFVar31->field_0x19;
                *(undefined4 *)(pFVar53 + 0x20) = 6;
                *(FScriptContainerElement **)(pFVar53 + 0x28) = pFVar53;
                *(undefined ***)pFVar53 = &___7FKBoxElem__6B_;
                uVar16 = *(undefined8 *)&(pFVar31->VertexData).ArrayNum;
                *(FScriptContainerElement **)(pFVar53 + 0x30) =
                     (pFVar31->VertexData).AllocatorInstance.Data;
                *(undefined8 *)(pFVar53 + 0x38) = uVar16;
                *(FScriptContainerElement **)(pFVar53 + 0x40) =
                     (pFVar31->IndexData).AllocatorInstance.Data;
                dVar83 = (pFVar31->ElemBox).Min.field0_0x0._s_0.X;
                *(undefined8 *)(pFVar53 + 0x48) = *(undefined8 *)&(pFVar31->IndexData).ArrayNum;
                *(double *)(pFVar53 + 0x50) = dVar83;
                *(double *)(pFVar53 + 0x58) = (pFVar31->ElemBox).Min.field0_0x0._s_0.Y;
                *(undefined4 *)(pFVar53 + 0x60) =
                     *(undefined4 *)((longlong)&(pFVar31->ElemBox).Min.field0_0x0 + 0x10);
                *(undefined4 *)(pFVar53 + 100) =
                     *(undefined4 *)((longlong)&(pFVar31->ElemBox).Min.field0_0x0 + 0x14);
                *(undefined4 *)(pFVar53 + 0x68) = *(undefined4 *)&(pFVar31->ElemBox).Max.field0_0x0;
                local_d08.BoxElems.ArrayNum = local_d08.BoxElems.ArrayNum + 1;
              }
              else if (iVar43 == 2) {
                if (((local_d08.SphylElems.AllocatorInstance.Data <= pFVar31) &&
                    (pFVar31 < (FKConvexElem *)
                               (local_d08.SphylElems.AllocatorInstance.Data +
                               (longlong)local_d08.SphylElems.ArrayMax * 0x68))) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar12 = (code *)swi(3);
                  pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
                  return pFVar26;
                }
                if (local_d08.SphylElems.ArrayNum == local_d08.SphylElems.ArrayMax) {
                  local_d08.SphylElems.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x868,&local_d08.SphylElems.AllocatorInstance,
                                  &local_d08.SphylElems.ArrayMax);
                }
                pFVar53 = local_d08.SphylElems.AllocatorInstance.Data +
                          (longlong)local_d08.SphylElems.ArrayNum * 0x68;
                *(undefined ***)pFVar53 = &___7FKShapeElem__6B_;
                *(undefined4 *)(pFVar53 + 8) = *(undefined4 *)&pFVar31->field_0x8;
                *(undefined8 *)(pFVar53 + 0xc) = *(undefined8 *)&pFVar31->field_0xc;
                *(undefined4 *)(pFVar53 + 0x14) = *(undefined4 *)&pFVar31->field_0x14;
                pFVar53[0x18] =
                     (FScriptContainerElement)
                     ((byte)pFVar53[0x18] ^ ((byte)pFVar53[0x18] ^ pFVar31->field_0x18) & 1);
                pFVar53[0x19] = (FScriptContainerElement)pFVar31->field_0x19;
                *(undefined4 *)(pFVar53 + 0x20) = 6;
                *(FScriptContainerElement **)(pFVar53 + 0x28) = pFVar53;
                *(undefined ***)pFVar53 = &___7FKSphylElem__6B_;
                uVar16 = *(undefined8 *)&(pFVar31->VertexData).ArrayNum;
                *(FScriptContainerElement **)(pFVar53 + 0x30) =
                     (pFVar31->VertexData).AllocatorInstance.Data;
                *(undefined8 *)(pFVar53 + 0x38) = uVar16;
                *(FScriptContainerElement **)(pFVar53 + 0x40) =
                     (pFVar31->IndexData).AllocatorInstance.Data;
                dVar83 = (pFVar31->ElemBox).Min.field0_0x0._s_0.X;
                *(undefined8 *)(pFVar53 + 0x48) = *(undefined8 *)&(pFVar31->IndexData).ArrayNum;
                *(double *)(pFVar53 + 0x50) = dVar83;
                *(double *)(pFVar53 + 0x58) = (pFVar31->ElemBox).Min.field0_0x0._s_0.Y;
                *(undefined4 *)(pFVar53 + 0x60) =
                     *(undefined4 *)((longlong)&(pFVar31->ElemBox).Min.field0_0x0 + 0x10);
                *(undefined4 *)(pFVar53 + 100) =
                     *(undefined4 *)((longlong)&(pFVar31->ElemBox).Min.field0_0x0 + 0x14);
                local_d08.SphylElems.ArrayNum = local_d08.SphylElems.ArrayNum + 1;
              }
              else {
                if (iVar43 != 3) {
                  local_d6d[0] = 0;
                  `UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l78::
                  <lambda_9>::operator()(local_d6d);
                  goto LAB_14cddf157;
                }
                if (((local_d08.ConvexElems.AllocatorInstance.Data <= pFVar31) &&
                    (pFVar31 < (FKConvexElem *)
                               (local_d08.ConvexElems.AllocatorInstance.Data +
                               (longlong)local_d08.ConvexElems.ArrayMax * 0x100))) &&
                   (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar21)) {
                  pcVar12 = (code *)swi(3);
                  pFVar26 = (FGeometryScriptSimpleCollision *)(*pcVar12)();
                  return pFVar26;
                }
                if (local_d08.ConvexElems.ArrayNum == local_d08.ConvexElems.ArrayMax) {
                  local_d08.ConvexElems.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x100,0x10,&local_d08.ConvexElems.AllocatorInstance,
                                  &local_d08.ConvexElems.ArrayMax);
                }
                lVar46 = (longlong)local_d08.ConvexElems.ArrayNum;
                local_d08.ConvexElems.ArrayNum = local_d08.ConvexElems.ArrayNum + 1;
                FKConvexElem::FKConvexElem
                          ((FKConvexElem *)
                           (local_d08.ConvexElems.AllocatorInstance.Data + lVar46 * 0x100),pFVar31);
              }
            }
            pFVar49 = (FSphereCovering *)(ulonglong)(uVar44 + 1);
            pFVar39 = (FSphereCovering *)&(pFVar39->Position).ArrayNum;
            iVar43 = local_4c8._88_4_;
          } while ((int)(uVar44 + 1) < (int)local_4c8._88_4_);
        }
        __return_storage_ptr__ = (FGeometryScriptSimpleCollision *)local_c68;
        FKAggregateGeom::FKAggregateGeom(local_c68,&local_d08);
        if (local_c28.Radius.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c28.Radius.AllocatorInstance.Data);
        }
        if (local_c28.Position.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c28.Position.AllocatorInstance.Data);
        }
        if (local_3a8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3a8.Data);
        }
        if (local_3b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b8.Data);
        }
        local_3c0 = 0;
        if (local_3c8 != (void *)0x0) {
          FMemory::Free(local_3c8);
        }
        TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_408);
        if ((FScriptContainerElement *)local_4c8._176_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_4c8._176_8_);
        }
        TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
        ::
        ~TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                  ((TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
                    *)(local_4c8 + 0x50));
      }
      if (local_d58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d58.Data);
      }
      if (local_d30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d30.AllocatorInstance.Data);
      }
    }
    if (local_d68 != (FDynamicMesh3 *)0x0) {
      (**(code **)local_d68->_padding_)(local_d68,1);
    }
    if (local_d18 != (void *)0x0) {
      FMemory::Free(local_d18);
    }
    if (local_c48 != (void *)0x0) {
      FMemory::Free(local_c48);
    }
    if (local_d48 != (int *)0x0) {
      FMemory::Free(local_d48);
    }
    if (local_c38 != (void *)0x0) {
      FMemory::Free(local_c38);
    }
    FKAggregateGeom::~FKAggregateGeom(&local_d08);
  }
  return __return_storage_ptr__;
}

// ResetDynamicMeshCollision @ 14cde3650

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision
          (UDynamicMeshComponent *param_1,bool param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  undefined7 in_register_00000011;
  FText local_18;
  
  if (param_1 != (UDynamicMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cde36aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0xd78))(param_1,CONCAT71(in_register_00000011,1));
    return;
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_CollisionFunctions",
                      L"ResetDynamicMeshCollision_InvalidInput2",
                      L"ResetDynamicMeshCollision: Component is Null");
  UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// ResetSimpleCollision @ 14cde36c0

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::ResetSimpleCollision
          (FGeometryScriptSimpleCollision *param_1)

{
  int *piVar1;
  
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)(param_1->AggGeom).BoxElems.AllocatorInstance.Data,
             (param_1->AggGeom).BoxElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).BoxElems.ArrayMax;
  (param_1->AggGeom).BoxElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(param_1->AggGeom).BoxElems.AllocatorInstance,0,piVar1);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)(param_1->AggGeom).ConvexElems.AllocatorInstance.Data,
             (param_1->AggGeom).ConvexElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).ConvexElems.ArrayMax;
  (param_1->AggGeom).ConvexElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,0x10,0,&(param_1->AggGeom).ConvexElems.AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)(param_1->AggGeom).SphylElems.AllocatorInstance.Data,
             (param_1->AggGeom).SphylElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).SphylElems.ArrayMax;
  (param_1->AggGeom).SphylElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(param_1->AggGeom).SphylElems.AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)(param_1->AggGeom).SphereElems.AllocatorInstance.Data,
             (param_1->AggGeom).SphereElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).SphereElems.ArrayMax;
  (param_1->AggGeom).SphereElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)param_1,0,piVar1);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)(param_1->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data,
             (param_1->AggGeom).TaperedCapsuleElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).TaperedCapsuleElems.ArrayMax;
  (param_1->AggGeom).TaperedCapsuleElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,&(param_1->AggGeom).TaperedCapsuleElems.AllocatorInstance,0,piVar1);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)(param_1->AggGeom).LevelSetElems.AllocatorInstance.Data,
             (param_1->AggGeom).LevelSetElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).LevelSetElems.ArrayMax;
  (param_1->AggGeom).LevelSetElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,0,&(param_1->AggGeom).LevelSetElems.AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)(param_1->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data
             ,(param_1->AggGeom).SkinnedLevelSetElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).SkinnedLevelSetElems.ArrayMax;
  (param_1->AggGeom).SkinnedLevelSetElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(param_1->AggGeom).SkinnedLevelSetElems.AllocatorInstance,0,piVar1);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)(param_1->AggGeom).MLLevelSetElems.AllocatorInstance.Data,
             (param_1->AggGeom).MLLevelSetElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).MLLevelSetElems.ArrayMax;
  (param_1->AggGeom).MLLevelSetElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,&(param_1->AggGeom).MLLevelSetElems.AllocatorInstance,0,piVar1);
  }
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             (param_1->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance.Data,
             (param_1->AggGeom).SkinnedTriangleMeshElems.ArrayNum);
  piVar1 = &(param_1->AggGeom).SkinnedTriangleMeshElems.ArrayMax;
  (param_1->AggGeom).SkinnedTriangleMeshElems.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(param_1->AggGeom).SkinnedTriangleMeshElems.AllocatorInstance,0,piVar1);
  }
  FKAggregateGeom::FreeRenderInfo(&param_1->AggGeom);
  return;
}

// SetDynamicMeshCollisionFromMesh @ 14cde41c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh
          (UDynamicMesh *param_1,UDynamicMeshComponent *param_2,
          FGeometryScriptCollisionFromMeshOptions *param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined1 local_c8 [16];
  FKSphereElem *local_b8;
  undefined8 local_b0;
  FKBoxElem *local_a8;
  undefined8 local_a0;
  FKSphylElem *local_98;
  undefined8 local_90;
  FKConvexElem *local_88;
  undefined8 local_80;
  FKTaperedCapsuleElem *local_78;
  undefined8 local_70;
  FKLevelSetElem *local_68;
  undefined8 local_60;
  FKSkinnedLevelSetElem *local_58;
  undefined8 local_50;
  FKMLLevelSetElem *local_48;
  undefined8 local_40;
  FKSkinnedTriangleMeshElem *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  FKSphereElem **local_18;
  FGeometryScriptCollisionFromMeshOptions *local_10;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c8,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetDynamicMeshCollisionFromMesh_InvalidInput1",
                        L"SetDynamicMeshCollisionFromMesh: FromDynamicMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_2 == (UDynamicMeshComponent *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_c8,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetDynamicMeshCollisionFromMesh_InvalidInput2",
                        L"SetDynamicMeshCollisionFromMesh: ToDynamicMeshComponent is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
  }
  else {
    local_b8 = (FKSphereElem *)0x0;
    local_b0 = 0;
    local_a8 = (FKBoxElem *)0x0;
    local_a0 = 0;
    local_98 = (FKSphylElem *)0x0;
    local_90 = 0;
    local_88 = (FKConvexElem *)0x0;
    local_80 = 0;
    local_78 = (FKTaperedCapsuleElem *)0x0;
    local_70 = 0;
    local_68 = (FKLevelSetElem *)0x0;
    local_60 = 0;
    local_58 = (FKSkinnedLevelSetElem *)0x0;
    local_50 = 0;
    local_48 = (FKMLLevelSetElem *)0x0;
    local_40 = 0;
    local_38 = (FKSkinnedTriangleMeshElem *)0x0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = &local_b8;
    local_c8._8_8_ = &local_18;
    local_c8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_10 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_c8);
    (**(code **)(param_2->_padding_ + 0xd70))(param_2,&local_b8,1);
    DestructItems<FKSkinnedTriangleMeshElem,int>(local_38,(int)local_30);
    if (local_38 != (FKSkinnedTriangleMeshElem *)0x0) {
      FMemory::Free(local_38);
    }
    DestructItems<FKMLLevelSetElem,int>(local_48,(int)local_40);
    if (local_48 != (FKMLLevelSetElem *)0x0) {
      FMemory::Free(local_48);
    }
    DestructItems<FKSkinnedLevelSetElem,int>(local_58,(int)local_50);
    if (local_58 != (FKSkinnedLevelSetElem *)0x0) {
      FMemory::Free(local_58);
    }
    DestructItems<FKLevelSetElem,int>(local_68,(int)local_60);
    if (local_68 != (FKLevelSetElem *)0x0) {
      FMemory::Free(local_68);
    }
    DestructItems<FKTaperedCapsuleElem,int>(local_78,(int)local_70);
    if (local_78 != (FKTaperedCapsuleElem *)0x0) {
      FMemory::Free(local_78);
    }
    DestructItems<FKConvexElem,int>(local_88,(int)local_80);
    if (local_88 != (FKConvexElem *)0x0) {
      FMemory::Free(local_88);
    }
    DestructItems<FKSphylElem,int>(local_98,(int)local_90);
    if (local_98 != (FKSphylElem *)0x0) {
      FMemory::Free(local_98);
    }
    DestructItems<FKBoxElem,int>(local_a8,(int)local_a0);
    if (local_a8 != (FKBoxElem *)0x0) {
      FMemory::Free(local_a8);
    }
    DestructItems<FKSphereElem,int>(local_b8,(int)local_b0);
    if (local_b8 != (FKSphereElem *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  return param_1;
}

// SetSimpleCollisionOfDynamicMeshComponent @ 14cde4dd0

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::SetSimpleCollisionOfDynamicMeshComponent
          (FGeometryScriptSimpleCollision *param_1,UDynamicMeshComponent *param_2,
          FGeometryScriptSetSimpleCollisionOptions param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  undefined7 in_register_00000081;
  FText local_18;
  
  if (param_2 != (UDynamicMeshComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cde4e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2->_padding_ + 0xd70))(param_2,param_1,CONCAT71(in_register_00000081,1));
    return;
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_CollisionFunctions",
                      L"SetSimpleCollisionOfDynamicMeshComponent_InvalidComponent",
                      L"SetSimpleCollisionOfDynamicMeshComponent: Component is Null");
  UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// SetSimpleCollisionOfStaticMesh @ 14cde4e50

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::SetSimpleCollisionOfStaticMesh
          (FGeometryScriptSimpleCollision *param_1,UStaticMesh *param_2,
          FGeometryScriptSetSimpleCollisionOptions param_3,
          FGeometryScriptSetStaticMeshCollisionOptions param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptSimpleCollision *local_res10 [3];
  undefined1 local_18 [24];
  
  if (param_2 == (UStaticMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetSimpleCollisionOfStaticMesh_InvalidStaticMesh",
                        L"SetSimpleCollisionOfStaticMesh: Input Mesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
      return;
    }
  }
  else {
    local_18._8_8_ = local_res10;
    local_18._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UELocal::SetStaticMeshSimpleCollision'::__l2::<lambda_1>,bool,UStaticMesh_*,UBodySetup_*>
         ::Call;
    local_res10[0] = param_1;
    UELocal::UpdateStaticMeshCollision
              (param_2,(TFunctionRef<bool___cdecl(UStaticMesh_*,UBodySetup_*)> *)local_18,
               param_3.bEmitTransaction,param_4.bMarkAsCustomized);
  }
  return;
}

// SetStaticMeshCollisionFromComponent @ 14cde4ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromComponent
          (UStaticMesh *param_1,UPrimitiveComponent *param_2,
          FGeometryScriptSetSimpleCollisionOptions param_3,
          FGeometryScriptSetStaticMeshCollisionOptions param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong local_res8;
  undefined1 local_18 [16];
  
  if (param_1 == (UStaticMesh *)0x0) {
    pwVar3 = L"SetStaticMeshCollisionFromComponent: UpdateStaticMeshAsset is Null";
    pwVar2 = L"SetStaticMeshCollisionFromComponent_InvalidStaticMesh";
  }
  else if (param_2 == (UPrimitiveComponent *)0x0) {
    pwVar3 = L"SetStaticMeshCollisionFromComponent: SourceComponent is Null";
    pwVar2 = L"SetStaticMeshCollisionFromComponent_InvalidSourceComponent";
  }
  else {
    local_res8 = (**(code **)(*(longlong *)param_2 + 0x800))(param_2);
    if (local_res8 != 0) {
      local_res8 = local_res8 + 0x38;
      local_18._8_8_ = &local_res8;
      local_18._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UELocal::SetStaticMeshSimpleCollision'::__l2::<lambda_1>,bool,UStaticMesh_*,UBodySetup_*>
           ::Call;
      UELocal::UpdateStaticMeshCollision
                (param_1,(TFunctionRef<bool___cdecl(UStaticMesh_*,UBodySetup_*)> *)local_18,
                 param_3.bEmitTransaction,param_4.bMarkAsCustomized);
      return;
    }
    pwVar3 = L"SetStaticMeshCollisionFromComponent: SourceComponent BodySetup is Null";
    pwVar2 = L"SetStaticMeshCollisionFromComponent_InvalidBodySetup";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_18,L"UGeometryScriptLibrary_CollisionFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
  if ((ITextData *)local_18._0_8_ == (ITextData *)0x0) {
    return;
  }
  (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
  return;
}

// SetStaticMeshCollisionFromMesh @ 14cde4fe0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh
          (UDynamicMesh *param_1,UStaticMesh *param_2,
          FGeometryScriptCollisionFromMeshOptions *param_3,
          FGeometryScriptSetStaticMeshCollisionOptions param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FKSphereElem **local_res8;
  undefined1 local_d8 [16];
  FKSphereElem *local_c8;
  undefined8 local_c0;
  FKBoxElem *local_b8;
  undefined8 local_b0;
  FKSphylElem *local_a8;
  undefined8 local_a0;
  FKConvexElem *local_98;
  undefined8 local_90;
  FKTaperedCapsuleElem *local_88;
  undefined8 local_80;
  FKLevelSetElem *local_78;
  undefined8 local_70;
  FKSkinnedLevelSetElem *local_68;
  undefined8 local_60;
  FKMLLevelSetElem *local_58;
  undefined8 local_50;
  FKSkinnedTriangleMeshElem *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  FKSphereElem **local_28;
  FGeometryScriptCollisionFromMeshOptions *local_20;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_d8,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetStaticMeshCollisionFromMesh_InvalidInput1",
                        L"SetStaticMeshCollisionFromMesh: FromDynamicMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else if (param_2 == (UStaticMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_d8,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetStaticMeshCollisionFromMesh_InvalidInput2",
                        L"SetStaticMeshCollisionFromMesh: ToStaticMeshAsset is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_d8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_d8._0_8_ + 0x10))();
    }
  }
  else {
    local_c8 = (FKSphereElem *)0x0;
    local_c0 = 0;
    local_b8 = (FKBoxElem *)0x0;
    local_b0 = 0;
    local_a8 = (FKSphylElem *)0x0;
    local_a0 = 0;
    local_98 = (FKConvexElem *)0x0;
    local_90 = 0;
    local_88 = (FKTaperedCapsuleElem *)0x0;
    local_80 = 0;
    local_78 = (FKLevelSetElem *)0x0;
    local_70 = 0;
    local_68 = (FKSkinnedLevelSetElem *)0x0;
    local_60 = 0;
    local_58 = (FKMLLevelSetElem *)0x0;
    local_50 = 0;
    local_48 = (FKSkinnedTriangleMeshElem *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = &local_c8;
    local_d8._8_8_ = &local_28;
    local_d8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_20 = param_3;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_d8);
    local_res8 = &local_c8;
    local_d8._8_8_ = &local_res8;
    local_d8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UELocal::SetStaticMeshSimpleCollision'::__l2::<lambda_1>,bool,UStaticMesh_*,UBodySetup_*>
         ::Call;
    UELocal::UpdateStaticMeshCollision
              (param_2,(TFunctionRef<bool___cdecl(UStaticMesh_*,UBodySetup_*)> *)local_d8,
               param_3->bEmitTransaction,param_4.bMarkAsCustomized);
    DestructItems<FKSkinnedTriangleMeshElem,int>(local_48,(int)local_40);
    if (local_48 != (FKSkinnedTriangleMeshElem *)0x0) {
      FMemory::Free(local_48);
    }
    DestructItems<FKMLLevelSetElem,int>(local_58,(int)local_50);
    if (local_58 != (FKMLLevelSetElem *)0x0) {
      FMemory::Free(local_58);
    }
    DestructItems<FKSkinnedLevelSetElem,int>(local_68,(int)local_60);
    if (local_68 != (FKSkinnedLevelSetElem *)0x0) {
      FMemory::Free(local_68);
    }
    DestructItems<FKLevelSetElem,int>(local_78,(int)local_70);
    if (local_78 != (FKLevelSetElem *)0x0) {
      FMemory::Free(local_78);
    }
    DestructItems<FKTaperedCapsuleElem,int>(local_88,(int)local_80);
    if (local_88 != (FKTaperedCapsuleElem *)0x0) {
      FMemory::Free(local_88);
    }
    DestructItems<FKConvexElem,int>(local_98,(int)local_90);
    if (local_98 != (FKConvexElem *)0x0) {
      FMemory::Free(local_98);
    }
    DestructItems<FKSphylElem,int>(local_a8,(int)local_a0);
    if (local_a8 != (FKSphylElem *)0x0) {
      FMemory::Free(local_a8);
    }
    DestructItems<FKBoxElem,int>(local_b8,(int)local_b0);
    if (local_b8 != (FKBoxElem *)0x0) {
      FMemory::Free(local_b8);
    }
    DestructItems<FKSphereElem,int>(local_c8,(int)local_c0);
    if (local_c8 != (FKSphereElem *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return param_1;
}

// SetStaticMeshCustomComplexCollision @ 14cde5260

bool __cdecl
UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCustomComplexCollision
          (UStaticMesh *param_1,UStaticMesh *param_2,bool param_3,bool param_4,
          UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  if (param_1 == (UStaticMesh *)0x0) {
    pwVar3 = L"SetStaticMeshCustomComplexCollision: StaticMeshAsset is Null";
    pwVar2 = L"SetStaticMeshCustomComplexCollision_InvalidInput";
  }
  else {
    if (param_2 != (UStaticMesh *)0x0) {
      return false;
    }
    pwVar3 = L"SetStaticMeshCustomComplexCollision: StaticMeshCollisionAsset is Null";
    pwVar2 = L"SetStaticMeshCustomComplexCollision_InvalidInput2";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UGeometryScriptLibrary_CollisionFunctions",pwVar2,pwVar3);
  UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

// SimplifyConvexHulls @ 14cde59b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::SimplifyConvexHulls
          (FGeometryScriptSimpleCollision *param_1,
          FGeometryScriptConvexHullSimplificationOptions *param_2,bool *param_3,
          UGeometryScriptDebug *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  FRefCountVector *pFVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  bool bVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  FFunctionStorage *pFVar29;
  longlong *plVar30;
  undefined ***pppuVar31;
  longlong *plVar32;
  ForAnyElementType FVar33;
  ulonglong uVar34;
  uint uVar35;
  FKConvexElem *this;
  longlong lVar36;
  undefined1 auStackY_b08 [32];
  undefined1 local_ab8 [8];
  longlong local_ab0;
  TArray<int,TSizedDefaultAllocator<32>_> local_aa8;
  uint local_a98 [2];
  undefined8 local_a90;
  uint uStack_a88;
  int iStack_a84;
  FGeometryScriptSimpleCollision *local_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  bool *local_a60;
  FGeometryScriptConvexHullSimplificationOptions *local_a58;
  undefined8 local_a50;
  uint uStack_a48;
  uint uStack_a44;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined **local_a28;
  FDynamicMesh3 *local_a20;
  undefined1 *local_a18;
  FClusterOptions local_a10;
  code *local_9f8;
  undefined **local_9e8;
  FDynamicMesh3 *local_9e0;
  undefined ***local_9d0;
  code *local_9c8 [2];
  FFunctionStorage local_9b8;
  FDynamicMesh3 local_998;
  FDynamicMesh3 local_768;
  undefined1 local_538 [48];
  undefined **local_508;
  code *local_500;
  undefined ***local_4f0;
  double local_4e8;
  TDynamicVector<int,512> local_4e0;
  TDynamicVector<UE::Math::TVector<double>,512> local_4c8;
  TDynamicVector<UE::Math::TVector<double>,512> local_4b0;
  TDynamicVector<int,512> local_498;
  undefined8 local_480;
  BaseIterator local_478;
  code *local_468;
  undefined8 uStack_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 local_448;
  undefined4 uStack_444;
  longlong *plStack_440;
  code *local_438 [2];
  longlong local_428 [3];
  longlong *local_410;
  FRefCountVector *local_408;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  uint uStack_3f0;
  uint uStack_3ec;
  code *local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  longlong *plStack_3c0;
  code *local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_398;
  longlong *plStack_390;
  code *local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  longlong *plStack_360;
  undefined **local_358;
  FDynamicMesh3 *local_350;
  FMeshConstraints local_348;
  char local_290;
  undefined ***local_288;
  undefined8 uStack_280;
  longlong local_278;
  longlong local_268 [3];
  longlong *local_250;
  undefined8 local_248;
  void *pvStack_240;
  undefined8 local_238;
  undefined2 local_230;
  undefined1 local_22e;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  ESimplificationCollapseModes local_218;
  undefined4 local_214;
  EGeometricErrorCriteria local_204;
  double local_200;
  float local_1f8;
  double local_1f0;
  undefined8 local_1e8;
  ulong64 local_1e0;
  double local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0 [32];
  void *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  void *local_180;
  undefined4 local_178;
  ForAnyElementType local_170;
  undefined8 local_168;
  ForAnyElementType local_160;
  undefined8 local_158;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  FIndexPriorityQueue local_138;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_b08;
  uVar35 = 0;
  *param_3 = false;
  uVar17 = _UNK_1528cb7a8;
  uVar16 = ___xmm_3e45798ee00000000000000000000000;
  dVar15 = __real_4070000000000000;
  dVar14 = __real_7fefffffffffffff;
  dVar13 = __real_3f91df46a2529d39;
  dVar12 = __real_3f1a36e2eb1c432d;
  uVar11 = _UNK_150631d98;
  lVar10 = ___xmm_00000000ffffffff0000008000000000;
  dVar9 = __real_3e45798ee2308c3a;
  dVar8 = __real_3ff0000000000000;
  iVar26 = (param_1->AggGeom).ConvexElems.ArrayNum;
  if (0 < iVar26) {
    local_ab0 = 0;
    local_a80 = param_1;
    local_a60 = param_3;
    local_a58 = param_2;
    do {
      lVar36 = local_ab0;
      uVar25 = 0;
      if ((int)uVar35 < iVar26) {
        uVar25 = ~uVar35 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this = (FKConvexElem *)
             ((param_1->AggGeom).ConvexElems.AllocatorInstance.Data + lVar36 * 0x100);
      FKConvexElem::ComputeChaosConvexIndices(this,false);
      iVar26 = param_2->MinTargetFaceCount;
      if (iVar26 < 4) {
        iVar26 = 4;
      }
      UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_998);
      bVar24 = UELocal::AppendConvexElemToCompactDynamicMesh(this,&local_998,iVar26);
      iVar27 = local_998.TriangleRefCounts.UsedCount;
      if (bVar24) {
        if (param_2->SimplificationMethod == MeshQSlim) {
          local_200 = 0.0;
          local_278 = 0;
          local_350 = &local_998;
          local_250 = (longlong *)0x0;
          local_238 = 0;
          local_22e = 0;
          local_22c = 0;
          local_218 = MinimalQuadricPositionError;
          local_204 = None;
          local_1e0 = 0;
          local_1d0.Data = (FScriptContainerElement *)0x0;
          local_1c8._0_4_ = 0;
          local_1c8._4_4_ = 0;
          local_1c0._0_8_ = (FScriptContainerElement *)0x0;
          local_1c0._8_8_ = 0;
          local_1a0 = (void *)0x0;
          local_180 = (void *)0x0;
          local_178 = 0;
          local_170.Data = (FScriptContainerElement *)0x0;
          local_168._0_4_ = 0;
          local_168._4_4_ = 0;
          local_160.Data = (FScriptContainerElement *)0x0;
          local_158._0_4_ = 0;
          local_158._4_4_ = 0;
          local_148.Data = (FScriptContainerElement *)0x0;
          local_140._0_4_ = 0;
          local_140._4_4_ = 0;
          local_358 = &
                      ___7__TMeshSimplification_V__TVolPresQuadricError_N_Geometry_UE___Geometry_UE__6B_
          ;
          local_1f0 = dVar14;
          local_1d8 = dVar15;
          local_290 = '\0';
          local_288 = (undefined ***)0x0;
          uStack_280 = 0;
          local_248 = 0;
          pvStack_240 = (void *)0x0;
          local_230 = 0x100;
          local_228 = uVar16;
          uStack_220 = uVar17;
          local_214._0_1_ = false;
          local_214._1_1_ = true;
          local_214._2_1_ = true;
          local_214._3_1_ = false;
          local_1f8 = 3.4028235e+38;
          local_1e8._0_4_ = 0x7fffffff;
          local_1e8._4_4_ = TriangleCount;
          local_198 = lVar10;
          uStack_190 = uVar11;
          UE::Geometry::FIndexPriorityQueue::FIndexPriorityQueue(&local_138);
          local_f8.Data = (FScriptContainerElement *)0x0;
          local_f0._0_4_ = 0;
          local_f0._4_4_ = 0;
          local_150 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
          if ((local_998.AttributeSet.Ptr != (FDynamicMeshAttributeSet *)0x0) &&
             (local_150 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0,
             0 < ((local_998.AttributeSet.Ptr)->NormalLayers).Array.ArrayNum)) {
            local_150 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                         ((local_998.AttributeSet.Ptr)->NormalLayers).Array.AllocatorInstance.Data;
          }
          local_200 = (double)param_2->SimplificationDistanceThreshold;
          local_218 = MinimalExistingVertexError;
          local_204 = PredictedPointToProjectionTarget;
          UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_768,&local_998);
          local_4e8 = dVar9;
          local_508 = &
                      ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
          ;
          local_538._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
          local_500 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
                      MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
          local_538._16_8_ = 0;
          local_538._32_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
               ::Call;
          local_538._24_4_ = 3;
          local_4f0 = (undefined ***)0x0;
          local_4e0.CurBlock = 0;
          local_4e0.CurBlockUsed = 0;
          local_4e0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4e0.Blocks.ArrayNum = 0;
          local_4e0.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_4e0);
          local_4c8.CurBlock = 0;
          local_4c8.CurBlockUsed = 0;
          local_4c8.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4c8.Blocks.ArrayNum = 0;
          local_4c8.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_4c8)
          ;
          local_4b0.CurBlock = 0;
          local_4b0.CurBlockUsed = 0;
          local_4b0.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4b0.Blocks.ArrayNum = 0;
          local_4b0.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_4b0)
          ;
          local_498.CurBlock = 0;
          local_498.CurBlockUsed = 0;
          local_498.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_498.Blocks.ArrayNum = 0;
          local_498.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_498);
          local_538._8_8_ = &local_768;
          local_480._0_4_ = -1;
          local_480._4_4_ = -1;
          local_538._16_8_ = 0;
          UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
                    ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_538,false);
          local_538._16_8_ =
               UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_538._8_8_);
          local_a28 = &___7FMeshProjectionTarget_Geometry_UE__6B_;
          local_a20 = &local_768;
          local_a18 = local_538;
          local_288 = &local_a28;
          UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>::
          SimplifyToTriangleCount
                    ((TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_> *)&local_358,
                     iVar26);
          if (local_998.TriangleRefCounts.UsedCount == iVar27) {
            local_a28 = &___7IProjectionTarget_Geometry_UE__6B_;
            UE::Geometry::TDynamicVector<int,512>::Empty(&local_498,0);
            if (local_498.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Blocks.AllocatorInstance.Data);
            }
            UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_4b0,0);
            if (local_4b0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4b0.Blocks.AllocatorInstance.Data);
            }
            UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_4c8,0);
            if (local_4c8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4c8.Blocks.AllocatorInstance.Data);
            }
            UE::Geometry::TDynamicVector<int,512>::Empty(&local_4e0,0);
            if (local_4e0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4e0.Blocks.AllocatorInstance.Data);
            }
            if ((code *)local_538._32_8_ != (code *)0x0) {
              pppuVar31 = &local_508;
              if (local_4f0 != (undefined ***)0x0) {
                pppuVar31 = local_4f0;
              }
              (*(code *)(*pppuVar31)[2])();
            }
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_768);
            if (local_f8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data);
            }
            if (local_138.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.id_to_index.AllocatorInstance.Data);
            }
            UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
            ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_138.nodes);
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data);
            }
            if (local_160.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data);
            }
            if (local_170.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_170.Data);
            }
            local_178 = 0;
            if (local_180 != (void *)0x0) {
              FMemory::Free(local_180);
            }
            iVar26 = SUB84(local_1c0._8_8_,4);
            local_1c0._8_8_ = local_1c0._8_8_ & 0xffffffff00000000;
            if (iVar26 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,8,0,(ForAnyElementType *)local_1c0,0,(int *)(local_1c0 + 0xc));
            }
            uVar25 = local_198._4_4_;
            uStack_190 = 0xffffffff;
            local_198 = (ulonglong)local_198._4_4_ << 0x20;
            if (0x80 < uVar25) {
              local_198 = 0x8000000000;
              TBitArray<FDefaultBitArrayAllocator>::Realloc
                        ((TBitArray<FDefaultBitArrayAllocator> *)(local_1c0 + 0x10),0);
            }
            if (local_1a0 != (void *)0x0) {
              FMemory::Free(local_1a0);
            }
            if ((FScriptContainerElement *)local_1c0._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_1c0._0_8_);
            }
            if (local_1d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data);
            }
            local_358 = &___7FMeshRefinerBase_Geometry_UE__6B_;
            if (pvStack_240 != (void *)0x0) {
              FMemory::Free(pvStack_240);
            }
            if (local_278 != 0) {
              plVar32 = local_268;
              if (local_250 != (longlong *)0x0) {
                plVar32 = local_250;
              }
              (**(code **)(*plVar32 + 0x10))();
            }
            if (local_290 != '\0') {
              UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_348);
            }
            UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_998);
            goto LAB_14cde68b1;
          }
          if (local_998.VertexRefCounts.UsedCount < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum
                      ((ulonglong)(uint)local_998.VertexRefCounts.UsedCount);
          }
          piVar1 = &(this->VertexData).ArrayMax;
          (this->VertexData).ArrayNum = 0;
          if ((this->VertexData).ArrayMax < local_998.VertexRefCounts.UsedCount) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_998.VertexRefCounts.UsedCount,
                       &(this->VertexData).AllocatorInstance,0,piVar1);
          }
          local_9d0 = (undefined ***)0x0;
          local_9e8 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
          ;
          local_9e0 = &local_998;
          local_9b8.HeapAllocation = (FFunctionStorage *)0x0;
          local_9f8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                      ::Call;
          local_9c8[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                         ::Call;
          UE::Core::Private::Function::
          TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
          CloneToEmptyStorage(&local_9e8,&local_9b8);
          local_408 = &local_998.VertexRefCounts;
          local_438[0] = (code *)0x0;
          local_410 = (longlong *)0x0;
          TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
                    ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_438,
                     (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_9c8);
          if (local_9c8[0] != (code *)0x0) {
            pFVar29 = &local_9b8;
            if (local_9b8.HeapAllocation != (FFunctionStorage *)0x0) {
              pFVar29 = local_9b8.HeapAllocation;
            }
            (**(code **)(*(longlong *)pFVar29->InlineAllocation + 0x10))();
          }
          if (local_9f8 != (code *)0x0) {
            pppuVar31 = &local_9e8;
            if (local_9d0 != (undefined ***)0x0) {
              pppuVar31 = local_9d0;
            }
            (*(code *)(*pppuVar31)[2])();
          }
          local_a90 = local_408;
          pFVar19 = local_a90;
          uStack_a88 = 0;
          iStack_a84 = (local_408->RefCounts).CurBlock * 0x200 + (local_408->RefCounts).CurBlockUsed
          ;
          if ((iStack_a84 != 0) &&
             (pFVar4 = (local_408->RefCounts).Blocks.AllocatorInstance.Data,
             0xfffd < (ushort)(**(short **)pFVar4 - 1U))) {
            uVar34 = 1;
            uStack_a88 = 1;
            if (1 < iStack_a84) {
              do {
                sVar3 = *(short *)(*(longlong *)(pFVar4 + (uVar34 >> 9) * 8) +
                                  (ulonglong)(uStack_a88 & 0x1ff) * 2);
                lVar36 = local_ab0;
                if ((sVar3 != 0) && (sVar3 != -1)) break;
                uStack_a88 = (int)uVar34 + 1;
                uVar34 = (ulonglong)uStack_a88;
              } while ((int)uStack_a88 < iStack_a84);
            }
          }
          local_468 = (code *)0x0;
          plStack_440 = (longlong *)0x0;
          local_3b8 = local_438[0];
          plStack_390 = (longlong *)0x0;
          local_a90._0_4_ = SUB84(local_408,0);
          uVar18 = (undefined4)local_a90;
          local_a90._4_4_ = (undefined4)((ulonglong)local_408 >> 0x20);
          local_478.Vector._0_4_ = (undefined4)local_a90;
          local_478.Vector._4_4_ = local_a90._4_4_;
          local_478.Index = uStack_a88;
          local_478.LastIndex = iStack_a84;
          local_a90 = pFVar19;
          if (local_438[0] != (code *)0x0) {
            plVar32 = local_428;
            if (local_410 != (longlong *)0x0) {
              plVar32 = local_410;
            }
            (**(code **)*plVar32)(uVar18,&local_3a8);
          }
          plVar32 = plStack_440;
          uVar23 = uStack_44c;
          uVar22 = uStack_450;
          uVar21 = uStack_454;
          uVar18 = local_458;
          uVar20 = uStack_460;
          pcVar7 = local_468;
          uVar28 = CONCAT44(uStack_444,local_448);
          local_468 = local_3b8;
          uStack_460 = uStack_3b0;
          local_448 = (undefined4)local_398;
          uStack_444 = local_398._4_4_;
          plStack_440 = plStack_390;
          local_458 = local_3a8;
          uStack_454 = uStack_3a4;
          uStack_450 = uStack_3a0;
          uStack_44c = uStack_39c;
          local_3b8 = pcVar7;
          uStack_3b0 = uVar20;
          local_3a8 = uVar18;
          uStack_3a4 = uVar21;
          uStack_3a0 = uVar22;
          uStack_39c = uVar23;
          local_398 = uVar28;
          plStack_390 = plVar32;
          if (pcVar7 != (code *)0x0) {
            plVar30 = (longlong *)&local_3a8;
            if (plVar32 != (longlong *)0x0) {
              plVar30 = plVar32;
            }
            (**(code **)(*plVar30 + 0x10))();
          }
          uStack_a48 = (local_408->RefCounts).CurBlockUsed + (local_408->RefCounts).CurBlock * 0x200
          ;
          local_3e8 = (code *)0x0;
          plStack_3c0 = (longlong *)0x0;
          local_388 = local_438[0];
          plStack_360 = (longlong *)0x0;
          local_a50._0_4_ = SUB84(local_408,0);
          local_a50._4_4_ = (undefined4)((ulonglong)local_408 >> 0x20);
          local_3f8 = (undefined4)local_a50;
          uStack_3f4 = local_a50._4_4_;
          uStack_3f0 = uStack_a48;
          uStack_3ec = uStack_a48;
          local_a50 = local_408;
          uStack_a44 = uStack_a48;
          if (local_438[0] != (code *)0x0) {
            plVar32 = local_428;
            if (local_410 != (longlong *)0x0) {
              plVar32 = local_410;
            }
            (**(code **)*plVar32)();
          }
          plVar32 = plStack_3c0;
          uVar23 = uStack_3cc;
          uVar22 = uStack_3d0;
          uVar21 = uStack_3d4;
          uVar18 = local_3d8;
          uVar20 = uStack_3e0;
          pcVar7 = local_3e8;
          uVar28 = CONCAT44(uStack_3c4,local_3c8);
          local_3e8 = local_388;
          uStack_3e0 = uStack_380;
          local_3c8 = (undefined4)local_368;
          uStack_3c4 = local_368._4_4_;
          plStack_3c0 = plStack_360;
          local_3d8 = local_378;
          uStack_3d4 = uStack_374;
          uStack_3d0 = uStack_370;
          uStack_3cc = uStack_36c;
          local_388 = pcVar7;
          uStack_380 = uVar20;
          local_378 = uVar18;
          uStack_374 = uVar21;
          uStack_370 = uVar22;
          uStack_36c = uVar23;
          local_368 = uVar28;
          plStack_360 = plVar32;
          if (pcVar7 != (code *)0x0) {
            plVar30 = (longlong *)&local_378;
            if (plVar32 != (longlong *)0x0) {
              plVar30 = plVar32;
            }
            (**(code **)(*plVar30 + 0x10))();
          }
          if (local_478.Index != uStack_3f0) {
            do {
              local_a98[0] = local_478.Index;
              UE::Core::Private::Function::CheckCallable(local_468);
              pcVar7 = local_468;
              plVar32 = (longlong *)&local_458;
              if (plStack_440 != (longlong *)0x0) {
                plVar32 = plStack_440;
              }
              uVar28 = (**(code **)(*plVar32 + 8))();
              (*pcVar7)(&local_a40,uVar28,local_a98);
              pFVar4 = (this->VertexData).AllocatorInstance.Data;
              if (((pFVar4 <= (FScriptContainerElement *)&local_a40) &&
                  ((FScriptContainerElement *)&local_a40 < pFVar4 + (longlong)*piVar1 * 0x18)) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar24)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar26 = (this->VertexData).ArrayNum;
              if (iVar26 == *piVar1) {
                iVar26 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x818,&(this->VertexData).AllocatorInstance,piVar1);
              }
              (this->VertexData).ArrayNum = iVar26 + 1;
              pFVar5 = (this->VertexData).AllocatorInstance.Data;
              pFVar4 = pFVar5 + (longlong)iVar26 * 0x18;
              *(undefined8 *)pFVar4 = local_a40;
              *(undefined8 *)(pFVar4 + 8) = uStack_a38;
              *(undefined8 *)(pFVar5 + (longlong)iVar26 * 0x18 + 0x10) = local_a30;
              UE::Geometry::FRefCountVector::BaseIterator::goto_next(&local_478);
            } while (local_478.Index != uStack_3f0);
          }
          if (local_3e8 != (code *)0x0) {
            plVar32 = (longlong *)&local_3d8;
            if (plStack_3c0 != (longlong *)0x0) {
              plVar32 = plStack_3c0;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if (local_468 != (code *)0x0) {
            plVar32 = (longlong *)&local_458;
            if (plStack_440 != (longlong *)0x0) {
              plVar32 = plStack_440;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if (local_438[0] != (code *)0x0) {
            plVar32 = local_428;
            if (local_410 != (longlong *)0x0) {
              plVar32 = local_410;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          local_a28 = &___7IProjectionTarget_Geometry_UE__6B_;
          UE::Geometry::TDynamicVector<int,512>::Empty(&local_498,0);
          if (local_498.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_498.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_4b0,0);
          if (local_4b0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b0.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_4c8,0);
          if (local_4c8.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Blocks.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<int,512>::Empty(&local_4e0,0);
          if (local_4e0.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4e0.Blocks.AllocatorInstance.Data);
          }
          if ((code *)local_538._32_8_ != (code *)0x0) {
            pppuVar31 = &local_508;
            if (local_4f0 != (undefined ***)0x0) {
              pppuVar31 = local_4f0;
            }
            (*(code *)(*pppuVar31)[2])();
          }
          UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_768);
          if (local_f8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data);
          }
          if (local_138.id_to_index.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.id_to_index.AllocatorInstance.Data);
          }
          UE::Geometry::TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>::
          ~TDynamicVector<UE::Geometry::FIndexPriorityQueue::FQueueNode,512>(&local_138.nodes);
          if (local_148.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data);
          }
          if (local_160.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data);
          }
          if (local_170.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data);
          }
          local_178 = 0;
          if (local_180 != (void *)0x0) {
            FMemory::Free(local_180);
          }
          TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TQuadricError<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_1c0);
          if (local_1d0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data);
          }
          local_358 = &___7FMeshRefinerBase_Geometry_UE__6B_;
          if (pvStack_240 != (void *)0x0) {
            FMemory::Free(pvStack_240);
          }
          if (local_278 != 0) {
            plVar32 = local_268;
            if (local_250 != (longlong *)0x0) {
              plVar32 = local_250;
            }
            (**(code **)(*plVar32 + 0x10))();
          }
          if (local_290 != '\0') {
            UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_348);
          }
        }
        else {
          local_aa8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_aa8.ArrayNum = 0;
          local_aa8.ArrayMax = 0;
          local_a10.bApplyNormalToleranceToClusters = true;
          local_a10.SmallFaceAreaThreshold = dVar12;
          local_a10.TargetMinGroups = iVar26;
          local_a10.NormalOneMinusCosTolerance =
               cos((double)param_2->SimplificationAngleThreshold * dVar13);
          local_a10.NormalOneMinusCosTolerance = dVar8 - local_a10.NormalOneMinusCosTolerance;
          UE::Geometry::FaceNormalClustering::ComputeClusterCornerVertices
                    (&local_998,&local_aa8,&local_a10,
                     (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
          if (local_aa8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(local_aa8._8_8_ & 0xffffffff);
          }
          piVar1 = &(this->VertexData).ArrayMax;
          (this->VertexData).ArrayNum = 0;
          iVar26 = local_aa8.ArrayNum;
          if ((this->VertexData).ArrayMax < local_aa8.ArrayNum) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,local_aa8.ArrayNum,&(this->VertexData).AllocatorInstance,0,piVar1);
            iVar26 = local_aa8.ArrayNum;
          }
          pFVar4 = local_aa8.AllocatorInstance.Data + (longlong)iVar26 * 4;
          FVar33.Data = local_aa8.AllocatorInstance.Data;
          iVar27 = iVar26;
          while( true ) {
            if (iVar27 != iVar26) {
              local_ab8[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_ab8);
            }
            if (FVar33.Data == pFVar4) break;
            pFVar5 = (this->VertexData).AllocatorInstance.Data;
            uVar34 = (ulonglong)(*(uint *)FVar33.Data & 0x1ff);
            puVar2 = (undefined8 *)
                     (*(longlong *)
                       (local_998.Vertices.Blocks.AllocatorInstance.Data +
                       (ulonglong)(*(uint *)FVar33.Data >> 9) * 8) + uVar34 * 0x18);
            local_a78 = *puVar2;
            uStack_a70 = puVar2[1];
            local_a68 = *(undefined8 *)
                         (*(longlong *)
                           (local_998.Vertices.Blocks.AllocatorInstance.Data +
                           (ulonglong)(*(uint *)FVar33.Data >> 9) * 8) + 0x10 + uVar34 * 0x18);
            if (((pFVar5 <= (FScriptContainerElement *)&local_a78) &&
                ((FScriptContainerElement *)&local_a78 < pFVar5 + (longlong)*piVar1 * 0x18)) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar24)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar27 = (this->VertexData).ArrayNum;
            if (iVar27 == *piVar1) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&(this->VertexData).AllocatorInstance,piVar1);
            }
            FVar33.Data = FVar33.Data + 4;
            (this->VertexData).ArrayNum = iVar27 + 1;
            pFVar6 = (this->VertexData).AllocatorInstance.Data;
            pFVar5 = pFVar6 + (longlong)iVar27 * 0x18;
            *(undefined8 *)pFVar5 = local_a78;
            *(undefined8 *)(pFVar5 + 8) = uStack_a70;
            *(undefined8 *)(pFVar6 + (longlong)iVar27 * 0x18 + 0x10) = local_a68;
            iVar27 = local_aa8.ArrayNum;
          }
          lVar36 = local_ab0;
          param_1 = local_a80;
          if (local_aa8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_aa8.AllocatorInstance.Data);
            lVar36 = local_ab0;
            param_1 = local_a80;
          }
        }
        FKConvexElem::UpdateElemBox(this);
        *local_a60 = true;
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_998);
        param_2 = local_a58;
      }
      else {
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_998);
      }
LAB_14cde68b1:
      iVar26 = (param_1->AggGeom).ConvexElems.ArrayNum;
      local_ab0 = lVar36 + 1;
      uVar35 = uVar35 + 1;
    } while ((int)uVar35 < iVar26);
  }
  return;
}

// StaticMeshHasCustomizedCollision @ 14cde7080

bool __cdecl
UGeometryScriptLibrary_CollisionFunctions::StaticMeshHasCustomizedCollision(UStaticMesh *param_1)

{
  return false;
}

// StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions @ 14cde70a0

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::
StaticRegisterNativesUGeometryScriptLibrary_CollisionFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_CollisionFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransformSimpleCollisionShapes @ 14cde74c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGeometryScriptSimpleCollision * __cdecl
UGeometryScriptLibrary_CollisionFunctions::TransformSimpleCollisionShapes
          (FGeometryScriptSimpleCollision *__return_storage_ptr__,
          FGeometryScriptSimpleCollision *param_1,TTransform<double> *param_2,
          FGeometryScriptTransformCollisionOptions *param_3,bool *param_4,
          UGeometryScriptDebug *param_5)

{
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar3;
  FKSphereElem *pFVar4;
  FScriptContainerElement *pFVar5;
  FKTaperedCapsuleElem *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  bool bVar18;
  __m128d *p_Var19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  bool bVar25;
  int iVar26;
  undefined4 uVar27;
  uint uVar28;
  undefined4 extraout_EAX;
  FGeometryScriptSimpleCollision *pFVar29;
  FText *pFVar30;
  FGeometryScriptSimpleCollision *extraout_RAX;
  FGeometryScriptSimpleCollision *extraout_RAX_00;
  undefined7 extraout_var;
  FGeometryScriptSimpleCollision *extraout_RAX_01;
  undefined7 extraout_var_00;
  TQuat<double> *pTVar31;
  TRotator<double> *pTVar32;
  FKConvexElem *pFVar33;
  FKLevelSetElem *pFVar34;
  TBox<double> *pTVar35;
  uint uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined1 *puVar41;
  TTransform<double> *pTVar42;
  FScriptContainerElement *pFVar43;
  int *piVar44;
  FKConvexElem *pFVar45;
  FKTaperedCapsuleElem *pFVar46;
  TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar47;
  FScriptContainerElement *pFVar48;
  TTransform<double> *pTVar49;
  FGeometryScriptSimpleCollision *pFVar50;
  FKTaperedCapsuleElem *pFVar51;
  FKLevelSetElem *this;
  ulonglong uVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  longlong lVar56;
  undefined4 uVar57;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar103;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar58;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined4 uVar120;
  undefined8 in_XMM1_Qb;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined4 uVar121;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  double dVar149;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  double dVar150;
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  double dVar167;
  double dVar168;
  undefined1 auVar169 [16];
  double dVar180;
  undefined4 uVar183;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  double dVar181;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  double dVar182;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  __m128d _Var187;
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined4 uVar204;
  undefined4 uVar205;
  undefined4 uVar206;
  undefined4 uVar207;
  uint uVar208;
  undefined4 uVar209;
  undefined4 uVar210;
  undefined4 uVar211;
  undefined4 uVar212;
  undefined4 uVar213;
  double dVar214;
  double dVar215;
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  double dVar219;
  uint uVar220;
  uint uVar221;
  undefined1 auStackY_8b8 [32];
  undefined1 local_867;
  undefined1 local_866;
  undefined1 local_865;
  undefined1 local_864;
  undefined1 local_863;
  undefined1 local_862;
  undefined1 local_861;
  undefined1 local_860;
  undefined1 local_85f [7];
  FKLevelSetElem *local_858;
  FScriptContainerElement *local_850;
  FGeometryScriptSimpleCollision *local_848;
  UGeometryScriptDebug *local_840;
  bool *local_838;
  FKConvexElem *local_830;
  undefined1 local_828 [32];
  undefined4 local_808;
  undefined1 *local_800;
  TVector<double>_u_0 local_7f8;
  TRotator<double> local_7e0;
  float local_7c8;
  float local_7c4;
  float local_7c0;
  undefined1 local_7b8 [32];
  undefined4 local_798;
  FKSphereElem *local_790;
  double local_788;
  double dStack_780;
  undefined8 local_778;
  float local_770;
  undefined1 local_768 [32];
  undefined4 local_748;
  undefined1 *local_740;
  TVector<double>_u_0 local_738;
  TRotator<double> local_720;
  float local_708;
  float local_704;
  FKTaperedCapsuleElem local_6f8;
  double local_688;
  FScriptContainerElement *local_680;
  undefined1 local_678 [16];
  double local_668;
  undefined1 local_658 [16];
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined1 local_608;
  undefined4 uStack_607;
  undefined2 uStack_603;
  undefined1 uStack_601;
  double local_600;
  FText local_5f8;
  FText local_5e8;
  FText local_5d8;
  FText local_5c8;
  FText local_5b8;
  FText local_5a8;
  undefined1 local_598 [32];
  undefined1 local_578 [32];
  undefined1 local_558 [32];
  double local_538;
  double dStack_530;
  double local_528;
  undefined1 local_520 [16];
  double local_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double local_4f0;
  double dStack_4e8;
  double local_4e0;
  undefined1 local_4d8 [16];
  double local_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double local_490;
  double dStack_488;
  double local_480;
  double local_478;
  double dStack_470;
  double local_468;
  undefined1 local_460 [16];
  double local_450;
  double local_448;
  double dStack_440;
  double local_438;
  double local_430;
  double dStack_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double local_400;
  double dStack_3f8;
  double local_3f0;
  double local_3e8 [2];
  double local_3d8;
  double local_3d0;
  double dStack_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  TRotator<double> local_3a0;
  TRotator<double> local_388;
  TRotator<double> local_370 [2];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  TQuat<double> local_2f8;
  TQuat<double> local_2d8;
  TQuat<double> local_2b8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TBox<double> local_118;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  local_838 = param_4;
  *param_4 = true;
  local_840 = param_5;
  local_848 = __return_storage_ptr__;
  pFVar29 = FGeometryScriptSimpleCollision::FGeometryScriptSimpleCollision(__return_storage_ptr__);
  dVar214 = __real_3f1a36e2e0000000;
  uVar23 = _UNK_15061cc8c;
  uVar22 = _UNK_15061cc88;
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_678 = *(undefined1 (*) [16])(param_2->Scale3D).XY.m128d_f64;
  uVar57 = local_678._0_4_;
  uVar103 = local_678._4_4_;
  auVar16._4_8_ = in_XMM1_Qb;
  auVar16._0_4_ = uVar103;
  auVar146._0_8_ = auVar16._0_8_ << 0x20;
  auVar146._8_4_ = local_678._8_4_;
  auVar146._12_4_ = local_678._12_4_;
  local_668 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar149 = auVar146._8_8_;
  auVar104._8_8_ = local_678._8_8_;
  auVar104._0_8_ = dVar149;
  dVar58 = local_678._0_8_;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(dVar58 - dVar149) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar58 - dVar149,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
      || (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)(dVar58 - local_668) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar58 - local_668,0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(dVar149 - local_668) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar149 - local_668,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
     ) {
    bVar25 = false;
    bVar18 = false;
    auVar104._0_8_ = dVar149 * dVar58 * local_668;
    pFVar29 = (FGeometryScriptSimpleCollision *)cbrt();
    uVar57 = (undefined4)extraout_XMM0_Qa;
    uVar103 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
  }
  else {
    bVar25 = true;
    bVar18 = true;
  }
  iVar26 = (param_1->AggGeom).SphereElems.ArrayNum;
  if (0 < iVar26) {
    if (!bVar25) {
      if (param_3->bWarnOnInvalidTransforms != false) {
        pFVar30 = FText::AsLocalizable_Advanced_LocText
                            (&local_5f8,L"UGeometryScriptLibrary_CollisionFunctions",
                             L"TransformSimpleCollisionShapes Non-Uniform Scale on Sphere",
                             L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Spheres"
                            );
        UE::Geometry::AppendWarning(local_840,InvalidInputs,pFVar30);
        pFVar29 = extraout_RAX;
        if (local_5f8.TextData.Reference != (ITextData *)0x0) {
          pFVar29 = (FGeometryScriptSimpleCollision *)
                    (**(code **)((longlong)*local_5f8.TextData.Reference + 0x10))();
        }
      }
      *param_4 = false;
    }
    piVar44 = &(__return_storage_ptr__->AggGeom).SphereElems.ArrayMax;
    if ((__return_storage_ptr__->AggGeom).SphereElems.ArrayMax < iVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,iVar26,(ForAnyElementType *)__return_storage_ptr__,
                 (__return_storage_ptr__->AggGeom).SphereElems.ArrayNum,piVar44);
      pFVar29 = extraout_RAX_00;
    }
    iVar26 = (param_1->AggGeom).SphereElems.ArrayNum;
    uVar40 = (ulonglong)iVar26;
    pFVar43 = (param_1->AggGeom).SphereElems.AllocatorInstance.Data;
    local_858 = (FKLevelSetElem *)CONCAT44(local_858._4_4_,iVar26);
    pFVar48 = pFVar43 + uVar40 * 0x50;
    while( true ) {
      if ((param_1->AggGeom).SphereElems.ArrayNum != (int)uVar40) {
        local_867 = 0;
        bVar25 = `TCheckedPointerIterator<FKSphereElem_const_,int,0>::operator!='::__l2::<lambda_1>
                 ::operator()(&local_867);
        pFVar29 = (FGeometryScriptSimpleCollision *)CONCAT71(extraout_var,bVar25);
      }
      param_4 = local_838;
      if (pFVar43 == pFVar48) break;
      local_7b8._12_8_ = *(undefined8 *)(pFVar43 + 0xc);
      local_7b8._8_4_ = *(undefined4 *)(pFVar43 + 8);
      local_7b8._20_4_ = *(undefined4 *)(pFVar43 + 0x14);
      local_7b8[0x18] = (byte)pFVar43[0x18] & 1 | local_7b8[0x18] & 0xfe;
      local_7b8[0x19] = pFVar43[0x19];
      local_798 = 6;
      local_7b8._0_8_ = &___7FKSphereElem__6B_;
      if (param_3->bCenterTransformPivotPerShape == false) {
        auVar146 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar168 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar58 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(pFVar43 + 0x30);
        dVar149 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar43 + 0x38);
        uVar183 = (undefined4)((ulonglong)dVar149 >> 0x20);
        auVar104 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar181 = auVar104._0_8_;
        dVar150 = *(double *)(pFVar43 + 0x40) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar167 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        local_658 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar184._8_4_ = SUB84(dVar149,0);
        auVar184._0_8_ = dVar58;
        auVar184._12_4_ = uVar183;
        auVar122 = blendpd(local_658,auVar104,2);
        auVar185._0_8_ = auVar184._8_8_ * local_658._0_8_ - local_658._8_8_ * dVar58;
        auVar185._8_8_ = dVar150 * local_658._8_8_ - dVar181 * dVar149;
        auVar169._8_4_ = SUB84(auVar185._8_8_,0);
        auVar169._0_8_ = auVar185._0_8_;
        auVar169._12_4_ = (int)((ulonglong)auVar185._8_8_ >> 0x20);
        auVar127._8_4_ = SUB84(dVar149,0);
        auVar127._0_8_ = dVar58;
        auVar127._12_4_ = uVar183;
        auVar59._8_4_ = SUB84(dVar167,0);
        auVar59._0_8_ = dVar150;
        auVar59._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
        auVar59 = blendpd(auVar127,auVar59,2);
        auVar60._0_8_ = auVar59._0_8_ * dVar181 - auVar122._0_8_ * dVar150;
        auVar60._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar122._8_8_ * dVar167;
        auVar59 = blendpd(auVar185,auVar60,2);
        dVar167 = auVar169._8_8_ + auVar169._8_8_;
        dVar180 = auVar60._0_8_ + auVar60._0_8_;
        auVar186._0_8_ = auVar59._0_8_ + auVar59._0_8_;
        auVar186._8_8_ = auVar59._8_8_ + auVar59._8_8_;
        auVar151._8_4_ = SUB84(dVar180,0);
        auVar151._0_8_ = dVar167;
        uVar183 = (undefined4)((ulonglong)dVar180 >> 0x20);
        auVar151._12_4_ = uVar183;
        auVar123._8_4_ = SUB84(dVar180,0);
        auVar123._0_8_ = dVar167;
        auVar123._12_4_ = uVar183;
        auVar59 = blendpd(auVar123,auVar186,2);
        auVar152._0_8_ = auVar151._8_8_ * auVar146._0_8_ - auVar146._8_8_ * dVar167;
        auVar152._8_8_ = auVar186._0_8_ * auVar146._8_8_ - dVar181 * dVar180;
        auVar122._8_4_ = SUB84(auVar152._8_8_,0);
        auVar122._0_8_ = auVar152._0_8_;
        auVar122._12_4_ = (int)((ulonglong)auVar152._8_8_ >> 0x20);
        auVar146 = blendpd(auVar146,auVar104,2);
        auVar124._0_8_ = auVar59._0_8_ * dVar181 - auVar146._0_8_ * auVar186._0_8_;
        auVar124._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar146._8_8_ * auVar186._8_8_;
        auVar146 = blendpd(auVar152,auVar124,2);
        local_788 = dVar167 * dVar168 + dVar58 + auVar122._8_8_ +
                    (param_2->Translation).XY.m128d_f64[0];
        dStack_780 = dVar180 * dVar168 + dVar149 + auVar124._0_8_ +
                     (param_2->Translation).XY.m128d_f64[1];
        local_778 = auVar186._0_8_ * dVar168 + dVar150 + auVar146._0_8_ +
                    (param_2->Translation).ZW.m128d_f64[0];
        local_520 = _local_788;
        local_510 = (double)local_778;
      }
      else {
        local_538 = (param_2->Translation).XY.m128d_f64[0];
        dStack_530 = (param_2->Translation).XY.m128d_f64[1];
        local_528 = (param_2->Translation).ZW.m128d_f64[0];
        auVar104._0_8_ = *(double *)(pFVar43 + 0x40) + local_528;
        auVar104._8_8_ = 0;
        dStack_780 = *(double *)(pFVar43 + 0x38) + dStack_530;
        local_788 = *(double *)(pFVar43 + 0x30) + local_538;
        local_778 = auVar104._0_8_;
      }
      pFVar4 = (FKSphereElem *)(__return_storage_ptr__->AggGeom).SphereElems.AllocatorInstance.Data;
      dVar58 = (double)*(float *)(pFVar43 + 0x48) * (double)CONCAT44(uVar103,uVar57);
      local_770 = (float)(double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & uVar21,
                                          SUB84(dVar58,0) & uVar20);
      local_790 = (FKSphereElem *)local_7b8;
      if (((pFVar4 <= (FKSphereElem *)local_7b8) && ((FKSphereElem *)local_7b8 < pFVar4 + *piVar44))
         && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar25)) {
        pcVar7 = (code *)swi(3);
        pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
        return pFVar29;
      }
      iVar26 = (__return_storage_ptr__->AggGeom).SphereElems.ArrayNum;
      if (iVar26 == *piVar44) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,(ForAnyElementType *)__return_storage_ptr__,piVar44);
      }
      (__return_storage_ptr__->AggGeom).SphereElems.ArrayNum = iVar26 + 1;
      FKSphereElem::FKSphereElem
                ((FKSphereElem *)
                 ((__return_storage_ptr__->AggGeom).SphereElems.AllocatorInstance.Data +
                 (longlong)iVar26 * 0x50),(FKSphereElem *)local_7b8);
      FKSphereElem::~FKSphereElem((FKSphereElem *)local_7b8);
      uVar40 = (ulonglong)local_858 & 0xffffffff;
      pFVar43 = pFVar43 + 0x50;
      pFVar29 = extraout_RAX_01;
    }
  }
  iVar26 = (param_1->AggGeom).BoxElems.ArrayNum;
  puVar41 = (undefined1 *)(longlong)iVar26;
  local_858 = (FKLevelSetElem *)CONCAT44(local_858._4_4_,iVar26);
  pFVar50 = __return_storage_ptr__;
  if (0 < iVar26) {
    if (!bVar18) {
      pFVar43 = (param_1->AggGeom).BoxElems.AllocatorInstance.Data;
      uVar183 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
      uVar120 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
      uVar204 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
      uVar205 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
      uVar206 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
      uVar121 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
      uVar207 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
      uVar209 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
      uVar210 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
      uVar211 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
      uVar212 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
      uVar213 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
      pFVar48 = pFVar43 + (longlong)puVar41 * 0x70;
      _Var187.m128d_f64 = GlobalVectorConstants::Double360.ZW.m128d_f64;
      while( true ) {
        uVar27 = SUB84(pFVar29,0);
        iVar26 = (int)puVar41;
        if ((param_1->AggGeom).BoxElems.ArrayNum != iVar26) {
          puVar41 = &local_866;
          local_866 = 0;
          bVar25 = `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::
                   operator()(puVar41);
          iVar26 = (int)puVar41;
          uVar27 = (undefined4)CONCAT71(extraout_var_00,bVar25);
          uVar183 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._0_4_;
          uVar120 = GlobalVectorConstants::Double360.XY.m128d_f64[0]._4_4_;
          uVar204 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._0_4_;
          uVar205 = GlobalVectorConstants::Double360.XY.m128d_f64[1]._4_4_;
          uVar206 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._0_4_;
          uVar121 = GlobalVectorConstants::Double180.ZW.m128d_f64[0]._4_4_;
          uVar207 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._0_4_;
          uVar209 = GlobalVectorConstants::Double180.ZW.m128d_f64[1]._4_4_;
          uVar210 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._0_4_;
          uVar211 = GlobalVectorConstants::Double180.XY.m128d_f64[0]._4_4_;
          uVar212 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._0_4_;
          uVar213 = GlobalVectorConstants::Double180.XY.m128d_f64[1]._4_4_;
          _Var187 = GlobalVectorConstants::Double360.ZW;
        }
        if (pFVar43 == pFVar48) goto LAB_14cde7b03;
        local_688 = dVar214;
        auVar146 = *(undefined1 (*) [16])(pFVar43 + 0x48);
        auVar8._4_4_ = uVar120;
        auVar8._0_4_ = uVar183;
        auVar8._8_4_ = uVar204;
        auVar8._12_4_ = uVar205;
        auVar59 = divpd(auVar146,auVar8);
        auVar104 = roundpd(auVar104,auVar59,3);
        auVar105._0_8_ = auVar104._0_8_ * (double)CONCAT44(uVar120,uVar183);
        auVar105._8_8_ = auVar104._8_8_ * (double)CONCAT44(uVar205,uVar204);
        auVar61._8_8_ = 0;
        auVar61._0_8_ = *(double *)(pFVar43 + 0x58);
        dVar58 = auVar146._0_8_ - auVar105._0_8_;
        dVar149 = auVar146._8_8_ - auVar105._8_8_;
        auVar104 = divpd(auVar61,(undefined1  [16])_Var187.m128d_f64);
        auVar104 = roundpd(auVar105,auVar104,3);
        dVar168 = _Var187.m128d_f64[0];
        dVar181 = _Var187.m128d_f64[1];
        auVar62._8_4_ = SUB84(dVar149,0);
        auVar62._0_8_ = dVar58;
        auVar62._12_4_ = (int)((ulonglong)dVar149 >> 0x20);
        dVar150 = *(double *)(pFVar43 + 0x58) - auVar104._0_8_ * dVar168;
        dVar167 = 0.0 - auVar104._8_8_ * dVar181;
        uVar40 = -(ulonglong)(0.0 <= dVar58);
        uVar53 = -(ulonglong)(0.0 <= dVar149);
        auVar106._0_8_ = uVar40 & (ulonglong)dVar58;
        auVar106._8_4_ = (undefined4)(uVar53 & (ulonglong)dVar149);
        auVar106._12_4_ = (undefined4)((uVar53 & (ulonglong)dVar149) >> 0x20);
        dVar58 = dVar58 + (double)CONCAT44(uVar120,uVar183);
        dVar149 = auVar62._8_8_ + (double)CONCAT44(uVar205,uVar204);
        uVar52 = -(ulonglong)(0.0 <= dVar150);
        uVar54 = -(ulonglong)(0.0 <= dVar167);
        auVar170._0_4_ = ~(uint)uVar40 & SUB84(dVar58,0);
        auVar170._4_4_ = ~(uint)(uVar40 >> 0x20) & (uint)((ulonglong)dVar58 >> 0x20);
        auVar170._8_4_ = ~(uint)uVar53 & SUB84(dVar149,0);
        auVar170._12_4_ = ~(uint)(uVar53 >> 0x20) & (uint)((ulonglong)dVar149 >> 0x20);
        auVar170 = auVar170 | auVar106;
        auVar125._0_8_ = uVar52 & (ulonglong)dVar150;
        auVar125._8_4_ = (undefined4)(uVar54 & (ulonglong)dVar167);
        auVar125._12_4_ = (undefined4)((uVar54 & (ulonglong)dVar167) >> 0x20);
        auVar63._8_4_ = SUB84(dVar167,0);
        auVar63._0_8_ = dVar150;
        auVar63._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
        auVar153._0_8_ = (double)CONCAT44(uVar211,uVar210);
        auVar153._8_4_ = uVar212;
        auVar153._12_4_ = uVar213;
        dVar58 = auVar63._8_8_ + dVar181;
        uVar53 = -(ulonglong)(auVar153._0_8_ < auVar170._0_8_);
        uVar55 = -(ulonglong)(auVar153._8_8_ < auVar170._8_8_);
        auVar147._0_4_ = ~(uint)uVar52 & SUB84(dVar150 + dVar168,0);
        auVar147._4_4_ = ~(uint)(uVar52 >> 0x20) & (uint)((ulonglong)(dVar150 + dVar168) >> 0x20);
        auVar147._8_4_ = ~(uint)uVar54 & SUB84(dVar58,0);
        auVar147._12_4_ = ~(uint)(uVar54 >> 0x20) & (uint)((ulonglong)dVar58 >> 0x20);
        auVar64._0_8_ = (double)CONCAT44(uVar121,uVar206);
        auVar64._8_4_ = uVar207;
        auVar64._12_4_ = uVar209;
        auVar147 = auVar147 | auVar125;
        uVar52 = -(ulonglong)(auVar64._0_8_ < auVar147._0_8_);
        uVar54 = -(ulonglong)(auVar64._8_8_ < auVar147._8_8_);
        auVar107._0_8_ = uVar52 & (ulonglong)(auVar147._0_8_ - dVar168);
        uVar40 = uVar54 & (ulonglong)(auVar147._8_8_ - dVar181);
        auVar107._8_4_ = (undefined4)uVar40;
        auVar107._12_4_ = (undefined4)(uVar40 >> 0x20);
        auVar65._0_4_ = ~(uint)uVar52 & auVar147._0_4_;
        auVar65._4_4_ = ~(uint)(uVar52 >> 0x20) & auVar147._4_4_;
        auVar65._8_4_ = ~(uint)uVar54 & auVar147._8_4_;
        auVar65._12_4_ = ~(uint)(uVar54 >> 0x20) & auVar147._12_4_;
        auVar107 = auVar107 | auVar65;
        auVar66._8_4_ = SUB84(dVar214,0);
        auVar66._0_8_ = dVar214;
        auVar66._12_4_ = (int)((ulonglong)dVar214 >> 0x20);
        auVar108._0_8_ = (double)CONCAT44(auVar107._4_4_ & uVar21,auVar107._0_4_ & uVar20);
        auVar108._8_4_ = auVar107._8_4_ & uVar22;
        auVar108._12_4_ = auVar107._12_4_ & uVar23;
        auVar67._8_8_ = -(ulonglong)(auVar66._8_8_ < auVar108._8_8_);
        auVar67._0_8_ = -(ulonglong)(dVar214 < auVar108._0_8_);
        uVar36 = movmskpd(iVar26,auVar67);
        auVar109._0_8_ = (ulonglong)(auVar170._0_8_ - (double)CONCAT44(uVar120,uVar183)) & uVar53;
        uVar40 = uVar55 & (ulonglong)(auVar170._8_8_ - (double)CONCAT44(uVar205,uVar204));
        auVar109._8_4_ = (undefined4)uVar40;
        auVar109._12_4_ = (undefined4)(uVar40 >> 0x20);
        auVar154._0_4_ = ~(uint)uVar53 & auVar170._0_4_;
        auVar154._4_4_ = ~(uint)(uVar53 >> 0x20) & auVar170._4_4_;
        auVar154._8_4_ = ~(uint)uVar55 & auVar170._8_4_;
        auVar154._12_4_ = ~(uint)(uVar55 >> 0x20) & auVar170._12_4_;
        auVar109 = auVar109 | auVar154;
        auVar104._0_8_ = (double)CONCAT44(auVar109._4_4_ & uVar21,auVar109._0_4_ & uVar20);
        auVar104._8_4_ = auVar109._8_4_ & uVar22;
        auVar104._12_4_ = auVar109._12_4_ & uVar23;
        auVar126._8_8_ = -(ulonglong)(dVar214 < auVar104._8_8_);
        auVar126._0_8_ = -(ulonglong)(dVar214 < auVar104._0_8_);
        uVar28 = movmskpd(uVar27,auVar126);
        pFVar29 = (FGeometryScriptSimpleCollision *)(ulonglong)uVar28;
        if ((uVar36 & 0x3fffffff) != 0 || uVar28 != 0) break;
        puVar41 = (undefined1 *)((ulonglong)local_858 & 0xffffffff);
        pFVar43 = pFVar43 + 0x70;
        local_688 = dVar214;
      }
      if (param_3->bWarnOnInvalidTransforms != false) {
        pFVar30 = FText::AsLocalizable_Advanced_LocText
                            (&local_5e8,L"UGeometryScriptLibrary_CollisionFunctions",
                             L"TransformSimpleCollisionShapes Non-Uniform Scale on Rotated Box",
                             L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Rotated Box"
                            );
        UE::Geometry::AppendWarning(local_840,InvalidInputs,pFVar30);
        if (local_5e8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_5e8.TextData.Reference + 0x10))();
        }
      }
      *param_4 = false;
    }
LAB_14cde7b03:
    pTVar1 = &(__return_storage_ptr__->AggGeom).BoxElems;
    piVar44 = &(__return_storage_ptr__->AggGeom).BoxElems.ArrayMax;
    if (*piVar44 < (int)local_858) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,(int)local_858,&pTVar1->AllocatorInstance,
                 (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum,piVar44);
    }
    iVar26 = (param_1->AggGeom).BoxElems.ArrayNum;
    puVar41 = (undefined1 *)(longlong)iVar26;
    pFVar43 = (param_1->AggGeom).BoxElems.AllocatorInstance.Data;
    local_858 = (FKLevelSetElem *)CONCAT44(local_858._4_4_,iVar26);
    pFVar48 = pFVar43 + (longlong)puVar41 * 0x70;
    while( true ) {
      if ((param_1->AggGeom).BoxElems.ArrayNum != (int)puVar41) {
        puVar41 = &local_865;
        local_865 = 0;
        `TCheckedPointerIterator<FKBoxElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (puVar41);
      }
      pFVar50 = local_848;
      if (pFVar43 == pFVar48) break;
      local_828._12_8_ = *(undefined8 *)(pFVar43 + 0xc);
      local_828._8_4_ = *(undefined4 *)(pFVar43 + 8);
      local_7e0.Roll = *(double *)(pFVar43 + 0x58);
      local_828._20_4_ = *(undefined4 *)(pFVar43 + 0x14);
      local_7e0.Pitch = *(double *)(pFVar43 + 0x48);
      local_7e0.Yaw = *(double *)(pFVar43 + 0x50);
      local_828[0x18] = (byte)pFVar43[0x18] & 1 | local_828[0x18] & 0xfe;
      local_828[0x19] = pFVar43[0x19];
      local_7c4 = *(float *)(pFVar43 + 100);
      local_800 = local_828;
      local_7c8 = *(float *)(pFVar43 + 0x60);
      local_7c0 = *(float *)(pFVar43 + 0x68);
      local_808 = 6;
      local_828._0_8_ = &___7FKBoxElem__6B_;
      if (param_3->bCenterTransformPivotPerShape == false) {
        auVar104 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar168 = auVar104._0_8_;
        auVar146 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar149 = *(double *)(pFVar43 + 0x40) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar150 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        local_658 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar167 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar214 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(pFVar43 + 0x30);
        dVar58 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar43 + 0x38);
        uVar183 = (undefined4)((ulonglong)dVar58 >> 0x20);
        auVar127 = blendpd(local_658,auVar104,2);
        auVar188._8_4_ = SUB84(dVar58,0);
        auVar188._0_8_ = dVar214;
        auVar188._12_4_ = uVar183;
        auVar189._0_8_ = auVar188._8_8_ * local_658._0_8_ - local_658._8_8_ * dVar214;
        auVar189._8_8_ = dVar149 * local_658._8_8_ - dVar168 * dVar58;
        auVar68._8_4_ = SUB84(dVar58,0);
        auVar68._0_8_ = dVar214;
        auVar68._12_4_ = uVar183;
        auVar10._8_4_ = SUB84(dVar150,0);
        auVar10._0_8_ = dVar149;
        auVar10._12_4_ = (int)((ulonglong)dVar150 >> 0x20);
        auVar59 = blendpd(auVar68,auVar10,2);
        auVar171._8_4_ = SUB84(auVar189._8_8_,0);
        auVar171._0_8_ = auVar189._0_8_;
        auVar171._12_4_ = (int)((ulonglong)auVar189._8_8_ >> 0x20);
        auVar69._0_8_ = auVar59._0_8_ * dVar168 - auVar127._0_8_ * dVar149;
        auVar69._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar127._8_8_ * dVar150;
        auVar59 = blendpd(auVar189,auVar69,2);
        dVar150 = auVar171._8_8_ + auVar171._8_8_;
        dVar181 = auVar69._0_8_ + auVar69._0_8_;
        auVar190._0_8_ = auVar59._0_8_ + auVar59._0_8_;
        auVar190._8_8_ = auVar59._8_8_ + auVar59._8_8_;
        auVar155._8_4_ = SUB84(dVar181,0);
        auVar155._0_8_ = dVar150;
        uVar183 = (undefined4)((ulonglong)dVar181 >> 0x20);
        auVar155._12_4_ = uVar183;
        auVar128._8_4_ = SUB84(dVar181,0);
        auVar128._0_8_ = dVar150;
        auVar128._12_4_ = uVar183;
        auVar59 = blendpd(auVar128,auVar190,2);
        auVar156._0_8_ = auVar155._8_8_ * auVar146._0_8_ - auVar146._8_8_ * dVar150;
        auVar156._8_8_ = auVar190._0_8_ * auVar146._8_8_ - dVar168 * dVar181;
        auVar70._8_4_ = SUB84(auVar156._8_8_,0);
        auVar70._0_8_ = auVar156._0_8_;
        auVar70._12_4_ = (int)((ulonglong)auVar156._8_8_ >> 0x20);
        auVar146 = blendpd(auVar146,auVar104,2);
        auVar129._0_8_ = auVar59._0_8_ * dVar168 - auVar146._0_8_ * auVar190._0_8_;
        auVar129._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar146._8_8_ * auVar190._8_8_;
        auVar104 = blendpd(auVar156,auVar129,2);
        local_7f8._s_0.X =
             dVar150 * dVar167 + dVar214 + auVar70._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_7f8._s_0.Y =
             dVar181 * dVar167 + dVar58 + auVar129._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_7f8._s_0.Z =
             auVar190._0_8_ * dVar167 + dVar149 + auVar104._0_8_ +
             (param_2->Translation).ZW.m128d_f64[0];
        local_3b8 = local_7f8._s_0.X;
        dStack_3b0 = local_7f8._s_0.Y;
        local_3a8 = local_7f8._s_0.Z;
      }
      else {
        local_508 = (param_2->Translation).XY.m128d_f64[0];
        dStack_500 = (param_2->Translation).XY.m128d_f64[1];
        local_4f8 = (param_2->Translation).ZW.m128d_f64[0];
        local_7f8._s_0.X = *(double *)(pFVar43 + 0x30) + local_508;
        local_7f8._s_0.Y = *(double *)(pFVar43 + 0x38) + dStack_500;
        local_7f8._s_0.Z = *(double *)(pFVar43 + 0x40) + local_4f8;
      }
      auVar104 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar146 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      pTVar31 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(local_828 + 0x48),&local_2f8);
      dVar214 = auVar104._0_8_;
      auVar130._8_4_ = auVar104._0_4_;
      auVar130._0_8_ = dVar214;
      auVar130._12_4_ = auVar104._4_4_;
      dVar58 = auVar104._8_8_;
      dVar167 = pTVar31->Z;
      dVar168 = pTVar31->W;
      dVar181 = pTVar31->X;
      dVar180 = pTVar31->Y;
      auVar110._8_4_ = auVar104._8_4_;
      auVar110._0_8_ = dVar58;
      auVar110._12_4_ = auVar104._12_4_;
      dVar150 = auVar146._8_8_;
      dVar149 = auVar146._0_8_;
      auVar71._8_4_ = auVar146._8_4_;
      auVar71._0_8_ = dVar150;
      auVar71._12_4_ = auVar146._12_4_;
      auVar72._8_4_ = auVar146._0_4_;
      auVar72._0_8_ = dVar149;
      auVar72._12_4_ = auVar146._4_4_;
      local_558._0_8_ =
           dVar214 * dVar168 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar150 * dVar181 +
           dVar58 * dVar167 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar149 * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_558._8_8_ =
           auVar130._8_8_ * dVar167 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + auVar71._8_8_ * dVar180
           + auVar110._8_8_ * dVar168 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar72._8_8_ * dVar181 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
      ;
      local_558._16_8_ =
           dVar214 * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar150 * dVar167 +
           dVar58 * dVar181 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar149 * dVar168 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_558._24_8_ =
           dVar214 * dVar181 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar150 * dVar168 +
           dVar58 * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar149 * dVar167 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      pTVar32 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_558,&local_388);
      local_7e0.Pitch = pTVar32->Pitch;
      local_7e0.Yaw = pTVar32->Yaw;
      local_7e0.Roll = pTVar32->Roll;
      local_7c8 = (float)(double)CONCAT44((uint)((ulonglong)
                                                 ((double)local_7c8 * (double)local_678._0_8_) >>
                                                0x20) & uVar21,
                                          SUB84((double)local_7c8 * (double)local_678._0_8_,0) &
                                          uVar20);
      local_7c4 = (float)(double)CONCAT44((uint)((ulonglong)
                                                 ((double)local_7c4 * (double)local_678._8_8_) >>
                                                0x20) & uVar21,
                                          SUB84((double)local_7c4 * (double)local_678._8_8_,0) &
                                          uVar20);
      local_7c0 = (float)(double)CONCAT44((uint)((ulonglong)((double)local_7c0 * local_668) >> 0x20)
                                          & uVar21,SUB84((double)local_7c0 * local_668,0) & uVar20);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_828) &&
          ((FScriptContainerElement *)local_828 < pFVar5 + (longlong)*piVar44 * 0x70)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar7 = (code *)swi(3);
        pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
        return pFVar29;
      }
      iVar26 = (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum;
      if (iVar26 == *piVar44) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&pTVar1->AllocatorInstance,piVar44);
        (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum = iVar26;
      }
      (__return_storage_ptr__->AggGeom).BoxElems.ArrayNum = iVar26 + 1;
      FKBoxElem::FKBoxElem
                ((FKBoxElem *)((pTVar1->AllocatorInstance).Data + (longlong)iVar26 * 0x70),
                 (FKBoxElem *)local_828);
      FKBoxElem::~FKBoxElem((FKBoxElem *)local_828);
      puVar41 = (undefined1 *)((ulonglong)local_858 & 0xffffffff);
      pFVar43 = pFVar43 + 0x70;
    }
  }
  iVar26 = (param_1->AggGeom).SphylElems.ArrayNum;
  pFVar29 = pFVar50;
  if (0 < iVar26) {
    if (!bVar18) {
      if (param_3->bWarnOnInvalidTransforms != false) {
        pFVar30 = FText::AsLocalizable_Advanced_LocText
                            (&local_5d8,L"UGeometryScriptLibrary_CollisionFunctions",
                             L"TransformSimpleCollisionShapes Non-Uniform Scale on Sphyl",
                             L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Sphyls"
                            );
        UE::Geometry::AppendWarning(local_840,InvalidInputs,pFVar30);
        if (local_5d8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_5d8.TextData.Reference + 0x10))();
        }
      }
      *local_838 = false;
    }
    pTVar2 = &(pFVar50->AggGeom).SphylElems;
    piVar44 = &(pFVar50->AggGeom).SphylElems.ArrayMax;
    if ((pFVar50->AggGeom).SphylElems.ArrayMax < iVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,iVar26,&pTVar2->AllocatorInstance,(pFVar50->AggGeom).SphylElems.ArrayNum,
                 piVar44);
    }
    iVar26 = (param_1->AggGeom).SphylElems.ArrayNum;
    puVar41 = (undefined1 *)(longlong)iVar26;
    pFVar43 = (param_1->AggGeom).SphylElems.AllocatorInstance.Data;
    local_858 = (FKLevelSetElem *)CONCAT44(local_858._4_4_,iVar26);
    pFVar48 = pFVar43 + (longlong)puVar41 * 0x68;
    while( true ) {
      if ((param_1->AggGeom).SphylElems.ArrayNum != (int)puVar41) {
        puVar41 = &local_864;
        local_864 = 0;
        `TCheckedPointerIterator<FKSphylElem_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(puVar41);
      }
      pFVar29 = local_848;
      if (pFVar43 == pFVar48) break;
      local_768._12_8_ = *(undefined8 *)(pFVar43 + 0xc);
      local_768._8_4_ = *(undefined4 *)(pFVar43 + 8);
      local_768._20_4_ = *(undefined4 *)(pFVar43 + 0x14);
      local_720.Roll = *(double *)(pFVar43 + 0x58);
      local_720.Pitch = *(double *)(pFVar43 + 0x48);
      local_720.Yaw = *(double *)(pFVar43 + 0x50);
      local_768[0x18] = (byte)pFVar43[0x18] & 1 | local_768[0x18] & 0xfe;
      local_768[0x19] = pFVar43[0x19];
      local_740 = local_768;
      local_748 = 6;
      local_768._0_8_ = &___7FKSphylElem__6B_;
      if (param_3->bCenterTransformPivotPerShape == false) {
        auVar104 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar168 = auVar104._0_8_;
        auVar146 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar149 = *(double *)(pFVar43 + 0x40) * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar150 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        local_658 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar167 = (param_2->Rotation).ZW.m128d_f64[1];
        dVar214 = (param_2->Scale3D).XY.m128d_f64[0] * *(double *)(pFVar43 + 0x30);
        dVar58 = (param_2->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar43 + 0x38);
        uVar183 = (undefined4)((ulonglong)dVar58 >> 0x20);
        auVar127 = blendpd(local_658,auVar104,2);
        auVar191._8_4_ = SUB84(dVar58,0);
        auVar191._0_8_ = dVar214;
        auVar191._12_4_ = uVar183;
        auVar192._0_8_ = auVar191._8_8_ * local_658._0_8_ - local_658._8_8_ * dVar214;
        auVar192._8_8_ = dVar149 * local_658._8_8_ - dVar168 * dVar58;
        auVar73._8_4_ = SUB84(dVar58,0);
        auVar73._0_8_ = dVar214;
        auVar73._12_4_ = uVar183;
        auVar11._8_4_ = SUB84(dVar150,0);
        auVar11._0_8_ = dVar149;
        auVar11._12_4_ = (int)((ulonglong)dVar150 >> 0x20);
        auVar59 = blendpd(auVar73,auVar11,2);
        auVar172._8_4_ = SUB84(auVar192._8_8_,0);
        auVar172._0_8_ = auVar192._0_8_;
        auVar172._12_4_ = (int)((ulonglong)auVar192._8_8_ >> 0x20);
        auVar74._0_8_ = auVar59._0_8_ * dVar168 - auVar127._0_8_ * dVar149;
        auVar74._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar127._8_8_ * dVar150;
        auVar59 = blendpd(auVar192,auVar74,2);
        dVar150 = auVar172._8_8_ + auVar172._8_8_;
        dVar181 = auVar74._0_8_ + auVar74._0_8_;
        auVar193._0_8_ = auVar59._0_8_ + auVar59._0_8_;
        auVar193._8_8_ = auVar59._8_8_ + auVar59._8_8_;
        auVar157._8_4_ = SUB84(dVar181,0);
        auVar157._0_8_ = dVar150;
        uVar183 = (undefined4)((ulonglong)dVar181 >> 0x20);
        auVar157._12_4_ = uVar183;
        auVar131._8_4_ = SUB84(dVar181,0);
        auVar131._0_8_ = dVar150;
        auVar131._12_4_ = uVar183;
        auVar59 = blendpd(auVar131,auVar193,2);
        auVar158._0_8_ = auVar157._8_8_ * auVar146._0_8_ - auVar146._8_8_ * dVar150;
        auVar158._8_8_ = auVar193._0_8_ * auVar146._8_8_ - dVar168 * dVar181;
        auVar75._8_4_ = SUB84(auVar158._8_8_,0);
        auVar75._0_8_ = auVar158._0_8_;
        auVar75._12_4_ = (int)((ulonglong)auVar158._8_8_ >> 0x20);
        auVar146 = blendpd(auVar146,auVar104,2);
        auVar132._0_8_ = auVar59._0_8_ * dVar168 - auVar146._0_8_ * auVar193._0_8_;
        auVar132._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar146._8_8_ * auVar193._8_8_;
        auVar104 = blendpd(auVar158,auVar132,2);
        local_738._s_0.X =
             dVar150 * dVar167 + dVar214 + auVar75._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_738._s_0.Y =
             dVar181 * dVar167 + dVar58 + auVar132._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_738._s_0.Z =
             auVar193._0_8_ * dVar167 + dVar149 + auVar104._0_8_ +
             (param_2->Translation).ZW.m128d_f64[0];
        local_448 = local_738._s_0.X;
        dStack_440 = local_738._s_0.Y;
        local_438 = local_738._s_0.Z;
      }
      else {
        local_3d0 = (param_2->Translation).XY.m128d_f64[0];
        dStack_3c8 = (param_2->Translation).XY.m128d_f64[1];
        local_3c0 = (param_2->Translation).ZW.m128d_f64[0];
        local_738._s_0.X = *(double *)(pFVar43 + 0x30) + local_3d0;
        local_738._s_0.Y = *(double *)(pFVar43 + 0x38) + dStack_3c8;
        local_738._s_0.Z = *(double *)(pFVar43 + 0x40) + local_3c0;
      }
      auVar104 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar146 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      dVar214 = (double)*(float *)(pFVar43 + 0x60) * (double)CONCAT44(uVar103,uVar57);
      local_708 = (float)(double)CONCAT44((uint)((ulonglong)dVar214 >> 0x20) & uVar21,
                                          SUB84(dVar214,0) & uVar20);
      dVar214 = (double)*(float *)(pFVar43 + 100) * (double)CONCAT44(uVar103,uVar57);
      local_704 = (float)(double)CONCAT44((uint)((ulonglong)dVar214 >> 0x20) & uVar21,
                                          SUB84(dVar214,0) & uVar20);
      pTVar31 = UE::Math::TRotator<double>::Quaternion
                          ((TRotator<double> *)(local_768 + 0x48),&local_2d8);
      dVar150 = auVar146._8_8_;
      dVar149 = auVar146._0_8_;
      dVar167 = pTVar31->Z;
      dVar168 = pTVar31->W;
      dVar181 = pTVar31->X;
      dVar180 = pTVar31->Y;
      dVar214 = auVar104._0_8_;
      auVar133._8_4_ = auVar104._0_4_;
      auVar133._0_8_ = dVar214;
      auVar133._12_4_ = auVar104._4_4_;
      dVar58 = auVar104._8_8_;
      auVar76._8_4_ = auVar146._0_4_;
      auVar76._0_8_ = dVar149;
      auVar76._12_4_ = auVar146._4_4_;
      local_578._0_8_ =
           dVar214 * dVar168 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar181 * dVar150 +
           dVar167 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar149 * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_578._8_8_ =
           auVar133._8_8_ * dVar167 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar180 * dVar150 +
           dVar168 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar76._8_8_ * dVar181 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
      ;
      local_578._16_8_ =
           dVar214 * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar167 * dVar150 +
           dVar181 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar149 * dVar168 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_578._24_8_ =
           dVar214 * dVar181 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar168 * dVar150 +
           dVar180 * dVar58 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar149 * dVar167 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      pTVar32 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_578,local_370);
      local_720.Pitch = pTVar32->Pitch;
      local_720.Yaw = pTVar32->Yaw;
      local_720.Roll = pTVar32->Roll;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_768) &&
          ((FScriptContainerElement *)local_768 < pFVar5 + (longlong)*piVar44 * 0x68)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar7 = (code *)swi(3);
        pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
        return pFVar29;
      }
      iVar26 = (pFVar50->AggGeom).SphylElems.ArrayNum;
      if (iVar26 == *piVar44) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x868,&pTVar2->AllocatorInstance,piVar44);
      }
      (pFVar50->AggGeom).SphylElems.ArrayNum = iVar26 + 1;
      FKSphylElem::FKSphylElem
                ((FKSphylElem *)((pTVar2->AllocatorInstance).Data + (longlong)iVar26 * 0x68),
                 (FKSphylElem *)local_768);
      FKSphylElem::~FKSphylElem((FKSphylElem *)local_768);
      puVar41 = (undefined1 *)((ulonglong)local_858 & 0xffffffff);
      pFVar43 = pFVar43 + 0x68;
    }
  }
  uVar28 = (param_1->AggGeom).ConvexElems.ArrayNum;
  pTVar3 = &(pFVar29->AggGeom).ConvexElems;
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
  }
  piVar44 = &(pFVar29->AggGeom).ConvexElems.ArrayMax;
  if (*piVar44 < (int)uVar28) {
    puVar41 = &DAT_00000100;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,0x10,uVar28,&pTVar3->AllocatorInstance,(pFVar29->AggGeom).ConvexElems.ArrayNum,
               piVar44);
  }
  dVar214 = __real_3fe0000000000000;
  iVar26 = (param_1->AggGeom).ConvexElems.ArrayNum;
  uVar40 = (ulonglong)iVar26;
  pFVar45 = (FKConvexElem *)(param_1->AggGeom).ConvexElems.AllocatorInstance.Data;
  local_830 = pFVar45 + uVar40;
  local_850 = (FScriptContainerElement *)CONCAT44(local_850._4_4_,iVar26);
  while( true ) {
    pFVar33 = local_830;
    piVar44 = &(pFVar29->AggGeom).ConvexElems.ArrayMax;
    if ((param_1->AggGeom).ConvexElems.ArrayNum != (int)uVar40) {
      puVar41 = &local_863;
      local_863 = 0;
      `TCheckedPointerIterator<FKConvexElem_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (puVar41);
    }
    if (pFVar45 == pFVar33) break;
    pFVar33 = (FKConvexElem *)(pTVar3->AllocatorInstance).Data;
    if (((pFVar33 <= pFVar45) && (pFVar45 < pFVar33 + *piVar44)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar7 = (code *)swi(3);
      pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
      return pFVar29;
    }
    iVar26 = (pFVar29->AggGeom).ConvexElems.ArrayNum;
    if (iVar26 == *piVar44) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x100,0x10,&pTVar3->AllocatorInstance,piVar44);
    }
    (pFVar29->AggGeom).ConvexElems.ArrayNum = iVar26 + 1;
    pFVar33 = FKConvexElem::FKConvexElem
                        ((FKConvexElem *)
                         ((pTVar3->AllocatorInstance).Data + (longlong)iVar26 * 0x100),pFVar45);
    local_608 = 0;
    local_628 = 0;
    uStack_620 = 0;
    uStack_607 = 0;
    uStack_603 = 0;
    uStack_601 = 0;
    local_618 = 0;
    uStack_610 = 0;
    local_638 = 0;
    uStack_630 = 0;
    (pFVar33->ElemBox).Min.field0_0x0._s_0.X = 0.0;
    (pFVar33->ElemBox).Min.field0_0x0._s_0.Y = 0.0;
    (pFVar33->ElemBox).Min.field0_0x0._s_0.Z = 0.0;
    (pFVar33->ElemBox).Max.field0_0x0._s_0.X = 0.0;
    (pFVar33->ElemBox).Max.field0_0x0._s_0.Y = 0.0;
    (pFVar33->ElemBox).Max.field0_0x0._s_0.Z = 0.0;
    (pFVar33->ElemBox).IsValid = '\0';
    (pFVar33->ElemBox).Pad[0] = '\0';
    (pFVar33->ElemBox).Pad[1] = '\0';
    (pFVar33->ElemBox).Pad[2] = '\0';
    (pFVar33->ElemBox).Pad[3] = '\0';
    (pFVar33->ElemBox).Pad[4] = '\0';
    (pFVar33->ElemBox).Pad[5] = '\0';
    (pFVar33->ElemBox).Pad[6] = '\0';
    iVar26 = (pFVar33->VertexData).ArrayNum;
    uVar40 = (ulonglong)iVar26;
    pFVar48 = (pFVar33->VertexData).AllocatorInstance.Data;
    local_858 = (FKLevelSetElem *)CONCAT44(local_858._4_4_,iVar26);
    puVar41 = (undefined1 *)(uVar40 * 3);
    pFVar43 = pFVar48 + uVar40 * 0x18;
    local_680 = pFVar43;
    while( true ) {
      if ((pFVar33->VertexData).ArrayNum != (int)uVar40) {
        puVar41 = &local_862;
        local_862 = 0;
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(puVar41);
        uVar40 = (ulonglong)local_858 & 0xffffffff;
        pFVar43 = local_680;
      }
      if (pFVar48 == pFVar43) break;
      dVar150 = (param_2->Rotation).ZW.m128d_f64[1];
      dVar58 = (param_2->Scale3D).XY.m128d_f64[0];
      dVar149 = (param_2->Scale3D).XY.m128d_f64[1];
      if (param_3->bCenterTransformPivotPerShape == false) {
        auVar104 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar181 = auVar104._0_8_;
        auVar146 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar167 = *(double *)&pFVar48[0x10].field_0x0 * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar168 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        dVar58 = dVar58 * *(double *)&pFVar48->field_0x0;
        dVar149 = dVar149 * *(double *)(pFVar48 + 8);
        uVar183 = (undefined4)((ulonglong)dVar149 >> 0x20);
        local_658 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        auVar127 = blendpd(local_658,auVar104,2);
        auVar197._8_4_ = SUB84(dVar149,0);
        auVar197._0_8_ = dVar58;
        auVar197._12_4_ = uVar183;
        auVar198._0_8_ = auVar197._8_8_ * local_658._0_8_ - local_658._8_8_ * dVar58;
        auVar198._8_8_ = dVar167 * local_658._8_8_ - dVar181 * dVar149;
        auVar80._8_4_ = SUB84(dVar149,0);
        auVar80._0_8_ = dVar58;
        auVar80._12_4_ = uVar183;
        auVar13._8_4_ = SUB84(dVar168,0);
        auVar13._0_8_ = dVar167;
        auVar13._12_4_ = (int)((ulonglong)dVar168 >> 0x20);
        auVar59 = blendpd(auVar80,auVar13,2);
        auVar174._8_4_ = SUB84(auVar198._8_8_,0);
        auVar174._0_8_ = auVar198._0_8_;
        auVar174._12_4_ = (int)((ulonglong)auVar198._8_8_ >> 0x20);
        auVar81._0_8_ = auVar59._0_8_ * dVar181 - auVar127._0_8_ * dVar167;
        auVar81._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar127._8_8_ * dVar168;
        auVar59 = blendpd(auVar198,auVar81,2);
        dVar168 = auVar174._8_8_ + auVar174._8_8_;
        dVar180 = auVar81._0_8_ + auVar81._0_8_;
        auVar199._0_8_ = auVar59._0_8_ + auVar59._0_8_;
        auVar199._8_8_ = auVar59._8_8_ + auVar59._8_8_;
        auVar161._8_4_ = SUB84(dVar180,0);
        auVar161._0_8_ = dVar168;
        uVar183 = (undefined4)((ulonglong)dVar180 >> 0x20);
        auVar161._12_4_ = uVar183;
        auVar136._8_4_ = SUB84(dVar180,0);
        auVar136._0_8_ = dVar168;
        auVar136._12_4_ = uVar183;
        auVar59 = blendpd(auVar136,auVar199,2);
        auVar162._0_8_ = auVar161._8_8_ * auVar146._0_8_ - auVar146._8_8_ * dVar168;
        auVar162._8_8_ = auVar199._0_8_ * auVar146._8_8_ - dVar181 * dVar180;
        auVar82._8_4_ = SUB84(auVar162._8_8_,0);
        auVar82._0_8_ = auVar162._0_8_;
        auVar82._12_4_ = (int)((ulonglong)auVar162._8_8_ >> 0x20);
        auVar146 = blendpd(auVar146,auVar104,2);
        auVar137._0_8_ = auVar59._0_8_ * dVar181 - auVar146._0_8_ * auVar199._0_8_;
        auVar137._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar146._8_8_ * auVar199._8_8_;
        auVar104 = blendpd(auVar162,auVar137,2);
        local_4d8._0_8_ =
             dVar168 * dVar150 + dVar58 + auVar82._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_4d8._8_8_ =
             dVar180 * dVar150 + dVar149 + auVar137._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_4c8 = auVar199._0_8_ * dVar150 + dVar167 + auVar104._0_8_ +
                    (param_2->Translation).ZW.m128d_f64[0];
        *(undefined1 (*) [16])pFVar48 = local_4d8;
        *(double *)&pFVar48[0x10].field_0x0 = local_4c8;
      }
      else {
        auVar104 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar181 = ((pFVar45->ElemBox).Max.field0_0x0._s_0.X +
                  (pFVar45->ElemBox).Min.field0_0x0._s_0.X) * dVar214;
        dVar215 = ((pFVar45->ElemBox).Max.field0_0x0._s_0.Y +
                  (pFVar45->ElemBox).Min.field0_0x0._s_0.Y) * dVar214;
        dVar219 = ((pFVar45->ElemBox).Max.field0_0x0._s_0.Z +
                  (pFVar45->ElemBox).Min.field0_0x0._s_0.Z) * dVar214;
        local_400 = *(double *)&pFVar48->field_0x0 - dVar181;
        dStack_3f8 = *(double *)(pFVar48 + 8) - dVar215;
        local_3f0 = *(double *)&pFVar48[0x10].field_0x0 - dVar219;
        auVar146 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar180 = auVar146._0_8_;
        dVar58 = dVar58 * local_400;
        dVar149 = dVar149 * dStack_3f8;
        uVar183 = (undefined4)((ulonglong)dVar149 >> 0x20);
        local_658 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar167 = local_3f0 * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar168 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar194._8_4_ = SUB84(dVar149,0);
        auVar194._0_8_ = dVar58;
        auVar194._12_4_ = uVar183;
        auVar127 = blendpd(local_658,auVar146,2);
        auVar195._0_8_ = auVar194._8_8_ * local_658._0_8_ - local_658._8_8_ * dVar58;
        auVar195._8_8_ = dVar167 * local_658._8_8_ - dVar180 * dVar149;
        auVar173._8_4_ = SUB84(auVar195._8_8_,0);
        auVar173._0_8_ = auVar195._0_8_;
        auVar173._12_4_ = (int)((ulonglong)auVar195._8_8_ >> 0x20);
        auVar77._8_4_ = SUB84(dVar149,0);
        auVar77._0_8_ = dVar58;
        auVar77._12_4_ = uVar183;
        auVar12._8_4_ = SUB84(dVar168,0);
        auVar12._0_8_ = dVar167;
        auVar12._12_4_ = (int)((ulonglong)dVar168 >> 0x20);
        auVar59 = blendpd(auVar77,auVar12,2);
        auVar78._0_8_ = auVar59._0_8_ * dVar180 - auVar127._0_8_ * dVar167;
        auVar78._8_8_ = auVar59._8_8_ * auVar146._8_8_ - auVar127._8_8_ * dVar168;
        auVar59 = blendpd(auVar195,auVar78,2);
        dVar168 = auVar173._8_8_ + auVar173._8_8_;
        dVar182 = auVar78._0_8_ + auVar78._0_8_;
        auVar196._0_8_ = auVar59._0_8_ + auVar59._0_8_;
        auVar196._8_8_ = auVar59._8_8_ + auVar59._8_8_;
        auVar159._8_4_ = SUB84(dVar182,0);
        auVar159._0_8_ = dVar168;
        uVar183 = (undefined4)((ulonglong)dVar182 >> 0x20);
        auVar159._12_4_ = uVar183;
        auVar134._8_4_ = SUB84(dVar182,0);
        auVar134._0_8_ = dVar168;
        auVar134._12_4_ = uVar183;
        auVar59 = blendpd(auVar134,auVar196,2);
        auVar160._0_8_ = auVar159._8_8_ * auVar104._0_8_ - auVar104._8_8_ * dVar168;
        auVar160._8_8_ = auVar196._0_8_ * auVar104._8_8_ - dVar180 * dVar182;
        auVar79._8_4_ = SUB84(auVar160._8_8_,0);
        auVar79._0_8_ = auVar160._0_8_;
        auVar79._12_4_ = (int)((ulonglong)auVar160._8_8_ >> 0x20);
        auVar104 = blendpd(auVar104,auVar146,2);
        auVar135._0_8_ = auVar59._0_8_ * dVar180 - auVar104._0_8_ * auVar196._0_8_;
        auVar135._8_8_ = auVar59._8_8_ * auVar146._8_8_ - auVar104._8_8_ * auVar196._8_8_;
        auVar104 = blendpd(auVar160,auVar135,2);
        local_4f0 = dVar168 * dVar150 + dVar58 + auVar79._8_8_ +
                    (param_2->Translation).XY.m128d_f64[0];
        dStack_4e8 = dVar182 * dVar150 + dVar149 + auVar135._0_8_ +
                     (param_2->Translation).XY.m128d_f64[1];
        local_4e0 = auVar196._0_8_ * dVar150 + dVar167 + auVar104._0_8_ +
                    (param_2->Translation).ZW.m128d_f64[0];
        *(double *)&pFVar48->field_0x0 = dVar181 + local_4f0;
        *(double *)&pFVar48[0x10].field_0x0 = dVar219 + local_4e0;
        *(double *)(pFVar48 + 8) = dVar215 + dStack_4e8;
      }
      if ((pFVar33->ElemBox).IsValid == '\0') {
        dVar58 = *(double *)(pFVar48 + 8);
        (pFVar33->ElemBox).Max.field0_0x0._s_0.X = *(double *)&pFVar48->field_0x0;
        (pFVar33->ElemBox).Max.field0_0x0._s_0.Y = dVar58;
        pFVar5 = pFVar48 + 0x10;
        pFVar48 = pFVar48 + 0x18;
        (pFVar33->ElemBox).Max.field0_0x0._s_0.Z = *(double *)&pFVar5->field_0x0;
        dVar58 = (pFVar33->ElemBox).Max.field0_0x0._s_0.Y;
        (pFVar33->ElemBox).Min.field0_0x0._s_0.X = (pFVar33->ElemBox).Max.field0_0x0._s_0.X;
        (pFVar33->ElemBox).Min.field0_0x0._s_0.Y = dVar58;
        (pFVar33->ElemBox).Min.field0_0x0._s_0.Z = (pFVar33->ElemBox).Max.field0_0x0._s_0.Z;
        (pFVar33->ElemBox).IsValid = '\x01';
      }
      else {
        dVar58 = (pFVar33->ElemBox).Min.field0_0x0._s_0.X;
        if (*(double *)&pFVar48->field_0x0 <= dVar58) {
          dVar58 = *(double *)&pFVar48->field_0x0;
        }
        (pFVar33->ElemBox).Min.field0_0x0._s_0.X = dVar58;
        dVar58 = (pFVar33->ElemBox).Min.field0_0x0._s_0.Y;
        dVar149 = *(double *)(pFVar48 + 8);
        if (dVar58 <= *(double *)(pFVar48 + 8)) {
          dVar149 = dVar58;
        }
        (pFVar33->ElemBox).Min.field0_0x0._s_0.Y = dVar149;
        dVar58 = (pFVar33->ElemBox).Min.field0_0x0._s_0.Z;
        dVar149 = *(double *)&pFVar48[0x10].field_0x0;
        if (dVar58 <= *(double *)&pFVar48[0x10].field_0x0) {
          dVar149 = dVar58;
        }
        (pFVar33->ElemBox).Min.field0_0x0._s_0.Z = dVar149;
        dVar58 = (pFVar33->ElemBox).Max.field0_0x0._s_0.X;
        if (dVar58 <= *(double *)&pFVar48->field_0x0) {
          dVar58 = *(double *)&pFVar48->field_0x0;
        }
        (pFVar33->ElemBox).Max.field0_0x0._s_0.X = dVar58;
        dVar58 = (pFVar33->ElemBox).Max.field0_0x0._s_0.Y;
        if (dVar58 <= *(double *)(pFVar48 + 8)) {
          dVar58 = *(double *)(pFVar48 + 8);
        }
        (pFVar33->ElemBox).Max.field0_0x0._s_0.Y = dVar58;
        dVar58 = (pFVar33->ElemBox).Max.field0_0x0._s_0.Z;
        if (dVar58 <= *(double *)&pFVar48[0x10].field_0x0) {
          dVar58 = *(double *)&pFVar48[0x10].field_0x0;
        }
        pFVar48 = pFVar48 + 0x18;
        (pFVar33->ElemBox).Max.field0_0x0._s_0.Z = dVar58;
      }
    }
    uVar40 = (ulonglong)local_850 & 0xffffffff;
    pFVar45 = pFVar45 + 1;
  }
  iVar26 = (param_1->AggGeom).TaperedCapsuleElems.ArrayNum;
  pFVar29 = local_848;
  if (0 < iVar26) {
    if (!bVar18) {
      if (param_3->bWarnOnInvalidTransforms != false) {
        pFVar30 = FText::AsLocalizable_Advanced_LocText
                            (&local_5c8,L"UGeometryScriptLibrary_CollisionFunctions",
                             L"TransformSimpleCollisionShapes Non-Uniform Scale on Tapered Capsule",
                             L"TransformSimpleCollisionShapes: Cannot apply Non-Uniform Scale to Tapered Capsules"
                            );
        UE::Geometry::AppendWarning(local_840,InvalidInputs,pFVar30);
        if (local_5c8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_5c8.TextData.Reference + 0x10))();
        }
      }
      *local_838 = false;
    }
    pFVar29 = local_848;
    piVar44 = &(local_848->AggGeom).TaperedCapsuleElems.ArrayMax;
    if ((local_848->AggGeom).TaperedCapsuleElems.ArrayMax < iVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,iVar26,&(local_848->AggGeom).TaperedCapsuleElems.AllocatorInstance,
                 (local_848->AggGeom).TaperedCapsuleElems.ArrayNum,piVar44);
    }
    uVar24 = __xmm_80000000000000008000000000000000;
    iVar26 = (param_1->AggGeom).TaperedCapsuleElems.ArrayNum;
    puVar41 = (undefined1 *)(longlong)iVar26;
    pFVar51 = (FKTaperedCapsuleElem *)(param_1->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data;
    local_850 = (FScriptContainerElement *)CONCAT44(local_850._4_4_,iVar26);
    pFVar46 = pFVar51 + (longlong)puVar41;
    while( true ) {
      if ((param_1->AggGeom).TaperedCapsuleElems.ArrayNum != (int)puVar41) {
        puVar41 = &local_861;
        local_861 = 0;
        `TCheckedPointerIterator<FKTaperedCapsuleElem_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(puVar41);
      }
      if (pFVar51 == pFVar46) break;
      FKTaperedCapsuleElem::FKTaperedCapsuleElem(&local_6f8,pFVar51);
      if (param_3->bCenterTransformPivotPerShape == false) {
        auVar104 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
        dVar181 = auVar104._0_8_;
        local_658 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar150 = local_6f8.Center.field0_0x0._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
        dVar167 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
        auVar146 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
        dVar58 = (param_2->Scale3D).XY.m128d_f64[0] * local_6f8.Center.field0_0x0._s_0.X;
        dVar149 = (param_2->Scale3D).XY.m128d_f64[1] * local_6f8.Center.field0_0x0._s_0.Y;
        uVar183 = (undefined4)((ulonglong)dVar149 >> 0x20);
        dVar168 = (param_2->Rotation).ZW.m128d_f64[1];
        auVar200._8_4_ = SUB84(dVar149,0);
        auVar200._0_8_ = dVar58;
        auVar200._12_4_ = uVar183;
        auVar127 = blendpd(local_658,auVar104,2);
        auVar201._0_8_ = auVar200._8_8_ * local_658._0_8_ - local_658._8_8_ * dVar58;
        auVar201._8_8_ = dVar150 * local_658._8_8_ - dVar181 * dVar149;
        auVar175._8_4_ = SUB84(auVar201._8_8_,0);
        auVar175._0_8_ = auVar201._0_8_;
        auVar175._12_4_ = (int)((ulonglong)auVar201._8_8_ >> 0x20);
        auVar83._8_4_ = SUB84(dVar149,0);
        auVar83._0_8_ = dVar58;
        auVar83._12_4_ = uVar183;
        auVar14._8_4_ = SUB84(dVar167,0);
        auVar14._0_8_ = dVar150;
        auVar14._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
        auVar59 = blendpd(auVar83,auVar14,2);
        auVar84._0_8_ = auVar59._0_8_ * dVar181 - auVar127._0_8_ * dVar150;
        auVar84._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar127._8_8_ * dVar167;
        auVar59 = blendpd(auVar201,auVar84,2);
        dVar167 = auVar175._8_8_ + auVar175._8_8_;
        dVar180 = auVar84._0_8_ + auVar84._0_8_;
        auVar202._0_8_ = auVar59._0_8_ + auVar59._0_8_;
        auVar202._8_8_ = auVar59._8_8_ + auVar59._8_8_;
        auVar163._8_4_ = SUB84(dVar180,0);
        auVar163._0_8_ = dVar167;
        uVar183 = (undefined4)((ulonglong)dVar180 >> 0x20);
        auVar163._12_4_ = uVar183;
        auVar138._8_4_ = SUB84(dVar180,0);
        auVar138._0_8_ = dVar167;
        auVar138._12_4_ = uVar183;
        auVar59 = blendpd(auVar138,auVar202,2);
        auVar164._0_8_ = auVar163._8_8_ * auVar146._0_8_ - auVar146._8_8_ * dVar167;
        auVar164._8_8_ = auVar202._0_8_ * auVar146._8_8_ - dVar181 * dVar180;
        auVar85._8_4_ = SUB84(auVar164._8_8_,0);
        auVar85._0_8_ = auVar164._0_8_;
        auVar85._12_4_ = (int)((ulonglong)auVar164._8_8_ >> 0x20);
        auVar146 = blendpd(auVar146,auVar104,2);
        auVar139._0_8_ = auVar59._0_8_ * dVar181 - auVar146._0_8_ * auVar202._0_8_;
        auVar139._8_8_ = auVar59._8_8_ * auVar104._8_8_ - auVar146._8_8_ * auVar202._8_8_;
        auVar104 = blendpd(auVar164,auVar139,2);
        local_6f8.Center.field0_0x0._s_0.X =
             dVar167 * dVar168 + dVar58 + auVar85._8_8_ + (param_2->Translation).XY.m128d_f64[0];
        local_6f8.Center.field0_0x0._s_0.Y =
             dVar180 * dVar168 + dVar149 + auVar139._0_8_ + (param_2->Translation).XY.m128d_f64[1];
        local_6f8.Center.field0_0x0._s_0.Z =
             auVar202._0_8_ * dVar168 + dVar150 + auVar104._0_8_ +
             (param_2->Translation).ZW.m128d_f64[0];
        local_4a8 = local_6f8.Center.field0_0x0._s_0.X;
        dStack_4a0 = local_6f8.Center.field0_0x0._s_0.Y;
        local_498 = local_6f8.Center.field0_0x0._s_0.Z;
      }
      else {
        local_4c0 = (param_2->Translation).XY.m128d_f64[0];
        dStack_4b8 = (param_2->Translation).XY.m128d_f64[1];
        local_4b0 = (param_2->Translation).ZW.m128d_f64[0];
        local_6f8.Center.field0_0x0._s_0.X = local_6f8.Center.field0_0x0._s_0.X + local_4c0;
        local_6f8.Center.field0_0x0._s_0.Y = local_6f8.Center.field0_0x0._s_0.Y + dStack_4b8;
        local_6f8.Center.field0_0x0._s_0.Z = local_6f8.Center.field0_0x0._s_0.Z + local_4b0;
      }
      if (0.0 <= (double)CONCAT44(uVar103,uVar57)) {
        local_6f8.Radius0 = (float)((double)local_6f8.Radius0 * (double)CONCAT44(uVar103,uVar57));
        dVar149 = (double)local_6f8.Radius1 * (double)CONCAT44(uVar103,uVar57);
        dVar58 = (double)local_6f8.Length * (double)CONCAT44(uVar103,uVar57);
      }
      else {
        local_6f8.Radius0 = (float)((double)local_6f8.Radius1 * (double)CONCAT44(uVar103,uVar57));
        dVar149 = (double)local_6f8.Radius0 * (double)CONCAT44(uVar103,uVar57);
        dVar58 = (double)local_6f8.Length * (double)CONCAT44(uVar103,uVar57);
        dVar58 = (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) ^
                                  (uint)((ulonglong)uVar24 >> 0x20),SUB84(dVar58,0) ^ (uint)uVar24);
      }
      local_6f8.Radius1 = (float)dVar149;
      local_6f8.Length = (float)dVar58;
      auVar104 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
      auVar146 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
      pTVar31 = UE::Math::TRotator<double>::Quaternion(&local_6f8.Rotation,&local_2b8);
      dVar58 = auVar104._0_8_;
      auVar140._8_4_ = auVar104._0_4_;
      auVar140._0_8_ = dVar58;
      auVar140._12_4_ = auVar104._4_4_;
      dVar149 = auVar104._8_8_;
      dVar168 = pTVar31->Z;
      dVar181 = pTVar31->W;
      dVar180 = pTVar31->X;
      dVar182 = pTVar31->Y;
      auVar111._8_4_ = auVar104._8_4_;
      auVar111._0_8_ = dVar149;
      auVar111._12_4_ = auVar104._12_4_;
      dVar167 = auVar146._8_8_;
      dVar150 = auVar146._0_8_;
      auVar86._8_4_ = auVar146._8_4_;
      auVar86._0_8_ = dVar167;
      auVar86._12_4_ = auVar146._12_4_;
      auVar87._8_4_ = auVar146._0_4_;
      auVar87._0_8_ = dVar150;
      auVar87._12_4_ = auVar146._4_4_;
      local_598._0_8_ =
           dVar58 * dVar181 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar167 * dVar180 +
           dVar149 * dVar168 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar150 * dVar182 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_598._8_8_ =
           auVar140._8_8_ * dVar168 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + auVar86._8_8_ * dVar182
           + auVar111._8_8_ * dVar181 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           auVar87._8_8_ * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
      ;
      local_598._16_8_ =
           dVar58 * dVar182 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar167 * dVar168 +
           dVar149 * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar150 * dVar181 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_598._24_8_ =
           dVar58 * dVar180 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar167 * dVar181 +
           dVar149 * dVar182 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar150 * dVar168 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      pTVar32 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_598,&local_3a0);
      local_6f8.Rotation.Pitch = pTVar32->Pitch;
      local_6f8.Rotation.Yaw = pTVar32->Yaw;
      local_6f8.Rotation.Roll = pTVar32->Roll;
      pFVar6 = (FKTaperedCapsuleElem *)(pFVar29->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data
      ;
      if (((pFVar6 <= &local_6f8) && (&local_6f8 < pFVar6 + *piVar44)) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar25)) {
        pcVar7 = (code *)swi(3);
        pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
        return pFVar29;
      }
      iVar26 = (pFVar29->AggGeom).TaperedCapsuleElems.ArrayNum;
      if (iVar26 == *piVar44) {
        iVar26 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x870,&(pFVar29->AggGeom).TaperedCapsuleElems.AllocatorInstance,piVar44)
        ;
      }
      (pFVar29->AggGeom).TaperedCapsuleElems.ArrayNum = iVar26 + 1;
      FKTaperedCapsuleElem::FKTaperedCapsuleElem
                ((FKTaperedCapsuleElem *)
                 ((pFVar29->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data +
                 (longlong)iVar26 * 0x70),&local_6f8);
      FKTaperedCapsuleElem::~FKTaperedCapsuleElem(&local_6f8);
      puVar41 = (undefined1 *)((ulonglong)local_850 & 0xffffffff);
      pFVar51 = pFVar51 + 1;
    }
  }
  dVar58 = __real_3e45798ee0000000;
  iVar26 = (param_1->AggGeom).LevelSetElems.ArrayNum;
  if (iVar26 < 1) goto LAB_14cde9690;
  if (!bVar18) {
    pFVar48 = (param_1->AggGeom).LevelSetElems.AllocatorInstance.Data;
    pFVar43 = pFVar48 + 0x30;
    local_850 = pFVar48 + (longlong)iVar26 * 0xa0;
    auVar104 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
    uVar57 = UE::Math::TQuat<double>::Identity.X._0_4_;
    uVar103 = UE::Math::TQuat<double>::Identity.X._4_4_;
    uVar183 = UE::Math::TQuat<double>::Identity.Y._0_4_;
    uVar206 = UE::Math::TQuat<double>::Identity.Y._4_4_;
    do {
      uVar210 = SUB84(puVar41,0);
      if ((param_1->AggGeom).LevelSetElems.ArrayNum != iVar26) {
        puVar41 = &local_860;
        local_860 = 0;
        `TCheckedPointerIterator<FKLevelSetElem_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(puVar41);
        uVar210 = SUB84(puVar41,0);
        auVar104 = (undefined1  [16])UE::Math::TQuat<double>::Identity._16_16_;
        uVar57 = UE::Math::TQuat<double>::Identity.X._0_4_;
        uVar103 = UE::Math::TQuat<double>::Identity.X._4_4_;
        uVar183 = UE::Math::TQuat<double>::Identity.Y._0_4_;
        uVar206 = UE::Math::TQuat<double>::Identity.Y._4_4_;
      }
      if (pFVar48 == local_850) break;
      local_328 = *(double *)(pFVar43 + 0x30);
      dStack_320 = *(double *)(pFVar43 + 0x38);
      local_338 = *(double *)(pFVar43 + 0x20);
      dStack_330 = *(double *)(pFVar43 + 0x28);
      local_318 = *(double *)(pFVar43 + 0x40);
      dStack_310 = *(double *)(pFVar43 + 0x48);
      local_308 = *(double *)(pFVar43 + 0x50);
      dStack_300 = *(double *)(pFVar43 + 0x58);
      dVar149 = *(double *)(pFVar43 + 0x10) - auVar104._0_8_;
      dVar150 = *(double *)(pFVar43 + 0x18) - auVar104._8_8_;
      dVar167 = *(double *)pFVar43 - (double)CONCAT44(uVar103,uVar57);
      dVar168 = *(double *)(pFVar43 + 8) - (double)CONCAT44(uVar206,uVar183);
      uVar120 = SUB84(dVar58,0);
      auVar88._8_4_ = uVar120;
      auVar88._0_8_ = dVar58;
      uVar121 = (undefined4)((ulonglong)dVar58 >> 0x20);
      auVar88._12_4_ = uVar121;
      local_600 = dVar58;
      auVar141._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar149 >> 0x20) & uVar21,SUB84(dVar149,0) & uVar20);
      auVar141._8_4_ = SUB84(dVar150,0) & uVar22;
      auVar141._12_4_ = (uint)((ulonglong)dVar150 >> 0x20) & uVar23;
      auVar148._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar167 >> 0x20) & uVar21,SUB84(dVar167,0) & uVar20);
      auVar148._8_4_ = SUB84(dVar168,0) & uVar22;
      auVar148._12_4_ = (uint)((ulonglong)dVar168 >> 0x20) & uVar23;
      auVar89._8_8_ = -(ulonglong)(auVar88._8_8_ < auVar141._8_8_);
      auVar89._0_8_ = -(ulonglong)(dVar58 < auVar141._0_8_);
      iVar37 = movmskpd(uVar210,auVar89);
      auVar90._8_4_ = uVar120;
      auVar90._0_8_ = dVar58;
      auVar90._12_4_ = uVar121;
      auVar91._8_8_ = -(ulonglong)(auVar90._8_8_ < auVar148._8_8_);
      auVar91._0_8_ = -(ulonglong)(dVar58 < auVar148._0_8_);
      dVar149 = *(double *)pFVar43 + (double)CONCAT44(uVar103,uVar57);
      dVar150 = *(double *)(pFVar43 + 8) + (double)CONCAT44(uVar206,uVar183);
      dVar167 = *(double *)(pFVar43 + 0x10) + auVar104._0_8_;
      dVar168 = *(double *)(pFVar43 + 0x18) + auVar104._8_8_;
      uVar28 = movmskpd((int)local_850,auVar91);
      auVar165._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar149 >> 0x20) & uVar21,SUB84(dVar149,0) & uVar20);
      auVar165._8_4_ = SUB84(dVar150,0) & uVar22;
      auVar165._12_4_ = (uint)((ulonglong)dVar150 >> 0x20) & uVar23;
      auVar176._0_8_ =
           (double)CONCAT44((uint)((ulonglong)dVar167 >> 0x20) & uVar21,SUB84(dVar167,0) & uVar20);
      auVar176._8_4_ = SUB84(dVar168,0) & uVar22;
      auVar176._12_4_ = (uint)((ulonglong)dVar168 >> 0x20) & uVar23;
      uVar36 = iVar37 << 2 | uVar28;
      if (uVar36 != 0) {
        auVar92._8_4_ = uVar120;
        auVar92._0_8_ = dVar58;
        auVar92._12_4_ = uVar121;
        auVar93._8_8_ = -(ulonglong)(auVar92._8_8_ < auVar176._8_8_);
        auVar93._0_8_ = -(ulonglong)(dVar58 < auVar176._0_8_);
        uVar36 = movmskpd(uVar36,auVar93);
        auVar112._8_8_ = -(ulonglong)(dVar58 < auVar165._8_8_);
        auVar112._0_8_ = -(ulonglong)(dVar58 < auVar165._0_8_);
        iVar37 = movmskpd(uVar28,auVar112);
        if ((uVar36 & 0x3fffffff) != 0 || iVar37 != 0) goto LAB_14cde8f4f;
      }
      puVar41 = (undefined1 *)0x0;
      pFVar48 = pFVar48 + 0xa0;
      pFVar43 = pFVar43 + 0xa0;
      local_600 = dVar58;
    } while( true );
  }
LAB_14cde8f9f:
  pTVar47 = &(pFVar29->AggGeom).LevelSetElems;
  pFVar45 = (FKConvexElem *)&(pFVar29->AggGeom).LevelSetElems.ArrayMax;
  local_830 = pFVar45;
  if (*(int *)pFVar45 < iVar26) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa0,0x10,iVar26,&pTVar47->AllocatorInstance,
               (pFVar29->AggGeom).LevelSetElems.ArrayNum,(int *)pFVar45);
  }
  auVar104 = ___xmm_7ff00000000000007ff0000000000000;
  iVar26 = (param_1->AggGeom).LevelSetElems.ArrayNum;
  uVar40 = (ulonglong)iVar26;
  this = (FKLevelSetElem *)(param_1->AggGeom).LevelSetElems.AllocatorInstance.Data;
  local_850 = (FScriptContainerElement *)CONCAT44(local_850._4_4_,iVar26);
  pTVar49 = &this->Transform;
  local_858 = this + uVar40;
  while( true ) {
    if ((param_1->AggGeom).LevelSetElems.ArrayNum != (int)uVar40) {
      local_85f[0] = 0;
      `TCheckedPointerIterator<FKLevelSetElem_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_85f);
    }
    if (this == local_858) break;
    pFVar34 = (FKLevelSetElem *)(pTVar47->AllocatorInstance).Data;
    if (((pFVar34 <= this) && (this < pFVar34 + *(int *)pFVar45)) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar25)) {
      pcVar7 = (code *)swi(3);
      pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
      return pFVar29;
    }
    iVar26 = (pFVar29->AggGeom).LevelSetElems.ArrayNum;
    if (iVar26 == *(int *)pFVar45) {
      iVar26 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10a0,&pTVar47->AllocatorInstance,(int *)pFVar45);
      (pFVar29->AggGeom).LevelSetElems.ArrayNum = iVar26;
    }
    (pFVar29->AggGeom).LevelSetElems.ArrayNum = iVar26 + 1;
    pFVar34 = FKLevelSetElem::FKLevelSetElem
                        ((FKLevelSetElem *)
                         ((pTVar47->AllocatorInstance).Data + (longlong)iVar26 * 0xa0),this);
    p_Var19 = &(pTVar49->Rotation).ZW;
    if (param_3->bCenterTransformPivotPerShape == false) {
      local_178.Translation.XY.m128d_f64[0] = (pTVar49->Translation).XY.m128d_f64[0];
      local_178.Translation.XY.m128d_f64[1] = (pTVar49->Translation).XY.m128d_f64[1];
      local_178.Translation.ZW.m128d_f64[0] = (pTVar49->Translation).ZW.m128d_f64[0];
      local_178.Translation.ZW.m128d_f64[1] = (pTVar49->Translation).ZW.m128d_f64[1];
      local_178.Scale3D.XY.m128d_f64[0] = (pTVar49->Scale3D).XY.m128d_f64[0];
      local_178.Scale3D.XY.m128d_f64[1] = (pTVar49->Scale3D).XY.m128d_f64[1];
      local_178.Scale3D.ZW.m128d_f64[0] = (pTVar49->Scale3D).ZW.m128d_f64[0];
      local_178.Scale3D.ZW.m128d_f64[1] = (pTVar49->Scale3D).ZW.m128d_f64[1];
      local_238.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_238.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_238.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_238.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_238.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_238.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_238.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_238.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_238.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_238.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_238.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_238.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_178.Rotation.XY.m128d_f64[0] = (pTVar49->Rotation).XY.m128d_f64[0];
      local_178.Rotation.XY.m128d_f64[1] = (pTVar49->Rotation).XY.m128d_f64[1];
      local_178.Rotation.ZW.m128d_f64[0] = p_Var19->m128d_f64[0];
      local_178.Rotation.ZW.m128d_f64[1] = (pTVar49->Rotation).ZW.m128d_f64[1];
      UE::Math::TTransform<double>::Multiply(&local_238,&local_178,param_2);
      bVar25 = UE::Math::TTransform<double>::IsValid(&local_238);
      if ((!bVar25) &&
         (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_6321464880662577106>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\LevelSetElem.h"
                              ,0x2e,"InTransform.IsValid()"), bVar25)) {
        pcVar7 = (code *)swi(3);
        pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
        return pFVar29;
      }
      (pFVar34->Transform).Rotation.XY.m128d_f64[0] = local_238.Rotation.XY.m128d_f64[0];
      (pFVar34->Transform).Rotation.XY.m128d_f64[1] = local_238.Rotation.XY.m128d_f64[1];
      (pFVar34->Transform).Rotation.ZW.m128d_f64[0] = local_238.Rotation.ZW.m128d_f64[0];
      (pFVar34->Transform).Rotation.ZW.m128d_f64[1] = local_238.Rotation.ZW.m128d_f64[1];
      (pFVar34->Transform).Translation.XY.m128d_f64[0] = local_238.Translation.XY.m128d_f64[0];
      (pFVar34->Transform).Translation.XY.m128d_f64[1] = local_238.Translation.XY.m128d_f64[1];
      (pFVar34->Transform).Translation.ZW.m128d_f64[0] = local_238.Translation.ZW.m128d_f64[0];
      (pFVar34->Transform).Translation.ZW.m128d_f64[1] = local_238.Translation.ZW.m128d_f64[1];
      (pFVar34->Transform).Scale3D.XY.m128d_f64[0] = local_238.Scale3D.XY.m128d_f64[0];
      (pFVar34->Transform).Scale3D.XY.m128d_f64[1] = local_238.Scale3D.XY.m128d_f64[1];
      (pFVar34->Transform).Scale3D.ZW.m128d_f64[0] = local_238.Scale3D.ZW.m128d_f64[0];
      (pFVar34->Transform).Scale3D.ZW.m128d_f64[1] = local_238.Scale3D.ZW.m128d_f64[1];
    }
    else {
      local_298.Translation.XY.m128d_f64[0] = (pTVar49->Translation).XY.m128d_f64[0];
      local_298.Translation.XY.m128d_f64[1] = (pTVar49->Translation).XY.m128d_f64[1];
      local_298.Translation.ZW.m128d_f64[0] = (pTVar49->Translation).ZW.m128d_f64[0];
      local_298.Translation.ZW.m128d_f64[1] = (pTVar49->Translation).ZW.m128d_f64[1];
      local_298.Scale3D.XY.m128d_f64[0] = (pTVar49->Scale3D).XY.m128d_f64[0];
      local_298.Scale3D.XY.m128d_f64[1] = (pTVar49->Scale3D).XY.m128d_f64[1];
      local_298.Scale3D.ZW.m128d_f64[0] = (pTVar49->Scale3D).ZW.m128d_f64[0];
      local_298.Scale3D.ZW.m128d_f64[1] = (pTVar49->Scale3D).ZW.m128d_f64[1];
      local_298.Rotation.XY.m128d_f64 = *&(pTVar49->Rotation).XY.m128d_f64;
      local_298.Rotation.ZW.m128d_f64 = *&p_Var19->m128d_f64;
      pTVar35 = FKLevelSetElem::UntransformedAABB(this,&local_118);
      local_480 = ((pTVar35->Max).field0_0x0._s_0.Z + (pTVar35->Min).field0_0x0._s_0.Z) * dVar214;
      dStack_488 = ((pTVar35->Max).field0_0x0._s_0.Y + (pTVar35->Min).field0_0x0._s_0.Y) * dVar214;
      local_490 = ((pTVar35->Max).field0_0x0._s_0.X + (pTVar35->Min).field0_0x0._s_0.X) * dVar214;
      dVar150 = local_480 * local_298.Scale3D.ZW.m128d_f64[0];
      dVar167 = local_298.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar58 = local_298.Scale3D.XY.m128d_f64[0] * local_490;
      dVar149 = local_298.Scale3D.XY.m128d_f64[1] * dStack_488;
      uVar57 = (undefined4)((ulonglong)dVar149 >> 0x20);
      dVar180 = local_298.Rotation.ZW.m128d_f64[0];
      dVar182 = local_298.Rotation.ZW.m128d_f64[1];
      dVar181 = local_298.Rotation.XY.m128d_f64[1];
      auVar216._8_4_ = SUB84(dVar149,0);
      auVar216._0_8_ = dVar58;
      auVar216._12_4_ = uVar57;
      auVar94._8_4_ = local_298.Rotation.ZW.m128d_f64[0]._0_4_;
      auVar94._0_8_ = dVar181;
      auVar94._12_4_ = local_298.Rotation.ZW.m128d_f64[0]._4_4_;
      auVar59 = blendpd((undefined1  [16])local_298.Rotation.XY.m128d_f64,
                        (undefined1  [16])local_298.Rotation.ZW.m128d_f64,2);
      auVar217._0_8_ = auVar216._8_8_ * local_298.Rotation.XY.m128d_f64[0] - dVar181 * dVar58;
      auVar217._8_8_ = dVar150 * dVar181 - auVar94._8_8_ * dVar149;
      auVar113._8_4_ = SUB84(dVar149,0);
      auVar113._0_8_ = dVar58;
      auVar113._12_4_ = uVar57;
      auVar15._8_4_ = SUB84(dVar167,0);
      auVar15._0_8_ = dVar150;
      auVar15._12_4_ = (int)((ulonglong)dVar167 >> 0x20);
      auVar146 = blendpd(auVar113,auVar15,2);
      auVar114._0_8_ = auVar146._0_8_ * dVar180 - auVar59._0_8_ * dVar150;
      auVar114._8_8_ = auVar146._8_8_ * dVar182 - auVar59._8_8_ * dVar167;
      auVar146 = blendpd(auVar217,auVar114,2);
      dVar167 = auVar217._8_8_ + auVar217._8_8_;
      dVar168 = auVar114._0_8_ + auVar114._0_8_;
      uVar57 = SUB84(dVar168,0);
      uVar103 = (undefined4)((ulonglong)dVar168 >> 0x20);
      auVar218._0_8_ = auVar146._0_8_ + auVar146._0_8_;
      auVar218._8_8_ = auVar146._8_8_ + auVar146._8_8_;
      auVar142._8_4_ = uVar57;
      auVar142._0_8_ = dVar167;
      auVar142._12_4_ = uVar103;
      auVar95._8_4_ = uVar57;
      auVar95._0_8_ = dVar167;
      auVar95._12_4_ = uVar103;
      auVar115._8_4_ = uVar57;
      auVar115._0_8_ = dVar167;
      auVar115._12_4_ = uVar103;
      auVar146 = blendpd(auVar115,auVar218,2);
      auVar143._0_8_ = auVar142._8_8_ * local_298.Rotation.XY.m128d_f64[0] - dVar167 * dVar181;
      auVar143._8_8_ = auVar218._0_8_ * dVar181 - auVar95._8_8_ * dVar180;
      auVar96._8_4_ = SUB84(auVar218._8_8_,0);
      auVar96._0_8_ = auVar218._0_8_;
      auVar96._12_4_ = (int)((ulonglong)auVar218._8_8_ >> 0x20);
      local_478 = local_298.Translation.XY.m128d_f64[0];
      dStack_470 = local_298.Translation.XY.m128d_f64[1];
      auVar116._0_8_ = auVar146._0_8_ * dVar180 - auVar218._0_8_ * auVar59._0_8_;
      auVar116._8_8_ = auVar146._8_8_ * dVar182 - auVar96._8_8_ * auVar59._8_8_;
      auVar97._8_4_ = SUB84(auVar143._8_8_,0);
      auVar97._0_8_ = auVar143._0_8_;
      auVar97._12_4_ = (int)((ulonglong)auVar143._8_8_ >> 0x20);
      auVar146 = blendpd(auVar143,auVar116,2);
      dVar150 = auVar218._0_8_ * dVar182 + dVar150 + auVar146._0_8_ +
                local_298.Translation.ZW.m128d_f64[0];
      dVar58 = dVar167 * dVar182 + dVar58 + auVar97._8_8_ + local_298.Translation.XY.m128d_f64[0];
      dVar149 = dVar168 * dVar182 + dVar149 + auVar116._0_8_ + local_298.Translation.XY.m128d_f64[1]
      ;
      uVar57 = SUB84(dVar149,0);
      uVar103 = (undefined4)((ulonglong)dVar149 >> 0x20);
      local_460._8_4_ = uVar57;
      local_460._0_8_ = dVar58;
      local_460._12_4_ = uVar103;
      local_468 = local_298.Translation.ZW.m128d_f64[0];
      local_418 = local_298.Translation.XY.m128d_f64[0] - dVar58;
      local_408 = local_298.Translation.ZW.m128d_f64[0] - dVar150;
      auVar17._4_8_ = dVar182;
      auVar17._0_4_ = (int)((ulonglong)dVar58 >> 0x20);
      auVar203._0_8_ = auVar17._0_8_ << 0x20;
      auVar203._8_4_ = uVar57;
      auVar203._12_4_ = uVar103;
      dStack_410 = local_298.Translation.XY.m128d_f64[1] - auVar203._8_8_;
      pTVar42 = &local_1d8;
      local_298.Translation.ZW.m128d_f64[1] = 0.0;
      local_298.Translation.ZW.m128d_f64[0] = local_408;
      local_298.Translation.XY.m128d_f64[1] = dStack_410;
      local_298.Translation.XY.m128d_f64[0] = local_418;
      local_1d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1d8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1d8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_1d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      local_450 = dVar150;
      UE::Math::TTransform<double>::Multiply(pTVar42,&local_298,param_2);
      local_298.Rotation.ZW.m128d_f64[1] = local_1d8.Rotation.ZW.m128d_f64[1];
      local_298.Rotation.ZW.m128d_f64[0] = local_1d8.Rotation.ZW.m128d_f64[0];
      dVar58 = local_1d8.Translation.XY.m128d_f64[0] + dVar58;
      local_298.Rotation.XY.m128d_f64[1] = local_1d8.Rotation.XY.m128d_f64[1];
      local_298.Rotation.XY.m128d_f64[0] = local_1d8.Rotation.XY.m128d_f64[0];
      uVar28 = (uint)((ulonglong)local_1d8.Rotation.XY.m128d_f64[0] >> 0x20);
      uVar36 = (uint)((ulonglong)local_1d8.Rotation.XY.m128d_f64[1] >> 0x20);
      local_298.Scale3D.XY.m128d_f64[1] = local_1d8.Scale3D.XY.m128d_f64[1];
      local_298.Scale3D.XY.m128d_f64[0] = local_1d8.Scale3D.XY.m128d_f64[0];
      local_420 = local_1d8.Translation.ZW.m128d_f64[0];
      local_3d8 = local_1d8.Translation.ZW.m128d_f64[0] + dVar150;
      local_430 = local_1d8.Translation.XY.m128d_f64[0];
      dStack_428 = local_1d8.Translation.XY.m128d_f64[1];
      dVar149 = local_1d8.Translation.XY.m128d_f64[1] + auVar203._8_8_;
      local_298.Translation.ZW.m128d_f64[1] = 0.0;
      local_298.Translation.ZW.m128d_f64[0] = local_3d8;
      uVar208 = auVar104._0_4_;
      uVar39 = auVar104._4_4_;
      auVar98._0_8_ =
           (double)CONCAT44((uint)((ulonglong)local_1d8.Rotation.ZW.m128d_f64[0] >> 0x20) & uVar39,
                            SUB84(local_1d8.Rotation.ZW.m128d_f64[0],0) & uVar208);
      uVar220 = auVar104._8_4_;
      auVar98._8_4_ = SUB84(local_1d8.Rotation.ZW.m128d_f64[1],0) & uVar220;
      uVar221 = auVar104._12_4_;
      auVar98._12_4_ = (uint)((ulonglong)local_1d8.Rotation.ZW.m128d_f64[1] >> 0x20) & uVar221;
      local_298.Scale3D.ZW.m128d_f64[0] = local_1d8.Scale3D.ZW.m128d_f64[0];
      local_298.Scale3D.ZW.m128d_f64[1] = local_1d8.Scale3D.ZW.m128d_f64[1];
      local_3e8[1] = dVar149;
      local_3e8[0] = dVar58;
      dVar150 = auVar104._0_8_;
      dVar167 = auVar104._8_8_;
      auVar99._8_8_ = -(ulonglong)(auVar98._8_8_ == dVar167);
      auVar99._0_8_ = -(ulonglong)(auVar98._0_8_ == dVar150);
      auVar117._0_8_ =
           (double)CONCAT44(uVar28 & uVar39,SUB84(local_1d8.Rotation.XY.m128d_f64[0],0) & uVar208);
      auVar117._8_4_ = SUB84(local_1d8.Rotation.XY.m128d_f64[1],0) & uVar220;
      auVar117._12_4_ = uVar36 & uVar221;
      uVar38 = movmskpd((int)pTVar42,auVar99);
      auVar118._8_8_ = -(ulonglong)(auVar117._8_8_ == dVar167);
      auVar118._0_8_ = -(ulonglong)(auVar117._0_8_ == dVar150);
      iVar26 = movmskpd(extraout_EAX,auVar118);
      local_298.Translation.XY.m128d_f64 = local_3e8;
      if ((uVar38 & 0x3fffffff) == 0 && iVar26 == 0) {
        auVar166._8_8_ = -(ulonglong)(dVar167 == 0.0);
        auVar166._0_8_ =
             -(ulonglong)
              ((double)CONCAT44((uint)((ulonglong)local_3d8 >> 0x20) & uVar39,
                                SUB84(local_3d8,0) & uVar208) == dVar150);
        auVar100._0_8_ =
             (double)CONCAT44(uVar39 & (uint)((ulonglong)dVar58 >> 0x20),uVar208 & SUB84(dVar58,0));
        auVar100._8_4_ = uVar220 & SUB84(dVar149,0);
        auVar100._12_4_ = uVar221 & (uint)((ulonglong)dVar149 >> 0x20);
        uVar38 = movmskpd(0,auVar166);
        auVar101._8_8_ = -(ulonglong)(auVar100._8_8_ == dVar167);
        auVar101._0_8_ = -(ulonglong)(auVar100._0_8_ == dVar150);
        iVar26 = movmskpd(iVar26,auVar101);
        if ((uVar38 & 0x3fffffff) != 0 || iVar26 != 0) goto LAB_14cde94c3;
        auVar177._0_8_ =
             (double)CONCAT44((uint)((ulonglong)local_1d8.Scale3D.XY.m128d_f64[0] >> 0x20) & uVar39,
                              SUB84(local_1d8.Scale3D.XY.m128d_f64[0],0) & uVar208);
        auVar177._8_4_ = SUB84(local_1d8.Scale3D.XY.m128d_f64[1],0) & uVar220;
        auVar177._12_4_ = (uint)((ulonglong)local_1d8.Scale3D.XY.m128d_f64[1] >> 0x20) & uVar221;
        lVar56 = -(ulonglong)
                  ((double)CONCAT44(local_1d8.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar221,
                                    local_1d8.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar220) == dVar167);
        auVar9._8_4_ = (int)lVar56;
        auVar9._0_8_ = -(ulonglong)
                        ((double)CONCAT44(local_1d8.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar39,
                                          local_1d8.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar208) ==
                        dVar150);
        auVar9._12_4_ = (int)((ulonglong)lVar56 >> 0x20);
        uVar38 = movmskpd(0,auVar9);
        auVar178._8_8_ = -(ulonglong)(auVar177._8_8_ == dVar167);
        auVar178._0_8_ = -(ulonglong)(auVar177._0_8_ == dVar150);
        iVar26 = movmskpd(iVar26,auVar178);
        if ((uVar38 & 0x3fffffff) != 0 || iVar26 != 0) goto LAB_14cde94c3;
        dVar167 = local_1d8.Rotation.ZW.m128d_f64[0] * local_1d8.Rotation.ZW.m128d_f64[0] +
                  local_1d8.Rotation.XY.m128d_f64[0] * local_1d8.Rotation.XY.m128d_f64[0];
        dVar168 = local_1d8.Rotation.ZW.m128d_f64[1] * local_1d8.Rotation.ZW.m128d_f64[1] +
                  local_1d8.Rotation.XY.m128d_f64[1] * local_1d8.Rotation.XY.m128d_f64[1];
        auVar179._8_4_ = SUB84(dVar168,0);
        auVar179._0_8_ = dVar167;
        auVar179._12_4_ = (int)((ulonglong)dVar168 >> 0x20);
        dVar149 = auVar179._8_8_ + dVar167;
        dVar58 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar149;
        dVar150 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar167 + dVar168);
        auVar144._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar58 >> 0x20) & uVar21,SUB84(dVar58,0) & uVar20);
        auVar144._8_4_ = SUB84(dVar150,0) & uVar22;
        auVar144._12_4_ = (uint)((ulonglong)dVar150 >> 0x20) & uVar23;
        auVar119._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3] < auVar144._8_8_);
        auVar119._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2] < auVar144._0_8_);
        uVar39 = movmskpd(0,auVar119);
        dVar149 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar149;
        dVar58 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar167 + dVar168);
        auVar145._0_8_ =
             (double)CONCAT44((uint)((ulonglong)dVar149 >> 0x20) & uVar21,SUB84(dVar149,0) & uVar20)
        ;
        auVar145._8_4_ = SUB84(dVar58,0) & uVar22;
        auVar145._12_4_ = (uint)((ulonglong)dVar58 >> 0x20) & uVar23;
        auVar102._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1] < auVar145._8_8_);
        auVar102._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0] < auVar145._0_8_);
        iVar26 = movmskpd(iVar26,auVar102);
        uVar38 = SUB84(local_1d8.Rotation.XY.m128d_f64[0],0);
        uVar208 = SUB84(local_1d8.Rotation.XY.m128d_f64[1],0);
        if ((uVar39 & 0x3fffffff) != 0 || iVar26 != 0) goto LAB_14cde94c3;
      }
      else {
LAB_14cde94c3:
        bVar25 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_6321464880662577106>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\LevelSetElem.h"
                            ,0x2e,"InTransform.IsValid()");
        if (bVar25) {
          pcVar7 = (code *)swi(3);
          pFVar29 = (FGeometryScriptSimpleCollision *)(*pcVar7)();
          return pFVar29;
        }
        uVar38 = local_298.Rotation.XY.m128d_f64[0]._0_4_;
        uVar28 = local_298.Rotation.XY.m128d_f64[0]._4_4_;
        uVar208 = local_298.Rotation.XY.m128d_f64[1]._0_4_;
        uVar36 = local_298.Rotation.XY.m128d_f64[1]._4_4_;
      }
      *(uint *)(pFVar34->Transform).Rotation.XY.m128d_f64 = uVar38;
      *(uint *)((longlong)(pFVar34->Transform).Rotation.XY.m128d_f64 + 4) = uVar28;
      *(uint *)((pFVar34->Transform).Rotation.XY.m128d_f64 + 1) = uVar208;
      *(uint *)((longlong)(pFVar34->Transform).Rotation.XY.m128d_f64 + 0xc) = uVar36;
      (pFVar34->Transform).Rotation.ZW.m128d_f64[0] = local_298.Rotation.ZW.m128d_f64[0];
      (pFVar34->Transform).Rotation.ZW.m128d_f64[1] = local_298.Rotation.ZW.m128d_f64[1];
      (pFVar34->Transform).Translation.XY.m128d_f64[0] = local_298.Translation.XY.m128d_f64[0];
      (pFVar34->Transform).Translation.XY.m128d_f64[1] = local_298.Translation.XY.m128d_f64[1];
      (pFVar34->Transform).Translation.ZW.m128d_f64[0] = local_298.Translation.ZW.m128d_f64[0];
      (pFVar34->Transform).Translation.ZW.m128d_f64[1] = local_298.Translation.ZW.m128d_f64[1];
      (pFVar34->Transform).Scale3D.XY.m128d_f64[0] = local_298.Scale3D.XY.m128d_f64[0];
      (pFVar34->Transform).Scale3D.XY.m128d_f64[1] = local_298.Scale3D.XY.m128d_f64[1];
      (pFVar34->Transform).Scale3D.ZW.m128d_f64[0] = local_298.Scale3D.ZW.m128d_f64[0];
      (pFVar34->Transform).Scale3D.ZW.m128d_f64[1] = local_298.Scale3D.ZW.m128d_f64[1];
    }
    this = this + 1;
    pTVar49 = (TTransform<double> *)((TSharedPtr<Chaos::FLevelSet,1> *)(pTVar49 + 1) + 4);
    uVar40 = (ulonglong)local_850 & 0xffffffff;
    pFVar45 = local_830;
  }
LAB_14cde9690:
  if (0 < (param_1->AggGeom).SkinnedLevelSetElems.ArrayNum) {
    if (param_3->bWarnOnInvalidTransforms != false) {
      pFVar30 = FText::AsLocalizable_Advanced_LocText
                          (&local_5a8,L"UGeometryScriptLibrary_CollisionFunctions",
                           L"TransformSimpleCollisionShapes Cannot Transform Skinned Level Set",
                           L"TransformSimpleCollisionShapes: Cannot transform Skinned Level Sets");
      UE::Geometry::AppendWarning(local_840,InvalidInputs,pFVar30);
      if (local_5a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
      }
    }
    pFVar29 = local_848;
    TArray<FKSkinnedLevelSetElem,TSizedDefaultAllocator<32>_>::operator=
              (&(local_848->AggGeom).SkinnedLevelSetElems,&(param_1->AggGeom).SkinnedLevelSetElems);
    *local_838 = false;
    local_848 = pFVar29;
  }
  return local_848;
LAB_14cde8f4f:
  if (param_3->bWarnOnInvalidTransforms != false) {
    pFVar30 = FText::AsLocalizable_Advanced_LocText
                        (&local_5b8,L"UGeometryScriptLibrary_CollisionFunctions",
                         L"TransformSimpleCollisionShapes Unsupported Level Set Transform",
                         L"TransformSimpleCollisionShapes: Cannot apply requested transform to Level Set"
                        );
    UE::Geometry::AppendWarning(local_840,InvalidInputs,pFVar30);
    if (local_5b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5b8.TextData.Reference + 0x10))();
    }
  }
  *local_838 = false;
  goto LAB_14cde8f9f;
}

// execApproximateConvexHullsWithSimplerCollisionShapes @ 14cdf3de0

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execApproximateConvexHullsWithSimplerCollisionShapes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptConvexHullApproximationOptions *pFVar1;
  FProperty *pFVar2;
  bool *pbVar3;
  FGeometryScriptConvexHullApproximationOptions *pFVar4;
  FGeometryScriptSimpleCollision *pFVar5;
  bool local_res10 [16];
  UGeometryScriptDebug *local_res20;
  FGeometryScriptConvexHullApproximationOptions local_d8;
  FGeometryScriptSimpleCollision local_c8;
  
  local_c8.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SphereElems.ArrayNum = 0;
  local_c8.AggGeom.SphereElems.ArrayMax = 0;
  local_c8.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.BoxElems.ArrayNum = 0;
  local_c8.AggGeom.BoxElems.ArrayMax = 0;
  local_c8.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SphylElems.ArrayNum = 0;
  local_c8.AggGeom.SphylElems.ArrayMax = 0;
  local_c8.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.ConvexElems.ArrayNum = 0;
  local_c8.AggGeom.ConvexElems.ArrayMax = 0;
  local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_c8.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.LevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.LevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_c8.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_c8.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.bFitSpheres = true;
  local_d8.bFitBoxes = true;
  local_d8.bFitCapsules = false;
  pFVar5 = &local_c8;
  if ((FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision *)0x0) {
    pFVar5 = (FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress;
  }
  local_d8.DistanceThreshold = 5.0;
  local_d8.VolumeDiffThreshold_Fraction = 0.15;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pFVar1 = (FGeometryScriptConvexHullApproximationOptions *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_d8;
  if (pFVar1 != (FGeometryScriptConvexHullApproximationOptions *)0x0) {
    pFVar4 = pFVar1;
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
  local_res20 = (UGeometryScriptDebug *)0x0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ApproximateConvexHullsWithSimplerCollisionShapes(pFVar5,pFVar4,pbVar3,local_res20);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_c8.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_c8.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_c8.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_c8.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_c8.AggGeom.SphylElems.AllocatorInstance.Data,
             local_c8.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_c8.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_c8.AggGeom.BoxElems.AllocatorInstance.Data,
             local_c8.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_c8.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_c8.AggGeom.SphereElems.AllocatorInstance.Data,
             local_c8.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_c8.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execCombineSimpleCollision @ 14cdf6430

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execCombineSimpleCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometryScriptSimpleCollision *pFVar2;
  FGeometryScriptSimpleCollision *pFVar3;
  UGeometryScriptDebug *local_res10;
  FGeometryScriptSimpleCollision local_158;
  FGeometryScriptSimpleCollision local_b8;
  
  local_b8.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.SphereElems.ArrayNum = 0;
  local_b8.AggGeom.SphereElems.ArrayMax = 0;
  local_b8.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.BoxElems.ArrayNum = 0;
  local_b8.AggGeom.BoxElems.ArrayMax = 0;
  local_b8.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.SphylElems.ArrayNum = 0;
  local_b8.AggGeom.SphylElems.ArrayMax = 0;
  local_b8.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.ConvexElems.ArrayNum = 0;
  local_b8.AggGeom.ConvexElems.ArrayMax = 0;
  local_b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_b8.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_b8.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.LevelSetElems.ArrayNum = 0;
  local_b8.AggGeom.LevelSetElems.ArrayMax = 0;
  local_b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_b8.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_b8.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_b8.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_b8.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_b8.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_158.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.SphereElems.ArrayNum = 0;
  local_158.AggGeom.SphereElems.ArrayMax = 0;
  pFVar3 = &local_b8;
  if ((FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision *)0x0) {
    pFVar3 = (FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress;
  }
  local_158.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.BoxElems.ArrayNum = 0;
  local_158.AggGeom.BoxElems.ArrayMax = 0;
  local_158.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.SphylElems.ArrayNum = 0;
  local_158.AggGeom.SphylElems.ArrayMax = 0;
  local_158.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.ConvexElems.ArrayNum = 0;
  local_158.AggGeom.ConvexElems.ArrayMax = 0;
  local_158.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_158.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_158.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.LevelSetElems.ArrayNum = 0;
  local_158.AggGeom.LevelSetElems.ArrayMax = 0;
  local_158.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_158.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_158.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_158.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_158.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_158.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_158.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_158.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_158.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res10 = (UGeometryScriptDebug *)0x0;
  pFVar2 = &local_158;
  if ((FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision *)0x0) {
    pFVar2 = (FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  CombineSimpleCollision(pFVar3,pFVar2,local_res10);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_158.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_158.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_158.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_158.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_158.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_158.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_158.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_158.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_158.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_158.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_158.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_158.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_158.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_158.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_158.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_158.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_158.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_158.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_158.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_158.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_158.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_158.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_158.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_158.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_158.AggGeom.SphylElems.AllocatorInstance.Data,
             local_158.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_158.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_158.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_158.AggGeom.BoxElems.AllocatorInstance.Data,
             local_158.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_158.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_158.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_158.AggGeom.SphereElems.AllocatorInstance.Data,
             local_158.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_158.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_158.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_b8.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_b8.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_b8.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_b8.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_b8.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_b8.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_b8.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_b8.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_b8.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_b8.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_b8.AggGeom.SphylElems.AllocatorInstance.Data,
             local_b8.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_b8.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_b8.AggGeom.BoxElems.AllocatorInstance.Data,
             local_b8.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_b8.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_b8.AggGeom.SphereElems.AllocatorInstance.Data,
             local_b8.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_b8.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_b8.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execCombineSimpleCollisionArray @ 14cdf6800

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execCombineSimpleCollisionArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UGeometryScriptDebug *pUVar3;
  FGeometryScriptSimpleCollision *pFVar4;
  FGeometryScriptSimpleCollision **ppFVar5;
  FGeometryScriptSimpleCollision *pFVar6;
  FGeometryScriptSimpleCollision *pFVar7;
  undefined1 local_res10 [8];
  UGeometryScriptDebug *local_res20;
  FGeometryScriptSimpleCollision *local_d8;
  undefined8 local_d0;
  FGeometryScriptSimpleCollision local_c8;
  
  local_d8 = (FGeometryScriptSimpleCollision *)0x0;
  local_d0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_c8.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SphereElems.ArrayNum = 0;
  local_c8.AggGeom.SphereElems.ArrayMax = 0;
  ppFVar5 = &local_d8;
  if ((FGeometryScriptSimpleCollision **)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision **)0x0) {
    ppFVar5 = (FGeometryScriptSimpleCollision **)param_2->MostRecentPropertyAddress;
  }
  local_c8.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.BoxElems.ArrayNum = 0;
  local_c8.AggGeom.BoxElems.ArrayMax = 0;
  local_c8.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SphylElems.ArrayNum = 0;
  local_c8.AggGeom.SphylElems.ArrayMax = 0;
  local_c8.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.ConvexElems.ArrayNum = 0;
  local_c8.AggGeom.ConvexElems.ArrayMax = 0;
  local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_c8.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.LevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.LevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_c8.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_c8.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res20 = (UGeometryScriptDebug *)0x0;
  pFVar7 = &local_c8;
  if ((FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision *)0x0) {
    pFVar7 = (FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = *(int *)(ppFVar5 + 1);
  pFVar4 = *ppFVar5;
  pFVar6 = pFVar4 + iVar1;
  while( true ) {
    if (*(int *)(ppFVar5 + 1) != iVar1) {
      `TCheckedPointerIterator<FGeometryScriptSimpleCollision_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar4 == pFVar6) break;
    CombineSimpleCollision(pFVar7,pFVar4,pUVar3);
    pFVar4 = pFVar4 + 1;
  }
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_c8.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_c8.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_c8.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_c8.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_c8.AggGeom.SphylElems.AllocatorInstance.Data,
             local_c8.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_c8.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_c8.AggGeom.BoxElems.AllocatorInstance.Data,
             local_c8.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_c8.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_c8.AggGeom.SphereElems.AllocatorInstance.Data,
             local_c8.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_c8.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  DestructItems<FGeometryScriptSimpleCollision,int>(local_d8,(int)local_d0);
  if (local_d8 != (FGeometryScriptSimpleCollision *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}

// execComputeNavigableConvexDecomposition @ 14cdf8430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execComputeNavigableConvexDecomposition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  uchar *puVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_178;
  ITextData *local_170;
  uint local_168;
  UDynamicMesh *local_160;
  FKAggregateGeom local_158;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  uchar *local_68;
  FKAggregateGeom *local_60;
  code *local_58;
  uchar **local_50;
  FText local_48;
  
  local_160 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_b8 = ___xmm_40240000000000004059000000000000;
  uStack_b0 = _UNK_1529c4848;
  local_a8 = 1;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res20 = 0;
  puVar9 = (uchar *)&local_b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar9 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar5 = local_res20;
  local_158.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SphereElems.ArrayNum = 0;
  local_158.SphereElems.ArrayMax = 0;
  local_158.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_158.BoxElems.ArrayNum = 0;
  local_158.BoxElems.ArrayMax = 0;
  local_158.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SphylElems.ArrayNum = 0;
  local_158.SphylElems.ArrayMax = 0;
  local_158.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ConvexElems.ArrayNum = 0;
  local_158.ConvexElems.ArrayMax = 0;
  local_158.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.TaperedCapsuleElems.ArrayNum = 0;
  local_158.TaperedCapsuleElems.ArrayMax = 0;
  local_158.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.LevelSetElems.ArrayNum = 0;
  local_158.LevelSetElems.ArrayMax = 0;
  local_158.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SkinnedLevelSetElems.ArrayNum = 0;
  local_158.SkinnedLevelSetElems.ArrayMax = 0;
  local_158.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.MLLevelSetElems.ArrayNum = 0;
  local_158.MLLevelSetElems.ArrayMax = 0;
  local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_158.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_158.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_158.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (local_160 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UGeometryScriptLibrary_CollisionFunctions",
                      L"ComputeNavigableConvexDecomposition_NullInput",
                      L"ComputeNavigableConvexDecomposition: Dynamic Mesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_170 = (this->TextData).Reference;
    local_178 = 0x200;
    if (local_170 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170 + 8))(local_170,local_res10);
    }
    local_168 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_178) &&
          (&local_178 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
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
      pFVar3 = ((ForAnyElementType *)(lVar5 + 0x28))->Data;
      pFVar3[lVar8 * 0x18] = local_178._0_1_;
      pFVar3[lVar8 * 0x18 + 1] = local_178._1_1_;
      *(undefined8 *)(pFVar3 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar8 * 0x18 + 8) = local_170;
      if (local_170 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170 + 8))(local_170,local_res18);
      }
      *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) = local_168;
    }
    if (local_170 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170 + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    local_60 = &local_158;
    local_50 = &local_68;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_68 = puVar9;
    UDynamicMesh::ProcessMesh
              (local_160,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_58);
  }
  FKAggregateGeom::FreeRenderInfo(param_3);
  FKAggregateGeom::CloneAgg(param_3,&local_158);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_158.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_158.MLLevelSetElems.AllocatorInstance.Data,
             local_158.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_158.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_158.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_158.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_158.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_158.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_158.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_158.LevelSetElems.AllocatorInstance.Data,
             local_158.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_158.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_158.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_158.TaperedCapsuleElems.AllocatorInstance.Data,
             local_158.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_158.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_158.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_158.ConvexElems.AllocatorInstance.Data,
             local_158.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_158.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_158.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_158.SphylElems.AllocatorInstance.Data,
             local_158.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_158.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_158.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_158.BoxElems.AllocatorInstance.Data,local_158.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_158.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_158.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_158.SphereElems.AllocatorInstance.Data,
             local_158.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_158.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_158.SphereElems.AllocatorInstance.Data);
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  return;
}

// execComputeNegativeSpace @ 14cdf88b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execComputeNegativeSpace
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined2 *puVar3;
  longlong lVar4;
  code *pcVar5;
  FSphereCovering *this;
  bool bVar6;
  int iVar7;
  FText *this_00;
  longlong lVar8;
  longlong *plVar9;
  FComputeNegativeSpaceOptions *pFVar10;
  undefined1 auStack_268 [32];
  undefined2 *local_248;
  undefined2 *local_240;
  longlong local_238;
  longlong local_230;
  undefined8 local_228;
  FGeometryScriptSphereCovering local_218;
  undefined2 local_208;
  ITextData *local_200;
  uint local_1f8;
  undefined1 local_1f0 [8];
  longlong local_1e8;
  undefined1 local_1e0 [8];
  FComputeNegativeSpaceOptions local_1d8;
  longlong local_1a0;
  TReferenceControllerBase<1> *pTStack_198;
  undefined8 local_190;
  TReferenceControllerBase<1> *pTStack_188;
  FText local_180;
  undefined1 local_168 [120];
  ITextData *local_f0;
  longlong local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_268;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_1a0 = 0;
  pTStack_198 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_190 = 0;
  pTStack_188 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  local_1d8.MinSampleSpacing = ___xmm_40000000000000003ff0000000000000;
  local_1d8.NegativeSpaceTolerance = _UNK_150744178;
  plVar9 = &local_1a0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  local_1d8.SampleMethod = Uniform;
  local_1d8.bRequireSearchSampleCoverage = false;
  local_1d8.MinRadius = __real_4024000000000000;
  local_1d8.bOnlyConnectedToHull = false;
  local_1d8.MaxVoxelsPerDim = 0x80;
  local_1d8.TargetNumSamples = 0x32;
  local_1d8.ToleranceDirectionalScales.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ToleranceDirectionalScales.ArrayNum = 0;
  local_1d8.ToleranceDirectionalScales.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  local_1e8 = 0;
  pFVar10 = &local_1d8;
  if ((FComputeNegativeSpaceOptions *)param_2->MostRecentPropertyAddress !=
      (FComputeNegativeSpaceOptions *)0x0) {
    pFVar10 = (FComputeNegativeSpaceOptions *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  lVar8 = local_1e8;
  local_218.Spheres.Object = (FSphereCovering *)0x0;
  local_218.Spheres.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((plVar9[2] == 0) || (*plVar9 == 0)) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_180,L"UGeometryScriptLibrary_CollisionFunctions",
                         L"ComputeNegativeSpace_Null_BVH",
                         L"ComputeNegativeSpace: BVH must be initialized");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this_00);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_200 = (this_00->TextData).Reference;
    local_208 = 0x200;
    if (local_200 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200 + 8))(local_200,local_1f0);
    }
    local_1f8 = this_00->Flags;
    if (lVar8 != 0) {
      puVar3 = *(undefined2 **)(lVar8 + 0x28);
      if ((puVar3 <= &local_208) && (&local_208 < puVar3 + (longlong)*(int *)(lVar8 + 0x34) * 0xc))
      {
        local_230 = (longlong)*(int *)(lVar8 + 0x30);
        local_228 = 0x18;
        local_248 = &local_208;
        local_240 = puVar3;
        local_238 = (longlong)*(int *)(lVar8 + 0x34);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = *(int *)(lVar8 + 0x30);
      if (iVar7 == *(int *)(lVar8 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar8 + 0x28),(int *)(lVar8 + 0x34));
      }
      lVar4 = *(longlong *)(lVar8 + 0x28);
      *(int *)(lVar8 + 0x30) = iVar7 + 1;
      lVar8 = (longlong)iVar7;
      *(undefined1 *)(lVar4 + lVar8 * 0x18) = (undefined1)local_208;
      *(undefined1 *)(lVar4 + 1 + lVar8 * 0x18) = local_208._1_1_;
      *(undefined8 *)(lVar4 + 8 + lVar8 * 0x18) = 0;
      *(ITextData **)(lVar4 + 8 + lVar8 * 0x18) = local_200;
      if (local_200 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_200 + 8))(local_200,local_1e0);
      }
      *(uint *)(lVar4 + 0x10 + lVar8 * 0x18) = local_1f8;
    }
    if (local_200 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200 + 0x10))();
    }
    if (local_180.TextData.Reference == (ITextData *)0x0) goto LAB_14cdf8c6d;
  }
  else {
    UELocal::ConvertNegativeSpaceOptions((FNegativeSpaceSampleSettings *)local_168,pFVar10);
    FGeometryScriptSphereCovering::Reset(&local_218);
    if ((local_218.Spheres.Object == (FSphereCovering *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this = local_218.Spheres.Object;
    if ((plVar9[2] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Geometry::FSphereCovering::AddNegativeSpace
              (this,(TFastWindingTree<UE::Geometry::FDynamicMesh3> *)plVar9[2],
               (FNegativeSpaceSampleSettings *)local_168,false);
    if (local_e8 != 0) {
      plVar9 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar9 = local_c0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    if (local_168._80_8_ == 0) goto LAB_14cdf8c6d;
    local_180.TextData.Reference = (ITextData *)(local_168 + 0x60);
    if (local_f0 != (ITextData *)0x0) {
      local_180.TextData.Reference = local_f0;
    }
  }
  (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
LAB_14cdf8c6d:
  if (param_3 != &local_218) {
    *(FSphereCovering **)param_3 = local_218.Spheres.Object;
    local_218.Spheres.Object = (FSphereCovering *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_218.Spheres.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.Spheres.SharedReferenceCount.ReferenceController);
  if (local_1d8.ToleranceDirectionalScales.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_1d8.ToleranceDirectionalScales.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_198);
  return;
}

// execConv_GeometryScriptSphereCoveringToSphereArray @ 14cdf9210

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execConv_GeometryScriptSphereCoveringToSphereArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FGeometryScriptSphereCovering *pFVar3;
  FGeometryScriptSphereCovering local_28;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.Spheres.Object = (FSphereCovering *)0x0;
  local_28.Spheres.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  pFVar3 = &local_28;
  if ((FGeometryScriptSphereCovering *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSphereCovering *)0x0) {
    pFVar3 = (FGeometryScriptSphereCovering *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = Conv_GeometryScriptSphereCoveringToSphereArray(&local_18,pFVar3);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Spheres.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SphereArrayToGeometryScriptSphereCovering @ 14cdf9300

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execConv_SphereArrayToGeometryScriptSphereCovering
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FSphereCovering *this;
  bool bVar4;
  void **ppvVar5;
  FGeometryScriptSphereCovering local_48;
  void *local_38;
  undefined8 local_30;
  TSphere<double> *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TArrayView<UE::Math::TSphere<double>_const_,int> local_18;
  
  local_38 = (void *)0x0;
  local_30 = 0;
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
  local_48.Spheres.Object = (FSphereCovering *)0x0;
  local_48.Spheres.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  ppvVar5 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar5 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FGeometryScriptSphereCovering::Reset(&local_48);
  this = local_48.Spheres.Object;
  if (local_48.Spheres.Object == (FSphereCovering *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_28 = *ppvVar5;
  iVar1 = *(int *)(ppvVar5 + 1);
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = local_28;
  iStack_20 = iVar1;
  UE::Geometry::FSphereCovering::AppendSpheres(this,&local_18);
  if (param_3 != &local_48) {
    *(FSphereCovering **)param_3 = this;
    local_48.Spheres.Object = (FSphereCovering *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 8),
               &local_48.Spheres.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.Spheres.SharedReferenceCount.ReferenceController);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGenerateCollisionFromMesh @ 14ce02550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execGenerateCollisionFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined2 local_178;
  ITextData *local_170;
  uint local_168;
  UDynamicMesh *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  FKAggregateGeom local_128;
  FKAggregateGeom *local_88;
  undefined8 *local_80;
  code *local_78;
  FKAggregateGeom **local_70;
  FText local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_160 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  uStack_140 = ___xmm_3dcccccd3dcccccd000000003f000000;
  uStack_138 = _UNK_1529c4828;
  local_158 = 0x1010601;
  uStack_154 = CONCAT31(uStack_154._1_3_,1);
  uStack_150 = 0x3f800000;
  uStack_14c = CONCAT31(uStack_14c._1_3_,1);
  local_148 = 0x19;
  uStack_144 = 1;
  uStack_130 = 0x102;
  uStack_12c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar5 = local_res20;
  local_58 = CONCAT44(uStack_154,local_158);
  uStack_50 = CONCAT44(uStack_14c,uStack_150);
  local_48 = CONCAT44(uStack_144,local_148);
  local_128.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_30 = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uStack_40 = uStack_140;
  local_38 = uStack_138;
  local_128.SphereElems.ArrayNum = 0;
  local_128.SphereElems.ArrayMax = 0;
  local_128.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.BoxElems.ArrayNum = 0;
  local_128.BoxElems.ArrayMax = 0;
  local_128.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SphylElems.ArrayNum = 0;
  local_128.SphylElems.ArrayMax = 0;
  local_128.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.ConvexElems.ArrayNum = 0;
  local_128.ConvexElems.ArrayMax = 0;
  local_128.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.TaperedCapsuleElems.ArrayNum = 0;
  local_128.TaperedCapsuleElems.ArrayMax = 0;
  local_128.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.LevelSetElems.ArrayNum = 0;
  local_128.LevelSetElems.ArrayMax = 0;
  local_128.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SkinnedLevelSetElems.ArrayNum = 0;
  local_128.SkinnedLevelSetElems.ArrayMax = 0;
  local_128.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.MLLevelSetElems.ArrayNum = 0;
  local_128.MLLevelSetElems.ArrayMax = 0;
  local_128.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_128.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_128.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_128.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (local_160 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UGeometryScriptLibrary_CollisionFunctions",
                      L"GenerateCollisionFromMesh_InvalidInput",
                      L"GenerateCollisionFromMesh: FromDynamicMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_170 = (this->TextData).Reference;
    local_178 = 0x200;
    if (local_170 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170 + 8))(local_170,local_res10);
    }
    local_168 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_178) &&
          (&local_178 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
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
      pFVar3 = ((ForAnyElementType *)(lVar5 + 0x28))->Data;
      pFVar3[lVar8 * 0x18] = local_178._0_1_;
      pFVar3[lVar8 * 0x18 + 1] = local_178._1_1_;
      *(undefined8 *)(pFVar3 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar3 + lVar8 * 0x18 + 8) = local_170;
      if (local_170 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170 + 8))(local_170,local_res18);
      }
      *(uint *)(pFVar3 + lVar8 * 0x18 + 0x10) = local_168;
    }
    if (local_170 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170 + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    local_88 = &local_128;
    local_80 = &local_58;
    local_70 = &local_88;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::GenerateCollisionFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    UDynamicMesh::ProcessMesh
              (local_160,
               (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_78);
  }
  FKAggregateGeom::FreeRenderInfo(param_3);
  FKAggregateGeom::CloneAgg(param_3,&local_128);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_128.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_128.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_128.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_128.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_128.MLLevelSetElems.AllocatorInstance.Data,
             local_128.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_128.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_128.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_128.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_128.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_128.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_128.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_128.LevelSetElems.AllocatorInstance.Data,
             local_128.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_128.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_128.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_128.TaperedCapsuleElems.AllocatorInstance.Data,
             local_128.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_128.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_128.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_128.ConvexElems.AllocatorInstance.Data,
             local_128.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_128.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_128.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_128.SphylElems.AllocatorInstance.Data,
             local_128.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_128.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_128.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_128.BoxElems.AllocatorInstance.Data,local_128.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_128.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_128.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_128.SphereElems.AllocatorInstance.Data,
             local_128.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_128.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_128.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execGetSimpleCollisionFromComponent @ 14ce07650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execGetSimpleCollisionFromComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_138;
  ITextData *local_130;
  uint local_128;
  undefined2 local_120;
  ITextData *local_118;
  uint local_110;
  longlong local_108;
  longlong *local_100;
  FKAggregateGeom local_f8;
  undefined1 local_58 [8];
  FText local_50;
  FText local_40;
  
  local_100 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  lVar4 = local_108;
  local_f8.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SphereElems.ArrayNum = 0;
  local_f8.SphereElems.ArrayMax = 0;
  local_f8.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxElems.ArrayNum = 0;
  local_f8.BoxElems.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SphylElems.ArrayNum = 0;
  local_f8.SphylElems.ArrayMax = 0;
  local_f8.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ConvexElems.ArrayNum = 0;
  local_f8.ConvexElems.ArrayMax = 0;
  local_f8.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.TaperedCapsuleElems.ArrayNum = 0;
  local_f8.TaperedCapsuleElems.ArrayMax = 0;
  local_f8.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.LevelSetElems.ArrayNum = 0;
  local_f8.LevelSetElems.ArrayMax = 0;
  local_f8.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SkinnedLevelSetElems.ArrayNum = 0;
  local_f8.SkinnedLevelSetElems.ArrayMax = 0;
  local_f8.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.MLLevelSetElems.ArrayNum = 0;
  local_f8.MLLevelSetElems.ArrayMax = 0;
  local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_f8.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_f8.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_f8.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (local_100 == (longlong *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"GetSimpleCollisionFromComponent_InvalidComponent",
                        L"GetSimpleCollisionFromComponent: Component is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_130 = (pFVar7->TextData).Reference;
    local_138 = 0x200;
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 8))(local_130,local_res10);
    }
    local_128 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_138) &&
          (&local_138 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
      *puVar1 = (undefined1)local_138;
      puVar1[1] = local_138._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_130;
      if (local_130 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130 + 8))(local_130,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_128;
    }
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  else {
    lVar8 = (**(code **)(*local_100 + 0x800))();
    if (lVar8 == 0) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_40,L"UGeometryScriptLibrary_CollisionFunctions",
                          L"GetSimpleCollisionFromComponent_InvalidBodySetup",
                          L"GetSimpleCollisionFromComponent: Component\'s BodySetup is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_118 = (pFVar7->TextData).Reference;
      local_120 = 0x200;
      if (local_118 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118 + 8))(local_118,local_res20);
      }
      local_110 = pFVar7->Flags;
      if (lVar4 != 0) {
        if (((*(undefined2 **)(lVar4 + 0x28) <= &local_120) &&
            (&local_120 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
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
        *(int *)(lVar4 + 0x30) = iVar6 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(lVar4 + 0x28) + (longlong)iVar6 * 0x18);
        *puVar1 = (undefined1)local_120;
        puVar1[1] = local_120._1_1_;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(ITextData **)(puVar1 + 8) = local_118;
        if (local_118 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118 + 8))(local_118,local_58);
        }
        *(uint *)(puVar1 + 0x10) = local_110;
      }
      if (local_118 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118 + 0x10))();
      }
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
    }
    else {
      FKAggregateGeom::FreeRenderInfo(&local_f8);
      FKAggregateGeom::CloneAgg(&local_f8,(FKAggregateGeom *)(lVar8 + 0x38));
    }
  }
  FKAggregateGeom::FreeRenderInfo(param_3);
  FKAggregateGeom::CloneAgg(param_3,&local_f8);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_f8.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_f8.MLLevelSetElems.AllocatorInstance.Data,
             local_f8.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_f8.MLLevelSetElems.AllocatorInstance.Data != (FKMLLevelSetElem *)0x0
     ) {
    FMemory::Free(local_f8.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_f8.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_f8.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_f8.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_f8.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_f8.LevelSetElems.AllocatorInstance.Data,
             local_f8.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_f8.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_f8.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_f8.TaperedCapsuleElems.AllocatorInstance.Data,
             local_f8.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_f8.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_f8.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_f8.ConvexElems.AllocatorInstance.Data,
             local_f8.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_f8.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_f8.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_f8.SphylElems.AllocatorInstance.Data,local_f8.SphylElems.ArrayNum)
  ;
  if ((FKSphylElem *)local_f8.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_f8.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_f8.BoxElems.AllocatorInstance.Data,local_f8.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_f8.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_f8.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_f8.SphereElems.AllocatorInstance.Data,
             local_f8.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_f8.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_f8.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execGetSimpleCollisionFromStaticMesh @ 14ce07bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execGetSimpleCollisionFromStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_138;
  ITextData *local_130;
  uint local_128;
  undefined2 local_120;
  ITextData *local_118;
  uint local_110;
  longlong local_108;
  longlong local_100;
  FKAggregateGeom local_f8;
  undefined1 local_58 [8];
  FText local_50;
  FText local_40;
  
  local_100 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  local_108 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  lVar5 = local_108;
  local_f8.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SphereElems.ArrayNum = 0;
  local_f8.SphereElems.ArrayMax = 0;
  local_f8.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.BoxElems.ArrayNum = 0;
  local_f8.BoxElems.ArrayMax = 0;
  local_f8.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SphylElems.ArrayNum = 0;
  local_f8.SphylElems.ArrayMax = 0;
  local_f8.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ConvexElems.ArrayNum = 0;
  local_f8.ConvexElems.ArrayMax = 0;
  local_f8.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.TaperedCapsuleElems.ArrayNum = 0;
  local_f8.TaperedCapsuleElems.ArrayMax = 0;
  local_f8.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.LevelSetElems.ArrayNum = 0;
  local_f8.LevelSetElems.ArrayMax = 0;
  local_f8.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SkinnedLevelSetElems.ArrayNum = 0;
  local_f8.SkinnedLevelSetElems.ArrayMax = 0;
  local_f8.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.MLLevelSetElems.ArrayNum = 0;
  local_f8.MLLevelSetElems.ArrayMax = 0;
  local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_f8.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_f8.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_f8.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  if (local_100 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"GetSimpleCollisionFromStaticMesh_InvalidStaticMesh",
                        L"GetSimpleCollisionFromStaticMesh: Input Mesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_130 = (pFVar8->TextData).Reference;
    local_138 = 0x200;
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 8))(local_130,local_res10);
    }
    local_128 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_138) &&
          (&local_138 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined1)local_138;
      puVar1[1] = local_138._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_130;
      if (local_130 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130 + 8))(local_130,local_res18);
      }
      *(uint *)(puVar1 + 0x10) = local_128;
    }
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  else {
    lVar3 = *(longlong *)(local_100 + 0x1d8);
    if (lVar3 == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_40,L"UGeometryScriptLibrary_CollisionFunctions",
                          L"GetSimpleCollisionFromStaticMesh_InvalidBodySetup",
                          L"GetSimpleCollisionFromStaticMesh: Input Mesh\'s BodySetup is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_118 = (pFVar8->TextData).Reference;
      local_120 = 0x200;
      if (local_118 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118 + 8))(local_118,local_res20);
      }
      local_110 = pFVar8->Flags;
      if (lVar5 != 0) {
        if (((*(undefined2 **)(lVar5 + 0x28) <= &local_120) &&
            (&local_120 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = *(int *)(lVar5 + 0x30);
        if (iVar7 == *(int *)(lVar5 + 0x34)) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
        }
        *(int *)(lVar5 + 0x30) = iVar7 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
        *puVar1 = (undefined1)local_120;
        puVar1[1] = local_120._1_1_;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(ITextData **)(puVar1 + 8) = local_118;
        if (local_118 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118 + 8))(local_118,local_58);
        }
        *(uint *)(puVar1 + 0x10) = local_110;
      }
      if (local_118 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118 + 0x10))();
      }
      if (local_40.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
      }
    }
    else {
      FKAggregateGeom::FreeRenderInfo(&local_f8);
      FKAggregateGeom::CloneAgg(&local_f8,(FKAggregateGeom *)(lVar3 + 0x38));
    }
  }
  FKAggregateGeom::FreeRenderInfo(param_3);
  FKAggregateGeom::CloneAgg(param_3,&local_f8);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_f8.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_f8.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_f8.MLLevelSetElems.AllocatorInstance.Data,
             local_f8.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_f8.MLLevelSetElems.AllocatorInstance.Data != (FKMLLevelSetElem *)0x0
     ) {
    FMemory::Free(local_f8.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_f8.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_f8.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_f8.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_f8.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_f8.LevelSetElems.AllocatorInstance.Data,
             local_f8.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_f8.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_f8.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_f8.TaperedCapsuleElems.AllocatorInstance.Data,
             local_f8.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_f8.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_f8.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_f8.ConvexElems.AllocatorInstance.Data,
             local_f8.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_f8.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_f8.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_f8.SphylElems.AllocatorInstance.Data,local_f8.SphylElems.ArrayNum)
  ;
  if ((FKSphylElem *)local_f8.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_f8.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_f8.BoxElems.AllocatorInstance.Data,local_f8.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_f8.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_f8.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_f8.SphereElems.AllocatorInstance.Data,
             local_f8.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_f8.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_f8.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execGetSimpleCollisionShapeCount @ 14ce08110

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execGetSimpleCollisionShapeCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FKSphereElem **ppFVar2;
  FKSphereElem *local_a8;
  undefined8 local_a0;
  FKBoxElem *local_98;
  undefined8 local_90;
  FKSphylElem *local_88;
  undefined8 local_80;
  FKConvexElem *local_78;
  undefined8 local_70;
  FKTaperedCapsuleElem *local_68;
  undefined8 local_60;
  FKLevelSetElem *local_58;
  undefined8 local_50;
  FKSkinnedLevelSetElem *local_48;
  undefined8 local_40;
  FKMLLevelSetElem *local_38;
  undefined8 local_30;
  FKSkinnedTriangleMeshElem *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_a8 = (FKSphereElem *)0x0;
  local_a0 = 0;
  local_98 = (FKBoxElem *)0x0;
  local_90 = 0;
  local_88 = (FKSphylElem *)0x0;
  local_80 = 0;
  local_78 = (FKConvexElem *)0x0;
  local_70 = 0;
  local_68 = (FKTaperedCapsuleElem *)0x0;
  local_60 = 0;
  local_58 = (FKLevelSetElem *)0x0;
  local_50 = 0;
  local_48 = (FKSkinnedLevelSetElem *)0x0;
  local_40 = 0;
  local_38 = (FKMLLevelSetElem *)0x0;
  local_30 = 0;
  local_28 = (FKSkinnedTriangleMeshElem *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  ppFVar2 = &local_a8;
  if ((FKSphereElem **)param_2->MostRecentPropertyAddress != (FKSphereElem **)0x0) {
    ppFVar2 = (FKSphereElem **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(int *)param_3 =
       *(int *)(ppFVar2 + 0x11) + *(int *)(ppFVar2 + 0xf) + *(int *)(ppFVar2 + 0xd) +
       *(int *)(ppFVar2 + 0xb) + *(int *)(ppFVar2 + 9) + *(int *)(ppFVar2 + 7) +
       *(int *)(ppFVar2 + 5) + *(int *)(ppFVar2 + 3) + *(int *)(ppFVar2 + 1);
  DestructItems<FKSkinnedTriangleMeshElem,int>(local_28,(int)local_20);
  if (local_28 != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<FKMLLevelSetElem,int>(local_38,(int)local_30);
  if (local_38 != (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<FKSkinnedLevelSetElem,int>(local_48,(int)local_40);
  if (local_48 != (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_48);
  }
  DestructItems<FKLevelSetElem,int>(local_58,(int)local_50);
  if (local_58 != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_58);
  }
  DestructItems<FKTaperedCapsuleElem,int>(local_68,(int)local_60);
  if (local_68 != (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_68);
  }
  DestructItems<FKConvexElem,int>(local_78,(int)local_70);
  if (local_78 != (FKConvexElem *)0x0) {
    FMemory::Free(local_78);
  }
  DestructItems<FKSphylElem,int>(local_88,(int)local_80);
  if (local_88 != (FKSphylElem *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<FKBoxElem,int>(local_98,(int)local_90);
  if (local_98 != (FKBoxElem *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<FKSphereElem,int>(local_a8,(int)local_a0);
  if (local_a8 != (FKSphereElem *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}

// execMergeSimpleCollisionShapes @ 14ce0ca70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execMergeSimpleCollisionShapes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptMergeSimpleCollisionOptions *pFVar1;
  FProperty *pFVar2;
  FKAggregateGeom *pFVar3;
  bool *pbVar4;
  FGeometryScriptSimpleCollision *pFVar5;
  FGeometryScriptMergeSimpleCollisionOptions *pFVar6;
  bool local_res10 [8];
  UGeometryScriptDebug *local_res18;
  FGeometryScriptSimpleCollision local_1e8;
  FGeometryScriptMergeSimpleCollisionOptions local_148;
  FKAggregateGeom local_c8;
  
  local_1e8.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.SphereElems.ArrayNum = 0;
  local_1e8.AggGeom.SphereElems.ArrayMax = 0;
  local_1e8.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.BoxElems.ArrayNum = 0;
  local_1e8.AggGeom.BoxElems.ArrayMax = 0;
  local_1e8.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.SphylElems.ArrayNum = 0;
  local_1e8.AggGeom.SphylElems.ArrayMax = 0;
  local_1e8.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.ConvexElems.ArrayNum = 0;
  local_1e8.AggGeom.ConvexElems.ArrayMax = 0;
  local_1e8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_1e8.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_1e8.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.LevelSetElems.ArrayNum = 0;
  local_1e8.AggGeom.LevelSetElems.ArrayMax = 0;
  local_1e8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_1e8.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_1e8.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_1e8.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_1e8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_1e8.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_1e8.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_1e8.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_1e8.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_148.MaxShapeCount = 0;
  local_148.ErrorTolerance = 0.0;
  local_148.MinThicknessTolerance = 0.0;
  local_148.bConsiderAllPossibleMerges = false;
  local_148.PrecomputedNegativeSpace.Spheres.Object = (FSphereCovering *)0x0;
  local_148.PrecomputedNegativeSpace.Spheres.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar5 = &local_1e8;
  if ((FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision *)0x0) {
    pFVar5 = (FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress;
  }
  local_148.ComputeNegativeSpaceOptions.MinSampleSpacing = ___xmm_40000000000000003ff0000000000000;
  local_148.ComputeNegativeSpaceOptions.NegativeSpaceTolerance = _UNK_150744178;
  local_148.bComputeNegativeSpace = false;
  local_148.ComputeNegativeSpaceOptions.MinRadius = __real_4024000000000000;
  local_148.ComputeNegativeSpaceOptions.SampleMethod = Uniform;
  local_148.ComputeNegativeSpaceOptions.bRequireSearchSampleCoverage = false;
  local_148.ComputeNegativeSpaceOptions.bOnlyConnectedToHull = false;
  local_148.ComputeNegativeSpaceOptions.MaxVoxelsPerDim = 0x80;
  local_148.ComputeNegativeSpaceOptions.TargetNumSamples = 0x32;
  local_148.ComputeNegativeSpaceOptions.ToleranceDirectionalScales.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_148.ComputeNegativeSpaceOptions.ToleranceDirectionalScales.ArrayNum = 0;
  local_148.ComputeNegativeSpaceOptions.ToleranceDirectionalScales.ArrayMax = 0;
  local_148.ShapeToHullTriangulation.SphereStepsPerSide = 4;
  local_148.ShapeToHullTriangulation.CapsuleHemisphereSteps = 5;
  local_148.ShapeToHullTriangulation.CapsuleCircleSteps = 8;
  local_148.ShapeToHullTriangulation.bApproximateLevelSetsWithCubes = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pFVar1 = (FGeometryScriptMergeSimpleCollisionOptions *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = &local_148;
  if (pFVar1 != (FGeometryScriptMergeSimpleCollisionOptions *)0x0) {
    pFVar6 = pFVar1;
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
  local_res18 = (UGeometryScriptDebug *)0x0;
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = &MergeSimpleCollisionShapes
                      ((FGeometryScriptSimpleCollision *)&local_c8,pFVar5,pFVar6,pbVar4,local_res18)
            ->AggGeom;
  FKAggregateGeom::FreeRenderInfo(param_3);
  FKAggregateGeom::CloneAgg(param_3,pFVar3);
  FKAggregateGeom::~FKAggregateGeom(&local_c8);
  if (local_148.ComputeNegativeSpaceOptions.ToleranceDirectionalScales.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.ComputeNegativeSpaceOptions.ToleranceDirectionalScales.AllocatorInstance
                  .Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.PrecomputedNegativeSpace.Spheres.SharedReferenceCount.ReferenceController);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_1e8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_1e8.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_1e8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_1e8.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_1e8.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_1e8.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_1e8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_1e8.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_1e8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_1e8.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_1e8.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_1e8.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_1e8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_1e8.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_1e8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_1e8.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_1e8.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_1e8.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_1e8.AggGeom.SphylElems.AllocatorInstance.Data,
             local_1e8.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_1e8.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_1e8.AggGeom.BoxElems.AllocatorInstance.Data,
             local_1e8.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_1e8.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_1e8.AggGeom.SphereElems.AllocatorInstance.Data,
             local_1e8.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_1e8.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_1e8.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execResetDynamicMeshCollision @ 14ce0e880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execResetDynamicMeshCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  undefined4 local_res10 [2];
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  longlong local_50;
  longlong *local_48;
  FText local_40;
  undefined2 local_30;
  ITextData *local_28;
  uint local_20;
  
  local_48 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_50 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  lVar5 = local_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48 == (longlong *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_40,L"UGeometryScriptLibrary_CollisionFunctions",
                      L"ResetDynamicMeshCollision_InvalidInput2",
                      L"ResetDynamicMeshCollision: Component is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_28 = (this->TextData).Reference;
    local_30 = 0x200;
    if (local_28 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28 + 8))(local_28,local_res20);
    }
    local_20 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_30) &&
          (&local_30 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_30;
      puVar2[1] = local_30._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_28;
      if (local_28 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28 + 8))(local_28,local_58);
      }
      *(uint *)(puVar2 + 0x10) = local_20;
    }
    if (local_28 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28 + 0x10))();
    }
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
  else {
    (**(code **)(*local_48 + 0xd78))(local_48,1);
  }
  return;
}

// execResetSimpleCollision @ 14ce0eb00

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execResetSimpleCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FKAggregateGeom *this;
  FKAggregateGeom local_a8;
  
  local_a8.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SphereElems.ArrayNum = 0;
  local_a8.SphereElems.ArrayMax = 0;
  local_a8.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.BoxElems.ArrayNum = 0;
  local_a8.BoxElems.ArrayMax = 0;
  local_a8.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SphylElems.ArrayNum = 0;
  local_a8.SphylElems.ArrayMax = 0;
  local_a8.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ConvexElems.ArrayNum = 0;
  local_a8.ConvexElems.ArrayMax = 0;
  local_a8.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.TaperedCapsuleElems.ArrayNum = 0;
  local_a8.TaperedCapsuleElems.ArrayMax = 0;
  local_a8.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.LevelSetElems.ArrayNum = 0;
  local_a8.LevelSetElems.ArrayMax = 0;
  local_a8.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SkinnedLevelSetElems.ArrayNum = 0;
  local_a8.SkinnedLevelSetElems.ArrayMax = 0;
  local_a8.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.MLLevelSetElems.ArrayNum = 0;
  local_a8.MLLevelSetElems.ArrayMax = 0;
  local_a8.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_a8.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_a8.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_a8.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  this = &local_a8;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    this = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FKAggregateGeom::EmptyElements(this);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_a8.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_a8.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_a8.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_a8.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_a8.MLLevelSetElems.AllocatorInstance.Data,
             local_a8.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_a8.MLLevelSetElems.AllocatorInstance.Data != (FKMLLevelSetElem *)0x0
     ) {
    FMemory::Free(local_a8.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_a8.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_a8.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_a8.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_a8.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_a8.LevelSetElems.AllocatorInstance.Data,
             local_a8.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_a8.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_a8.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_a8.TaperedCapsuleElems.AllocatorInstance.Data,
             local_a8.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_a8.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_a8.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_a8.ConvexElems.AllocatorInstance.Data,
             local_a8.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_a8.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_a8.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_a8.SphylElems.AllocatorInstance.Data,local_a8.SphylElems.ArrayNum)
  ;
  if ((FKSphylElem *)local_a8.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_a8.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_a8.BoxElems.AllocatorInstance.Data,local_a8.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_a8.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_a8.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_a8.SphereElems.AllocatorInstance.Data,
             local_a8.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_a8.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_a8.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execSetDynamicMeshCollisionFromMesh @ 14ce10190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execSetDynamicMeshCollisionFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  UDynamicMesh *pUVar6;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_1b8;
  ITextData *local_1b0;
  uint local_1a8;
  undefined2 local_1a0;
  ITextData *local_198;
  uint local_190;
  longlong local_188;
  longlong *local_180;
  UDynamicMesh *local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined2 uStack_148;
  undefined2 uStack_146;
  undefined4 uStack_144;
  FKSphereElem *local_140;
  undefined8 local_138;
  FKBoxElem *local_130;
  undefined8 local_128;
  FKSphylElem *local_120;
  undefined8 local_118;
  FKConvexElem *local_110;
  undefined8 local_108;
  FKTaperedCapsuleElem *local_100;
  undefined8 local_f8;
  FKLevelSetElem *local_f0;
  undefined8 local_e8;
  FKSkinnedLevelSetElem *local_e0;
  undefined8 local_d8;
  FKMLLevelSetElem *local_d0;
  undefined8 local_c8;
  FKSkinnedTriangleMeshElem *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a0 [8];
  FKSphereElem **local_98;
  undefined8 *local_90;
  code *local_88;
  FKSphereElem ***local_80;
  FText local_78;
  FText local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
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
  local_180 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  uStack_158 = ___xmm_3dcccccd3dcccccd000000003f000000;
  uStack_150 = _UNK_1529c4828;
  local_170 = 0x1010601;
  uStack_16c = CONCAT31(uStack_16c._1_3_,1);
  uStack_168 = 0x3f800000;
  uStack_164 = CONCAT31(uStack_164._1_3_,1);
  local_160 = 0x19;
  uStack_15c = 1;
  uStack_148 = 0x102;
  uStack_144 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_188 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  pUVar6 = local_178;
  plVar5 = local_180;
  lVar4 = local_188;
  local_58 = CONCAT44(uStack_16c,local_170);
  uStack_50 = CONCAT44(uStack_164,uStack_168);
  local_48 = CONCAT44(uStack_15c,local_160);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uStack_40 = uStack_158;
  uStack_30 = CONCAT44(uStack_144,CONCAT22(uStack_146,uStack_148));
  local_38 = uStack_150;
  if (local_178 == (UDynamicMesh *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetDynamicMeshCollisionFromMesh_InvalidInput1",
                        L"SetDynamicMeshCollisionFromMesh: FromDynamicMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar9);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_1b0 = (pFVar9->TextData).Reference;
    local_1b8 = 0x200;
    if (local_1b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0 + 8))(local_1b0,local_res10);
    }
    local_1a8 = pFVar9->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_1b8) &&
          (&local_1b8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = *(int *)(lVar4 + 0x30);
      if (iVar8 == *(int *)(lVar4 + 0x34)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar10 = (longlong)iVar8;
      *(int *)(lVar4 + 0x30) = iVar8 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar10 * 0x18] = local_1b8._0_1_;
      pFVar2[lVar10 * 0x18 + 1] = local_1b8._1_1_;
      *(undefined8 *)(pFVar2 + lVar10 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar10 * 0x18 + 8) = local_1b0;
      if (local_1b0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1b0 + 8))(local_1b0,local_res18);
      }
      *(uint *)(pFVar2 + lVar10 * 0x18 + 0x10) = local_1a8;
    }
    if (local_1b0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b0 + 0x10))();
    }
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (local_180 == (longlong *)0x0) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"UGeometryScriptLibrary_CollisionFunctions",
                          L"SetDynamicMeshCollisionFromMesh_InvalidInput2",
                          L"SetDynamicMeshCollisionFromMesh: ToDynamicMeshComponent is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_198 = (pFVar9->TextData).Reference;
      local_1a0 = 0x200;
      if (local_198 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198 + 8))(local_198,local_res20);
      }
      local_190 = pFVar9->Flags;
      if (lVar4 != 0) {
        if (((*(undefined2 **)(lVar4 + 0x28) <= &local_1a0) &&
            (&local_1a0 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(lVar4 + 0x30);
        if (iVar8 == *(int *)(lVar4 + 0x34)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
        }
        lVar10 = (longlong)iVar8;
        *(int *)(lVar4 + 0x30) = iVar8 + 1;
        pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
        pFVar2[lVar10 * 0x18] = local_1a0._0_1_;
        pFVar2[lVar10 * 0x18 + 1] = local_1a0._1_1_;
        *(undefined8 *)(pFVar2 + lVar10 * 0x18 + 8) = 0;
        *(ITextData **)(pFVar2 + lVar10 * 0x18 + 8) = local_198;
        if (local_198 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_198 + 8))(local_198,local_a0);
        }
        *(uint *)(pFVar2 + lVar10 * 0x18 + 0x10) = local_190;
      }
      if (local_198 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198 + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
    else {
      local_98 = &local_140;
      local_140 = (FKSphereElem *)0x0;
      local_90 = &local_58;
      local_138 = 0;
      local_80 = &local_98;
      local_130 = (FKBoxElem *)0x0;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_128 = 0;
      local_120 = (FKSphylElem *)0x0;
      local_118 = 0;
      local_110 = (FKConvexElem *)0x0;
      local_108 = 0;
      local_100 = (FKTaperedCapsuleElem *)0x0;
      local_f8 = 0;
      local_f0 = (FKLevelSetElem *)0x0;
      local_e8 = 0;
      local_e0 = (FKSkinnedLevelSetElem *)0x0;
      local_d8 = 0;
      local_d0 = (FKMLLevelSetElem *)0x0;
      local_c8 = 0;
      local_c0 = (FKSkinnedTriangleMeshElem *)0x0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      UDynamicMesh::ProcessMesh
                (local_178,
                 (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_88);
      (**(code **)(*plVar5 + 0xd70))(plVar5,&local_140,1);
      DestructItems<FKSkinnedTriangleMeshElem,int>(local_c0,(int)local_b8);
      if (local_c0 != (FKSkinnedTriangleMeshElem *)0x0) {
        FMemory::Free(local_c0);
      }
      DestructItems<FKMLLevelSetElem,int>(local_d0,(int)local_c8);
      if (local_d0 != (FKMLLevelSetElem *)0x0) {
        FMemory::Free(local_d0);
      }
      DestructItems<FKSkinnedLevelSetElem,int>(local_e0,(int)local_d8);
      if (local_e0 != (FKSkinnedLevelSetElem *)0x0) {
        FMemory::Free(local_e0);
      }
      DestructItems<FKLevelSetElem,int>(local_f0,(int)local_e8);
      if (local_f0 != (FKLevelSetElem *)0x0) {
        FMemory::Free(local_f0);
      }
      DestructItems<FKTaperedCapsuleElem,int>(local_100,(int)local_f8);
      if (local_100 != (FKTaperedCapsuleElem *)0x0) {
        FMemory::Free(local_100);
      }
      DestructItems<FKConvexElem,int>(local_110,(int)local_108);
      if (local_110 != (FKConvexElem *)0x0) {
        FMemory::Free(local_110);
      }
      DestructItems<FKSphylElem,int>(local_120,(int)local_118);
      if (local_120 != (FKSphylElem *)0x0) {
        FMemory::Free(local_120);
      }
      DestructItems<FKBoxElem,int>(local_130,(int)local_128);
      if (local_130 != (FKBoxElem *)0x0) {
        FMemory::Free(local_130);
      }
      DestructItems<FKSphereElem,int>(local_140,(int)local_138);
      if (local_140 != (FKSphereElem *)0x0) {
        FMemory::Free(local_140);
      }
    }
    *(UDynamicMesh **)param_3 = pUVar6;
  }
  return;
}

// execSetSimpleCollisionOfDynamicMeshComponent @ 14ce11850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execSetSimpleCollisionOfDynamicMeshComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *this;
  FKSphereElem **ppFVar8;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined2 local_108;
  ITextData *local_100;
  uint local_f8;
  longlong local_f0;
  longlong *local_e8;
  FKSphereElem *local_e0;
  undefined8 local_d8;
  FKBoxElem *local_d0;
  undefined8 local_c8;
  FKSphylElem *local_c0;
  undefined8 local_b8;
  FKConvexElem *local_b0;
  undefined8 local_a8;
  FKTaperedCapsuleElem *local_a0;
  undefined8 local_98;
  FKLevelSetElem *local_90;
  undefined8 local_88;
  FKSkinnedLevelSetElem *local_80;
  undefined8 local_78;
  FKMLLevelSetElem *local_70;
  undefined8 local_68;
  FKSkinnedTriangleMeshElem *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_40 [8];
  FText local_38;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_e0 = (FKSphereElem *)0x0;
  local_d8 = 0;
  local_d0 = (FKBoxElem *)0x0;
  local_c8 = 0;
  local_c0 = (FKSphylElem *)0x0;
  local_b8 = 0;
  local_b0 = (FKConvexElem *)0x0;
  local_a8 = 0;
  local_a0 = (FKTaperedCapsuleElem *)0x0;
  local_98 = 0;
  local_90 = (FKLevelSetElem *)0x0;
  local_88 = 0;
  local_80 = (FKSkinnedLevelSetElem *)0x0;
  local_78 = 0;
  local_70 = (FKMLLevelSetElem *)0x0;
  local_68 = 0;
  local_60 = (FKSkinnedTriangleMeshElem *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_e8 = (longlong *)0x0;
  ppFVar8 = &local_e0;
  if ((FKSphereElem **)param_2->MostRecentPropertyAddress != (FKSphereElem **)0x0) {
    ppFVar8 = (FKSphereElem **)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_f0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  lVar5 = local_f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_e8 == (longlong *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UGeometryScriptLibrary_CollisionFunctions",
                      L"SetSimpleCollisionOfDynamicMeshComponent_InvalidComponent",
                      L"SetSimpleCollisionOfDynamicMeshComponent: Component is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_100 = (this->TextData).Reference;
    local_108 = 0x200;
    if (local_100 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100 + 8))(local_100,local_res20);
    }
    local_f8 = this->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_108) &&
          (&local_108 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_108;
      puVar2[1] = local_108._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_100;
      if (local_100 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100 + 8))(local_100,local_40);
      }
      *(uint *)(puVar2 + 0x10) = local_f8;
    }
    if (local_100 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100 + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  else {
    (**(code **)(*local_e8 + 0xd70))(local_e8,ppFVar8,1);
  }
  DestructItems<FKSkinnedTriangleMeshElem,int>(local_60,(int)local_58);
  if (local_60 != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_60);
  }
  DestructItems<FKMLLevelSetElem,int>(local_70,(int)local_68);
  if (local_70 != (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_70);
  }
  DestructItems<FKSkinnedLevelSetElem,int>(local_80,(int)local_78);
  if (local_80 != (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_80);
  }
  DestructItems<FKLevelSetElem,int>(local_90,(int)local_88);
  if (local_90 != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_90);
  }
  DestructItems<FKTaperedCapsuleElem,int>(local_a0,(int)local_98);
  if (local_a0 != (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_a0);
  }
  DestructItems<FKConvexElem,int>(local_b0,(int)local_a8);
  if (local_b0 != (FKConvexElem *)0x0) {
    FMemory::Free(local_b0);
  }
  DestructItems<FKSphylElem,int>(local_c0,(int)local_b8);
  if (local_c0 != (FKSphylElem *)0x0) {
    FMemory::Free(local_c0);
  }
  DestructItems<FKBoxElem,int>(local_d0,(int)local_c8);
  if (local_d0 != (FKBoxElem *)0x0) {
    FMemory::Free(local_d0);
  }
  DestructItems<FKSphereElem,int>(local_e0,(int)local_d8);
  if (local_e0 != (FKSphereElem *)0x0) {
    FMemory::Free(local_e0);
  }
  return;
}

// execSetSimpleCollisionOfStaticMesh @ 14ce11c70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execSetSimpleCollisionOfStaticMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  UBodySetup *this;
  UStaticMesh *pUVar4;
  code *pcVar5;
  FUObjectItem *pFVar6;
  longlong lVar7;
  UStaticMesh *this_00;
  bool bVar8;
  int iVar9;
  FText *this_01;
  UClass *pUVar10;
  FUObjectItem *pFVar11;
  UClass *pUVar12;
  FKAggregateGeom *pFVar13;
  UActorComponent *pUVar14;
  UActorComponent *pUVar15;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined2 local_138;
  ITextData *local_130;
  uint local_128;
  TIterator local_120;
  UClass *local_108;
  uint local_100;
  EInternalObjectFlags local_fc;
  longlong local_f8;
  UStaticMesh *local_f0;
  FKAggregateGeom local_e8;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  FText local_40;
  
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  pUVar15 = (UActorComponent *)0x0;
  local_e8.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.SphereElems.ArrayNum = 0;
  local_e8.SphereElems.ArrayMax = 0;
  local_e8.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.BoxElems.ArrayNum = 0;
  local_e8.BoxElems.ArrayMax = 0;
  local_e8.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.SphylElems.ArrayNum = 0;
  local_e8.SphylElems.ArrayMax = 0;
  local_e8.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ConvexElems.ArrayNum = 0;
  local_e8.ConvexElems.ArrayMax = 0;
  local_e8.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.TaperedCapsuleElems.ArrayNum = 0;
  local_e8.TaperedCapsuleElems.ArrayMax = 0;
  local_e8.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.LevelSetElems.ArrayNum = 0;
  local_e8.LevelSetElems.ArrayMax = 0;
  local_e8.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.SkinnedLevelSetElems.ArrayNum = 0;
  local_e8.SkinnedLevelSetElems.ArrayMax = 0;
  local_e8.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.MLLevelSetElems.ArrayNum = 0;
  local_e8.MLLevelSetElems.ArrayMax = 0;
  local_e8.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_e8.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_e8.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_e8.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f0 = (UStaticMesh *)0x0;
  pFVar13 = &local_e8;
  if ((FKAggregateGeom *)param_2->MostRecentPropertyAddress != (FKAggregateGeom *)0x0) {
    pFVar13 = (FKAggregateGeom *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_f8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  this_00 = local_f0;
  lVar7 = local_f8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_f0 == (UStaticMesh *)0x0) {
    this_01 = FText::AsLocalizable_Advanced_LocText
                        (&local_40,L"UGeometryScriptLibrary_CollisionFunctions",
                         L"SetSimpleCollisionOfStaticMesh_InvalidStaticMesh",
                         L"SetSimpleCollisionOfStaticMesh: Input Mesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this_01);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_130 = (this_01->TextData).Reference;
    local_138 = 0x200;
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 8))(local_130,local_48);
    }
    local_128 = this_01->Flags;
    if (lVar7 != 0) {
      if (((*(undefined2 **)(lVar7 + 0x28) <= &local_138) &&
          (&local_138 < *(undefined2 **)(lVar7 + 0x28) + (longlong)*(int *)(lVar7 + 0x34) * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *(int *)(lVar7 + 0x30);
      if (iVar9 == *(int *)(lVar7 + 0x34)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar7 + 0x28),(int *)(lVar7 + 0x34));
      }
      *(int *)(lVar7 + 0x30) = iVar9 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar7 + 0x28) + (longlong)iVar9 * 0x18);
      *puVar2 = (undefined1)local_138;
      puVar2[1] = local_138._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_130;
      if (local_130 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130 + 8))(local_130,local_44);
      }
      *(uint *)(puVar2 + 0x10) = local_128;
    }
    if (local_130 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_130 + 0x10))();
    }
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
  }
  else {
    this = (local_f0->BodySetup).field0_0x0.DebugPtr;
    if (this != (UBodySetup *)0x0) {
      UBodySetup::RemoveSimpleCollision(this);
      FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
      FKAggregateGeom::CloneAgg(&this->AggGeom,pFVar13);
      (**(code **)(this->_padding_ + 0x2b0))(this);
      UStaticMesh::RecreateNavCollision(this_00);
      pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
      local_120.Index = -1;
      local_120.Array = &GUObjectArray;
      local_120.CurrentObject = (FUObjectItem *)0x0;
      FUObjectArray::TIterator::Advance(&local_120);
      local_100 = 0;
      local_108 = pUVar10;
      local_fc = UE::GetAsyncLoadingInternalFlagsExclusion();
      local_fc = local_fc | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
      if ((pUVar10 == (UClass *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Class",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                             ,0x70,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&(local_120.Array)->ObjObjectsCritical);
      do {
        pFVar6 = local_120.CurrentObject;
        pUVar14 = pUVar15;
        if (local_120.CurrentObject != (FUObjectItem *)0x0) {
          pUVar14 = (UActorComponent *)((local_120.CurrentObject)->field1_0x8).Object;
        }
        if (((local_100 & (uint)pUVar14->_padding_) == 0) &&
           (pFVar11 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&pUVar14->_padding_ + 4)),
           (local_fc &
           (EInternalObjectFlags)((ulonglong)(pFVar11->field0_0x0).FlagsAndRefCount >> 0x20)) ==
           Borrowed)) {
          pUVar12 = Z_Construct_UClass_UObject_NoRegister();
          if (pUVar10 == pUVar12) break;
          iVar9 = (int)pUVar10->_padding_;
          if ((iVar9 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
              &pUVar10->_padding_)) break;
        }
        bVar8 = FUObjectArray::TIterator::Advance(&local_120);
        pUVar10 = local_108;
        pFVar6 = local_120.CurrentObject;
      } while (bVar8);
joined_r0x00014ce120f9:
      if (pFVar6 != (FUObjectItem *)0x0) {
        pUVar14 = (UActorComponent *)(pFVar6->field1_0x8).Object;
        if (pUVar14 == (UActorComponent *)0x0) {
LAB_14ce1212b:
          pUVar14 = pUVar15;
        }
        else {
          pUVar10 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
          iVar9 = (int)pUVar10->_padding_;
          if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar10->_padding_)) goto LAB_14ce1212b;
        }
        pUVar4 = (UStaticMesh *)pUVar14[7].PrimaryComponentTick.Target;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar4 != (UStaticMesh *)0x0) goto LAB_14ce1214b;
LAB_14ce12189:
          bVar8 = this_00 == (UStaticMesh *)0x0;
        }
        else {
          if (pUVar4 == (UStaticMesh *)0x0) goto LAB_14ce12189;
          UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14ce1214b:
          bVar8 = pUVar4 == this_00;
        }
        if ((bVar8) && (pUVar14->bPhysicsStateCreated != '\0')) {
          UActorComponent::RecreatePhysicsState(pUVar14);
        }
LAB_14ce12166:
        do {
          do {
            bVar8 = FUObjectArray::TIterator::Advance(&local_120);
            pFVar6 = local_120.CurrentObject;
            if (!bVar8) goto joined_r0x00014ce120f9;
            pUVar14 = pUVar15;
            if (local_120.CurrentObject != (FUObjectItem *)0x0) {
              pUVar14 = (UActorComponent *)((local_120.CurrentObject)->field1_0x8).Object;
            }
          } while ((local_100 & (uint)pUVar14->_padding_) != 0);
          pUVar10 = Z_Construct_UClass_UObject_NoRegister();
          if (local_108 != pUVar10) {
            iVar9 = (int)local_108->_padding_;
            if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &local_108->_padding_)) goto LAB_14ce12166;
          }
          pFVar11 = FUObjectArray::IndexToObject
                              (&GUObjectArray,*(int *)((longlong)&pUVar14->_padding_ + 4));
        } while ((local_fc &
                 (EInternalObjectFlags)((ulonglong)(pFVar11->field0_0x0).FlagsAndRefCount >> 0x20))
                 != Borrowed);
        goto joined_r0x00014ce120f9;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_120.Array)->ObjObjectsCritical);
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
    }
  }
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)local_e8.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_e8.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_e8.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
      (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_e8.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_e8.MLLevelSetElems.AllocatorInstance.Data,
             local_e8.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_e8.MLLevelSetElems.AllocatorInstance.Data != (FKMLLevelSetElem *)0x0
     ) {
    FMemory::Free(local_e8.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_e8.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_e8.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_e8.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_e8.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_e8.LevelSetElems.AllocatorInstance.Data,
             local_e8.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_e8.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_e8.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_e8.TaperedCapsuleElems.AllocatorInstance.Data,
             local_e8.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_e8.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_e8.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_e8.ConvexElems.AllocatorInstance.Data,
             local_e8.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_e8.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_e8.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_e8.SphylElems.AllocatorInstance.Data,local_e8.SphylElems.ArrayNum)
  ;
  if ((FKSphylElem *)local_e8.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_e8.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_e8.BoxElems.AllocatorInstance.Data,local_e8.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_e8.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_e8.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_e8.SphereElems.AllocatorInstance.Data,
             local_e8.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_e8.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_e8.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execSetStaticMeshCollisionFromComponent @ 14ce12330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execSetStaticMeshCollisionFromComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  FScriptContainerElement *pFVar4;
  UBodySetup *this;
  UStaticMesh *pUVar5;
  code *pcVar6;
  FUObjectItem *pFVar7;
  UGeometryScriptDebug *pUVar8;
  UStaticMesh *this_00;
  bool bVar9;
  int iVar10;
  FText *pFVar11;
  longlong lVar12;
  UClass *pUVar13;
  FUObjectItem *pFVar14;
  UClass *pUVar15;
  UActorComponent *pUVar16;
  UActorComponent *pUVar17;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined2 local_d8;
  ITextData *local_d0;
  uint local_c8;
  undefined2 local_c0;
  ITextData *local_b8;
  uint local_b0;
  TIterator local_a8;
  UClass *local_90;
  uint local_88;
  EInternalObjectFlags local_84;
  UGeometryScriptDebug *local_80;
  longlong *local_78;
  UStaticMesh *local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  FText local_58;
  FText local_48;
  FText local_38;
  
  pUVar17 = (UActorComponent *)0x0;
  local_70 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_78 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_80 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  this_00 = local_70;
  pUVar8 = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_70 == (UStaticMesh *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_58,L"UGeometryScriptLibrary_CollisionFunctions",
                         L"SetStaticMeshCollisionFromComponent_InvalidStaticMesh",
                         L"SetStaticMeshCollisionFromComponent: UpdateStaticMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar11);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_d0 = (pFVar11->TextData).Reference;
    local_d8 = 0x200;
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 8))(local_d0,local_68);
    }
    local_c8 = pFVar11->Flags;
    if (pUVar8 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar8->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           pFVar4 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pUVar8->Messages).ArrayNum;
      piVar1 = &(pUVar8->Messages).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
      }
      (pUVar8->Messages).ArrayNum = iVar10 + 1;
      pFVar4 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar10 * 0x18;
      *pFVar4 = local_d8._0_1_;
      pFVar4[1] = local_d8._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_d0;
      if (local_d0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_d0 + 8))(local_d0,local_64);
      }
      *(uint *)(pFVar4 + 0x10) = local_c8;
    }
    if (local_d0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d0 + 0x10))();
    }
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  else if (local_78 == (longlong *)0x0) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"UGeometryScriptLibrary_CollisionFunctions",
                         L"SetStaticMeshCollisionFromComponent_InvalidSourceComponent",
                         L"SetStaticMeshCollisionFromComponent: SourceComponent is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar11);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_b8 = (pFVar11->TextData).Reference;
    local_c0 = 0x200;
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 8))(local_b8,local_60);
    }
    local_b0 = pFVar11->Flags;
    if (pUVar8 != (UGeometryScriptDebug *)0x0) {
      pFVar4 = (pUVar8->Messages).AllocatorInstance.Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
          ((FScriptContainerElement *)&local_c0 <
           pFVar4 + (longlong)(pUVar8->Messages).ArrayMax * 0x18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pUVar8->Messages).ArrayNum;
      piVar1 = &(pUVar8->Messages).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pUVar8->Messages).AllocatorInstance,piVar1);
      }
      (pUVar8->Messages).ArrayNum = iVar10 + 1;
      pFVar4 = (pUVar8->Messages).AllocatorInstance.Data + (longlong)iVar10 * 0x18;
      *pFVar4 = local_c0._0_1_;
      pFVar4[1] = local_c0._1_1_;
      *(undefined8 *)(pFVar4 + 8) = 0;
      *(ITextData **)(pFVar4 + 8) = local_b8;
      if (local_b8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8 + 8))(local_b8,local_5c);
      }
      *(uint *)(pFVar4 + 0x10) = local_b0;
    }
    if (local_b8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8 + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  else {
    lVar12 = (**(code **)(*local_78 + 0x800))();
    if (lVar12 == 0) {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_38,L"UGeometryScriptLibrary_CollisionFunctions",
                           L"SetStaticMeshCollisionFromComponent_InvalidBodySetup",
                           L"SetStaticMeshCollisionFromComponent: SourceComponent BodySetup is Null"
                          );
      UE::Geometry::AppendError(pUVar8,InvalidInputs,pFVar11);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    else {
      this = (this_00->BodySetup).field0_0x0.DebugPtr;
      if (this != (UBodySetup *)0x0) {
        UBodySetup::RemoveSimpleCollision(this);
        FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
        FKAggregateGeom::CloneAgg(&this->AggGeom,(FKAggregateGeom *)(lVar12 + 0x38));
        (**(code **)(this->_padding_ + 0x2b0))(this);
        UStaticMesh::RecreateNavCollision(this_00);
        pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        local_a8.Index = -1;
        local_a8.Array = &GUObjectArray;
        local_a8.CurrentObject = (FUObjectItem *)0x0;
        FUObjectArray::TIterator::Advance(&local_a8);
        local_88 = 0;
        local_90 = pUVar13;
        local_84 = UE::GetAsyncLoadingInternalFlagsExclusion();
        local_84 = local_84 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
        if ((pUVar13 == (UClass *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Class",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                               ,0x70,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&(local_a8.Array)->ObjObjectsCritical);
        do {
          pFVar7 = local_a8.CurrentObject;
          pUVar16 = pUVar17;
          if (local_a8.CurrentObject != (FUObjectItem *)0x0) {
            pUVar16 = (UActorComponent *)((local_a8.CurrentObject)->field1_0x8).Object;
          }
          if (((local_88 & (uint)pUVar16->_padding_) == 0) &&
             (pFVar14 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)((longlong)&pUVar16->_padding_ + 4)),
             (local_84 &
             (EInternalObjectFlags)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x20)) ==
             Borrowed)) {
            pUVar15 = Z_Construct_UClass_UObject_NoRegister();
            if (pUVar13 == pUVar15) break;
            iVar10 = (int)pUVar13->_padding_;
            if ((iVar10 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
                &pUVar13->_padding_)) break;
          }
          bVar9 = FUObjectArray::TIterator::Advance(&local_a8);
          pUVar13 = local_90;
          pFVar7 = local_a8.CurrentObject;
        } while (bVar9);
joined_r0x00014ce12904:
        if (pFVar7 != (FUObjectItem *)0x0) {
          pUVar16 = (UActorComponent *)(pFVar7->field1_0x8).Object;
          if (pUVar16 == (UActorComponent *)0x0) {
LAB_14ce12936:
            pUVar16 = pUVar17;
          }
          else {
            pUVar13 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar10 = (int)pUVar13->_padding_;
            if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar10) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar13->_padding_)) goto LAB_14ce12936;
          }
          pUVar5 = (UStaticMesh *)pUVar16[7].PrimaryComponentTick.Target;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar5 != (UStaticMesh *)0x0) goto LAB_14ce1295d;
          }
          else if (pUVar5 != (UStaticMesh *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14ce1295d:
            if ((pUVar5 == this_00) && (pUVar16->bPhysicsStateCreated != '\0')) {
              UActorComponent::RecreatePhysicsState(pUVar16);
            }
          }
LAB_14ce12980:
          do {
            do {
              bVar9 = FUObjectArray::TIterator::Advance(&local_a8);
              pFVar7 = local_a8.CurrentObject;
              if (!bVar9) goto joined_r0x00014ce12904;
              pUVar16 = pUVar17;
              if (local_a8.CurrentObject != (FUObjectItem *)0x0) {
                pUVar16 = (UActorComponent *)((local_a8.CurrentObject)->field1_0x8).Object;
              }
            } while ((local_88 & (uint)pUVar16->_padding_) != 0);
            pUVar13 = Z_Construct_UClass_UObject_NoRegister();
            if (local_90 != pUVar13) {
              iVar10 = (int)local_90->_padding_;
              if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar10) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar10 * 8)
                  != &local_90->_padding_)) goto LAB_14ce12980;
            }
            pFVar14 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&pUVar16->_padding_ + 4));
          } while ((local_84 &
                   (EInternalObjectFlags)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x20)
                   ) != Borrowed);
          goto joined_r0x00014ce12904;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&(local_a8.Array)->ObjObjectsCritical);
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
      }
    }
  }
  return;
}

// execSetStaticMeshCollisionFromMesh @ 14ce12a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execSetStaticMeshCollisionFromMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UBodySetup *this;
  UStaticMesh *pUVar4;
  code *pcVar5;
  FUObjectItem *pFVar6;
  UStaticMesh *this_00;
  UDynamicMesh *pUVar7;
  bool bVar8;
  int iVar9;
  FText *pFVar10;
  longlong lVar11;
  UClass *pUVar12;
  FUObjectItem *pFVar13;
  UClass *pUVar14;
  UActorComponent *pUVar15;
  UActorComponent *pUVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_1f8;
  ITextData *local_1f0;
  uint local_1e8;
  undefined2 local_1e0;
  ITextData *local_1d8;
  uint local_1d0;
  TIterator local_1c8;
  UClass *local_1b0;
  uint local_1a8;
  EInternalObjectFlags local_1a4;
  longlong local_1a0;
  UStaticMesh *local_198;
  UDynamicMesh *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined2 uStack_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  FKAggregateGeom local_158;
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  FKAggregateGeom *local_b0;
  undefined8 *local_a8;
  code *local_a0;
  FKAggregateGeom **local_98;
  FText local_90;
  FText local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pUVar16 = (UActorComponent *)0x0;
  local_190 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  local_198 = (UStaticMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  uStack_170 = ___xmm_3dcccccd3dcccccd000000003f000000;
  uStack_168 = _UNK_1529c4828;
  local_188 = 0x1010601;
  uStack_184 = CONCAT31(uStack_184._1_3_,1);
  uStack_180 = 0x3f800000;
  uStack_17c = CONCAT31(uStack_17c._1_3_,1);
  local_178 = 0x19;
  uStack_174 = 1;
  uStack_160 = 0x102;
  uStack_15c = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_1a0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1a0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1a0);
  }
  pUVar7 = local_190;
  this_00 = local_198;
  lVar3 = local_1a0;
  local_68 = CONCAT44(uStack_184,local_188);
  uStack_60 = CONCAT44(uStack_17c,uStack_180);
  local_58 = CONCAT44(uStack_174,local_178);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uStack_50 = uStack_170;
  uStack_40 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,uStack_160));
  local_48 = uStack_168;
  if (local_190 == (UDynamicMesh *)0x0) {
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_90,L"UGeometryScriptLibrary_CollisionFunctions",
                         L"SetStaticMeshCollisionFromMesh_InvalidInput1",
                         L"SetStaticMeshCollisionFromMesh: FromDynamicMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar10);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_1f0 = (pFVar10->TextData).Reference;
    local_1f8 = 0x200;
    if (local_1f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f0 + 8))(local_1f0,local_res18);
    }
    local_1e8 = pFVar10->Flags;
    if (lVar3 != 0) {
      if (((*(undefined2 **)(lVar3 + 0x28) <= &local_1f8) &&
          (&local_1f8 < *(undefined2 **)(lVar3 + 0x28) + (longlong)*(int *)(lVar3 + 0x34) * 0xc)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = *(int *)(lVar3 + 0x30);
      if (iVar9 == *(int *)(lVar3 + 0x34)) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar3 + 0x28),(int *)(lVar3 + 0x34));
      }
      lVar11 = (longlong)iVar9;
      *(int *)(lVar3 + 0x30) = iVar9 + 1;
      lVar3 = *(longlong *)(lVar3 + 0x28);
      *(undefined1 *)(lVar3 + lVar11 * 0x18) = (undefined1)local_1f8;
      *(undefined1 *)(lVar3 + 1 + lVar11 * 0x18) = local_1f8._1_1_;
      *(undefined8 *)(lVar3 + 8 + lVar11 * 0x18) = 0;
      *(ITextData **)(lVar3 + 8 + lVar11 * 0x18) = local_1f0;
      if (local_1f0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f0 + 8))(local_1f0,local_res20);
      }
      *(uint *)(lVar3 + 0x10 + lVar11 * 0x18) = local_1e8;
    }
    if (local_1f0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f0 + 0x10))();
    }
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (local_198 == (UStaticMesh *)0x0) {
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_80,L"UGeometryScriptLibrary_CollisionFunctions",
                           L"SetStaticMeshCollisionFromMesh_InvalidInput2",
                           L"SetStaticMeshCollisionFromMesh: ToStaticMeshAsset is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar10);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_1d8 = (pFVar10->TextData).Reference;
      local_1e0 = 0x200;
      if (local_1d8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d8 + 8))(local_1d8,local_b8);
      }
      local_1d0 = pFVar10->Flags;
      if (lVar3 != 0) {
        if (((*(undefined2 **)(lVar3 + 0x28) <= &local_1e0) &&
            (&local_1e0 < *(undefined2 **)(lVar3 + 0x28) + (longlong)*(int *)(lVar3 + 0x34) * 0xc))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = *(int *)(lVar3 + 0x30);
        if (iVar9 == *(int *)(lVar3 + 0x34)) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar3 + 0x28),(int *)(lVar3 + 0x34));
        }
        lVar11 = (longlong)iVar9;
        *(int *)(lVar3 + 0x30) = iVar9 + 1;
        lVar3 = *(longlong *)(lVar3 + 0x28);
        *(undefined1 *)(lVar3 + lVar11 * 0x18) = (undefined1)local_1e0;
        *(undefined1 *)(lVar3 + 1 + lVar11 * 0x18) = local_1e0._1_1_;
        *(undefined8 *)(lVar3 + 8 + lVar11 * 0x18) = 0;
        *(ITextData **)(lVar3 + 8 + lVar11 * 0x18) = local_1d8;
        if (local_1d8 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_1d8 + 8))(local_1d8,local_b4);
        }
        *(uint *)(lVar3 + 0x10 + lVar11 * 0x18) = local_1d0;
      }
      if (local_1d8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d8 + 0x10))();
      }
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
    }
    else {
      local_b0 = &local_158;
      local_158.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8 = &local_68;
      local_158.SphereElems.ArrayNum = 0;
      local_158.SphereElems.ArrayMax = 0;
      local_98 = &local_b0;
      local_158.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_158.BoxElems.ArrayNum = 0;
      local_158.BoxElems.ArrayMax = 0;
      local_158.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.SphylElems.ArrayNum = 0;
      local_158.SphylElems.ArrayMax = 0;
      local_158.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.ConvexElems.ArrayNum = 0;
      local_158.ConvexElems.ArrayMax = 0;
      local_158.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.TaperedCapsuleElems.ArrayNum = 0;
      local_158.TaperedCapsuleElems.ArrayMax = 0;
      local_158.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.LevelSetElems.ArrayNum = 0;
      local_158.LevelSetElems.ArrayMax = 0;
      local_158.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.SkinnedLevelSetElems.ArrayNum = 0;
      local_158.SkinnedLevelSetElems.ArrayMax = 0;
      local_158.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.MLLevelSetElems.ArrayNum = 0;
      local_158.MLLevelSetElems.ArrayMax = 0;
      local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_158.SkinnedTriangleMeshElems.ArrayNum = 0;
      local_158.SkinnedTriangleMeshElems.ArrayMax = 0;
      local_158.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
      local_158.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
      UDynamicMesh::ProcessMesh
                (local_190,
                 (TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a0);
      this = (this_00->BodySetup).field0_0x0.DebugPtr;
      if (this != (UBodySetup *)0x0) {
        UBodySetup::RemoveSimpleCollision(this);
        FKAggregateGeom::FreeRenderInfo(&this->AggGeom);
        FKAggregateGeom::CloneAgg(&this->AggGeom,&local_158);
        (**(code **)(this->_padding_ + 0x2b0))(this);
        UStaticMesh::RecreateNavCollision(this_00);
        pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
        local_1c8.Index = -1;
        local_1c8.CurrentObject = (FUObjectItem *)0x0;
        local_1c8.Array = &GUObjectArray;
        FUObjectArray::TIterator::Advance(&local_1c8);
        local_1a8 = 0;
        local_1b0 = pUVar12;
        local_1a4 = UE::GetAsyncLoadingInternalFlagsExclusion();
        local_1a4 = local_1a4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
        if ((pUVar12 == (UClass *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Class",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                               ,0x70,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&(local_1c8.Array)->ObjObjectsCritical);
        do {
          pFVar6 = local_1c8.CurrentObject;
          pUVar15 = pUVar16;
          if (local_1c8.CurrentObject != (FUObjectItem *)0x0) {
            pUVar15 = (UActorComponent *)((local_1c8.CurrentObject)->field1_0x8).Object;
          }
          if (((local_1a8 & (uint)pUVar15->_padding_) == 0) &&
             (pFVar13 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)((longlong)&pUVar15->_padding_ + 4)),
             (local_1a4 &
             (EInternalObjectFlags)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20)) ==
             Borrowed)) {
            pUVar14 = Z_Construct_UClass_UObject_NoRegister();
            if (pUVar12 == pUVar14) break;
            iVar9 = (int)pUVar12->_padding_;
            if ((iVar9 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
                &pUVar12->_padding_)) break;
          }
          bVar8 = FUObjectArray::TIterator::Advance(&local_1c8);
          pUVar12 = local_1b0;
          pFVar6 = local_1c8.CurrentObject;
        } while (bVar8);
joined_r0x00014ce130e5:
        if (pFVar6 != (FUObjectItem *)0x0) {
          pUVar15 = (UActorComponent *)(pFVar6->field1_0x8).Object;
          if (pUVar15 == (UActorComponent *)0x0) {
LAB_14ce13117:
            pUVar15 = pUVar16;
          }
          else {
            pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
            iVar9 = (int)pUVar12->_padding_;
            if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar12->_padding_)) goto LAB_14ce13117;
          }
          pUVar4 = (UStaticMesh *)pUVar15[7].PrimaryComponentTick.Target;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar4 != (UStaticMesh *)0x0) goto LAB_14ce1313e;
          }
          else if (pUVar4 != (UStaticMesh *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
LAB_14ce1313e:
            if ((pUVar4 == this_00) && (pUVar15->bPhysicsStateCreated != '\0')) {
              UActorComponent::RecreatePhysicsState(pUVar15);
            }
          }
LAB_14ce13160:
          do {
            do {
              bVar8 = FUObjectArray::TIterator::Advance(&local_1c8);
              pFVar6 = local_1c8.CurrentObject;
              if (!bVar8) goto joined_r0x00014ce130e5;
              pUVar15 = pUVar16;
              if (local_1c8.CurrentObject != (FUObjectItem *)0x0) {
                pUVar15 = (UActorComponent *)((local_1c8.CurrentObject)->field1_0x8).Object;
              }
            } while ((local_1a8 & (uint)pUVar15->_padding_) != 0);
            pUVar12 = Z_Construct_UClass_UObject_NoRegister();
            if (local_1b0 != pUVar12) {
              iVar9 = (int)local_1b0->_padding_;
              if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar9) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar9 * 8)
                  != &local_1b0->_padding_)) goto LAB_14ce13160;
            }
            pFVar13 = FUObjectArray::IndexToObject
                                (&GUObjectArray,*(int *)((longlong)&pUVar15->_padding_ + 4));
          } while ((local_1a4 &
                   (EInternalObjectFlags)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20)
                   ) != Borrowed);
          goto joined_r0x00014ce130e5;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&(local_1c8.Array)->ObjObjectsCritical);
        UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this_00);
      }
      DestructItems<FKSkinnedTriangleMeshElem,int>
                ((FKSkinnedTriangleMeshElem *)
                 local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data,
                 local_158.SkinnedTriangleMeshElems.ArrayNum);
      if ((FKSkinnedTriangleMeshElem *)local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data !=
          (FKSkinnedTriangleMeshElem *)0x0) {
        FMemory::Free(local_158.SkinnedTriangleMeshElems.AllocatorInstance.Data);
      }
      DestructItems<FKMLLevelSetElem,int>
                ((FKMLLevelSetElem *)local_158.MLLevelSetElems.AllocatorInstance.Data,
                 local_158.MLLevelSetElems.ArrayNum);
      if ((FKMLLevelSetElem *)local_158.MLLevelSetElems.AllocatorInstance.Data !=
          (FKMLLevelSetElem *)0x0) {
        FMemory::Free(local_158.MLLevelSetElems.AllocatorInstance.Data);
      }
      DestructItems<FKSkinnedLevelSetElem,int>
                ((FKSkinnedLevelSetElem *)local_158.SkinnedLevelSetElems.AllocatorInstance.Data,
                 local_158.SkinnedLevelSetElems.ArrayNum);
      if ((FKSkinnedLevelSetElem *)local_158.SkinnedLevelSetElems.AllocatorInstance.Data !=
          (FKSkinnedLevelSetElem *)0x0) {
        FMemory::Free(local_158.SkinnedLevelSetElems.AllocatorInstance.Data);
      }
      DestructItems<FKLevelSetElem,int>
                ((FKLevelSetElem *)local_158.LevelSetElems.AllocatorInstance.Data,
                 local_158.LevelSetElems.ArrayNum);
      if ((FKLevelSetElem *)local_158.LevelSetElems.AllocatorInstance.Data != (FKLevelSetElem *)0x0)
      {
        FMemory::Free(local_158.LevelSetElems.AllocatorInstance.Data);
      }
      DestructItems<FKTaperedCapsuleElem,int>
                ((FKTaperedCapsuleElem *)local_158.TaperedCapsuleElems.AllocatorInstance.Data,
                 local_158.TaperedCapsuleElems.ArrayNum);
      if ((FKTaperedCapsuleElem *)local_158.TaperedCapsuleElems.AllocatorInstance.Data !=
          (FKTaperedCapsuleElem *)0x0) {
        FMemory::Free(local_158.TaperedCapsuleElems.AllocatorInstance.Data);
      }
      DestructItems<FKConvexElem,int>
                ((FKConvexElem *)local_158.ConvexElems.AllocatorInstance.Data,
                 local_158.ConvexElems.ArrayNum);
      if ((FKConvexElem *)local_158.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
        FMemory::Free(local_158.ConvexElems.AllocatorInstance.Data);
      }
      DestructItems<FKSphylElem,int>
                ((FKSphylElem *)local_158.SphylElems.AllocatorInstance.Data,
                 local_158.SphylElems.ArrayNum);
      if ((FKSphylElem *)local_158.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
        FMemory::Free(local_158.SphylElems.AllocatorInstance.Data);
      }
      DestructItems<FKBoxElem,int>
                ((FKBoxElem *)local_158.BoxElems.AllocatorInstance.Data,local_158.BoxElems.ArrayNum)
      ;
      if ((FKBoxElem *)local_158.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
        FMemory::Free(local_158.BoxElems.AllocatorInstance.Data);
      }
      DestructItems<FKSphereElem,int>
                ((FKSphereElem *)local_158.SphereElems.AllocatorInstance.Data,
                 local_158.SphereElems.ArrayNum);
      if ((FKSphereElem *)local_158.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
        FMemory::Free(local_158.SphereElems.AllocatorInstance.Data);
      }
    }
    *(UDynamicMesh **)param_3 = pUVar7;
  }
  return;
}

// execSetStaticMeshCustomComplexCollision @ 14ce13300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execSetStaticMeshCustomComplexCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  undefined2 local_a8;
  ITextData *local_a0;
  uint local_98;
  undefined2 local_90;
  ITextData *local_88;
  uint local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined1 local_58 [8];
  FText local_50;
  FText local_40;
  
  local_70 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_68 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_78 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  lVar5 = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_70 == 0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetStaticMeshCustomComplexCollision_InvalidInput",
                        L"SetStaticMeshCustomComplexCollision: StaticMeshAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_a0 = (pFVar8->TextData).Reference;
    local_a8 = 0x200;
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 8))(local_a0,local_res20);
    }
    local_98 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_a8) &&
          (&local_a8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_a8;
      puVar2[1] = local_a8._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_a0;
      if (local_a0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0 + 8))(local_a0,local_60);
      }
      *(uint *)(puVar2 + 0x10) = local_98;
    }
    local_40.TextData.Reference = local_50.TextData.Reference;
    if (local_a0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a0 + 0x10))();
      local_40.TextData.Reference = local_50.TextData.Reference;
    }
  }
  else {
    if (local_68 != 0) goto LAB_14ce1372c;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_40,L"UGeometryScriptLibrary_CollisionFunctions",
                        L"SetStaticMeshCustomComplexCollision_InvalidInput2",
                        L"SetStaticMeshCustomComplexCollision: StaticMeshCollisionAsset is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_88 = (pFVar8->TextData).Reference;
    local_90 = 0x200;
    if (local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88 + 8))(local_88,local_5c);
    }
    local_80 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_90) &&
          (&local_90 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = *(int *)(lVar5 + 0x30);
      if (iVar7 == *(int *)(lVar5 + 0x34)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      puVar2 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar7 * 0x18);
      *puVar2 = (undefined1)local_90;
      puVar2[1] = local_90._1_1_;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(ITextData **)(puVar2 + 8) = local_88;
      if (local_88 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88 + 8))(local_88,local_58);
      }
      *(uint *)(puVar2 + 0x10) = local_80;
    }
    if (local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88 + 0x10))();
    }
  }
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
LAB_14ce1372c:
  *(undefined1 *)param_3 = 0;
  return;
}

// execSimplifyConvexHulls @ 14ce148c0

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execSimplifyConvexHulls
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptConvexHullSimplificationOptions *pFVar1;
  FProperty *pFVar2;
  bool *pbVar3;
  FGeometryScriptConvexHullSimplificationOptions *pFVar4;
  FGeometryScriptSimpleCollision *pFVar5;
  bool local_res10 [16];
  UGeometryScriptDebug *local_res20;
  FGeometryScriptConvexHullSimplificationOptions local_d8;
  FGeometryScriptSimpleCollision local_c8;
  
  local_c8.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SphereElems.ArrayNum = 0;
  local_c8.AggGeom.SphereElems.ArrayMax = 0;
  local_c8.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.BoxElems.ArrayNum = 0;
  local_c8.AggGeom.BoxElems.ArrayMax = 0;
  local_c8.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SphylElems.ArrayNum = 0;
  local_c8.AggGeom.SphylElems.ArrayMax = 0;
  local_c8.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.ConvexElems.ArrayNum = 0;
  local_c8.AggGeom.ConvexElems.ArrayMax = 0;
  local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_c8.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.LevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.LevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_c8.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_c8.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_c8.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d8.SimplificationMethod = MeshQSlim;
  local_d8.SimplificationDistanceThreshold = 10.0;
  pFVar5 = &local_c8;
  if ((FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision *)0x0) {
    pFVar5 = (FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress;
  }
  local_d8.SimplificationAngleThreshold = 10.0;
  local_d8.MinTargetFaceCount = 0xc;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  pFVar1 = (FGeometryScriptConvexHullSimplificationOptions *)param_2->MostRecentPropertyAddress;
  local_res10[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar4 = &local_d8;
  if (pFVar1 != (FGeometryScriptConvexHullSimplificationOptions *)0x0) {
    pFVar4 = pFVar1;
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
  local_res20 = (UGeometryScriptDebug *)0x0;
  pbVar3 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar3 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SimplifyConvexHulls(pFVar5,pFVar4,pbVar3,local_res20);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_c8.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_c8.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_c8.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_c8.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_c8.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_c8.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_c8.AggGeom.SphylElems.AllocatorInstance.Data,
             local_c8.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_c8.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_c8.AggGeom.BoxElems.AllocatorInstance.Data,
             local_c8.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_c8.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_c8.AggGeom.SphereElems.AllocatorInstance.Data,
             local_c8.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_c8.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_c8.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// execStaticMeshHasCustomizedCollision @ 14ce161d0

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execStaticMeshHasCustomizedCollision
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = 0;
  return;
}

// execTransformSimpleCollisionShapes @ 14ce167f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_CollisionFunctions::execTransformSimpleCollisionShapes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometryScriptTransformCollisionOptions *pFVar1;
  FProperty *pFVar2;
  FKAggregateGeom *pFVar3;
  bool *pbVar4;
  FGeometryScriptSimpleCollision *pFVar5;
  FGeometryScriptTransformCollisionOptions *pFVar6;
  undefined1 auStackY_278 [32];
  bool local_248 [4];
  FGeometryScriptTransformCollisionOptions local_244 [2];
  UGeometryScriptDebug *local_240;
  FGeometryScriptSimpleCollision local_238;
  TTransform<double> local_198;
  FKAggregateGeom local_138;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_238.AggGeom.SphereElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.SphereElems.ArrayNum = 0;
  local_238.AggGeom.SphereElems.ArrayMax = 0;
  local_238.AggGeom.BoxElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.BoxElems.ArrayNum = 0;
  local_238.AggGeom.BoxElems.ArrayMax = 0;
  local_238.AggGeom.SphylElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.SphylElems.ArrayNum = 0;
  local_238.AggGeom.SphylElems.ArrayMax = 0;
  local_238.AggGeom.ConvexElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.ConvexElems.ArrayNum = 0;
  local_238.AggGeom.ConvexElems.ArrayMax = 0;
  local_238.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.TaperedCapsuleElems.ArrayNum = 0;
  local_238.AggGeom.TaperedCapsuleElems.ArrayMax = 0;
  local_238.AggGeom.LevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.LevelSetElems.ArrayNum = 0;
  local_238.AggGeom.LevelSetElems.ArrayMax = 0;
  local_238.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.SkinnedLevelSetElems.ArrayNum = 0;
  local_238.AggGeom.SkinnedLevelSetElems.ArrayMax = 0;
  local_238.AggGeom.MLLevelSetElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.AggGeom.MLLevelSetElems.ArrayNum = 0;
  local_238.AggGeom.MLLevelSetElems.ArrayMax = 0;
  local_238.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_238.AggGeom.SkinnedTriangleMeshElems.ArrayNum = 0;
  local_238.AggGeom.SkinnedTriangleMeshElems.ArrayMax = 0;
  local_238.AggGeom.RenderInfoPtr = (atomic<FKConvexGeomRenderInfo_*>)0x0;
  local_238.AggGeom.RenderInfoLock.State = (atomic<unsigned_char>)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  pFVar5 = &local_238;
  if ((FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress !=
      (FGeometryScriptSimpleCollision *)0x0) {
    pFVar5 = (FGeometryScriptSimpleCollision *)param_2->MostRecentPropertyAddress;
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_244[0].bWarnOnInvalidTransforms = true;
  local_244[0].bCenterTransformPivotPerShape = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_244,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_244);
  }
  pFVar1 = (FGeometryScriptTransformCollisionOptions *)param_2->MostRecentPropertyAddress;
  local_248[0] = false;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pFVar6 = local_244;
  if (pFVar1 != (FGeometryScriptTransformCollisionOptions *)0x0) {
    pFVar6 = pFVar1;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_248,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_248);
  }
  local_240 = (UGeometryScriptDebug *)0x0;
  pbVar4 = local_248;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_240,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_240);
  }
  local_198.Rotation.XY.m128d_f64[0] = (double)local_98._0_8_;
  local_198.Rotation.XY.m128d_f64[1] = (double)local_98._8_8_;
  local_198.Rotation.ZW.m128d_f64[0] = (double)local_88._0_8_;
  local_198.Rotation.ZW.m128d_f64[1] = (double)local_88._8_8_;
  local_198.Translation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_198.Translation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_198.Translation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_198.Translation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_198.Scale3D.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_198.Scale3D.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_198.Scale3D.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_198.Scale3D.ZW.m128d_f64[1] = (double)local_48._8_8_;
  pFVar3 = &TransformSimpleCollisionShapes
                      ((FGeometryScriptSimpleCollision *)&local_138,pFVar5,&local_198,pFVar6,pbVar4,
                       local_240)->AggGeom;
  FKAggregateGeom::FreeRenderInfo(param_3);
  FKAggregateGeom::CloneAgg(param_3,pFVar3);
  FKAggregateGeom::~FKAggregateGeom(&local_138);
  DestructItems<FKSkinnedTriangleMeshElem,int>
            ((FKSkinnedTriangleMeshElem *)
             local_238.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data,
             local_238.AggGeom.SkinnedTriangleMeshElems.ArrayNum);
  if ((FKSkinnedTriangleMeshElem *)local_238.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data
      != (FKSkinnedTriangleMeshElem *)0x0) {
    FMemory::Free(local_238.AggGeom.SkinnedTriangleMeshElems.AllocatorInstance.Data);
  }
  DestructItems<FKMLLevelSetElem,int>
            ((FKMLLevelSetElem *)local_238.AggGeom.MLLevelSetElems.AllocatorInstance.Data,
             local_238.AggGeom.MLLevelSetElems.ArrayNum);
  if ((FKMLLevelSetElem *)local_238.AggGeom.MLLevelSetElems.AllocatorInstance.Data !=
      (FKMLLevelSetElem *)0x0) {
    FMemory::Free(local_238.AggGeom.MLLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKSkinnedLevelSetElem,int>
            ((FKSkinnedLevelSetElem *)local_238.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data,
             local_238.AggGeom.SkinnedLevelSetElems.ArrayNum);
  if ((FKSkinnedLevelSetElem *)local_238.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data !=
      (FKSkinnedLevelSetElem *)0x0) {
    FMemory::Free(local_238.AggGeom.SkinnedLevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKLevelSetElem,int>
            ((FKLevelSetElem *)local_238.AggGeom.LevelSetElems.AllocatorInstance.Data,
             local_238.AggGeom.LevelSetElems.ArrayNum);
  if ((FKLevelSetElem *)local_238.AggGeom.LevelSetElems.AllocatorInstance.Data !=
      (FKLevelSetElem *)0x0) {
    FMemory::Free(local_238.AggGeom.LevelSetElems.AllocatorInstance.Data);
  }
  DestructItems<FKTaperedCapsuleElem,int>
            ((FKTaperedCapsuleElem *)local_238.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data,
             local_238.AggGeom.TaperedCapsuleElems.ArrayNum);
  if ((FKTaperedCapsuleElem *)local_238.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data !=
      (FKTaperedCapsuleElem *)0x0) {
    FMemory::Free(local_238.AggGeom.TaperedCapsuleElems.AllocatorInstance.Data);
  }
  DestructItems<FKConvexElem,int>
            ((FKConvexElem *)local_238.AggGeom.ConvexElems.AllocatorInstance.Data,
             local_238.AggGeom.ConvexElems.ArrayNum);
  if ((FKConvexElem *)local_238.AggGeom.ConvexElems.AllocatorInstance.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_238.AggGeom.ConvexElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphylElem,int>
            ((FKSphylElem *)local_238.AggGeom.SphylElems.AllocatorInstance.Data,
             local_238.AggGeom.SphylElems.ArrayNum);
  if ((FKSphylElem *)local_238.AggGeom.SphylElems.AllocatorInstance.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_238.AggGeom.SphylElems.AllocatorInstance.Data);
  }
  DestructItems<FKBoxElem,int>
            ((FKBoxElem *)local_238.AggGeom.BoxElems.AllocatorInstance.Data,
             local_238.AggGeom.BoxElems.ArrayNum);
  if ((FKBoxElem *)local_238.AggGeom.BoxElems.AllocatorInstance.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_238.AggGeom.BoxElems.AllocatorInstance.Data);
  }
  DestructItems<FKSphereElem,int>
            ((FKSphereElem *)local_238.AggGeom.SphereElems.AllocatorInstance.Data,
             local_238.AggGeom.SphereElems.ArrayNum);
  if ((FKSphereElem *)local_238.AggGeom.SphereElems.AllocatorInstance.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_238.AggGeom.SphereElems.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 150577bc0

bool __thiscall
`UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes'::__l78::<lambda_9>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4094154188815074731>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4094154188815074731>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

