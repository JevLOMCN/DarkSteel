// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 24

// DestroyObject @ 14ca86e90

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector4<float>_>,1>
                *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7__FRenderCaptureMapEvaluator_U__TVector4_M_Math_UE___Geometry_UE__6B_;
  if (*(longlong *)((this->ObjectStorage).Pad + 0x50) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x78);
    puVar2 = (this->ObjectStorage).Pad + 0x60;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x20) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x48);
    puVar2 = (this->ObjectStorage).Pad + 0x30;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ca86ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar2 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 14ca86ef0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Geometry::FRenderCaptureMapEvaluator<UE::Math::TVector<float>_>,1>
                *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7__FRenderCaptureMapEvaluator_U__TVector_M_Math_UE___Geometry_UE__6B_;
  if (*(longlong *)((this->ObjectStorage).Pad + 0x50) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x78);
    puVar2 = (this->ObjectStorage).Pad + 0x60;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
  }
  if (*(longlong *)((this->ObjectStorage).Pad + 0x20) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x48);
    puVar2 = (this->ObjectStorage).Pad + 0x30;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ca86f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar2 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 14ca86f50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::TIndexedWeightMap<float>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::TIndexedWeightMap<float>,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14ca86f70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDynamicMeshWireframeSourceProvider,1>::
DestroyObject(TIntrusiveReferenceController<FDynamicMeshWireframeSourceProvider,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)((this->ObjectStorage).Pad + 0x10) != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x38);
    puVar2 = (this->ObjectStorage).Pad + 0x20;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
    (**(code **)(*(longlong *)puVar2 + 0x10))();
    *(undefined ***)(this->ObjectStorage).Pad = &___7IMeshWireframeSourceProvider__6B_;
    return;
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7IMeshWireframeSourceProvider__6B_;
  return;
}

// DestroyObject @ 14ca86fc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshBoundaryLoops,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshBoundaryLoops,1> *this)

{
  UE::Geometry::FMeshBoundaryLoops::~FMeshBoundaryLoops((FMeshBoundaryLoops *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ca86fd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshNormals,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Geometry::FMeshNormals,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14cb01de0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<std::atomic<int>,1>::DestroyObject
          (TIntrusiveReferenceController<std::atomic<int>,1> *this)

{
  return;
}

// DestroyObject @ 14cb01df0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FKAggregateGeom,1>::DestroyObject
          (TIntrusiveReferenceController<FKAggregateGeom,1> *this)

{
  FKAggregateGeom::~FKAggregateGeom((FKAggregateGeom *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb01e00

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Geometry::FMeshSceneAdapter::FSpatialWrapperInfo,1>
           *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(undefined8 **)((this->ObjectStorage).Pad + 0x28);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// DestroyObject @ 14cb01e40

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>,1>
              *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14cb01e60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSpaceCurveSource,1>::DestroyObject
          (TIntrusiveReferenceController<FSpaceCurveSource,1> *this)

{
  FSpaceCurveSource::~FSpaceCurveSource((FSpaceCurveSource *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb01e70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FSparseDynamicOctree3,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FSparseDynamicOctree3,1> *this)

{
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb82030

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<float>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<float>,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14cb82050

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::TSpatialPhoto<UE::Math::TVector<float>_>,1>
              *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14cb82070

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UGeometrySelectionManager::FGeometrySelectionTarget,1>::DestroyObject
          (TIntrusiveReferenceController<UGeometrySelectionManager::FGeometrySelectionTarget,1>
           *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  ::operator_delete(*(void **)((this->ObjectStorage).Pad + 0x80),0x18);
  (this->ObjectStorage).Pad[0x78] = '\0';
  (this->ObjectStorage).Pad[0x79] = '\0';
  (this->ObjectStorage).Pad[0x7a] = '\0';
  (this->ObjectStorage).Pad[0x7b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x70);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x30));
  puVar2 = *(undefined8 **)((this->ObjectStorage).Pad + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// DestroyObject @ 14cb820e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImagePixelPipe,1>::DestroyObject
          (TIntrusiveReferenceController<FImagePixelPipe,1> *this)

{
  void *pvVar1;
  
  DestructItems<TUniquePtr<FImageStreamEndpoint,TDefaultDelete<FImageStreamEndpoint>_>,int>
            (*(TUniquePtr<FImageStreamEndpoint,TDefaultDelete<FImageStreamEndpoint>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb8210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14cb82120

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBasicDynamicMeshSelectionTransformer,1>::
DestroyObject(TIntrusiveReferenceController<FBasicDynamicMeshSelectionTransformer,1> *this)

{
  FBasicDynamicMeshSelectionTransformer::~FBasicDynamicMeshSelectionTransformer
            ((FBasicDynamicMeshSelectionTransformer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb82130

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBoundaryEdgeSpanSelector,1>::DestroyObject
          (TIntrusiveReferenceController<FBoundaryEdgeSpanSelector,1> *this)

{
  FMeshTopologySelector::~FMeshTopologySelector((FMeshTopologySelector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb82140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBoundarySelector,1>::DestroyObject
          (TIntrusiveReferenceController<FBoundarySelector,1> *this)

{
  FMeshTopologySelector::~FMeshTopologySelector((FMeshTopologySelector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb82150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FDynamicMeshPolygroupTransformer,1>::
DestroyObject(TIntrusiveReferenceController<FDynamicMeshPolygroupTransformer,1> *this)

{
  longlong lVar1;
  void *pvVar2;
  
  lVar1 = *(longlong *)((this->ObjectStorage).Pad + 0x1b8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  (this->ObjectStorage).Pad[0x1b0] = '\0';
  (this->ObjectStorage).Pad[0x1b1] = '\0';
  (this->ObjectStorage).Pad[0x1b2] = '\0';
  (this->ObjectStorage).Pad[0x1b3] = '\0';
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x1a8);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x168));
  FBasicDynamicMeshSelectionTransformer::~FBasicDynamicMeshSelectionTransformer
            ((FBasicDynamicMeshSelectionTransformer *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb821c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGroupTopologySelector,1>::DestroyObject
          (TIntrusiveReferenceController<FGroupTopologySelector,1> *this)

{
  FMeshTopologySelector::~FMeshTopologySelector((FMeshTopologySelector *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb821d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1>::DestroyObject
          (TIntrusiveReferenceController<FSceneDynamicMeshSpatial,1> *this)

{
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)((this->ObjectStorage).Pad + 0xa0));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISceneGeometrySpatial_Geometry_UE__6B_;
  return;
}

// DestroyObject @ 14cb82200

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FSceneGeometrySpatialCache,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FSceneGeometrySpatialCache,1> *this)

{
  UE::Geometry::FSceneGeometrySpatialCache::~FSceneGeometrySpatialCache
            ((FSceneGeometrySpatialCache *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cb82210

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSceneVolumeSpatial,1>::DestroyObject
          (TIntrusiveReferenceController<FSceneVolumeSpatial,1> *this)

{
  UE::Geometry::FColliderMesh::~FColliderMesh((FColliderMesh *)((this->ObjectStorage).Pad + 0xa0));
  *(undefined ***)(this->ObjectStorage).Pad = &___7ISceneGeometrySpatial_Geometry_UE__6B_;
  return;
}

