// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 17

// <lambda_invoker_cdecl> @ 14cab09b0

TVector<double> * __cdecl
`UE::Geometry::FCompressedMeshSpatialWrapper::AppendMesh'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// FCompressedMeshSpatialWrapper @ 14cac9130

FCompressedMeshSpatialWrapper * __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::FCompressedMeshSpatialWrapper
          (FCompressedMeshSpatialWrapper *this,FDynamicMesh3 *param_1)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined ***)this = &___7FCompressedMeshSpatialWrapper_Geometry_UE__6B_;
  *(undefined4 *)&this->field_0x10 = 1;
  *(undefined2 *)&this->field_0x18 = 0;
  this->field_0x1a = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  this->field_0x28 = 0;
  FDynamicMesh3::FDynamicMesh3(&this->BuildInputMesh);
  FColliderMesh::FColliderMesh(&this->ColliderMesh);
  (this->FWNTree).Ptr = (TFastWindingTree<UE::Geometry::FColliderMesh> *)0x0;
  FDynamicMesh3::operator=(&this->BuildInputMesh,param_1);
  return this;
}

// AppendMesh @ 14cae9b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::AppendMesh
          (FCompressedMeshSpatialWrapper *this,FDynamicMesh3 *param_1,
          TTransformSequence3<double> *param_2)

{
  undefined1 auStack_4f8 [32];
  FDynamicMeshEditor local_4d8 [2];
  code *local_4c8 [2];
  undefined **local_4b8;
  TTransformSequence3<double> *local_4b0;
  undefined8 local_4a0;
  TMeshWrapperAdapterd<UE::Geometry::FColliderMesh> local_498;
  FMeshIndexMappings local_2d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>::
  TMeshWrapperAdapterd<UE::Geometry::FColliderMesh>(&local_498,&this->ColliderMesh);
  local_4d8[0].Mesh = param_1;
  FMeshIndexMappings::FMeshIndexMappings(&local_2d8);
  local_4a0 = 0;
  if (this->field_0x18 == '\0') {
    local_4b8 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__6__AppendMesh_FCompressedMeshSpatialWrapper_Geometry_UE__UEAAXAEAVFDynamicMesh3_45_AEBV__TTransformSequence3_N_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_4c8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FCompressedMeshSpatialWrapper::AppendMesh'::__l7::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
    local_4b0 = param_2;
  }
  else {
    local_4b8 = &
                ___7__TFunction_OwnedObject_P6A_AU__TVector_N_Math_UE__HAEBU123__Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_4b0 = (TTransformSequence3<double> *)
                `UE::Geometry::FCompressedMeshSpatialWrapper::AppendMesh'::__l5::<lambda_1>::
                <lambda_invoker_cdecl>;
    local_4c8[0] = Core::Private::Function::
                   TFunctionRefCaller<UE::Math::TVector<double>_(__cdecl*)(int,UE::Math::TVector<double>_const_&),UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
  }
  FDynamicMeshEditor::AppendMesh
            (local_4d8,(TTriangleMeshAdapter<double> *)&local_498,&local_2d8,
             (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *)
             local_4c8);
  FMeshIndexMappings::~FMeshIndexMappings(&local_2d8);
  TTriangleMeshAdapter<double>::~TTriangleMeshAdapter<double>
            ((TTriangleMeshAdapter<double> *)&local_498);
  return;
}

// Build @ 14caed270

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::Build
          (FCompressedMeshSpatialWrapper *this,FMeshSceneAdapterBuildOptions *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FDynamicMesh3 *pFVar6;
  TMeshAABBTree3<UE::Geometry::FColliderMesh> *pTVar7;
  TFastWindingTree<UE::Geometry::FColliderMesh> *pTVar8;
  TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>_>_>
  *pTVar9;
  TFastWindingTree<UE::Geometry::FColliderMesh> *pTVar10;
  FBuildOptions local_res8 [2];
  longlong local_258 [2];
  FDynamicMesh3 local_248;
  
  if (((param_1->bEnableUVQueries != false) || (param_1->bEnableNormalsQueries != false)) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8012027019833377325>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x22d,
                         "BuildOptions.bEnableUVQueries == false && BuildOptions.bEnableNormalsQueries == false"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (((this->BuildInputMesh).TriangleRefCounts.UsedCount < 1) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8012027019833377326>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x22e,"BuildInputMesh.TriangleCount() > 0"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res8[0].bBuildAABBTree = true;
  local_res8[0].bBuildVertexMap = false;
  local_res8[0].bBuildTriangleMap = false;
  FColliderMesh::Initialize(&this->ColliderMesh,&this->BuildInputMesh,local_res8);
  pFVar6 = FDynamicMesh3::FDynamicMesh3(&local_248);
  FDynamicMesh3::operator=(&this->BuildInputMesh,pFVar6);
  FDynamicMesh3::~FDynamicMesh3(&local_248);
  if (param_1->bBuildSpatialDataStructures == false) {
    return true;
  }
  if ((this->field_0x1a != '\0') && (this->field_0x28 == '\0')) {
    return true;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::FCompressedMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l8::__CpuProfilerEventSpecId569,"MeshScene_WrapperBuild_DMesh_FWNTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x239);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::FCompressedMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l8::__CpuProfilerEventSpecId569);
  }
  pTVar7 = FColliderMesh::GetRawAABBTreeUnsafe(&this->ColliderMesh);
  if ((pTVar7 == (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ColliderMesh.GetRawAABBTreeUnsafe() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x23a,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar7 = FColliderMesh::GetRawAABBTreeUnsafe(&this->ColliderMesh);
  pTVar8 = ::operator_new(0x38);
  pTVar10 = (TFastWindingTree<UE::Geometry::FColliderMesh> *)0x0;
  if (pTVar8 != (TFastWindingTree<UE::Geometry::FColliderMesh> *)0x0) {
    (pTVar8->FastWindingCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar8->FastWindingCache).ArrayNum = 0;
    (pTVar8->FastWindingCache).ArrayMax = 0;
    pTVar8->FastWindingCacheMeshChangeStamp = 0;
    pTVar8->FastWindingCacheOffset = 0;
    pTVar8->FWNBeta = 2.0;
    pTVar8->FWNApproxOrder = 2;
    pTVar8->Tree = pTVar7;
    if ((pTVar7 == (TMeshAABBTree3<UE::Geometry::FColliderMesh> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    pTVar7 = pTVar8->Tree;
    if ((pTVar7->RootIndex < 0) || (pTVar7->MeshChangeStamp != 0)) {
      TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown(pTVar7,false);
      pTVar7->MeshChangeStamp = 0;
    }
    TFastWindingTree<UE::Geometry::FColliderMesh>::build_fast_winding_cache(pTVar8);
    pTVar8->FastWindingCacheMeshChangeStamp = pTVar8->Tree->MeshChangeStamp;
    pTVar10 = pTVar8;
  }
  pTVar9 = &this->FWNTree;
  if (pTVar9 == (TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FColliderMesh>_>_>
                 *)local_258) {
    if (pTVar10 == (TFastWindingTree<UE::Geometry::FColliderMesh> *)0x0) goto LAB_14caed4e1;
    pFVar1 = (pTVar10->FastWindingCache).AllocatorInstance.Data;
    pTVar8 = pTVar10;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  else {
    pTVar8 = pTVar9->Ptr;
    pTVar9->Ptr = pTVar10;
    if (pTVar8 == (TFastWindingTree<UE::Geometry::FColliderMesh> *)0x0) goto LAB_14caed4e1;
    pFVar1 = (pTVar8->FastWindingCache).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  ::operator_delete(pTVar8,0x38);
LAB_14caed4e1:
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// CollectSeedPoints @ 14caf6240

void __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::CollectSeedPoints
          (FCompressedMeshSpatialWrapper *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if (this->field_0x18 == '\0') {
    local_18 = *(code **)param_2;
    local_10 = *(undefined1 **)&param_2->field_0x8;
  }
  else {
    local_10 = local_res8;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FCompressedMeshSpatialWrapper::CollectSeedPoints'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
  }
  CollectSeedPointsFromMeshVertices<UE::Geometry::FColliderMesh>
            (&this->ColliderMesh,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_18,param_1,500);
  return;
}

// FastWindingNumber @ 14cb07730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::FastWindingNumber
          (FCompressedMeshSpatialWrapper *this,TVector<double> *param_1,
          TTransformSequence3<double> *param_2)

{
  undefined1 *puVar1;
  TFastWindingTree<UE::Geometry::FColliderMesh> *pTVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TVector<double> *pTVar7;
  TVector<double>_u_0 *pTVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStackY_258 [32];
  TVector<double>_u_0 local_228;
  double local_210;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double> local_168;
  TVector<double> local_150;
  TVector<double> local_138;
  undefined1 local_118 [56];
  longlong *local_e0;
  bool local_d8;
  TDistPoint3Triangle3<double> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  puVar1 = &this->field_0x18;
  if (this->field_0x1a == '\0') {
    pTVar2 = (this->FWNTree).Ptr;
    if (*puVar1 == '\0') {
      local_188._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_188._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_188._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      param_1 = TTransformSequence3<double>::InverseTransformPosition
                          (param_2,&local_138,(TVector<double> *)&local_188._s_0);
    }
    dVar4 = TFastWindingTree<UE::Geometry::FColliderMesh>::FastWindingNumber(pTVar2,param_1);
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
    goto LAB_14cb0794c;
  }
  if (this->field_0x28 == '\0') {
LAB_14cb077d2:
    if (*puVar1 == '\0') {
      if (this->field_0x19 != '\0') {
        local_1e8._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_1e8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_1e8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        pTVar8 = &TTransformSequence3<double>::InverseTransformPosition
                            (param_2,&local_150,(TVector<double> *)&local_1e8._s_0)->field0_0x0;
        goto LAB_14cb0784c;
      }
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8012027019833377439>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x29f,"false");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    else {
      pTVar8 = &local_1c8;
      local_1c8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_1c8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_1c8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
LAB_14cb0784c:
      local_228._s_0.X = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X;
      local_228._s_0.Y = (pTVar8->_s_0).Y;
      local_228._s_0.Z = (pTVar8->_s_0).Z;
      local_118._0_8_ = *(undefined8 *)&this->field_0x20;
      local_118._16_8_ = 0;
      local_e0 = (longlong *)0x0;
      local_d8 = false;
      iVar6 = FColliderMesh::FindNearestTriangle
                        (&this->ColliderMesh,(TVector<double> *)&local_228._s_0,&local_210,
                         (FQueryOptions *)local_118);
      if (local_118._16_8_ != 0) {
        plVar9 = (longlong *)(local_118 + 0x20);
        if (local_e0 != (longlong *)0x0) {
          plVar9 = local_e0;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (iVar6 != -1) {
        local_1a8._s_0.X = local_228._s_0.X;
        local_1a8._s_0.Y = local_228._s_0.Y;
        local_1a8._s_0.Z = local_228._s_0.Z;
        TMeshQueries<UE::Geometry::FColliderMesh>::TriangleDistance
                  (&local_c8,&this->ColliderMesh,iVar6,(TVector<double> *)&local_1a8._s_0);
        dVar4 = TDistPoint3Triangle3<double>::ComputeResult(&local_c8);
        if (dVar4 < *(double *)&this->field_0x20 * *(double *)&this->field_0x20) goto LAB_14cb07907;
      }
    }
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    pTVar2 = (this->FWNTree).Ptr;
    pTVar7 = param_1;
    if (*puVar1 == '\0') {
      local_208._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_208._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_208._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      pTVar7 = TTransformSequence3<double>::InverseTransformPosition
                         (param_2,&local_168,(TVector<double> *)&local_208._s_0);
    }
    dVar4 = TFastWindingTree<UE::Geometry::FColliderMesh>::FastWindingNumber(pTVar2,pTVar7);
    if (dVar4 <= __real_3fefae147ae147ae) goto LAB_14cb077d2;
LAB_14cb07907:
    uVar10 = (undefined4)__real_3ff0000000000000;
    uVar11 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
LAB_14cb0794c:
  return (double)CONCAT44(uVar11,uVar10);
}

// GetTriangle @ 14cb14d50

FIndex3i * __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::GetTriangle
          (FCompressedMeshSpatialWrapper *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  FColliderMesh::GetTriangle(&this->ColliderMesh,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTriangleCount @ 14cb15010

int __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::GetTriangleCount(FCompressedMeshSpatialWrapper *this)

{
  return (this->ColliderMesh).Triangles.ArrayNum;
}

// GetWorldBounds @ 14cb15b00

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::GetWorldBounds
          (FCompressedMeshSpatialWrapper *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_1)

{
  double dVar1;
  char cVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  TAxisAlignedBox3<double> *pTVar8;
  undefined1 local_res8 [8];
  code *local_78;
  undefined1 *local_70;
  TAxisAlignedBox3<double> local_68;
  TAxisAlignedBox3<double> local_38;
  
  if (this->field_0x18 == '\0') {
    local_78 = *(code **)param_1;
    pTVar8 = &local_38;
    local_70 = *(undefined1 **)&param_1->field_0x8;
  }
  else {
    local_70 = local_res8;
    pTVar8 = &local_68;
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FCompressedMeshSpatialWrapper::GetWorldBounds'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
  }
  pTVar8 = GetTransformedVertexBounds<UE::Geometry::FColliderMesh>
                     (pTVar8,&this->ColliderMesh,
                      (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                       *)&local_78);
  cVar2 = this->field_0x1a;
  dVar1 = (pTVar8->Min).field0_0x0._s_0.Y;
  dVar4 = (pTVar8->Min).field0_0x0._s_0.Z;
  dVar6 = (pTVar8->Max).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pTVar8->Min).field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (pTVar8->Max).field0_0x0._s_0.Y;
  dVar7 = (pTVar8->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar7;
  if (cVar2 != '\0') {
    dVar7 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
    dVar1 = *(double *)&this->field_0x20;
    dVar4 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y + dVar1;
    dVar6 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y - dVar1;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = (__return_storage_ptr__->Max).field0_0x0._s_0.X + dVar1;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Max).field0_0x0 = auVar3;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar7 - dVar1;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])&(__return_storage_ptr__->Min).field0_0x0 = auVar5;
    dVar4 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
         dVar1 + (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar4 - dVar1;
  }
  return __return_storage_ptr__;
}

// HasNormals @ 14cb1a9d0

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::HasNormals(FCompressedMeshSpatialWrapper *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x252,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// HasUVs @ 14cb1b080

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::HasUVs(FCompressedMeshSpatialWrapper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,599,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// IsTriangle @ 14cb22fd0

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::IsTriangle
          (FCompressedMeshSpatialWrapper *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->ColliderMesh).Triangles.ArrayNum)) {
    return true;
  }
  return false;
}

// ProcessVerticesInWorld @ 14cb292b0

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::ProcessVerticesInWorld
          (FCompressedMeshSpatialWrapper *this,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *param_1,
          TTransformSequence3<double> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  char cVar14;
  uint uVar15;
  TVector<double> *pTVar16;
  uint uVar17;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar18;
  uchar *puVar19;
  longlong lVar20;
  int iVar21;
  undefined1 local_res8 [8];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TVector<double>_u_0 local_b8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  TVector<double> local_70 [3];
  
  iVar21 = (this->ColliderMesh).Vertices.ArrayNum;
  if (this->field_0x18 == '\0') {
    uVar17 = 0;
    if (iVar21 < 1) {
      cVar14 = '\x01';
    }
    else {
      lVar20 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar17 < iVar21) {
          uVar15 = ~uVar17 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        pFVar4 = (this->ColliderMesh).Vertices.AllocatorInstance.Data;
        FVar7 = (param_2->Transforms).AllocatorInstance.SecondaryData;
        dVar5 = *(double *)(pFVar4 + lVar20 + 0x10);
        pFVar4 = pFVar4 + lVar20;
        dVar10 = *(double *)pFVar4;
        dVar9 = *(double *)(pFVar4 + 8);
        iVar21 = (param_2->Transforms).ArrayNum;
        FVar18 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
        if (FVar7 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
          FVar18 = FVar7;
        }
        puVar19 = (uchar *)((longlong)FVar18 + 0x40);
        while( true ) {
          if ((param_2->Transforms).ArrayNum != iVar21) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res8);
          }
          if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar19 + -0x40) ==
              (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
              ((longlong)iVar21 * 0x50 + (longlong)FVar18)) break;
          local_b8._s_0.X = dVar10 * *(double *)(puVar19 + -8);
          local_b8._s_0.Y = dVar9 * *(double *)puVar19;
          local_b8._s_0.Z = dVar5 * *(double *)(puVar19 + 8);
          pTVar16 = operator*<double>(local_70,(TQuaternion<double> *)(puVar19 + -0x40),
                                      (TVector<double> *)&local_b8._s_0);
          puVar1 = puVar19 + -0x20;
          puVar2 = puVar19 + -0x18;
          puVar3 = puVar19 + -0x10;
          puVar19 = puVar19 + 0x50;
          dVar10 = *(double *)puVar1 + (pTVar16->field0_0x0)._s_0.X;
          dVar9 = *(double *)puVar2 + (pTVar16->field0_0x0)._s_0.Y;
          dVar5 = *(double *)puVar3 + (pTVar16->field0_0x0)._s_0.Z;
        }
        local_d8 = SUB84(dVar10,0);
        uStack_d4 = (undefined4)((ulonglong)dVar10 >> 0x20);
        uStack_d0 = SUB84(dVar9,0);
        uStack_cc = (undefined4)((ulonglong)dVar9 >> 0x20);
        local_88 = local_d8;
        uStack_84 = uStack_d4;
        uStack_80 = uStack_d0;
        uStack_7c = uStack_cc;
        local_78 = dVar5;
        cVar14 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_88);
        if (cVar14 == '\0') {
          return false;
        }
        iVar21 = (this->ColliderMesh).Vertices.ArrayNum;
        uVar17 = uVar17 + 1;
        lVar20 = lVar20 + 0x18;
      } while ((int)uVar17 < iVar21);
    }
  }
  else {
    uVar17 = 0;
    if (iVar21 < 1) {
      return true;
    }
    lVar20 = 0;
    while( true ) {
      uVar15 = 0;
      if ((int)uVar17 < iVar21) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      pFVar6 = (this->ColliderMesh).Vertices.AllocatorInstance.Data;
      pFVar4 = pFVar6 + lVar20;
      local_a0 = *(undefined4 *)pFVar4;
      uStack_9c = *(undefined4 *)(pFVar4 + 4);
      uStack_98 = *(undefined4 *)(pFVar4 + 8);
      uStack_94 = *(undefined4 *)(pFVar4 + 0xc);
      local_90 = *(undefined8 *)(pFVar6 + lVar20 + 0x10);
      cVar13 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_a0);
      cVar14 = '\0';
      if (cVar13 == '\0') break;
      iVar21 = (this->ColliderMesh).Vertices.ArrayNum;
      uVar17 = uVar17 + 1;
      lVar20 = lVar20 + 0x18;
      if (iVar21 <= (int)uVar17) {
        return (bool)cVar13;
      }
    }
  }
  return (bool)cVar14;
}

// RayIntersection @ 14cb2a450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::RayIntersection
          (FCompressedMeshSpatialWrapper *this,TRay<double> *param_1,
          TTransformSequence3<double> *param_2,FMeshSceneRayHit *param_3)

{
  double dVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auStackY_198 [32];
  int local_168 [4];
  TVector<double>_u_0 local_158;
  double local_138;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  undefined1 auStack_b0 [32];
  double *local_90;
  undefined1 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_118._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_118._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_118._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dStack_100 = (param_1->Direction).field0_0x0._s_0.X;
  local_f8 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_f0 = (param_1->Direction).field0_0x0._s_0.Z;
  if (this->field_0x18 == '\0') {
    local_158._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    local_158._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
    local_158._s_0.Z = local_118._s_0.Z;
    TTransformSequence3<double>::InverseTransformPosition
              (param_2,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_158._s_0);
    local_158._s_0.X = (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
    local_158._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y;
    local_158._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z;
    pTVar3 = TTransformSequence3<double>::InverseTransformPosition
                       (param_2,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_158._s_0
                       );
    auStack_b0._16_8_ = 0.0;
    dVar7 = (pTVar3->field0_0x0)._s_0.X - local_130._s_0.X;
    auStack_b0._8_8_ = (pTVar3->field0_0x0)._s_0.Y - local_130._s_0.Y;
    dVar1 = (pTVar3->field0_0x0)._s_0.Z - local_130._s_0.Z;
    auVar5._0_8_ = dVar7 * dVar7;
    auVar5._8_8_ = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)auStack_b0._8_8_ * (double)auStack_b0._8_8_ + auVar5._0_8_ +
                   dVar1 * dVar1;
    auVar6 = sqrtpd(auVar5,auVar6);
    if (auVar6._0_8_ <= 0.0) {
      auStack_b0._8_8_ = 0.0;
      auStack_b0._0_8_ = 0.0;
    }
    else {
      auStack_b0._0_8_ = __real_3ff0000000000000 / auVar6._0_8_;
      auStack_b0._16_8_ = (double)auStack_b0._0_8_ * dVar1;
      auStack_b0._8_8_ = (double)auStack_b0._0_8_ * (double)auStack_b0._8_8_;
      auStack_b0._0_8_ = (double)auStack_b0._0_8_ * dVar7;
    }
    local_c8._s_0.X = local_130._s_0.X;
    local_c8._s_0.Y = local_130._s_0.Y;
    local_c8._s_0.Z = local_130._s_0.Z;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&((TVector<double>_u_0 *)auStack_b0)->_s_0,__real_3e45798ee0000000
              );
    local_118._s_0.X = local_c8._s_0.X;
    local_118._s_0.Y = local_c8._s_0.Y;
    local_118._s_0.Z = local_c8._s_0.Z;
    dStack_100 = (double)auStack_b0._0_8_;
    local_f8 = (double)auStack_b0._8_8_;
    dStack_f0 = (double)auStack_b0._16_8_;
  }
  local_c8._s_0.X = __real_7fefffffffffffff;
  local_c8._s_0.Z = 0.0;
  local_90 = (double *)0x0;
  local_88 = 0;
  bVar2 = FColliderMesh::FindNearestHitTriangle
                    (&this->ColliderMesh,(TRay<double> *)&local_118._s_0,&local_138,local_168,
                     (TVector<double> *)&local_e8._s_0,(FQueryOptions *)&local_c8._s_0);
  if (local_c8._s_0.Z != 0.0) {
    pdVar4 = &(((TVector<double>_u_0 *)auStack_b0)->_s_0).Y;
    if (local_90 != (double *)0x0) {
      pdVar4 = local_90;
    }
    (**(code **)((longlong)*pdVar4 + 0x10))();
  }
  if (bVar2) {
    param_3->HitMeshTriIndex = local_168[0];
    param_3->HitMeshSpatialWrapper = (IMeshSpatialWrapper *)this;
    if (this->field_0x18 == '\0') {
      local_158._s_0.X = dStack_100 * local_138 + local_118._s_0.X;
      local_158._s_0.Z = dStack_f0 * local_138 + local_118._s_0.Z;
      local_158._s_0.Y = local_f8 * local_138 + local_118._s_0.Y;
      TTransformSequence3<double>::TransformPosition
                (param_2,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_158._s_0);
      param_3->RayDistance =
           (local_130._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y) *
           (param_1->Direction).field0_0x0._s_0.Y +
           (local_130._s_0.X - (param_1->Origin).field0_0x0._s_0.X) *
           (param_1->Direction).field0_0x0._s_0.X +
           (local_130._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z) *
           (param_1->Direction).field0_0x0._s_0.Z;
    }
    else {
      param_3->RayDistance = local_138;
    }
    bVar2 = true;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.X = local_e8._s_0.X;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Y = local_e8._s_0.Y;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Z = local_e8._s_0.Z;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

// TriBaryInterpolateNormal @ 14cb42c80

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::TriBaryInterpolateNormal
          (FCompressedMeshSpatialWrapper *this,int param_1,TVector<double> *param_2,
          TVector<float> *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x262,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// TriBaryInterpolatePoint @ 14cb43000

TVector<double> * __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::TriBaryInterpolatePoint
          (FCompressedMeshSpatialWrapper *this,TVector<double> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x25d,L"");
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar1)();
    return pTVar4;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// TriBaryInterpolateUV @ 14cb433a0

bool __thiscall
UE::Geometry::FCompressedMeshSpatialWrapper::TriBaryInterpolateUV
          (FCompressedMeshSpatialWrapper *this,int param_1,TVector<double> *param_2,int param_3,
          TVector2<float> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                     ,0x267,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

