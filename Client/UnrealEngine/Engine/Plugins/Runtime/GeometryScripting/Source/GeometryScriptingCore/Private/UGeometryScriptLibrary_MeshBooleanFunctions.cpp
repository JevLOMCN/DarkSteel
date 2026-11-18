// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 24

// StaticClass @ 14cd961f0

UClass * __cdecl UGeometryScriptLibrary_MeshBooleanFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBooleanFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBooleanFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBooleanFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshBooleanFunctions @ 14cda5f40

UGeometryScriptLibrary_MeshBooleanFunctions * __thiscall
UGeometryScriptLibrary_MeshBooleanFunctions::UGeometryScriptLibrary_MeshBooleanFunctions
          (UGeometryScriptLibrary_MeshBooleanFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBooleanFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshBooleanFunctions @ 14cda5f70

UGeometryScriptLibrary_MeshBooleanFunctions * __thiscall
UGeometryScriptLibrary_MeshBooleanFunctions::UGeometryScriptLibrary_MeshBooleanFunctions
          (UGeometryScriptLibrary_MeshBooleanFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBooleanFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshBooleanFunctions @ 14cda6aa0

void __thiscall
UGeometryScriptLibrary_MeshBooleanFunctions::~UGeometryScriptLibrary_MeshBooleanFunctions
          (UGeometryScriptLibrary_MeshBooleanFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshBooleanFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14cdad400

void __thiscall
`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshIsoCurves'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  float local_res8 [2];
  undefined8 local_res10;
  code *local_58;
  float *local_50;
  code *local_48;
  undefined8 *local_40;
  FText local_38;
  FMeshIsoCurves local_28;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)(*plVar1 + 8) !=
      (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
      (param_1->VertexRefCounts).RefCounts.CurBlockUsed) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                        L"ApplyMeshIsoCurves_ListWrongSize",
                        L"ApplyMeshIsoCurves: Per Vertex Values list has wrong length -- must match vertices"
                       );
    UE::Geometry::AppendError
              (*(UGeometryScriptDebug **)((longlong)this + 0x18),InvalidInputs,pFVar4);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  local_28.Settings.DegenerateEdgeTol = __real_3e45798ee2308c3a;
  local_28.Settings.bCollapseDegenerateEdgesOnCut = true;
  local_28.Settings.SnapToExistingVertexTol = (double)(*(float **)this)[1];
  local_28.Settings.CurveIsoValueSnapTolerance = **(float **)this;
  local_res10 = *(undefined8 *)((longlong)this + 8);
  local_res8[0] = *(float *)((longlong)this + 0x10);
  local_50 = local_res8;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshIsoCurves::Cut'::__l2::<lambda_1>,float,int,int,float,float>
             ::Call;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<``UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshIsoCurves'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,float,int>
             ::Call;
  local_40 = &local_res10;
  UE::Geometry::FMeshIsoCurves::Cut
            (&local_28,param_1,(TFunctionRef<float___cdecl(int)> *)&local_48,
             (TFunctionRef<float___cdecl(int,int,float,float)> *)&local_58,local_res8[0]);
  return;
}

// operator() @ 14cdad550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStackY_1f8 [32];
  FMeshMirror local_1c8;
  undefined **local_168;
  FDynamicMesh3 *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  longlong local_128;
  longlong local_118 [3];
  longlong *local_100;
  undefined2 local_f8;
  float local_f4;
  double local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  undefined2 local_d0;
  bool local_ce;
  float local_cc;
  bool local_c8;
  float local_c4;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (**(char **)this != '\0') {
    pdVar1 = *(double **)((longlong)this + 0x10);
    local_140._s_0.X = *pdVar1;
    local_140._s_0.Y = pdVar1[1];
    local_140._s_0.Z = pdVar1[2];
    pdVar1 = *(double **)((longlong)this + 8);
    local_158._s_0.Z = pdVar1[2];
    local_158._s_0.X = *pdVar1;
    local_158._s_0.Y = pdVar1[1];
    local_e0 = ___xmm_3fd00000000000003fb999999999999a;
    dStack_d8 = _UNK_150b37c98;
    local_168 = &___7FMeshPlaneCut_Geometry_UE__6B_;
    local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_50 = _UNK_150631d98;
    local_f0 = __real_3e45798ee2308c3a;
    local_128 = 0;
    local_100 = (longlong *)0x0;
    local_f8._0_1_ = false;
    local_f8._1_1_ = true;
    local_f4 = 1.0;
    local_d0._0_1_ = true;
    local_d0._1_1_ = true;
    local_ce = true;
    local_cc = 1e-06;
    local_c8 = true;
    local_c4 = 0.01;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0;
    local_b0.Data = (FScriptContainerElement *)0x0;
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_a0.Data = (FScriptContainerElement *)0x0;
    local_98._0_4_ = 0;
    local_98._4_4_ = 0;
    local_90.Data = (FScriptContainerElement *)0x0;
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    local_80.Data = (FScriptContainerElement *)0x0;
    local_78 = 0;
    local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_40 = (ForElementType<FSetElementId>)0x0;
    local_38 = 0;
    local_e8 = **(double **)((longlong)this + 0x18);
    local_160 = param_1;
    UE::Geometry::FMeshPlaneCut::Cut((FMeshPlaneCut *)&local_168);
    local_168 = &___7FMeshPlaneCut_Geometry_UE__6B_;
    local_38 = 0;
    if (local_40 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_40);
    }
    uVar2 = local_78 >> 0x20;
    local_78 = local_78 & 0xffffffff00000000;
    if ((int)uVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_80,0,(int *)((longlong)&local_78 + 4));
    }
    iVar3 = local_70.MaxBits;
    uStack_50 = 0xffffffff;
    local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
    if (0x80 < (uint)iVar3) {
      local_70.NumBits = 0;
      local_70.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
    }
    if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
    }
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
    if (local_90.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data);
    }
    DestructItems<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int>
              ((FCutResultRegion *)local_a0.Data,(int)local_98);
    if ((FCutResultRegion *)local_a0.Data != (FCutResultRegion *)0x0) {
      FMemory::Free(local_a0.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data,(int)local_a8);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_b0.Data);
    }
    DestructItems<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int>
              ((FOpenBoundary *)local_c0.Data,(int)local_b8);
    if ((FOpenBoundary *)local_c0.Data != (FOpenBoundary *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    if (local_128 != 0) {
      plVar4 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar4 = local_100;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  pdVar1 = *(double **)((longlong)this + 0x10);
  local_1c8.PlaneNormal.field0_0x0._s_0.X = *pdVar1;
  local_1c8.PlaneNormal.field0_0x0._s_0.Y = pdVar1[1];
  local_1c8.PlaneNormal.field0_0x0._s_0.Z = pdVar1[2];
  pdVar1 = *(double **)((longlong)this + 8);
  local_1c8.PlaneOrigin.field0_0x0._s_0.Z = pdVar1[2];
  local_1c8.PlaneOrigin.field0_0x0._s_0.X = *pdVar1;
  local_1c8.PlaneOrigin.field0_0x0._s_0.Y = pdVar1[1];
  local_1c8._padding_ = (longlong)&___7FMeshMirror_Geometry_UE__6B_;
  local_1c8.WeldNormalMode = MirrorNormals;
  local_1c8.bWeldAlongPlane = *(bool *)(*(longlong *)this + 2);
  local_1c8.bAllowBowtieVertexCreation = false;
  local_1c8.PlaneTolerance = **(double **)((longlong)this + 0x18);
  local_1c8.Mesh = param_1;
  UE::Geometry::FMeshMirror::MirrorAndAppend(&local_1c8,(FProgressCancel *)0x0);
  return;
}

// operator() @ 14cdad850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  longlong *plVar7;
  undefined1 auStackY_1c8 [32];
  code *local_198 [2];
  undefined **local_188;
  code *local_180;
  undefined8 local_170;
  undefined **local_168;
  FDynamicMesh3 *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  longlong local_128;
  longlong local_118 [3];
  longlong *local_100;
  undefined2 local_f8;
  float local_f4;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined2 local_d0;
  bool local_ce;
  float local_cc;
  bool local_c8;
  float local_c4;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  ForAnyElementType local_a0;
  undefined8 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  ForElementType<FSetElementId> local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pdVar1 = *(double **)((longlong)this + 8);
  uVar2 = *(undefined8 *)((longlong)this + 0x18);
  local_140._s_0.X = *pdVar1;
  local_140._s_0.Y = pdVar1[1];
  local_140._s_0.Z = pdVar1[2];
  pdVar1 = *(double **)this;
  local_158._s_0.Z = pdVar1[2];
  local_158._s_0.X = *pdVar1;
  local_158._s_0.Y = pdVar1[1];
  local_f0 = __real_3e45798ee2308c3a;
  local_d8 = __real_3fd0000000000000;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_168 = &___7FMeshPlaneCut_Geometry_UE__6B_;
  local_128 = 0;
  local_100 = (longlong *)0x0;
  local_f8._0_1_ = false;
  local_f8._1_1_ = true;
  local_e8 = ___xmm_3fb999999999999a3ee4f8b588000000;
  dStack_e0 = _UNK_1528d8ad8;
  local_d0._0_1_ = true;
  local_d0._1_1_ = true;
  local_ce = true;
  local_cc = 1e-06;
  local_c8 = true;
  local_c4 = 0.01;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98._0_4_ = 0;
  local_98._4_4_ = 0;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_40 = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  local_f4 = __real_3f800000 / *(float *)(*(longlong *)((longlong)this + 0x10) + 0xc);
  local_160 = param_1;
  bVar6 = UE::Geometry::FMeshPlaneCut::Cut((FMeshPlaneCut *)&local_168);
  *(bool *)uVar2 = bVar6;
  pcVar3 = *(char **)((longlong)this + 0x10);
  if (*pcVar3 != '\0') {
    local_188 = &
                ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_170 = 0;
    local_180 = UE::Geometry::ConstrainedDelaunayTriangulate<double>;
    local_198[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                   ::Call;
    UE::Geometry::FMeshPlaneCut::HoleFill
              ((FMeshPlaneCut *)&local_168,
               (TFunction<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>___cdecl(UE::Geometry::TGeneralPolygon2<double>_const_&)>
                *)local_198,(bool)pcVar3[8],-1,*(int *)(pcVar3 + 4));
  }
  local_168 = &___7FMeshPlaneCut_Geometry_UE__6B_;
  local_38 = 0;
  if (local_40 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40);
  }
  uVar4 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar5 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar5) {
    local_70.NumBits = 0;
    local_70.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  if (local_90.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data);
  }
  DestructItems<UE::Geometry::FMeshPlaneCut::FCutResultRegion,int>
            ((FCutResultRegion *)local_a0.Data,(int)local_98);
  if ((FCutResultRegion *)local_a0.Data != (FCutResultRegion *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data,(int)local_a8);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_b0.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  DestructItems<UE::Geometry::FMeshPlaneCut::FOpenBoundary,int>
            ((FOpenBoundary *)local_c0.Data,(int)local_b8);
  if ((FOpenBoundary *)local_c0.Data != (FOpenBoundary *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  if (local_128 != 0) {
    plVar7 = local_118;
    if (local_100 != (longlong *)0x0) {
      plVar7 = local_100;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// operator() @ 14cdadb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  TDynamicVector<int,512> *this_00;
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  double *pdVar3;
  char *pcVar4;
  FName FVar5;
  code *pcVar6;
  bool bVar7;
  FDynamicMeshAttributeSet *pFVar8;
  TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
  *pTVar9;
  FDynamicMeshAttributeSet *this_01;
  int iVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  FDynamicMeshAttributeSet *pFVar15;
  int iVar16;
  FDynamicMeshAttributeSet *this_02;
  int iVar17;
  double dVar18;
  undefined1 auStackY_208 [32];
  FName local_1c8 [2];
  code *local_1b8 [2];
  undefined **local_1a8;
  code *local_1a0;
  undefined8 local_190;
  undefined **local_188;
  FDynamicMesh3 *local_180;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TUniqueFunction<bool___cdecl(int)> local_148;
  undefined2 local_118;
  float local_114;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined2 local_f0;
  bool local_ee;
  float local_ec;
  bool local_e8;
  float local_e4;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a0;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1c8[0] = (FName)this;
  pFVar8 = ::operator_new(0x30);
  this_02 = (FDynamicMeshAttributeSet *)0x0;
  pFVar15 = this_02;
  if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
    this_00 = (TDynamicVector<int,512> *)&pFVar8->ParentMesh;
    pFVar8->_padding_ = 0;
    this_00->CurBlock = 0;
    this_00->CurBlockUsed = 0;
    pFVar8->_padding_ = (longlong)&___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
    (((TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *)
     &pFVar8->UVLayers)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (pFVar8->UVLayers).Array.ArrayNum = 0;
    (pFVar8->UVLayers).Array.ArrayMax = 0;
    UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(this_00);
    pFVar8->_padding_ = (longlong)param_1;
    UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::Initialize
              ((TDynamicMeshTriangleAttribute<int,1> *)pFVar8,0);
    pFVar8->_padding_ = (longlong)&___7__TDynamicMeshScalarTriangleAttribute_H_Geometry_UE__6B_;
    pFVar15 = pFVar8;
  }
  UE::Geometry::TDynamicMeshTriangleAttribute<int,1>::Initialize
            ((TDynamicMeshTriangleAttribute<int,1> *)pFVar15,0);
  pFVar8 = (param_1->AttributeSet).Ptr;
  this_01 = this_02;
  if (pFVar8 != (FDynamicMeshAttributeSet *)0x0) {
    this_01 = pFVar8;
  }
  UE::Geometry::FDynamicMeshAttributeSet::AttachAttribute
            (this_01,**(FName **)this,(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *)pFVar15)
  ;
  iVar16 = -1;
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  pFVar8 = this_02;
  if ((uVar14 == 0) ||
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar8 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar1 - 1U) < 0xfffe)) {
LAB_14cdadc39:
    uVar13 = (uint)pFVar8;
  }
  else {
    pFVar8 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar13 = 1;
    if (1 < (int)uVar14) {
      do {
        uVar11 = (ulonglong)((uint)pFVar8 & 0x1ff);
        lVar2 = *(longlong *)(pFVar1 + ((ulonglong)pFVar8 >> 9) * 8);
        if ((*(short *)(lVar2 + uVar11 * 2) != 0) && (*(short *)(lVar2 + uVar11 * 2) != -1)) break;
        uVar13 = (uint)pFVar8 + 1;
        pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      } while ((int)uVar13 < (int)uVar14);
      goto LAB_14cdadc39;
    }
  }
  if (uVar13 != uVar14) {
LAB_14cdadc50:
    do {
      iVar10 = *(int *)(*(longlong *)
                         ((pFVar15->UVLayers).Array.AllocatorInstance.Data +
                         ((ulonglong)pFVar8 >> 9) * 8) + (ulonglong)((uint)pFVar8 & 0x1ff) * 4);
      if (iVar10 < iVar16) {
        iVar10 = iVar16;
      }
      iVar16 = iVar10;
      uVar13 = (uint)pFVar8 + 1;
      pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      if ((int)uVar13 < (int)uVar14) {
        do {
          uVar11 = (ulonglong)((uint)pFVar8 & 0x1ff);
          lVar2 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar8 >> 9) * 8);
          if ((*(short *)(lVar2 + uVar11 * 2) != 0) && (*(short *)(lVar2 + uVar11 * 2) != -1))
          goto LAB_14cdadc50;
          uVar13 = (uint)pFVar8 + 1;
          pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
        } while ((int)uVar13 < (int)uVar14);
      }
    } while (uVar13 != uVar14);
  }
  pdVar3 = *(double **)((longlong)this + 0x10);
  local_160._s_0.X = *pdVar3;
  local_160._s_0.Y = pdVar3[1];
  local_1a8 = (undefined **)pdVar3[2];
  pdVar3 = *(double **)((longlong)this + 8);
  local_110 = __real_3e45798ee2308c3a;
  local_f8 = __real_3fd0000000000000;
  local_a0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a0._48_8_ = _UNK_150631d98;
  local_188 = &___7FMeshPlaneCut_Geometry_UE__6B_;
  local_108 = ___xmm_3fb999999999999a3ee4f8b588000000;
  dStack_100 = _UNK_1528d8ad8;
  local_148._0_8_ = 0;
  local_148._40_8_ = 0;
  local_118._0_1_ = false;
  local_118._1_1_ = true;
  local_f0._0_1_ = true;
  local_f0._1_1_ = true;
  local_ee = true;
  local_ec = 1e-06;
  local_e8 = true;
  local_e4 = 0.01;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8._0_4_ = 0;
  local_c8._4_4_ = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a0._32_8_ = 0;
  local_60 = (ForElementType<FSetElementId>)0x0;
  local_58 = 0;
  local_114 = __real_3f800000 / *(float *)(*(longlong *)((longlong)this + 0x18) + 0x10);
  dVar18 = (double)*(float *)(*(longlong *)((longlong)this + 0x18) + 0xc);
  local_178._s_0.X = *pdVar3 - dVar18 * local_160._s_0.X;
  local_178._s_0.Y = pdVar3[1] - dVar18 * local_160._s_0.Y;
  local_178._s_0.Z = pdVar3[2] - dVar18 * (double)local_1a8;
  local_180 = param_1;
  local_160._16_8_ = local_1a8;
  UE::Geometry::FMeshPlaneCut::CutWithoutDelete
            ((FMeshPlaneCut *)&local_188,true,0.0,
             (TDynamicMeshScalarTriangleAttribute<int> *)pFVar15,iVar16 + 1,true,false);
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  pFVar8 = this_02;
  if ((uVar14 == 0) ||
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar8 = (FDynamicMeshAttributeSet *)0x0, (ushort)(**(short **)pFVar1 - 1U) < 0xfffe)) {
LAB_14cdade89:
    uVar13 = (uint)pFVar8;
  }
  else {
    pFVar8 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar13 = 1;
    if (1 < (int)uVar14) {
      do {
        uVar11 = (ulonglong)((uint)pFVar8 & 0x1ff);
        lVar2 = *(longlong *)(pFVar1 + ((ulonglong)pFVar8 >> 9) * 8);
        if ((*(short *)(lVar2 + uVar11 * 2) != 0) && (*(short *)(lVar2 + uVar11 * 2) != -1)) break;
        uVar13 = (uint)pFVar8 + 1;
        pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      } while ((int)uVar13 < (int)uVar14);
      goto LAB_14cdade89;
    }
  }
  iVar10 = iVar16;
  if (uVar13 != uVar14) {
    iVar17 = iVar16;
LAB_14cdadea0:
    do {
      iVar10 = *(int *)(*(longlong *)
                         ((pFVar15->UVLayers).Array.AllocatorInstance.Data +
                         ((ulonglong)pFVar8 >> 9) * 8) + (ulonglong)((uint)pFVar8 & 0x1ff) * 4);
      if (iVar10 < iVar17) {
        iVar10 = iVar17;
      }
      uVar13 = (uint)pFVar8 + 1;
      pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      iVar17 = iVar10;
      if ((int)uVar13 < (int)uVar14) {
        do {
          uVar11 = (ulonglong)((uint)pFVar8 & 0x1ff);
          lVar2 = *(longlong *)
                   ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   ((ulonglong)pFVar8 >> 9) * 8);
          if ((*(short *)(lVar2 + uVar11 * 2) != 0) && (*(short *)(lVar2 + uVar11 * 2) != -1))
          goto LAB_14cdadea0;
          uVar13 = (uint)pFVar8 + 1;
          pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
        } while ((int)uVar13 < (int)uVar14);
      }
    } while (uVar13 != uVar14);
  }
  dVar18 = (double)*(float *)(*(longlong *)((longlong)this + 0x18) + 0xc);
  dVar18 = dVar18 + dVar18;
  local_178._s_0.X = local_178._s_0.X + dVar18 * local_160._s_0.X;
  local_178._s_0.Y = local_178._s_0.Y + dVar18 * local_160._s_0.Y;
  local_178._s_0.Z = local_178._s_0.Z + dVar18 * local_160._s_0.Z;
  UE::Geometry::FMeshPlaneCut::CutWithoutDelete
            ((FMeshPlaneCut *)&local_188,true,0.0,
             (TDynamicMeshScalarTriangleAttribute<int> *)pFVar15,iVar10 + 1,false,true);
  uVar14 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  pFVar8 = this_02;
  FVar5 = local_1c8[0];
  if ((uVar14 != 0) &&
     (pFVar1 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     pFVar8 = (FDynamicMeshAttributeSet *)0x0, 0xfffd < (ushort)(**(short **)pFVar1 - 1U))) {
    pFVar8 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar13 = 1;
    if ((int)uVar14 < 2) goto joined_r0x00014cdadfd8;
    do {
      uVar11 = (ulonglong)((uint)pFVar8 & 0x1ff);
      lVar2 = *(longlong *)(pFVar1 + ((ulonglong)pFVar8 >> 9) * 8);
      if ((*(short *)(lVar2 + uVar11 * 2) != 0) && (*(short *)(lVar2 + uVar11 * 2) != -1)) break;
      uVar13 = (uint)pFVar8 + 1;
      pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar14);
  }
  uVar13 = (uint)pFVar8;
joined_r0x00014cdadfd8:
  local_1c8[0] = FVar5;
  if (uVar13 != uVar14) {
    while( true ) {
      uVar13 = (uint)pFVar8;
      iVar17 = *(int *)(*(longlong *)
                         ((pFVar15->UVLayers).Array.AllocatorInstance.Data +
                         ((ulonglong)pFVar8 >> 9) * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
      if ((iVar16 < iVar17) && (iVar17 <= iVar10)) {
        UE::Geometry::FDynamicMesh3::RemoveTriangle(param_1,uVar13,true,false);
      }
      uVar13 = uVar13 + 1;
      pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
      FVar5 = local_1c8[0];
      if ((int)uVar14 <= (int)uVar13) break;
      while( true ) {
        uVar11 = (ulonglong)((uint)pFVar8 & 0x1ff);
        lVar2 = *(longlong *)
                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 ((ulonglong)pFVar8 >> 9) * 8);
        if ((*(short *)(lVar2 + uVar11 * 2) != 0) && (*(short *)(lVar2 + uVar11 * 2) != -1)) break;
        uVar13 = (uint)pFVar8 + 1;
        pFVar8 = (FDynamicMeshAttributeSet *)(ulonglong)uVar13;
        if ((int)uVar14 <= (int)uVar13) goto joined_r0x00014cdadfd8;
      }
    }
    goto joined_r0x00014cdadfd8;
  }
  pcVar4 = *(char **)((longlong)FVar5 + 0x18);
  if (*pcVar4 != '\0') {
    local_1a8 = &
                ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_190 = 0;
    local_1a0 = UE::Geometry::ConstrainedDelaunayTriangulate<double>;
    local_1b8[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                   ::Call;
    UE::Geometry::FMeshPlaneCut::HoleFill
              ((FMeshPlaneCut *)&local_188,
               (TFunction<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>___cdecl(UE::Geometry::TGeneralPolygon2<double>_const_&)>
                *)local_1b8,(bool)pcVar4[8],-1,*(int *)(pcVar4 + 4));
  }
  pFVar15 = (param_1->AttributeSet).Ptr;
  if (pFVar15 != (FDynamicMeshAttributeSet *)0x0) {
    this_02 = pFVar15;
  }
  FVar5 = **(FName **)FVar5;
  uVar14 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
  if (*(int *)&(this_02->GenericAttributes).field_0x8 !=
      *(int *)&(this_02->GenericAttributes).field_0x34) {
    puVar12 = *(undefined1 **)&(this_02->GenericAttributes).field_0x40;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this_02->GenericAttributes).field_0x38;
    }
    iVar16 = *(int *)(puVar12 +
                     (ulonglong)
                     (*(int *)&(this_02->GenericAttributes).field_0x48 - 1U & FVar5.Number + uVar14)
                     * 4);
    if (iVar16 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_02->GenericAttributes + (longlong)iVar16 * 0x18) == FVar5)
        {
          pTVar9 = TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                           *)&this_02->GenericAttributes,FVar5);
          if ((pTVar9 == (TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>
                          *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          UE::Geometry::TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3>::
          UnregisterExternalAttribute
                    ((TDynamicAttributeSetBase<UE::Geometry::FDynamicMesh3> *)this_02,
                     *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)&pTVar9->field_0x8);
          local_1c8[0] = FVar5;
          if (*(int *)&(this_02->GenericAttributes).field_0x8 !=
              *(int *)&(this_02->GenericAttributes).field_0x34) {
            uVar14 = ::GetTypeHash(FVar5.ComparisonIndex.Value);
            TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>_>_>,0>,FDefaultSetAllocator>
                                 *)&this_02->GenericAttributes,FVar5.Number + uVar14,local_1c8);
          }
          break;
        }
        iVar16 = *(int *)(*(longlong *)&this_02->GenericAttributes + 0x10 + (longlong)iVar16 * 0x18)
        ;
      } while (iVar16 != -1);
    }
  }
  UE::Geometry::FMeshPlaneCut::~FMeshPlaneCut((FMeshPlaneCut *)&local_188);
  return;
}

// operator() @ 14cdae200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  float fVar7;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [128];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_f8._16_8_ = ___xmm_3eb0c6f7a00000003ff8000000000000;
  local_f8._24_8_ = _UNK_150b37c88;
  local_f8._32_8_ = __real_3eb0c6f7a0000000;
  local_f8._80_8_ = __real_3fd0000000000000;
  local_f8._0_8_ = &___7FMeshSelfUnion_Geometry_UE__6B_;
  local_f8[8] = true;
  local_f8[0x31] = true;
  local_f8[0x32] = false;
  local_f8._56_8_ = (FProgressCancel *)0x0;
  local_f8[0x58] = true;
  local_f8[0x59] = true;
  local_f8[0x5a] = true;
  local_f8._92_4_ = 1e-06;
  local_f8[0x60] = true;
  local_f8._100_4_ = 0.01;
  local_f8._112_8_ = (FScriptContainerElement *)0x0;
  local_f8._120_4_ = 0;
  local_f8._124_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_f8._104_8_ = param_1;
  if (param_1 == (FDynamicMesh3 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshIn != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Operations\\MeshSelfUnion.h"
                       ,0x6f,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = *(longlong *)this;
  uVar2 = *(undefined8 *)((longlong)this + 8);
  fVar7 = *(float *)(lVar1 + 8);
  if (__real_3f800000 <= *(float *)(lVar1 + 8)) {
    fVar7 = __real_3f800000;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_f8._40_8_ = (undefined8)fVar7;
  local_f8[0x30] = *(undefined1 *)(lVar1 + 1);
  local_f8[0x40] = *(undefined1 *)(lVar1 + 2);
  local_f8._72_8_ = (undefined8)*(float *)(lVar1 + 4);
  bVar6 = UE::Geometry::FMeshSelfUnion::Compute((FMeshSelfUnion *)local_f8);
  *(bool *)uVar2 = bVar6;
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar3 != (undefined8 *)(local_f8 + 0x70)) {
    if ((void *)*puVar3 != (void *)0x0) {
      FMemory::Free((void *)*puVar3);
    }
    *puVar3 = local_f8._112_8_;
    local_f8._112_8_ = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar3 + 1) = local_f8._120_4_;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_f8._124_4_;
    local_f8._120_4_ = 0;
    local_f8._124_4_ = 0;
  }
  local_f8._0_8_ = &___7FMeshSelfUnion_Geometry_UE__6B_;
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  uVar5 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
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
  if ((FScriptContainerElement *)local_f8._112_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._112_8_);
  }
  return;
}

// operator() @ 14cdbab70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion'::__l8::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  ForElementType<unsigned_int> this_00;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  double dVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ForElementType<unsigned_int> FVar24;
  ulonglong uVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  uint *puVar28;
  undefined1 auStackY_388 [32];
  undefined1 local_348 [8];
  FDynamicMesh3 *local_340;
  ForAnyElementType local_338;
  int local_330;
  int local_32c;
  ForAnyElementType local_328;
  int local_320;
  int local_31c;
  ForAnyElementType local_318;
  int local_310;
  int local_30c;
  FScriptContainerElement local_308;
  uint local_300;
  uint uStack_2fc;
  ForElementType<unsigned_int> FStack_2f8;
  undefined4 local_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  undefined4 uStack_2e4;
  FDynamicMesh3 *local_2d8;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2c8;
  FSparseArrayAllocationInfo local_2a8;
  undefined1 local_298 [32];
  ForElementType<unsigned_int> local_278;
  uint local_270;
  int local_26c;
  int local_268;
  uint local_264;
  FScriptContainerElement local_260 [8];
  ForAnyElementType local_258;
  uint local_250;
  undefined1 local_248 [128];
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  TBitArray<FDefaultBitArrayAllocator> local_1b8;
  undefined4 local_198;
  undefined4 local_194;
  ForElementType<FSetElementId> local_188;
  int local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  TBitArray<FDefaultBitArrayAllocator> local_168;
  undefined4 local_148;
  undefined4 local_144;
  void *local_138;
  undefined4 local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  undefined1 local_118 [64];
  longlong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  longlong *plStack_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  bool local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  this_00 = (ForElementType<unsigned_int>)((longlong)local_298 + 0x10);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  uVar17 = 0;
  local_118._8_8_ = (FEdgeLoop *)0x0;
  local_118._16_8_ = 0;
  local_118._24_8_ = (FEdgeSpan *)0x0;
  local_118._32_4_ = 0;
  local_118._36_4_ = 0;
  local_118[0x28] = false;
  local_118[0x29] = false;
  local_118[0x2a] = false;
  local_118._44_4_ = Compute;
  local_118._48_4_ = ConvertToOpenSpan;
  local_d8 = 0;
  plStack_b0 = (longlong *)0x0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_98 = false;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88._0_4_ = 0;
  local_88._4_4_ = 0;
  local_118._0_8_ = param_1;
  uVar19 = *(uint *)(*(undefined8 **)this + 1);
  puVar28 = (uint *)**(undefined8 **)this;
  local_2d8 = param_1;
  if (((int)uVar19 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_298._0_8_ = (FScriptContainerElement *)0x0;
  local_298._8_8_ = 0;
  local_278 = (ForElementType<unsigned_int>)0x0;
  local_270 = 0;
  local_26c = 0x80;
  local_268 = -1;
  local_264 = 0;
  local_258.Data = (FScriptContainerElement *)0x0;
  local_250 = 0;
  if (uVar19 == 0) goto LAB_14cdbae7e;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_298,uVar19);
  uVar20 = 1;
  if (3 < uVar19) {
    uVar23 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar22 & 0x1f);
  }
  if ((local_250 == 0) || ((int)local_250 < (int)uVar20)) {
    local_250 = uVar20;
    if (local_258.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_258,0,0,4);
    }
    if (uVar20 != 0) {
      uVar12 = uVar20;
      if (uVar20 < 2) {
        if (local_258.Data != (FScriptContainerElement *)0x0) {
          uVar12 = 0;
          goto LAB_14cdbacfc;
        }
      }
      else {
LAB_14cdbacfc:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_258,0,uVar12,4);
      }
      if (0 < (int)uVar20) {
        uVar25 = (ulonglong)uVar20;
        uVar23 = uVar17;
        do {
          FVar16.Data = local_260;
          if (local_258.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_258.Data;
          }
          uVar13 = (longlong)(int)uVar20 - 1U & uVar23;
          uVar23 = uVar23 + 1;
          *(undefined4 *)(FVar16.Data + uVar13 * 4) = 0xffffffff;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    if (local_250 != 0) {
      local_300 = 0;
      uStack_2fc = 1;
      uStack_2ec = 0;
      uStack_2e8 = 0;
      if (local_270 != 0) {
        FVar24 = this_00;
        if (local_278 != (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_278;
        }
        uVar20 = *(uint *)FVar24;
        uVar23 = uVar17;
        while (uVar20 == 0) {
          uStack_2e8 = (int)uVar23 + 0x20;
          uVar23 = (ulonglong)uStack_2e8;
          iVar10 = (int)uVar17;
          local_300 = iVar10 + 1;
          uVar17 = (ulonglong)local_300;
          if ((int)((local_270 - 1) + ((int)(local_270 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_300)
          goto LAB_14cdbadec;
          uVar20 = *(uint *)((uchar *)((longlong)FVar24 + 4) + (longlong)iVar10 * 4);
        }
        uStack_2fc = -uVar20 & uVar20;
        uVar17 = (ulonglong)uStack_2fc * 2 + 1;
        lVar22 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uStack_2ec = (uStack_2e8 - 1) + (int)lVar22;
        uVar17 = (ulonglong)uStack_2ec;
        if ((int)local_270 < (int)uStack_2ec) {
LAB_14cdbadec:
          uVar17 = (ulonglong)local_270;
          uStack_2ec = local_270;
        }
      }
      local_2f0 = 0xffffffff;
      local_2d0 = (longlong *)local_298;
      local_2c8._padding_ = CONCAT44(uStack_2fc,local_300);
      local_2c8.CurrentBitIndex = uStack_2ec;
      local_2c8.UnvisitedBitMask = 0xffffffff;
      local_2c8._28_4_ = uStack_2e4;
      local_2c8.BaseBitIndex = uStack_2e8;
      FStack_2f8 = this_00;
      local_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this_00;
      if ((int)uVar17 < (int)local_270) {
        do {
          lVar22 = *local_2d0;
          lVar14 = (longlong)(int)uVar17;
          uVar20 = local_250 - 1 & *(uint *)(lVar22 + lVar14 * 0xc);
          *(uint *)(lVar22 + 8 + lVar14 * 0xc) = uVar20;
          FVar16.Data = local_260;
          if (local_258.Data != (FScriptContainerElement *)0x0) {
            FVar16.Data = local_258.Data;
          }
          uVar23 = (longlong)(int)local_250 - 1U & (longlong)(int)uVar20;
          *(undefined4 *)(lVar22 + 4 + lVar14 * 0xc) = *(undefined4 *)(FVar16.Data + uVar23 * 4);
          *(int *)(FVar16.Data + uVar23 * 4) = (int)uVar17;
          local_2c8.UnvisitedBitMask = local_2c8.UnvisitedBitMask & ~local_2c8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2c8);
          uVar17 = (ulonglong)(uint)local_2c8.CurrentBitIndex;
        } while (local_2c8.CurrentBitIndex < *(int *)((longlong)local_2c8.Array + 0x18));
      }
    }
  }
  uVar17 = (ulonglong)local_264;
LAB_14cdbae7e:
  puVar1 = puVar28 + (int)uVar19;
  iVar10 = local_268;
  local_78 = local_d8;
  uVar6 = uStack_d0;
  plStack_50 = plStack_b0;
  do {
    local_268 = iVar10;
    if (puVar28 == puVar1) {
      puStack_c0 = local_298;
      local_d8 = (longlong)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<``UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion'::__l8::<lambda_2>::operator()'::__l2::<lambda_1>,bool,int>
                 ::Call;
      uStack_d0 = uStack_70;
      local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
      local_b8 = (undefined4)local_58;
      uStack_b4 = local_58._4_4_;
      plStack_b0 = (longlong *)0x0;
      local_c8 = 0x529c47b0;
      uStack_c4 = 1;
      uStack_70 = uVar6;
      if (local_78 != 0) {
        plVar18 = local_68;
        if (plStack_50 != (longlong *)0x0) {
          plVar18 = plStack_50;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_118);
      dVar7 = __real_3f1a36e2eb1c432d;
      uVar8 = local_118._16_4_;
      uVar17 = (ulonglong)(int)local_118._16_4_;
      pFVar26 = (FScriptContainerElement *)(local_118._8_8_ + uVar17 * 0x40);
      pFVar27 = (FScriptContainerElement *)(local_118._8_8_ + 0x20);
      while( true ) {
        if ((int)uVar17 != uVar8) {
          `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_348);
        }
        if (pFVar27 + -0x20 == pFVar26) break;
        local_340 = *(FDynamicMesh3 **)&pFVar27[-0x20].field_0x0;
        pvVar3 = *(void **)(pFVar27 + -0x18);
        local_338.Data = (FScriptContainerElement *)0x0;
        local_330 = *(int *)(pFVar27 + -0x10);
        lVar22 = (longlong)local_330;
        if (local_330 == 0) {
          local_32c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_330,0,&local_338,local_330,&local_32c);
          memcpy(local_338.Data,pvVar3,lVar22 << 2);
        }
        local_320 = *(int *)pFVar27;
        lVar22 = (longlong)local_320;
        pFVar4 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar27 + -8))->AllocatorInstance).
                 Data;
        local_328.Data = (FScriptContainerElement *)0x0;
        if (local_320 == 0) {
          local_31c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_320,0,&local_328,local_320,&local_31c);
          memcpy(local_328.Data,pFVar4,lVar22 << 2);
        }
        local_310 = *(int *)(pFVar27 + 0x10);
        lVar22 = (longlong)local_310;
        pvVar3 = *(void **)(pFVar27 + 8);
        local_318.Data = (FScriptContainerElement *)0x0;
        if (local_310 == 0) {
          local_30c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_310,0,&local_318,local_310,&local_30c);
          memcpy(local_318.Data,pvVar3,lVar22 << 2);
        }
        iVar10 = local_330;
        FVar16.Data = local_338.Data;
        local_308 = pFVar27[0x18];
        local_248._0_8_ = &___7FMinimalHoleFiller_Geometry_UE__6B_;
        local_248._40_8_ = local_2d8;
        local_248._48_8_ = local_340;
        local_248._32_8_ = dVar7;
        local_248._8_8_ = (void *)0x0;
        local_248._16_8_ = 0;
        local_248[0x18] = false;
        local_248[0x19] = true;
        local_248[0x1a] = true;
        local_248._56_8_ = (FScriptContainerElement *)0x0;
        local_248._64_4_ = local_330;
        if (local_330 == 0) {
          local_248._68_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_330,0,(ForAnyElementType *)(local_248 + 0x38),local_330,
                     (int *)(local_248 + 0x44));
          memcpy((void *)local_248._56_8_,FVar16.Data,(longlong)iVar10 << 2);
        }
        iVar10 = local_320;
        FVar16.Data = local_328.Data;
        local_248._72_8_ = (FScriptContainerElement *)0x0;
        local_248._80_4_ = local_320;
        if (local_320 == 0) {
          local_248._84_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_320,0,(ForAnyElementType *)(local_248 + 0x48),local_320,
                     (int *)(local_248 + 0x54));
          memcpy((void *)local_248._72_8_,FVar16.Data,(longlong)iVar10 << 2);
        }
        iVar10 = local_310;
        FVar16.Data = local_318.Data;
        local_248._88_8_ = (FScriptContainerElement *)0x0;
        local_248._96_4_ = local_310;
        if (local_310 == 0) {
          local_248._100_4_ = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_310,0,(ForAnyElementType *)(local_248 + 0x58),local_310,
                     (int *)(local_248 + 100));
          memcpy((void *)local_248._88_8_,FVar16.Data,(longlong)iVar10 << 2);
        }
        local_248[0x68] = local_308;
        local_248._112_8_ = (FMeshRegionOperator *)0x0;
        local_248._120_8_ = (FDynamicMesh3 *)0x0;
        local_1c8.Data = (FScriptContainerElement *)0x0;
        local_1c0 = 0;
        local_1b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_1b8.NumBits = 0;
        local_1b8.MaxBits = 0x80;
        local_198 = 0xffffffff;
        local_194 = 0;
        local_188 = (ForElementType<FSetElementId>)0x0;
        local_180 = 0;
        local_178.Data = (FScriptContainerElement *)0x0;
        local_170 = 0;
        local_168.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_168.NumBits = 0;
        local_168.MaxBits = 0x80;
        local_148 = 0xffffffff;
        local_144 = 0;
        local_138 = (void *)0x0;
        local_130 = 0;
        local_128.Data = (FScriptContainerElement *)0x0;
        local_120._0_4_ = 0;
        local_120._4_4_ = 0;
        if (local_318.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_318.Data);
        }
        if (local_328.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data);
        }
        if (local_338.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data);
        }
        UE::Geometry::FMinimalHoleFiller::Fill((FMinimalHoleFiller *)local_248,-1);
        if (local_128.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.Data);
        }
        local_130 = 0;
        if (local_138 != (void *)0x0) {
          FMemory::Free(local_138);
        }
        bVar9 = local_170._4_4_ != 0;
        local_170 = (ulonglong)local_170._4_4_ << 0x20;
        if (bVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&local_178,0,(int *)((longlong)&local_170 + 4));
        }
        local_148 = 0xffffffff;
        local_144 = 0;
        local_168.NumBits = 0;
        if (0x80 < (uint)local_168.MaxBits) {
          local_168.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_168,0);
        }
        if (local_168.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
        }
        if (local_178.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data);
        }
        local_180 = 0;
        if (local_188 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_188);
        }
        bVar9 = local_1c0._4_4_ != 0;
        local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
        if (bVar9) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&local_1c8,0,(int *)((longlong)&local_1c0 + 4));
        }
        local_198 = 0xffffffff;
        local_194 = 0;
        local_1b8.NumBits = 0;
        if (0x80 < (uint)local_1b8.MaxBits) {
          local_1b8.MaxBits = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_1b8,0);
        }
        if (local_1b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1b8.AllocatorInstance.SecondaryData);
        }
        if (local_1c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data);
        }
        uVar6 = local_248._112_8_;
        if ((FMeshRegionOperator *)local_248._112_8_ != (FMeshRegionOperator *)0x0) {
          pFVar4 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(local_248._112_8_ + 0x6e0))->
                   AllocatorInstance).Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          *(undefined4 *)&(((FOptionallySparseIndexMap *)(uVar6 + 0x668))->Sparse).field_0x48 = 0;
          pvVar3 = *(void **)&(((FOptionallySparseIndexMap *)(uVar6 + 0x668))->Sparse).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&((FOptionallySparseIndexMap *)(uVar6 + 0x668))->Sparse);
          pFVar4 = (((FOptionallySparseIndexMap *)(uVar6 + 0x668))->Dense).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          *(undefined4 *)&(((FOptionallySparseIndexMap *)(uVar6 + 0x5f8))->Sparse).field_0x48 = 0;
          pvVar3 = *(void **)&(((FOptionallySparseIndexMap *)(uVar6 + 0x5f8))->Sparse).field_0x40;
          if (pvVar3 != (void *)0x0) {
            FMemory::Free(pvVar3);
          }
          TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&((FOptionallySparseIndexMap *)(uVar6 + 0x5f8))->Sparse);
          pFVar4 = (((FOptionallySparseIndexMap *)(uVar6 + 0x5f8))->Dense).AllocatorInstance.Data;
          if (pFVar4 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar4);
          }
          UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3((FDynamicSubmesh3 *)(uVar6 + 8));
          ::operator_delete((void *)uVar6,0x6f0);
        }
        if ((FScriptContainerElement *)local_248._88_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_248._88_8_);
        }
        if ((FScriptContainerElement *)local_248._72_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_248._72_8_);
        }
        if ((FScriptContainerElement *)local_248._56_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_248._56_8_);
        }
        if ((void *)local_248._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_248._8_8_);
        }
        uVar17 = local_118._16_8_ & 0xffffffff;
        pFVar27 = pFVar27 + 0x40;
      }
      local_250 = 0;
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_298);
      if (local_90.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if ((code *)local_d8 != (code *)0x0) {
        plVar18 = (longlong *)&local_c8;
        if (plStack_b0 != (longlong *)0x0) {
          plVar18 = plStack_b0;
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_118._24_8_,local_118._32_4_);
      if ((FEdgeSpan *)local_118._24_8_ != (FEdgeSpan *)0x0) {
        FMemory::Free((void *)local_118._24_8_);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_118._8_8_,local_118._16_4_);
      if ((FEdgeLoop *)local_118._8_8_ != (FEdgeLoop *)0x0) {
        FMemory::Free((void *)local_118._8_8_);
      }
      return;
    }
    puVar21 = (uint *)0x0;
    local_d8 = local_78;
    uStack_d0 = uVar6;
    plStack_b0 = plStack_50;
    if ((int)uVar17 == 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xc,4,1,(ForAnyElementType *)local_298,(int *)(local_298 + 8),
                          (int *)(local_298 + 0xc));
      iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                         ((TBitArray<FDefaultBitArrayAllocator> *)this_00,1);
      FVar24 = this_00;
      if (local_278 != (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_278;
      }
      bVar15 = (byte)iVar11 & 0x1f;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 0x1f;
        bVar15 = bVar15 - 0x20;
      }
      puVar2 = (uint *)((longlong)FVar24 + (longlong)(iVar11 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << (bVar15 & 0x1f));
    }
    else {
      local_264 = (int)uVar17 - 1;
      local_268 = *(int *)(local_298._0_8_ + (longlong)iVar10 * 0xc + 4);
      if (local_264 != 0) {
        *(undefined4 *)(local_298._0_8_ + (longlong)local_268 * 0xc) = 0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_298,&local_2a8,iVar10);
    if (local_2a8.Pointer != (uint *)0x0) {
      *(uint *)local_2a8.Pointer = *puVar28;
      *(uint *)((longlong)local_2a8.Pointer + 4) = 0xffffffff;
      puVar21 = local_2a8.Pointer;
    }
    uVar19 = *puVar21;
    if ((local_298._8_4_ - local_264 != 1) && (local_298._8_4_ != local_264)) {
      FVar16.Data = local_260;
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_258.Data;
      }
      for (iVar10 = *(int *)(FVar16.Data + (ulonglong)(local_250 - 1 & uVar19) * 4); iVar10 != -1;
          iVar10 = *(int *)(local_298._0_8_ + (longlong)iVar10 * 0xc + 4)) {
        if (*(uint *)(local_298._0_8_ + (longlong)iVar10 * 0xc) == uVar19) {
          if (iVar10 != -1) {
            *(uint *)(local_298._0_8_ + (longlong)iVar10 * 0xc) = uVar19;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_298,local_2a8.Index,1);
            goto LAB_14cdbb099;
          }
          break;
        }
      }
    }
    uVar20 = local_298._8_4_ - local_264;
    if (uVar20 < 4) {
      uVar12 = 1;
    }
    else {
      uVar17 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar12 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar20 < 1) || ((int)uVar12 <= (int)local_250)) {
      uVar19 = local_250 - 1 & uVar19;
      puVar21[2] = uVar19;
      FVar16.Data = local_260;
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_258.Data;
      }
      uVar17 = (longlong)(int)local_250 - 1U & (longlong)(int)uVar19;
      puVar21[1] = *(uint *)(FVar16.Data + uVar17 * 4);
      *(int *)(FVar16.Data + uVar17 * 4) = local_2a8.Index;
    }
    else {
      local_250 = uVar12;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_298);
    }
LAB_14cdbb099:
    uVar17 = (ulonglong)local_264;
    puVar28 = puVar28 + 1;
    iVar10 = local_268;
    local_78 = local_d8;
    uVar6 = uStack_d0;
    plStack_50 = plStack_b0;
  } while( true );
}

// ApplyMeshBoolean @ 14cdc23c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean
          (UDynamicMesh *param_1,TTransform<double> *param_2,UDynamicMesh *param_3,
          TTransform<double> *param_4,EGeometryScriptBooleanOperation param_5,
          FGeometryScriptMeshBooleanOptions *param_6,UGeometryScriptDebug *param_7)

{
  uint *puVar1;
  uint *puVar2;
  double dVar3;
  UDynamicMesh *pUVar4;
  undefined4 *puVar5;
  UDynamicMesh **ppUVar6;
  TTransform<double> *pTVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  FGeometryScriptMeshBooleanOptions *pFVar11;
  int iVar12;
  int iVar13;
  FText *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  FEdgeLoop *pFVar18;
  byte bVar19;
  uint uVar20;
  ForAnyElementType FVar21;
  FGeometryScriptMeshBooleanOptions *pFVar22;
  uint uVar23;
  FEdgeLoop *pFVar24;
  longlong lVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  FEdgeLoop *pFVar27;
  uint uVar28;
  ulonglong uVar29;
  ForElementType<unsigned_int> FVar30;
  ulonglong uVar31;
  uint *puVar32;
  undefined4 uVar33;
  UDynamicMesh *local_res18 [2];
  undefined1 auStackY_598 [32];
  undefined1 local_568 [4];
  undefined4 local_564;
  TRefCountPtr<ITextData> local_560;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_558;
  undefined4 local_550;
  uint uStack_54c;
  uint uStack_548;
  undefined4 uStack_544;
  undefined1 local_540 [8];
  undefined8 local_538;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_530;
  uint *local_510;
  undefined8 local_508;
  FDynamicMesh3 local_4f8;
  undefined1 local_2c8 [32];
  ForElementType<unsigned_int> local_2a8;
  uint local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  FScriptContainerElement local_290 [8];
  ForAnyElementType local_288;
  uint local_280;
  undefined1 local_278 [16];
  FGeometryScriptMeshBooleanOptions FStack_268;
  undefined4 uStack_25c;
  TVector<double>_u_0 TStack_258;
  TVector<double>_u_0 local_240;
  undefined1 local_228 [64];
  UDynamicMesh **local_1e8;
  TTransform<double> *pTStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined1 *puStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  FGeometryScriptMeshBooleanOptions *pFStack_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  bool local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  FMinimalHoleFiller local_188;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_598;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_560,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                         L"ApplyMeshBoolean_InvalidInput1",L"ApplyMeshBoolean: TargetMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar14);
    if (local_560.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_560.Reference + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_3 == (UDynamicMesh *)0x0) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_560,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                         L"ApplyMeshBoolean_InvalidInput2",L"ApplyMeshBoolean: ToolMesh is Null");
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar14);
    if (local_560.Reference == (ITextData *)0x0) {
      return param_1;
    }
    (**(code **)((longlong)*local_560.Reference + 0x10))();
    return param_1;
  }
  local_564 = 0;
  switch(param_5) {
  case Intersection:
    local_564 = 2;
    break;
  case Subtract:
    local_564 = 1;
    break;
  case TrimInside:
    local_564 = 3;
    break;
  case TrimOutside:
    local_564 = 4;
    break;
  case NewPolyGroupInside:
    local_564 = 5;
    break;
  case NewPolyGroupOutside:
    local_564 = 6;
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_4f8);
  local_278._0_8_ = local_res18;
  local_568[0] = 0;
  unique0x00008e00 = &local_4f8;
  local_510 = (uint *)0x0;
  TStack_258._s_0.X = (double)&local_564;
  local_508 = 0;
  TStack_258._s_0.Z = (double)local_568;
  local_240._s_0.X = (double)&local_510;
  pTStack_558 = (TBitArray<FDefaultBitArrayAllocator> *)local_278;
  local_560.Reference =
       (ITextData *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  TStack_258._s_0.Y = (double)param_6;
  local_278._8_8_ = param_2;
  FStack_268._0_8_ = param_4;
  UDynamicMesh::ProcessMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_560);
  if ((param_6->bAllowEmptyResult == false) && (local_4f8.TriangleRefCounts.UsedCount == 0)) {
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_560,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                         L"BooleanUnion_Failed",
                         L"BooleanUnion: Boolean operation failed due to an empty result; enable Allow Empty Result if empty results should be accepted."
                        );
    UE::Geometry::AppendError(param_7,InvalidInputs,pFVar14);
    if ((TTransform<double> *)local_560.Reference != (TTransform<double> *)0x0) {
      (**(code **)((longlong)*local_560.Reference + 0x10))();
    }
    goto LAB_14cdc301a;
  }
  if (param_6->OutputTransformSpace == TargetTransformSpace) {
    local_278._0_8_ = (param_2->Rotation).XY.m128d_f64[0];
    local_278._8_8_ = (param_2->Rotation).XY.m128d_f64[1];
    FStack_268._0_8_ = (param_2->Rotation).ZW.m128d_f64[0];
    unique0x1000073a = (param_2->Rotation).ZW.m128d_f64[1];
    dVar3 = (param_2->Translation).ZW.m128d_f64[0];
    TStack_258._s_0.X = (param_2->Translation).XY.m128d_f64[0];
    TStack_258._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
    local_550 = SUB84(dVar3,0);
    uStack_54c = (uint)((ulonglong)dVar3 >> 0x20);
    uVar33 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
    uVar20 = *(uint *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
    local_240._0_4_ = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
    local_240._4_4_ = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
    local_240._8_4_ = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
    local_240._12_4_ = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
LAB_14cdc268f:
    TStack_258._s_0.Z = (double)CONCAT44(uStack_54c,local_550);
    local_240._s_0.Z = (double)CONCAT44(uVar20,uVar33);
    local_550 = uVar33;
    uStack_54c = uVar20;
    MeshTransforms::ApplyTransformInverse(&local_4f8,(TTransformSRT3<double> *)local_278,true,All);
  }
  else if (param_6->OutputTransformSpace == ToolTransformSpace) {
    local_278._0_8_ = (param_4->Rotation).XY.m128d_f64[0];
    local_278._8_8_ = (param_4->Rotation).XY.m128d_f64[1];
    FStack_268._0_8_ = (param_4->Rotation).ZW.m128d_f64[0];
    unique0x100007d2 = (param_4->Rotation).ZW.m128d_f64[1];
    dVar3 = (param_4->Translation).ZW.m128d_f64[0];
    TStack_258._s_0.X = (param_4->Translation).XY.m128d_f64[0];
    TStack_258._s_0.Y = (param_4->Translation).XY.m128d_f64[1];
    local_550 = SUB84(dVar3,0);
    uStack_54c = (uint)((ulonglong)dVar3 >> 0x20);
    uVar33 = *(undefined4 *)(param_4->Scale3D).ZW.m128d_f64;
    uVar20 = *(uint *)((longlong)(param_4->Scale3D).ZW.m128d_f64 + 4);
    local_240._0_4_ = *(undefined4 *)(param_4->Scale3D).XY.m128d_f64;
    local_240._4_4_ = *(undefined4 *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 4);
    local_240._8_4_ = *(undefined4 *)((param_4->Scale3D).XY.m128d_f64 + 1);
    local_240._12_4_ = *(undefined4 *)((longlong)(param_4->Scale3D).XY.m128d_f64 + 0xc);
    goto LAB_14cdc268f;
  }
  puVar32 = local_510;
  uVar20 = (uint)local_508;
  lVar25 = (longlong)(int)(uint)local_508;
  puStack_1d0 = (undefined1 *)CONCAT44(puStack_1d0._4_4_,puStack_1d0._0_4_);
  if ((0 < (int)(uint)local_508) &&
     (puStack_1d0 = (undefined1 *)CONCAT44(puStack_1d0._4_4_,puStack_1d0._0_4_),
     param_6->bFillHoles != false)) {
    uVar17 = 0;
    local_228._8_8_ = (FEdgeLoop *)0x0;
    local_228._16_8_ = 0;
    local_228._24_8_ = (FScriptContainerElement *)0x0;
    local_228._32_4_ = 0;
    local_228._36_4_ = 0;
    local_228[0x28] = false;
    local_228[0x29] = false;
    local_228[0x2a] = false;
    local_228._44_4_ = Compute;
    local_228._48_4_ = ConvertToOpenSpan;
    local_1e8 = (UDynamicMesh **)0x0;
    pFStack_1c0 = (FGeometryScriptMeshBooleanOptions *)0x0;
    local_1b8.Data = (FScriptContainerElement *)0x0;
    local_1b0._0_4_ = 0;
    local_1b0._4_4_ = 0;
    local_1a8 = false;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198._0_4_ = 0;
    local_198._4_4_ = 0;
    local_228._0_8_ = &local_4f8;
    local_2c8._0_8_ = (FScriptContainerElement *)0x0;
    local_2c8._8_8_ = 0.0;
    local_2a8 = (ForElementType<unsigned_int>)0x0;
    local_2a0 = 0;
    local_29c = 0x80;
    local_298 = -1;
    local_294 = 0;
    local_288.Data = (FScriptContainerElement *)0x0;
    local_280 = 0;
    if ((uint)local_508 != 0) {
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_2c8,(uint)local_508);
      uVar23 = 1;
      if (3 < uVar20) {
        uVar29 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar23 = 1 << ((byte)lVar16 & 0x1f);
      }
      if ((local_280 == 0) ||
         (TStack_530.Array =
               (TBitArray<FDefaultBitArrayAllocator> *)
               CONCAT44(TStack_530.Array._4_4_,TStack_530.Array._0_4_), (int)local_280 < (int)uVar23
         )) {
        local_280 = uVar23;
        if (local_288.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_288,0,0,4);
        }
        if (uVar23 != 0) {
          uVar20 = uVar23;
          if (uVar23 < 2) {
            if (local_288.Data != (FScriptContainerElement *)0x0) {
              uVar20 = 0;
              goto LAB_14cdc2846;
            }
          }
          else {
LAB_14cdc2846:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_288,0,uVar20,4);
          }
          if (0 < (int)uVar23) {
            uVar31 = (ulonglong)uVar23;
            uVar29 = uVar17;
            do {
              FVar21.Data = local_290;
              if (local_288.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_288.Data;
              }
              uVar15 = uVar29 & (longlong)(int)uVar23 - 1U;
              uVar29 = uVar29 + 1;
              *(undefined4 *)(FVar21.Data + uVar15 * 4) = 0xffffffff;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
        }
        TStack_530.Array =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(TStack_530.Array._4_4_,TStack_530.Array._0_4_);
        if (local_280 != 0) {
          pTStack_558 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10);
          local_560.Reference = (ITextData *)&DAT_100000000;
          uStack_54c = 0;
          uStack_548 = 0;
          if (local_2a0 != 0) {
            FVar30 = (ForElementType<unsigned_int>)((longlong)local_2c8 + 0x10);
            if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
              FVar30 = local_2a8;
            }
            uVar20 = *(uint *)FVar30;
            uVar29 = uVar17;
            while (uVar20 == 0) {
              uStack_548 = (int)uVar29 + 0x20;
              uVar29 = (ulonglong)uStack_548;
              iVar12 = (int)uVar17;
              uVar20 = iVar12 + 1;
              uVar17 = (ulonglong)uVar20;
              local_560.Reference._4_4_ = (uint)((ulonglong)local_560.Reference >> 0x20);
              local_560.Reference._0_4_ = uVar20;
              if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20
                 ) goto LAB_14cdc296f;
              uVar20 = ((uint *)((longlong)FVar30 + 4))[iVar12];
            }
            local_560.Reference._4_4_ = -uVar20 & uVar20;
            uVar17 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar16 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uStack_54c = (uStack_548 - 1) + (int)lVar16;
            uVar17 = (ulonglong)uStack_54c;
            if ((int)local_2a0 < (int)uStack_54c) {
LAB_14cdc296f:
              uVar17 = (ulonglong)local_2a0;
              uStack_54c = local_2a0;
            }
          }
          local_550 = 0xffffffff;
          local_538 = (TTransform<double> *)local_2c8;
          TStack_530._28_4_ = uStack_544;
          TStack_530.BaseBitIndex = uStack_548;
          TStack_530._padding_ = (longlong)local_560.Reference;
          TStack_530.UnvisitedBitMask = 0xffffffff;
          TStack_530.CurrentBitIndex = uStack_54c;
          TStack_530.Array = pTStack_558;
          if ((int)uVar17 < (int)local_2a0) {
            do {
              dVar3 = (local_538->Rotation).XY.m128d_f64[0];
              lVar16 = (longlong)(int)uVar17;
              uVar20 = local_280 - 1 & *(uint *)((longlong)dVar3 + lVar16 * 0xc);
              *(uint *)((longlong)dVar3 + 8 + lVar16 * 0xc) = uVar20;
              FVar21.Data = local_290;
              if (local_288.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_288.Data;
              }
              uVar29 = (longlong)(int)local_280 - 1U & (longlong)(int)uVar20;
              *(undefined4 *)((longlong)dVar3 + 4 + lVar16 * 0xc) =
                   *(undefined4 *)(FVar21.Data + uVar29 * 4);
              *(int *)(FVar21.Data + uVar29 * 4) = (int)uVar17;
              TStack_530.UnvisitedBitMask =
                   TStack_530.UnvisitedBitMask & ~TStack_530._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_530);
              uVar17 = (ulonglong)(uint)TStack_530.CurrentBitIndex;
            } while (TStack_530.CurrentBitIndex < (TStack_530.Array)->NumBits);
          }
        }
      }
    }
    puVar1 = puVar32 + lVar25;
    iVar12 = local_298;
    ppUVar6 = local_1e8;
    pTVar7 = pTStack_1e0;
    uVar33 = local_1d8;
    uVar8 = uStack_1d4;
    uVar9 = puStack_1d0._0_4_;
    uVar10 = puStack_1d0._4_4_;
    pFVar11 = pFStack_1c0;
    for (; local_298 = iVar12, puVar32 != puVar1; puVar32 = puVar32 + 1) {
      pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
      local_1e8 = ppUVar6;
      pTStack_1e0 = pTVar7;
      local_1d8 = uVar33;
      uStack_1d4 = uVar8;
      puStack_1d0._0_4_ = uVar9;
      puStack_1d0._4_4_ = uVar10;
      pFStack_1c0 = pFVar11;
      if (local_294 == 0) {
        iVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0xc,4,1,(ForAnyElementType *)local_2c8,(int *)(local_2c8 + 8),
                            (int *)(local_2c8 + 0xc));
        iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10),1);
        FVar30 = (ForElementType<unsigned_int>)((longlong)local_2c8 + 0x10);
        if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
          FVar30 = local_2a8;
        }
        bVar19 = (byte)iVar13 & 0x1f;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 0x1f;
          bVar19 = bVar19 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar30 + (longlong)(iVar13 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar19 & 0x1f));
      }
      else {
        local_298 = *(int *)(local_2c8._0_8_ + (longlong)iVar12 * 0xc + 4);
        local_294 = local_294 + -1;
        if (local_294 != 0) {
          *(undefined4 *)(local_2c8._0_8_ + (longlong)local_298 * 0xc) = 0xffffffff;
        }
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_2c8,(FSparseArrayAllocationInfo *)&local_560,iVar12);
      if (pTStack_558 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        *(uint *)(pTStack_558->AllocatorInstance).InlineData = *puVar32;
        (pTStack_558->AllocatorInstance).InlineData[4] = 0xff;
        (pTStack_558->AllocatorInstance).InlineData[5] = 0xff;
        (pTStack_558->AllocatorInstance).InlineData[6] = 0xff;
        (pTStack_558->AllocatorInstance).InlineData[7] = 0xff;
        pTVar26 = pTStack_558;
      }
      uVar20 = *(uint *)(pTVar26->AllocatorInstance).InlineData;
      if ((local_2c8._8_4_ - local_294 != 1) && (local_2c8._8_4_ != local_294)) {
        FVar21.Data = local_290;
        if (local_288.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_288.Data;
        }
        for (iVar12 = *(int *)(FVar21.Data + (ulonglong)(local_280 - 1 & uVar20) * 4); iVar12 != -1;
            iVar12 = *(int *)(local_2c8._0_8_ + (longlong)iVar12 * 0xc + 4)) {
          if (*(uint *)(local_2c8._0_8_ + (longlong)iVar12 * 0xc) == uVar20) {
            if (iVar12 != -1) {
              *(uint *)(local_2c8._0_8_ + (longlong)iVar12 * 0xc) = uVar20;
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_2c8,(uint)local_560.Reference,1);
              pTVar26 = TStack_530.Array;
              goto LAB_14cdc2e84;
            }
            break;
          }
        }
      }
      uVar17 = 0;
      uVar28 = local_2c8._8_4_ - local_294;
      uVar23 = 1;
      if (3 < uVar28) {
        uVar29 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar29 != 0) {
          for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        uVar23 = 1 << ((byte)lVar25 & 0x1f);
      }
      if (((int)uVar28 < 1) || ((int)uVar23 <= (int)local_280)) {
        uVar20 = local_280 - 1 & uVar20;
        *(uint *)((pTVar26->AllocatorInstance).InlineData + 8) = uVar20;
        FVar21.Data = local_290;
        if (local_288.Data != (FScriptContainerElement *)0x0) {
          FVar21.Data = local_288.Data;
        }
        uVar17 = (longlong)(int)local_280 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)((pTVar26->AllocatorInstance).InlineData + 4) =
             *(undefined4 *)(FVar21.Data + uVar17 * 4);
        *(uint *)(FVar21.Data + uVar17 * 4) = (uint)local_560.Reference;
        pTVar26 = TStack_530.Array;
      }
      else {
        local_280 = uVar23;
        if (local_288.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_288,0,0,4);
        }
        if (uVar23 != 0) {
          uVar20 = uVar23;
          if (uVar23 < 2) {
            if (local_288.Data != (FScriptContainerElement *)0x0) {
              uVar20 = 0;
              goto LAB_14cdc2c52;
            }
          }
          else {
LAB_14cdc2c52:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_288,0,uVar20,4);
          }
          if (0 < (int)uVar23) {
            uVar31 = (ulonglong)uVar23;
            uVar29 = uVar17;
            do {
              FVar21.Data = local_290;
              if (local_288.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_288.Data;
              }
              uVar15 = uVar29 & (longlong)(int)uVar23 - 1U;
              uVar29 = uVar29 + 1;
              *(undefined4 *)(FVar21.Data + uVar15 * 4) = 0xffffffff;
              uVar31 = uVar31 - 1;
            } while (uVar31 != 0);
          }
        }
        pTVar26 = TStack_530.Array;
        if (local_280 != 0) {
          TStack_530._padding_ = (longlong)(local_2c8 + 0x10);
          local_538 = (TTransform<double> *)&DAT_100000000;
          TStack_530.Array._4_4_ = 0;
          TStack_530.UnvisitedBitMask = 0;
          if (local_2a0 != 0) {
            FVar30 = (ForElementType<unsigned_int>)((longlong)local_2c8 + 0x10);
            if (local_2a8 != (ForElementType<unsigned_int>)0x0) {
              FVar30 = local_2a8;
            }
            uVar20 = *(uint *)FVar30;
            uVar29 = uVar17;
            while (uVar20 == 0) {
              TStack_530.UnvisitedBitMask = (int)uVar29 + 0x20;
              uVar29 = (ulonglong)TStack_530.UnvisitedBitMask;
              iVar12 = (int)uVar17;
              uVar20 = iVar12 + 1;
              uVar17 = (ulonglong)uVar20;
              uVar31 = (ulonglong)local_538 >> 0x20;
              local_538 = (TTransform<double> *)CONCAT44((int)uVar31,uVar20);
              if ((int)((local_2a0 - 1) + ((int)(local_2a0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20
                 ) goto LAB_14cdc2d7f;
              uVar20 = ((uint *)((longlong)FVar30 + 4))[iVar12];
            }
            local_538 = (TTransform<double> *)CONCAT44(-uVar20 & uVar20,SUB84(local_538,0));
            uVar17 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar25 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
              }
            }
            TStack_530.Array._4_4_ = (TStack_530.UnvisitedBitMask - 1) + (int)lVar25;
            uVar17 = (ulonglong)TStack_530.Array._4_4_;
            if ((int)local_2a0 < (int)TStack_530.Array._4_4_) {
LAB_14cdc2d7f:
              uVar17 = (ulonglong)local_2a0;
              TStack_530.Array._4_4_ = local_2a0;
            }
          }
          TStack_530.Array._0_4_ = 0xffffffff;
          local_278._0_8_ = local_2c8;
          local_278._8_8_ = local_538;
          FStack_268._0_8_ = TStack_530._padding_;
          stack0xfffffffffffffda0 = (FDynamicMesh3 *)CONCAT44(TStack_530.Array._4_4_,0xffffffff);
          TStack_258._s_0.X =
               (double)CONCAT44(TStack_530.CurrentBitIndex,TStack_530.UnvisitedBitMask);
          pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)
                    CONCAT44(TStack_530.Array._4_4_,0xffffffff);
          if ((int)uVar17 < (int)local_2a0) {
            do {
              pUVar4 = *(UDynamicMesh **)local_278._0_8_;
              lVar25 = (longlong)(int)uVar17;
              uVar20 = local_280 - 1 & *(uint *)((longlong)&pUVar4->_padding_ + lVar25 * 0xc);
              *(uint *)((longlong)&pUVar4->_padding_ + lVar25 * 0xc) = uVar20;
              FVar21.Data = local_290;
              if (local_288.Data != (FScriptContainerElement *)0x0) {
                FVar21.Data = local_288.Data;
              }
              uVar29 = (longlong)(int)local_280 - 1U & (longlong)(int)uVar20;
              *(undefined4 *)((longlong)&pUVar4->_padding_ + lVar25 * 0xc + 4) =
                   *(undefined4 *)(FVar21.Data + uVar29 * 4);
              uVar20 = ~local_278._12_4_;
              *(int *)(FVar21.Data + uVar29 * 4) = (int)uVar17;
              FStack_268._8_4_ = FStack_268._8_4_ & uVar20;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_278 + 8));
              uVar17 = (ulonglong)(uint)uStack_25c;
              pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)
                        CONCAT44(TStack_530.Array._4_4_,TStack_530.Array._0_4_);
            } while ((int)uStack_25c < *(int *)(FStack_268._0_8_ + 0x18));
          }
        }
      }
LAB_14cdc2e84:
      iVar12 = local_298;
      ppUVar6 = local_1e8;
      pTVar7 = pTStack_1e0;
      uVar33 = local_1d8;
      uVar8 = uStack_1d4;
      uVar9 = puStack_1d0._0_4_;
      uVar10 = puStack_1d0._4_4_;
      pFVar11 = pFStack_1c0;
      TStack_530.Array = pTVar26;
    }
    puVar5 = (undefined4 *)CONCAT44(uStack_1c4,local_1c8);
    puStack_1d0 = local_2c8;
    local_1e8 = (UDynamicMesh **)
                UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshBoolean'::__l23::<lambda_2>,bool,int>
                ::Call;
    pTStack_1e0 = (TTransform<double> *)local_278._8_8_;
    TStack_258._4_4_ = (undefined4)((ulonglong)TStack_258._s_0.X >> 0x20);
    local_1c8 = TStack_258._0_4_;
    uStack_1c4 = TStack_258._4_4_;
    pFStack_1c0 = (FGeometryScriptMeshBooleanOptions *)0x0;
    local_1d8 = 0x529c4790;
    uStack_1d4 = 1;
    local_278._0_8_ = ppUVar6;
    local_278._8_8_ = pTVar7;
    FStack_268.SimplifyPlanarTolerance = (float)uVar8;
    FStack_268.bFillHoles = (bool)(char)uVar33;
    FStack_268.bSimplifyOutput = (bool)SUB41(uVar33,1);
    FStack_268._2_2_ = SUB42(uVar33,2);
    uStack_25c = uVar10;
    FStack_268._8_4_ = uVar9;
    TStack_258._s_0.Y = (double)pFVar11;
    TStack_258._s_0.X = (double)puVar5;
    if (ppUVar6 != (UDynamicMesh **)0x0) {
      pFVar22 = &FStack_268;
      if (pFVar11 != (FGeometryScriptMeshBooleanOptions *)0x0) {
        pFVar22 = pFVar11;
      }
      (**(code **)(*(longlong *)pFVar22 + 0x10))();
    }
    UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_228);
    uVar33 = local_228._16_4_;
    uVar17 = (ulonglong)(int)local_228._16_4_;
    pFVar27 = (FEdgeLoop *)(local_228._8_8_ + uVar17 * 0x40);
    pFVar24 = (FEdgeLoop *)local_228._8_8_;
    while( true ) {
      if ((int)uVar17 != uVar33) {
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_540);
      }
      if (pFVar24 == pFVar27) break;
      pFVar18 = UE::Geometry::FEdgeLoop::FEdgeLoop((FEdgeLoop *)local_278,pFVar24);
      UE::Geometry::FMinimalHoleFiller::FMinimalHoleFiller(&local_188,&local_4f8,pFVar18);
      UE::Geometry::FMinimalHoleFiller::Fill(&local_188,-1);
      UE::Geometry::FMinimalHoleFiller::~FMinimalHoleFiller(&local_188);
      uVar17 = local_228._16_8_ & 0xffffffff;
      pFVar24 = pFVar24 + 1;
    }
    local_280 = 0;
    if (local_288.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_2c8);
    UE::Geometry::FMeshBoundaryLoops::~FMeshBoundaryLoops((FMeshBoundaryLoops *)local_228);
  }
  UDynamicMesh::SetMesh(param_1,&local_4f8);
LAB_14cdc301a:
  if (local_510 != (uint *)0x0) {
    FMemory::Free(local_510);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_4f8);
  return param_1;
}

// ApplyMeshIsoCurves @ 14cdc3080

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshIsoCurves
          (UDynamicMesh *param_1,FGeometryScriptMeshIsoCurveOptions param_2,
          FGeometryScriptScalarList *param_3,float param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  FGeometryScriptMeshIsoCurveOptions local_58;
  undefined1 local_50 [16];
  FGeometryScriptMeshIsoCurveOptions *local_40;
  FGeometryScriptScalarList *local_38;
  float local_30;
  UGeometryScriptDebug *local_28;
  
  local_58 = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_50,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                        L"ApplyMeshIsoCurves_InvalidInput",L"ApplyMeshIsoCurves: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    if ((param_3->List).Object == (TArray<double,TSizedDefaultAllocator<32>_> *)0x0) {
      pFVar1 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_50,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                          L"ApplyMeshIsoCurves_InvalidInput2",
                          L"ApplyMeshIsoCurves: Per Vertex Values list is Null");
      UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
      if ((ITextData *)local_50._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_50._0_8_ + 0x10))();
      }
    }
    local_40 = &local_58;
    local_50._8_8_ = &local_40;
    local_28 = param_5;
    local_50._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshIsoCurves'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_38 = param_3;
    local_30 = param_4;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_50,
               GeneralEdit,Unknown,false);
  }
  return param_1;
}

// ApplyMeshMirror @ 14cdc31b0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror
          (UDynamicMesh *param_1,TTransform<double> *param_2,
          FGeometryScriptMeshMirrorOptions *param_3,UGeometryScriptDebug *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FText *pFVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_res8;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  FGeometryScriptMeshMirrorOptions *local_48;
  double *local_40;
  double *local_38;
  undefined8 *local_30;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                        L"ApplyMeshMirror_InvalidInput",L"ApplyMeshMirror: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar5);
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  dVar2 = (param_2->Rotation).XY.m128d_f64[0];
  dVar3 = (param_2->Rotation).XY.m128d_f64[1];
  dVar1 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  local_60 = (param_2->Translation).XY.m128d_f64[0];
  dStack_58 = (param_2->Translation).XY.m128d_f64[1];
  local_res8 = __real_3ee4f8b588000000;
  dVar1 = dVar1 + dVar1;
  local_50 = (param_2->Translation).ZW.m128d_f64[0];
  local_78 = (dVar3 + dVar3) * dVar4 + dVar1 * dVar2;
  local_70 = dVar1 * dVar3 - (dVar2 + dVar2) * dVar4;
  local_68 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
  if ((param_3->bApplyPlaneCut != false) && (param_3->bFlipCutSide != false)) {
    uVar6 = (uint)__xmm_80000000000000008000000000000000;
    uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_78 = (double)CONCAT44((uint)((ulonglong)local_78 >> 0x20) ^ uVar7,
                                SUB84(local_78,0) ^ uVar6);
    local_70 = (double)CONCAT44((uint)((ulonglong)local_70 >> 0x20) ^ uVar7,
                                SUB84(local_70,0) ^ uVar6);
    local_68 = (double)CONCAT44((uint)((ulonglong)local_68 >> 0x20) ^ uVar7,
                                SUB84(local_68,0) ^ uVar6);
  }
  local_40 = &local_60;
  local_38 = &local_78;
  local_30 = &local_res8;
  local_88._8_8_ = &local_48;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_48 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_88,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyMeshPlaneCut @ 14cdc3370

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut
          (UDynamicMesh *param_1,TTransform<double> *param_2,
          FGeometryScriptMeshPlaneCutOptions *param_3,UGeometryScriptDebug *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FText *pFVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  double *local_48;
  double *local_40;
  FGeometryScriptMeshPlaneCutOptions *local_38;
  undefined1 *local_30;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                        L"ApplyMeshPlaneCut_InvalidInput",L"ApplyMeshPlaneCut: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar5);
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  dVar2 = (param_2->Rotation).XY.m128d_f64[0];
  dVar3 = (param_2->Rotation).XY.m128d_f64[1];
  dVar1 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  local_60 = (param_2->Translation).XY.m128d_f64[0];
  dStack_58 = (param_2->Translation).XY.m128d_f64[1];
  local_50 = (param_2->Translation).ZW.m128d_f64[0];
  dVar1 = dVar1 + dVar1;
  local_78 = (dVar3 + dVar3) * dVar4 + dVar1 * dVar2;
  local_70 = dVar1 * dVar3 - (dVar2 + dVar2) * dVar4;
  local_68 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
  if (param_3->bFlipCutSide != false) {
    uVar6 = (uint)__xmm_80000000000000008000000000000000;
    uVar7 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_78 = (double)CONCAT44((uint)((ulonglong)local_78 >> 0x20) ^ uVar7,
                                SUB84(local_78,0) ^ uVar6);
    local_70 = (double)CONCAT44((uint)((ulonglong)local_70 >> 0x20) ^ uVar7,
                                SUB84(local_70,0) ^ uVar6);
    local_68 = (double)CONCAT44((uint)((ulonglong)local_68 >> 0x20) ^ uVar7,
                                SUB84(local_68,0) ^ uVar6);
  }
  local_48 = &local_60;
  local_40 = &local_78;
  local_res8[0] = 0;
  local_30 = local_res8;
  local_88._8_8_ = &local_48;
  local_88._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_38 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_88,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyMeshPlaneSlice @ 14cdc3520

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice
          (UDynamicMesh *param_1,TTransform<double> *param_2,
          FGeometryScriptMeshPlaneSliceOptions *param_3,UGeometryScriptDebug *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FText *pFVar4;
  double dVar5;
  FName local_res8;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  FName *local_48;
  double *local_40;
  double *local_38;
  FGeometryScriptMeshPlaneSliceOptions *local_30;
  
  ::FName::FName(&local_res8,"ObjectIndexAttribute");
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_88,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                        L"ApplyMeshPlaneSlice_InvalidInput",
                        L"ApplyMeshPlaneSlice: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar4);
    if ((ITextData *)local_88._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_88._0_8_ + 0x10))();
    }
    param_1 = (UDynamicMesh *)0x0;
  }
  else {
    dVar5 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar1 = (param_2->Rotation).ZW.m128d_f64[1];
    local_48 = &local_res8;
    local_60 = (param_2->Translation).XY.m128d_f64[0];
    dStack_58 = (param_2->Translation).XY.m128d_f64[1];
    local_50 = (param_2->Translation).ZW.m128d_f64[0];
    dVar5 = dVar5 + dVar5;
    local_40 = &local_60;
    local_38 = &local_78;
    dVar2 = (param_2->Rotation).XY.m128d_f64[0];
    dVar3 = (param_2->Rotation).XY.m128d_f64[1];
    local_88._8_8_ = &local_48;
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    local_78 = (dVar3 + dVar3) * dVar1 + dVar5 * dVar2;
    local_70 = dVar5 * dVar3 - (dVar2 + dVar2) * dVar1;
    local_68 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
    local_30 = param_3;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_88,
               GeneralEdit,Unknown,false);
  }
  return param_1;
}

// ApplyMeshSelfUnion @ 14cdc36c0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion
          (UDynamicMesh *param_1,FGeometryScriptMeshSelfUnionOptions *param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  undefined1 local_res8 [8];
  FGeometryScriptMeshSelfUnionOptions *local_res20;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  FGeometryScriptMeshSelfUnionOptions *local_28;
  undefined1 *local_20;
  void **local_18;
  
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                        L"ApplyMeshSelfUnion_InvalidInput",L"ApplyMeshSelfUnion: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_res8[0] = 0;
  local_48._0_8_ = (void *)0x0;
  local_48._8_8_ = 0;
  local_20 = local_res8;
  local_18 = (void **)local_48;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_2;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  if ((0 < (int)local_48._8_4_) && (param_2->bFillHoles != false)) {
    local_res20 = (FGeometryScriptMeshSelfUnionOptions *)local_48;
    local_38._8_8_ = &local_res20;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion'::__l8::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
               GeneralEdit,Unknown,false);
  }
  if ((void *)local_48._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  return param_1;
}

// GetPrivateStaticClass @ 14cdd87a0

UClass * __cdecl UGeometryScriptLibrary_MeshBooleanFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshBooleanFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshBooleanFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshBooleanFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshBooleanFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions @ 14cde7220

void __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshBooleanFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshBooleanFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyMeshBoolean @ 14cdf1730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshBoolean
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDynamicMesh *pUVar2;
  undefined1 auStackY_228 [32];
  EGeometryScriptBooleanOperation local_1e8 [8];
  undefined2 local_1e0;
  undefined2 uStack_1de;
  float fStack_1dc;
  undefined4 local_1d8;
  UGeometryScriptDebug *local_1d0;
  UDynamicMesh *local_1c8;
  UDynamicMesh *local_1c0;
  FGeometryScriptMeshBooleanOptions local_1b8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c0 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c0);
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
  local_1c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1c8);
  }
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_1e8[0] = Union;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8);
  }
  local_1e0 = 0x101;
  fStack_1dc = 0.01;
  local_1d8 = (uint)local_1d8._2_2_ << 0x10;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e0);
  }
  local_1d0 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d0);
  }
  local_1b8._2_2_ = uStack_1de;
  local_1b8.bFillHoles = (bool)(undefined1)local_1e0;
  local_1b8.bSimplifyOutput = (bool)local_1e0._1_1_;
  local_1b8.SimplifyPlanarTolerance = fStack_1dc;
  local_1a8.Rotation.XY.m128d_f64[0] = (double)local_e8._0_8_;
  local_1a8.Rotation.XY.m128d_f64[1] = (double)local_e8._8_8_;
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)local_d8._0_8_;
  local_1a8.Rotation.ZW.m128d_f64[1] = (double)local_d8._8_8_;
  local_1a8.Translation.XY.m128d_f64[0] = (double)local_c8._0_8_;
  local_1a8.Translation.XY.m128d_f64[1] = (double)local_c8._8_8_;
  local_1a8.Translation.ZW.m128d_f64[0] = (double)local_b8._0_8_;
  local_1a8.Translation.ZW.m128d_f64[1] = (double)local_b8._8_8_;
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)local_a8._0_8_;
  local_1a8.Scale3D.XY.m128d_f64[1] = (double)local_a8._8_8_;
  local_1b8.bAllowEmptyResult = (bool)(undefined1)local_1d8;
  local_1b8.OutputTransformSpace = local_1d8._1_1_;
  local_1b8._10_2_ = local_1d8._2_2_;
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)local_98._0_8_;
  local_1a8.Scale3D.ZW.m128d_f64[1] = (double)local_98._8_8_;
  local_148.Rotation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_148.Rotation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_148.Rotation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_148.Rotation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_148.Translation.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_148.Translation.XY.m128d_f64[1] = (double)local_68._8_8_;
  local_148.Translation.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_148.Translation.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_148.Scale3D.XY.m128d_f64[0] = (double)local_48._0_8_;
  local_148.Scale3D.XY.m128d_f64[1] = (double)local_48._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_148.Scale3D.ZW.m128d_f64[0] = (double)local_38._0_8_;
  local_148.Scale3D.ZW.m128d_f64[1] = (double)local_38._8_8_;
  pUVar2 = ApplyMeshBoolean(local_1c0,&local_148,local_1c8,&local_1a8,local_1e8[0],&local_1b8,
                            local_1d0);
  *(UDynamicMesh **)param_3 = pUVar2;
  return;
}

// execApplyMeshIsoCurves @ 14cdf1ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshIsoCurves
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FText *pFVar8;
  longlong lVar9;
  longlong lVar10;
  UDynamicMesh *this;
  longlong *plVar11;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined2 local_100;
  ITextData *local_f8;
  uint local_f0;
  undefined2 local_e8;
  ITextData *local_e0;
  uint local_d8;
  longlong local_d0;
  UDynamicMesh *local_c8;
  longlong local_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  code *local_a0;
  undefined8 **local_98;
  undefined8 *local_90;
  longlong *local_88;
  undefined4 local_80;
  longlong local_78;
  FText local_70;
  FText local_60 [2];
  
  local_c8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_108 = 0;
  uStack_104 = 0x38d1b717;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_c0 = 0;
  pTStack_b8 = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  local_res10[0] = 0;
  plVar11 = &local_c0;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
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
  local_d0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  this = local_c8;
  lVar5 = local_d0;
  uVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8 = CONCAT44(uStack_104,local_108);
  if (local_c8 == (UDynamicMesh *)0x0) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_70,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                        L"ApplyMeshIsoCurves_InvalidInput",L"ApplyMeshIsoCurves: TargetMesh is Null"
                       );
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar8);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_f8 = (pFVar8->TextData).Reference;
    local_100 = 0x200;
    if (local_f8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8 + 8))(local_f8,local_res18);
    }
    local_f0 = pFVar8->Flags;
    if (lVar5 != 0) {
      if (((*(undefined2 **)(lVar5 + 0x28) <= &local_100) &&
          (&local_100 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc)) &&
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
      lVar9 = (longlong)iVar7;
      *(int *)(lVar5 + 0x30) = iVar7 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar5 + 0x28))->Data;
      pFVar2[lVar9 * 0x18] = local_100._0_1_;
      pFVar2[lVar9 * 0x18 + 1] = local_100._1_1_;
      *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar9 * 0x18 + 8) = local_f8;
      if (local_f8 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f8 + 8))(local_f8,local_res20);
      }
      *(uint *)(pFVar2 + lVar9 * 0x18 + 0x10) = local_f0;
    }
    if (local_f8 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8 + 0x10))();
    }
    this = (UDynamicMesh *)0x0;
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
  }
  else {
    if (*plVar11 == 0) {
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (local_60,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                          L"ApplyMeshIsoCurves_InvalidInput2",
                          L"ApplyMeshIsoCurves: Per Vertex Values list is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar8);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_e0 = (pFVar8->TextData).Reference;
      local_e8 = 0x200;
      if (local_e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0 + 8))(local_e0,local_b0);
      }
      local_d8 = pFVar8->Flags;
      if (lVar5 != 0) {
        if (((*(undefined2 **)(lVar5 + 0x28) <= &local_e8) &&
            (&local_e8 < *(undefined2 **)(lVar5 + 0x28) + (longlong)*(int *)(lVar5 + 0x34) * 0xc))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
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
        lVar9 = *(longlong *)(lVar5 + 0x28);
        *(int *)(lVar5 + 0x30) = iVar7 + 1;
        lVar10 = (longlong)iVar7;
        *(undefined1 *)(lVar9 + lVar10 * 0x18) = (undefined1)local_e8;
        *(undefined1 *)(lVar9 + 1 + lVar10 * 0x18) = local_e8._1_1_;
        *(undefined8 *)(lVar9 + 8 + lVar10 * 0x18) = 0;
        *(ITextData **)(lVar9 + 8 + lVar10 * 0x18) = local_e0;
        if (local_e0 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0 + 8))(local_e0,local_ac);
        }
        *(uint *)(lVar9 + 0x10 + lVar10 * 0x18) = local_d8;
      }
      if (local_e0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0 + 0x10))();
      }
      if (local_60[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_60[0].TextData.Reference + 0x10))();
      }
    }
    local_90 = &local_a8;
    local_80 = uVar4;
    local_98 = &local_90;
    local_78 = lVar5;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshIsoCurves'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    local_88 = plVar11;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_a0,
               GeneralEdit,Unknown,false);
  }
  *(UDynamicMesh **)param_3 = this;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b8);
  return;
}

// execApplyMeshMirror @ 14cdf2000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshMirror
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
  uint uVar9;
  uint uVar10;
  undefined1 auStack_1d8 [32];
  undefined2 local_188;
  undefined1 local_186;
  undefined2 local_178;
  undefined1 local_176;
  undefined2 local_168;
  ITextData *local_160;
  uint local_158;
  longlong local_150;
  UDynamicMesh *local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  undefined8 local_120;
  code *local_118;
  undefined2 **local_110;
  undefined2 *local_108;
  undefined8 *local_100;
  double *local_f8;
  undefined8 *local_f0;
  FText local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_148 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_188 = 1;
  local_186 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_150 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_150);
  }
  pUVar5 = local_148;
  lVar4 = local_150;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_178 = local_188;
  local_176 = local_186;
  if (local_148 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_e8,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                      L"ApplyMeshMirror_InvalidInput",L"ApplyMeshMirror: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_160 = (this->TextData).Reference;
    local_168 = 0x200;
    if (local_160 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160 + 8))(local_160,local_128);
    }
    local_158 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_168) &&
          (&local_168 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      pFVar2[lVar8 * 0x18] = local_168._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_168._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_160;
      if (local_160 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160 + 8))(local_160,local_124);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_158;
    }
    if (local_160 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160 + 0x10))();
    }
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_120 = __real_3ee4f8b588000000;
    local_c8 = local_88._0_8_;
    local_d8 = local_98._0_8_;
    uStack_d0 = local_98._8_8_;
    local_130 = __real_3ff0000000000000 -
                ((double)local_b8._8_8_ * ((double)local_b8._8_8_ + (double)local_b8._8_8_) +
                (double)local_b8._0_8_ * ((double)local_b8._0_8_ + (double)local_b8._0_8_));
    local_140 = (double)local_b8._0_8_ * ((double)local_a8._0_8_ + (double)local_a8._0_8_) +
                (double)local_a8._8_8_ * ((double)local_b8._8_8_ + (double)local_b8._8_8_);
    local_138 = (double)local_b8._8_8_ * ((double)local_a8._0_8_ + (double)local_a8._0_8_) -
                (double)local_a8._8_8_ * ((double)local_b8._0_8_ + (double)local_b8._0_8_);
    if (((char)local_188 != '\0') && (local_188._1_1_ != '\0')) {
      uVar9 = (uint)__xmm_80000000000000008000000000000000;
      uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_140 = (double)CONCAT44((uint)((ulonglong)local_140 >> 0x20) ^ uVar10,
                                   SUB84(local_140,0) ^ uVar9);
      local_138 = (double)CONCAT44((uint)((ulonglong)local_138 >> 0x20) ^ uVar10,
                                   SUB84(local_138,0) ^ uVar9);
      local_130 = (double)CONCAT44((uint)((ulonglong)local_130 >> 0x20) ^ uVar10,
                                   SUB84(local_130,0) ^ uVar9);
    }
    local_108 = &local_178;
    local_f8 = &local_140;
    local_f0 = &local_120;
    local_110 = &local_108;
    local_118 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshMirror'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_100 = &local_d8;
    UDynamicMesh::EditMesh
              (local_148,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_118,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execApplyMeshPlaneCut @ 14cdf24a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshPlaneCut
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
  uint uVar9;
  uint uVar10;
  undefined1 auStack_1e8 [32];
  undefined1 local_198 [8];
  undefined2 local_190;
  ITextData *local_188;
  uint local_180;
  longlong local_178;
  UDynamicMesh *local_170;
  undefined1 local_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined4 uStack_15c;
  double local_158;
  double local_150;
  double local_148;
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  code *local_138;
  undefined8 **local_130;
  undefined8 *local_128;
  double *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  FText local_108;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  char cStack_ef;
  undefined1 uStack_ee;
  undefined1 uStack_ed;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_170 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_168 = 1;
  uStack_164 = 0xffffffff;
  uStack_160 = 1;
  uStack_15c = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_178 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pUVar5 = local_170;
  lVar4 = local_178;
  local_f8 = local_168;
  uStack_f7 = uStack_167;
  uStack_f6 = uStack_166;
  uStack_f5 = uStack_165;
  uStack_f4 = (undefined1)uStack_164;
  uStack_f3 = uStack_164._1_1_;
  uStack_f2 = uStack_164._2_1_;
  uStack_f1 = uStack_164._3_1_;
  uStack_f0 = (undefined1)uStack_160;
  cStack_ef = uStack_160._1_1_;
  uStack_ee = uStack_15e;
  uStack_ed = uStack_15d;
  uStack_ec = (undefined1)uStack_15c;
  uStack_eb = uStack_15c._1_1_;
  uStack_ea = uStack_15c._2_1_;
  uStack_e9 = uStack_15c._3_1_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_170 == (UDynamicMesh *)0x0) {
    this = FText::AsLocalizable_Advanced_LocText
                     (&local_108,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                      L"ApplyMeshPlaneCut_InvalidInput",L"ApplyMeshPlaneCut: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_188 = (this->TextData).Reference;
    local_190 = 0x200;
    if (local_188 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188 + 8))(local_188,local_140);
    }
    local_180 = this->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_190) &&
          (&local_190 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      pFVar2[lVar8 * 0x18] = local_190._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_190._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_188;
      if (local_188 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188 + 8))(local_188,local_13c);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_180;
    }
    if (local_188 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_188 + 0x10))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_e8 = local_a8._0_8_;
    uStack_e0 = local_a8._8_8_;
    local_d8 = local_98._0_8_;
    local_158 = (double)local_c8._0_8_ * ((double)local_b8._0_8_ + (double)local_b8._0_8_) +
                (double)local_b8._8_8_ * ((double)local_c8._8_8_ + (double)local_c8._8_8_);
    local_150 = (double)local_c8._8_8_ * ((double)local_b8._0_8_ + (double)local_b8._0_8_) -
                (double)local_b8._8_8_ * ((double)local_c8._0_8_ + (double)local_c8._0_8_);
    local_148 = __real_3ff0000000000000 -
                ((double)local_c8._8_8_ * ((double)local_c8._8_8_ + (double)local_c8._8_8_) +
                (double)local_c8._0_8_ * ((double)local_c8._0_8_ + (double)local_c8._0_8_));
    if (uStack_160._1_1_ != '\0') {
      uVar9 = (uint)__xmm_80000000000000008000000000000000;
      uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_158 = (double)CONCAT44((uint)((ulonglong)local_158 >> 0x20) ^ uVar10,
                                   SUB84(local_158,0) ^ uVar9);
      local_150 = (double)CONCAT44((uint)((ulonglong)local_150 >> 0x20) ^ uVar10,
                                   SUB84(local_150,0) ^ uVar9);
      local_148 = (double)CONCAT44((uint)((ulonglong)local_148 >> 0x20) ^ uVar10,
                                   SUB84(local_148,0) ^ uVar9);
    }
    local_198[0] = 0;
    local_120 = &local_158;
    local_118 = &local_f8;
    local_110 = local_198;
    local_130 = &local_128;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneCut'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_128 = &local_e8;
    UDynamicMesh::EditMesh
              (local_170,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_138,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar5;
  }
  return;
}

// execApplyMeshPlaneSlice @ 14cdf2950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshPlaneSlice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *this;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  FText *this_00;
  longlong lVar14;
  double dVar15;
  undefined1 auStack_268 [32];
  undefined2 local_218;
  ITextData *local_210;
  uint local_208;
  longlong local_200;
  UDynamicMesh *local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  FName local_1d0;
  code *local_1c8;
  FName **local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  FName *local_1a0;
  undefined8 *local_198;
  double *local_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  FText local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_268;
  local_1f8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_1f0 = CONCAT31(local_1f0._1_3_,1);
  uStack_1ec = 0xffffffff;
  uStack_1e8 = CONCAT31(uStack_1e8._1_3_,1);
  uStack_1e4 = 0x3c23d70a;
  local_1e0 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_200 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  this = local_1f8;
  lVar4 = local_200;
  local_178 = CONCAT44(uStack_1ec,local_1f0);
  uStack_170 = CONCAT44(uStack_1e4,uStack_1e8);
  uVar5 = local_c8._0_8_;
  uVar6 = local_c8._8_8_;
  uVar7 = local_b8._0_8_;
  uVar8 = local_b8._8_8_;
  uVar9 = local_a8._0_8_;
  uVar10 = local_a8._8_8_;
  uVar11 = local_98._0_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_168 = local_1e0;
  local_e8 = local_88._0_8_;
  uStack_e0 = local_88._8_8_;
  local_d8 = local_78._0_8_;
  uStack_d0 = local_78._8_8_;
  ::FName::FName(&local_1d0,"ObjectIndexAttribute");
  if (this == (UDynamicMesh *)0x0) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_158,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                         L"ApplyMeshPlaneSlice_InvalidInput",
                         L"ApplyMeshPlaneSlice: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this_00);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_210 = (this_00->TextData).Reference;
    local_218 = 0x200;
    if (local_210 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210 + 8))(local_210,local_1d8);
    }
    local_208 = this_00->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_218) &&
          (&local_218 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar13 = *(int *)(lVar4 + 0x30);
      if (iVar13 == *(int *)(lVar4 + 0x34)) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar14 = (longlong)iVar13;
      *(int *)(lVar4 + 0x30) = iVar13 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar14 * 0x18] = local_218._0_1_;
      pFVar2[lVar14 * 0x18 + 1] = local_218._1_1_;
      *(undefined8 *)(pFVar2 + lVar14 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar14 * 0x18 + 8) = local_210;
      if (local_210 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_210 + 8))(local_210,local_1d4);
      }
      *(uint *)(pFVar2 + lVar14 * 0x18 + 0x10) = local_208;
    }
    if (local_210 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210 + 0x10))();
    }
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_138 = uVar11;
    dVar15 = (double)uVar7 + (double)uVar7;
    local_1a0 = &local_1d0;
    local_198 = &local_148;
    local_190 = &local_1b8;
    local_188 = &local_178;
    local_1c0 = &local_1a0;
    local_1c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshPlaneSlice'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
                ::Call;
    local_148 = uVar9;
    uStack_140 = uVar10;
    local_1b8 = (double)uVar5 * dVar15 + (double)uVar8 * ((double)uVar6 + (double)uVar6);
    local_1b0 = (double)uVar6 * dVar15 - (double)uVar8 * ((double)uVar5 + (double)uVar5);
    local_1a8 = __real_3ff0000000000000 -
                ((double)uVar6 * ((double)uVar6 + (double)uVar6) +
                (double)uVar5 * ((double)uVar5 + (double)uVar5));
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_1c8,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

// execApplyMeshSelfUnion @ 14cdf2e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshBooleanFunctions::execApplyMeshSelfUnion
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *this;
  bool bVar5;
  int iVar6;
  FText *this_00;
  longlong lVar7;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 local_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined2 local_c8;
  ITextData *local_c0;
  uint local_b8;
  longlong local_b0;
  UDynamicMesh *local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  void **local_78;
  code *local_70;
  undefined8 **local_68;
  code *local_60;
  void ***local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  void **local_40;
  FText local_38;
  
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
  local_d8 = 0x101;
  uStack_d6 = 1;
  uStack_d4 = 0x3c23d70a;
  local_d0 = 0x3f000000;
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
  this = local_a8;
  lVar4 = local_b0;
  local_88 = CONCAT44(uStack_d4,CONCAT13(uStack_d5,CONCAT12(uStack_d6,local_d8)));
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_80 = local_d0;
  if (local_a8 == (UDynamicMesh *)0x0) {
    this_00 = FText::AsLocalizable_Advanced_LocText
                        (&local_38,L"UGeometryScriptLibrary_MeshBooleanFunctions",
                         L"ApplyMeshSelfUnion_InvalidInput",
                         L"ApplyMeshSelfUnion: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(this_00);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_c0 = (this_00->TextData).Reference;
    local_c8 = 0x200;
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 8))(local_c0,local_res18);
    }
    local_b8 = this_00->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_c8) &&
          (&local_c8 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
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
      pFVar2[lVar7 * 0x18] = local_c8._0_1_;
      pFVar2[lVar7 * 0x18 + 1] = local_c8._1_1_;
      *(undefined8 *)(pFVar2 + lVar7 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar7 * 0x18 + 8) = local_c0;
      if (local_c0 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_c0 + 8))(local_c0,local_res20);
      }
      *(uint *)(pFVar2 + lVar7 * 0x18 + 0x10) = local_b8;
    }
    if (local_c0 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c0 + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_50 = &local_88;
  local_res10[0] = 0;
  local_48 = local_res10;
  local_a0 = (void *)0x0;
  local_40 = &local_a0;
  local_98 = 0;
  local_68 = &local_50;
  local_70 = UE::Core::Private::Function::
             TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  UDynamicMesh::EditMesh
            (local_a8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_70,
             GeneralEdit,Unknown,false);
  if ((0 < (int)local_98) && ((char)local_88 != '\0')) {
    local_78 = &local_a0;
    local_58 = &local_78;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshBooleanFunctions::ApplyMeshSelfUnion'::__l8::<lambda_2>,void,UE::Geometry::FDynamicMesh3_&>
               ::Call;
    UDynamicMesh::EditMesh
              (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)&local_60,
               GeneralEdit,Unknown,false);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  *(UDynamicMesh **)param_3 = this;
  return;
}

