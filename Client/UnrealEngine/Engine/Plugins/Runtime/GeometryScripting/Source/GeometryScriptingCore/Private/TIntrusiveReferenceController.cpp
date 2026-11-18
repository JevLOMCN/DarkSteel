// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 26

// DestroyObject @ 14cdd35d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryScriptBakeType_Constant,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryScriptBakeType_Constant,1> *this)

{
  return;
}

// DestroyObject @ 14cdd35e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryScriptBakeType_Curvature,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryScriptBakeType_Curvature,1> *this)

{
  return;
}

// DestroyObject @ 14cdd35f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryScriptBakeType_Height,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryScriptBakeType_Height,1> *this)

{
  return;
}

// DestroyObject @ 14cdd3600

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryScriptBakeType_MultiTexture,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryScriptBakeType_MultiTexture,1> *this)

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

// DestroyObject @ 14cdd3620

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryScriptBakeType_Occlusion,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryScriptBakeType_Occlusion,1> *this)

{
  return;
}

// DestroyObject @ 14cdd3630

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryScriptBakeType_Texture,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryScriptBakeType_Texture,1> *this)

{
  return;
}

// DestroyObject @ 14cdd3640

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryScriptBakeType_UVShell,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryScriptBakeType_UVShell,1> *this)

{
  return;
}

// DestroyObject @ 14cdd3650

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FGeometrySelection,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FGeometrySelection,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14cdd3690

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<TArray<double,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<double,TSizedDefaultAllocator<32>_>,1> *this)

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

// DestroyObject @ 14cdd36b0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,1>
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

// DestroyObject @ 14cdd36d0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>,1>
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

// DestroyObject @ 14cdd36f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>::
DestroyObject(TIntrusiveReferenceController<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,1>
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

// DestroyObject @ 14cdd3710

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,1>::DestroyObject
          (TIntrusiveReferenceController<TArray<FLinearColor,TSizedDefaultAllocator<32>_>,1> *this)

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

// DestroyObject @ 14cdd3730

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>,1>
::DestroyObject(TIntrusiveReferenceController<TArray<UE::Geometry::TGeneralPolygon2<double>,TSizedDefaultAllocator<32>_>,1>
                *this)

{
  void *pvVar1;
  
  DestructItems<UE::Geometry::TGeneralPolygon2<double>,int>
            (*(TGeneralPolygon2<double> **)(this->ObjectStorage).Pad,
             *(int *)((this->ObjectStorage).Pad + 8));
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14cdd3770

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>
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

// DestroyObject @ 14cdd3790

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::TMeshTangents<double>,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::TMeshTangents<double>,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14cdd37e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshConstantMapEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshConstantMapEvaluator,1> *this)

{
  return;
}

// DestroyObject @ 14cdd37f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshCurvatureMapEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshCurvatureMapEvaluator,1> *this)

{
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x40));
  return;
}

// DestroyObject @ 14cdd3800

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshHeightMapEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshHeightMapEvaluator,1> *this)

{
  return;
}

// DestroyObject @ 14cdd3810

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::Geometry::FMeshMultiResampleImageEvaluator,1>::DestroyObject
          (TIntrusiveReferenceController<UE::Geometry::FMeshMultiResampleImageEvaluator,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1>,int>
            (*(TSharedPtr<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>,1> **)
              ((this->ObjectStorage).Pad + 0x28),*(int *)((this->ObjectStorage).Pad + 0x30));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14cdd3850

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshNormalMapEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshNormalMapEvaluator,1> *this)

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
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((this->ObjectStorage).Pad + 0x10);
  return;
}

// DestroyObject @ 14cdd3890

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshOcclusionMapEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshOcclusionMapEvaluator,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x50);
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

// DestroyObject @ 14cdd38b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshPropertyMapEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshPropertyMapEvaluator,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x60] = '\0';
  (this->ObjectStorage).Pad[0x61] = '\0';
  (this->ObjectStorage).Pad[0x62] = '\0';
  (this->ObjectStorage).Pad[99] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_const_*,TTuple<UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>_const_*,int,enum_UE::Geometry::IMeshBakerDetailSampler::EBakeDetailNormalSpace>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((this->ObjectStorage).Pad + 0x18);
  return;
}

// DestroyObject @ 14cdd38f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshResampleImageEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshResampleImageEvaluator,1> *this)

{
  return;
}

// DestroyObject @ 14cdd3900

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FMeshUVShellMapEvaluator,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FMeshUVShellMapEvaluator,1> *this)

{
  return;
}

// DestroyObject @ 14cdd3910

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Geometry::FSphereCovering,1>::
DestroyObject(TIntrusiveReferenceController<UE::Geometry::FSphereCovering,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

