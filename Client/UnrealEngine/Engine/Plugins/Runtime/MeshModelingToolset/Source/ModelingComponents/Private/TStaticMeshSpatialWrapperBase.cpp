// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 32

// ~TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> @ 14cad1350

void __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
~TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this)

{
  TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar3;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  pTVar1 = (this->FWNTree).Ptr;
  if (pTVar1 != (TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0) {
    pFVar2 = (pTVar1->FastWindingCache).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x38);
  }
  pTVar3 = (this->AABBTree).Ptr;
  if (pTVar3 != (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  pFVar4 = (this->Adapter).Ptr;
  if (pFVar4 != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    (pFVar4->ValidPolyGroups).HashSize = 0;
    FVar5 = (pFVar4->ValidPolyGroups).Hash.SecondaryData;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar5);
    }
    TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar4->ValidPolyGroups).Elements);
    ::operator_delete(pFVar4,0xa8);
  }
  this->_padding_ = (longlong)&___7IMeshSpatialWrapper_Geometry_UE__6B_;
  return;
}

// ~TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> @ 14cad1400

void __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::~TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
           *this)

{
  TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar1;
  FScriptContainerElement *pFVar2;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar3;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar4;
  
  pTVar1 = (this->FWNTree).Ptr;
  if (pTVar1 != (TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0) {
    pFVar2 = (pTVar1->FastWindingCache).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x38);
  }
  pTVar3 = (this->AABBTree).Ptr;
  if (pTVar3 != (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0) {
    (**(code **)pTVar3->_padding_)(pTVar3,1);
  }
  pFVar4 = (this->Adapter).Ptr;
  if (pFVar4 != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    if (*(void **)&pFVar4->field_0x50 != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar4->field_0x50);
    }
    if (*(void **)&pFVar4->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar4->field_0x40);
    }
    ::operator_delete(pFVar4,0x68);
  }
  this->_padding_ = (longlong)&___7IMeshSpatialWrapper_Geometry_UE__6B_;
  return;
}

// AppendMesh @ 14cae9980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::AppendMesh
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,FDynamicMesh3 *param_1,TTransformSequence3<double> *param_2)

{
  undefined1 auStack_4f8 [32];
  FDynamicMeshEditor local_4d8 [2];
  code *local_4c8 [2];
  undefined **local_4b8;
  TTransformSequence3<double> *local_4b0;
  undefined8 local_4a0;
  TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> local_498;
  FMeshIndexMappings local_2d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  if ((this->Adapter).Ptr != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    local_4d8[0].Mesh = param_1;
    FMeshIndexMappings::FMeshIndexMappings(&local_2d8);
    TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
    TMeshWrapperAdapterd<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
              (&local_498,(this->Adapter).Ptr);
    local_4a0 = 0;
    local_4b8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__AppendMesh___TStaticMeshSpatialWrapperBase_UFMeshDescriptionTriangleMeshSurfaceAdapter_Geometry_UE___Geometry_UE__UEAAXAEAVFDynamicMesh3_45_AEBV__TTransformSequence3_N_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_4c8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::AppendMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
    local_4b0 = param_2;
    FDynamicMeshEditor::AppendMesh
              (local_4d8,(TTriangleMeshAdapter<double> *)&local_498,&local_2d8,
               (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                *)local_4c8);
    TTriangleMeshAdapter<double>::~TTriangleMeshAdapter<double>
              ((TTriangleMeshAdapter<double> *)&local_498);
    FMeshIndexMappings::~FMeshIndexMappings(&local_2d8);
  }
  return;
}

// AppendMesh @ 14cae9a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::AppendMesh(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
             *this,FDynamicMesh3 *param_1,TTransformSequence3<double> *param_2)

{
  undefined1 auStack_4f8 [32];
  FDynamicMeshEditor local_4d8 [2];
  code *local_4c8 [2];
  undefined **local_4b8;
  TTransformSequence3<double> *local_4b0;
  undefined8 local_4a0;
  TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> local_498;
  FMeshIndexMappings local_2d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4f8;
  if ((this->Adapter).Ptr != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    local_4d8[0].Mesh = param_1;
    FMeshIndexMappings::FMeshIndexMappings(&local_2d8);
    TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
    TMeshWrapperAdapterd<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
              (&local_498,(this->Adapter).Ptr);
    local_4a0 = 0;
    local_4b8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__AppendMesh___TStaticMeshSpatialWrapperBase_UFStaticMeshLODResourcesMeshSurfaceAdapter_Geometry_UE___Geometry_UE__UEAAXAEAVFDynamicMesh3_45_AEBV__TTransformSequence3_N_45__Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_4c8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::AppendMesh'::__l2::<lambda_1>,UE::Math::TVector<double>,int,UE::Math::TVector<double>_const_&>
                   ::Call;
    local_4b0 = param_2;
    FDynamicMeshEditor::AppendMesh
              (local_4d8,(TTriangleMeshAdapter<double> *)&local_498,&local_2d8,
               (TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)>
                *)local_4c8);
    TTriangleMeshAdapter<double>::~TTriangleMeshAdapter<double>
              ((TTriangleMeshAdapter<double> *)&local_498);
    FMeshIndexMappings::~FMeshIndexMappings(&local_2d8);
  }
  return;
}

// Build @ 14caecc80

bool __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::Build
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,FMeshSceneAdapterBuildOptions *param_1)

{
  TUniquePtr<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
  *pTVar2;
  TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
  *pTVar3;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar4;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar11;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar12;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar13;
  void *local_res8;
  longlong local_28;
  undefined8 local_20;
  
  if ((this->StaticMesh == (UStaticMesh *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x3ae,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 0x80))(this,&local_res8,param_1);
  pTVar1 = &this->Adapter;
  pTVar13 = (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0;
  if (pTVar1 != (TUniquePtr<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>
                 *)puVar10) {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (FMeshDescriptionTriangleMeshSurfaceAdapter *)*puVar10;
    *puVar10 = 0;
    if (pFVar4 != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
      (pFVar4->ValidPolyGroups).HashSize = 0;
      FVar5 = (pFVar4->ValidPolyGroups).Hash.SecondaryData;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar5);
      }
      TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(pFVar4->ValidPolyGroups).Elements);
      ::operator_delete(pFVar4,0xa8);
    }
  }
  if (local_res8 != (void *)0x0) {
    *(undefined4 *)((longlong)local_res8 + 0x98) = 0;
    if (*(void **)((longlong)local_res8 + 0x90) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_res8 + 0x90));
    }
    TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPolygonGroupID>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)local_res8 + 0x50));
    ::operator_delete(local_res8,0xa8);
  }
  if (pTVar1->Ptr == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    return false;
  }
  if (param_1->bBuildSpatialDataStructures == false) {
    return true;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l16::__CpuProfilerEventSpecId953,"MeshScene_WrapperBuild_StaticMesh_AABBTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x3b9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l16::__CpuProfilerEventSpecId953);
  }
  pFVar4 = pTVar1->Ptr;
  pTVar11 = ::operator_new(0xc0);
  pTVar12 = pTVar13;
  if (pTVar11 != (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0) {
    pTVar12 = TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
              TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
                        (pTVar11,pFVar4,true);
  }
  pTVar2 = &this->AABBTree;
  if (pTVar2 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
                 *)&local_28) {
    if (pTVar12 != (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0)
    {
      puVar10 = (undefined8 *)pTVar12->_padding_;
      goto LAB_14caece0b;
    }
  }
  else {
    pTVar11 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar12;
    if (pTVar11 != (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0)
    {
      puVar10 = (undefined8 *)pTVar11->_padding_;
      pTVar12 = pTVar11;
LAB_14caece0b:
      (*(code *)*puVar10)(pTVar12);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l17::__CpuProfilerEventSpecId957,"MeshScene_WrapperBuild_StaticMesh_FWNTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x3bd);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l17::__CpuProfilerEventSpecId957);
  }
  pTVar12 = pTVar2->Ptr;
  pTVar11 = ::operator_new(0x38);
  if (pTVar11 != (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0) {
    pTVar11->Mesh = (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0;
    pTVar11->MeshChangeStamp = 0;
    *(undefined8 *)&pTVar11->GetSplitAxis = 0;
    pTVar11->TopDownLeafMaxTriCount = 0;
    *(undefined8 *)&(pTVar11->GetSplitAxis).field_0x8 = 0x4000000000000000;
    *(undefined4 *)&(pTVar11->GetSplitAxis).field_0x10 = 2;
    pTVar11->_padding_ = (longlong)pTVar12;
    if ((pTVar12 == (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0)
       && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Tree",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                              ,0x16c,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pTVar13 = (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)
              pTVar11->_padding_;
    if ((pTVar13->RootIndex < 0) || (pTVar13->MeshChangeStamp != 1)) {
      TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::BuildTopDown
                (pTVar13,false);
      pTVar13->MeshChangeStamp = 1;
    }
    TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
    build_fast_winding_cache
              ((TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)pTVar11
              );
    *(undefined8 *)&pTVar11->GetSplitAxis = *(undefined8 *)(pTVar11->_padding_ + 0x10);
    pTVar13 = pTVar11;
  }
  pTVar3 = &this->FWNTree;
  if (pTVar3 == (TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>_>_>
                 *)&local_20) {
    if (pTVar13 == (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0)
    goto LAB_14caecf51;
    pTVar12 = pTVar13;
    if (pTVar13->Mesh != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
      FMemory::Free(pTVar13->Mesh);
    }
  }
  else {
    pTVar12 = (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)
              pTVar3->Ptr;
    pTVar3->Ptr = (TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)
                  pTVar13;
    if (pTVar12 == (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0)
    goto LAB_14caecf51;
    if (pTVar12->Mesh != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
      FMemory::Free(pTVar12->Mesh);
    }
  }
  ::operator_delete(pTVar12,0x38);
LAB_14caecf51:
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// Build @ 14caecf80

bool __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::Build(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this
       ,FMeshSceneAdapterBuildOptions *param_1)

{
  TUniquePtr<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>
  *pTVar1;
  TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>_>
  *pTVar2;
  TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>_>
  *pTVar3;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar10;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar11;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar12;
  void *local_res8;
  longlong local_28;
  undefined8 local_20;
  
  if ((this->StaticMesh == (UStaticMesh *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StaticMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
                         ,0x3ae,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  puVar9 = (undefined8 *)(**(code **)(this->_padding_ + 0x80))(this,&local_res8,param_1);
  pTVar1 = &this->Adapter;
  pTVar12 = (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0;
  if (pTVar1 != (TUniquePtr<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter,TDefaultDelete<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>
                 *)puVar9) {
    pFVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (FStaticMeshLODResourcesMeshSurfaceAdapter *)*puVar9;
    *puVar9 = 0;
    if (pFVar4 != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
      if (*(void **)&pFVar4->field_0x50 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar4->field_0x50);
      }
      if (*(void **)&pFVar4->field_0x40 != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar4->field_0x40);
      }
      ::operator_delete(pFVar4,0x68);
    }
  }
  if (local_res8 != (void *)0x0) {
    if (*(void **)((longlong)local_res8 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_res8 + 0x50));
    }
    if (*(void **)((longlong)local_res8 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)local_res8 + 0x40));
    }
    ::operator_delete(local_res8,0x68);
  }
  if (pTVar1->Ptr == (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    return false;
  }
  if (param_1->bBuildSpatialDataStructures == false) {
    return true;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l16::__CpuProfilerEventSpecId953,"MeshScene_WrapperBuild_StaticMesh_AABBTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x3b9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l16::__CpuProfilerEventSpecId953);
  }
  pFVar4 = pTVar1->Ptr;
  pTVar10 = ::operator_new(0xc0);
  pTVar11 = pTVar12;
  if (pTVar10 != (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0) {
    pTVar11 = TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
              TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
                        (pTVar10,pFVar4,true);
  }
  pTVar2 = &this->AABBTree;
  if (pTVar2 == (TUniquePtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>_>
                 *)&local_28) {
    if (pTVar11 != (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0) {
      puVar9 = (undefined8 *)pTVar11->_padding_;
      goto LAB_14caed0fa;
    }
  }
  else {
    pTVar10 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar11;
    if (pTVar10 != (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0) {
      puVar9 = (undefined8 *)pTVar10->_padding_;
      pTVar11 = pTVar10;
LAB_14caed0fa:
      (*(code *)*puVar9)(pTVar11);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
                ::__l17::__CpuProfilerEventSpecId957,"MeshScene_WrapperBuild_StaticMesh_FWNTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Scene\\MeshSceneAdapter.cpp"
               ,0x3bd);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_virtual_bool___cdecl_UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::Build(UE::Geometry::FMeshSceneAdapterBuildOptions_const&___ptr64)___ptr64'
               ::__l17::__CpuProfilerEventSpecId957);
  }
  pTVar11 = pTVar2->Ptr;
  pTVar10 = ::operator_new(0x38);
  if (pTVar10 != (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0) {
    pTVar10->Mesh = (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0;
    pTVar10->MeshChangeStamp = 0;
    *(undefined8 *)&pTVar10->GetSplitAxis = 0;
    pTVar10->TopDownLeafMaxTriCount = 0;
    *(undefined8 *)&(pTVar10->GetSplitAxis).field_0x8 = 0x4000000000000000;
    *(undefined4 *)&(pTVar10->GetSplitAxis).field_0x10 = 2;
    pTVar10->_padding_ = (longlong)pTVar11;
    if ((pTVar11 == (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Tree",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                              ,0x16c,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pTVar12 = (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)
              pTVar10->_padding_;
    if ((pTVar12->RootIndex < 0) || (pTVar12->MeshChangeStamp != 1)) {
      TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::BuildTopDown
                (pTVar12,false);
      pTVar12->MeshChangeStamp = 1;
    }
    TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
    build_fast_winding_cache
              ((TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)pTVar10)
    ;
    *(undefined8 *)&pTVar10->GetSplitAxis = *(undefined8 *)(pTVar10->_padding_ + 0x10);
    pTVar12 = pTVar10;
  }
  pTVar3 = &this->FWNTree;
  if (pTVar3 == (TUniquePtr<UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>,TDefaultDelete<UE::Geometry::TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>_>_>
                 *)&local_20) {
    if (pTVar12 == (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0)
    goto LAB_14caed23e;
    pTVar11 = pTVar12;
    if (pTVar12->Mesh != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
      FMemory::Free(pTVar12->Mesh);
    }
  }
  else {
    pTVar11 = (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)pTVar3->Ptr
    ;
    pTVar3->Ptr = (TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)
                  pTVar12;
    if (pTVar11 == (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0)
    goto LAB_14caed23e;
    if (pTVar11->Mesh != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
      FMemory::Free(pTVar11->Mesh);
    }
  }
  ::operator_delete(pTVar11,0x38);
LAB_14caed23e:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// CollectSeedPoints @ 14caf61c0

void __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
CollectSeedPoints(TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
                  *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
                 TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                 *param_2)

{
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar1;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> local_18;
  
  pFVar1 = (this->Adapter).Ptr;
  if (pFVar1 != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
    CollectSeedPointsFromMeshVertices<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
              (pFVar1,&local_18,param_1,500);
  }
  return;
}

// CollectSeedPoints @ 14caf6200

void __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::CollectSeedPoints(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
                    *this,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
                   TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_2)

{
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar1;
  TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> local_18;
  
  pFVar1 = (this->Adapter).Ptr;
  if (pFVar1 != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
    CollectSeedPointsFromMeshVertices<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
              (pFVar1,&local_18,param_1,500);
  }
  return;
}

// FastWindingNumber @ 14cb074f0

double __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
FastWindingNumber(TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
                  *this,TVector<double> *param_1,TTransformSequence3<double> *param_2)

{
  TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar5;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  if ((this->Adapter).Ptr == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    return 0.0;
  }
  local_68._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  this_00 = (this->FWNTree).Ptr;
  pTVar4 = TTransformSequence3<double>::InverseTransformPosition
                     (param_2,&local_28,(TVector<double> *)&local_68._s_0);
  if (this_00->Tree ==
      (TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  pTVar5 = this_00->Tree;
  if ((pTVar5->RootIndex < 0) || (pTVar5->MeshChangeStamp != 1)) {
    TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::BuildTopDown
              (pTVar5,false);
    pTVar5->MeshChangeStamp = 1;
  }
  pTVar5 = this_00->Tree;
  if (this_00->FastWindingCacheMeshChangeStamp != pTVar5->MeshChangeStamp) {
    TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
    build_fast_winding_cache(this_00);
    pTVar5 = this_00->Tree;
    this_00->FastWindingCacheMeshChangeStamp = pTVar5->MeshChangeStamp;
  }
  local_48._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  local_48._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  dVar2 = TFastWindingTree<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
          branch_fast_winding_num(this_00,pTVar5->RootIndex,(TVector<double> *)&local_48._s_0);
  return dVar2;
}

// FastWindingNumber @ 14cb07610

double __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::FastWindingNumber(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
                    *this,TVector<double> *param_1,TTransformSequence3<double> *param_2)

{
  TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  TVector<double> *pTVar4;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar5;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double> local_28;
  
  if ((this->Adapter).Ptr == (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    return 0.0;
  }
  local_68._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_68._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  this_00 = (this->FWNTree).Ptr;
  pTVar4 = TTransformSequence3<double>::InverseTransformPosition
                     (param_2,&local_28,(TVector<double> *)&local_68._s_0);
  if (this_00->Tree ==
      (TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Tree",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\FastWinding.h"
                       ,0x16c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  pTVar5 = this_00->Tree;
  if ((pTVar5->RootIndex < 0) || (pTVar5->MeshChangeStamp != 1)) {
    TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::BuildTopDown
              (pTVar5,false);
    pTVar5->MeshChangeStamp = 1;
  }
  pTVar5 = this_00->Tree;
  if (this_00->FastWindingCacheMeshChangeStamp != pTVar5->MeshChangeStamp) {
    TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
    build_fast_winding_cache(this_00);
    pTVar5 = this_00->Tree;
    this_00->FastWindingCacheMeshChangeStamp = pTVar5->MeshChangeStamp;
  }
  local_48._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  local_48._s_0.Y = (pTVar4->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  dVar2 = TFastWindingTree<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>::
          branch_fast_winding_num(this_00,pTVar5->RootIndex,(TVector<double> *)&local_48._s_0);
  return dVar2;
}

// GetTriangle @ 14cb14c90

FIndex3i * __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::GetTriangle
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FMeshDescriptionTriangleMeshSurfaceAdapter *this_00;
  FIndex3i_u_0 *pFVar2;
  FIndex3i_u_0 local_18;
  
  this_00 = (this->Adapter).Ptr;
  if (this_00 == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    local_18._0_8_ = 0xffffffffffffffff;
    pFVar2 = &local_18;
    local_18._s_0.C = -1;
  }
  else {
    pFVar2 = &FMeshDescriptionTriangleMeshAdapter::GetTriangle
                        ((FMeshDescriptionTriangleMeshAdapter *)this_00,(FIndex3i *)&local_18._s_0,
                         param_1)->field0_0x0;
  }
  iVar1 = (pFVar2->_s_0).C;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(pFVar2->_s_0).A;
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// GetTriangle @ 14cb14cf0

FIndex3i * __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::GetTriangle(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
              *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  FIndex3i_u_0 *pFVar2;
  FIndex3i_u_0 local_18;
  
  this_00 = (FStaticMeshLODResourcesMeshAdapter *)(this->Adapter).Ptr;
  if (this_00 == (FStaticMeshLODResourcesMeshAdapter *)0x0) {
    local_18._0_8_ = 0xffffffffffffffff;
    pFVar2 = &local_18;
    local_18._s_0.C = -1;
  }
  else {
    pFVar2 = &FStaticMeshLODResourcesMeshAdapter::GetTriangle
                        (this_00,(FIndex3i *)&local_18._s_0,param_1)->field0_0x0;
  }
  iVar1 = (pFVar2->_s_0).C;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(pFVar2->_s_0).A;
  (__return_storage_ptr__->field0_0x0)._s_0.C = iVar1;
  return __return_storage_ptr__;
}

// GetTriangleCount @ 14cb14f80

int __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
GetTriangleCount(TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
                 *this)

{
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar1;
  FMeshElementContainer *pFVar2;
  
  pFVar1 = (this->Adapter).Ptr;
  if (pFVar1 == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    return 0;
  }
  if (pFVar1->bHasInvalidPolyGroup != false) {
    return pFVar1->NumValidTriangles;
  }
  pFVar2 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar1->_padding_ + 0x70),0);
  return (pFVar2->BitArray).NumBits - pFVar2->NumHoles;
}

// GetTriangleCount @ 14cb14fd0

int __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::GetTriangleCount(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
                   *this)

{
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar1;
  char cVar2;
  
  pFVar1 = (this->Adapter).Ptr;
  if ((pFVar1 != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) && (*(longlong *)pFVar1 != 0)) {
    cVar2 = (**(code **)(*(longlong *)(*(longlong *)pFVar1 + 0x250) + 0x30))();
    if (cVar2 != '\0') {
      return *(int *)&pFVar1->field_0x60;
    }
  }
  return 0;
}

// GetWorldBounds @ 14cb15760

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
GetWorldBounds(TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
               *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
              TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
              *param_1)

{
  double *pdVar1;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  FMeshElementContainer *pFVar5;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar6;
  int iVar7;
  int iVar8;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  pFVar2 = (this->Adapter).Ptr;
  if (pFVar2 != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    pcVar3 = *(code **)param_1;
    uVar4 = *(undefined8 *)&param_1->field_0x8;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
    pFVar5 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar2->_padding_ + 0x50),0);
    iVar8 = 0;
    iVar7 = (pFVar5->BitArray).NumBits - pFVar5->NumHoles;
    if (0 < iVar7) {
      do {
        pFVar5 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar2->_padding_ + 0x50),0);
        if (iVar8 < (pFVar5->BitArray).NumBits - pFVar5->NumHoles) {
          this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                              ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                               pFVar2->_padding_,0);
          pTVar6 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar8)
          ;
          local_38 = (double)(pTVar6->field0_0x0)._s_0.Z * (double)pFVar2->_padding_;
          local_40 = (double)(pTVar6->field0_0x0)._s_0.Y * (double)pFVar2->_padding_;
          local_48 = (double)(pTVar6->field0_0x0)._s_0.X * (double)pFVar2->_padding_;
          (*pcVar3)(&local_30,uVar4,&local_48);
          if (local_30 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_30;
          }
          if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= local_30 &&
              local_30 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_30;
          }
          if (local_28 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_28;
          }
          pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
          if (*pdVar1 <= local_28 && local_28 != *pdVar1) {
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_28;
          }
          if (local_20 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_20;
          }
          pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
          if (*pdVar1 <= local_20 && local_20 != *pdVar1) {
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_20;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar7);
    }
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  return __return_storage_ptr__;
}

// GetWorldBounds @ 14cb15920

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::GetWorldBounds(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
                 *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
                TFunctionRef<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                *param_1)

{
  double *pdVar1;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  pFVar2 = (this->Adapter).Ptr;
  if (pFVar2 != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    pcVar3 = *(code **)param_1;
    uVar4 = *(undefined8 *)&param_1->field_0x8;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
    if ((*(longlong *)pFVar2 != 0) &&
       (bVar6 = FPositionVertexBuffer::GetAllowCPUAccess
                          ((FPositionVertexBuffer *)(*(longlong *)pFVar2 + 0x188)), bVar6)) {
      iVar7 = FStaticMeshLODResources::GetNumVertices(*(FStaticMeshLODResources **)pFVar2);
      iVar10 = 0;
      if (0 < iVar7) {
        do {
          if ((((-1 < iVar10) && (*(longlong *)pFVar2 != 0)) &&
              (bVar6 = FPositionVertexBuffer::GetAllowCPUAccess
                                 ((FPositionVertexBuffer *)(*(longlong *)pFVar2 + 0x188)), bVar6))
             && (iVar8 = FStaticMeshLODResources::GetNumVertices
                                   (*(FStaticMeshLODResources **)pFVar2), iVar10 < iVar8)) {
            uVar9 = (ulonglong)(uint)(iVar10 * *(int *)(*(longlong *)pFVar2 + 0x1c8));
            lVar5 = *(longlong *)(*(longlong *)pFVar2 + 0x1c0);
            local_38 = (double)*(float *)(uVar9 + 8 + lVar5) * *(double *)&pFVar2->field_0x18;
            local_40 = (double)*(float *)(uVar9 + 4 + lVar5) * *(double *)&pFVar2->field_0x10;
            local_48 = (double)*(float *)(uVar9 + lVar5) * *(double *)&pFVar2->field_0x8;
            (*pcVar3)(&local_30,uVar4,&local_48);
            if (local_30 < (__return_storage_ptr__->Min).field0_0x0._s_0.X) {
              (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_30;
            }
            if ((__return_storage_ptr__->Max).field0_0x0._s_0.X <= local_30 &&
                local_30 != (__return_storage_ptr__->Max).field0_0x0._s_0.X) {
              (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_30;
            }
            if (local_28 < (__return_storage_ptr__->Min).field0_0x0._s_0.Y) {
              (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_28;
            }
            pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Y;
            if (*pdVar1 <= local_28 && local_28 != *pdVar1) {
              (__return_storage_ptr__->Max).field0_0x0._s_0.Y = local_28;
            }
            if (local_20 < (__return_storage_ptr__->Min).field0_0x0._s_0.Z) {
              (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_20;
            }
            pdVar1 = &(__return_storage_ptr__->Max).field0_0x0._s_0.Z;
            if (*pdVar1 <= local_20 && local_20 != *pdVar1) {
              (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_20;
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar7);
      }
    }
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = -1.7976931348623157e+308;
  return __return_storage_ptr__;
}

// HasNormals @ 14cb1a990

bool __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::HasNormals
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this)

{
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar1;
  
  pFVar1 = (this->Adapter).Ptr;
  if (pFVar1 != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    return pFVar1->_padding_ != 0;
  }
  return false;
}

// HasNormals @ 14cb1a9b0

bool __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::HasNormals(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
             *this)

{
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar1;
  longlong lVar2;
  char cVar3;
  
  pFVar1 = (this->Adapter).Ptr;
  if (pFVar1 == (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    return false;
  }
  lVar2 = *(longlong *)pFVar1;
  if (((lVar2 != 0) && (*(longlong **)(lVar2 + 0x140) != (longlong *)0x0)) &&
     (*(longlong *)(lVar2 + 0x150) != 0)) {
    cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x140) + 0x58))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x150) + 0x58))();
      if ((cVar3 != '\0') && (*(longlong *)(*(longlong *)pFVar1 + 0x160) != 0)) {
        return true;
      }
    }
  }
  return false;
}

// HasUVs @ 14cb1b020

bool __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::HasUVs
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,int param_1)

{
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar1;
  
  pFVar1 = (this->Adapter).Ptr;
  if ((((pFVar1 != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) && (pFVar1->_padding_ != 0))
      && (pFVar1->_padding_ != 0)) &&
     ((-1 < param_1 && (param_1 < *(int *)(*(longlong *)(pFVar1->_padding_ + 0x60) + 0x88))))) {
    return true;
  }
  return false;
}

// HasUVs @ 14cb1b060

bool __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::HasUVs(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
         *this,int param_1)

{
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar1;
  longlong lVar2;
  char cVar3;
  
  pFVar1 = (this->Adapter).Ptr;
  if (pFVar1 == (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    return false;
  }
  lVar2 = *(longlong *)pFVar1;
  if (((lVar2 != 0) && (*(longlong **)(lVar2 + 0x140) != (longlong *)0x0)) &&
     (*(longlong *)(lVar2 + 0x150) != 0)) {
    cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x140) + 0x58))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + 0x150) + 0x58))();
      if (((cVar3 != '\0') && (*(longlong *)(*(longlong *)pFVar1 + 0x168) != 0)) &&
         ((param_1 < *(int *)(*(longlong *)pFVar1 + 0x178) && (-1 < param_1)))) {
        return true;
      }
    }
  }
  return false;
}

// IsTriangle @ 14cb22f50

bool __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::IsTriangle
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,int param_1)

{
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMeshElementContainer *pFVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  
  pFVar1 = (this->Adapter).Ptr;
  if (pFVar1 == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    return false;
  }
  if (pFVar1->bHasInvalidPolyGroup == false) {
    if (-1 < param_1) {
      pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar1->_padding_ + 0x70),0);
      if (param_1 < (pFVar6->BitArray).NumBits - pFVar6->NumHoles) {
        return true;
      }
    }
    return false;
  }
  lVar2 = *(longlong *)(pFVar1->_padding_ + 0xe8);
  if (*(int *)(lVar2 + 0x38) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  plVar9 = *(longlong **)(lVar2 + 0x30);
  if (*(longlong **)(lVar2 + 0x30) == (longlong *)0x0) {
    plVar9 = (longlong *)(lVar2 + 0x18);
  }
  uVar10 = param_1 * (int)plVar9[2];
  uVar8 = 0;
  if ((int)uVar10 < (int)plVar9[1]) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar8 = *(uint *)(*plVar9 + (longlong)(int)uVar10 * 4);
  if (*(int *)&(pFVar1->ValidPolyGroups).Elements.field_0x8 !=
      *(int *)&(pFVar1->ValidPolyGroups).Elements.field_0x34) {
    FVar11 = (pFVar1->ValidPolyGroups).Hash.SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&(pFVar1->ValidPolyGroups).Hash;
    }
    iVar7 = *(int *)((longlong)FVar11 +
                    (ulonglong)((pFVar1->ValidPolyGroups).HashSize - 1U & uVar8) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&(pFVar1->ValidPolyGroups).Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar7 * 0xc) == uVar8) goto LAB_14cb2319c;
        iVar7 = *(int *)(lVar2 + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  iVar7 = -1;
LAB_14cb2319c:
  return iVar7 != -1;
}

// IsTriangle @ 14cb22f70

bool __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::IsTriangle(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
             *this,int param_1)

{
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar1;
  char cVar2;
  
  pFVar1 = (this->Adapter).Ptr;
  if (((pFVar1 != (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) && (-1 < param_1)) &&
     (*(longlong *)pFVar1 != 0)) {
    cVar2 = (**(code **)(*(longlong *)(*(longlong *)pFVar1 + 0x250) + 0x30))();
    if ((cVar2 != '\0') && (param_1 < *(int *)&pFVar1->field_0x60)) {
      return true;
    }
  }
  return false;
}

// ProcessVerticesInWorld @ 14cb28e10

bool __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
ProcessVerticesInWorld
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *param_1,
          TTransformSequence3<double> *param_2)

{
  int iVar1;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar2;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  FMeshElementContainer *pFVar8;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  TVector<float> *pTVar9;
  TVector<double> *pTVar10;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar11;
  uchar *puVar12;
  int iVar13;
  int iVar14;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_c8 [2];
  double local_98;
  undefined1 local_88 [16];
  double local_78;
  TVector<double> local_70 [3];
  
  pFVar2 = (this->Adapter).Ptr;
  cVar7 = '\x01';
  if (pFVar2 == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    return true;
  }
  pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(pFVar2->_padding_ + 0x50),0);
  iVar13 = 0;
  iVar14 = (pFVar8->BitArray).NumBits - pFVar8->NumHoles;
  if (iVar14 < 1) {
    cVar7 = '\x01';
  }
  else {
    do {
      if (cVar7 == '\0') {
        return false;
      }
      if ((-1 < iVar13) &&
         (pFVar8 = FMeshElementChannels::Get
                             (*(FMeshElementChannels **)(((this->Adapter).Ptr)->_padding_ + 0x50),0)
         , iVar13 < (pFVar8->BitArray).NumBits - pFVar8->NumHoles)) {
        pFVar2 = (this->Adapter).Ptr;
        this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)pFVar2->_padding_,
                             0);
        pTVar9 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar13);
        FVar3 = (param_2->Transforms).AllocatorInstance.SecondaryData;
        iVar1 = (param_2->Transforms).ArrayNum;
        dVar4 = (double)(pTVar9->field0_0x0)._s_0.Z * (double)pFVar2->_padding_;
        dVar5 = (double)(pTVar9->field0_0x0)._s_0.X * (double)pFVar2->_padding_;
        dVar6 = (double)(pTVar9->field0_0x0)._s_0.Y * (double)pFVar2->_padding_;
        FVar11 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
        if (FVar3 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
          FVar11 = FVar3;
        }
        puVar12 = (uchar *)((longlong)FVar11 + 0x40);
        while( true ) {
          local_98 = dVar4;
          if ((param_2->Transforms).ArrayNum != iVar1) {
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res8);
          }
          if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar12 + -0x40) ==
              (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
              ((longlong)iVar1 * 0x50 + (longlong)FVar11)) break;
          local_c8[0]._0_8_ = dVar5 * *(double *)(puVar12 + -8);
          local_c8[0]._8_8_ = dVar6 * *(double *)puVar12;
          local_c8[0]._16_8_ = dVar4 * *(double *)(puVar12 + 8);
          pTVar10 = operator*<double>(local_70,(TQuaternion<double> *)(puVar12 + -0x40),
                                      (TVector<double> *)&local_c8[0]._s_0);
          dVar4 = (pTVar10->field0_0x0)._s_0.Z + *(double *)(puVar12 + -0x10);
          dVar6 = (pTVar10->field0_0x0)._s_0.Y + *(double *)(puVar12 + -0x18);
          dVar5 = *(double *)(puVar12 + -0x20) + (pTVar10->field0_0x0)._s_0.X;
          puVar12 = puVar12 + 0x50;
        }
        local_88._8_4_ = SUB84(dVar6,0);
        local_88._0_8_ = dVar5;
        local_88._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_78 = local_98;
        cVar7 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar14);
  }
  return (bool)cVar7;
}

// ProcessVerticesInWorld @ 14cb29050

bool __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::ProcessVerticesInWorld
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
           *this,TFunctionRef<bool___cdecl(UE::Math::TVector<double>_const_&)> *param_1,
          TTransformSequence3<double> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  uchar *puVar3;
  FStaticMeshLODResourcesMeshSurfaceAdapter *pFVar4;
  longlong lVar5;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  ForElementType<UE::Geometry::TTransformSRT3<double>_> FVar16;
  uchar *puVar17;
  int iVar18;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_c8 [2];
  double local_98;
  undefined1 local_88 [16];
  double local_78;
  TVector<double> local_70 [3];
  
  pFVar4 = (this->Adapter).Ptr;
  cVar11 = '\x01';
  if (pFVar4 == (FStaticMeshLODResourcesMeshSurfaceAdapter *)0x0) {
    return true;
  }
  iVar18 = 0;
  if ((*(longlong *)pFVar4 == 0) ||
     (bVar10 = FPositionVertexBuffer::GetAllowCPUAccess
                         ((FPositionVertexBuffer *)(*(longlong *)pFVar4 + 0x188)), !bVar10)) {
    iVar12 = 0;
  }
  else {
    iVar12 = FStaticMeshLODResources::GetNumVertices(*(FStaticMeshLODResources **)pFVar4);
  }
  if (iVar12 < 1) {
    cVar11 = '\x01';
  }
  else {
    do {
      if (cVar11 == '\0') {
        return false;
      }
      pFVar4 = (this->Adapter).Ptr;
      if ((((-1 < iVar18) && (lVar5 = *(longlong *)pFVar4, lVar5 != 0)) &&
          (bVar10 = FPositionVertexBuffer::GetAllowCPUAccess
                              ((FPositionVertexBuffer *)(lVar5 + 0x188)), bVar10)) &&
         (iVar13 = FStaticMeshLODResources::GetNumVertices(*(FStaticMeshLODResources **)pFVar4),
         iVar18 < iVar13)) {
        pFVar4 = (this->Adapter).Ptr;
        uVar15 = (ulonglong)(uint)(iVar18 * *(int *)(*(longlong *)pFVar4 + 0x1c8));
        lVar5 = *(longlong *)(*(longlong *)pFVar4 + 0x1c0);
        FVar6 = (param_2->Transforms).AllocatorInstance.SecondaryData;
        iVar13 = (param_2->Transforms).ArrayNum;
        dVar7 = (double)*(float *)(uVar15 + 8 + lVar5) * *(double *)&pFVar4->field_0x18;
        dVar8 = (double)*(float *)(uVar15 + lVar5) * *(double *)&pFVar4->field_0x8;
        dVar9 = (double)*(float *)(uVar15 + 4 + lVar5) * *(double *)&pFVar4->field_0x10;
        FVar16 = (ForElementType<UE::Geometry::TTransformSRT3<double>_>)param_2;
        if (FVar6 != (ForElementType<UE::Geometry::TTransformSRT3<double>_>)0x0) {
          FVar16 = FVar6;
        }
        puVar17 = (uchar *)((longlong)FVar16 + 0x40);
        while( true ) {
          local_98 = dVar7;
          if ((param_2->Transforms).ArrayNum != iVar13) {
            `TCheckedPointerIterator<UE::Geometry::TTransformSRT3<double>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res8);
          }
          if ((ForElementType<UE::Geometry::TTransformSRT3<double>_> *)(puVar17 + -0x40) ==
              (ForElementType<UE::Geometry::TTransformSRT3<double>_> *)
              ((longlong)iVar13 * 0x50 + (longlong)FVar16)) break;
          local_c8[0]._0_8_ = dVar8 * *(double *)(puVar17 + -8);
          local_c8[0]._8_8_ = dVar9 * *(double *)puVar17;
          local_c8[0]._16_8_ = dVar7 * *(double *)(puVar17 + 8);
          pTVar14 = operator*<double>(local_70,(TQuaternion<double> *)(puVar17 + -0x40),
                                      (TVector<double> *)&local_c8[0]._s_0);
          puVar1 = puVar17 + -0x10;
          puVar2 = puVar17 + -0x20;
          puVar3 = puVar17 + -0x18;
          puVar17 = puVar17 + 0x50;
          dVar7 = *(double *)puVar1 + (pTVar14->field0_0x0)._s_0.Z;
          dVar8 = *(double *)puVar2 + (pTVar14->field0_0x0)._s_0.X;
          dVar9 = *(double *)puVar3 + (pTVar14->field0_0x0)._s_0.Y;
        }
        local_88._8_4_ = SUB84(dVar9,0);
        local_88._0_8_ = dVar8;
        local_88._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        local_78 = local_98;
        cVar11 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_88);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < iVar12);
  }
  return (bool)cVar11;
}

// RayIntersection @ 14cb29ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
RayIntersection(TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
                *this,TRay<double> *param_1,TTransformSequence3<double> *param_2,
               FMeshSceneRayHit *param_3)

{
  double dVar1;
  double dVar2;
  TMeshAABBTree3<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter> *pTVar3;
  double dVar4;
  char cVar5;
  TVector<double> *pTVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined8 *local_180;
  int local_178 [4];
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  double local_130;
  double dStack_128;
  double local_120;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  TVector<double> local_e0;
  undefined8 local_c8 [2];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_168._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_168._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_168._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  TTransformSequence3<double>::InverseTransformPosition
            (param_2,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0);
  local_168._s_0.X = (param_1->Origin).field0_0x0._s_0.X + (param_1->Direction).field0_0x0._s_0.X;
  local_168._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y;
  local_168._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z;
  pTVar6 = TTransformSequence3<double>::InverseTransformPosition
                     (param_2,&local_e0,(TVector<double> *)&local_168._s_0);
  local_118._s_0.Z = 0.0;
  dVar11 = (pTVar6->field0_0x0)._s_0.X - local_148._s_0.X;
  dVar12 = (pTVar6->field0_0x0)._s_0.Y - local_148._s_0.Y;
  dVar4 = (pTVar6->field0_0x0)._s_0.Z - local_148._s_0.Z;
  auVar8._0_8_ = dVar11 * dVar11;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar12 * dVar12 + auVar8._0_8_ + dVar4 * dVar4;
  auVar9 = sqrtpd(auVar8,auVar9);
  if (auVar9._0_8_ <= 0.0) {
    local_118._s_0.Y = 0.0;
    local_118._s_0.X = 0.0;
  }
  else {
    dVar10 = __real_3ff0000000000000 / auVar9._0_8_;
    local_118._s_0.Z = dVar10 * dVar4;
    local_118._s_0.Y = dVar10 * dVar12;
    local_118._s_0.X = dVar10 * dVar11;
  }
  local_130 = local_148._s_0.X;
  dStack_128 = local_148._s_0.Y;
  local_120 = local_148._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_118._s_0,__real_3e45798ee0000000);
  pTVar3 = (this->AABBTree).Ptr;
  local_b8 = 0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_180 = local_c8;
  local_188 = &local_f8;
  local_c8[0] = __real_7fefffffffffffff;
  cVar5 = (**(code **)(pTVar3->_padding_ + 0x30))(pTVar3,&local_130,&local_100,local_178);
  if (local_b8 != 0) {
    plVar7 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar7 = local_90;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (cVar5 != '\0') {
    param_3->HitMeshTriIndex = local_178[0];
    param_3->HitMeshSpatialWrapper = (IMeshSpatialWrapper *)this;
    local_168._s_0.X = local_118._s_0.X * local_100 + local_130;
    local_168._s_0.Z = local_118._s_0.Z * local_100 + local_120;
    local_168._s_0.Y = local_118._s_0.Y * local_100 + dStack_128;
    TTransformSequence3<double>::TransformPosition
              (param_2,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0);
    dVar4 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar11 = (param_1->Origin).field0_0x0._s_0.Z;
    dVar12 = (param_1->Origin).field0_0x0._s_0.X;
    dVar10 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar2 = (param_1->Direction).field0_0x0._s_0.X;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.X = local_f8;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Y = dStack_f0;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Z = local_e8;
    param_3->RayDistance =
         (local_148._s_0.X - dVar12) * dVar2 + (local_148._s_0.Y - dVar4) * dVar10 +
         (local_148._s_0.Z - dVar11) * dVar1;
  }
  return cVar5 != '\0';
}

// RayIntersection @ 14cb2a1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::RayIntersection(TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
                  *this,TRay<double> *param_1,TTransformSequence3<double> *param_2,
                 FMeshSceneRayHit *param_3)

{
  double dVar1;
  double dVar2;
  TMeshAABBTree3<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter> *pTVar3;
  double dVar4;
  char cVar5;
  TVector<double> *pTVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined8 *local_180;
  int local_178 [4];
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  double local_130;
  double dStack_128;
  double local_120;
  TVector<double>_u_0 local_118;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  TVector<double> local_e0;
  undefined8 local_c8 [2];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_168._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_168._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_168._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  TTransformSequence3<double>::InverseTransformPosition
            (param_2,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0);
  local_168._s_0.X = (param_1->Origin).field0_0x0._s_0.X + (param_1->Direction).field0_0x0._s_0.X;
  local_168._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y;
  local_168._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z;
  pTVar6 = TTransformSequence3<double>::InverseTransformPosition
                     (param_2,&local_e0,(TVector<double> *)&local_168._s_0);
  local_118._s_0.Z = 0.0;
  dVar11 = (pTVar6->field0_0x0)._s_0.X - local_148._s_0.X;
  dVar12 = (pTVar6->field0_0x0)._s_0.Y - local_148._s_0.Y;
  dVar4 = (pTVar6->field0_0x0)._s_0.Z - local_148._s_0.Z;
  auVar8._0_8_ = dVar11 * dVar11;
  auVar8._8_8_ = 0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar12 * dVar12 + auVar8._0_8_ + dVar4 * dVar4;
  auVar9 = sqrtpd(auVar8,auVar9);
  if (auVar9._0_8_ <= 0.0) {
    local_118._s_0.Y = 0.0;
    local_118._s_0.X = 0.0;
  }
  else {
    dVar10 = __real_3ff0000000000000 / auVar9._0_8_;
    local_118._s_0.Z = dVar10 * dVar4;
    local_118._s_0.Y = dVar10 * dVar12;
    local_118._s_0.X = dVar10 * dVar11;
  }
  local_130 = local_148._s_0.X;
  dStack_128 = local_148._s_0.Y;
  local_120 = local_148._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_118._s_0,__real_3e45798ee0000000);
  pTVar3 = (this->AABBTree).Ptr;
  local_b8 = 0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_180 = local_c8;
  local_188 = &local_f8;
  local_c8[0] = __real_7fefffffffffffff;
  cVar5 = (**(code **)(pTVar3->_padding_ + 0x30))(pTVar3,&local_130,&local_100,local_178);
  if (local_b8 != 0) {
    plVar7 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar7 = local_90;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (cVar5 != '\0') {
    param_3->HitMeshTriIndex = local_178[0];
    param_3->HitMeshSpatialWrapper = (IMeshSpatialWrapper *)this;
    local_168._s_0.X = local_118._s_0.X * local_100 + local_130;
    local_168._s_0.Z = local_118._s_0.Z * local_100 + local_120;
    local_168._s_0.Y = local_118._s_0.Y * local_100 + dStack_128;
    TTransformSequence3<double>::TransformPosition
              (param_2,(TVector<double> *)&local_148._s_0,(TVector<double> *)&local_168._s_0);
    dVar4 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar11 = (param_1->Origin).field0_0x0._s_0.Z;
    dVar12 = (param_1->Origin).field0_0x0._s_0.X;
    dVar10 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
    dVar2 = (param_1->Direction).field0_0x0._s_0.X;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.X = local_f8;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Y = dStack_f0;
    (param_3->HitMeshBaryCoords).field0_0x0._s_0.Z = local_e8;
    param_3->RayDistance =
         (local_148._s_0.X - dVar12) * dVar2 + (local_148._s_0.Y - dVar4) * dVar10 +
         (local_148._s_0.Z - dVar11) * dVar1;
  }
  return cVar5 != '\0';
}

// TriBaryInterpolateNormal @ 14cb428f0

bool __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TriBaryInterpolateNormal
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,int param_1,TVector<double> *param_2,TVector<float> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FMeshDescriptionTriangleMeshSurfaceAdapter *pFVar7;
  int iVar8;
  bool bVar9;
  FVertexInstanceID *pFVar10;
  TVector<float> *pTVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_b4;
  float fStack_a4;
  float fStack_94;
  FIndex3i local_88;
  TVector<float> local_78;
  TVector<float> local_6c;
  TVector<float> local_60 [6];
  
  pFVar7 = (this->Adapter).Ptr;
  if ((pFVar7 == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) ||
     (((TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_const_> *)&pFVar7->_padding_)
      ->ArrayPtr == (FMeshAttributeArraySetBase *)0x0)) {
    bVar9 = false;
  }
  else {
    FMeshDescriptionTriangleMeshAdapter::GetTriangle
              ((FMeshDescriptionTriangleMeshAdapter *)pFVar7,&local_88,param_1);
    pFVar7 = (this->Adapter).Ptr;
    iVar8 = param_1 * 3;
    pFVar10 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                        ((TArrayView<FVertexInstanceID_const_,int> *)&pFVar7->_padding_,iVar8);
    pTVar11 = FMeshDescriptionTriangleMeshAdapter::GetNormal
                        ((FMeshDescriptionTriangleMeshAdapter *)pFVar7,&local_78,(int)*pFVar10);
    uVar1 = *(undefined8 *)&pTVar11->field0_0x0;
    fVar4 = (pTVar11->field0_0x0)._s_0.Z;
    pFVar10 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                        ((TArrayView<FVertexInstanceID_const_,int> *)&pFVar7->_padding_,iVar8 + 1);
    pTVar11 = FMeshDescriptionTriangleMeshAdapter::GetNormal
                        ((FMeshDescriptionTriangleMeshAdapter *)pFVar7,&local_6c,(int)*pFVar10);
    uVar2 = *(undefined8 *)&pTVar11->field0_0x0;
    fVar5 = (pTVar11->field0_0x0)._s_0.Z;
    pFVar10 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                        ((TArrayView<FVertexInstanceID_const_,int> *)&pFVar7->_padding_,iVar8 + 2);
    pTVar11 = FMeshDescriptionTriangleMeshAdapter::GetNormal
                        ((FMeshDescriptionTriangleMeshAdapter *)pFVar7,local_60,(int)*pFVar10);
    uVar3 = *(undefined8 *)&pTVar11->field0_0x0;
    fVar6 = (pTVar11->field0_0x0)._s_0.Z;
    bVar9 = true;
    fVar14 = (float)(param_2->field0_0x0)._s_0.Y;
    fVar12 = (float)(param_2->field0_0x0)._s_0.X;
    fVar13 = (float)(param_2->field0_0x0)._s_0.Z;
    (param_3->field0_0x0)._s_0.X =
         fVar14 * (float)uVar2 + fVar12 * (float)uVar1 + fVar13 * (float)uVar3;
    fStack_a4 = (float)((ulonglong)uVar1 >> 0x20);
    fStack_b4 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_94 = (float)((ulonglong)uVar3 >> 0x20);
    (param_3->field0_0x0)._s_0.Y = fVar14 * fStack_b4 + fVar12 * fStack_a4 + fVar13 * fStack_94;
    (param_3->field0_0x0)._s_0.Z = fVar14 * fVar5 + fVar12 * fVar4 + fVar13 * fVar6;
  }
  return bVar9;
}

// TriBaryInterpolateNormal @ 14cb42ac0

bool __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::TriBaryInterpolateNormal
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
           *this,int param_1,TVector<double> *param_2,TVector<float> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  FStaticMeshLODResourcesMeshAdapter *pFVar7;
  bool bVar8;
  TVector<float> *pTVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  FIndex3i_u_0 local_b8;
  float fStack_a4;
  float fStack_94;
  float fStack_84;
  FIndex3i local_78;
  TVector<float> local_68;
  TVector<float> local_5c;
  TVector<float> local_50 [6];
  
  pFVar7 = (FStaticMeshLODResourcesMeshAdapter *)(this->Adapter).Ptr;
  if ((pFVar7 != (FStaticMeshLODResourcesMeshAdapter *)0x0) &&
     (bVar8 = FStaticMeshLODResourcesMeshAdapter::HasNormals(pFVar7), bVar8)) {
    FStaticMeshLODResourcesMeshAdapter::GetTriangle
              ((FStaticMeshLODResourcesMeshAdapter *)(this->Adapter).Ptr,&local_78,param_1);
    pFVar7 = (FStaticMeshLODResourcesMeshAdapter *)(this->Adapter).Ptr;
    FStaticMeshLODResourcesMeshAdapter::GetTriangle(pFVar7,(FIndex3i *)&local_b8._s_0,param_1);
    pTVar9 = FStaticMeshLODResourcesMeshAdapter::GetNormal(pFVar7,&local_68,local_b8._s_0.A);
    uVar1 = *(undefined8 *)&pTVar9->field0_0x0;
    fVar4 = (pTVar9->field0_0x0)._s_0.Z;
    pTVar9 = FStaticMeshLODResourcesMeshAdapter::GetNormal(pFVar7,&local_5c,local_b8._s_0.B);
    uVar2 = *(undefined8 *)&pTVar9->field0_0x0;
    fVar5 = (pTVar9->field0_0x0)._s_0.Z;
    pTVar9 = FStaticMeshLODResourcesMeshAdapter::GetNormal(pFVar7,local_50,local_b8._s_0.C);
    uVar3 = *(undefined8 *)&pTVar9->field0_0x0;
    fVar6 = (pTVar9->field0_0x0)._s_0.Z;
    fVar12 = (float)(param_2->field0_0x0)._s_0.Y;
    fVar10 = (float)(param_2->field0_0x0)._s_0.X;
    fVar11 = (float)(param_2->field0_0x0)._s_0.Z;
    (param_3->field0_0x0)._s_0.X =
         fVar12 * (float)uVar2 + fVar10 * (float)uVar1 + fVar11 * (float)uVar3;
    fStack_94 = (float)((ulonglong)uVar1 >> 0x20);
    fStack_a4 = (float)((ulonglong)uVar2 >> 0x20);
    fStack_84 = (float)((ulonglong)uVar3 >> 0x20);
    (param_3->field0_0x0)._s_0.Y = fVar12 * fStack_a4 + fVar10 * fStack_94 + fVar11 * fStack_84;
    (param_3->field0_0x0)._s_0.Z = fVar12 * fVar5 + fVar10 * fVar4 + fVar11 * fVar6;
    return true;
  }
  return false;
}

// TriBaryInterpolatePoint @ 14cb42d80

TVector<double> * __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TriBaryInterpolatePoint
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FMeshDescriptionTriangleMeshSurfaceAdapter *this_00;
  undefined8 uVar4;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38 [2];
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00 = (this->Adapter).Ptr;
  if (this_00 == (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    FMeshDescriptionTriangleMeshAdapter::GetTriVertices
              ((FMeshDescriptionTriangleMeshAdapter *)this_00,param_1,
               (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_68._s_0,
               (TVector<double> *)&local_38[0]._s_0);
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_2->field0_0x0)._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar1 * local_68._s_0.X + dVar2 * local_50._s_0.X + dVar3 * (double)local_38[0]._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar1 * local_68._s_0.Z + dVar2 * local_50._s_0.Z + dVar3 * (double)local_38[0]._16_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar1 * local_68._s_0.Y + dVar2 * local_50._s_0.Y + dVar3 * (double)local_38[0]._8_8_;
  }
  return __return_storage_ptr__;
}

// TriBaryInterpolatePoint @ 14cb42e80

TVector<double> * __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::TriBaryInterpolatePoint
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
           *this,TVector<double> *__return_storage_ptr__,int param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  FStaticMeshLODResourcesMeshAdapter *this_00;
  uchar *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  FIndex3i_u_0 local_18;
  
  uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this_00 = (FStaticMeshLODResourcesMeshAdapter *)(this->Adapter).Ptr;
  if (this_00 != (FStaticMeshLODResourcesMeshAdapter *)0x0) {
    FStaticMeshLODResourcesMeshAdapter::GetTriangle(this_00,(FIndex3i *)&local_18._s_0,param_1);
    dVar7 = (this_00->BuildScale).field0_0x0._s_0.X;
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    dVar9 = (this_00->BuildScale).field0_0x0._s_0.Y;
    puVar14 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Data;
    uVar13 = (this_00->Mesh->VertexBuffers).PositionVertexBuffer.Stride;
    uVar16 = (ulonglong)(uVar13 * local_18._s_0.B);
    uVar18 = (ulonglong)(uVar13 * local_18._s_0.A);
    uVar17 = (ulonglong)(uVar13 * local_18._s_0.C);
    fVar1 = *(float *)(puVar14 + uVar16 + 4);
    fVar2 = *(float *)(puVar14 + uVar18 + 4);
    fVar3 = *(float *)(puVar14 + uVar17 + 4);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)*(float *)(puVar14 + uVar16) * dVar7 * dVar8 +
         (double)*(float *)(puVar14 + uVar18) * dVar7 * (param_2->field0_0x0)._s_0.X +
         (double)*(float *)(puVar14 + uVar17) * dVar7 * (param_2->field0_0x0)._s_0.Z;
    fVar4 = *(float *)(puVar14 + uVar16 + 8);
    dVar7 = (this_00->BuildScale).field0_0x0._s_0.Z;
    fVar5 = *(float *)(puVar14 + uVar18 + 8);
    fVar6 = *(float *)(puVar14 + uVar17 + 8);
    dVar10 = (this_00->BuildScale).field0_0x0._s_0.Z;
    dVar11 = (param_2->field0_0x0)._s_0.X;
    dVar12 = (this_00->BuildScale).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)fVar1 * dVar9 * dVar8 + (double)fVar2 * dVar9 * (param_2->field0_0x0)._s_0.X +
         (double)fVar3 * dVar9 * (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)fVar4 * dVar7 * dVar8 + (double)fVar5 * dVar10 * dVar11 +
         (double)fVar6 * dVar12 * (param_2->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// TriBaryInterpolateUV @ 14cb430f0

bool __thiscall
UE::Geometry::
TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>::
TriBaryInterpolateUV
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FMeshDescriptionTriangleMeshSurfaceAdapter>
           *this,int param_1,TVector<double> *param_2,int param_3,TVector2<float> *param_4)

{
  FMeshDescriptionTriangleMeshSurfaceAdapter *this_00;
  undefined8 uVar1;
  int iVar2;
  TVector2<float>_u_0 TVar3;
  FVertexInstanceID *pFVar4;
  TVector2<float> TVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  undefined1 local_28 [16];
  
  this_00 = (this->Adapter).Ptr;
  if ((((this_00 != (FMeshDescriptionTriangleMeshSurfaceAdapter *)0x0) &&
       (((TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector2<float>_const_> *)
        &this_00->_padding_)->ArrayPtr != (FMeshAttributeArraySetBase *)0x0)) &&
      ((FMeshDescription *)this_00->_padding_ != (FMeshDescription *)0x0)) &&
     ((-1 < param_3 &&
      (param_3 < (((FMeshDescription *)this_00->_padding_)->UVElements->Channels).ArrayNum)))) {
    iVar2 = param_1 * 3;
    pFVar4 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                       ((TArrayView<FVertexInstanceID_const_,int> *)&this_00->_padding_,iVar2);
    TVar5 = FMeshDescriptionTriangleMeshAdapter::GetUV
                      ((FMeshDescriptionTriangleMeshAdapter *)this_00,(int)&local_res8,(int)*pFVar4)
    ;
    uVar1 = *(undefined8 *)TVar5.field0_0x0;
    pFVar4 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                       ((TArrayView<FVertexInstanceID_const_,int> *)&this_00->_padding_,iVar2 + 1);
    TVar5 = FMeshDescriptionTriangleMeshAdapter::GetUV
                      ((FMeshDescriptionTriangleMeshAdapter *)this_00,(int)&local_res8,(int)*pFVar4)
    ;
    local_res8 = *(undefined8 *)TVar5.field0_0x0;
    pFVar4 = TArrayView<FVertexInstanceID_const_,int>::operator[]
                       ((TArrayView<FVertexInstanceID_const_,int> *)&this_00->_padding_,iVar2 + 2);
    TVar5 = FMeshDescriptionTriangleMeshAdapter::GetUV
                      ((FMeshDescriptionTriangleMeshAdapter *)this_00,(int)local_28,(int)*pFVar4);
    fVar8 = (float)(param_2->field0_0x0)._s_0.Y;
    fVar6 = (float)(param_2->field0_0x0)._s_0.X;
    local_38 = (float)uVar1;
    fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
    fVar7 = (float)(param_2->field0_0x0)._s_0.Z;
    local_30 = (float)*(undefined8 *)TVar5.field0_0x0;
    fStack_2c = (float)((ulonglong)*(undefined8 *)TVar5.field0_0x0 >> 0x20);
    TVar3._s_0.Y = fVar8 * local_res8._4_4_ + fVar6 * fStack_34 + fVar7 * fStack_2c;
    TVar3._s_0.X = fVar8 * (float)local_res8 + fVar6 * local_38 + fVar7 * local_30;
    param_4->field0_0x0 = TVar3;
    return true;
  }
  return false;
}

// TriBaryInterpolateUV @ 14cb43260

bool __thiscall
UE::Geometry::TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
::TriBaryInterpolateUV
          (TStaticMeshSpatialWrapperBase<UE::Geometry::FStaticMeshLODResourcesMeshSurfaceAdapter>
           *this,int param_1,TVector<double> *param_2,int param_3,TVector2<float> *param_4)

{
  FStaticMeshLODResourcesMeshAdapter *pFVar1;
  undefined8 uVar2;
  TVector2<float>_u_0 TVar3;
  bool bVar4;
  TVector2<float> TVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_res8;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  FIndex3i_u_0 local_18;
  
  pFVar1 = (FStaticMeshLODResourcesMeshAdapter *)(this->Adapter).Ptr;
  if ((pFVar1 != (FStaticMeshLODResourcesMeshAdapter *)0x0) &&
     (bVar4 = FStaticMeshLODResourcesMeshAdapter::HasUVs(pFVar1,param_3), bVar4)) {
    pFVar1 = (FStaticMeshLODResourcesMeshAdapter *)(this->Adapter).Ptr;
    FStaticMeshLODResourcesMeshAdapter::GetTriangle(pFVar1,(FIndex3i *)&local_18._s_0,param_1);
    TVar5 = FStaticMeshLODResourcesMeshAdapter::GetUV(pFVar1,(int)&local_res8,local_18._s_0.A);
    uVar2 = *(undefined8 *)TVar5.field0_0x0;
    TVar5 = FStaticMeshLODResourcesMeshAdapter::GetUV(pFVar1,(int)&local_res8,local_18._s_0.B);
    local_res8 = *(undefined8 *)TVar5.field0_0x0;
    TVar5 = FStaticMeshLODResourcesMeshAdapter::GetUV(pFVar1,(int)&local_18,local_18._s_0.C);
    fVar8 = (float)(param_2->field0_0x0)._s_0.Y;
    fVar6 = (float)(param_2->field0_0x0)._s_0.X;
    local_28 = (float)uVar2;
    fStack_24 = (float)((ulonglong)uVar2 >> 0x20);
    fVar7 = (float)(param_2->field0_0x0)._s_0.Z;
    local_20 = (float)*(undefined8 *)TVar5.field0_0x0;
    fStack_1c = (float)((ulonglong)*(undefined8 *)TVar5.field0_0x0 >> 0x20);
    TVar3._s_0.Y = fVar8 * local_res8._4_4_ + fVar6 * fStack_24 + fVar7 * fStack_1c;
    TVar3._s_0.X = fVar8 * (float)local_res8 + fVar6 * local_28 + fVar7 * local_20;
    param_4->field0_0x0 = TVar3;
    return true;
  }
  return false;
}

