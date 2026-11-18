// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 31

// StaticClass @ 14ce17760

UClass * __cdecl UGeometryScriptLibrary_MeshSimplifyFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSimplifyFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSimplifyFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSimplifyFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshSimplifyFunctions @ 14ce26c40

UGeometryScriptLibrary_MeshSimplifyFunctions * __thiscall
UGeometryScriptLibrary_MeshSimplifyFunctions::UGeometryScriptLibrary_MeshSimplifyFunctions
          (UGeometryScriptLibrary_MeshSimplifyFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSimplifyFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshSimplifyFunctions @ 14ce26c70

UGeometryScriptLibrary_MeshSimplifyFunctions * __thiscall
UGeometryScriptLibrary_MeshSimplifyFunctions::UGeometryScriptLibrary_MeshSimplifyFunctions
          (UGeometryScriptLibrary_MeshSimplifyFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSimplifyFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshSimplifyFunctions @ 14ce27450

void __thiscall
UGeometryScriptLibrary_MeshSimplifyFunctions::~UGeometryScriptLibrary_MeshSimplifyFunctions
          (UGeometryScriptLibrary_MeshSimplifyFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshSimplifyFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14ce2ac60

void __thiscall
`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyClusterSimplifyToEdgeLength'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  EConstraintLevel EVar4;
  FSimplifyOptions local_268;
  FDynamicMesh3 local_238;
  
  local_268.TargetEdgeLength = **(double **)this;
  if (**(double **)this <= 0.0) {
    local_268.TargetEdgeLength = 0.0;
  }
  local_268.MaxPreserveCollapsedClusterPasses = 3;
  local_268.bTransferAttributes = true;
  local_268.FixBoundaryAngleTolerance = *(double *)(*(longlong *)((longlong)this + 8) + 8);
  local_268.bTransferGroups = true;
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 0x10);
  if (cVar1 == '\0') {
    local_268.PreserveEdges.Boundary = Fixed;
  }
  else if (cVar1 == '\x01') {
    local_268.PreserveEdges.Boundary = Constrained;
  }
  else {
    if (cVar1 != '\x02') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6636801139016728996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSimplifyFunctions.cpp"
                         ,0x1a4,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_268.PreserveEdges.Boundary = Free;
  }
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 0x11);
  if (cVar1 == '\0') {
    local_268.PreserveEdges.PolyGroup = Fixed;
  }
  else if (cVar1 == '\x01') {
    local_268.PreserveEdges.PolyGroup = Constrained;
  }
  else {
    if (cVar1 != '\x02') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6636801139016728996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSimplifyFunctions.cpp"
                         ,0x1a4,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_268.PreserveEdges.PolyGroup = Free;
  }
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 0x12);
  if (cVar1 == '\0') {
    local_268.PreserveEdges.Material = Fixed;
  }
  else if (cVar1 == '\x01') {
    local_268.PreserveEdges.Material = Constrained;
  }
  else {
    if (cVar1 != '\x02') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6636801139016728996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSimplifyFunctions.cpp"
                         ,0x1a4,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_268.PreserveEdges.Material = Free;
  }
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 0x13);
  if (cVar1 == '\0') {
    local_268.PreserveEdges.UVSeam = Fixed;
  }
  else if (cVar1 == '\x01') {
    local_268.PreserveEdges.UVSeam = Constrained;
  }
  else {
    if (cVar1 != '\x02') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6636801139016728996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSimplifyFunctions.cpp"
                         ,0x1a4,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_268.PreserveEdges.UVSeam = Free;
  }
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 0x14);
  if (cVar1 == '\0') {
    EVar4 = Fixed;
  }
  else if (cVar1 == '\x01') {
    EVar4 = Constrained;
  }
  else {
    if (cVar1 != '\x02') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6636801139016728996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSimplifyFunctions.cpp"
                         ,0x1a4,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar4 = Free;
  }
  local_268.PreserveEdges.ColorSeam = EVar4;
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 0x15);
  if (cVar1 == '\0') {
    EVar4 = Fixed;
  }
  else if (cVar1 == '\x01') {
    EVar4 = Constrained;
  }
  else {
    if (cVar1 != '\x02') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6636801139016728996>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryScripting\\Source\\GeometryScriptingCore\\Private\\MeshSimplifyFunctions.cpp"
                         ,0x1a4,"false");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    EVar4 = Free;
  }
  local_268.PreserveEdges.NormalSeam = EVar4;
  local_268.PreserveEdges.TangentSeam = Free;
  if (**(char **)((longlong)this + 8) != '\0') {
    local_268.PreserveEdges.UVSeam = Free;
    local_268.PreserveEdges.NormalSeam = Free;
    local_268.PreserveEdges.ColorSeam = Free;
    local_268.PreserveEdges.Material = Free;
    local_268.bTransferAttributes = false;
  }
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238);
  UE::Geometry::MeshClusterSimplify::Simplify(param_1,&local_238,&local_268);
  UE::Geometry::FDynamicMesh3::operator=(param_1,&local_238);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  return;
}

// operator() @ 14ce2f380

void __thiscall
`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToEdgeLength'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  FGeometryScriptSimplifyMeshOptions local_res8 [4];
  
  puVar1 = *(undefined4 **)((longlong)this + 8);
  local_res8[0]._0_4_ = *puVar1;
  dVar2 = **(double **)this;
  if (**(double **)this <= 0.0) {
    dVar2 = 0.0;
  }
  local_res8[0]._4_2_ = *(undefined2 *)(puVar1 + 1);
  local_res8[0].bAutoCompact = *(bool *)((longlong)puVar1 + 6);
  if ((EGeometryScriptRemoveMeshSimplificationType)local_res8[0]._0_4_ == AttributeAware) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>_>
              (param_1,local_res8,EdgeLength,1,dVar2,(FMeshProjectionTarget *)0x0,
               __real_bff0000000000000);
    return;
  }
  if ((EGeometryScriptRemoveMeshSimplificationType)local_res8[0]._0_4_ == VolumePreserving) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>_>
              (param_1,local_res8,EdgeLength,1,dVar2,(FMeshProjectionTarget *)0x0,
               __real_bff0000000000000);
    return;
  }
  UE::PrivateSimplifyHelper::
  DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>_>
            (param_1,local_res8,EdgeLength,1,dVar2,(FMeshProjectionTarget *)0x0,
             __real_bff0000000000000);
  return;
}

// operator() @ 14ce2f430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  double dVar1;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [8];
  code *local_2b0;
  undefined1 *local_2a8;
  TMeshSimplification<UE::Geometry::TQuadricError<double>_> local_298;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
  TMeshSimplification<UE::Geometry::TQuadricError<double>_>(&local_298,param_1);
  local_2a8 = local_2b8;
  local_298.CollapseMode = AverageVertexPosition;
  local_2b0 = UE::Core::Private::Function::TFunctionRefCaller<UE::Geometry::<lambda_38_>,bool,int>::
              Call;
  dVar1 = (double)**(float **)this;
  if ((double)**(float **)this <= __real_3ee4f8b588e368f1) {
    dVar1 = __real_3ee4f8b588e368f1;
  }
  UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::SimplifyToMinimalPlanar
            (&local_298,dVar1,(TFunctionRef<bool___cdecl(int)> *)&local_2b0);
  if (*(char *)(*(longlong *)this + 4) != '\0') {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
  }
  UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>::
  ~TMeshSimplification<UE::Geometry::TQuadricError<double>_>(&local_298);
  return;
}

// operator() @ 14ce2f4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FGroupTopology *pFVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  FDynamicMeshAttributeSet *this_00;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  *pTVar7;
  FFunctionStorage *pFVar8;
  undefined1 auStack_f8 [32];
  FPolygroupLayer local_d8 [2];
  code *local_c8;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  local_b8;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  *local_a0;
  FText local_98;
  undefined1 local_88 [48];
  FFunctionStorage local_58;
  double local_38;
  FProgressCancel *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8[0].bIsDefaultLayer = (bool)**(undefined1 **)this;
  local_d8[0].LayerIndex = *(int *)(*(undefined1 **)this + 4);
  bVar3 = UE::Geometry::FPolygroupLayer::CheckExists(local_d8,param_1);
  if (!bVar3) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToPolygroupTopology_MissingGroups",
                        L"ApplySimplifyToPolygroupTopology: Target Polygroup Layer does not exist");
    UE::Geometry::AppendError
              ((UGeometryScriptDebug *)**(undefined8 **)((longlong)this + 8),InvalidInputs,pFVar4);
    if (local_98.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    return;
  }
  if (**(char **)this == '\0') {
    pFVar1 = (param_1->AttributeSet).Ptr;
    this_00 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      this_00 = pFVar1;
    }
    pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                       (this_00,*(int *)(*(char **)this + 4));
    pFVar5 = ::operator_new(0x160);
    if (pFVar5 != (FGroupTopology *)0x0) {
      pFVar5 = UE::Geometry::FGroupTopology::FGroupTopology(pFVar5,param_1,pTVar6,true);
      goto LAB_14ce2f5f7;
    }
  }
  else {
    pFVar5 = ::operator_new(0x160);
    if (pFVar5 != (FGroupTopology *)0x0) {
      pFVar5 = UE::Geometry::FGroupTopology::FGroupTopology(pFVar5,param_1,true);
      goto LAB_14ce2f5f7;
    }
  }
  pFVar5 = (FGroupTopology *)0x0;
LAB_14ce2f5f7:
  local_a0 = (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
              *)0x0;
  local_b8._padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_88._0_8_ = &___7FPolygroupRemesh_Geometry_UE__6B_;
  local_b8.Obj = UE::Geometry::ConstrainedDelaunayTriangulate<double>;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
             ::Call;
  local_88._32_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
       ::Call;
  local_58.HeapAllocation = (FFunctionStorage *)0x0;
  local_88._8_8_ = param_1;
  local_88._16_8_ = pFVar5;
  UE::Core::Private::Function::
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  ::CloneToEmptyStorage(&local_b8,&local_58);
  local_38 = __real_3fb999999999999a;
  local_30 = (FProgressCancel *)0x0;
  if (((param_1 == (FDynamicMesh3 *)0x0) || (pFVar5 == (FGroupTopology *)0x0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh != nullptr && Topology != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\PolygroupRemesh.h"
                         ,0x44,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_c8 != (code *)0x0) {
    pTVar7 = &local_b8;
    if (local_a0 !=
        (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
         *)0x0) {
      pTVar7 = local_a0;
    }
    (**(code **)(pTVar7->_padding_ + 0x10))();
  }
  local_38 = (double)**(float **)((longlong)this + 0x10);
  UE::Geometry::FPolygroupRemesh::Compute((FPolygroupRemesh *)local_88);
  if (*(char *)(*(longlong *)((longlong)this + 0x10) + 4) != '\0') {
    UE::Geometry::FDynamicMesh3::CompactInPlace(param_1,(FCompactMaps *)0x0);
  }
  local_88._0_8_ = &___7FPolygroupRemesh_Geometry_UE__6B_;
  if ((code *)local_88._32_8_ != (code *)0x0) {
    pFVar8 = &local_58;
    if (local_58.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar8 = local_58.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar8->InlineAllocation + 0x10))();
  }
  if (pFVar5 != (FGroupTopology *)0x0) {
    (**(code **)pFVar5->_padding_)(pFVar5,1);
  }
  return;
}

// operator() @ 14ce2f740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined ***pppuVar3;
  double dVar4;
  undefined1 auStackY_388 [32];
  FGeometryScriptSimplifyMeshOptions local_348 [2];
  FMeshProjectionTarget local_338;
  FDynamicMesh3 local_318;
  undefined1 local_e8 [48];
  undefined **local_b8;
  code *local_b0;
  undefined ***local_a0;
  double local_98;
  TDynamicVector<int,512> local_90;
  TDynamicVector<UE::Math::TVector<double>,512> local_78;
  TDynamicVector<UE::Math::TVector<double>,512> local_60;
  TDynamicVector<int,512> local_48;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_388;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_318);
  UE::Geometry::FDynamicMesh3::Copy(&local_318,param_1,false,false,false,false);
  local_e8._0_8_ = &___7__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
  local_98 = __real_3e45798ee2308c3a;
  local_b8 = &
             ___7__TFunction_OwnedObject_P6AHHAEBU__TAxisAlignedBox3_N_Geometry_UE___Z_00_0A__Function_Private_Core_UE__6B_
  ;
  local_e8._16_8_ = 0;
  local_b0 = `UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::MakeDefaultSplitAxisFunc'::
             __l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_e8._32_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<int_(__cdecl*)(int,UE::Geometry::TAxisAlignedBox3<double>_const_&),int,int,UE::Geometry::TAxisAlignedBox3<double>_const_&>
       ::Call;
  local_e8._24_4_ = 3;
  local_a0 = (undefined ***)0x0;
  local_90.CurBlock = 0;
  local_90.CurBlockUsed = 0;
  local_90.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Blocks.ArrayNum = 0;
  local_90.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_90);
  local_78.CurBlock = 0;
  local_78.CurBlockUsed = 0;
  local_78.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Blocks.ArrayNum = 0;
  local_78.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_78);
  local_60.CurBlock = 0;
  local_60.CurBlockUsed = 0;
  local_60.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Blocks.ArrayNum = 0;
  local_60.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_60);
  local_48.CurBlock = 0;
  local_48.CurBlockUsed = 0;
  local_48.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Blocks.ArrayNum = 0;
  local_48.Blocks.ArrayMax = 0;
  UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_48);
  local_e8._8_8_ = &local_318;
  local_30._0_4_ = -1;
  local_30._4_4_ = -1;
  local_e8._16_8_ = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_e8,false);
  local_e8._16_8_ = UE::Geometry::FDynamicMesh3::GetChangeStamp((FDynamicMesh3 *)local_e8._8_8_);
  puVar1 = *(undefined4 **)((longlong)this + 8);
  local_338._padding_ = (longlong)&___7FMeshProjectionTarget_Geometry_UE__6B_;
  local_338.Mesh = &local_318;
  local_338.Spatial = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_e8;
  local_348[0]._0_4_ = *puVar1;
  local_348[0]._4_2_ = *(undefined2 *)(puVar1 + 1);
  fVar2 = **(float **)this;
  if (**(float **)this <= 0.0) {
    fVar2 = 0.0;
  }
  dVar4 = (double)fVar2;
  local_348[0].bAutoCompact = *(bool *)((longlong)puVar1 + 6);
  if ((EGeometryScriptRemoveMeshSimplificationType)local_348[0]._0_4_ == AttributeAware) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>_>
              (param_1,local_348,TriangleCount,1,__real_bff0000000000000,&local_338,dVar4);
  }
  else if ((EGeometryScriptRemoveMeshSimplificationType)local_348[0]._0_4_ == VolumePreserving) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>_>
              (param_1,local_348,TriangleCount,1,__real_bff0000000000000,&local_338,dVar4);
  }
  else {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>_>
              (param_1,local_348,TriangleCount,1,__real_bff0000000000000,&local_338,dVar4);
  }
  local_338._padding_ = (longlong)&___7IProjectionTarget_Geometry_UE__6B_;
  UE::Geometry::TDynamicVector<int,512>::Empty(&local_48,0);
  if (local_48.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Blocks.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_60,0);
  if (local_60.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Blocks.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_78,0);
  if (local_78.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Blocks.AllocatorInstance.Data);
  }
  UE::Geometry::TDynamicVector<int,512>::Empty(&local_90,0);
  if (local_90.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Blocks.AllocatorInstance.Data);
  }
  if ((code *)local_e8._32_8_ != (code *)0x0) {
    pppuVar3 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar3 = local_a0;
    }
    (*(code *)(*pppuVar3)[2])();
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_318);
  return;
}

// operator() @ 14ce2fa50

void __thiscall
`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FGeometryScriptSimplifyMeshOptions local_res8 [4];
  
  puVar2 = *(undefined4 **)this;
  local_res8[0]._0_4_ = *puVar2;
  iVar1 = **(int **)((longlong)this + 8);
  local_res8[0]._4_2_ = *(undefined2 *)(puVar2 + 1);
  local_res8[0].bAutoCompact = *(bool *)((longlong)puVar2 + 6);
  if ((EGeometryScriptRemoveMeshSimplificationType)local_res8[0]._0_4_ == AttributeAware) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>_>
              (param_1,local_res8,TriangleCount,iVar1,0.0,(FMeshProjectionTarget *)0x0,
               __real_bff0000000000000);
    return;
  }
  if ((EGeometryScriptRemoveMeshSimplificationType)local_res8[0]._0_4_ == VolumePreserving) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>_>
              (param_1,local_res8,TriangleCount,iVar1,0.0,(FMeshProjectionTarget *)0x0,
               __real_bff0000000000000);
    return;
  }
  UE::PrivateSimplifyHelper::
  DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>_>
            (param_1,local_res8,TriangleCount,iVar1,0.0,(FMeshProjectionTarget *)0x0,
             __real_bff0000000000000);
  return;
}

// operator() @ 14ce2fb00

void __thiscall
`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount'::__l2::<lambda_1>::
operator()(void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  FGeometryScriptSimplifyMeshOptions local_res8 [4];
  
  puVar2 = *(undefined4 **)this;
  local_res8[0]._0_4_ = *puVar2;
  iVar1 = **(int **)((longlong)this + 8);
  local_res8[0]._4_2_ = *(undefined2 *)(puVar2 + 1);
  local_res8[0].bAutoCompact = *(bool *)((longlong)puVar2 + 6);
  if ((EGeometryScriptRemoveMeshSimplificationType)local_res8[0]._0_4_ == AttributeAware) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TAttrBasedQuadricError<double>_>_>
              (param_1,local_res8,VertexCount,iVar1,0.0,(FMeshProjectionTarget *)0x0,
               __real_bff0000000000000);
    return;
  }
  if ((EGeometryScriptRemoveMeshSimplificationType)local_res8[0]._0_4_ == VolumePreserving) {
    UE::PrivateSimplifyHelper::
    DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TVolPresQuadricError<double>_>_>
              (param_1,local_res8,VertexCount,iVar1,0.0,(FMeshProjectionTarget *)0x0,
               __real_bff0000000000000);
    return;
  }
  UE::PrivateSimplifyHelper::
  DoSimplifyMesh<UE::Geometry::TMeshSimplification<UE::Geometry::TQuadricError<double>_>_>
            (param_1,local_res8,VertexCount,iVar1,0.0,(FMeshProjectionTarget *)0x0,
             __real_bff0000000000000);
  return;
}

// ApplyClusterSimplifyToEdgeLength @ 14ce5a910

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyClusterSimplifyToEdgeLength
          (UDynamicMesh *param_1,double param_2,FGeometryScriptClusterSimplifyMeshOptions *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  double local_res10 [3];
  double *local_28;
  FGeometryScriptClusterSimplifyMeshOptions *local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res10;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyClusterSimplifyToEdgeLength'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyEditorSimplifyToTriangleCount @ 14ce5a9d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyEditorSimplifyToTriangleCount
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int *local_res8;
  int local_res10 [2];
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplyEditorSimplifyToTriangleCount_InvalidInput",
                        L"ApplyEditorSimplifyToTriangleCount: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyEditorSimplifyToTriangleCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplyEditorSimplifyToVertexCount @ 14ce5aa80

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyEditorSimplifyToVertexCount
          (UDynamicMesh *param_1,int param_2,UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  int *local_res8;
  int local_res10 [2];
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplyEditorSimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyEditorSimplifyToVertexCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplySimplifyToEdgeLength @ 14ce5c090

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToEdgeLength
          (UDynamicMesh *param_1,double param_2,FGeometryScriptSimplifyMeshOptions *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  double local_res10 [3];
  double *local_28;
  FGeometryScriptSimplifyMeshOptions *local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res10;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToEdgeLength'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplySimplifyToPlanar @ 14ce5c150

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar
          (UDynamicMesh *param_1,FGeometryScriptPlanarSimplifyOptions param_2,
          UGeometryScriptDebug *param_3)

{
  FText *pFVar1;
  FGeometryScriptPlanarSimplifyOptions *local_res8;
  FGeometryScriptPlanarSimplifyOptions local_res10;
  undefined1 local_18 [16];
  
  local_res10 = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToPlanar_InvalidInput",
                        L"ApplySimplifyToPlanar: TargetMesh is Null");
    UE::Geometry::AppendError(param_3,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_res8 = &local_res10;
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplySimplifyToPolygroupTopology @ 14ce5c200

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology
          (UDynamicMesh *param_1,FGeometryScriptPolygroupSimplifyOptions param_2,
          FGeometryScriptGroupLayer param_3,UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  FGeometryScriptPolygroupSimplifyOptions local_res10;
  FGeometryScriptGroupLayer local_res18;
  UGeometryScriptDebug *local_res20;
  undefined1 local_38 [16];
  FGeometryScriptGroupLayer *local_28;
  UGeometryScriptDebug **local_20;
  FGeometryScriptPolygroupSimplifyOptions *local_18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToPolygroupTopology_InvalidInput",
                        L"ApplySimplifyToPolygroupTopology: TargetMesh is Null");
    UE::Geometry::AppendError(local_res20,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = &local_res18;
  local_20 = &local_res20;
  local_18 = &local_res10;
  local_38._8_8_ = &local_28;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplySimplifyToTolerance @ 14ce5c2d0

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance
          (UDynamicMesh *param_1,float param_2,FGeometryScriptSimplifyMeshOptions *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  float local_res10 [6];
  float *local_28;
  FGeometryScriptSimplifyMeshOptions *local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToTolerance_InvalidInput",
                        L"ApplySimplifyToTolerance: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_28 = local_res10;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_20 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplySimplifyToTriangleCount @ 14ce5c390

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount
          (UDynamicMesh *param_1,int param_2,FGeometryScriptSimplifyMeshOptions *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  int local_res10 [6];
  FGeometryScriptSimplifyMeshOptions *local_28;
  int *local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToTriangleCount_InvalidInput",
                        L"ApplySimplifyToTriangleCount: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_20 = local_res10;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// ApplySimplifyToVertexCount @ 14ce5c440

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount
          (UDynamicMesh *param_1,int param_2,FGeometryScriptSimplifyMeshOptions *param_3,
          UGeometryScriptDebug *param_4)

{
  FText *pFVar1;
  int local_res10 [6];
  FGeometryScriptSimplifyMeshOptions *local_28;
  int *local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_18,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
    UE::Geometry::AppendError(param_4,InvalidInputs,pFVar1);
    if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  local_20 = local_res10;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  local_28 = param_3;
  UDynamicMesh::EditMesh
            (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_18,
             GeneralEdit,Unknown,false);
  return param_1;
}

// GetPrivateStaticClass @ 14ce6d530

UClass * __cdecl UGeometryScriptLibrary_MeshSimplifyFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshSimplifyFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshSimplifyFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshSimplifyFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions.InnerSingleton;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions @ 14ce75180

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshSimplifyFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_MeshSimplifyFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyClusterSimplifyToEdgeLength @ 14ce85220

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplyClusterSimplifyToEdgeLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  UGeometryScriptDebug *local_res10;
  undefined8 local_res18;
  UDynamicMesh *local_res20;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 local_60 [16];
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
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
  local_res18 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  uStack_48 = __real_4046800000000000;
  local_50 = 0;
  local_40 = 0x1010101;
  uStack_3c = 0x101;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
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
  pUVar3 = local_res20;
  pUVar2 = local_res10;
  local_38 = CONCAT71(uStack_4f,local_50);
  local_28 = CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  uStack_30 = uStack_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78 = local_res18;
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_60,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_60._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_60._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_70 = &local_78;
    local_68 = &local_38;
    local_60._8_8_ = &local_70;
    local_60._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyClusterSimplifyToEdgeLength'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_60,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar3;
  }
  return;
}

// execApplyEditorSimplifyToTriangleCount @ 14ce85430

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplyEditorSimplifyToTriangleCount
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplyEditorSimplifyToTriangleCount_InvalidInput",
                        L"ApplyEditorSimplifyToTriangleCount: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyEditorSimplifyToTriangleCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_38,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execApplyEditorSimplifyToVertexCount @ 14ce855e0

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplyEditorSimplifyToVertexCount
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
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplyEditorSimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
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
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplyEditorSimplifyToVertexCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_38,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execApplySimplifyToEdgeLength @ 14ce87780

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToEdgeLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10;
  undefined2 local_res14;
  undefined1 local_res16;
  undefined4 local_res18;
  undefined2 local_res1c;
  undefined1 local_res1e;
  UGeometryScriptDebug *local_res20;
  undefined8 local_58;
  UDynamicMesh *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  undefined1 local_30 [24];
  
  local_50 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_58 = 0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = 0x1010102;
  local_res14 = 0;
  local_res16 = 1;
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
  pUVar3 = local_50;
  pUVar2 = local_res20;
  local_48 = local_58;
  local_res18 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res1c = local_res14;
  local_res1e = local_res16;
  if (local_50 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_30,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_30._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_30._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_40 = &local_48;
  local_38 = &local_res18;
  local_30._8_8_ = &local_40;
  local_30._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToEdgeLength'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_50,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_30,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execApplySimplifyToPlanar @ 14ce87990

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToPlanar
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10;
  undefined4 uStackX_14;
  UGeometryScriptDebug *local_res18;
  UDynamicMesh *local_res20;
  undefined8 local_38;
  undefined8 *local_30;
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
  local_res10 = 0x3a83126f;
  uStackX_14 = CONCAT31(uStackX_14._1_3_,1);
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
  pUVar3 = local_res20;
  pUVar2 = local_res18;
  local_38 = CONCAT44(uStackX_14,local_res10);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToPlanar_InvalidInput",
                        L"ApplySimplifyToPlanar: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_30 = &local_38;
  local_28._8_8_ = &local_30;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPlanar'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_res20,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execApplySimplifyToPolygroupTopology @ 14ce87b50

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToPolygroupTopology
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
  UGeometryScriptDebug **local_30;
  undefined8 *local_28;
  
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
  local_res18 = 0x3a83126f;
  uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
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
  local_58 = CONCAT44(uStackX_14,local_res10);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_50 = CONCAT44(uStackX_1c,local_res18);
  if (local_68 == (UDynamicMesh *)0x0) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToPolygroupTopology_InvalidInput",
                        L"ApplySimplifyToPolygroupTopology: TargetMesh is Null");
    UE::Geometry::AppendError(local_60,InvalidInputs,pFVar3);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    local_38 = &local_58;
    local_30 = &local_60;
    local_28 = &local_50;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToPolygroupTopology'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
         ::Call;
    UDynamicMesh::EditMesh
              (local_68,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_48,
               GeneralEdit,Unknown,false);
    *(UDynamicMesh **)param_3 = pUVar2;
  }
  return;
}

// execApplySimplifyToTolerance @ 14ce87d40

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToTolerance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined2 local_res24;
  undefined1 local_res26;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  UGeometryScriptDebug *local_48;
  UDynamicMesh *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined1 local_28 [16];
  
  local_40 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0x1010102;
  local_res24 = 0;
  local_res26 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pUVar3 = local_40;
  pUVar2 = local_48;
  local_res18[0] = local_res10[0];
  local_58 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_54 = local_res24;
  local_52 = local_res26;
  if (local_40 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_28,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToTolerance_InvalidInput",
                        L"ApplySimplifyToTolerance: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_28._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_28._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_38 = local_res18;
  local_30 = &local_58;
  local_28._8_8_ = &local_38;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTolerance'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_40,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_28,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execApplySimplifyToTriangleCount @ 14ce87f50

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToTriangleCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined2 local_res24;
  undefined1 local_res26;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  UGeometryScriptDebug *local_58;
  UDynamicMesh *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_38 [16];
  
  local_50 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
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
  local_res20 = 0x1010102;
  local_res24 = 0;
  local_res26 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar3 = local_50;
  pUVar2 = local_58;
  local_68 = local_res20;
  local_64 = local_res24;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_62 = local_res26;
  local_res18[0] = local_res10[0];
  if (local_50 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToTriangleCount_InvalidInput",
                        L"ApplySimplifyToTriangleCount: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_48 = &local_68;
  local_40 = local_res18;
  local_38._8_8_ = &local_48;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToTriangleCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_50,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

// execApplySimplifyToVertexCount @ 14ce88140

void __cdecl
UGeometryScriptLibrary_MeshSimplifyFunctions::execApplySimplifyToVertexCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UGeometryScriptDebug *pUVar2;
  UDynamicMesh *pUVar3;
  FText *pFVar4;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined2 local_res24;
  undefined1 local_res26;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  UGeometryScriptDebug *local_58;
  UDynamicMesh *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined1 local_38 [16];
  
  local_50 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
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
  local_res20 = 0x1010102;
  local_res24 = 0;
  local_res26 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_58 = (UGeometryScriptDebug *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pUVar3 = local_50;
  pUVar2 = local_58;
  local_68 = local_res20;
  local_64 = local_res24;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_62 = local_res26;
  local_res18[0] = local_res10[0];
  if (local_50 == (UDynamicMesh *)0x0) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshSimplifyFunctions",
                        L"ApplySimplifyToVertexCount_InvalidInput",
                        L"ApplySimplifyToVertexCount: TargetMesh is Null");
    UE::Geometry::AppendError(pUVar2,InvalidInputs,pFVar4);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
    return;
  }
  local_48 = &local_68;
  local_40 = local_res18;
  local_38._8_8_ = &local_48;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UGeometryScriptLibrary_MeshSimplifyFunctions::ApplySimplifyToVertexCount'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
       ::Call;
  UDynamicMesh::EditMesh
            (local_50,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_&)> *)local_38,
             GeneralEdit,Unknown,false);
  *(UDynamicMesh **)param_3 = pUVar3;
  return;
}

