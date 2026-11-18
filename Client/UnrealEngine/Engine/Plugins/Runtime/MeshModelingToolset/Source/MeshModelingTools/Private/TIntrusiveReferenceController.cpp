// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// DestroyObject @ 14cbeb140

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FDynamicSubmesh3,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FDynamicSubmesh3,1> *this)

{
  UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3((FDynamicSubmesh3 *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cbeb150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FPolygroupSet,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Geometry::FPolygroupSet,1> *this)

{
  return;
}

// DestroyObject @ 14cbeb160

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1>
::DestroyObject(TIntrusiveReferenceController<UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>,1>
                *this)

{
  undefined1 local_res8 [32];
  
  if ((*(longlong *)(this->ObjectStorage).Pad != 0) ||
     (*(longlong *)((this->ObjectStorage).Pad + 8) != 0)) {
    `UE::Geometry::TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>::
    ~TConstObjectSharedAccess<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x248));
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3((FDynamicMesh3 *)((this->ObjectStorage).Pad + 0x18));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x10));
  return;
}

// DestroyObject @ 14cc53010

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
              *this)

{
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14cc53020

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPersistentStampRemesher,1>::DestroyObject
          (TIntrusiveReferenceController<FPersistentStampRemesher,1> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((this->ObjectStorage).Pad + 8);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cc53031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14cc53040

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FTriangleGroupTopology,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FTriangleGroupTopology,1> *this)

{
  UE::Geometry::FGroupTopology::~FGroupTopology((FGroupTopology *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ccf7550

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>,1>
              *this)

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

// DestroyObject @ 14ccf7570

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FFFDLattice,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Geometry::FFFDLattice,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0xa8);
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

// DestroyObject @ 14ccf7590

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMeshSculptFallofFunc,1>::DestroyObject
          (TIntrusiveReferenceController<FMeshSculptFallofFunc,1> *this)

{
  uchar *puVar1;
  uchar *puVar2;
  
  if (*(longlong *)(this->ObjectStorage).Pad != 0) {
    puVar1 = *(uchar **)((this->ObjectStorage).Pad + 0x28);
    puVar2 = (this->ObjectStorage).Pad + 0x10;
    if (puVar1 != (uchar *)0x0) {
      puVar2 = puVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014ccf75a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)puVar2 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 14ccf75c0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x10));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

