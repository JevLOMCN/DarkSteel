// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 11

// DestroyObject @ 14d0a70f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1>::DestroyObject
          (TIntrusiveReferenceController<FLiveLinkBaseDataStruct<FLiveLinkBaseStaticData>,1> *this)

{
  FStructOnScope::~FStructOnScope((FStructOnScope *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14d0a7100

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<unsigned_char>,1>::DestroyObject
          (TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<unsigned_char>,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a7150

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<int>,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<int>,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a71a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<float>,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<float>,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a71f0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>,1>
              *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
               **)((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a7240

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FColor>,1>
::DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FColor>,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a7290

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FString>,1>
::DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<FString>,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a72e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<bool>,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkPropertyHandler<bool>,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a7330

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkEnumHandler,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkEnumHandler,1> *this)

{
  void *pvVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,int>
            (*(TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_> **)
              ((this->ObjectStorage).Pad + 0x30),*(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14d0a7380

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkSource,1>::DestroyObject
          (TIntrusiveReferenceController<FMovieSceneLiveLinkSource,1> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FMovieSceneLiveLinkSource__6B_;
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7ILiveLinkSource__6B_;
  return;
}

// DestroyObject @ 14d0a73d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMovieSceneLiveLinkTransformHandler,1>::
DestroyObject(TIntrusiveReferenceController<FMovieSceneLiveLinkTransformHandler,1> *this)

{
  void *pvVar1;
  
  DestructItems<FLiveLinkTransformKeys,int>
            (*(FLiveLinkTransformKeys **)((this->ObjectStorage).Pad + 0x30),
             *(int *)((this->ObjectStorage).Pad + 0x38));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

