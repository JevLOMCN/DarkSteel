// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 9

// StaticClass @ 14ce204d0

UClass * __cdecl UGeometryScriptLibrary_RemeshingFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_RemeshingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_RemeshingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_RemeshingFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_RemeshingFunctions @ 14ce26e20

UGeometryScriptLibrary_RemeshingFunctions * __thiscall
UGeometryScriptLibrary_RemeshingFunctions::UGeometryScriptLibrary_RemeshingFunctions
          (UGeometryScriptLibrary_RemeshingFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_RemeshingFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_RemeshingFunctions @ 14ce26e50

UGeometryScriptLibrary_RemeshingFunctions * __thiscall
UGeometryScriptLibrary_RemeshingFunctions::UGeometryScriptLibrary_RemeshingFunctions
          (UGeometryScriptLibrary_RemeshingFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_RemeshingFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_RemeshingFunctions @ 14ce274f0

void __thiscall
UGeometryScriptLibrary_RemeshingFunctions::~UGeometryScriptLibrary_RemeshingFunctions
          (UGeometryScriptLibrary_RemeshingFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_RemeshingFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce30890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  char cVar1;
  char cVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDynamicMesh3 *pFVar4;
  char *pcVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  FSharedReferencer<1> FVar9;
  undefined8 uVar10;
  int iVar11;
  bool bVar12;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FText *pFVar15;
  FDynamicMeshAttributeSet *pFVar16;
  FDynamicMeshAttributeSet *pFVar17;
  FDynamicMeshAttributeSet *this_00;
  longlong *plVar18;
  TReferenceControllerBase<1> *pTVar19;
  EEdgeRefineFlags EVar20;
  undefined1 auStackY_468 [32];
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_438;
  FSharedReferencer<1> FStack_430;
  undefined8 local_428;
  FSharedReferencer<1> local_420;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_418;
  FText local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double dStack_3c8;
  double local_3c0;
  double dStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double dStack_378;
  double local_370;
  double dStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 uStack_350;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_348;
  TReferenceControllerBase<1> *pTStack_340;
  undefined1 local_338 [488];
  longlong *local_150;
  int local_148;
  double local_140;
  double dStack_138;
  bool local_130;
  float local_12c;
  float local_128;
  ForAnyElementType local_120;
  undefined8 local_118;
  TBitArray<FDefaultBitArrayAllocator> local_110;
  undefined8 uStack_f0;
  void *local_e0;
  undefined4 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  undefined8 uStack_a0;
  void *local_90;
  undefined4 local_88;
  int local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_468;
  pTVar13 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3>
                      (&local_418,param_1);
  pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar13->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_418.SharedReferenceCount.ReferenceController);
  pTVar19 = (TReferenceControllerBase<1> *)0x0;
  local_438 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  FStack_430.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)(*(longlong *)this + 1) != '\0') {
    pTVar14 = ::operator_new(0xd0);
    if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
      local_438 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&DAT_00000010;
    }
    else {
      pTVar14->SharedReferenceCount = (atomic<int>)0x1;
      pTVar14->WeakReferenceCount = (atomic<int>)0x1;
      pTVar14->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
                ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar14 + 1),pFVar4,true);
      local_438 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar14 + 1);
      if ((local_438 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
      pTVar19 = pTVar14;
    }
    local_428 = 0;
    local_420.ReferenceController = pTVar19;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_430,&local_420);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_420.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  }
  this_00 = (FDynamicMeshAttributeSet *)0x0;
  UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)local_338);
  dVar8 = __real_4046800000000000;
  local_338._152_8_ = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_338._184_8_ = __real_3f847ae147ae147b;
  local_338._256_8_ = (FDynamicMesh3 *)0x0;
  local_338._264_8_ = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_338._352_8_ = 0.0;
  local_338._360_8_ = 0.0;
  local_338._208_8_ = __real_3ff0000000000000;
  local_338._272_8_ = 0.0;
  local_338._280_8_ = 0.0;
  local_338._232_8_ = __real_4046800000000000;
  local_338._0_8_ = &___7FRemeshMeshOp_Geometry_UE__6B_;
  local_338._160_8_ = (TReferenceControllerBase<1> *)0x0;
  local_338[0xa8] = Standard;
  local_338._172_4_ = 0x14;
  local_338._176_4_ = 0x14;
  local_338._192_4_ = 5;
  local_338._196_4_ = 0;
  local_338._200_4_ = 0.25;
  local_338[0xd9] = false;
  local_338[0xda] = true;
  local_338[0xdb] = true;
  local_338[0xdc] = true;
  local_338[0xdd] = true;
  local_338[0xde] = true;
  local_338[0xdf] = true;
  local_338[0xe0] = true;
  local_338[0xe1] = false;
  local_338[0xf0] = false;
  local_338._288_8_ = ___xmm_3ff00000000000000000000000000000;
  local_338._296_8_ = _UNK_15061cbc8;
  local_338._320_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_338._344_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_338._368_8_ = ___xmm_3ff00000000000000000000000000000;
  local_338._376_8_ = _UNK_15061cbc8;
  local_338._400_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_338._424_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_338[0x1b0] = false;
  local_338[0x1b1] = true;
  local_338._448_8_ = 0;
  local_150 = (longlong *)0x0;
  local_148 = 1;
  local_130 = true;
  local_12c = 0.25;
  local_128 = 0.25;
  local_120.Data = (FScriptContainerElement *)0x0;
  local_118 = 0;
  local_110.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e0 = (void *)0x0;
  EVar20 = NoConstraint;
  local_d8 = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_80 = 0;
  local_338._304_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_338._312_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_338._384_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_338._392_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_140 = ___xmm_3fc999999999999a3fc999999999999a;
  dStack_138 = _UNK_15076b708;
  local_110.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_110.MaxBits = _UNK_150631d94;
  uStack_f0 = _UNK_150631d98;
  local_c0.NumBits = ___xmm_00000000ffffffff0000008000000000;
  local_c0.MaxBits = _UNK_150631d94;
  uStack_a0 = _UNK_150631d98;
  local_338._328_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_338._336_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_338._408_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_338._416_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_358 = 0;
  uStack_350 = 0;
  local_338._136_8_ = pFVar4;
  local_338._144_8_ = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  uVar10 = local_338._160_8_;
  local_348 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_338._152_8_;
  FVar9.ReferenceController = FStack_430.ReferenceController;
  if (FStack_430.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_430.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_430.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_338._152_8_ = local_438;
  pTStack_340 = (TReferenceControllerBase<1> *)local_338._160_8_;
  local_338._160_8_ = FStack_430.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)uVar10);
  pcVar5 = *(char **)this;
  cVar1 = *pcVar5;
  local_338[0xd9] = cVar1;
  local_338[0xa8] = pcVar5[0x10] != '\0';
  local_338._172_4_ = *(undefined4 *)(pcVar5 + 0x14);
  local_338._176_4_ = *(undefined4 *)(pcVar5 + 0x14);
  local_338._192_4_ = 0;
  local_338._196_4_ = 0;
  local_338._200_4_ = *(float *)(pcVar5 + 4);
  if (__real_3f800000 <= *(float *)(pcVar5 + 4)) {
    local_338._200_4_ = __real_3f800000;
  }
  if ((float)local_338._200_4_ <= 0.0) {
    local_338._200_4_ = 0.0;
  }
  cVar2 = pcVar5[2];
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      local_338[0xd8] = Cotangent;
      goto LAB_14ce30ca9;
    }
    if (cVar2 == '\x02') {
      local_338[0xd8] = MeanValue;
      goto LAB_14ce30ca9;
    }
  }
  local_338[0xd8] = Uniform;
LAB_14ce30ca9:
  pcVar5 = *(char **)((longlong)this + 8);
  if (*pcVar5 == '\0') {
    local_338._208_8_ =
         UE::Geometry::FRemeshMeshOp::CalculateTargetEdgeLength(pFVar4,*(int *)(pcVar5 + 4),0.0);
    cVar1 = local_338[0xd9];
  }
  else {
    local_338._208_8_ = (undefined8)*(float *)(pcVar5 + 8);
  }
  lVar6 = *(longlong *)this;
  local_338[0xda] = cVar1 == '\0';
  local_338[0xdb] = *(bool *)(lVar6 + 0xb);
  local_338[0xdc] = *(bool *)(lVar6 + 0xc);
  cVar1 = *(char *)(lVar6 + 8);
  if (cVar1 == '\0') {
    EVar20 = FullyConstrained;
  }
  else if (cVar1 == '\x01') {
    EVar20 = SplitsOnly;
  }
  else if ((cVar1 == '\x02') || (cVar1 != '\x03')) {
    EVar20 = NoFlip;
  }
  cVar1 = *(char *)(lVar6 + 9);
  if (cVar1 == '\0') {
    local_338._248_4_ = FullyConstrained;
  }
  else if (cVar1 == '\x01') {
    local_338._248_4_ = SplitsOnly;
  }
  else if ((cVar1 == '\x02') || (cVar1 != '\x03')) {
    local_338._248_4_ = NoFlip;
  }
  else {
    local_338._248_4_ = NoConstraint;
  }
  cVar1 = *(char *)(lVar6 + 10);
  if (cVar1 == '\0') {
    pFVar17 = (FDynamicMeshAttributeSet *)&DAT_00000007;
  }
  else {
    pFVar17 = (FDynamicMeshAttributeSet *)&DAT_00000005;
    if ((cVar1 != '\x01') && ((cVar1 == '\x02' || (pFVar17 = this_00, cVar1 != '\x03')))) {
      pFVar17 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    }
  }
  local_338._252_4_ = SUB84(pFVar17,0);
  uStack_3b0 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
  uStack_3ac = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
  local_338._256_8_ = (FDynamicMesh3 *)0x0;
  local_338._264_8_ = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_338[0xde] = *(bool *)(lVar6 + 1);
  local_338[0xdd] = *(bool *)(lVar6 + 0xd);
  local_338._223_2_ = *(undefined2 *)(lVar6 + 0xe);
  local_338._272_8_ = 0.0;
  local_338._280_8_ = 0.0;
  local_338[0xe1] = false;
  local_338[0x1b0] = false;
  local_338[0x1b1] = true;
  local_338._232_8_ = dVar8;
  dStack_3c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_3c0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_338._320_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_338._328_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_338._352_8_ = 0.0;
  local_338._360_8_ = 0.0;
  dStack_3b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_338._336_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_338._344_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dStack_378 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_370 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_338._400_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_338._408_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_3e8 = ___xmm_3ff00000000000000000000000000000;
  dStack_3e0 = _UNK_15061cbc8;
  local_3d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_3d0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_338._288_8_ = ___xmm_3ff00000000000000000000000000000;
  local_338._296_8_ = _UNK_15061cbc8;
  local_338._304_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_338._312_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_398 = ___xmm_3ff00000000000000000000000000000;
  dStack_390 = _UNK_15061cbc8;
  local_388 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_380 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_338._368_8_ = ___xmm_3ff00000000000000000000000000000;
  local_338._376_8_ = _UNK_15061cbc8;
  local_338._384_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_338._392_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_368 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_338._416_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_338._424_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uStack_360 = uStack_3b0;
  uStack_35c = uStack_3ac;
  local_338._244_4_ = EVar20;
  UE::Geometry::FRemeshMeshOp::CalculateResult((FRemeshMeshOp *)local_338,(FProgressCancel *)0x0);
  uVar10 = local_338._8_8_;
  if (local_338._96_4_ == Success) {
    local_338._8_8_ = (FDynamicMesh3 *)0x0;
    UE::Geometry::FDynamicMesh3::operator=(param_1,(FDynamicMesh3 *)uVar10);
    if ((FDynamicMesh3 *)uVar10 != (FDynamicMesh3 *)0x0) {
      (**(code **)*(longlong *)uVar10)(uVar10);
    }
  }
  else {
    if ((pFVar4 == (FDynamicMesh3 *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    UE::Geometry::FDynamicMesh3::operator=(param_1,pFVar4);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_408,L"UGeometryScriptLibrary_MeshRemeshFunctions",
                         L"ApplyUniformRemesh_ComputeError",
                         L"ApplyUniformRemesh: Error computing result, returning input mesh");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 0x10),InvalidInputs,
               pFVar15);
    if (local_408.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_408.TextData.Reference + 0x10))();
    }
  }
  if (*(char *)(*(longlong *)this + 0x18) != '\0') {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
  }
  if (**(char **)this != '\0') {
    UE::Geometry::FDynamicMesh3::EnableTriangleGroups(param_1,0);
    UE::Geometry::FDynamicMesh3::EnableAttributes(param_1);
    pFVar17 = (param_1->AttributeSet).Ptr;
    pFVar16 = this_00;
    if (pFVar17 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar16 = pFVar17;
    }
    pFVar17 = this_00;
    if (0 < (pFVar16->NormalLayers).Array.ArrayNum) {
      pFVar17 = *(FDynamicMeshAttributeSet **)(pFVar16->NormalLayers).Array.AllocatorInstance.Data;
    }
    UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
              ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar17,false);
    pFVar17 = (param_1->AttributeSet).Ptr;
    if (pFVar17 != (FDynamicMeshAttributeSet *)0x0) {
      this_00 = pFVar17;
    }
    UE::Geometry::FDynamicMeshAttributeSet::EnableMaterialID(this_00);
  }
  local_338._0_8_ = &___7FRemeshMeshOp_Geometry_UE__6B_;
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_78.Data,(int)local_70);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_78.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_88 = 0;
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  bVar12 = local_c8._4_4_ != 0;
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  if (bVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_d0,0,(int *)((longlong)&local_c8 + 4));
  }
  iVar11 = local_c0.MaxBits;
  uStack_a0 = 0xffffffff;
  local_c0._24_8_ = (ulonglong)(uint)local_c0.MaxBits << 0x20;
  if (0x80 < (uint)iVar11) {
    local_c0.NumBits = 0;
    local_c0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
  }
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
  }
  if (local_d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data);
  }
  local_d8 = 0;
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  bVar12 = local_118._4_4_ != 0;
  local_118 = (ulonglong)local_118._4_4_ << 0x20;
  if (bVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&local_120,0,(int *)((longlong)&local_118 + 4));
  }
  iVar11 = local_110.MaxBits;
  uStack_f0 = 0xffffffff;
  local_110._24_8_ = (ulonglong)(uint)local_110.MaxBits << 0x20;
  if (0x80 < (uint)iVar11) {
    local_110.NumBits = 0;
    local_110.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_110,0);
  }
  if (local_110.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
  }
  if (local_120.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.Data);
  }
  if (local_338._448_8_ != 0) {
    plVar18 = (longlong *)(local_338 + 0x1d0);
    if (local_150 != (longlong *)0x0) {
      plVar18 = local_150;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_338._160_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_338._144_8_);
  local_338._0_8_ = &___7FDynamicMeshOperator_Geometry_UE__6B_;
  DestructItems<UE::Geometry::FGeometryWarning,int>
            ((FGeometryWarning *)local_338._120_8_,local_338._128_4_);
  if ((FGeometryWarning *)local_338._120_8_ != (FGeometryWarning *)0x0) {
    FMemory::Free((void *)local_338._120_8_);
  }
  DestructItems<UE::Geometry::FGeometryError,int>
            ((FGeometryError *)local_338._104_8_,local_338._112_4_);
  if ((FGeometryError *)local_338._104_8_ != (FGeometryError *)0x0) {
    FMemory::Free((void *)local_338._104_8_);
  }
  if ((FDynamicMesh3 *)local_338._8_8_ != (FDynamicMesh3 *)0x0) {
    (**(code **)*(longlong *)local_338._8_8_)(local_338._8_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// ApplyUniformRemesh @ 14ce5cae0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh
          (UDynamicMesh *param_1,FGeometryScriptRemeshOptions *param_2,
          FGeometryScriptUniformRemeshOptions *param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  FGeometryScriptRemeshOptions *local_28;
  FGeometryScriptUniformRemeshOptions *local_20;
  UGeometryScriptDebug **local_18;
  
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshRemeshFunctions",
                        L"ApplyUniformRemesh_InvalidInput",L"ApplyUniformRemesh: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_18 = &local_res20;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetPrivateStaticClass @ 14ce6d8f0

UClass * __cdecl UGeometryScriptLibrary_RemeshingFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_RemeshingFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_RemeshingFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_RemeshingFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_RemeshingFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions @ 14ce752c0

void __cdecl
UGeometryScriptLibrary_RemeshingFunctions::
StaticRegisterNativesUGeometryScriptLibrary_RemeshingFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_RemeshingFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyUniformRemesh @ 14ce88800

void __cdecl
UGeometryScriptLibrary_RemeshingFunctions::execApplyUniformRemesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  FText *pFVar3;
  UGeometryScriptDebug *local_res10;
  UDynamicMesh *local_res18;
  UGeometryScriptDebug *local_res20;
  undefined2 local_a8;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  UGeometryScriptDebug **local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
  local_a8 = 0x100;
  uStack_a6 = 2;
  uStack_a4 = 0x3e800000;
  uStack_a0 = 0x1020202;
  uStack_9c = 0x1010101;
  local_98 = local_98 & 0xffffff00;
  uStack_94 = 0x14;
  local_90 = CONCAT31(local_90._1_3_,1);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_88 = local_88 & 0xffffff00;
  uStack_84 = 5000;
  local_80 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
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
  pUVar2 = local_res18;
  local_68 = CONCAT44(uStack_84,local_88);
  local_28 = CONCAT44(uStack_94,local_98);
  local_38 = CONCAT44(uStack_a4,CONCAT13(uStack_a5,CONCAT12(uStack_a6,local_a8)));
  uStack_30 = CONCAT44(uStack_9c,uStack_a0);
  local_60 = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20 = local_90;
  local_res20 = local_res10;
  if (local_res18 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_78,L"UGeometryScriptLibrary_MeshRemeshFunctions",
                        L"ApplyUniformRemesh_InvalidInput",L"ApplyUniformRemesh: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar3);
    if ((ITextData *)local_78._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_78._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_58 = &local_38;
  local_50 = &local_68;
  local_48 = &local_res20;
  local_78._8_8_ = &local_58;
  local_78._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_RemeshingFunctions::ApplyUniformRemesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res18,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_78,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

