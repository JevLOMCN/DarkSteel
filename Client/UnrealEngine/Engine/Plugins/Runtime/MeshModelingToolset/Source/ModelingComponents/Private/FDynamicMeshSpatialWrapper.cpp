// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 16

// FDynamicMeshSpatialWrapper @ 14cac9710

FDynamicMeshSpatialWrapper * __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::FDynamicMeshSpatialWrapper
          (FDynamicMeshSpatialWrapper *this,FDynamicMesh3 *param_1)

{
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDynamicMeshSpatialWrapper_Geometry_UE__6B_;
  FDynamicMesh3::FDynamicMesh3(&this->Mesh);
  (this->AABBTree).Ptr = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->FWNTree).Ptr = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0;
  FDynamicMesh3::operator=(&this->Mesh,param_1);
  return this;
}

// AppendMesh @ 14cae9f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh
          (FDynamicMeshSpatialWrapper *this,FDynamicMesh3 *param_1,
          TTransformSequence3<double> *param_2)

{
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *pTVar1;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *pTVar2;
  undefined1 auStackY_378 [32];
  FDynamicMeshEditor local_348 [2];
  code *local_338 [2];
  undefined **local_328;
  TTransformSequence3<double> *local_320;
  undefined8 local_310;
  code *local_308 [2];
  undefined **local_2f8;
  TTransformSequence3<double> *local_2f0;
  undefined8 local_2e0;
  FMeshIndexMappings local_2d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_348[0].Mesh = param_1;
  FMeshIndexMappings::FMeshIndexMappings(&local_2d8);
  local_2e0 = 0;
  local_310 = 0;
  if ((char)this->_padding_ == '\0') {
    local_2f8 = &
                ___7__TFunction_OwnedObject_V<lambda_3>__6__AppendMesh_FDynamicMeshSpatialWrapper_Geometry_UE__UEAAXAEAVFDynamicMesh3_45_AEBV__TTransformSequence3_N_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_328 = &
                ___7__TFunction_OwnedObject_V<lambda_4>__6__AppendMesh_FDynamicMeshSpatialWrapper_Geometry_UE__UEAAXAEAVFDynamicMesh3_45_AEBV__TTransformSequence3_N_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_308[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l7::<lambda_3>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
    pTVar1 = (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *)
             local_338;
    local_338[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l7::<lambda_4>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
    pTVar2 = (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *)
             local_308;
    local_320 = param_2;
    local_2f0 = param_2;
  }
  else {
    local_328 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__4__AppendMesh_FDynamicMeshSpatialWrapper_Geometry_UE__UEAAXAEAVFDynamicMesh3_45_AEBV__TTransformSequence3_N_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2f8 = &
                ___7__TFunction_OwnedObject_V<lambda_2>__4__AppendMesh_FDynamicMeshSpatialWrapper_Geometry_UE__UEAAXAEAVFDynamicMesh3_45_AEBV__TTransformSequence3_N_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_338[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l5::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
    pTVar1 = (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *)
             local_308;
    local_308[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::AppendMesh'::__l5::<lambda_2>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
    pTVar2 = (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> *)
             local_338;
  }
  FDynamicMeshEditor::AppendMesh(local_348,&this->Mesh,&local_2d8,pTVar2,pTVar1,false);
  FMeshIndexMappings::~FMeshIndexMappings(&local_2d8);
  return;
}

// Build @ 14caed870

bool __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::Build
          (FDynamicMeshSpatialWrapper *this,FMeshSceneAdapterBuildOptions *param_1)

{
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_>_>
  *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar12;
  longlong local_18;
  undefined8 local_10;
  
  if (((this->Mesh).TriangleRefCounts.UsedCount < 1) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8012027019833377061>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x125,"Mesh.TriangleCount() > 0"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (param_1->bBuildSpatialDataStructures == false) {
    return true;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::FDynamicMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l6::__CpuProfilerEventSpecId297,"MeshScene_WrapperBuild_DMesh_AABBTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x129);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::FDynamicMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l6::__CpuProfilerEventSpecId297);
  }
  pTVar8 = ::operator_new(0xc0);
  pTVar12 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  pTVar9 = pTVar12;
  if (pTVar8 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar9 = TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
             TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(pTVar8,&this->Mesh,true);
  }
  pTVar1 = &this->AABBTree;
  if (pTVar1 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_>_>
                 *)&local_18) {
    if (pTVar9 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      puVar10 = (undefined8 *)pTVar9->_padding_;
      goto LAB_14caed961;
    }
  }
  else {
    pTVar8 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar9;
    if (pTVar8 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      puVar10 = (undefined8 *)pTVar8->_padding_;
      pTVar9 = pTVar8;
LAB_14caed961:
      (*(code *)*puVar10)(pTVar9);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') && ((char)this->_padding_ == '\0')) {
    return true;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::FDynamicMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l10::__CpuProfilerEventSpecId303,"MeshScene_WrapperBuild_DMesh_FWNTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x12f);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::FDynamicMeshSpatialWrapper::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l10::__CpuProfilerEventSpecId303);
  }
  pTVar9 = pTVar1->Ptr;
  pTVar8 = ::operator_new(0x38);
  if (pTVar8 != (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    pTVar8->Mesh = (FDynamicMesh3 *)0x0;
    pTVar8->MeshChangeStamp = 0;
    *(undefined8 *)&pTVar8->GetSplitAxis = 0;
    pTVar8->TopDownLeafMaxTriCount = 0;
    *(undefined8 *)&(pTVar8->GetSplitAxis).field_0x8 = 0x4000000000000000;
    *(undefined4 *)&(pTVar8->GetSplitAxis).field_0x10 = 2;
    pTVar8->_padding_ = (longlong)pTVar9;
    if ((pTVar9 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Tree",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                           ,0x16c,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar3 = pTVar8->_padding_;
    if ((*(int *)(lVar3 + 0xbc) < 0) ||
       (uVar11 = FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(lVar3 + 8)),
       *(ulong64 *)(lVar3 + 0x10) != uVar11)) {
      pTVar9 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)pTVar8->_padding_;
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar9,false);
      uVar11 = FDynamicMesh3::GetChangeStamp(pTVar9->Mesh);
      pTVar9->MeshChangeStamp = uVar11;
    }
    TFastWindingTree<UE::Geometry::FDynamicMesh3>::build_fast_winding_cache
              ((TFastWindingTree<UE::Geometry::FDynamicMesh3> *)pTVar8);
    *(undefined8 *)&pTVar8->GetSplitAxis = *(undefined8 *)(pTVar8->_padding_ + 0x10);
    pTVar12 = pTVar8;
  }
  pTVar2 = &this->FWNTree;
  if (pTVar2 == (TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>_>_>
                 *)&local_10) {
    if (pTVar12 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) goto LAB_14caedad0;
    pTVar9 = pTVar12;
    if (pTVar12->Mesh != (FDynamicMesh3 *)0x0) {
      FMemory::Free(pTVar12->Mesh);
    }
  }
  else {
    pTVar9 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)pTVar2->Ptr;
    pTVar2->Ptr = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)pTVar12;
    if (pTVar9 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) goto LAB_14caedad0;
    if (pTVar9->Mesh != (FDynamicMesh3 *)0x0) {
      FMemory::Free(pTVar9->Mesh);
    }
  }
  ::operator_delete(pTVar9,0x38);
LAB_14caedad0:
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// CollectSeedPoints @ 14caf62e0

void __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::CollectSeedPoints
          (FDynamicMeshSpatialWrapper *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
          *param_2)

{
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  if ((char)this->_padding_ == '\0') {
    local_18 = *(code **)param_2;
    local_10 = *(undefined1 **)&param_2->field_0x8;
  }
  else {
    local_10 = local_res8;
    local_res8[0] = 0;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::CollectSeedPoints'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
  }
  CollectSeedPointsFromMeshVertices
            (&this->Mesh,
             (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             &local_18,param_1,(double)this->_padding_,500);
  return;
}

// FastWindingNumber @ 14cb079c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

double __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::FastWindingNumber
          (FDynamicMeshSpatialWrapper *this,TVector<double> *param_1,
          TTransformSequence3<double> *param_2)

{
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *pTVar1;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  TVector<double> *pTVar7;
  TVector<double>_u_0 *pTVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStackY_298 [32];
  double local_268;
  double dStack_260;
  double local_258;
  undefined1 local_250 [8];
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  TVector<double> local_168;
  TVector<double> local_150;
  TVector<double> local_138;
  longlong local_118 [2];
  longlong local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined1 local_d8;
  TDistPoint3Triangle3<double> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  plVar9 = &this->_padding_;
  if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
    pTVar1 = (this->FWNTree).Ptr;
    if ((char)*plVar9 == '\0') {
      local_1a8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_1a8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_1a8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      pTVar7 = TTransformSequence3<double>::InverseTransformPosition
                         (param_2,&local_138,(TVector<double> *)&local_1a8._s_0);
      TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(pTVar1,false);
      local_188._s_0.X = (pTVar7->field0_0x0)._s_0.X;
      local_188._s_0.Y = (pTVar7->field0_0x0)._s_0.Y;
      pTVar8 = &local_188;
      local_188._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    }
    else {
      TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(pTVar1,false);
      local_1c8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_1c8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      pTVar8 = &local_1c8;
      local_1c8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    }
    dVar4 = TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                      (pTVar1,pTVar1->Tree->RootIndex,(TVector<double> *)&pTVar8->_s_0);
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
    goto LAB_14cb07c38;
  }
  if ((char)this->_padding_ == '\0') {
LAB_14cb07a62:
    if ((char)*plVar9 == '\0') {
      if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
        local_228._s_0.X = (param_1->field0_0x0)._s_0.X;
        local_228._s_0.Y = (param_1->field0_0x0)._s_0.Y;
        local_228._s_0.Z = (param_1->field0_0x0)._s_0.Z;
        pTVar8 = &TTransformSequence3<double>::InverseTransformPosition
                            (param_2,&local_150,(TVector<double> *)&local_228._s_0)->field0_0x0;
        goto LAB_14cb07adc;
      }
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8012027019833377193>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x1a9,"false");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        dVar4 = (double)(*pcVar3)();
        return dVar4;
      }
    }
    else {
      pTVar8 = &local_208;
      local_208._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_208._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_208._s_0.Z = (param_1->field0_0x0)._s_0.Z;
LAB_14cb07adc:
      local_268 = (((TVector<double>_u_0 *)&(pTVar8->_s_0).X)->_s_0).X;
      dStack_260 = (pTVar8->_s_0).Y;
      pTVar2 = (this->AABBTree).Ptr;
      local_258 = (pTVar8->_s_0).Z;
      local_118[0] = this->_padding_;
      local_108 = 0;
      local_e0 = (longlong *)0x0;
      local_d8 = 0;
      iVar6 = (**(code **)(pTVar2->_padding_ + 0x20))(pTVar2,&local_268,local_250,local_118);
      if (local_108 != 0) {
        plVar9 = local_f8;
        if (local_e0 != (longlong *)0x0) {
          plVar9 = local_e0;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      if (iVar6 != -1) {
        local_1e8._s_0.X = local_268;
        local_1e8._s_0.Y = dStack_260;
        local_1e8._s_0.Z = local_258;
        TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleDistance
                  (&local_c8,&this->Mesh,iVar6,(TVector<double> *)&local_1e8._s_0);
        dVar4 = TDistPoint3Triangle3<double>::ComputeResult(&local_c8);
        if (dVar4 < (double)this->_padding_ * (double)this->_padding_) goto LAB_14cb07baa;
      }
    }
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    pTVar1 = (this->FWNTree).Ptr;
    pTVar7 = param_1;
    if ((char)*plVar9 == '\0') {
      local_248._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_248._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_248._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      pTVar7 = TTransformSequence3<double>::InverseTransformPosition
                         (param_2,&local_168,(TVector<double> *)&local_248._s_0);
    }
    dVar4 = TFastWindingTree<UE::Geometry::FDynamicMesh3>::FastWindingNumber(pTVar1,pTVar7);
    if (dVar4 <= __real_3fefae147ae147ae) goto LAB_14cb07a62;
LAB_14cb07baa:
    uVar10 = (undefined4)__real_3ff0000000000000;
    uVar11 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
LAB_14cb07c38:
  return (double)CONCAT44(uVar11,uVar10);
}

// GetTriangle @ 14cb14db0

FIndex3i * __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::GetTriangle
          (FDynamicMeshSpatialWrapper *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           ((this->Mesh).Triangles.Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  iVar1 = *(int *)(lVar2 + 8 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(lVar2 + (ulonglong)(param_1 & 0x1ff) * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// GetTriangleCount @ 14cb15030

int __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::GetTriangleCount(FDynamicMeshSpatialWrapper *this)

{
  return (this->Mesh).TriangleRefCounts.UsedCount;
}

// GetWorldBounds @ 14cb15c10

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::GetWorldBounds
          (FDynamicMeshSpatialWrapper *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
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
  
  if ((char)this->_padding_ == '\0') {
    local_78 = *(code **)param_1;
    pTVar8 = &local_38;
    local_70 = *(undefined1 **)&param_1->field_0x8;
  }
  else {
    local_70 = local_res8;
    local_res8[0] = 0;
    pTVar8 = &local_68;
    local_78 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshSpatialWrapper::GetWorldBounds'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
               ::Call;
  }
  pTVar8 = GetTransformedVertexBounds<UE::Geometry::FDynamicMesh3>
                     (pTVar8,&this->Mesh,
                      (TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                       *)&local_78);
  cVar2 = *(char *)((longlong)&this->_padding_ + 2);
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
    dVar1 = (double)this->_padding_;
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

// HasNormals @ 14cb1aa20

bool __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::HasNormals(FDynamicMeshSpatialWrapper *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  
  pFVar1 = (this->Mesh).AttributeSet.Ptr;
  if (((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum))
     && (*(longlong *)(pFVar1->NormalLayers).Array.AllocatorInstance.Data != 0)) {
    return true;
  }
  return false;
}

// HasUVs @ 14cb1b0d0

bool __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::HasUVs(FDynamicMeshSpatialWrapper *this,int param_1)

{
  FDynamicMeshAttributeSet *this_00;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar1;
  
  this_00 = (this->Mesh).AttributeSet.Ptr;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar1 = FDynamicMeshAttributeSet::GetUVLayer(this_00,param_1);
    if (pTVar1 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      return true;
    }
  }
  return false;
}

// IsTriangle @ 14cb23010

bool __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::IsTriangle(FDynamicMeshSpatialWrapper *this,int param_1)

{
  if (((-1 < param_1) &&
      (param_1 < (int)((this->Mesh).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                      (this->Mesh).TriangleRefCounts.RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this->Mesh).TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    return true;
  }
  return false;
}

// ProcessVerticesInWorld @ 14cb29820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::ProcessVerticesInWorld
          (FDynamicMeshSpatialWrapper *this,
          TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *param_1,
          TTransformSequence3<double> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar4;
  double dVar5;
  double dVar6;
  FRefCountVector *pFVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 uVar10;
  TVector<double> *pTVar11;
  int iVar12;
  longlong *plVar13;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar14;
  uchar *puVar15;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  int local_1b0 [2];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  TVector<double>_u_0 local_170;
  FRefCountVector *local_158;
  double dStack_150;
  double local_148;
  TVector<double> local_140;
  undefined1 local_128 [32];
  longlong local_108 [3];
  longlong *local_f0;
  FRefCountVector *local_e8;
  double dStack_e0;
  undefined1 local_d8 [40];
  longlong *local_b0;
  undefined1 local_a8 [48];
  IndexEnumerable local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  cVar9 = '\x01';
  if ((char)this->_padding_ == '\0') {
    FDynamicMesh3::VerticesItr(&this->Mesh,(MappedEnumerable<UE::Math::TVector<double>_> *)local_a8)
    ;
    FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
              ((MappedEnumerable<UE::Math::TVector<double>_> *)local_a8,
               (MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
                *)local_128);
    local_1a8 = local_78.Vector;
    iVar12 = ((local_78.Vector)->RefCounts).CurBlock * 0x200 +
             ((local_78.Vector)->RefCounts).CurBlockUsed;
    uStack_1a0 = (double)CONCAT44(iVar12,iVar12);
    local_d8._0_8_ = 0;
    local_b0 = (longlong *)0x0;
    local_e8 = local_78.Vector;
    dStack_e0 = uStack_1a0;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_d8,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_a8);
    if ((int)local_128._8_8_ != dStack_e0._0_4_) {
      do {
        local_1b0[0] = (int)local_128._8_8_;
        Core::Private::Function::CheckCallable((void *)local_128._16_8_);
        uVar8 = local_128._16_8_;
        plVar13 = local_108;
        if (local_f0 != (longlong *)0x0) {
          plVar13 = local_f0;
        }
        uVar10 = (**(code **)(*plVar13 + 8))();
        (*(code *)uVar8)(&local_158,uVar10,local_1b0);
        FVar4 = (param_2->Transforms).AllocatorInstance.SecondaryData;
        iVar12 = (param_2->Transforms).ArrayNum;
        FVar14 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
        if (FVar4 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
          FVar14 = FVar4;
        }
        puVar15 = (uchar *)((longlong)FVar14 + 0x40);
        pFVar7 = local_158;
        dVar6 = dStack_150;
        dVar5 = local_148;
        while( true ) {
          local_1a8 = pFVar7;
          uStack_1a0 = dVar6;
          local_198 = dVar5;
          if ((param_2->Transforms).ArrayNum != iVar12) {
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_1b8);
          }
          if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar15 + -0x40) ==
              (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
              ((longlong)iVar12 * 0x50 + (longlong)FVar14)) break;
          local_170._s_0.X = (double)pFVar7 * *(double *)(puVar15 + -8);
          local_170._s_0.Y = dVar6 * *(double *)puVar15;
          local_170._s_0.Z = dVar5 * *(double *)(puVar15 + 8);
          pTVar11 = operator*<double>(&local_140,(TQuaternion<double> *)(puVar15 + -0x40),
                                      (TVector<double> *)&local_170._s_0);
          puVar1 = puVar15 + -0x20;
          puVar2 = puVar15 + -0x18;
          puVar3 = puVar15 + -0x10;
          puVar15 = puVar15 + 0x50;
          pFVar7 = (FRefCountVector *)(*(double *)puVar1 + (pTVar11->field0_0x0)._s_0.X);
          dVar6 = *(double *)puVar2 + (pTVar11->field0_0x0)._s_0.Y;
          dVar5 = *(double *)puVar3 + (pTVar11->field0_0x0)._s_0.Z;
        }
        local_188 = (undefined4)local_1a8;
        uStack_184 = local_1a8._4_4_;
        uStack_180 = (undefined4)uStack_1a0;
        uStack_17c = uStack_1a0._4_4_;
        local_178 = local_198;
        cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_188);
        if (cVar9 == '\0') break;
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_128);
      } while ((int)local_128._8_8_ != dStack_e0._0_4_);
    }
  }
  else {
    FDynamicMesh3::VerticesItr(&this->Mesh,(MappedEnumerable<UE::Math::TVector<double>_> *)local_a8)
    ;
    FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
              ((MappedEnumerable<UE::Math::TVector<double>_> *)local_a8,
               (MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
                *)local_128);
    local_1a8 = local_78.Vector;
    iVar12 = ((local_78.Vector)->RefCounts).CurBlock * 0x200 +
             ((local_78.Vector)->RefCounts).CurBlockUsed;
    uStack_1a0 = (double)CONCAT44(iVar12,iVar12);
    local_d8._0_8_ = 0;
    local_b0 = (longlong *)0x0;
    local_e8 = local_78.Vector;
    dStack_e0 = uStack_1a0;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_d8,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_a8);
    if ((int)local_128._8_8_ != dStack_e0._0_4_) {
      do {
        local_1b0[0] = (int)local_128._8_8_;
        Core::Private::Function::CheckCallable((void *)local_128._16_8_);
        uVar8 = local_128._16_8_;
        plVar13 = local_108;
        if (local_f0 != (longlong *)0x0) {
          plVar13 = local_f0;
        }
        uVar10 = (**(code **)(*plVar13 + 8))();
        (*(code *)uVar8)(&local_188,uVar10,local_1b0);
        cVar9 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_188);
        if (cVar9 == '\0') break;
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_128);
      } while ((int)local_128._8_8_ != dStack_e0._0_4_);
    }
  }
  if (local_d8._0_8_ != 0) {
    plVar13 = (longlong *)(local_d8 + 0x10);
    if (local_b0 != (longlong *)0x0) {
      plVar13 = local_b0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if ((code *)local_128._16_8_ != (code *)0x0) {
    plVar13 = local_108;
    if (local_f0 != (longlong *)0x0) {
      plVar13 = local_f0;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_a8._0_8_ != 0) {
    plVar13 = (longlong *)(local_a8 + 0x10);
    if ((longlong *)local_a8._40_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_a8._40_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  return (bool)cVar9;
}

// RayIntersection @ 14cb2aa10

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
UE::Geometry::FDynamicMeshSpatialWrapper::RayIntersection
          (FDynamicMeshSpatialWrapper *this,TRay<double> *param_1,
          TTransformSequence3<double> *param_2,FMeshSceneRayHit *param_3)

{
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  TVector<double> *pTVar5;
  double *pdVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auStack_198 [32];
  double *local_178;
  TVector<double>_u_0 *local_170;
  int local_168 [4];
  TVector<double>_u_0 local_158;
  double local_138;
  TVector<double>_u_0 local_130;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  TVector<double>_u_0 local_c8;
  undefined1 auStack_b0 [32];
  double *local_90;
  undefined1 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_118 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_110 = (param_1->Origin).field0_0x0._s_0.Y;
  pdVar6 = &(param_1->Origin).field0_0x0._s_0.Z;
  local_108 = *(undefined4 *)pdVar6;
  uStack_104 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x14);
  uStack_100 = *(undefined4 *)&(param_1->Direction).field0_0x0;
  uStack_fc = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 4);
  local_f8 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_f0 = (param_1->Direction).field0_0x0._s_0.Z;
  if ((char)this->_padding_ == '\0') {
    local_158._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    local_158._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
    local_158._s_0.Z = *pdVar6;
    TTransformSequence3<double>::InverseTransformPosition
              (param_2,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_158._s_0);
    local_158._s_0.X = (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
    local_158._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y;
    local_158._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z;
    pTVar5 = TTransformSequence3<double>::InverseTransformPosition
                       (param_2,(TVector<double> *)&local_c8._s_0,(TVector<double> *)&local_158._s_0
                       );
    auStack_b0._16_8_ = 0.0;
    dVar9 = (pTVar5->field0_0x0)._s_0.X - local_130._s_0.X;
    auStack_b0._8_8_ = (pTVar5->field0_0x0)._s_0.Y - local_130._s_0.Y;
    dVar2 = (pTVar5->field0_0x0)._s_0.Z - local_130._s_0.Z;
    auVar7._0_8_ = dVar9 * dVar9;
    auVar7._8_8_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)auStack_b0._8_8_ * (double)auStack_b0._8_8_ + auVar7._0_8_ +
                   dVar2 * dVar2;
    auVar8 = sqrtpd(auVar7,auVar8);
    if (auVar8._0_8_ <= 0.0) {
      auStack_b0._8_8_ = 0.0;
      auStack_b0._0_8_ = 0.0;
    }
    else {
      auStack_b0._0_8_ = __real_3ff0000000000000 / auVar8._0_8_;
      auStack_b0._16_8_ = (double)auStack_b0._0_8_ * dVar2;
      auStack_b0._8_8_ = (double)auStack_b0._0_8_ * (double)auStack_b0._8_8_;
      auStack_b0._0_8_ = (double)auStack_b0._0_8_ * dVar9;
    }
    local_c8._s_0.X = local_130._s_0.X;
    local_c8._s_0.Y = local_130._s_0.Y;
    local_c8._s_0.Z = (double)local_130._16_8_;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&((TVector<double>_u_0 *)auStack_b0)->_s_0,__real_3e45798ee0000000
              );
    local_118 = local_c8._s_0.X;
    dStack_110 = local_c8._s_0.Y;
    local_108 = local_c8._16_4_;
    uStack_104 = local_c8._20_4_;
    uStack_100 = auStack_b0._0_4_;
    uStack_fc = auStack_b0._4_4_;
    local_f8 = (double)auStack_b0._8_8_;
    dStack_f0 = (double)auStack_b0._16_8_;
  }
  pTVar1 = (this->AABBTree).Ptr;
  local_c8._s_0.Z = 0.0;
  local_90 = (double *)0x0;
  local_88 = 0;
  local_170 = &local_c8;
  local_178 = &local_e8;
  local_c8._s_0.X = __real_7fefffffffffffff;
  cVar3 = (**(code **)(pTVar1->_padding_ + 0x30))(pTVar1,&local_118,&local_138,local_168);
  if (local_c8._s_0.Z != 0.0) {
    pdVar6 = &(((TVector<double>_u_0 *)auStack_b0)->_s_0).Y;
    if (local_90 != (double *)0x0) {
      pdVar6 = local_90;
    }
    (**(code **)((longlong)*pdVar6 + 0x10))();
  }
  if (cVar3 == '\0') {
    bVar4 = false;
  }
  else {
    param_3->HitMeshTriIndex = local_168[0];
    param_3->HitMeshSpatialWrapper = (IMeshSpatialWrapper *)this;
    if ((char)this->_padding_ == '\0') {
      local_158._s_0.X = (double)CONCAT44(uStack_fc,uStack_100) * local_138 + local_118;
      local_158._s_0.Z = dStack_f0 * local_138 + (double)CONCAT44(uStack_104,local_108);
      local_158._s_0.Y = local_f8 * local_138 + dStack_110;
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
    bVar4 = true;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.X = local_e8;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Y = dStack_e0;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Z = local_d8;
  }
  return bVar4;
}

// TriBaryInterpolateNormal @ 14cb42d00

bool __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::TriBaryInterpolateNormal
          (FDynamicMeshSpatialWrapper *this,int param_1,TVector<double> *param_2,
          TVector<float> *param_3)

{
  FDynamicMeshAttributeSet *pFVar1;
  TDynamicMeshOverlay<float,3> *this_00;
  double local_28;
  double local_20;
  double local_18;
  
  pFVar1 = (this->Mesh).AttributeSet.Ptr;
  if (((pFVar1 != (FDynamicMeshAttributeSet *)0x0) && (0 < (pFVar1->NormalLayers).Array.ArrayNum))
     && (this_00 = *(TDynamicMeshOverlay<float,3> **)
                    (pFVar1->NormalLayers).Array.AllocatorInstance.Data,
        this_00 != (TDynamicMeshOverlay<float,3> *)0x0)) {
    TDynamicMeshOverlay<float,3>::GetTriBaryInterpolate<double>
              (this_00,param_1,(double *)param_2,&local_28);
    (param_3->field0_0x0)._s_0.X = (float)local_28;
    (param_3->field0_0x0)._s_0.Y = (float)local_20;
    (param_3->field0_0x0)._s_0.Z = (float)local_18;
    return true;
  }
  return false;
}

// TriBaryInterpolatePoint @ 14cb430c0

TVector<double> * __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::TriBaryInterpolatePoint
          (FDynamicMeshSpatialWrapper *this,TVector<double> *__return_storage_ptr__,int param_1,
          TVector<double> *param_2)

{
  FDynamicMesh3::GetTriBaryPoint
            (&this->Mesh,__return_storage_ptr__,param_1,(param_2->field0_0x0)._s_0.X,
             (param_2->field0_0x0)._s_0.Y,(param_2->field0_0x0)._s_0.Z);
  return __return_storage_ptr__;
}

// TriBaryInterpolateUV @ 14cb43420

bool __thiscall
UE::Geometry::FDynamicMeshSpatialWrapper::TriBaryInterpolateUV
          (FDynamicMeshSpatialWrapper *this,int param_1,TVector<double> *param_2,int param_3,
          TVector2<float> *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *this_00;
  longlong lVar4;
  longlong lVar5;
  TVector2<float>_u_0 TVar6;
  TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *pTVar7;
  
  this_00 = (this->Mesh).AttributeSet.Ptr;
  if (this_00 != (FDynamicMeshAttributeSet *)0x0) {
    pTVar7 = FDynamicMeshAttributeSet::GetUVLayer(this_00,param_3);
    if (pTVar7 != (TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_> *)0x0) {
      lVar4 = *(longlong *)&pTVar7->field_0x78;
      uVar3 = param_1 * 3;
      lVar5 = *(longlong *)&pTVar7->field_0x48;
      uVar1 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 >> 9) * 8) +
                       (ulonglong)(uVar3 & 0x1ff) * 4);
      uVar2 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 + 1 >> 9) * 8) +
                       (ulonglong)(uVar3 + 1 & 0x1ff) * 4);
      uVar3 = *(uint *)(*(longlong *)(lVar4 + (ulonglong)(uVar3 + 2 >> 9) * 8) +
                       (ulonglong)(uVar3 + 2 & 0x1ff) * 4);
      TVar6._s_0.Y = (float)((double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar1 * 2 + 1 & 0x1ff) * 4) *
                             (param_2->field0_0x0)._s_0.X +
                             (double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar2 * 2 + 1 & 0x1ff) * 4) *
                             (param_2->field0_0x0)._s_0.Y +
                            (double)*(float *)(*(longlong *)
                                                (lVar5 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8)
                                              + (ulonglong)(uVar3 * 2 + 1 & 0x1ff) * 4) *
                            (param_2->field0_0x0)._s_0.Z);
      TVar6._s_0.X = (float)((double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar1 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar1 * 2 & 0x1ff) * 4) *
                             (param_2->field0_0x0)._s_0.X +
                             (double)*(float *)(*(longlong *)
                                                 (lVar5 + (ulonglong)((uVar2 & 0x7fffffff) >> 8) * 8
                                                 ) + (ulonglong)(uVar2 * 2 & 0x1ff) * 4) *
                             (param_2->field0_0x0)._s_0.Y +
                            (double)*(float *)(*(longlong *)
                                                (lVar5 + (ulonglong)((uVar3 & 0x7fffffff) >> 8) * 8)
                                              + (ulonglong)(uVar3 * 2 & 0x1ff) * 4) *
                            (param_2->field0_0x0)._s_0.Z);
      param_4->field0_0x0 = TVar6;
      return true;
    }
  }
  return false;
}

