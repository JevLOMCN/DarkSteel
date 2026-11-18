// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 693

// Construct<FMovieSceneDirectorBlueprintConditionData> @ 146589770

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneDirectorBlueprintConditionData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneDirectorBlueprintConditionData> @ 146589790

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneDirectorBlueprintConditionData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneDirectorBlueprintConditionData> @ 1465897b0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneDirectorBlueprintConditionData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// Copy<FMovieSceneDirectorBlueprintConditionData> @ 146589850

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneDirectorBlueprintConditionData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  FFieldClass *pFVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      pFVar2 = FProperty::StaticClass();
      FFieldPath::GetTyped((FFieldPath *)(puVar1 + 1),pFVar2,(UStruct *)0x0);
      FFieldPath::operator=((FFieldPath *)(puVar3 + 1),(FFieldPath *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneBoolPropertySectionTemplate> @ 146589940

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneBoolPropertySectionTemplate>(void *param_1)

{
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneBoolPropertySectionTemplate__6B_;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel
            ((FMovieSceneBoolChannel *)((longlong)param_1 + 0x38));
  return;
}

// ConstructForTests<FMovieSceneBoolPropertySectionTemplate> @ 146589a20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneBoolPropertySectionTemplate>(void *param_1)

{
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneBoolPropertySectionTemplate__6B_;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel
            ((FMovieSceneBoolChannel *)((longlong)param_1 + 0x38));
  return;
}

// Destruct<FMovieSceneBoolPropertySectionTemplate> @ 146589a90

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneBoolPropertySectionTemplate>(void *param_1)

{
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel
            ((FMovieSceneBoolChannel *)((longlong)param_1 + 0x38));
  FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate(param_1);
  return;
}

// Copy<FMovieSceneBoolPropertySectionTemplate> @ 146589c00

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneBoolPropertySectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  
  if (param_3 != 0) {
    pvVar4 = param_1;
    do {
      pvVar2 = (void *)(((longlong)param_2 - (longlong)param_1) + (longlong)pvVar4);
      *(undefined1 *)((longlong)pvVar4 + 8) =
           *(undefined1 *)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)pvVar4);
      *(undefined1 *)((longlong)pvVar4 + 0x10) = *(undefined1 *)((longlong)pvVar2 + 0x10);
      *(undefined8 *)((longlong)pvVar4 + 0x14) = *(undefined8 *)((longlong)pvVar2 + 0x14);
      *(undefined8 *)((longlong)pvVar4 + 0x20) = *(undefined8 *)((longlong)pvVar2 + 0x20);
      ::FString::operator=
                ((FString *)((longlong)pvVar4 + 0x28),(FString *)((longlong)pvVar2 + 0x28));
      if (pvVar2 != pvVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x40),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar2 + 0x40));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x60),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar2 + 0x60));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x80),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar2 + 0x80));
      }
      *(undefined1 *)((longlong)pvVar4 + 0xa0) = *(undefined1 *)((longlong)pvVar2 + 0xa0);
      *(undefined1 *)((longlong)pvVar4 + 0xa1) = *(undefined1 *)((longlong)pvVar2 + 0xa1);
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 0xa8),
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar2 + 0xa8));
      *(undefined1 *)((longlong)pvVar4 + 0xb8) = *(undefined1 *)((longlong)pvVar2 + 0xb8);
      *(undefined1 *)((longlong)pvVar4 + 0xb9) = *(undefined1 *)((longlong)pvVar2 + 0xb9);
      if (pvVar4 != pvVar2) {
        iVar3 = *(int *)((longlong)pvVar2 + 200);
        piVar1 = (int *)((longlong)pvVar4 + 0xcc);
        pvVar2 = *(void **)((longlong)pvVar2 + 0xc0);
        *(int *)((longlong)pvVar4 + 200) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3,*piVar1,(ForAnyElementType *)((longlong)pvVar4 + 0xc0),iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar4 + 0xc0))->Data,pvVar2,(longlong)iVar3);
          }
        }
      }
      FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar4 + 0xd0));
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x158);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneDirectorBlueprintConditionPayloadVariable> @ 14658a940

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneDirectorBlueprintConditionPayloadVariable>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMovieSceneDirectorBlueprintConditionPayloadVariable> @ 14658a960

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneDirectorBlueprintConditionPayloadVariable>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMovieSceneDirectorBlueprintConditionPayloadVariable> @ 14658aa20

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneDirectorBlueprintConditionPayloadVariable>
          (void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FMovieSceneDirectorBlueprintConditionPayloadVariable> @ 14658aae0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneDirectorBlueprintConditionPayloadVariable>
          (void *param_1,void *param_2,int param_3)

{
  FSoftObjectPath *pFVar1;
  FSoftObjectPath *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FSoftObjectPath *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FSoftObjectPath::operator=(this,pFVar1);
      ::FString::operator=((FString *)(this + 1),(FString *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = (FSoftObjectPath *)&this[1].SubPathString;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneParticleSectionTemplate> @ 14658ae90

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneParticleSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneParticleSectionTemplate__6B_;
  FMovieSceneParticleChannel::FMovieSceneParticleChannel
            ((FMovieSceneParticleChannel *)((longlong)param_1 + 0x20));
  return;
}

// ConstructForTests<FMovieSceneParticleSectionTemplate> @ 14658aec0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneParticleSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneParticleSectionTemplate__6B_;
  FMovieSceneParticleChannel::FMovieSceneParticleChannel
            ((FMovieSceneParticleChannel *)((longlong)param_1 + 0x20));
  return;
}

// Destruct<FMovieSceneParticleSectionTemplate> @ 14658aef0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneParticleSectionTemplate>(void *param_1)

{
  FMovieSceneByteChannel::~FMovieSceneByteChannel
            ((FMovieSceneByteChannel *)((longlong)param_1 + 0x20));
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneParticleSectionTemplate> @ 14658af60

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneParticleSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  void *pvVar3;
  void *pvVar4;
  
  if (param_3 != 0) {
    pvVar4 = param_1;
    do {
      pvVar3 = (void *)((longlong)pvVar4 + ((longlong)param_2 - (longlong)param_1));
      *(undefined1 *)((longlong)pvVar4 + 8) = *(undefined1 *)((longlong)pvVar3 + 8);
      *(undefined1 *)((longlong)pvVar4 + 0x10) = *(undefined1 *)((longlong)pvVar3 + 0x10);
      *(undefined8 *)((longlong)pvVar4 + 0x14) = *(undefined8 *)((longlong)pvVar3 + 0x14);
      if (pvVar3 != pvVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x28),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x48),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar4 + 0x68),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x68));
      }
      *(undefined1 *)((longlong)pvVar4 + 0x88) = *(undefined1 *)((longlong)pvVar3 + 0x88);
      *(undefined1 *)((longlong)pvVar4 + 0x89) = *(undefined1 *)((longlong)pvVar3 + 0x89);
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar4 + 0x90),
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar3 + 0x90));
      *(undefined1 *)((longlong)pvVar4 + 0xa0) = *(undefined1 *)((longlong)pvVar3 + 0xa0);
      *(undefined1 *)((longlong)pvVar4 + 0xa1) = *(undefined1 *)((longlong)pvVar3 + 0xa1);
      if (pvVar4 != pvVar3) {
        iVar2 = *(int *)((longlong)pvVar3 + 0xb0);
        piVar1 = (int *)((longlong)pvVar4 + 0xb4);
        _Src = *(void **)((longlong)pvVar3 + 0xa8);
        *(int *)((longlong)pvVar4 + 0xb0) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar2,*piVar1,(ForAnyElementType *)((longlong)pvVar4 + 0xa8),iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar4 + 0xa8))->Data,_Src,(longlong)iVar2);
          }
        }
      }
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar3 + 0xb8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar3 + 0xb8));
      }
      *(undefined8 *)((longlong)pvVar4 + 0xb8) = *(undefined8 *)((longlong)pvVar3 + 0xb8);
      FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar4 + 0xc0));
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x148);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneTextChannel> @ 14658b3f0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneTextChannel>(void *param_1)

{
  memset(param_1,0,0x128);
  FMovieSceneTextChannel::FMovieSceneTextChannel(param_1);
  return;
}

// ConstructForTests<FMovieSceneTextChannel> @ 14658b460

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneTextChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneTextChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  FText::FText((FText *)((longlong)param_1 + 0x88));
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  return;
}

// Destruct<FMovieSceneTextChannel> @ 14658b470

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneTextChannel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xd8));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0xa0));
  if (*(longlong **)((longlong)param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x88) + 0x10))();
  }
  DestructItems<FText,int>(*(FText **)((longlong)param_1 + 0x78),*(int *)((longlong)param_1 + 0x80))
  ;
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FMovieSceneTextChannel> @ 14658b4c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneTextChannel>(void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int *piVar4;
  int iVar5;
  FText *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *pvVar9;
  undefined1 local_res18 [16];
  
  pvVar9 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar9 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar9 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar9 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar9 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar9 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar9 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar9 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar9 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar9 + 0x48),
                 pTVar1);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar9 + 0x68),
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar9 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar9 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pFVar3 = (ForAnyElementType *)((longlong)pvVar9 + 0x78);
    if (pFVar3 != pFVar2) {
      DestructItems<FText,int>((FText *)pFVar3->Data,*(int *)((longlong)pvVar9 + 0x80));
      iVar5 = *(int *)((longlong)pvVar9 + (longlong)param_2 + (0x80 - (longlong)param_1));
      piVar4 = (int *)((longlong)pvVar9 + 0x84);
      pFVar6 = (FText *)pFVar2->Data;
      *(int *)((longlong)pvVar9 + 0x80) = iVar5;
      if ((iVar5 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar5,*piVar4,pFVar3,iVar5,piVar4);
        ConstructItems<FText,FText,int>(pFVar3->Data,pFVar6,iVar5);
      }
    }
    plVar7 = *(longlong **)((longlong)pvVar9 + (longlong)param_2 + (0x88 - (longlong)param_1));
    plVar8 = *(longlong **)((longlong)pvVar9 + 0x88);
    if (plVar8 != plVar7) {
      *(longlong **)((longlong)pvVar9 + 0x88) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 8))(plVar7,local_res18);
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    *(undefined4 *)((longlong)pvVar9 + 0x90) =
         *(undefined4 *)((longlong)pvVar9 + (longlong)param_2 + (0x90 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar9 + 0x98) =
         *(undefined1 *)((longlong)pvVar9 + (longlong)param_2 + (0x98 - (longlong)param_1));
    FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar9 + 0xa0));
    pvVar9 = (void *)((longlong)pvVar9 + 0x128);
  }
  return true;
}

// Construct<FMovieSceneActorReferenceData> @ 14658b680

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneActorReferenceData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneActorReferenceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  return;
}

// ConstructForTests<FMovieSceneActorReferenceData> @ 14658b690

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneActorReferenceData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneActorReferenceData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  return;
}

// Destruct<FMovieSceneActorReferenceData> @ 14658b6a0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneActorReferenceData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  if (*(void **)((longlong)param_1 + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x128));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xe8));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0xb0));
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FMovieSceneActorReferenceData> @ 14658b6f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneActorReferenceData>
          (void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  int *piVar2;
  ForAnyElementType *pFVar3;
  ForAnyElementType *pFVar4;
  int iVar5;
  FScriptContainerElement *_Src;
  undefined8 uVar6;
  void *pvVar7;
  
  pvVar7 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48),
                 pTVar1);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar7 + 0x68),
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar7 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    uVar6 = *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x80 - (longlong)param_1));
    pFVar3 = (ForAnyElementType *)
             ((longlong)pvVar7 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    pFVar4 = (ForAnyElementType *)((longlong)pvVar7 + 0xa0);
    *(undefined8 *)((longlong)pvVar7 + 0x78) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x78 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x80) = uVar6;
    uVar6 = *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x90 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x88) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x88 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x90) = uVar6;
    *(undefined8 *)((longlong)pvVar7 + 0x98) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x98 - (longlong)param_1));
    if (pFVar4 != pFVar3) {
      iVar5 = *(int *)((longlong)pvVar7 + (longlong)param_2 + (0xa8 - (longlong)param_1));
      piVar2 = (int *)((longlong)pvVar7 + 0xac);
      _Src = pFVar3->Data;
      *(int *)((longlong)pvVar7 + 0xa8) = iVar5;
      if ((iVar5 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,4,iVar5,*piVar2,pFVar4,iVar5,piVar2);
        if (iVar5 != 0) {
          memcpy(pFVar4->Data,_Src,(longlong)iVar5 * 0x28);
        }
      }
    }
    FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar7 + 0xb0));
    pvVar7 = (void *)((longlong)pvVar7 + 0x138);
  }
  return true;
}

// Construct<FMovieSceneParticleParameterSectionTemplate> @ 14658be30

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneParticleParameterSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneParticleParameterSectionTemplate__6B_;
  return;
}

// ConstructForTests<FMovieSceneParticleParameterSectionTemplate> @ 14658be80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneParticleParameterSectionTemplate>
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneParticleParameterSectionTemplate__6B_;
  return;
}

// Destruct<FMovieSceneParticleParameterSectionTemplate> @ 14658bed0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneParticleParameterSectionTemplate>(void *param_1)

{
  DestructItems<FTransformParameterNameAndCurves,int>
            (*(FTransformParameterNameAndCurves **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FColorParameterNameAndCurves,int>
            (*(FColorParameterNameAndCurves **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FVectorParameterNameAndCurves,int>
            (*(FVectorParameterNameAndCurves **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FVector2DParameterNameAndCurves,int>
            (*(FVector2DParameterNameAndCurves **)((longlong)param_1 + 0x40),
             *(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FBoolParameterNameAndCurve,int>
            (*(FBoolParameterNameAndCurve **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FScalarParameterNameAndCurve,int>
            (*(FScalarParameterNameAndCurve **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Construct<FMovieSceneActorReferenceKey> @ 14658bee0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneActorReferenceKey>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneActorReferenceKey> @ 14658bf30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneActorReferenceKey>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneActorReferenceKey> @ 14658bf70

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneActorReferenceKey>(void *param_1)

{
  return;
}

// Copy<FMovieSceneParticleParameterSectionTemplate> @ 14658bf80

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneParticleParameterSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  FMovieSceneParameterSectionTemplate *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FMovieSceneParameterSectionTemplate::operator=
                (this,(FMovieSceneParameterSectionTemplate *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMovieSceneActorReferenceKey> @ 14658bfd0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneActorReferenceKey>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x28);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneMixedAnimationTarget> @ 14658c3c0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneMixedAnimationTarget>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneMixedAnimationTarget__6B_;
  return;
}

// ConstructForTests<FMovieSceneMixedAnimationTarget> @ 14658c4c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneMixedAnimationTarget>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneMixedAnimationTarget__6B_;
  return;
}

// Destruct<FMovieSceneMixedAnimationTarget> @ 14658c580

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneMixedAnimationTarget>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneMixedAnimationTarget__6B_;
  return;
}

// Construct<FMovieSceneStringChannel> @ 14658c5a0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneStringChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneStringChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  return;
}

// ConstructForTests<FMovieSceneStringChannel> @ 14658c6b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneStringChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneStringChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  return;
}

// Destruct<FMovieSceneStringChannel> @ 14658c770

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneStringChannel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xd8));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0xa0));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x78),*(int *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FMovieSceneMixedAnimationTarget> @ 14658cf90

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneMixedAnimationTarget>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    pvVar1 = param_1;
    do {
      *(undefined1 *)((longlong)pvVar1 + 8) =
           *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x10);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMovieSceneStringChannel> @ 14658d040

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneStringChannel>(void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  
  pvVar7 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48),
                 pTVar1);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar7 + 0x68),
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar7 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pFVar3 = (ForAnyElementType *)((longlong)pvVar7 + 0x78);
    if (pFVar3 != pFVar2) {
      DestructItems<FString,int>((FString *)pFVar3->Data,*(int *)((longlong)pvVar7 + 0x80));
      iVar5 = *(int *)((longlong)pvVar7 + (longlong)param_2 + (0x80 - (longlong)param_1));
      piVar4 = (int *)((longlong)pvVar7 + 0x84);
      pFVar6 = pFVar2->Data;
      *(int *)((longlong)pvVar7 + 0x80) = iVar5;
      if ((iVar5 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar5,*piVar4,pFVar3,iVar5,piVar4);
        ConstructItems<FString,FString,int>(pFVar3->Data,(FString *)pFVar6,iVar5);
      }
    }
    ::FString::operator=
              ((FString *)((longlong)pvVar7 + 0x88),
               (FString *)((longlong)pvVar7 + (longlong)param_2 + (0x88 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar7 + 0x98) =
         *(undefined1 *)((longlong)pvVar7 + (longlong)param_2 + (0x98 - (longlong)param_1));
    FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar7 + 0xa0));
    pvVar7 = (void *)((longlong)pvVar7 + 0x128);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FMovieSceneStringChannel> @ 14658d1b0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneStringChannel>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FMovieSceneStringChannel::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// GetStructTypeHash<FMovieSceneMixedAnimationTarget> @ 14658d1d0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMovieSceneMixedAnimationTarget>(void *param_1)

{
  uint uVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneMixedAnimationTarget.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneMixedAnimationTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneMixedAnimationTarget,(UObject *)pUVar2
                         ,L"MovieSceneMixedAnimationTarget");
  }
  uVar1 = ((uint)((ulonglong)
                  Z_Registration_Info_UScriptStruct_FMovieSceneMixedAnimationTarget.OuterSingleton
                 >> 0x14) & 0xffff ^
          (uint)((ulonglong)
                 Z_Registration_Info_UScriptStruct_FMovieSceneMixedAnimationTarget.OuterSingleton >>
                4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// Construct<FMovieSceneParameterSectionTemplate> @ 14658d300

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneParameterSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneParameterSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FMovieSceneParameterSectionTemplate> @ 14658d350

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneParameterSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneParameterSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FMovieSceneParameterSectionTemplate> @ 14658d3e0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneParameterSectionTemplate>(void *param_1)

{
  DestructItems<FTransformParameterNameAndCurves,int>
            (*(FTransformParameterNameAndCurves **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  DestructItems<FColorParameterNameAndCurves,int>
            (*(FColorParameterNameAndCurves **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  DestructItems<FVectorParameterNameAndCurves,int>
            (*(FVectorParameterNameAndCurves **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  DestructItems<FVector2DParameterNameAndCurves,int>
            (*(FVector2DParameterNameAndCurves **)((longlong)param_1 + 0x40),
             *(int *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  DestructItems<FBoolParameterNameAndCurve,int>
            (*(FBoolParameterNameAndCurve **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  DestructItems<FScalarParameterNameAndCurve,int>
            (*(FScalarParameterNameAndCurve **)((longlong)param_1 + 0x20),
             *(int *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneParameterSectionTemplate> @ 14658d3f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneParameterSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScalarParameterNameAndCurve *pFVar4;
  FBoolParameterNameAndCurve *pFVar5;
  FVector2DParameterNameAndCurves *pFVar6;
  FVectorParameterNameAndCurves *pFVar7;
  FColorParameterNameAndCurves *pFVar8;
  FTransformParameterNameAndCurves *pFVar9;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x20);
    *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x20)) {
      DestructItems<FScalarParameterNameAndCurve,int>
                ((FScalarParameterNameAndCurve *)pFVar1->Data,*(int *)((longlong)param_1 + 0x28));
      iVar3 = *(int *)((longlong)param_2 + 0x28);
      piVar2 = (int *)((longlong)param_1 + 0x2c);
      pFVar4 = (FScalarParameterNameAndCurve *)
               ((ForAnyElementType *)((longlong)param_2 + 0x20))->Data;
      *(int *)((longlong)param_1 + 0x28) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x130,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FScalarParameterNameAndCurve,FScalarParameterNameAndCurve,int>
                  (pFVar1->Data,pFVar4,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x30);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x30)) {
      DestructItems<FBoolParameterNameAndCurve,int>
                ((FBoolParameterNameAndCurve *)pFVar1->Data,*(int *)((longlong)param_1 + 0x38));
      iVar3 = *(int *)((longlong)param_2 + 0x38);
      piVar2 = (int *)((longlong)param_1 + 0x3c);
      pFVar5 = (FBoolParameterNameAndCurve *)((ForAnyElementType *)((longlong)param_2 + 0x30))->Data
      ;
      *(int *)((longlong)param_1 + 0x38) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FBoolParameterNameAndCurve,FBoolParameterNameAndCurve,int>
                  (pFVar1->Data,pFVar5,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x40);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x40)) {
      DestructItems<FVector2DParameterNameAndCurves,int>
                ((FVector2DParameterNameAndCurves *)pFVar1->Data,*(int *)((longlong)param_1 + 0x48))
      ;
      iVar3 = *(int *)((longlong)param_2 + 0x48);
      piVar2 = (int *)((longlong)param_1 + 0x4c);
      pFVar6 = (FVector2DParameterNameAndCurves *)
               ((ForAnyElementType *)((longlong)param_2 + 0x40))->Data;
      *(int *)((longlong)param_1 + 0x48) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (600,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FVector2DParameterNameAndCurves,FVector2DParameterNameAndCurves,int>
                  (pFVar1->Data,pFVar6,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x50);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x50)) {
      DestructItems<FVectorParameterNameAndCurves,int>
                ((FVectorParameterNameAndCurves *)pFVar1->Data,*(int *)((longlong)param_1 + 0x58));
      iVar3 = *(int *)((longlong)param_2 + 0x58);
      piVar2 = (int *)((longlong)param_1 + 0x5c);
      pFVar7 = (FVectorParameterNameAndCurves *)
               ((ForAnyElementType *)((longlong)param_2 + 0x50))->Data;
      *(int *)((longlong)param_1 + 0x58) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x380,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FVectorParameterNameAndCurves,FVectorParameterNameAndCurves,int>
                  (pFVar1->Data,pFVar7,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x60);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x60)) {
      DestructItems<FColorParameterNameAndCurves,int>
                ((FColorParameterNameAndCurves *)pFVar1->Data,*(int *)((longlong)param_1 + 0x68));
      iVar3 = *(int *)((longlong)param_2 + 0x68);
      piVar2 = (int *)((longlong)param_1 + 0x6c);
      pFVar8 = (FColorParameterNameAndCurves *)
               ((ForAnyElementType *)((longlong)param_2 + 0x60))->Data;
      *(int *)((longlong)param_1 + 0x68) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x4a8,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FColorParameterNameAndCurves,FColorParameterNameAndCurves,int>
                  (pFVar1->Data,pFVar8,iVar3);
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x70);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x70)) {
      DestructItems<FTransformParameterNameAndCurves,int>
                ((FTransformParameterNameAndCurves *)pFVar1->Data,*(int *)((longlong)param_1 + 0x78)
                );
      iVar3 = *(int *)((longlong)param_2 + 0x78);
      piVar2 = (int *)((longlong)param_1 + 0x7c);
      pFVar9 = (FTransformParameterNameAndCurves *)
               ((ForAnyElementType *)((longlong)param_2 + 0x70))->Data;
      *(int *)((longlong)param_1 + 0x78) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa70,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FTransformParameterNameAndCurves,FTransformParameterNameAndCurves,int>
                  (pFVar1->Data,pFVar9,iVar3);
      }
    }
    param_1 = (void *)((longlong)param_1 + 0x80);
    param_2 = (void *)((longlong)param_2 + 0x80);
  }
  return true;
}

// Construct<FMovieSceneTransformMask> @ 14658d870

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneTransformMask>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FMovieSceneTransformMask> @ 14658d890

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneTransformMask>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FMovieSceneTransformMask> @ 14658d8e0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneTransformMask>(void *param_1)

{
  return;
}

// Copy<FMovieSceneTransformMask> @ 14658da30

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneTransformMask>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieScene3DPathSectionTemplate> @ 14658da60

void __cdecl UE::CoreUObject::Private::Construct<FMovieScene3DPathSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FMovieScene3DPathSectionTemplate__6B_;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x38));
  *(uint *)((longlong)param_1 + 0x164) = *(uint *)((longlong)param_1 + 0x164) & 0xfffffff8;
  *(undefined2 *)((longlong)param_1 + 0x160) = 0;
  return;
}

// ConstructForTests<FMovieScene3DPathSectionTemplate> @ 14658dac0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieScene3DPathSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined ***)param_1 = &___7FMovieScene3DPathSectionTemplate__6B_;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x38));
  *(uint *)((longlong)param_1 + 0x164) = *(uint *)((longlong)param_1 + 0x164) & 0xfffffff8;
  *(undefined2 *)((longlong)param_1 + 0x160) = 0;
  return;
}

// Destruct<FMovieScene3DPathSectionTemplate> @ 14658db20

void __cdecl UE::CoreUObject::Private::Destruct<FMovieScene3DPathSectionTemplate>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x38));
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieScene3DPathSectionTemplate> @ 14658db50

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieScene3DPathSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  int local_res18;
  
  if (param_3 != 0) {
    pvVar6 = param_1;
    local_res18 = param_3;
    do {
      pvVar5 = (void *)((longlong)pvVar6 + ((longlong)param_2 - (longlong)param_1));
      *(undefined1 *)((longlong)pvVar6 + 8) = *(undefined1 *)((longlong)pvVar5 + 8);
      *(undefined1 *)((longlong)pvVar6 + 0x10) = *(undefined1 *)((longlong)pvVar5 + 0x10);
      *(undefined8 *)((longlong)pvVar6 + 0x14) = *(undefined8 *)((longlong)pvVar5 + 0x14);
      uVar3 = *(undefined8 *)((longlong)pvVar5 + 0x28);
      *(undefined8 *)((longlong)pvVar6 + 0x20) = *(undefined8 *)((longlong)pvVar5 + 0x20);
      *(undefined8 *)((longlong)pvVar6 + 0x28) = uVar3;
      *(undefined8 *)((longlong)pvVar6 + 0x30) = *(undefined8 *)((longlong)pvVar5 + 0x30);
      if (pvVar5 != pvVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar6 + 0x40),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar5 + 0x40));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar6 + 0x60),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar5 + 0x60));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar6 + 0x80),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar5 + 0x80));
      }
      *(undefined1 *)((longlong)pvVar6 + 0xa0) = *(undefined1 *)((longlong)pvVar5 + 0xa0);
      *(undefined1 *)((longlong)pvVar6 + 0xa1) = *(undefined1 *)((longlong)pvVar5 + 0xa1);
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar6 + 0xa8),
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar5 + 0xa8));
      if (pvVar6 != pvVar5) {
        iVar2 = *(int *)((longlong)pvVar5 + 0xc0);
        piVar1 = (int *)((longlong)pvVar6 + 0xc4);
        _Src = *(void **)((longlong)pvVar5 + 0xb8);
        *(int *)((longlong)pvVar6 + 0xc0) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,iVar2,*piVar1,(ForAnyElementType *)((longlong)pvVar6 + 0xb8),iVar2,
                     piVar1);
          if (iVar2 != 0) {
            memcpy(((ForAnyElementType *)((longlong)pvVar6 + 0xb8))->Data,_Src,
                   (longlong)iVar2 * 0x1c);
          }
        }
      }
      *(undefined4 *)((longlong)pvVar6 + 200) = *(undefined4 *)((longlong)pvVar5 + 200);
      *(undefined1 *)((longlong)pvVar6 + 0xcc) = *(undefined1 *)((longlong)pvVar5 + 0xcc);
      FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar6 + 0xd0));
      *(undefined8 *)((longlong)pvVar6 + 0x158) = *(undefined8 *)((longlong)pvVar5 + 0x158);
      *(undefined1 *)((longlong)pvVar6 + 0x160) = *(undefined1 *)((longlong)pvVar5 + 0x160);
      *(undefined1 *)((longlong)pvVar6 + 0x161) = *(undefined1 *)((longlong)pvVar5 + 0x161);
      uVar4 = (*(uint *)((longlong)pvVar6 + 0x164) ^ *(uint *)((longlong)pvVar5 + 0x164)) & 1 ^
              *(uint *)((longlong)pvVar6 + 0x164);
      *(uint *)((longlong)pvVar6 + 0x164) = uVar4;
      uVar4 = (uVar4 ^ *(uint *)((longlong)pvVar5 + 0x164)) & 2 ^ uVar4;
      *(uint *)((longlong)pvVar6 + 0x164) = uVar4;
      local_res18 = local_res18 + -1;
      *(uint *)((longlong)pvVar6 + 0x164) =
           (uVar4 ^ *(uint *)((longlong)pvVar5 + 0x164)) & 4 ^ uVar4;
      pvVar6 = (void *)((longlong)pvVar6 + 0x168);
    } while (local_res18 != 0);
  }
  return true;
}

// Construct<FMovieSceneAudioInputData> @ 14658de40

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneAudioInputData>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  lVar2 = 9;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// ConstructForTests<FMovieSceneAudioInputData> @ 14658e000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneAudioInputData>(void *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 9;
  puVar1 = param_1;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FMovieSceneAudioInputData> @ 14658e030

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneAudioInputData>(void *param_1)

{
  return;
}

// Copy<FMovieSceneAudioInputData> @ 14658e040

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneAudioInputData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_3 != 0) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar13 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar13 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      param_1 = (void *)((longlong)param_1 + 0x60);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneFloatPerlinNoiseChannel> @ 14658e0a0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneFloatPerlinNoiseChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneFloatPerlinNoiseChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FMovieSceneFloatPerlinNoiseChannel> @ 14658e110

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneFloatPerlinNoiseChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneFloatPerlinNoiseChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FMovieSceneFloatPerlinNoiseChannel> @ 14658e1c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneFloatPerlinNoiseChannel>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneChannel__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x48));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x28));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 8));
  return;
}

// Copy<FMovieSceneFloatPerlinNoiseChannel> @ 14658e1d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneFloatPerlinNoiseChannel>
          (void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48),
                 pTVar1);
    }
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x68) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x70) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x78) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pvVar3 = (void *)((longlong)pvVar3 + 0x80);
  }
  return true;
}

// Construct<FMovieScene3DTransformKeyStruct> @ 14658e2c0

void __cdecl UE::CoreUObject::Private::Construct<FMovieScene3DTransformKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined ***)param_1 = &___7FMovieScene3DTransformKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// ConstructForTests<FMovieScene3DTransformKeyStruct> @ 14658e350

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieScene3DTransformKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  *(undefined ***)param_1 = &___7FMovieScene3DTransformKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 0x20) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x28) = dVar2;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  *(double *)((longlong)param_1 + 0x48) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  return;
}

// Destruct<FMovieScene3DTransformKeyStruct> @ 14658e3c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieScene3DTransformKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FMovieSceneEventSectionTemplate> @ 14658e500

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEventSectionTemplate>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneEventSectionTemplate__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FMovieSceneEventSectionData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 2;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(uint *)((longlong)param_1 + 0x130) = *(uint *)((longlong)param_1 + 0x130) & 0xfffffffc;
  return;
}

// Construct<FMovieSceneCameraShakeInstanceData> @ 14658e510

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneCameraShakeInstanceData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x19) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMovieSceneEventSectionTemplate> @ 14658e540

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneEventSectionTemplate>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneEventSectionTemplate__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FMovieSceneEventSectionData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 2;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(uint *)((longlong)param_1 + 0x130) = *(uint *)((longlong)param_1 + 0x130) & 0xfffffffc;
  return;
}

// ConstructForTests<FMovieSceneCameraShakeInstanceData> @ 14658e550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneCameraShakeInstanceData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMovieSceneEventSectionTemplate> @ 14658e570

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEventSectionTemplate>(void *param_1)

{
  FMovieSceneEventSectionData::~FMovieSceneEventSectionData
            ((FMovieSceneEventSectionData *)((longlong)param_1 + 0x20));
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Destruct<FMovieSceneCameraShakeInstanceData> @ 14658e5a0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneCameraShakeInstanceData>(void *param_1)

{
  return;
}

// Construct<FMovieSceneCameraShakeSourceTriggerChannel> @ 14658e5b0

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneCameraShakeSourceTriggerChannel>(void *param_1)

{
  memset(param_1,0,0x110);
  FMovieSceneCameraShakeSourceTriggerChannel::FMovieSceneCameraShakeSourceTriggerChannel(param_1);
  return;
}

// ConstructForTests<FMovieSceneCameraShakeSourceTriggerChannel> @ 14658e5e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneCameraShakeSourceTriggerChannel>
          (void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneCameraShakeSourceTriggerChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  return;
}

// Destruct<FMovieSceneCameraShakeSourceTriggerChannel> @ 14658e5f0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneCameraShakeSourceTriggerChannel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xc0));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FMovieSceneEventSectionTemplate> @ 14658e600

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEventSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  FEventPayload *pFVar5;
  uint uVar6;
  void *pvVar7;
  int local_res18;
  
  if (param_3 != 0) {
    pvVar7 = param_1;
    local_res18 = param_3;
    do {
      pvVar3 = (void *)((longlong)pvVar7 + ((longlong)param_2 - (longlong)param_1));
      *(undefined1 *)((longlong)pvVar7 + 8) =
           *(undefined1 *)((longlong)pvVar7 + ((longlong)param_2 - (longlong)param_1) + 8);
      *(undefined1 *)((longlong)pvVar7 + 0x10) = *(undefined1 *)((longlong)pvVar3 + 0x10);
      *(undefined8 *)((longlong)pvVar7 + 0x14) = *(undefined8 *)((longlong)pvVar3 + 0x14);
      if (pvVar3 != pvVar7) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x68),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x68));
      }
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar7 + 0x88),
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar3 + 0x88));
      if (pvVar7 != pvVar3) {
        pFVar1 = (ForAnyElementType *)((longlong)pvVar7 + 0x98);
        DestructItems<FEventPayload,int>
                  ((FEventPayload *)pFVar1->Data,*(int *)((longlong)pvVar7 + 0xa0));
        iVar4 = *(int *)((longlong)pvVar3 + 0xa0);
        piVar2 = (int *)((longlong)pvVar7 + 0xa4);
        pFVar5 = *(FEventPayload **)((longlong)pvVar3 + 0x98);
        *(int *)((longlong)pvVar7 + 0xa0) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FEventPayload,FEventPayload,int>(pFVar1->Data,pFVar5,iVar4);
        }
      }
      FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar7 + 0xa8));
      uVar6 = (*(uint *)((longlong)pvVar7 + 0x130) ^ *(uint *)((longlong)pvVar3 + 0x130)) & 1 ^
              *(uint *)((longlong)pvVar7 + 0x130);
      *(uint *)((longlong)pvVar7 + 0x130) = uVar6;
      local_res18 = local_res18 + -1;
      *(uint *)((longlong)pvVar7 + 0x130) =
           (uVar6 ^ *(uint *)((longlong)pvVar3 + 0x130)) & 2 ^ uVar6;
      pvVar7 = (void *)((longlong)pvVar7 + 0x138);
    } while (local_res18 != 0);
  }
  return true;
}

// Copy<FMovieSceneCameraShakeInstanceData> @ 14658e7a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneCameraShakeInstanceData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      uVar2 = puVar1[2];
      puVar3[1] = puVar1[1];
      puVar3[2] = uVar2;
      *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar1 + 3);
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMovieSceneCameraShakeSourceTriggerChannel> @ 14658e830

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneCameraShakeSourceTriggerChannel>
          (void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int *piVar4;
  int iVar5;
  FMovieSceneCameraShakeSourceTrigger *pFVar6;
  void *pvVar7;
  
  pvVar7 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48),
                 pTVar1);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar7 + 0x68),
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar7 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pFVar3 = (ForAnyElementType *)((longlong)pvVar7 + 0x78);
    if (pFVar3 != pFVar2) {
      iVar5 = *(int *)((longlong)pvVar7 + (longlong)param_2 + (0x80 - (longlong)param_1));
      piVar4 = (int *)((longlong)pvVar7 + 0x84);
      pFVar6 = (FMovieSceneCameraShakeSourceTrigger *)pFVar2->Data;
      *(int *)((longlong)pvVar7 + 0x80) = iVar5;
      if ((iVar5 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar5,*piVar4,pFVar3,iVar5,piVar4);
        ConstructItems<FMovieSceneCameraShakeSourceTrigger,FMovieSceneCameraShakeSourceTrigger,int>
                  (pFVar3->Data,pFVar6,iVar5);
      }
    }
    FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar7 + 0x88));
    pvVar7 = (void *)((longlong)pvVar7 + 0x110);
  }
  return true;
}

// Construct<FMovieSceneEventChannel> @ 14658e960

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEventChannel>(void *param_1)

{
  memset(param_1,0,0x110);
  FMovieSceneEventChannel::FMovieSceneEventChannel(param_1);
  return;
}

// ConstructForTests<FMovieSceneEventChannel> @ 14658e990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneEventChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneEventChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  return;
}

// Destruct<FMovieSceneEventChannel> @ 14658ea60

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEventChannel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xc0));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0x88));
  DestructItems<FMovieSceneEvent,int>
            (*(FMovieSceneEvent **)((longlong)param_1 + 0x78),*(int *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FMovieSceneEventChannel> @ 14658ecb0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEventChannel>(void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int *piVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  void *pvVar7;
  
  pvVar7 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48),
                 pTVar1);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar7 + 0x68),
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar7 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pFVar3 = (ForAnyElementType *)((longlong)pvVar7 + 0x78);
    if (pFVar3 != pFVar2) {
      DestructItems<FMovieSceneEvent,int>
                ((FMovieSceneEvent *)pFVar3->Data,*(int *)((longlong)pvVar7 + 0x80));
      iVar5 = *(int *)((longlong)pvVar7 + (longlong)param_2 + (0x80 - (longlong)param_1));
      piVar4 = (int *)((longlong)pvVar7 + 0x84);
      pFVar6 = pFVar2->Data;
      *(int *)((longlong)pvVar7 + 0x80) = iVar5;
      if ((iVar5 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar5,*piVar4,pFVar3,iVar5,piVar4);
        ConstructItems<FMovieSceneEvent,FMovieSceneEvent,int>
                  (pFVar3->Data,(FMovieSceneEvent *)pFVar6,iVar5);
      }
    }
    FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar7 + 0x88));
    pvVar7 = (void *)((longlong)pvVar7 + 0x110);
  }
  return true;
}

// Construct<FMovieScene3DScaleKeyStruct> @ 14658eef0

void __cdecl UE::CoreUObject::Private::Construct<FMovieScene3DScaleKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FMovieScene3DScaleKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FMovieScene3DScaleKeyStruct> @ 14658ef40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieScene3DScaleKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FMovieScene3DScaleKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMovieScene3DScaleKeyStruct> @ 14658ef80

void __cdecl UE::CoreUObject::Private::Destruct<FMovieScene3DScaleKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FMovieSceneCameraShakeComponentData> @ 14658efc0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneCameraShakeComponentData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FMovieSceneCameraShakeComponentData> @ 14658eff0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneCameraShakeComponentData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMovieSceneCameraShakeComponentData> @ 14658f020

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneCameraShakeComponentData>(void *param_1)

{
  return;
}

// Construct<FMovieSceneCameraShakeSourceTrigger> @ 14658f030

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneCameraShakeSourceTrigger>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneCameraShakeSourceTrigger> @ 14658f060

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneCameraShakeSourceTrigger>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneCameraShakeSourceTrigger> @ 14658f090

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneCameraShakeSourceTrigger>(void *param_1)

{
  return;
}

// Copy<FMovieSceneCameraShakeComponentData> @ 14658f0a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneCameraShakeComponentData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar3 + 0xc) = *(undefined1 *)((longlong)puVar1 + 0xc);
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      *(undefined4 *)(puVar3 + 5) = *(undefined4 *)(puVar1 + 5);
      *(undefined4 *)((longlong)puVar3 + 0x2c) = *(undefined4 *)((longlong)puVar1 + 0x2c);
      uVar2 = puVar1[7];
      puVar3[6] = puVar1[6];
      puVar3[7] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 8;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMovieSceneCameraShakeSourceTrigger> @ 14658f160

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneCameraShakeSourceTrigger>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar3 + 0xc) = *(undefined1 *)((longlong)puVar1 + 0xc);
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneBaseCacheSectionTemplateParameters> @ 14658f210

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneBaseCacheSectionTemplateParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMovieSceneBaseCacheSectionTemplateParameters> @ 14658f220

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneBaseCacheSectionTemplateParameters>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMovieSceneBaseCacheSectionTemplateParameters> @ 14658f230

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneBaseCacheSectionTemplateParameters>(void *param_1)

{
  return;
}

// Copy<FMovieSceneBaseCacheSectionTemplateParameters> @ 14658f240

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneBaseCacheSectionTemplateParameters>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneEvent> @ 14658f340

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneEvent> @ 14658f360

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneEvent>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneEvent> @ 14658f380

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEvent>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// Construct<FMovieScene3DRotationKeyStruct> @ 14658f3a0

void __cdecl UE::CoreUObject::Private::Construct<FMovieScene3DRotationKeyStruct>(void *param_1)

{
  double dVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FMovieScene3DRotationKeyStruct__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 8) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x10) = dVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// Copy<FMovieSceneEvent> @ 14658f3f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEvent>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  FFieldClass *pFVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      pFVar2 = FProperty::StaticClass();
      FFieldPath::GetTyped((FFieldPath *)(puVar1 + 1),pFVar2,(UStruct *)0x0);
      FFieldPath::operator=((FFieldPath *)(puVar3 + 1),(FFieldPath *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FMovieScene3DRotationKeyStruct> @ 14658f4a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieScene3DRotationKeyStruct>(void *param_1)

{
  double dVar1;
  
  *(undefined ***)param_1 = &___7FMovieScene3DRotationKeyStruct__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  *(double *)((longlong)param_1 + 8) = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  *(double *)((longlong)param_1 + 0x10) = dVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMovieScene3DRotationKeyStruct> @ 14658f4e0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieScene3DRotationKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FMovieSceneAudioComponentData> @ 14658f5c0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneAudioComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMovieSceneAudioComponentData> @ 14658f5d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneAudioComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMovieSceneAudioComponentData> @ 14658f5e0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneAudioComponentData>(void *param_1)

{
  return;
}

// Copy<FMovieSceneAudioComponentData> @ 14658f5f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneAudioComponentData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneActorReferenceSectionTemplate> @ 14658f780

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneActorReferenceSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneActorReferenceSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FMovieSceneActorReferenceData::FMovieSceneActorReferenceData
            ((FMovieSceneActorReferenceData *)((longlong)param_1 + 0x38));
  return;
}

// ConstructForTests<FMovieSceneActorReferenceSectionTemplate> @ 14658f7c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneActorReferenceSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneActorReferenceSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  FMovieSceneActorReferenceData::FMovieSceneActorReferenceData
            ((FMovieSceneActorReferenceData *)((longlong)param_1 + 0x38));
  return;
}

// Destruct<FMovieSceneActorReferenceSectionTemplate> @ 14658f880

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneActorReferenceSectionTemplate>(void *param_1)

{
  FMovieSceneActorReferenceData::~FMovieSceneActorReferenceData
            ((FMovieSceneActorReferenceData *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneActorReferenceSectionTemplate> @ 14658fa00

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneActorReferenceSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    FMovieSceneActorReferenceData::operator=
              ((FMovieSceneActorReferenceData *)((longlong)param_1 + 0x38),
               (FMovieSceneActorReferenceData *)((longlong)param_2 + 0x38));
    param_2 = (void *)((longlong)param_2 + 0x170);
    param_1 = (void *)((longlong)param_1 + 0x170);
  }
  return true;
}

// Construct<FMovieSceneEventPtrs> @ 146590600

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEventPtrs>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneEventPtrs> @ 146590620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneEventPtrs>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneEventPtrs> @ 1465906c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEventPtrs>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// Construct<FMovieScene3DLocationKeyStruct> @ 146590790

void __cdecl UE::CoreUObject::Private::Construct<FMovieScene3DLocationKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined ***)param_1 = &___7FMovieScene3DLocationKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FMovieScene3DLocationKeyStruct> @ 146590890

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieScene3DLocationKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1 = &___7FMovieScene3DLocationKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 8) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(double *)((longlong)param_1 + 0x18) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMovieScene3DLocationKeyStruct> @ 146590b80

void __cdecl UE::CoreUObject::Private::Destruct<FMovieScene3DLocationKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Copy<FMovieSceneEventPtrs> @ 146591010

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEventPtrs>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  FFieldClass *pFVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      pFVar2 = FProperty::StaticClass();
      FFieldPath::GetTyped((FFieldPath *)(puVar1 + 1),pFVar2,(UStruct *)0x0);
      FFieldPath::operator=((FFieldPath *)(puVar3 + 1),(FFieldPath *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneSkeletalAnimationComponentData> @ 146591190

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneSkeletalAnimationComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMovieSceneSkeletalAnimationComponentData> @ 1465911a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneSkeletalAnimationComponentData>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMovieSceneSkeletalAnimationComponentData> @ 1465911f0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneSkeletalAnimationComponentData>(void *param_1)

{
  return;
}

// Copy<FMovieSceneSkeletalAnimationComponentData> @ 146591310

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneSkeletalAnimationComponentData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneEventPayloadVariable> @ 146591600

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEventPayloadVariable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMovieSceneEventPayloadVariable> @ 146591660

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneEventPayloadVariable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMovieSceneEventPayloadVariable> @ 1465916c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEventPayloadVariable>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FMovieSceneEventPayloadVariable> @ 1465918d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEventPayloadVariable>
          (void *param_1,void *param_2,int param_3)

{
  FSoftObjectPath *pFVar1;
  FSoftObjectPath *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FSoftObjectPath *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FSoftObjectPath::operator=(this,pFVar1);
      ::FString::operator=((FString *)(this + 1),(FString *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = (FSoftObjectPath *)&this[1].SubPathString;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FConstraintComponentData> @ 146591a20

void __cdecl UE::CoreUObject::Private::Construct<FConstraintComponentData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FConstraintComponentData> @ 146591a40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FConstraintComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FConstraintComponentData> @ 146591a50

void __cdecl UE::CoreUObject::Private::Destruct<FConstraintComponentData>(void *param_1)

{
  return;
}

// Copy<FConstraintComponentData> @ 146591aa0

bool __cdecl
UE::CoreUObject::Private::Copy<FConstraintComponentData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneDataLayerComponentData> @ 146592160

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneDataLayerComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMovieSceneDataLayerComponentData> @ 146592170

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneDataLayerComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMovieSceneDataLayerComponentData> @ 146592180

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneDataLayerComponentData>(void *param_1)

{
  return;
}

// Copy<FMovieSceneDataLayerComponentData> @ 146592310

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneDataLayerComponentData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneDoublePerlinNoiseChannel> @ 1465924a0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneDoublePerlinNoiseChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneDoublePerlinNoiseChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FMovieSceneDoublePerlinNoiseChannel> @ 146592510

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneDoublePerlinNoiseChannel>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneDoublePerlinNoiseChannel__6B_;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FMovieSceneDoublePerlinNoiseChannel> @ 146592580

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneDoublePerlinNoiseChannel>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneChannel__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x50),
             *(int *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x48));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x30),
             *(int *)((longlong)param_1 + 0x38));
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 0x28));
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)param_1 + 8));
  return;
}

// Copy<FMovieSceneDoublePerlinNoiseChannel> @ 146592590

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneDoublePerlinNoiseChannel>
          (void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48),
                 pTVar1);
    }
    uVar2 = *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x68) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar3 + 0x70) = uVar2;
    *(undefined8 *)((longlong)pvVar3 + 0x78) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pvVar3 = (void *)((longlong)pvVar3 + 0x80);
  }
  return true;
}

// Construct<FLevelVisibilityComponentData> @ 1465931f0

void __cdecl UE::CoreUObject::Private::Construct<FLevelVisibilityComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLevelVisibilityComponentData> @ 146593200

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLevelVisibilityComponentData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FLevelVisibilityComponentData> @ 146593210

void __cdecl UE::CoreUObject::Private::Destruct<FLevelVisibilityComponentData>(void *param_1)

{
  return;
}

// Copy<FLevelVisibilityComponentData> @ 146593220

bool __cdecl
UE::CoreUObject::Private::Copy<FLevelVisibilityComponentData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_2;
    do {
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *(undefined8 *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar1) = *puVar1;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneBaseCacheParams> @ 146593370

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneBaseCacheParams>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined ***)param_1 = &___7FMovieSceneBaseCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// ConstructForTests<FMovieSceneBaseCacheParams> @ 1465933a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneBaseCacheParams>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(undefined ***)param_1 = &___7FMovieSceneBaseCacheParams__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// Destruct<FMovieSceneBaseCacheParams> @ 1465933d0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneBaseCacheParams>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneBaseCacheParams__6B_;
  return;
}

// Copy<FMovieSceneBaseCacheParams> @ 1465933f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneBaseCacheParams>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined4 *)((longlong)pvVar1 + 8) =
         *(undefined4 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0xc) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(uint *)((longlong)pvVar1 + 0x18) =
         *(uint *)((longlong)pvVar1 + 0x18) ^
         (*(uint *)((longlong)pvVar1 + 0x18) ^
         *(uint *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1))) & 1;
    pvVar1 = (void *)((longlong)pvVar1 + 0x20);
  }
  return true;
}

// Construct<FPerlinNoiseParams> @ 146593450

void __cdecl UE::CoreUObject::Private::Construct<FPerlinNoiseParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0x40800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FPerlinNoiseParams> @ 146593480

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPerlinNoiseParams>(void *param_1)

{
  *(undefined4 *)param_1 = 0x40800000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FPerlinNoiseParams> @ 1465934b0

void __cdecl UE::CoreUObject::Private::Destruct<FPerlinNoiseParams>(void *param_1)

{
  return;
}

// Copy<FPerlinNoiseParams> @ 1465934c0

bool __cdecl
UE::CoreUObject::Private::Copy<FPerlinNoiseParams>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 146597220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *param_1,FEntityManager *param_2,FString *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  pFVar6 = local_58.Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = iVar2 + 1;
  OneOfAccessorToString(param_1->ComponentTypes,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  pFVar6 = local_58.Data + (longlong)(int)local_50 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = (int)local_50 + 1;
  OneOfAccessorToString(param_1->ComponentTypes + 1,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar7 = (longlong)(int)local_50;
  local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
  pFVar6 = local_58.Data + lVar7 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  OneOfAccessorToString(param_1->ComponentTypes + 2,param_2,(FString *)pFVar6);
  iVar2 = (int)local_50;
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar6 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar4.Data = local_58.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar5 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar4.Data,iVar5);
    uVar3 = local_50 & 0xffffffff;
    FVar4.Data = FVar4.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Of: [ %s ]");
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 146598ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::
AddAccessorToFilter<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *param_1,FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  TBitArray<TFixedAllocator<12>_> *this;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_88 [32];
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)param_1->ComponentTypes;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x180;
  if (uVar3 != 0xffff) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,uVar3 + 1);
    if ((local_68.NumBits <= (int)(uint)uVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 1);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if ((local_68.NumBits <= (int)(uint)uVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 2);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if ((local_68.NumBits <= (int)(uint)uVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  iVar13 = 0;
  uVar12 = 0;
  iVar7 = (int)(local_68.NumBits + 0x1fU + ((int)(local_68.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  uVar9 = local_68.NumBits & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  uVar10 = 0xffffffff >> ((byte)(0x20 - uVar9) & 0x1f);
  if (0x1f < (int)(0x20 - uVar9)) {
    uVar10 = 0xffffffff;
  }
  uVar9 = 0xffffffff;
  if (iVar7 == 1) {
    uVar9 = uVar10;
  }
  if (0 < iVar7) {
    do {
      if (uVar9 == 0xffffffff) {
        uVar9 = *(uint *)local_68.AllocatorInstance.InlineData[uVar12].Pad;
      }
      else {
        uVar9 = uVar9 & *(uint *)local_68.AllocatorInstance.InlineData[uVar12].Pad;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar8 = (ulonglong)uVar9 - ((ulonglong)(uVar9 >> 1) & 0x5555555555555555);
      uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
      iVar13 = iVar13 + (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38);
      uVar9 = 0xffffffff;
      if (uVar11 == iVar7 - 1U) {
        uVar9 = uVar10;
      }
    } while ((int)uVar11 < iVar7);
    if (iVar13 != 0) goto LAB_146599170;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Mask.NumComponents() != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                     ,0x1bb,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146599170:
  if (0 < local_68.NumBits) {
    iVar7 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar7 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar7 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_68);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x01';
  }
  return;
}

// AddChannelProxy<FMovieSceneDoubleChannel> @ 14659b090

void __cdecl
UE::MovieScene::AddChannelProxy<FMovieSceneDoubleChannel>
          (FMovieSceneChannelProxyData *param_1,UMovieSceneSectionChannelOverrideRegistry *param_2,
          FName param_3,FMovieSceneDoubleChannel *param_4)

{
  UMovieSceneChannelOverrideContainer *pUVar1;
  
  if (param_2 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) {
    pUVar1 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(param_2,param_3);
    if (pUVar1 != (UMovieSceneChannelOverrideContainer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014659b0e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar1 + 0x2d8))
                (pUVar1,param_3,param_1,*(code **)(*(longlong *)pUVar1 + 0x2d8));
      return;
    }
  }
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneDoubleChannel>(param_1,param_4);
  return;
}

// AddChannelProxy<FMovieSceneFloatChannel> @ 14659b110

void __cdecl
UE::MovieScene::AddChannelProxy<FMovieSceneFloatChannel>
          (FMovieSceneChannelProxyData *param_1,UMovieSceneSectionChannelOverrideRegistry *param_2,
          FName param_3,FMovieSceneFloatChannel *param_4)

{
  UMovieSceneChannelOverrideContainer *pUVar1;
  
  if (param_2 != (UMovieSceneSectionChannelOverrideRegistry *)0x0) {
    pUVar1 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(param_2,param_3);
    if (pUVar1 != (UMovieSceneChannelOverrideContainer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014659b162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar1 + 0x2d8))
                (pUVar1,param_3,param_1,*(code **)(*(longlong *)pUVar1 + 0x2d8));
      return;
    }
  }
  FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(param_1,param_4);
  return;
}

// AddKeyToChannel<FMovieSceneBoolChannel,bool_const_&> @ 14659e360

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneBoolChannel,bool_const_&>
          (FMovieSceneBoolChannel *param_1,FFrameNumber param_2,bool *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FKeyHandle FVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar9;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  longlong *plVar10;
  FFrameNumber FVar11;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_98 [8];
  int local_90;
  int iStack_8c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_88;
  TArrayView<bool,int> local_78;
  FMovieSceneChannelData local_68;
  ForAnyElementType *local_50;
  FMovieSceneChannelData local_48;
  undefined8 *local_30;
  
  plVar10 = (longlong *)CONCAT44(in_register_00000014,param_2.Value);
  (**(code **)(*plVar10 + 0x98))(plVar10,&local_68);
  FVar11.Value = (int)param_3;
  iVar5 = FMovieSceneChannelData::FindKey(&local_68,FVar11,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar5 == -1) {
    local_98[0] = *(FScriptContainerElement *)CONCAT71(in_register_00000089,param_4);
    iVar5 = FMovieSceneChannelData::AddKeyInternal(&local_68,FVar11);
    if ((local_50->Data <= local_98) &&
       (local_98 < local_50->Data + *(int *)((longlong)&local_50[1].Data + 4))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (FKeyHandle)uVar7;
      }
    }
    iVar8 = *(int *)&local_50[1].Data;
    piVar1 = (int *)((longlong)&local_50[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x101,local_50,piVar1);
    }
    *(int *)&local_50[1].Data = iVar8 + 1;
    memmove(local_50->Data + iVar5 + 1,local_50->Data + iVar5,(longlong)(iVar8 - iVar5));
    local_50->Data[iVar5] = local_98[0];
    if (local_68.OwningChannel != (FMovieSceneChannel *)0x0) {
      bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &(local_68.OwningChannel)->KeyAddedEvent);
      if (bVar4) {
        local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.ArrayNum = 0;
        local_88.ArrayMax = 0;
        local_90 = iVar5;
        iStack_8c = FVar11.Value;
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_88.AllocatorInstance,&local_88.ArrayMax);
        local_88.ArrayNum = iVar5 + 1;
        *(ulonglong *)(local_88.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             CONCAT44(iStack_8c,local_90);
        TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&(local_68.OwningChannel)->KeyAddedEvent,local_68.OwningChannel,&local_88);
        if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
    }
    FVar6 = FMovieSceneChannelData::GetHandle(&local_68,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar6.Index);
  }
  else {
    FVar6 = FMovieSceneChannelData::GetHandle(&local_68,(int)local_res8);
    FVar6.Index = *(uint *)CONCAT44(extraout_var,FVar6.Index);
    *(uint *)&param_1->_padding_ = FVar6.Index;
    (**(code **)(*plVar10 + 0x98))(plVar10,&local_48);
    iVar5 = FMovieSceneChannelData::GetIndex(&local_48,FVar6);
    if (iVar5 != -1) {
      FVar2 = *(FScriptContainerElement *)CONCAT71(in_register_00000089,param_4);
      local_78.DataPtr = (bool *)*local_30;
      iVar8 = *(int *)(local_30 + 1);
      if (iVar8 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (FKeyHandle)uVar7;
        }
      }
      local_78.ArrayNum = iVar8;
      pFVar9 = (FScriptContainerElement *)TArrayView<bool,int>::operator[](&local_78,iVar5);
      *pFVar9 = FVar2;
    }
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneByteChannel,unsigned_char_const_&> @ 14659e5b0

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneByteChannel,unsigned_char_const_&>
          (FMovieSceneByteChannel *param_1,FFrameNumber param_2,uchar *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  ForAnyElementType *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FKeyHandle FVar9;
  int iVar10;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar11;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneChannel *pFVar12;
  FFrameNumber FVar13;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FScriptContainerElement local_a8 [8];
  int local_a0;
  int iStack_9c;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_98;
  TArrayView<unsigned_char,int> local_88;
  FMovieSceneChannelData local_78;
  ForAnyElementType *local_60;
  FMovieSceneChannelData local_58;
  undefined8 *local_40;
  
  pFVar12 = (FMovieSceneChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_78,pFVar12,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar12[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar12[1].KeyDeletedEvent.field_0x10);
  puVar2 = &pFVar12[1].KeyAddedEvent.field_0x18;
  local_60 = (ForAnyElementType *)puVar2;
  if ((local_78.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (puVar2 == (undefined1 *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (FKeyHandle)uVar7;
    }
  }
  FVar13.Value = (int)param_3;
  iVar8 = FMovieSceneChannelData::FindKey(&local_78,FVar13,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar8 == -1) {
    local_a8[0] = *(FScriptContainerElement *)CONCAT71(in_register_00000089,param_4);
    iVar8 = FMovieSceneChannelData::AddKeyInternal(&local_78,FVar13);
    pFVar5 = local_60;
    if ((local_60->Data <= local_a8) &&
       (local_a8 < local_60->Data + *(int *)((longlong)&local_60[1].Data + 4))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (FKeyHandle)uVar7;
      }
    }
    iVar10 = *(int *)&pFVar5[1].Data;
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    if (iVar10 == *piVar1) {
      iVar10 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar10 + 1;
    memmove(pFVar5->Data + iVar8 + 1,pFVar5->Data + iVar8,(longlong)(iVar10 - iVar8));
    pFVar5->Data[iVar8] = local_a8[0];
    if (local_78.OwningChannel != (FMovieSceneChannel *)0x0) {
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &(local_78.OwningChannel)->KeyAddedEvent);
      if (bVar6) {
        local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_98.ArrayNum = 0;
        local_98.ArrayMax = 0;
        local_a0 = iVar8;
        iStack_9c = FVar13.Value;
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&local_98.AllocatorInstance,&local_98.ArrayMax);
        local_98.ArrayNum = iVar8 + 1;
        *(ulonglong *)(local_98.AllocatorInstance.Data + (longlong)iVar8 * 8) =
             CONCAT44(iStack_9c,local_a0);
        TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
        ::Broadcast(&(local_78.OwningChannel)->KeyAddedEvent,local_78.OwningChannel,&local_98);
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
      }
    }
    FVar9 = FMovieSceneChannelData::GetHandle(&local_78,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Index);
  }
  else {
    FVar9 = FMovieSceneChannelData::GetHandle(&local_78,(int)local_res8);
    FVar9.Index = *(uint *)CONCAT44(extraout_var,FVar9.Index);
    *(uint *)&param_1->_padding_ = FVar9.Index;
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_58,pFVar12,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar12[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar12[1].KeyDeletedEvent.field_0x10);
    local_40 = (undefined8 *)puVar2;
    if ((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (puVar2 == (undefined1 *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (FKeyHandle)uVar7;
      }
    }
    iVar8 = FMovieSceneChannelData::GetIndex(&local_58,FVar9);
    if (iVar8 != -1) {
      FVar3 = *(FScriptContainerElement *)CONCAT71(in_register_00000089,param_4);
      local_88.DataPtr = (uchar *)*local_40;
      iVar10 = *(int *)(local_40 + 1);
      if (iVar10 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (FKeyHandle)uVar7;
        }
      }
      local_88.ArrayNum = iVar10;
      pFVar11 = (FScriptContainerElement *)
                TArrayView<unsigned_char,int>::operator[](&local_88,iVar8);
      *pFVar11 = FVar3;
    }
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneIntegerChannel,int_const_&> @ 14659e880

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneIntegerChannel,int_const_&>
          (FMovieSceneIntegerChannel *param_1,FFrameNumber param_2,int *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FKeyHandle FVar8;
  undefined4 extraout_var;
  int *piVar9;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneChannel *pFVar10;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<int,int> local_88;
  TMovieSceneChannelData<int> local_78;
  FMovieSceneChannelData local_58;
  undefined8 *local_40;
  
  pFVar10 = (FMovieSceneChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_78,pFVar10,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar10[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar10[1].KeyDeletedEvent.field_0x8);
  puVar1 = &pFVar10[1].KeyAddedEvent.field_0x18;
  local_78.Values = (TArray<int,TSizedDefaultAllocator<32>_> *)puVar1;
  if ((local_78._padding_ == 0) || (puVar1 == (undefined1 *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FKeyHandle)uVar6;
    }
  }
  iVar7 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_78,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar7 == -1) {
    TMovieSceneChannelData<int>::AddKey
              (&local_78,(FFrameNumber)(int)param_3,*(int *)CONCAT71(in_register_00000089,param_4));
    FVar8 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_78,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar8.Index);
  }
  else {
    FVar8 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_78,(int)local_res8);
    FVar8.Index = *(uint *)CONCAT44(extraout_var,FVar8.Index);
    *(uint *)&param_1->_padding_ = FVar8.Index;
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_58,pFVar10,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar10[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar10[1].KeyDeletedEvent.field_0x8);
    local_40 = (undefined8 *)puVar1;
    if ((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (puVar1 == (undefined1 *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (FKeyHandle)uVar6;
      }
    }
    iVar7 = FMovieSceneChannelData::GetIndex(&local_58,FVar8);
    if (iVar7 != -1) {
      iVar2 = *(int *)CONCAT71(in_register_00000089,param_4);
      local_88.DataPtr = (int *)*local_40;
      iVar3 = *(int *)(local_40 + 1);
      if (iVar3 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (FKeyHandle)uVar6;
        }
      }
      local_88.ArrayNum = iVar3;
      piVar9 = TArrayView<int,int>::operator[](&local_88,iVar7);
      *piVar9 = iVar2;
    }
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_const_&> @ 14659ea30

FKeyHandle __cdecl
UE::MovieScene::
AddKeyToChannel<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_const_&>
          (FMovieSceneObjectPathChannel *param_1,FFrameNumber param_2,
          FMovieSceneObjectPathChannelKeyValue *param_3,EMovieSceneKeyInterpolation param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FKeyHandle FVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneChannel *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined7 in_register_00000089;
  FMovieSceneObjectPathChannelKeyValue *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_78;
  FMovieSceneChannelData local_58;
  longlong *local_40;
  
  pFVar12 = (FMovieSceneObjectPathChannelKeyValue *)CONCAT71(in_register_00000089,param_4);
  pFVar9 = (FMovieSceneChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_78,pFVar9,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar9[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar9[1].KeyMovedEvent.field_0x10);
  puVar1 = &pFVar9[1].KeyAddedEvent.field_0x10;
  local_78.Values =
       (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)puVar1;
  if ((local_78._padding_ == 0) || (puVar1 == (undefined1 *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (FKeyHandle)uVar6;
    }
  }
  iVar7 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_78,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar7 == -1) {
    TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::AddKey
              (&local_78,(FFrameNumber)(int)param_3,pFVar12);
    FVar8 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_78,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar8.Index);
  }
  else {
    FVar8 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_78,(int)local_res8);
    FVar8.Index = *(uint *)CONCAT44(extraout_var,FVar8.Index);
    *(uint *)&param_1->_padding_ = FVar8.Index;
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_58,pFVar9,
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar9[1].KeyAddedEvent,
               (FKeyHandleLookupTable *)&pFVar9[1].KeyMovedEvent.field_0x10);
    local_40 = (longlong *)puVar1;
    if ((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (puVar1 == (undefined1 *)0x0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (FKeyHandle)uVar6;
      }
    }
    uVar6 = FMovieSceneChannelData::GetIndex(&local_58,FVar8);
    if (uVar6 != 0xffffffff) {
      lVar11 = local_40[1];
      lVar2 = *local_40;
      if ((int)lVar11 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (FKeyHandle)uVar6;
        }
      }
      uVar10 = 0;
      if ((int)uVar6 < (int)lVar11) {
        uVar10 = ~uVar6 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (FKeyHandle)uVar6;
        }
      }
      lVar11 = (longlong)(int)uVar6 * 0x30;
      *(undefined8 *)(lVar2 + lVar11) = *(undefined8 *)&(pFVar12->SoftPtr).SoftObjectPtr;
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)(lVar2 + lVar11 + 8),
                 (FSoftObjectPath *)&(pFVar12->SoftPtr).SoftObjectPtr.field_0x8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (pFVar12->HardPtr).field0_0x0.DebugPtr, pUVar3 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar3);
      }
      *(TObjectPtr<UObject>_u_0 *)(lVar2 + lVar11 + 0x28) = (pFVar12->HardPtr).field0_0x0;
    }
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneStringChannel,FString_const_&> @ 14659ec50

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneStringChannel,FString_const_&>
          (FMovieSceneStringChannel *param_1,FFrameNumber param_2,FString *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FKeyHandle FVar7;
  undefined4 extraout_var;
  FString *this;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneChannel *pFVar8;
  undefined7 in_register_00000089;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TArrayView<FString,int> local_88;
  TMovieSceneChannelData<FString> local_78;
  FMovieSceneChannelData local_58;
  undefined8 *local_40;
  
  pFVar8 = (FMovieSceneChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_78,pFVar8,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
             (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x10);
  puVar1 = &pFVar8[1].KeyAddedEvent.field_0x8;
  local_78.Values = (TArray<FString,TSizedDefaultAllocator<32>_> *)puVar1;
  if ((local_78._padding_ == 0) || (puVar1 == (undefined1 *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (FKeyHandle)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_78,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<FString>::AddKey
              (&local_78,(FFrameNumber)(int)param_3,
               (FString *)CONCAT71(in_register_00000089,param_4));
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_78,(int)local_res10);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_78,(int)local_res8);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    *(uint *)&param_1->_padding_ = FVar7.Index;
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_58,pFVar8,(TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
               (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x10);
    local_40 = (undefined8 *)puVar1;
    if ((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (puVar1 == (undefined1 *)0x0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (FKeyHandle)uVar5;
      }
    }
    iVar6 = FMovieSceneChannelData::GetIndex(&local_58,FVar7);
    if (iVar6 != -1) {
      local_88.DataPtr = (FString *)*local_40;
      iVar2 = *(int *)(local_40 + 1);
      if (iVar2 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (FKeyHandle)uVar5;
        }
      }
      local_88.ArrayNum = iVar2;
      this = TArrayView<FString,int>::operator[](&local_88,iVar6);
      ::FString::operator=(this,(FString *)CONCAT71(in_register_00000089,param_4));
    }
  }
  return (FKeyHandle)(uint)param_1;
}

// AddKeyToChannel<FMovieSceneTextChannel,FText_const_&> @ 14659ee00

FKeyHandle __cdecl
UE::MovieScene::AddKeyToChannel<FMovieSceneTextChannel,FText_const_&>
          (FMovieSceneTextChannel *param_1,FFrameNumber param_2,FText *param_3,
          EMovieSceneKeyInterpolation param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FKeyHandle FVar9;
  undefined4 extraout_var;
  FText *pFVar10;
  undefined4 extraout_var_00;
  undefined4 in_register_00000014;
  FMovieSceneChannel *pFVar11;
  undefined7 in_register_00000089;
  FText *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_98 [8];
  TArrayView<FText,int> local_90;
  TMovieSceneChannelData<FText> local_80;
  FMovieSceneChannelData local_60;
  undefined8 *local_48;
  
  pFVar12 = (FText *)CONCAT71(in_register_00000089,param_4);
  pFVar11 = (FMovieSceneChannel *)CONCAT44(in_register_00000014,param_2.Value);
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_80,pFVar11,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),
             (FKeyHandleLookupTable *)&pFVar11[1].KeyDeletedEvent.field_0x10);
  puVar1 = &pFVar11[1].KeyAddedEvent.field_0x8;
  local_80.Values = (TArray<FText,TSizedDefaultAllocator<32>_> *)puVar1;
  if ((local_80._padding_ == 0) || (puVar1 == (undefined1 *)0x0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FKeyHandle)uVar7;
    }
  }
  iVar8 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_80,(FFrameNumber)(int)param_3,
                     (FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar8 == -1) {
    TMovieSceneChannelData<FText>::AddKey(&local_80,(FFrameNumber)(int)param_3,pFVar12);
    FVar9 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_80,(int)local_98);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)CONCAT44(extraout_var_00,FVar9.Index);
  }
  else {
    FVar9 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_80,(int)local_res8);
    FVar9.Index = *(uint *)CONCAT44(extraout_var,FVar9.Index);
    *(uint *)&param_1->_padding_ = FVar9.Index;
    FMovieSceneChannelData::FMovieSceneChannelData
              (&local_60,pFVar11,(TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar11 + 1),
               (FKeyHandleLookupTable *)&pFVar11[1].KeyDeletedEvent.field_0x10);
    local_48 = (undefined8 *)puVar1;
    if ((local_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
       (puVar1 == (undefined1 *)0x0)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (FKeyHandle)uVar7;
      }
    }
    iVar8 = FMovieSceneChannelData::GetIndex(&local_60,FVar9);
    if (iVar8 != -1) {
      local_90.DataPtr = (FText *)*local_48;
      iVar2 = *(int *)(local_48 + 1);
      if (iVar2 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (FKeyHandle)uVar7;
        }
      }
      local_90.ArrayNum = iVar2;
      pFVar10 = TArrayView<FText,int>::operator[](&local_90,iVar8);
      pIVar3 = (pFVar12->TextData).Reference;
      pIVar4 = (pFVar10->TextData).Reference;
      if (pIVar4 != pIVar3) {
        (pFVar10->TextData).Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res10);
        }
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
        }
      }
      pFVar10->Flags = pFVar12->Flags;
    }
  }
  return (FKeyHandle)(uint)param_1;
}

// AddReferencedObjectForComponent<FComponentMaterialInfo,UScriptStruct_*> @ 14659eff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FComponentMaterialInfo,UScriptStruct_*>
          (FReferenceCollector *param_1,FComponentMaterialInfo *param_2)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pUVar1 = FComponentMaterialInfo::StaticStruct();
  pFVar2 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar3 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar4 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar4,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FConstraintComponentData,UScriptStruct_*> @ 14659f0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FConstraintComponentData,UScriptStruct_*>
          (FReferenceCollector *param_1,FConstraintComponentData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FConstraintComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FConstraintComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConstraintComponentData,(UObject *)pUVar2,
                         L"ConstraintComponentData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FConstraintComponentData.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FLevelVisibilityComponentData,UScriptStruct_*> @ 14659f210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FLevelVisibilityComponentData,UScriptStruct_*>
          (FReferenceCollector *param_1,FLevelVisibilityComponentData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelVisibilityComponentData,(UObject *)pUVar2,
                         L"LevelVisibilityComponentData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FLevelVisibilityComponentData.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMaterialParameterInfo,UScriptStruct_*> @ 14659f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FMaterialParameterInfo,UScriptStruct_*>
          (FReferenceCollector *param_1,FMaterialParameterInfo *param_2)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pUVar1 = FMaterialParameterInfo::StaticStruct();
  pFVar2 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar3 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar4 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar4,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMovieSceneAudioComponentData,UScriptStruct_*> @ 14659f430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FMovieSceneAudioComponentData,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieSceneAudioComponentData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneAudioComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioComponentData,(UObject *)pUVar2,
                         L"MovieSceneAudioComponentData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneAudioComponentData.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMovieSceneAudioInputData,UScriptStruct_*> @ 14659f550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FMovieSceneAudioInputData,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieSceneAudioInputData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAudioInputData,(UObject *)pUVar2,
                         L"MovieSceneAudioInputData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneAudioInputData.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMovieSceneCameraShakeComponentData,UScriptStruct_*> @ 14659f670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FMovieSceneCameraShakeComponentData,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieSceneCameraShakeComponentData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeComponentData,
                         (UObject *)pUVar2,L"MovieSceneCameraShakeComponentData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeComponentData.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMovieSceneCameraShakeInstanceData,UScriptStruct_*> @ 14659f790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FMovieSceneCameraShakeInstanceData,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieSceneCameraShakeInstanceData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeInstanceData,
                         (UObject *)pUVar2,L"MovieSceneCameraShakeInstanceData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneCameraShakeInstanceData.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMovieSceneDataLayerComponentData,UScriptStruct_*> @ 14659f8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FMovieSceneDataLayerComponentData,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieSceneDataLayerComponentData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDataLayerComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneDataLayerComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData,
                         (UObject *)pUVar2,L"MovieSceneDataLayerComponentData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneDataLayerComponentData.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMovieSceneObjectBindingID,UScriptStruct_*> @ 14659f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FMovieSceneObjectBindingID,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieSceneObjectBindingID *param_2)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pUVar1 = FMovieSceneObjectBindingID::StaticStruct();
  pFVar2 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar3 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar4 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar4,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FMovieSceneSkeletalAnimationComponentData,UScriptStruct_*> @ 14659fad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::
AddReferencedObjectForComponent<FMovieSceneSkeletalAnimationComponentData,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieSceneSkeletalAnimationComponentData *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData,
                         (UObject *)pUVar2,L"MovieSceneSkeletalAnimationComponentData");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FMovieSceneSkeletalAnimationComponentData.
           OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AddReferencedObjectForComponent<FPerlinNoiseParams,UScriptStruct_*> @ 14659fbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<FPerlinNoiseParams,UScriptStruct_*>
          (FReferenceCollector *param_1,FPerlinNoiseParams *param_2)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  FFieldClass *pFVar3;
  TTuple<FProperty_const_*,void_const_*> *pTVar4;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar5;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  if (Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseParams,(UObject *)pUVar2,
                         L"PerlinNoiseParams");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FPerlinNoiseParams.OuterSingleton;
  pFVar3 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar3,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar4 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar4->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar5 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar5 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar5,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// AssignValue<FMovieSceneBoolChannel,bool_const_&> @ 1465a0430

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneBoolChannel,bool_const_&>
          (FMovieSceneBoolChannel *param_1,FKeyHandle param_2,bool *param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  bool *pbVar7;
  TArrayView<bool,int> local_38;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  (**(code **)(param_1->_padding_ + 0x98))(param_1,&local_28);
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 == -1) {
    return false;
  }
  bVar1 = *param_3;
  local_38.DataPtr = (bool *)*local_10;
  iVar2 = *(int *)(local_10 + 1);
  if (iVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  local_38.ArrayNum = iVar2;
  pbVar7 = TArrayView<bool,int>::operator[](&local_38,iVar6);
  *pbVar7 = bVar1;
  return true;
}

// AssignValue<FMovieSceneByteChannel,unsigned_char_const_&> @ 1465a04e0

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneByteChannel,unsigned_char_const_&>
          (FMovieSceneByteChannel *param_1,FKeyHandle param_2,uchar *param_3)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uchar *puVar7;
  TArrayView<unsigned_char,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    uVar1 = *param_3;
    local_38.DataPtr = (uchar *)(local_10->AllocatorInstance).Data;
    iVar2 = local_10->ArrayNum;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar2;
    puVar7 = TArrayView<unsigned_char,int>::operator[](&local_38,iVar6);
    *puVar7 = uVar1;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneIntegerChannel,int_const_&> @ 1465a05e0

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneIntegerChannel,int_const_&>
          (FMovieSceneIntegerChannel *param_1,FKeyHandle param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  TArrayView<int,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar6 != -1) {
    iVar1 = *param_3;
    local_38.DataPtr = (int *)(local_10->AllocatorInstance).Data;
    iVar2 = local_10->ArrayNum;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    local_38.ArrayNum = iVar2;
    piVar7 = TArrayView<int,int>::operator[](&local_38,iVar6);
    *piVar7 = iVar1;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_const_&> @ 1465a06e0

bool __cdecl
UE::MovieScene::
AssignValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_const_&>
          (FMovieSceneObjectPathChannel *param_1,FKeyHandle param_2,
          FMovieSceneObjectPathChannelKeyValue *param_3)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FMovieSceneChannelData local_28;
  TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (uVar6 != 0xffffffff) {
    iVar1 = local_10->ArrayNum;
    pFVar8 = (local_10->AllocatorInstance).Data;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    uVar7 = 0;
    if ((int)uVar6 < iVar1) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar8 = pFVar8 + (longlong)(int)uVar6 * 0x30;
    *(undefined8 *)pFVar8 = *(undefined8 *)&(param_3->SoftPtr).SoftObjectPtr;
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)(pFVar8 + 8),
               (FSoftObjectPath *)&(param_3->SoftPtr).SoftObjectPtr.field_0x8);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_3->HardPtr).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    *(TObjectPtr<UObject>_u_0 *)(pFVar8 + 0x28) = (param_3->HardPtr).field0_0x0;
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneStringChannel,FString_const_&> @ 1465a0850

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneStringChannel,FString_const_&>
          (FMovieSceneStringChannel *param_1,FKeyHandle param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *this;
  TArrayView<FString,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar5 != -1) {
    local_38.DataPtr = (FString *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    local_38.ArrayNum = iVar1;
    this = TArrayView<FString,int>::operator[](&local_38,iVar5);
    ::FString::operator=(this,param_3);
    return true;
  }
  return false;
}

// AssignValue<FMovieSceneTextChannel,FText_const_&> @ 1465a0950

bool __cdecl
UE::MovieScene::AssignValue<FMovieSceneTextChannel,FText_const_&>
          (FMovieSceneTextChannel *param_1,FKeyHandle param_2,FText *param_3)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FText *pFVar8;
  undefined1 local_res8 [8];
  TArrayView<FText,int> local_38;
  FMovieSceneChannelData local_28;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_10;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_10 = &param_1->Values;
  if ((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
     (local_10 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = FMovieSceneChannelData::GetIndex(&local_28,param_2);
  if (iVar7 != -1) {
    local_38.DataPtr = (FText *)(local_10->AllocatorInstance).Data;
    iVar1 = local_10->ArrayNum;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_38.ArrayNum = iVar1;
    pFVar8 = TArrayView<FText,int>::operator[](&local_38,iVar7);
    pIVar2 = (param_3->TextData).Reference;
    pIVar3 = (pFVar8->TextData).Reference;
    if (pIVar3 != pIVar2) {
      (pFVar8->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    pFVar8->Flags = param_3->Flags;
    return true;
  }
  return false;
}

// ConvertOperationalProperty<signed_char,__int64> @ 1465a8210

void __cdecl
UE::MovieScene::ConvertOperationalProperty<signed_char,__int64>(schar *param_1,long64 *param_2)

{
  *param_2 = (longlong)*param_1;
  return;
}

// ConvertOperationalProperty<unsigned_char,unsigned_char> @ 1465a8220

void __cdecl
UE::MovieScene::ConvertOperationalProperty<unsigned_char,unsigned_char>
          (uchar *param_1,uchar *param_2)

{
  *param_2 = *param_1;
  return;
}

// ConvertOperationalProperty<short,__int64> @ 1465a8230

void __cdecl
UE::MovieScene::ConvertOperationalProperty<short,__int64>(short *param_1,long64 *param_2)

{
  *param_2 = (longlong)*param_1;
  return;
}

// ConvertOperationalProperty<int,__int64> @ 1465a8240

void __cdecl UE::MovieScene::ConvertOperationalProperty<int,__int64>(int *param_1,long64 *param_2)

{
  *param_2 = (longlong)*param_1;
  return;
}

// ConvertOperationalProperty<float,double> @ 1465a8250

void __cdecl
UE::MovieScene::ConvertOperationalProperty<float,double>(float *param_1,double *param_2)

{
  *param_2 = (double)*param_1;
  return;
}

// ConvertOperationalProperty<double,float> @ 1465a8270

void __cdecl
UE::MovieScene::ConvertOperationalProperty<double,float>(double *param_1,float *param_2)

{
  *param_2 = (float)*param_1;
  return;
}

// ConvertOperationalProperty<double,double> @ 1465a8290

void __cdecl
UE::MovieScene::ConvertOperationalProperty<double,double>(double *param_1,double *param_2)

{
  *param_2 = *param_1;
  return;
}

// ConvertOperationalProperty<UE::Math::TRotator<double>,UE::Math::TRotator<double>_> @ 1465a82a0

void __cdecl
UE::MovieScene::ConvertOperationalProperty<UE::Math::TRotator<double>,UE::Math::TRotator<double>_>
          (TRotator<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  
  dVar1 = param_1->Yaw;
  param_2->Pitch = param_1->Pitch;
  param_2->Yaw = dVar1;
  param_2->Roll = param_1->Roll;
  return;
}

// ConvertOperationalProperty<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform> @ 1465a82c0

void __cdecl
UE::MovieScene::
ConvertOperationalProperty<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform>
          (FIntermediate3DTransform *param_1,FIntermediate3DTransform *param_2)

{
  double dVar1;
  
  dVar1 = param_1->T_Y;
  param_2->T_X = param_1->T_X;
  param_2->T_Y = dVar1;
  dVar1 = param_1->R_X;
  param_2->T_Z = param_1->T_Z;
  param_2->R_X = dVar1;
  dVar1 = param_1->R_Z;
  param_2->R_Y = param_1->R_Y;
  param_2->R_Z = dVar1;
  dVar1 = param_1->S_Y;
  param_2->S_X = param_1->S_X;
  param_2->S_Y = dVar1;
  param_2->S_Z = param_1->S_Z;
  return;
}

// ConvertOperationalProperty<FString,FString> @ 1465a82f0

void __cdecl
UE::MovieScene::ConvertOperationalProperty<FString,FString>(FString *param_1,FString *param_2)

{
  ::FString::operator=(param_2,param_1);
  return;
}

// ConvertOperationalProperty<FText,FText> @ 1465a8310

void __cdecl UE::MovieScene::ConvertOperationalProperty<FText,FText>(FText *param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_2->TextData).Reference;
  pIVar2 = (param_1->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (param_2->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    param_2->Flags = param_1->Flags;
    return;
  }
  param_2->Flags = param_1->Flags;
  return;
}

// ConvertOperationalProperty<__int64,signed_char> @ 1465a8390

void __cdecl
UE::MovieScene::ConvertOperationalProperty<__int64,signed_char>(long64 *param_1,schar *param_2)

{
  *param_2 = (schar)*param_1;
  return;
}

// ConvertOperationalProperty<__int64,short> @ 1465a83a0

void __cdecl
UE::MovieScene::ConvertOperationalProperty<__int64,short>(long64 *param_1,short *param_2)

{
  *param_2 = (short)*param_1;
  return;
}

// ConvertOperationalProperty<__int64,int> @ 1465a83b0

void __cdecl UE::MovieScene::ConvertOperationalProperty<__int64,int>(long64 *param_1,int *param_2)

{
  *param_2 = (int)*param_1;
  return;
}

// ConvertOperationalProperty<__int64,__int64> @ 1465a83c0

void __cdecl
UE::MovieScene::ConvertOperationalProperty<__int64,__int64>(long64 *param_1,long64 *param_2)

{
  *param_2 = *param_1;
  return;
}

// DereferenceIfNecessary<UMovieSceneInterrogatedPropertyInstantiatorSystem,UMovieSceneInterrogatedPropertyInstantiatorSystem_*_&> @ 1465ac330

UMovieSceneInterrogatedPropertyInstantiatorSystem * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMovieSceneInterrogatedPropertyInstantiatorSystem,UMovieSceneInterrogatedPropertyInstantiatorSystem_*_&>
          (UMovieSceneInterrogatedPropertyInstantiatorSystem **param_1)

{
  return *param_1;
}

// EvaluateChannel<FMovieSceneDoubleChannel,double> @ 1465be0b0

bool __cdecl
UE::MovieScene::EvaluateChannel<FMovieSceneDoubleChannel,double>
          (FMovieSceneDoubleChannel *param_1,FFrameTime param_2,double *param_3)

{
  bool bVar1;
  
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneDoubleChannel>::EvaluateCached
                    (param_1,(FTimeEvaluationCache *)0x0,param_2,param_3);
  return bVar1;
}

// GetChannelDefault<FMovieSceneBoolChannel_const_,bool> @ 1465d2bf0

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneBoolChannel_const_,bool>
          (FMovieSceneBoolChannel *param_1,bool *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneByteChannel_const_,unsigned_char> @ 1465d2c10

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneByteChannel_const_,unsigned_char>
          (FMovieSceneByteChannel *param_1,uchar *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneDoubleChannel_const_,double> @ 1465d2c30

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneDoubleChannel_const_,double>
          (FMovieSceneDoubleChannel *param_1,double *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneFloatChannel_const_,float> @ 1465d2c50

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneFloatChannel_const_,float>
          (FMovieSceneFloatChannel *param_1,float *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneIntegerChannel_const_,int> @ 1465d2c70

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneIntegerChannel_const_,int>
          (FMovieSceneIntegerChannel *param_1,int *param_2)

{
  if (param_1->bHasDefaultValue != false) {
    *param_2 = param_1->DefaultValue;
    return true;
  }
  return false;
}

// GetChannelDefault<FMovieSceneStringChannel_const_,FString> @ 1465d2c90

bool __cdecl
UE::MovieScene::GetChannelDefault<FMovieSceneStringChannel_const_,FString>
          (FMovieSceneStringChannel *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TOptional<FString> *pTVar5;
  int iVar6;
  TOptional<FString>_u_0 local_28;
  TOptional<FString>_u_0 local_18;
  
  pTVar5 = FMovieSceneStringChannel::GetDefault(param_1,(TOptional<FString> *)&local_28.TypedValue);
  iVar6 = *(int *)((longlong)&pTVar5->field0_0x0 + 0xc);
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  if (iVar6 != -1) {
    pTVar5 = FMovieSceneStringChannel::GetDefault
                       (param_1,(TOptional<FString> *)&local_18.TypedValue);
    if (*(int *)((longlong)&pTVar5->field0_0x0 + 0xc) == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar1 = *(int *)((longlong)&pTVar5->field0_0x0 + 8);
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (param_2,(wchar_t *)(pTVar5->field0_0x0).TypedValue.Data.AllocatorInstance.Data,iVar6)
    ;
    if ((local_18.TypedValue.Data.ArrayMax != -1) &&
       (local_18.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
    }
    return true;
  }
  return false;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_> @ 1465d31a0

double __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<double>_>_>
          (TComponentLock<UE::MovieScene::TRead<double>_> *param_1,int param_2)

{
  return *(double *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationInstance>_>_> @ 1465d31c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FInterrogationInstance * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationInstance>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationInstance>_> *param_1,
          int param_2)

{
  return (FInterrogationInstance *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationKey>_>_> @ 1465d31e0

FInterrogationKey * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationKey>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInterrogationKey>_> *param_1,
          int param_2)

{
  return (FInterrogationKey *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>_> @ 1465d3200

FMovieScenePropertyBinding * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_>_>
          (TComponentLock<UE::MovieScene::TRead<FMovieScenePropertyBinding>_> *param_1,int param_2)

{
  return (FMovieScenePropertyBinding *)
         (*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 0x14);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>_> @ 1465d3220

FCustomPropertyIndex * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>_>
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FCustomPropertyIndex>_>
           *param_1,int param_2)

{
  if (*(longlong *)&param_1->field_0x10 != 0) {
    return (FCustomPropertyIndex *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 2);
  }
  return (FCustomPropertyIndex *)0x0;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>_> @ 1465d3240

FBoolMetaData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>_>
          (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
           *param_1,int param_2)

{
  return (FBoolMetaData *)(*(longlong *)&param_1->field_0x18 + (longlong)param_2 * 2);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>_> @ 1465d3260

FObjectMetadata * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>_>
          (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
           *param_1,int param_2)

{
  return (FObjectMetadata *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FVariantPropertyTypeIndex>_>_> @ 1465d3280

FVariantPropertyTypeIndex * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FVariantPropertyTypeIndex>_>_>
          (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FVariantPropertyTypeIndex>_>
           *param_1,int param_2)

{
  return (FVariantPropertyTypeIndex *)((longlong)param_2 + *(longlong *)&param_1->field_0x18);
}

// GetInterpolationMode<FMovieSceneBoolChannel> @ 1465d3600

EMovieSceneKeyInterpolation __cdecl
UE::MovieScene::GetInterpolationMode<FMovieSceneBoolChannel>
          (FMovieSceneBoolChannel *param_1,FFrameNumber *param_2,EMovieSceneKeyInterpolation param_3
          )

{
  return param_3;
}

// GetInterpolationMode<FMovieSceneByteChannel> @ 1465d3610

EMovieSceneKeyInterpolation __cdecl
UE::MovieScene::GetInterpolationMode<FMovieSceneByteChannel>
          (FMovieSceneByteChannel *param_1,FFrameNumber *param_2,EMovieSceneKeyInterpolation param_3
          )

{
  return param_3;
}

// GetInterpolationMode<FMovieSceneIntegerChannel> @ 1465d3620

EMovieSceneKeyInterpolation __cdecl
UE::MovieScene::GetInterpolationMode<FMovieSceneIntegerChannel>
          (FMovieSceneIntegerChannel *param_1,FFrameNumber *param_2,
          EMovieSceneKeyInterpolation param_3)

{
  return param_3;
}

// GetInterpolationMode<FMovieSceneObjectPathChannel> @ 1465d3630

EMovieSceneKeyInterpolation __cdecl
UE::MovieScene::GetInterpolationMode<FMovieSceneObjectPathChannel>
          (FMovieSceneObjectPathChannel *param_1,FFrameNumber *param_2,
          EMovieSceneKeyInterpolation param_3)

{
  return param_3;
}

// GetInterpolationMode<FMovieSceneStringChannel> @ 1465d3640

EMovieSceneKeyInterpolation __cdecl
UE::MovieScene::GetInterpolationMode<FMovieSceneStringChannel>
          (FMovieSceneStringChannel *param_1,FFrameNumber *param_2,
          EMovieSceneKeyInterpolation param_3)

{
  return param_3;
}

// GetInterpolationMode<FMovieSceneTextChannel> @ 1465d3650

EMovieSceneKeyInterpolation __cdecl
UE::MovieScene::GetInterpolationMode<FMovieSceneTextChannel>
          (FMovieSceneTextChannel *param_1,FFrameNumber *param_2,EMovieSceneKeyInterpolation param_3
          )

{
  return param_3;
}

// OnRemapChannelKeyTime<FMovieSceneActorReferenceKey> @ 1465f27b0

void __cdecl
UE::MovieScene::OnRemapChannelKeyTime<FMovieSceneActorReferenceKey>
          (FMovieSceneChannel *param_1,IRetimingInterface *param_2,FFrameNumber param_3,
          FFrameNumber param_4,FMovieSceneActorReferenceKey *param_5)

{
  return;
}

// OnRemapChannelKeyTime<FMovieSceneCameraShakeSourceTrigger> @ 1465f27c0

void __cdecl
UE::MovieScene::OnRemapChannelKeyTime<FMovieSceneCameraShakeSourceTrigger>
          (FMovieSceneChannel *param_1,IRetimingInterface *param_2,FFrameNumber param_3,
          FFrameNumber param_4,FMovieSceneCameraShakeSourceTrigger *param_5)

{
  return;
}

// OnRemapChannelKeyTime<FMovieSceneEvent> @ 1465f27d0

void __cdecl
UE::MovieScene::OnRemapChannelKeyTime<FMovieSceneEvent>
          (FMovieSceneChannel *param_1,IRetimingInterface *param_2,FFrameNumber param_3,
          FFrameNumber param_4,FMovieSceneEvent *param_5)

{
  return;
}

// OnRemapChannelKeyTime<FString> @ 1465f27e0

void __cdecl
UE::MovieScene::OnRemapChannelKeyTime<FString>
          (FMovieSceneChannel *param_1,IRetimingInterface *param_2,FFrameNumber param_3,
          FFrameNumber param_4,FString *param_5)

{
  return;
}

// OnRemapChannelKeyTime<FText> @ 1465f27f0

void __cdecl
UE::MovieScene::OnRemapChannelKeyTime<FText>
          (FMovieSceneChannel *param_1,IRetimingInterface *param_2,FFrameNumber param_3,
          FFrameNumber param_4,FText *param_5)

{
  return;
}

// Optimize<FMovieSceneStringChannel> @ 1465f2800

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::MovieScene::Optimize<FMovieSceneStringChannel>
          (FMovieSceneStringChannel *param_1,FKeyDataOptimizationParams *param_2)

{
  FFrameNumber FVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  TRangeBound<FFrameNumber> TVar4;
  void *_Src;
  code *pcVar5;
  FFrameTime FVar6;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FString *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_res18;
  FString local_90;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_80;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_70;
  FMovieSceneChannelData local_60;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_48;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_60,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_48 = &param_1->Values;
  if (((local_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_48 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_60.Times)->ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (1 < (local_60.Times)->ArrayNum) {
    uVar16 = (local_60.Times)->ArrayNum;
    pFVar3 = ((local_60.Times)->AllocatorInstance).Data;
    if (((int)uVar16 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar4 = (param_2->Range).LowerBound;
    uVar9 = 0;
    uVar15 = uVar9;
    if ((TVar4.Type.Value.Value != '\x02') &&
       (uVar14 = uVar16, uVar13 = uVar9, uVar15 = 0, 0 < (int)uVar16)) {
      do {
        uVar17 = uVar14 >> 1;
        uVar15 = uVar13;
        if (*(int *)(pFVar3 + (longlong)(int)(uVar17 + uVar13) * 4) < TVar4.Value.Value.Value) {
          uVar15 = (uVar14 & 1) + uVar17 + uVar13;
        }
        uVar14 = uVar17;
        uVar13 = uVar15;
      } while (uVar17 != 0);
    }
    TVar4 = (param_2->Range).UpperBound;
    if ((TVar4.Type.Value.Value != '\x02') &&
       (bVar8 = 0 < (int)uVar16, uVar14 = uVar16, uVar16 = 0, bVar8)) {
      do {
        uVar13 = uVar14 >> 1;
        uVar16 = uVar9;
        if (*(int *)(pFVar3 + (longlong)(int)(uVar13 + uVar9) * 4) <= TVar4.Value.Value.Value) {
          uVar16 = uVar13 + uVar9 + (uVar14 & 1);
        }
        uVar14 = uVar13;
        uVar9 = uVar16;
      } while (uVar13 != 0);
    }
    lVar19 = (longlong)(int)uVar15;
    if (lVar19 < (int)uVar16) {
      local_res18 = lVar19 << 4;
      do {
        iVar10 = (local_60.Times)->ArrayNum;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iVar10 <= (int)uVar15) {
          return;
        }
        iVar10 = (local_60.Times)->ArrayNum;
        pFVar3 = ((local_60.Times)->AllocatorInstance).Data;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar14 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < iVar10) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar1.Value = *(int *)(pFVar3 + lVar19 * 4);
        iVar10 = local_48->ArrayNum;
        pFVar3 = (local_48->AllocatorInstance).Data;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar15 < iVar10) {
          uVar9 = uVar14;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_90.Data.ArrayNum = *(int *)(pFVar3 + local_res18 + 8);
        lVar18 = (longlong)local_90.Data.ArrayNum;
        _Src = *(void **)(pFVar3 + local_res18);
        if (local_90.Data.ArrayNum == 0) {
          local_90.Data.ArrayMax = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)&local_90,
                     local_90.Data.ArrayNum,&local_90.Data.ArrayMax);
          memcpy(local_90.Data.AllocatorInstance.Data,_Src,lVar18 * 2);
        }
        if ((((int)uVar15 < 0) || ((local_60.Times)->ArrayNum <= (int)uVar15)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(KeyIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x1fc,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((local_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_60.OwningChannel)->KeyDeletedEvent), pTVar7 = local_60.Times,
           bVar8)) {
          uVar9 = 0;
          if ((int)uVar15 < (local_60.Times)->ArrayNum) {
            uVar9 = uVar14;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar2 = *(undefined4 *)((pTVar7->AllocatorInstance).Data + lVar19 * 4);
          local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_80.ArrayNum = 0;
          local_80.ArrayMax = 0;
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_80.AllocatorInstance,&local_80.ArrayMax);
          local_80.ArrayNum = iVar10 + 1;
          *(ulonglong *)(local_80.AllocatorInstance.Data + (longlong)iVar10 * 8) =
               CONCAT44(uVar2,uVar15);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_60.OwningChannel)->KeyDeletedEvent,local_60.OwningChannel,&local_80);
          if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt(local_60.Times,uVar15,No);
        TArray<FString,TSizedDefaultAllocator<32>_>::RemoveAt(local_48,uVar15,No);
        if (local_60.KeyHandles != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle(local_60.KeyHandles,uVar15);
        }
        FVar6.SubFrame = 0.0;
        FVar6.FrameNumber.Value = FVar1.Value;
        pFVar12 = FMovieSceneStringChannel::Evaluate(param_1,FVar6);
        if (pFVar12 == (FString *)0x0) {
LAB_1465f2cc6:
          iVar10 = FMovieSceneChannelData::AddKeyInternal(&local_60,FVar1);
          TArray<FString,TSizedDefaultAllocator<32>_>::Insert(local_48,&local_90,iVar10);
          if ((local_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
             (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 &(local_60.OwningChannel)->KeyAddedEvent), bVar8)) {
            local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_70.ArrayNum = 0;
            local_70.ArrayMax = 0;
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_70.AllocatorInstance,&local_70.ArrayMax);
            local_70.ArrayNum = iVar11 + 1;
            *(ulonglong *)(local_70.AllocatorInstance.Data + (longlong)iVar11 * 8) =
                 CONCAT44(FVar1.Value,iVar10);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&(local_60.OwningChannel)->KeyAddedEvent,local_60.OwningChannel,&local_70);
            if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_70.AllocatorInstance.Data);
            }
          }
        }
        else {
          iVar10 = (pFVar12->Data).ArrayNum;
          if (local_90.Data.ArrayNum == iVar10) {
            if (1 < local_90.Data.ArrayNum) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 ((wchar_t *)local_90.Data.AllocatorInstance.Data,
                                  (wchar_t *)(pFVar12->Data).AllocatorInstance.Data);
              bVar8 = iVar10 == 0;
              goto LAB_1465f2cad;
            }
          }
          else {
            bVar8 = local_90.Data.ArrayNum + iVar10 == 1;
LAB_1465f2cad:
            if (!bVar8) goto LAB_1465f2cc6;
          }
          uVar15 = uVar15 - 1;
          lVar19 = lVar19 + -1;
          local_res18 = local_res18 + -0x10;
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        local_res18 = local_res18 + 0x10;
        uVar15 = uVar15 + 1;
        lVar19 = lVar19 + 1;
      } while (lVar19 < (int)uVar16);
    }
  }
  return;
}

// Optimize<FMovieSceneTextChannel> @ 1465f2dc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::MovieScene::Optimize<FMovieSceneTextChannel>
          (FMovieSceneTextChannel *param_1,FKeyDataOptimizationParams *param_2)

{
  FFrameNumber FVar1;
  FScriptContainerElement *pFVar2;
  TRangeBound<FFrameNumber> TVar3;
  code *pcVar4;
  FFrameTime FVar5;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FText *pFVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStackX_24;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_90;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_80;
  FText local_70;
  FMovieSceneChannelData local_60;
  TArray<FText,TSizedDefaultAllocator<32>_> *local_48;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_60,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_48 = &param_1->Values;
  if (((local_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_48 == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_60.Times)->ArrayNum < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (1 < (local_60.Times)->ArrayNum) {
    uVar15 = (local_60.Times)->ArrayNum;
    pFVar2 = ((local_60.Times)->AllocatorInstance).Data;
    if (((int)uVar15 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar3 = (param_2->Range).LowerBound;
    uVar8 = 0;
    uVar14 = uVar8;
    if ((TVar3.Type.Value.Value != '\x02') &&
       (uVar13 = uVar15, uVar12 = uVar8, uVar14 = 0, 0 < (int)uVar15)) {
      do {
        uVar16 = uVar13 >> 1;
        uVar14 = uVar12;
        if (*(int *)(pFVar2 + (longlong)(int)(uVar16 + uVar12) * 4) < TVar3.Value.Value.Value) {
          uVar14 = (uVar13 & 1) + uVar16 + uVar12;
        }
        uVar13 = uVar16;
        uVar12 = uVar14;
      } while (uVar16 != 0);
    }
    TVar3 = (param_2->Range).UpperBound;
    if ((TVar3.Type.Value.Value != '\x02') &&
       (bVar7 = 0 < (int)uVar15, uVar13 = uVar15, uVar15 = 0, bVar7)) {
      do {
        uVar12 = uVar13 >> 1;
        uVar15 = uVar8;
        if (*(int *)(pFVar2 + (longlong)(int)(uVar12 + uVar8) * 4) <= TVar3.Value.Value.Value) {
          uVar15 = uVar12 + uVar8 + (uVar13 & 1);
        }
        uVar13 = uVar12;
        uVar8 = uVar15;
      } while (uVar12 != 0);
    }
    lVar18 = (longlong)(int)uVar14;
    if (lVar18 < (int)uVar15) {
      lVar17 = lVar18 << 4;
      do {
        iVar9 = (local_60.Times)->ArrayNum;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iVar9 <= (int)uVar14) {
          return;
        }
        iVar9 = (local_60.Times)->ArrayNum;
        pFVar2 = ((local_60.Times)->AllocatorInstance).Data;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = ~uVar14 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1.Value = *(int *)(pFVar2 + lVar18 * 4);
        iVar9 = local_48->ArrayNum;
        pFVar2 = (local_48->AllocatorInstance).Data;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = uVar13;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_70.TextData.Reference = *(ITextData **)(pFVar2 + lVar17);
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 8))
                    (local_70.TextData.Reference,local_res18);
        }
        local_70.Flags = *(uint *)(pFVar2 + lVar17 + 8);
        if ((((int)uVar14 < 0) || ((local_60.Times)->ArrayNum <= (int)uVar14)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(KeyIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x1fc,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_60.OwningChannel)->KeyDeletedEvent), pTVar6 = local_60.Times,
           bVar7)) {
          uVar8 = 0;
          if ((int)uVar14 < (local_60.Times)->ArrayNum) {
            uVar8 = uVar13;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uStackX_24 = *(undefined4 *)((pTVar6->AllocatorInstance).Data + lVar18 * 4);
          local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.ArrayNum = 0;
          local_90.ArrayMax = 0;
          local_res20 = uVar14;
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_90.AllocatorInstance,&local_90.ArrayMax);
          local_90.ArrayNum = iVar9 + 1;
          *(ulonglong *)(local_90.AllocatorInstance.Data + (longlong)iVar9 * 8) =
               CONCAT44(uStackX_24,local_res20);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_60.OwningChannel)->KeyDeletedEvent,local_60.OwningChannel,&local_90);
          if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt(local_60.Times,uVar14,No);
        TArray<FText,TSizedDefaultAllocator<32>_>::RemoveAt(local_48,uVar14,No);
        if (local_60.KeyHandles != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle(local_60.KeyHandles,uVar14);
        }
        FVar5.SubFrame = 0.0;
        FVar5.FrameNumber.Value = FVar1.Value;
        pFVar11 = FMovieSceneTextChannel::Evaluate(param_1,FVar5);
        if ((pFVar11 == (FText *)0x0) || (bVar7 = FText::EqualTo(&local_70,pFVar11,Default), !bVar7)
           ) {
          iVar9 = FMovieSceneChannelData::AddKeyInternal(&local_60,FVar1);
          TArray<FText,TSizedDefaultAllocator<32>_>::Insert(local_48,&local_70,iVar9);
          if ((local_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
             (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 &(local_60.OwningChannel)->KeyAddedEvent), bVar7)) {
            local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_80.ArrayNum = 0;
            local_80.ArrayMax = 0;
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_80.AllocatorInstance,&local_80.ArrayMax);
            local_80.ArrayNum = iVar10 + 1;
            *(ulonglong *)(local_80.AllocatorInstance.Data + (longlong)iVar10 * 8) =
                 CONCAT44(FVar1.Value,iVar9);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&(local_60.OwningChannel)->KeyAddedEvent,local_60.OwningChannel,&local_80);
            if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_80.AllocatorInstance.Data);
            }
          }
        }
        else {
          uVar14 = uVar14 - 1;
          lVar18 = lVar18 + -1;
          lVar17 = lVar17 + -0x10;
        }
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
        }
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar18 < (int)uVar15);
    }
  }
  return;
}

// PatchCompositeValue<unsigned_char> @ 1465f3310

void __cdecl
UE::MovieScene::PatchCompositeValue<unsigned_char>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,uchar *param_3)

{
  code *pcVar1;
  FPropertyCompositeDefinition *pFVar2;
  bool bVar3;
  
  pFVar2 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 != (uchar *)0x0) {
    *(uchar *)((ulonglong)pFVar2->CompositeOffset + (longlong)param_2) = *param_3;
  }
  return;
}

// PatchCompositeValue<double> @ 1465f3390

void __cdecl
UE::MovieScene::PatchCompositeValue<double>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,double *param_3)

{
  code *pcVar1;
  FPropertyCompositeDefinition *pFVar2;
  bool bVar3;
  
  pFVar2 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 != (double *)0x0) {
    *(double *)((ulonglong)pFVar2->CompositeOffset + (longlong)param_2) = *param_3;
  }
  return;
}

// PatchCompositeValue<double,double> @ 1465f3410

void __cdecl
UE::MovieScene::PatchCompositeValue<double,double>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,double *param_3,double *param_4)

{
  int iVar1;
  code *pcVar2;
  FPropertyCompositeDefinition *pFVar3;
  bool bVar4;
  
  pFVar3 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_3 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3->CompositeOffset + (longlong)param_2) = *param_3;
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_4 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3[1].CompositeOffset + (longlong)param_2) = *param_4;
  }
  return;
}

// PatchCompositeValue<double,double,double> @ 1465f3500

void __cdecl
UE::MovieScene::PatchCompositeValue<double,double,double>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,double *param_3,double *param_4,double *param_5)

{
  int iVar1;
  code *pcVar2;
  FPropertyCompositeDefinition *pFVar3;
  bool bVar4;
  
  pFVar3 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_3 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3->CompositeOffset + (longlong)param_2) = *param_3;
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_4 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3[1].CompositeOffset + (longlong)param_2) = *param_4;
  }
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_5 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3[2].CompositeOffset + (longlong)param_2) = *param_5;
  }
  return;
}

// PatchCompositeValue<double,double,double,double> @ 1465f3640

void __cdecl
UE::MovieScene::PatchCompositeValue<double,double,double,double>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,double *param_3,double *param_4,double *param_5,double *param_6)

{
  int iVar1;
  code *pcVar2;
  FPropertyCompositeDefinition *pFVar3;
  bool bVar4;
  
  pFVar3 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_3 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3->CompositeOffset + (longlong)param_2) = *param_3;
  }
  if (iVar1 < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_4 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3[1].CompositeOffset + (longlong)param_2) = *param_4;
  }
  if (iVar1 < 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_5 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3[2].CompositeOffset + (longlong)param_2) = *param_5;
  }
  if (iVar1 < 4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_6 != (double *)0x0) {
    *(double *)((ulonglong)pFVar3[3].CompositeOffset + (longlong)param_2) = *param_6;
  }
  return;
}

// PatchCompositeValue<double,double,double,double,double,double,double,double,double> @ 1465f37c0

void __cdecl
UE::MovieScene::PatchCompositeValue<double,double,double,double,double,double,double,double,double>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,double *param_3,double *param_4,double *param_5,double *param_6,
          double *param_7,double *param_8,double *param_9,double *param_10,double *param_11)

{
  TIntegerSequence<int,0,1,2,3,4,5,6,7,8> local_res8 [32];
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
            (local_res8,&local_18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             param_10,param_11);
  return;
}

// PatchCompositeValue<UE::MovieScene::FObjectComponent> @ 1465f3850

void __cdecl
UE::MovieScene::PatchCompositeValue<UE::MovieScene::FObjectComponent>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,FObjectComponent *param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  FPropertyCompositeDefinition *pFVar3;
  bool bVar4;
  ulonglong uVar5;
  
  pFVar3 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_3 != (FObjectComponent *)0x0) {
    uVar5 = (ulonglong)pFVar3->CompositeOffset;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_3->ObjectPtr).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(TObjectPtr<UObject>_u_0 *)(uVar5 + (longlong)param_2) = (param_3->ObjectPtr).field0_0x0;
    *(FObjectKey *)(uVar5 + 8 + (longlong)param_2) = param_3->ObjectKey;
  }
  return;
}

// PatchCompositeValue<FString> @ 1465f3900

void __cdecl
UE::MovieScene::PatchCompositeValue<FString>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,FString *param_3)

{
  code *pcVar1;
  FPropertyCompositeDefinition *pFVar2;
  bool bVar3;
  
  pFVar2 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 != (FString *)0x0) {
    ::FString::operator=
              ((FString *)((ulonglong)pFVar2->CompositeOffset + (longlong)param_2),param_3);
  }
  return;
}

// PatchCompositeValue<FText> @ 1465f3990

void __cdecl
UE::MovieScene::PatchCompositeValue<FText>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,FText *param_3)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FPropertyCompositeDefinition *pFVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  pFVar4 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3 != (FText *)0x0) {
    pIVar1 = (param_3->TextData).Reference;
    plVar6 = (longlong *)((ulonglong)pFVar4->CompositeOffset + (longlong)param_2);
    pIVar2 = (ITextData *)*plVar6;
    if (pIVar2 != pIVar1) {
      *plVar6 = (longlong)pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(uint *)(plVar6 + 1) = param_3->Flags;
  }
  return;
}

// PatchCompositeValue<__int64> @ 1465f3a50

void __cdecl
UE::MovieScene::PatchCompositeValue<__int64>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,long64 *param_3)

{
  code *pcVar1;
  FPropertyCompositeDefinition *pFVar2;
  bool bVar3;
  
  pFVar2 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 != (long64 *)0x0) {
    *(long64 *)((ulonglong)pFVar2->CompositeOffset + (longlong)param_2) = *param_3;
  }
  return;
}

// PatchCompositeValue<bool> @ 1465f3ad0

void __cdecl
UE::MovieScene::PatchCompositeValue<bool>
          (TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_1,
          void *param_2,bool *param_3)

{
  code *pcVar1;
  FPropertyCompositeDefinition *pFVar2;
  bool bVar3;
  
  pFVar2 = param_1->DataPtr;
  if ((param_1->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 != (bool *)0x0) {
    *(bool *)((ulonglong)pFVar2->CompositeOffset + (longlong)param_2) = *param_3;
  }
  return;
}

// PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8> @ 1465f3b50

void __cdecl
UE::MovieScene::
PatchCompositeValueImpl<double,double,double,double,double,double,double,double,double,0,1,2,3,4,5,6,7,8>
          (TIntegerSequence<int,0,1,2,3,4,5,6,7,8> *param_1,
          TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> *param_2,
          uchar *param_3,double *param_4,double *param_5,double *param_6,double *param_7,
          double *param_8,double *param_9,double *param_10,double *param_11,double *param_12)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = param_2->ArrayNum;
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_4 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr->CompositeOffset) = *param_4;
  }
  if (iVar1 < 2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_5 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[1].CompositeOffset) = *param_5;
  }
  if (iVar1 < 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_6 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[2].CompositeOffset) = *param_6;
  }
  if (iVar1 < 4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_7 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[3].CompositeOffset) = *param_7;
  }
  if (iVar1 < 5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_8 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[4].CompositeOffset) = *param_8;
  }
  if (iVar1 < 6) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_9 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[5].CompositeOffset) = *param_9;
  }
  if (iVar1 < 7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_10 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[6].CompositeOffset) = *param_10;
  }
  if (iVar1 < 8) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_11 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[7].CompositeOffset) = *param_11;
  }
  if (iVar1 < 9) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_12 != (double *)0x0) {
    *(double *)(param_3 + param_2->DataPtr[8].CompositeOffset) = *param_12;
  }
  return;
}

// PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 1465f3eb0

void __cdecl
UE::MovieScene::
PopulatePrerequisites<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *param_1,FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  FComponentTypeID local_res20;
  FComponentTypeID local_res22 [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res20.Value = *(ushort *)param_1->ComponentTypes;
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 1);
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 2);
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  return;
}

// PopulateReadWriteDependencies<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_> @ 1465f3f80

void __cdecl
UE::MovieScene::
PopulateReadWriteDependencies<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
          (TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
           *param_1,FComponentMask *param_2,FComponentMask *param_3)

{
  if (*(short *)param_1->ComponentTypes != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)param_1->ComponentTypes);
  }
  if (*(short *)(param_1->ComponentTypes + 1) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 1));
  }
  if (*(short *)(param_1->ComponentTypes + 2) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 2));
  }
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTrajectoryKey::FData>_> @ 1465fe010

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FTrajectoryKey::FData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<FTrajectoryKey::FData> *param_5,int param_6,int *param_7)

{
  uint uVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = (ulonglong)param_1;
  uVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 2) {
      uVar1 = 1;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      uVar1 = (uint)(uVar2 / uVar3);
      if ((int)uVar1 < param_3) {
        uVar1 = 0x7fffffff;
      }
    }
  }
  if ((int)uVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  uVar4 = uVar1;
  if (uVar1 < 2) {
    if (param_5->SecondaryData == (ForElementType<FTrajectoryKey::FData>)0x0) goto LAB_1465fe07e;
    uVar4 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_5->SecondaryData,0,uVar4,uVar3);
LAB_1465fe07e:
  *param_7 = uVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_> @ 1465fe0c0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
          (ushort param_1,ForElementType<double> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<double>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>_> @ 1465fe190

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>_> @ 1465fe260

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>_> @ 1465fe330

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 2) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 2) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>_> @ 1465fe400

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>_> @ 1465fe4d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FFloatPropertyTraits>_>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>_> @ 1465fe5a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FObjectPropertyTraits>_>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoolParameterNameAndValue>_> @ 1465fe670

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FBoolParameterNameAndValue>_>
          (ushort param_1,ForElementType<FBoolParameterNameAndValue> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FBoolParameterNameAndValue>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FColorParameterNameAndValue>_> @ 1465fe740

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FColorParameterNameAndValue>_>
          (ushort param_1,ForElementType<FColorParameterNameAndValue> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FColorParameterNameAndValue>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_> @ 1465fe810

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
          (ushort param_1,ForElementType<UE::MovieScene::FMovieSceneEntityID> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FMovieSceneEntityID>::ResizeAllocation(param_2,uVar2,iVar8,uVar7)
    ;
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FScalarParameterNameAndValue>_> @ 1465fe8e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FScalarParameterNameAndValue>_>
          (ushort param_1,ForElementType<FScalarParameterNameAndValue> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FScalarParameterNameAndValue>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FTransformParameterNameAndValue>_> @ 1465fe9b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FTransformParameterNameAndValue>_>
          (ushort param_1,ForElementType<FTransformParameterNameAndValue> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FTransformParameterNameAndValue>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FUnpackedChannelValue>_> @ 1465fea80

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FUnpackedChannelValue>_>
          (ushort param_1,ForElementType<UE::MovieScene::FUnpackedChannelValue> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FUnpackedChannelValue>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVector2DParameterNameAndValue>_> @ 1465feb50

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVector2DParameterNameAndValue>_>
          (ushort param_1,ForElementType<FVector2DParameterNameAndValue> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVector2DParameterNameAndValue>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVectorParameterNameAndValue>_> @ 1465fec20

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FVectorParameterNameAndValue>_>
          (ushort param_1,ForElementType<FVectorParameterNameAndValue> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<FVectorParameterNameAndValue>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_> @ 1465fecf0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::MovieScene::FMovieSceneEntityID> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FMovieSceneEntityID>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// SetChannelDefault<FMovieSceneBoolChannel,bool_const_&> @ 14660ade0

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneBoolChannel,bool_const_&>
          (FMovieSceneBoolChannel *param_1,bool *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// SetChannelDefault<FMovieSceneByteChannel,unsigned_char_const_&> @ 14660ae00

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneByteChannel,unsigned_char_const_&>
          (FMovieSceneByteChannel *param_1,uchar *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// SetChannelDefault<FMovieSceneDoubleChannel,double_const_&> @ 14660ae20

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneDoubleChannel,double_const_&>
          (FMovieSceneDoubleChannel *param_1,double *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// SetChannelDefault<FMovieSceneFloatChannel,float_const_&> @ 14660ae40

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneFloatChannel,float_const_&>
          (FMovieSceneFloatChannel *param_1,float *param_2)

{
  param_1->DefaultValue = *param_2;
  param_1->bHasDefaultValue = true;
  return;
}

// SetChannelDefault<FMovieSceneIntegerChannel,int_const_&> @ 14660ae60

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneIntegerChannel,int_const_&>
          (FMovieSceneIntegerChannel *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  param_1->bHasDefaultValue = true;
  param_1->DefaultValue = iVar1;
  return;
}

// SetChannelDefault<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_const_&> @ 14660ae80

void __cdecl
UE::MovieScene::
SetChannelDefault<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_const_&>
          (FMovieSceneObjectPathChannel *param_1,FMovieSceneObjectPathChannelKeyValue *param_2)

{
  UObject *pUVar1;
  
  *(undefined8 *)&(param_1->DefaultValue).SoftPtr.SoftObjectPtr =
       *(undefined8 *)&(param_2->SoftPtr).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(param_1->DefaultValue).SoftPtr.SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_2->SoftPtr).SoftObjectPtr.field_0x8);
  if (GC::GIsIncrementalReachabilityPending != false) {
    pUVar1 = (param_2->HardPtr).field0_0x0.DebugPtr;
    if (pUVar1 == (UObject *)0x0) {
      (param_1->DefaultValue).HardPtr.field0_0x0.DebugPtr = (UObject *)0x0;
      return;
    }
    GC::MarkAsReachable(pUVar1);
  }
  (param_1->DefaultValue).HardPtr.field0_0x0 = (param_2->HardPtr).field0_0x0;
  return;
}

// SetChannelDefault<FMovieSceneStringChannel,FString_const_&> @ 14660ae90

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneStringChannel,FString_const_&>
          (FMovieSceneStringChannel *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  int iVar4;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_2);
  param_1->bHasDefaultValue = true;
  iVar1 = (pFVar3->Data).ArrayNum;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange
            (&param_1->DefaultValue,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar4);
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// SetChannelDefault<FMovieSceneTextChannel,FText_const_&> @ 14660aef0

void __cdecl
UE::MovieScene::SetChannelDefault<FMovieSceneTextChannel,FText_const_&>
          (FMovieSceneTextChannel *param_1,FText *param_2)

{
  uint uVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  undefined1 local_res8 [8];
  
  pIVar2 = (param_2->TextData).Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  uVar1 = param_2->Flags;
  param_1->bHasDefaultValue = true;
  pIVar3 = (param_1->DefaultValue).TextData.Reference;
  if (pIVar3 != pIVar2) {
    (param_1->DefaultValue).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    }
  }
  (param_1->DefaultValue).Flags = uVar1;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  return;
}

// ValueExistsAtTime<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue> @ 14660b440

bool __cdecl
UE::MovieScene::ValueExistsAtTime<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue>
          (FMovieSceneObjectPathChannel *param_1,FFrameNumber param_2,
          FMovieSceneObjectPathChannelKeyValue *param_3)

{
  FFrameTime FVar1;
  bool bVar2;
  UObject *local_48;
  undefined1 local_40 [8];
  FSoftObjectPath local_38;
  TObjectPtr<UObject>_u_0 local_18;
  
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  local_40 = (undefined1  [8])0x0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_38.SubPathString,0);
  FVar1.SubFrame = 0.0;
  FVar1.FrameNumber.Value = param_2.Value;
  local_18.DebugPtr = (UObject *)0x0;
  local_48 = (UObject *)0x0;
  bVar2 = FMovieSceneObjectPathChannel::Evaluate(param_1,FVar1,&local_48);
  if (bVar2) {
    FMovieSceneObjectPathChannelKeyValue::operator=
              ((FMovieSceneObjectPathChannelKeyValue *)local_40,local_48);
    bVar2 = FSoftObjectPath::operator==
                      (&local_38,(FSoftObjectPath *)&(param_3->SoftPtr).SoftObjectPtr.field_0x8);
    if (bVar2) {
      bVar2 = true;
      goto LAB_14660b4d5;
    }
  }
  bVar2 = false;
LAB_14660b4d5:
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator== @ 146622b40

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146622c30

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146622d20

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146622e10

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146622f00

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146622ff0

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 1466230e0

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 1466231d0

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 1466232c0

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 1466233b0

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 1466234a0

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623590

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623680

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623770

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623860

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623950

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623a40

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623b30

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// operator== @ 146623c20

bool __cdecl UE::MovieScene::operator==(FKeyType *param_1,FKeyType *param_2)

{
  uchar uVar1;
  FName *pFVar2;
  FName *pFVar3;
  FCustomPropertyIndex *pFVar4;
  ushort *puVar5;
  ushort uVar6;
  
  if ((((param_1->Object).ObjectIndex == (param_2->Object).ObjectIndex) &&
      ((param_1->Object).ObjectSerialNumber == (param_2->Object).ObjectSerialNumber)) &&
     (uVar1 = (param_1->Property).TypeIndex, uVar1 == (param_2->Property).TypeIndex)) {
    if (uVar1 == '\0') {
      puVar5 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_1->Property);
      uVar6 = *puVar5;
      pFVar4 = (FCustomPropertyIndex *)
               TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<unsigned_short>(&param_2->Property);
    }
    else {
      if (uVar1 != '\x01') {
        if (uVar1 != '\x02') {
          return true;
        }
        pFVar2 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_2->Property);
        pFVar3 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::Get<FName>
                           (&param_1->Property);
        return *pFVar3 == *pFVar2;
      }
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_1->Property);
      uVar6 = pFVar4->Value;
      pFVar4 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,FName>::
               Get<UE::MovieScene::FCustomPropertyIndex>(&param_2->Property);
    }
    return uVar6 == pFVar4->Value;
  }
  return false;
}

// ConvertOperationalProperty @ 146651ed0

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (TTransform<double> *param_1,FIntermediate3DTransform *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TRotator<double> local_78;
  TQuat<double> local_58 [2];
  
  local_58[0].X = (param_1->Rotation).XY.m128d_f64[0];
  local_58[0].Y = (param_1->Rotation).XY.m128d_f64[1];
  local_58[0].Z = (param_1->Rotation).ZW.m128d_f64[0];
  local_58[0].W = (param_1->Rotation).ZW.m128d_f64[1];
  dVar1 = (param_1->Translation).ZW.m128d_f64[0];
  dVar2 = (param_1->Translation).XY.m128d_f64[0];
  dVar3 = (param_1->Translation).XY.m128d_f64[1];
  UE::Math::TQuat<double>::Rotator(local_58,&local_78);
  dVar4 = (param_1->Scale3D).XY.m128d_f64[0];
  dVar5 = (param_1->Scale3D).XY.m128d_f64[1];
  dVar6 = (param_1->Scale3D).ZW.m128d_f64[0];
  param_2->T_X = dVar2;
  param_2->T_Y = dVar3;
  param_2->T_Z = dVar1;
  param_2->R_X = local_78.Roll;
  param_2->R_Y = local_78.Pitch;
  param_2->R_Z = local_78.Yaw;
  param_2->S_X = dVar4;
  param_2->S_Y = dVar5;
  param_2->S_Z = dVar6;
  return;
}

// ConvertOperationalProperty @ 146651f90

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (TVector2<float> *param_1,FFloatIntermediateVector *param_2)

{
  TVector2<float>_u_0_s_0 TVar1;
  
  TVar1 = (param_1->field0_0x0)._s_0;
  param_2->X = (double)TVar1.X;
  param_2->Y = (double)TVar1.Y;
  param_2->Z = 0.0;
  param_2->W = 0.0;
  return;
}

// ConvertOperationalProperty @ 146651fb0

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (TVector2<double> *param_1,FDoubleIntermediateVector *param_2)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  param_2->X = (param_1->field0_0x0)._s_0.X;
  param_2->Y = dVar1;
  param_2->Z = 0.0;
  param_2->W = 0.0;
  return;
}

// ConvertOperationalProperty @ 146651fe0

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (TVector4<float> *param_1,FFloatIntermediateVector *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  param_2->X = (double)(float)uVar2;
  param_2->Y = (double)(float)((ulonglong)uVar2 >> 0x20);
  param_2->Z = (double)(float)uVar1;
  param_2->W = (double)(float)((ulonglong)uVar1 >> 0x20);
  return;
}

// ConvertOperationalProperty @ 146652000

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (TVector4<double> *param_1,FDoubleIntermediateVector *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar1 = (param_1->field0_0x0)._s_0.W;
  param_2->X = (param_1->field0_0x0)._s_0.X;
  param_2->Y = dVar2;
  param_2->Z = dVar3;
  param_2->W = dVar1;
  return;
}

// ConvertOperationalProperty @ 146652020

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (TVector<float> *param_1,FFloatIntermediateVector *param_2)

{
  float fVar1;
  undefined8 uVar2;
  
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  param_2->X = (double)(float)uVar2;
  param_2->Y = (double)(float)((ulonglong)uVar2 >> 0x20);
  param_2->Z = (double)fVar1;
  param_2->W = 0.0;
  return;
}

// ConvertOperationalProperty @ 146652050

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (TVector<double> *param_1,FDoubleIntermediateVector *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  param_2->X = (param_1->field0_0x0)._s_0.X;
  param_2->Y = dVar1;
  param_2->Z = dVar2;
  param_2->W = 0.0;
  return;
}

// ConvertOperationalProperty @ 146652070

void __cdecl UE::MovieScene::ConvertOperationalProperty(FColor *param_1,FIntermediateColor *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = FLinearColor::sRGBToLinearTable[(param_1->field0_0x0)._s_0.G];
  fVar2 = FLinearColor::sRGBToLinearTable[(param_1->field0_0x0)._s_0.B];
  fVar3 = (float)(param_1->field0_0x0)._s_0.A * __real_3b808081;
  param_2->R = (double)FLinearColor::sRGBToLinearTable[(param_1->field0_0x0)._s_0.R];
  param_2->G = (double)fVar1;
  param_2->B = (double)fVar2;
  param_2->A = (double)fVar3;
  return;
}

// ConvertOperationalProperty @ 1466520d0

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FDoubleIntermediateVector *param_1,TVector2<double> *param_2)

{
  double dVar1;
  
  dVar1 = param_1->Y;
  (param_2->field0_0x0)._s_0.X = param_1->X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  return;
}

// ConvertOperationalProperty @ 1466520f0

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FDoubleIntermediateVector *param_1,TVector4<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1->Y;
  dVar3 = param_1->Z;
  dVar1 = param_1->W;
  (param_2->field0_0x0)._s_0.X = param_1->X;
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar3;
  (param_2->field0_0x0)._s_0.W = dVar1;
  return;
}

// ConvertOperationalProperty @ 146652110

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FDoubleIntermediateVector *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  (param_2->field0_0x0)._s_0.X = param_1->X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = dVar2;
  return;
}

// ConvertOperationalProperty @ 146652130

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FEulerTransform *param_1,FIntermediate3DTransform *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = (param_1->Location).field0_0x0._s_0.Y;
  dVar4 = (param_1->Location).field0_0x0._s_0.Z;
  dVar1 = (param_1->Rotation).Roll;
  dVar5 = (param_1->Rotation).Pitch;
  dVar6 = (param_1->Rotation).Yaw;
  dVar7 = (param_1->Scale).field0_0x0._s_0.X;
  dVar8 = (param_1->Scale).field0_0x0._s_0.Y;
  dVar2 = (param_1->Scale).field0_0x0._s_0.Z;
  param_2->T_X = (param_1->Location).field0_0x0._s_0.X;
  param_2->T_Y = dVar3;
  param_2->T_Z = dVar4;
  param_2->R_X = dVar1;
  param_2->R_Y = dVar5;
  param_2->R_Z = dVar6;
  param_2->S_X = dVar7;
  param_2->S_Y = dVar8;
  param_2->S_Z = dVar2;
  return;
}

// ConvertOperationalProperty @ 146652190

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FFloatIntermediateVector *param_1,TVector2<float> *param_2)

{
  TVector2<float>_u_0 TVar1;
  
  TVar1._s_0.Y = (float)param_1->Y;
  TVar1._s_0.X = (float)param_1->X;
  param_2->field0_0x0 = TVar1;
  return;
}

// ConvertOperationalProperty @ 1466521c0

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FFloatIntermediateVector *param_1,TVector4<float> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  dVar3 = param_1->W;
  (param_2->field0_0x0)._s_0.X = (float)param_1->X;
  (param_2->field0_0x0)._s_0.Y = (float)dVar1;
  (param_2->field0_0x0)._s_0.Z = (float)dVar2;
  (param_2->field0_0x0)._s_0.W = (float)dVar3;
  return;
}

// ConvertOperationalProperty @ 146652220

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FFloatIntermediateVector *param_1,TVector<float> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1->Y;
  dVar2 = param_1->Z;
  (param_2->field0_0x0)._s_0.X = (float)param_1->X;
  (param_2->field0_0x0)._s_0.Y = (float)dVar1;
  (param_2->field0_0x0)._s_0.Z = (float)dVar2;
  return;
}

// ConvertOperationalProperty @ 146652250

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FIntermediate3DTransform *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TQuat<double> *pTVar12;
  TRotator<double> local_a8;
  TQuat<double> local_88 [4];
  
  local_a8.Pitch = param_1->R_Y;
  local_a8.Yaw = param_1->R_Z;
  dVar1 = param_1->T_Y;
  uVar5 = *(undefined4 *)&param_1->T_X;
  uVar6 = *(undefined4 *)((longlong)&param_1->T_X + 4);
  dVar2 = param_1->T_Z;
  dVar3 = param_1->S_Y;
  uVar7 = *(undefined4 *)&param_1->S_X;
  uVar8 = *(undefined4 *)((longlong)&param_1->S_X + 4);
  dVar4 = param_1->S_Z;
  local_a8.Roll = param_1->R_X;
  pTVar12 = UE::Math::TRotator<double>::Quaternion(&local_a8,local_88);
  dVar9 = pTVar12->Y;
  dVar10 = pTVar12->Z;
  dVar11 = pTVar12->W;
  (param_2->Rotation).XY.m128d_f64[0] = pTVar12->X;
  (param_2->Rotation).XY.m128d_f64[1] = dVar9;
  (param_2->Rotation).ZW.m128d_f64[0] = dVar10;
  (param_2->Rotation).ZW.m128d_f64[1] = dVar11;
  *(undefined4 *)(param_2->Translation).XY.m128d_f64 = uVar5;
  *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4) = uVar6;
  *(int *)((param_2->Translation).XY.m128d_f64 + 1) = SUB84(dVar1,0);
  *(int *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc) = (int)((ulonglong)dVar1 >> 0x20);
  (param_2->Translation).ZW.m128d_f64[0] = dVar2;
  (param_2->Translation).ZW.m128d_f64[1] = 0.0;
  *(undefined4 *)(param_2->Scale3D).XY.m128d_f64 = uVar7;
  *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4) = uVar8;
  *(int *)((param_2->Scale3D).XY.m128d_f64 + 1) = SUB84(dVar3,0);
  *(int *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc) = (int)((ulonglong)dVar3 >> 0x20);
  (param_2->Scale3D).ZW.m128d_f64[0] = dVar4;
  (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// ConvertOperationalProperty @ 146652340

void __cdecl
UE::MovieScene::ConvertOperationalProperty
          (FIntermediate3DTransform *param_1,FEulerTransform *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1->T_Y;
  dVar2 = param_1->T_Z;
  (param_2->Location).field0_0x0._s_0.X = param_1->T_X;
  (param_2->Location).field0_0x0._s_0.Y = dVar1;
  (param_2->Location).field0_0x0._s_0.Z = dVar2;
  dVar1 = param_1->R_Z;
  dVar2 = param_1->R_X;
  (param_2->Rotation).Pitch = param_1->R_Y;
  (param_2->Rotation).Yaw = dVar1;
  (param_2->Rotation).Roll = dVar2;
  dVar1 = param_1->S_Y;
  dVar2 = param_1->S_Z;
  (param_2->Scale).field0_0x0._s_0.X = param_1->S_X;
  (param_2->Scale).field0_0x0._s_0.Y = dVar1;
  (param_2->Scale).field0_0x0._s_0.Z = dVar2;
  return;
}

// ConvertOperationalProperty @ 146652390

void __cdecl UE::MovieScene::ConvertOperationalProperty(FIntermediateColor *param_1,FColor *param_2)

{
  FColor_u_0 local_res8;
  FLinearColor_u_0 local_18;
  
  local_18._s_0.R = (float)param_1->R;
  local_18._s_0.G = (float)param_1->G;
  local_18._s_0.B = (float)param_1->B;
  local_18._s_0.A = (float)param_1->A;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  param_2->field0_0x0 = local_res8;
  return;
}

// ConvertOperationalProperty @ 146652400

void __cdecl
UE::MovieScene::ConvertOperationalProperty(FIntermediateColor *param_1,FLinearColor *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->G;
  dVar2 = param_1->B;
  dVar3 = param_1->A;
  (param_2->field0_0x0)._s_0.R = (float)param_1->R;
  (param_2->field0_0x0)._s_0.G = (float)dVar1;
  (param_2->field0_0x0)._s_0.B = (float)dVar2;
  (param_2->field0_0x0)._s_0.A = (float)dVar3;
  return;
}

// ConvertOperationalProperty @ 146652440

void __cdecl
UE::MovieScene::ConvertOperationalProperty(FIntermediateColor *param_1,FSlateColor *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint local_18;
  
  dVar1 = param_1->G;
  dVar2 = param_1->B;
  dVar3 = param_1->A;
  local_18 = local_18 & 0xffffff00;
  (param_2->SpecifiedColor).field0_0x0._s_0.R = (float)param_1->R;
  (param_2->SpecifiedColor).field0_0x0._s_0.G = (float)dVar1;
  (param_2->SpecifiedColor).field0_0x0._s_0.B = (float)dVar2;
  (param_2->SpecifiedColor).field0_0x0._s_0.A = (float)dVar3;
  param_2->ColorUseRule = (undefined1)local_18;
  param_2->ColorTableId = local_18._1_1_;
  *(undefined2 *)&param_2->field_0x12 = local_18._2_2_;
  return;
}

// ConvertOperationalProperty @ 1466524a0

void __cdecl
UE::MovieScene::ConvertOperationalProperty(FLinearColor *param_1,FIntermediateColor *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  uVar2 = *(undefined8 *)&param_1->field0_0x0;
  param_2->R = (double)(float)uVar2;
  param_2->G = (double)(float)((ulonglong)uVar2 >> 0x20);
  param_2->B = (double)(float)uVar1;
  param_2->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return;
}

// ConvertOperationalProperty @ 1466524c0

void __cdecl UE::MovieScene::ConvertOperationalProperty(FObjectComponent *param_1,UObject **param_2)

{
  UObject *pUVar1;
  
  pUVar1 = FObjectComponent::GetObject(param_1);
  *param_2 = pUVar1;
  return;
}

// ConvertOperationalProperty @ 1466524e0

void __cdecl
UE::MovieScene::ConvertOperationalProperty(FSlateColor *param_1,FIntermediateColor *param_2)

{
  FLinearColor *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (param_1->ColorUseRule == UseColor_ColorTable) {
    pFVar1 = FSlateColor::GetColorFromTable(param_1);
    fVar2 = (pFVar1->field0_0x0)._s_0.R;
    fVar3 = (pFVar1->field0_0x0)._s_0.G;
    fVar4 = (pFVar1->field0_0x0)._s_0.B;
    fVar5 = (pFVar1->field0_0x0)._s_0.A;
  }
  else {
    fVar2 = (param_1->SpecifiedColor).field0_0x0._s_0.R;
    fVar3 = (param_1->SpecifiedColor).field0_0x0._s_0.G;
    fVar4 = (param_1->SpecifiedColor).field0_0x0._s_0.B;
    fVar5 = (param_1->SpecifiedColor).field0_0x0._s_0.A;
  }
  param_2->R = (double)fVar2;
  param_2->G = (double)fVar3;
  param_2->B = (double)fVar4;
  param_2->A = (double)fVar5;
  return;
}

// ConvertOperationalProperty @ 146652550

void __cdecl UE::MovieScene::ConvertOperationalProperty(float param_1,double *param_2)

{
  *param_2 = (double)param_1;
  return;
}

// ConvertOperationalProperty @ 146652570

void __cdecl UE::MovieScene::ConvertOperationalProperty(double param_1,float *param_2)

{
  *param_2 = (float)param_1;
  return;
}

// ConvertOperationalProperty @ 146652590

void __cdecl UE::MovieScene::ConvertOperationalProperty(UObject *param_1,FObjectComponent *param_2)

{
  if (GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UObject *)0x0) {
      GC::MarkAsReachable(param_1);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      GC::MarkAsReachable(param_1);
    }
    (param_2->ObjectPtr).field0_0x0.DebugPtr = param_1;
    (param_2->ObjectKey).ObjectIndex = 0;
    (param_2->ObjectKey).ObjectSerialNumber = 0;
    return;
  }
  (param_2->ObjectPtr).field0_0x0.DebugPtr = param_1;
  (param_2->ObjectKey).ObjectIndex = 0;
  (param_2->ObjectKey).ObjectSerialNumber = 0;
  return;
}

// ConvertOperationalProperty @ 146652600

void __cdecl UE::MovieScene::ConvertOperationalProperty(long64 param_1,schar *param_2)

{
  schar sVar1;
  
  if (0x7f < param_1) {
    *param_2 = '\x7f';
    return;
  }
  sVar1 = (schar)param_1;
  if (param_1 < -0x80) {
    sVar1 = -0x80;
  }
  *param_2 = sVar1;
  return;
}

// ConvertOperationalProperty @ 146652630

void __cdecl UE::MovieScene::ConvertOperationalProperty(long64 param_1,short *param_2)

{
  short sVar1;
  
  if (0x7fff < param_1) {
    *param_2 = 0x7fff;
    return;
  }
  sVar1 = (short)param_1;
  if (param_1 < -0x8000) {
    sVar1 = -0x8000;
  }
  *param_2 = sVar1;
  return;
}

// ConvertOperationalProperty @ 146652660

void __cdecl UE::MovieScene::ConvertOperationalProperty(long64 param_1,int *param_2)

{
  int iVar1;
  
  if (0x7fffffff < param_1) {
    *param_2 = 0x7fffffff;
    return;
  }
  iVar1 = (int)param_1;
  if (param_1 < -0x80000000) {
    iVar1 = -0x80000000;
  }
  *param_2 = iVar1;
  return;
}

// DecodeEntityID @ 1466555d0

void __cdecl
UE::MovieScene::DecodeEntityID(uint param_1,int *param_2,EAudioSectionEntityType *param_3)

{
  *param_2 = param_1 & 0xffffff;
  *param_3 = (EAudioSectionEntityType)(param_1 >> 0x18);
  return;
}

// EncodeEntityID @ 146668030

uint __cdecl UE::MovieScene::EncodeEntityID(int param_1,EAudioSectionEntityType param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0xfffffe < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneAudioSection.cpp"
                       ,0x3d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)param_2 << 0x18 | param_1;
}

// GetComponentTransform @ 146689880

FIntermediate3DTransform * __cdecl
UE::MovieScene::GetComponentTransform
          (FIntermediate3DTransform *__return_storage_ptr__,UObject *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  UClass *pUVar10;
  FString *pFVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  FString local_38;
  FString local_28 [2];
  
  if (param_1 == (UObject *)0x0) {
    pFVar11 = GetTypeName<USceneComponent_const_>(&local_38);
    if ((pFVar11->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar12);
  }
  pUVar10 = Z_Construct_UClass_USceneComponent_NoRegister();
  iVar4 = (int)pUVar10->_padding_;
  if ((iVar4 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
      &pUVar10->_padding_)) {
    dVar5 = *(double *)&param_1[9].field_0x10;
    dVar6 = *(double *)&param_1[9].field_0x18;
    dVar7 = *(double *)&param_1[8].field_0x20;
    dVar8 = *(double *)(param_1 + 9);
    dVar9 = *(double *)&param_1[8].field_0x10;
    dVar1 = *(double *)&param_1[9].field_0x20;
    dVar2 = *(double *)&param_1[9].field_0x8;
    dVar3 = *(double *)&param_1[8].field_0x18;
    __return_storage_ptr__->T_X = *(double *)&param_1[8].field_0x8;
    __return_storage_ptr__->R_Y = dVar7;
    __return_storage_ptr__->S_X = dVar5;
    __return_storage_ptr__->T_Y = dVar9;
    __return_storage_ptr__->R_Z = dVar8;
    __return_storage_ptr__->S_Y = dVar6;
    __return_storage_ptr__->T_Z = dVar3;
    __return_storage_ptr__->R_X = dVar2;
    __return_storage_ptr__->S_Z = dVar1;
    return __return_storage_ptr__;
  }
  pFVar11 = GetTypeName<USceneComponent_const_>(&local_38);
  pwVar12 = L"";
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
  pFVar11 = GetFullNameForCastLogError<UObject_const_>(local_28,param_1);
  if ((pFVar11->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar12,pwVar13);
}

// GetDirectionalLightComponentLightSourceAngle @ 146689d90

float __cdecl UE::MovieScene::GetDirectionalLightComponentLightSourceAngle(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDirectionalLightComponent>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return *(float *)&param_1[0x1a].field_0x8;
  }
  pFVar3 = GetTypeName<UDirectionalLightComponent>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetExponentialHeightFogComponentDirectionalInscatteringColor @ 146689fc0

FIntermediateColor * __cdecl
UE::MovieScene::GetExponentialHeightFogComponentDirectionalInscatteringColor
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  UExponentialHeightFogComponent *pUVar2;
  
  pUVar2 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->DirectionalInscatteringLuminance).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->DirectionalInscatteringLuminance).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetExponentialHeightFogComponentDirectionalInscatteringExponent @ 14668a000

float __cdecl
UE::MovieScene::GetExponentialHeightFogComponentDirectionalInscatteringExponent(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->DirectionalInscatteringExponent;
}

// GetExponentialHeightFogComponentFogDensity @ 14668a020

float __cdecl UE::MovieScene::GetExponentialHeightFogComponentFogDensity(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->FogDensity;
}

// GetExponentialHeightFogComponentFogHeightFalloff @ 14668a040

float __cdecl UE::MovieScene::GetExponentialHeightFogComponentFogHeightFalloff(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->FogHeightFalloff;
}

// GetExponentialHeightFogComponentFogInscatteringColor @ 14668a060

FIntermediateColor * __cdecl
UE::MovieScene::GetExponentialHeightFogComponentFogInscatteringColor
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  UExponentialHeightFogComponent *pUVar2;
  
  pUVar2 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->FogInscatteringLuminance).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->FogInscatteringLuminance).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetExponentialHeightFogComponentFogMaxOpacity @ 14668a0a0

float __cdecl UE::MovieScene::GetExponentialHeightFogComponentFogMaxOpacity(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->FogMaxOpacity;
}

// GetExponentialHeightFogComponentStartDistance @ 14668a0c0

float __cdecl UE::MovieScene::GetExponentialHeightFogComponentStartDistance(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->StartDistance;
}

// GetExponentialHeightFogComponentVolumetricFogExtinctionScale @ 14668a0e0

float __cdecl
UE::MovieScene::GetExponentialHeightFogComponentVolumetricFogExtinctionScale(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->VolumetricFogExtinctionScale;
}

// GetExponentialHeightFogComponentVolumetricFogNearFadeInDistance @ 14668a100

float __cdecl
UE::MovieScene::GetExponentialHeightFogComponentVolumetricFogNearFadeInDistance(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->VolumetricFogNearFadeInDistance;
}

// GetExponentialHeightFogComponentVolumetricFogStartDistance @ 14668a120

float __cdecl
UE::MovieScene::GetExponentialHeightFogComponentVolumetricFogStartDistance(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return pUVar1->VolumetricFogStartDistance;
}

// GetExponentialHeightFogVolumetricFogAlbedo @ 14668a140

FIntermediateColor * __cdecl
UE::MovieScene::GetExponentialHeightFogVolumetricFogAlbedo
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  UExponentialHeightFogComponent *pUVar4;
  float fVar5;
  
  pUVar4 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  bVar1 = (pUVar4->VolumetricFogAlbedo).field0_0x0._s_0.B;
  bVar2 = (pUVar4->VolumetricFogAlbedo).field0_0x0._s_0.G;
  bVar3 = (pUVar4->VolumetricFogAlbedo).field0_0x0._s_0.A;
  __return_storage_ptr__->R =
       (double)FLinearColor::sRGBToLinearTable[(pUVar4->VolumetricFogAlbedo).field0_0x0._s_0.R];
  __return_storage_ptr__->G = (double)FLinearColor::sRGBToLinearTable[bVar2];
  fVar5 = (float)bVar3 * __real_3b808081;
  __return_storage_ptr__->B = (double)FLinearColor::sRGBToLinearTable[bVar1];
  __return_storage_ptr__->A = (double)fVar5;
  return __return_storage_ptr__;
}

// GetLightComponentIndirectLightingIntensity @ 14668c320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __cdecl UE::MovieScene::GetLightComponentIndirectLightingIntensity(UObject *param_1)

{
  ULightComponent *pUVar1;
  
  pUVar1 = CastChecked<ULightComponent_const_,UObject_const_>(param_1);
  return *(float *)((longlong)&pUVar1->_padding_ + 4);
}

// GetLightComponentIntensity @ 14668c340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __cdecl UE::MovieScene::GetLightComponentIntensity(UObject *param_1)

{
  ULightComponent *pUVar1;
  
  pUVar1 = CastChecked<ULightComponent_const_,UObject_const_>(param_1);
  return *(float *)((longlong)&pUVar1->_padding_ + 4);
}

// GetLightComponentLightColor @ 14668c360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FIntermediateColor * __cdecl
UE::MovieScene::GetLightComponentLightColor
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  ULightComponent *this;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  this = CastChecked<ULightComponent_const_,UObject_const_>(param_1);
  pFVar2 = ULightComponentBase::GetLightColor((ULightComponentBase *)this,&local_18);
  uVar1 = *(undefined8 *)&pFVar2->field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetLightComponentVolumetricScatteringIntensity @ 14668c3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

float __cdecl UE::MovieScene::GetLightComponentVolumetricScatteringIntensity(UObject *param_1)

{
  ULightComponent *pUVar1;
  
  pUVar1 = CastChecked<ULightComponent_const_,UObject_const_>(param_1);
  return *(float *)&pUVar1->_padding_;
}

// GetLocalFogVolumeComponentFogAlbedo @ 14668c3c0

FIntermediateColor * __cdecl
UE::MovieScene::GetLocalFogVolumeComponentFogAlbedo
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  ULocalFogVolumeComponent *pUVar2;
  
  pUVar2 = CastChecked<ULocalFogVolumeComponent,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->FogAlbedo).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->FogAlbedo).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetLocalFogVolumeComponentRadialFogExtinction @ 14668c400

float __cdecl UE::MovieScene::GetLocalFogVolumeComponentRadialFogExtinction(UObject *param_1)

{
  ULocalFogVolumeComponent *pUVar1;
  
  pUVar1 = CastChecked<ULocalFogVolumeComponent,UObject_const_>(param_1);
  return pUVar1->RadialFogExtinction;
}

// GetMassScale @ 14668c830

float __cdecl UE::MovieScene::GetMassScale(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  float fVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPrimitiveComponent_const_>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014668c881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar6 = (float)(**(code **)(*(longlong *)param_1 + 0x968))(param_1,0);
    return fVar6;
  }
  pFVar3 = GetTypeName<UPrimitiveComponent_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetSecondFogDataFogDensity @ 1466973e0

float __cdecl UE::MovieScene::GetSecondFogDataFogDensity(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return (pUVar1->SecondFogData).FogDensity;
}

// GetSecondFogDataFogHeightFalloff @ 146697400

float __cdecl UE::MovieScene::GetSecondFogDataFogHeightFalloff(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return (pUVar1->SecondFogData).FogHeightFalloff;
}

// GetSecondFogDataFogHeightOffset @ 146697420

float __cdecl UE::MovieScene::GetSecondFogDataFogHeightOffset(UObject *param_1)

{
  UExponentialHeightFogComponent *pUVar1;
  
  pUVar1 = CastChecked<UExponentialHeightFogComponent_const_,UObject_const_>(param_1);
  return (pUVar1->SecondFogData).FogHeightOffset;
}

// GetSkeletalMeshAnimationMode @ 146697440

uchar __cdecl UE::MovieScene::GetSkeletalMeshAnimationMode(UObject *param_1)

{
  Type TVar1;
  USkeletalMeshComponent *this;
  
  this = CastChecked<USkeletalMeshComponent_const_,UObject_const_>(param_1);
  TVar1 = USkeletalMeshComponent::GetAnimationMode(this);
  return (uchar)TVar1;
}

// GetSkeletalMeshAsset @ 146697460

FObjectComponent * __cdecl
UE::MovieScene::GetSkeletalMeshAsset
          (FObjectComponent *__return_storage_ptr__,UObject *param_1,FObjectMetadata *param_2)

{
  USkeletalMeshComponent *this;
  USkeletalMesh *pUVar1;
  
  this = CastChecked<USkeletalMeshComponent_const_,UObject_const_>(param_1);
  pUVar1 = USkeletalMeshComponent::GetSkeletalMeshAsset(this);
  (__return_storage_ptr__->ObjectPtr).field0_0x0.DebugPtr = (UObject *)pUVar1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (USkeletalMesh *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  (__return_storage_ptr__->ObjectKey).ObjectIndex = 0;
  (__return_storage_ptr__->ObjectKey).ObjectSerialNumber = 0;
  return __return_storage_ptr__;
}

// GetSkeletalMesh_DEPRECATED @ 1466974c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FObjectComponent * __cdecl
UE::MovieScene::GetSkeletalMesh_DEPRECATED
          (FObjectComponent *__return_storage_ptr__,UObject *param_1,FObjectMetadata *param_2)

{
  int iVar1;
  UClass *pUVar2;
  USkeletalMesh *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<USkinnedMeshComponent_const_>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    pUVar3 = USkinnedMeshComponent::GetSkeletalMesh_DEPRECATED((USkinnedMeshComponent *)param_1);
    (__return_storage_ptr__->ObjectPtr).field0_0x0.DebugPtr = (UObject *)pUVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (USkeletalMesh *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar3);
    }
    (__return_storage_ptr__->ObjectKey).ObjectIndex = 0;
    (__return_storage_ptr__->ObjectKey).ObjectSerialNumber = 0;
    return __return_storage_ptr__;
  }
  pFVar4 = GetTypeName<USkinnedMeshComponent_const_>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetSkyAtmosphereComponentAerialPerspectiveViewDistanceScale @ 1466975c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl
UE::MovieScene::GetSkyAtmosphereComponentAerialPerspectiveViewDistanceScale(UObject *param_1)

{
  USkyAtmosphereComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  return pUVar1->AerialPespectiveViewDistanceScale;
}

// GetSkyAtmosphereComponentMieAbsorption @ 1466975e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FIntermediateColor * __cdecl
UE::MovieScene::GetSkyAtmosphereComponentMieAbsorption
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  USkyAtmosphereComponent *pUVar2;
  
  pUVar2 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->MieAbsorption).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->MieAbsorption).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkyAtmosphereComponentMieExponentialDistribution @ 146697620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl UE::MovieScene::GetSkyAtmosphereComponentMieExponentialDistribution(UObject *param_1)

{
  USkyAtmosphereComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  return pUVar1->MieExponentialDistribution;
}

// GetSkyAtmosphereComponentMieScattering @ 146697640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FIntermediateColor * __cdecl
UE::MovieScene::GetSkyAtmosphereComponentMieScattering
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  USkyAtmosphereComponent *pUVar2;
  
  pUVar2 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->MieScattering).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->MieScattering).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkyAtmosphereComponentMieScatteringScale @ 146697680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl UE::MovieScene::GetSkyAtmosphereComponentMieScatteringScale(UObject *param_1)

{
  USkyAtmosphereComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  return pUVar1->MieScatteringScale;
}

// GetSkyAtmosphereComponentOtherAbsorption @ 1466976a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FIntermediateColor * __cdecl
UE::MovieScene::GetSkyAtmosphereComponentOtherAbsorption
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  USkyAtmosphereComponent *pUVar2;
  
  pUVar2 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->OtherAbsorption).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->OtherAbsorption).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkyAtmosphereComponentOtherAbsorptionScale @ 1466976e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl UE::MovieScene::GetSkyAtmosphereComponentOtherAbsorptionScale(UObject *param_1)

{
  USkyAtmosphereComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  return pUVar1->OtherAbsorptionScale;
}

// GetSkyAtmosphereComponentRayleighExponentialDistribution @ 146697700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl
UE::MovieScene::GetSkyAtmosphereComponentRayleighExponentialDistribution(UObject *param_1)

{
  USkyAtmosphereComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  return pUVar1->RayleighExponentialDistribution;
}

// GetSkyAtmosphereComponentRayleighScattering @ 146697720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FIntermediateColor * __cdecl
UE::MovieScene::GetSkyAtmosphereComponentRayleighScattering
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  USkyAtmosphereComponent *pUVar2;
  
  pUVar2 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->RayleighScattering).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->RayleighScattering).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkyAtmosphereComponentRayleighScatteringScale @ 146697760

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __cdecl UE::MovieScene::GetSkyAtmosphereComponentRayleighScatteringScale(UObject *param_1)

{
  USkyAtmosphereComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  return pUVar1->RayleighScatteringScale;
}

// GetSkyAtmosphereComponentSkyLuminanceFactor @ 146697780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FIntermediateColor * __cdecl
UE::MovieScene::GetSkyAtmosphereComponentSkyLuminanceFactor
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  USkyAtmosphereComponent *pUVar2;
  
  pUVar2 = CastChecked<USkyAtmosphereComponent_const_,UObject_const_>(param_1);
  uVar1 = *(undefined8 *)&(pUVar2->SkyLuminanceFactor).field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&(pUVar2->SkyLuminanceFactor).field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkyLightComponentIntensity @ 1466977c0

float __cdecl UE::MovieScene::GetSkyLightComponentIntensity(UObject *param_1)

{
  USkyLightComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyLightComponent_const_,UObject_const_>(param_1);
  return *(float *)((longlong)&pUVar1->_padding_ + 4);
}

// GetSkyLightComponentLightColor @ 1466977e0

FIntermediateColor * __cdecl
UE::MovieScene::GetSkyLightComponentLightColor
          (FIntermediateColor *__return_storage_ptr__,UObject *param_1)

{
  undefined8 uVar1;
  USkyLightComponent *this;
  FLinearColor *pFVar2;
  FLinearColor local_18;
  
  this = CastChecked<USkyLightComponent_const_,UObject_const_>(param_1);
  pFVar2 = ULightComponentBase::GetLightColor((ULightComponentBase *)this,&local_18);
  uVar1 = *(undefined8 *)&pFVar2->field0_0x0;
  __return_storage_ptr__->R = (double)(float)uVar1;
  __return_storage_ptr__->G = (double)(float)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)((longlong)&pFVar2->field0_0x0 + 8);
  __return_storage_ptr__->B = (double)(float)uVar1;
  __return_storage_ptr__->A = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// GetSkyLightComponentRealtimeCapture @ 146697820

bool __cdecl
UE::MovieScene::GetSkyLightComponentRealtimeCapture(UObject *param_1,FBoolMetaData param_2)

{
  USkyLightComponent *pUVar1;
  
  pUVar1 = CastChecked<USkyLightComponent_const_,UObject_const_>(param_1);
  return pUVar1->bRealTimeCapture;
}

// GetTypeHash @ 146698830

uint __cdecl UE::MovieScene::GetTypeHash(FImportedInterrogationEntityKey *param_1)

{
  FWeakObjectPtr FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FVar1 = (param_1->Entity).EntityOwner.WeakPtr;
  uVar4 = FVar1.ObjectSerialNumber ^ FVar1.ObjectIndex ^ (param_1->Entity).EntityID;
  uVar3 = ((param_1->InterrogationKey).InterrogationIndex ^
          (param_1->InterrogationKey).Channel.Value) - uVar4 ^ uVar4 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 10;
  return (uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// GetTypeHash @ 1466988f0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146698a00

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146698b10

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146698c20

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146698d30

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146698e40

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146698f50

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146699060

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146699170

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146699280

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146699390

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 1466994a0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 1466995b0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 1466996c0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 1466997d0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 1466998e0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 1466999f0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146699b00

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 146699c10

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar5 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar1 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 3;
  uVar2 = (uVar2 - uVar1) - uVar5 ^ uVar1 << 10;
  uVar1 = (uVar5 - uVar2) - uVar1 ^ uVar2 >> 0xf;
  uVar2 = (uint)(param_1->Property).TypeIndex;
  iVar3 = uVar1 - uVar2;
  uVar4 = 0x9e3779b9 - uVar1 ^ iVar3 * 0x100;
  uVar1 = (uVar2 - uVar4) - iVar3 ^ uVar4 >> 0xd;
  uVar2 = (iVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar1 ^ uVar2 << 10;
  return (uVar1 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// InitializeMovieSceneTracksAccessors @ 1466a2940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::InitializeMovieSceneTracksAccessors(FMovieSceneTracksComponentTypes *param_1)

{
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  *this;
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8> *this_00;
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined8 *puVar4;
  FName FVar5;
  code *pcVar6;
  undefined3 uVar7;
  bool bVar8;
  int iVar9;
  FName *pFVar10;
  UClass *pUVar11;
  longlong lVar12;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
  FVar13;
  ForAnyElementType FVar14;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar15;
  undefined1 auStackY_298 [32];
  FWeakObjectPtr local_248;
  FWeakObjectPtr local_240;
  FWeakObjectPtr local_238;
  bool local_230;
  undefined3 uStack_22f;
  FWeakObjectPtr local_22c;
  bool local_224;
  undefined3 uStack_223;
  FMetaData local_218;
  FMetaData local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FName local_1b8;
  FName local_1b0;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  UClass *local_80;
  FName FStack_78;
  undefined2 local_70;
  undefined6 uStack_6e;
  code *pcStack_68;
  code *local_60;
  UClass *local_58;
  FName FStack_50;
  undefined2 local_48;
  undefined6 uStack_46;
  code *pcStack_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_298;
  pFVar10 = ::FName::FName(&local_d8,10,L"LightColor",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_ULightComponent_NoRegister();
  this = &(param_1->Accessors).Color;
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetLightComponentLightColor,SetLightComponentLightColor);
  pFVar10 = ::FName::FName(&local_c0,9,L"Intensity",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_ULightComponent_NoRegister();
  this_00 = &(param_1->Accessors).Float;
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetLightComponentIntensity,SetLightComponentIntensity);
  pFVar10 = ::FName::FName(&local_b8,0x1d,L"VolumetricScatteringIntensity",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_ULightComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetLightComponentVolumetricScatteringIntensity,
             SetLightComponentVolumetricScatteringIntensity);
  pFVar10 = ::FName::FName(&local_b0,0x19,L"IndirectLightingIntensity",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_ULightComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetLightComponentIndirectLightingIntensity,
             SetLightComponentIndirectLightingIntensity);
  pFVar10 = ::FName::FName(&local_a0,0x10,L"LightSourceAngle",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetDirectionalLightComponentLightSourceAngle,
             SetDirectionalLightComponentLightSourceAngle);
  pFVar10 = ::FName::FName(&local_98,10,L"LightColor",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyLightComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetSkyLightComponentLightColor,SetSkyLightComponentLightColor);
  pFVar10 = ::FName::FName(&local_90,9,L"Intensity",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyLightComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSkyLightComponentIntensity,SetSkyLightComponentIntensity);
  pFVar10 = ::FName::FName(&local_88,0x10,L"bRealTimeCapture",FNAME_Add);
  pTVar1 = &(param_1->Accessors).Bool.CustomAccessors;
  FVar5 = *pFVar10;
  local_80 = Z_Construct_UClass_USkyLightComponent_NoRegister();
  FVar13 = (param_1->Accessors).Bool.CustomAccessors.AllocatorInstance.SecondaryData;
  pcStack_68 = GetSkyLightComponentRealtimeCapture;
  if (FVar13 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
                 )0x0) {
    FVar13 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
              )pTVar1;
  }
  local_70 = 0xffff;
  local_60 = SetSkyLightComponentRealtimeCapture;
  FStack_78 = FVar5;
  if (((ulonglong)FVar13 <= &local_80) &&
     (&local_80 <
      (UClass **)
      ((longlong)FVar13 + (longlong)(param_1->Accessors).Bool.CustomAccessors.ArrayMax * 0x28))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (param_1->Accessors).Bool.CustomAccessors.ArrayNum;
  piVar2 = &(param_1->Accessors).Bool.CustomAccessors.ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>_>
                      (0x828,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_1->Accessors).Bool.CustomAccessors.ArrayNum = iVar9 + 1;
  FVar13 = (param_1->Accessors).Bool.CustomAccessors.AllocatorInstance.SecondaryData;
  lVar12 = (longlong)iVar9;
  if (FVar13 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
                 )0x0) {
    FVar13 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::FBoolPropertyTraits>_>
              )pTVar1;
  }
  puVar4 = (undefined8 *)((longlong)FVar13 + lVar12 * 0x28);
  *puVar4 = local_80;
  *(FName *)(puVar4 + 1) = FStack_78;
  *(ulonglong *)((uchar *)((longlong)FVar13 + 0x10) + lVar12 * 0x28) = CONCAT62(uStack_6e,local_70);
  *(code **)((uchar *)((longlong)FVar13 + 0x10) + lVar12 * 0x28 + 8) = pcStack_68;
  *(code **)((uchar *)((longlong)FVar13 + 0x20) + lVar12 * 0x28) = local_60;
  pFVar10 = ::FName::FName(&local_1b8,0x12,L"MieScatteringScale",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSkyAtmosphereComponentMieScatteringScale,
             SetSkyAtmosphereComponentMieScatteringScale);
  pFVar10 = ::FName::FName(&local_1b0,0x1a,L"MieExponentialDistribution",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSkyAtmosphereComponentMieExponentialDistribution,
             SetSkyAtmosphereComponentMieExponentialDistribution);
  pFVar10 = ::FName::FName(&local_1a8,0x14,L"OtherAbsorptionScale",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSkyAtmosphereComponentOtherAbsorptionScale,
             SetSkyAtmosphereComponentOtherAbsorptionScale);
  pFVar10 = ::FName::FName(&local_1a0,0x1f,L"RayleighExponentialDistribution",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSkyAtmosphereComponentRayleighExponentialDistribution,
             SetSkyAtmosphereComponentRayleighExponentialDistribution);
  pFVar10 = ::FName::FName(&local_198,0x17,L"RayleighScatteringScale",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSkyAtmosphereComponentRayleighScatteringScale,
             SetSkyAtmosphereComponentRayleighScatteringScale);
  pFVar10 = ::FName::FName(&local_190,0x21,L"AerialPespectiveViewDistanceScale",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSkyAtmosphereComponentAerialPerspectiveViewDistanceScale,
             SetSkyAtmosphereComponentAerialPerspectiveViewDistanceScale);
  pFVar10 = ::FName::FName(&local_188,0xd,L"MieAbsorption",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetSkyAtmosphereComponentMieAbsorption,
        SetSkyAtmosphereComponentMieAbsorption);
  pFVar10 = ::FName::FName(&local_180,0xd,L"MieScattering",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetSkyAtmosphereComponentMieScattering,
        SetSkyAtmosphereComponentMieScattering);
  pFVar10 = ::FName::FName(&local_178,0xf,L"OtherAbsorption",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetSkyAtmosphereComponentOtherAbsorption,
        SetSkyAtmosphereComponentOtherAbsorption);
  pFVar10 = ::FName::FName(&local_170,0x12,L"RayleighScattering",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetSkyAtmosphereComponentRayleighScattering,
        SetSkyAtmosphereComponentRayleighScattering);
  pFVar10 = ::FName::FName(&local_168,0x12,L"SkyLuminanceFactor",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetSkyAtmosphereComponentSkyLuminanceFactor,
        SetSkyAtmosphereComponentSkyLuminanceFactor);
  ::FString::PrintfImpl(&local_1c8,L"%s.%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_1c8.Data.ArrayNum != 0) {
    FVar14.Data = local_1c8.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_160,(wchar_t *)FVar14.Data);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetMassScale,SetMassScale);
  pFVar10 = ::FName::FName(&local_158,10,L"FogDensity",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentFogDensity,
             SetExponentialHeightFogComponentFogDensity);
  pFVar10 = ::FName::FName(&local_150,0x10,L"FogHeightFalloff",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentFogHeightFalloff,
             SetExponentialHeightFogComponentFogHeightFalloff);
  pFVar10 = ::FName::FName(&local_148,0x1f,L"DirectionalInscatteringExponent",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentDirectionalInscatteringExponent,
             SetExponentialHeightFogComponentDirectionalInscatteringExponent);
  pFVar10 = ::FName::FName(&local_140,0xd,L"StartDistance",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentStartDistance,
             SetExponentialHeightFogComponentStartDistance);
  pFVar10 = ::FName::FName(&local_138,0x1a,L"VolumetricFogStartDistance",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentVolumetricFogStartDistance,
             SetExponentialHeightFogComponentVolumetricFogStartDistance);
  pFVar10 = ::FName::FName(&local_130,0x1f,L"VolumetricFogNearFadeInDistance",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentVolumetricFogNearFadeInDistance,
             SetExponentialHeightFogComponentVolumetricFogNearFadeInDistance);
  pFVar10 = ::FName::FName(&local_128,0x1c,L"VolumetricFogExtinctionScale",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentVolumetricFogExtinctionScale,
             SetExponentialHeightFogComponentVolumetricFogExtinctionScale);
  pFVar10 = ::FName::FName(&local_120,0x20,L"DirectionalInscatteringLuminance",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetExponentialHeightFogComponentDirectionalInscatteringColor,
        SetExponentialHeightFogComponentDirectionalInscatteringColor);
  pFVar10 = ::FName::FName(&local_118,0x18,L"FogInscatteringLuminance",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetExponentialHeightFogComponentFogInscatteringColor,
        SetExponentialHeightFogComponentFogInscatteringColor);
  pFVar10 = ::FName::FName(&local_110,0xd,L"FogMaxOpacity",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetExponentialHeightFogComponentFogMaxOpacity,
             SetExponentialHeightFogComponentFogMaxOpacity);
  pFVar10 = ::FName::FName(&local_108,0x13,L"VolumetricFogAlbedo",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetExponentialHeightFogVolumetricFogAlbedo,
        SetExponentialHeightFogVolumetricFogAlbedo);
  ::FString::PrintfImpl(&local_1d8,L"%s.%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_1d8.Data.ArrayNum != 0) {
    FVar14.Data = local_1d8.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_100,(wchar_t *)FVar14.Data);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSecondFogDataFogDensity,SetSecondFogDataFogDensity);
  ::FString::PrintfImpl(&local_1e8,L"%s.%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_1e8.Data.ArrayNum != 0) {
    FVar14.Data = local_1e8.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_f8,(wchar_t *)FVar14.Data);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSecondFogDataFogHeightFalloff,SetSecondFogDataFogHeightFalloff
            );
  ::FString::PrintfImpl(&local_1f8,L"%s.%s");
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_1f8.Data.ArrayNum != 0) {
    FVar14.Data = local_1f8.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_f0,(wchar_t *)FVar14.Data);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetSecondFogDataFogHeightOffset,SetSecondFogDataFogHeightOffset);
  pFVar10 = ::FName::FName(&local_e8,0x13,L"RadialFogExtinction",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::FFloatPropertyTraits,8>::Add
            (this_00,pUVar11,FVar5,GetLocalFogVolumeComponentRadialFogExtinction,
             SetLocalFogVolumeComponentRadialFogExtinction);
  pFVar10 = ::FName::FName(&local_e0,9,L"FogAlbedo",FNAME_Add);
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();
  TCustomPropertyRegistration<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>,8>
  ::Add(this,pUVar11,FVar5,GetLocalFogVolumeComponentFogAlbedo,SetLocalFogVolumeComponentFogAlbedo);
  pFVar10 = ::FName::FName(&local_a8,"Transform");
  pTVar3 = &(param_1->Accessors).ComponentTransform.CustomAccessors;
  FVar5 = *pFVar10;
  local_58 = Z_Construct_UClass_USceneComponent_NoRegister();
  FVar15 = (param_1->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.SecondaryData;
  pcStack_40 = GetComponentTransform;
  local_48 = 0xffff;
  local_38 = SetComponentTransformAndVelocity;
  if (FVar15 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                 )0x0) {
    FVar15 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
              )pTVar3;
  }
  FStack_50 = FVar5;
  if (((ulonglong)FVar15 <= &local_58) &&
     (&local_58 <
      (UClass **)
      ((longlong)FVar15 +
      (longlong)(param_1->Accessors).ComponentTransform.CustomAccessors.ArrayMax * 0x28))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (param_1->Accessors).ComponentTransform.CustomAccessors.ArrayNum;
  piVar2 = &(param_1->Accessors).ComponentTransform.CustomAccessors.ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>_>
                      (0x828,&pTVar3->AllocatorInstance,piVar2);
  }
  lVar12 = (longlong)iVar9;
  (param_1->Accessors).ComponentTransform.CustomAccessors.ArrayNum = iVar9 + 1;
  FVar15 = (param_1->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                 )0x0) {
    FVar15 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
              )pTVar3;
  }
  puVar4 = (undefined8 *)((longlong)FVar15 + lVar12 * 0x28);
  *puVar4 = local_58;
  *(FName *)(puVar4 + 1) = FStack_50;
  *(ulonglong *)((uchar *)((longlong)FVar15 + 0x10) + lVar12 * 0x28) = CONCAT62(uStack_46,local_48);
  *(code **)((uchar *)((longlong)FVar15 + 0x10) + lVar12 * 0x28 + 8) = pcStack_40;
  *(code **)((uchar *)((longlong)FVar15 + 0x20) + lVar12 * 0x28) = local_38;
  local_248 = (FWeakObjectPtr)Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_248 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_248);
  }
  local_238.ObjectIndex = 0;
  local_238.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_248 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_248);
  }
  FWeakObjectPtr::operator=(&local_238,(FObjectPtr)&local_248);
  uVar7 = uStack_22f;
  local_230 = true;
  local_248 = local_238;
  pFVar10 = ::FName::FName(&local_d0,"SkeletalMeshAsset");
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  local_208.AllowedClass.WeakPtr = local_248;
  local_208.bAllowsClear = true;
  local_208._9_3_ = uVar7;
  FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::Add
            (&(param_1->Accessors).Object,pUVar11,FVar5,GetSkeletalMeshAsset,SetSkeletalMeshAsset,
             &local_208);
  local_240 = (FWeakObjectPtr)Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_240 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_240);
  }
  local_22c.ObjectIndex = 0;
  local_22c.ObjectSerialNumber = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_240 != (FWeakObjectPtr)0x0)) {
    GC::MarkAsReachable((UObject *)local_240);
  }
  FWeakObjectPtr::operator=(&local_22c,(FObjectPtr)&local_240);
  uVar7 = uStack_223;
  local_224 = true;
  local_240 = local_22c;
  pFVar10 = ::FName::FName(&local_c8,"SkeletalMesh");
  FVar5 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  local_218.AllowedClass.WeakPtr = local_240;
  local_218.bAllowsClear = true;
  local_218._9_3_ = uVar7;
  FMovieSceneTracksComponentTypes::FObjectPropertyRegistration::Add
            (&(param_1->Accessors).Object,pUVar11,FVar5,GetSkeletalMesh_DEPRECATED,
             SetSkeletalMesh_DEPRECATED,&local_218);
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  return;
}

// LogRemovedExternalObjects @ 1466a60f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieSceneTracks::LogRemovedExternalObjects
          (UObject *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FString *pFVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint local_res10 [2];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  bVar8 = false;
  bVar7 = false;
  local_res10[0] = 0;
  iVar2 = param_2->ArrayNum;
  if (iVar2 != 0) {
    pFVar10 = (param_2->AllocatorInstance).Data;
    bVar6 = true;
    pFVar1 = pFVar10 + (longlong)iVar2 * 8;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar1) break;
      if (bVar6) {
        bVar6 = false;
      }
      else {
        ::FString::AppendChars(&local_78,L", ",2);
      }
      if (*(UObjectBaseUtility **)pFVar10 == (UObjectBaseUtility *)0x0) {
        bVar8 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7389950433491419209>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Bindings\\MovieSceneSpawnableActorBinding.cpp"
                           ,0x49,"Object");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar8 = true;
        pFVar9 = ::FString::FString(&local_58,L"null");
      }
      else {
        bVar7 = true;
        pFVar9 = UObjectBaseUtility::GetPathName
                           (*(UObjectBaseUtility **)pFVar10,&local_68,(UObject *)0x0);
      }
      pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar3 = (pFVar9->Data).ArrayNum;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
      if ((bVar7) &&
         (bVar7 = false, local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((bVar8) &&
         (bVar8 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar11 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar11 = 0;
      }
      ::FString::AppendChars(&local_78,(wchar_t *)pFVar4,iVar11);
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar10 = pFVar10 + 8;
    }
    if (2 < (byte)LogMovieScene._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PopulatePrerequisites @ 1466ac950

void __cdecl
UE::MovieScene::PopulatePrerequisites
          (FComponentAccess *param_1,FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  code *pcVar1;
  bool bVar2;
  FComponentTypeID local_res8;
  FComponentTypeID local_resa [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  if ((param_1->ComponentType).Value == 0xffff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("In->ComponentType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1d5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.Value = (param_1->ComponentType).Value;
  local_18._First = &local_res8;
  local_18._Last = local_resa;
  FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  return;
}

// SetComponentTransform @ 1466f84a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetComponentTransform(USceneComponent *param_1,FIntermediate3DTransform *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  TQuat<double> *pTVar18;
  undefined1 auStack_168 [32];
  TRotator<double> local_130;
  TVector<double>_u_0 local_118;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_1->_padding_ == 0) ||
     (plVar7 = *(longlong **)(param_1->_padding_ + 0x1b8), plVar7 == (longlong *)0x0)) {
    cVar17 = '\0';
  }
  else {
    cVar17 = (**(code **)(*plVar7 + 0x4f8))(plVar7,0);
  }
  local_130.Pitch = param_2->R_Y;
  local_130.Yaw = param_2->R_Z;
  dVar1 = param_2->T_X;
  dVar2 = param_2->T_Y;
  uVar11 = *(undefined4 *)&param_2->T_X;
  uVar12 = *(undefined4 *)((longlong)&param_2->T_X + 4);
  uVar13 = *(undefined4 *)&param_2->T_Y;
  dVar3 = param_2->T_Z;
  dVar4 = param_2->S_X;
  dVar5 = param_2->S_Y;
  uVar14 = *(undefined4 *)&param_2->S_X;
  uVar15 = *(undefined4 *)((longlong)&param_2->S_X + 4);
  uVar16 = *(undefined4 *)&param_2->S_Y;
  dVar6 = param_2->S_Z;
  local_130.Roll = param_2->R_X;
  pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_130,(TQuat<double> *)&local_118._s_0);
  dVar8 = (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
  local_f8.Rotation.XY.m128d_f64[0] = pTVar18->X;
  local_f8.Rotation.XY.m128d_f64[1] = pTVar18->Y;
  local_f8.Rotation.ZW.m128d_f64[0] = pTVar18->Z;
  local_f8.Rotation.ZW.m128d_f64[1] = pTVar18->W;
  local_f8.Translation.ZW.m128d_f64[1] = 0.0;
  dVar9 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
  dVar10 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
  local_f8.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_f8.Translation.XY.m128d_f64[0]._0_4_ = uVar11;
  local_f8.Translation.XY.m128d_f64[0]._4_4_ = uVar12;
  local_f8.Translation.XY.m128d_f64[1]._0_4_ = uVar13;
  local_f8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_f8.Translation.ZW.m128d_f64[0] = dVar3;
  local_f8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar14;
  local_f8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar15;
  local_f8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar16;
  local_f8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_f8.Scale3D.ZW.m128d_f64[0] = dVar6;
  USceneComponent::SetRelativeTransform
            (param_1,&local_f8,false,(FHitResult *)0x0,-(cVar17 != '\0') & ResetPhysics);
  local_118._s_0.X = dVar1;
  local_118._s_0.Y = dVar2;
  local_118._s_0.Z = dVar3;
  USceneComponent::SetRelativeLocation_Direct(param_1,(TVector<double> *)&local_118._s_0);
  local_118._s_0.X = local_130.Pitch;
  local_118._s_0.Y = local_130.Yaw;
  local_118._s_0.Z = local_130.Roll;
  USceneComponent::SetRelativeRotation_Direct(param_1,(TRotator<double> *)&local_118._s_0);
  if (dVar10 * dVar9 * dVar8 * dVar4 * dVar5 * dVar6 <= 0.0) {
    UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  }
  return;
}

// SetComponentTransformAndVelocity @ 1466f86d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetComponentTransformAndVelocity(UObject *param_1,FIntermediate3DTransform *param_2)

{
  USceneComponent *pUVar1;
  
  pUVar1 = CastChecked<USceneComponent,UObject>(param_1);
  FIntermediate3DTransform::ApplyTransformTo(pUVar1,param_2);
  return;
}

// SetComponentTranslationAndRotation @ 1466f8700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetComponentTranslationAndRotation
          (USceneComponent *param_1,FIntermediate3DTransform *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  char cVar8;
  TRotator<double> local_a8;
  TVector<double>_u_0 local_88 [5];
  
  if ((param_1->_padding_ == 0) ||
     (plVar7 = *(longlong **)(param_1->_padding_ + 0x1b8), plVar7 == (longlong *)0x0)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (**(code **)(*plVar7 + 0x4f8))(plVar7,0);
  }
  dVar1 = param_2->T_X;
  dVar2 = param_2->T_Y;
  dVar3 = param_2->T_Z;
  dVar4 = param_2->R_Y;
  dVar5 = param_2->R_Z;
  dVar6 = param_2->R_X;
  local_a8.Pitch = dVar4;
  local_a8.Yaw = dVar5;
  local_a8.Roll = dVar6;
  local_88[0]._0_8_ = dVar1;
  local_88[0]._8_8_ = dVar2;
  local_88[0]._16_8_ = dVar3;
  USceneComponent::SetRelativeLocationAndRotation
            (param_1,(TVector<double> *)&local_88[0]._s_0,&local_a8,false,(FHitResult *)0x0,
             -(cVar8 != '\0') & ResetPhysics);
  local_88[0]._0_8_ = dVar1;
  local_88[0]._8_8_ = dVar2;
  local_88[0]._16_8_ = dVar3;
  USceneComponent::SetRelativeLocation_Direct(param_1,(TVector<double> *)&local_88[0]._s_0);
  local_88[0]._0_8_ = dVar4;
  local_88[0]._8_8_ = dVar5;
  local_88[0]._16_8_ = dVar6;
  USceneComponent::SetRelativeRotation_Direct(param_1,(TRotator<double> *)&local_88[0]._s_0);
  return;
}

// SetDirectionalLightComponentLightSourceAngle @ 1466f8b70

void __cdecl
UE::MovieScene::SetDirectionalLightComponentLightSourceAngle(UObject *param_1,float param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_38;
  FString local_28 [2];
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UDirectionalLightComponent>(&local_38);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    UDirectionalLightComponent::SetLightSourceAngle((UDirectionalLightComponent *)param_1,param_2);
    return;
  }
  pFVar3 = GetTypeName<UDirectionalLightComponent>(&local_38);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(local_28,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// SetExponentialHeightFogComponentDirectionalInscatteringColor @ 1466f8c50

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentDirectionalInscatteringColor
          (UObject *param_1,FIntermediateColor *param_2)

{
  UExponentialHeightFogComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  UExponentialHeightFogComponent::SetDirectionalInscatteringColor
            (this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetExponentialHeightFogComponentDirectionalInscatteringExponent @ 1466f8cc0

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentDirectionalInscatteringExponent
          (UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetDirectionalInscatteringExponent(this,param_2);
  return;
}

// SetExponentialHeightFogComponentFogDensity @ 1466f8cf0

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentFogDensity(UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetFogDensity(this,param_2);
  return;
}

// SetExponentialHeightFogComponentFogHeightFalloff @ 1466f8d20

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentFogHeightFalloff(UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetFogHeightFalloff(this,param_2);
  return;
}

// SetExponentialHeightFogComponentFogInscatteringColor @ 1466f8d50

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentFogInscatteringColor
          (UObject *param_1,FIntermediateColor *param_2)

{
  UExponentialHeightFogComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  UExponentialHeightFogComponent::SetFogInscatteringColor(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetExponentialHeightFogComponentFogMaxOpacity @ 1466f8dc0

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentFogMaxOpacity(UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetFogMaxOpacity(this,param_2);
  return;
}

// SetExponentialHeightFogComponentStartDistance @ 1466f8df0

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentStartDistance(UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetStartDistance(this,param_2);
  return;
}

// SetExponentialHeightFogComponentVolumetricFogExtinctionScale @ 1466f8e20

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentVolumetricFogExtinctionScale
          (UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetVolumetricFogExtinctionScale(this,param_2);
  return;
}

// SetExponentialHeightFogComponentVolumetricFogNearFadeInDistance @ 1466f8e50

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentVolumetricFogNearFadeInDistance
          (UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetVolumetricFogNearFadeInDistance(this,param_2);
  return;
}

// SetExponentialHeightFogComponentVolumetricFogStartDistance @ 1466f8e80

void __cdecl
UE::MovieScene::SetExponentialHeightFogComponentVolumetricFogStartDistance
          (UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetVolumetricFogStartDistance(this,param_2);
  return;
}

// SetExponentialHeightFogVolumetricFogAlbedo @ 1466f8eb0

void __cdecl
UE::MovieScene::SetExponentialHeightFogVolumetricFogAlbedo
          (UObject *param_1,FIntermediateColor *param_2)

{
  UExponentialHeightFogComponent *this;
  FColor local_res10;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  FLinearColor::ToFColorSRGB((FLinearColor *)&local_18._s_0);
  UExponentialHeightFogComponent::SetVolumetricFogAlbedo(this,local_res10);
  return;
}

// SetLightComponentIndirectLightingIntensity @ 1466f9460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetLightComponentIndirectLightingIntensity(UObject *param_1,float param_2)

{
  ULightComponent *this;
  
  this = CastChecked<ULightComponent,UObject>(param_1);
  ULightComponent::SetIndirectLightingIntensity(this,param_2);
  return;
}

// SetLightComponentIntensity @ 1466f9490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl UE::MovieScene::SetLightComponentIntensity(UObject *param_1,float param_2)

{
  ULightComponent *this;
  
  this = CastChecked<ULightComponent,UObject>(param_1);
  ULightComponent::SetIntensity(this,param_2);
  return;
}

// SetLightComponentLightColor @ 1466f94c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetLightComponentLightColor(UObject *param_1,FIntermediateColor *param_2)

{
  ULightComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<ULightComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  ULightComponent::SetLightColor(this,(FLinearColor *)&local_18._s_0,true);
  return;
}

// SetLightComponentVolumetricScatteringIntensity @ 1466f9530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetLightComponentVolumetricScatteringIntensity(UObject *param_1,float param_2)

{
  ULightComponent *this;
  
  this = CastChecked<ULightComponent,UObject>(param_1);
  ULightComponent::SetVolumetricScatteringIntensity(this,param_2);
  return;
}

// SetLocalFogVolumeComponentFogAlbedo @ 1466f9560

void __cdecl
UE::MovieScene::SetLocalFogVolumeComponentFogAlbedo(UObject *param_1,FIntermediateColor *param_2)

{
  ULocalFogVolumeComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<ULocalFogVolumeComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  ULocalFogVolumeComponent::SetFogAlbedo(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetLocalFogVolumeComponentRadialFogExtinction @ 1466f95d0

void __cdecl
UE::MovieScene::SetLocalFogVolumeComponentRadialFogExtinction(UObject *param_1,float param_2)

{
  ULocalFogVolumeComponent *this;
  
  this = CastChecked<ULocalFogVolumeComponent,UObject>(param_1);
  ULocalFogVolumeComponent::SetRadialFogExtinction(this,param_2);
  return;
}

// SetMassScale @ 1466f9650

void __cdecl UE::MovieScene::SetMassScale(UObject *param_1,float param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_38;
  FString local_28 [2];
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPrimitiveComponent>(&local_38);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x0001466f96b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x960))(param_1,0,param_2);
    return;
  }
  pFVar3 = GetTypeName<UPrimitiveComponent>(&local_38);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(local_28,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// SetSecondFogDataFogDensity @ 1466fb230

void __cdecl UE::MovieScene::SetSecondFogDataFogDensity(UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetSecondFogDensity(this,param_2);
  return;
}

// SetSecondFogDataFogHeightFalloff @ 1466fb260

void __cdecl UE::MovieScene::SetSecondFogDataFogHeightFalloff(UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetSecondFogHeightFalloff(this,param_2);
  return;
}

// SetSecondFogDataFogHeightOffset @ 1466fb290

void __cdecl UE::MovieScene::SetSecondFogDataFogHeightOffset(UObject *param_1,float param_2)

{
  UExponentialHeightFogComponent *this;
  
  this = CastChecked<UExponentialHeightFogComponent,UObject>(param_1);
  UExponentialHeightFogComponent::SetSecondFogHeightOffset(this,param_2);
  return;
}

// SetSkeletalMeshAnimationMode @ 1466fb2c0

void __cdecl UE::MovieScene::SetSkeletalMeshAnimationMode(UObject *param_1,uchar param_2)

{
  USkeletalMeshComponent *this;
  
  this = CastChecked<USkeletalMeshComponent,UObject>(param_1);
  USkeletalMeshComponent::SetAnimationMode(this,(uint)param_2,false);
  return;
}

// SetSkeletalMeshAsset @ 1466fb2f0

void __cdecl
UE::MovieScene::SetSkeletalMeshAsset
          (UObject *param_1,FObjectMetadata *param_2,FObjectComponent *param_3)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  
  pUVar2 = CastChecked<USkeletalMeshComponent,UObject>(param_1);
  pUVar3 = FObjectComponent::GetObject(param_3);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_1466fb337;
  }
  pUVar3 = (UObject *)0x0;
LAB_1466fb337:
                    /* WARNING: Could not recover jumptable at 0x0001466fb34d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar2->_padding_ + 0xb48))(pUVar2,pUVar3,0);
  return;
}

// SetSkeletalMesh_DEPRECATED @ 1466fb360

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkeletalMesh_DEPRECATED
          (UObject *param_1,FObjectMetadata *param_2,FObjectComponent *param_3)

{
  int iVar1;
  UClass *pUVar2;
  USkeletalMesh *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar4 = GetTypeName<USkinnedMeshComponent>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar2 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) {
    pFVar4 = GetTypeName<USkinnedMeshComponent>(&local_28);
    pwVar6 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar5);
  }
  pUVar3 = (USkeletalMesh *)FObjectComponent::GetObject(param_3);
  if (pUVar3 != (USkeletalMesh *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_1466fb3d1;
  }
  pUVar3 = (USkeletalMesh *)0x0;
LAB_1466fb3d1:
  USkinnedMeshComponent::SetSkeletalMesh_DEPRECATED((USkinnedMeshComponent *)param_1,pUVar3);
  return;
}

// SetSkyAtmosphereComponentAerialPerspectiveViewDistanceScale @ 1466fb470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentAerialPerspectiveViewDistanceScale
          (UObject *param_1,float param_2)

{
  USkyAtmosphereComponent *this;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  USkyAtmosphereComponent::SetAerialPespectiveViewDistanceScale(this,param_2);
  return;
}

// SetSkyAtmosphereComponentMieAbsorption @ 1466fb4a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentMieAbsorption(UObject *param_1,FIntermediateColor *param_2)

{
  USkyAtmosphereComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  USkyAtmosphereComponent::SetMieAbsorption(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetSkyAtmosphereComponentMieExponentialDistribution @ 1466fb510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentMieExponentialDistribution(UObject *param_1,float param_2)

{
  USkyAtmosphereComponent *this;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  USkyAtmosphereComponent::SetMieExponentialDistribution(this,param_2);
  return;
}

// SetSkyAtmosphereComponentMieScattering @ 1466fb540

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentMieScattering(UObject *param_1,FIntermediateColor *param_2)

{
  USkyAtmosphereComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  USkyAtmosphereComponent::SetMieScattering(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetSkyAtmosphereComponentMieScatteringScale @ 1466fb5b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentMieScatteringScale(UObject *param_1,float param_2)

{
  USkyAtmosphereComponent *this;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  USkyAtmosphereComponent::SetMieScatteringScale(this,param_2);
  return;
}

// SetSkyAtmosphereComponentOtherAbsorption @ 1466fb5e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentOtherAbsorption
          (UObject *param_1,FIntermediateColor *param_2)

{
  USkyAtmosphereComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  USkyAtmosphereComponent::SetOtherAbsorption(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetSkyAtmosphereComponentOtherAbsorptionScale @ 1466fb650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentOtherAbsorptionScale(UObject *param_1,float param_2)

{
  USkyAtmosphereComponent *this;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  USkyAtmosphereComponent::SetOtherAbsorptionScale(this,param_2);
  return;
}

// SetSkyAtmosphereComponentRayleighExponentialDistribution @ 1466fb680

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentRayleighExponentialDistribution
          (UObject *param_1,float param_2)

{
  USkyAtmosphereComponent *this;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  USkyAtmosphereComponent::SetRayleighExponentialDistribution(this,param_2);
  return;
}

// SetSkyAtmosphereComponentRayleighScattering @ 1466fb6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentRayleighScattering
          (UObject *param_1,FIntermediateColor *param_2)

{
  USkyAtmosphereComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  USkyAtmosphereComponent::SetRayleighScattering(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetSkyAtmosphereComponentRayleighScatteringScale @ 1466fb720

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentRayleighScatteringScale(UObject *param_1,float param_2)

{
  USkyAtmosphereComponent *this;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  USkyAtmosphereComponent::SetRayleighScatteringScale(this,param_2);
  return;
}

// SetSkyAtmosphereComponentSkyLuminanceFactor @ 1466fb750

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetSkyAtmosphereComponentSkyLuminanceFactor
          (UObject *param_1,FIntermediateColor *param_2)

{
  USkyAtmosphereComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<USkyAtmosphereComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  USkyAtmosphereComponent::SetSkyLuminanceFactor(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetSkyLightComponentIntensity @ 1466fb7c0

void __cdecl UE::MovieScene::SetSkyLightComponentIntensity(UObject *param_1,float param_2)

{
  USkyLightComponent *this;
  
  this = CastChecked<USkyLightComponent,UObject>(param_1);
  USkyLightComponent::SetIntensity(this,param_2);
  return;
}

// SetSkyLightComponentLightColor @ 1466fb7f0

void __cdecl
UE::MovieScene::SetSkyLightComponentLightColor(UObject *param_1,FIntermediateColor *param_2)

{
  USkyLightComponent *this;
  FLinearColor_u_0 local_18;
  
  this = CastChecked<USkyLightComponent,UObject>(param_1);
  local_18._s_0.R = (float)param_2->R;
  local_18._s_0.G = (float)param_2->G;
  local_18._s_0.B = (float)param_2->B;
  local_18._s_0.A = (float)param_2->A;
  USkyLightComponent::SetLightColor(this,(FLinearColor *)&local_18._s_0);
  return;
}

// SetSkyLightComponentRealtimeCapture @ 1466fb860

void __cdecl
UE::MovieScene::SetSkyLightComponentRealtimeCapture
          (UObject *param_1,FBoolMetaData param_2,bool param_3)

{
  USkyLightComponent *this;
  
  this = CastChecked<USkyLightComponent,UObject>(param_1);
  USkyLightComponent::SetRealTimeCapture(this,param_3);
  return;
}

// UnpackChannelsFromOperational @ 146700af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (TRotator<double> *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FName *pFVar1;
  FUnpackedChannelValue *pFVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  TIndexedChannelValue<FMovieSceneDoubleChannel> local_58;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = ::FName::FName(&local_40,"Pitch");
  local_58._padding_ = (longlong)param_1->Pitch;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 0;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Yaw");
  local_58._padding_ = (longlong)param_1->Yaw;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 1;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Roll");
  local_58._padding_ = (longlong)param_1->Roll;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 2;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 146700ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FDoubleIntermediateVector *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FName *pFVar1;
  FUnpackedChannelValue *pFVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  TIndexedChannelValue<FMovieSceneDoubleChannel> local_58;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = ::FName::FName(&local_40,"X");
  local_58._padding_ = (longlong)param_1->X;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 0;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Y");
  local_58._padding_ = (longlong)param_1->Y;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 1;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Z");
  local_58._padding_ = (longlong)param_1->Z;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 2;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"W");
  local_58._padding_ = (longlong)param_1->W;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 3;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 146700ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FFloatIntermediateVector *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FName *pFVar1;
  FUnpackedChannelValue *pFVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  TIndexedChannelValue<FMovieSceneDoubleChannel> local_58;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = ::FName::FName(&local_40,"X");
  local_58._padding_ = (longlong)param_1->X;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 0;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Y");
  local_58._padding_ = (longlong)param_1->Y;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 1;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Z");
  local_58._padding_ = (longlong)param_1->Z;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 2;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"W");
  local_58._padding_ = (longlong)param_1->W;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 3;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 1467010e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FIntermediate3DTransform *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FName *pFVar1;
  FUnpackedChannelValue *pFVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_78 [32];
  TIndexedChannelValue<FMovieSceneDoubleChannel> local_58;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar1 = ::FName::FName(&local_40,"Location.X");
  local_58._padding_ = (longlong)param_1->T_X;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 0;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Location.Y");
  local_58._padding_ = (longlong)param_1->T_Y;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 1;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Location.Z");
  local_58._padding_ = (longlong)param_1->T_Z;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 2;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Rotation.X");
  local_58._padding_ = (longlong)param_1->R_X;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 3;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Rotation.Y");
  local_58._padding_ = (longlong)param_1->R_Y;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 4;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Rotation.Z");
  local_58._padding_ = (longlong)param_1->R_Z;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 5;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Scale.X");
  local_58._padding_ = (longlong)param_1->S_X;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 6;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Scale.Y");
  local_58._padding_ = (longlong)param_1->S_Y;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 7;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar1 = ::FName::FName(&local_40,"Scale.Z");
  local_58._padding_ = (longlong)param_1->S_Z;
  local_58._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_58.ChannelIndex = 8;
  pFVar2 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_58,*pFVar1);
  FUnpackedChannelValues::Add(param_3,pFVar2);
  if ((local_18 & 1) != 0) {
    pppuVar3 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar3 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar3)(pppuVar3,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 146701520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FIntermediateColor *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  UScriptStruct *pUVar1;
  FName *pFVar2;
  FUnpackedChannelValue *pFVar3;
  undefined8 ***pppuVar4;
  char *pcVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  int local_48;
  FName local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = FSlateColor::StaticStruct();
    if ((UScriptStruct *)param_2[1]._padding_ == (UScriptStruct *)0x0) {
      bVar6 = pUVar1 == (UScriptStruct *)0x0;
    }
    else {
      bVar6 = (UScriptStruct *)param_2[1]._padding_ == pUVar1;
    }
    if (bVar6) {
      pFVar2 = ::FName::FName(&local_40,"SpecifiedColor.R");
      local_58._8_4_ = (undefined4)param_1->R;
      local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
      local_48 = 0;
      pFVar3 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                         ((FUnpackedChannelValue *)local_38,
                          (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar2);
      FUnpackedChannelValues::Add(param_3,pFVar3);
      if ((local_18 & 1) != 0) {
        pppuVar4 = local_30;
        if ((local_18 & 2) == 0) {
          pppuVar4 = (undefined8 ***)local_30[0];
        }
        local_18 = local_18 & 0xfe;
        (*(code *)**pppuVar4)(pppuVar4,0);
        if ((local_18 & 2) == 0) {
          FMemory::Free(local_30[0]);
        }
      }
      pFVar2 = ::FName::FName(&local_40,"SpecifiedColor.G");
      local_58._8_4_ = (undefined4)param_1->G;
      local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
      local_48 = 1;
      pFVar3 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                         ((FUnpackedChannelValue *)local_38,
                          (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar2);
      FUnpackedChannelValues::Add(param_3,pFVar3);
      if ((local_18 & 1) != 0) {
        pppuVar4 = local_30;
        if ((local_18 & 2) == 0) {
          pppuVar4 = (undefined8 ***)local_30[0];
        }
        local_18 = local_18 & 0xfe;
        (*(code *)**pppuVar4)(pppuVar4,0);
        if ((local_18 & 2) == 0) {
          FMemory::Free(local_30[0]);
        }
      }
      pFVar2 = ::FName::FName(&local_40,"SpecifiedColor.B");
      local_58._8_4_ = (undefined4)param_1->B;
      local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
      local_48 = 2;
      pFVar3 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                         ((FUnpackedChannelValue *)local_38,
                          (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar2);
      FUnpackedChannelValues::Add(param_3,pFVar3);
      if ((local_18 & 1) != 0) {
        pppuVar4 = local_30;
        if ((local_18 & 2) == 0) {
          pppuVar4 = (undefined8 ***)local_30[0];
        }
        local_18 = local_18 & 0xfe;
        (*(code *)**pppuVar4)(pppuVar4,0);
        if ((local_18 & 2) == 0) {
          FMemory::Free(local_30[0]);
        }
      }
      pcVar5 = "SpecifiedColor.A";
      goto LAB_146701856;
    }
  }
  pFVar2 = ::FName::FName(&local_40,"R");
  local_58._8_4_ = (undefined4)param_1->R;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 0;
  pFVar3 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar2);
  FUnpackedChannelValues::Add(param_3,pFVar3);
  if ((local_18 & 1) != 0) {
    pppuVar4 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar2 = ::FName::FName(&local_40,"G");
  local_58._8_4_ = (undefined4)param_1->G;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 1;
  pFVar3 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar2);
  FUnpackedChannelValues::Add(param_3,pFVar3);
  if ((local_18 & 1) != 0) {
    pppuVar4 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pFVar2 = ::FName::FName(&local_40,"B");
  local_58._8_4_ = (undefined4)param_1->B;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 2;
  pFVar3 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar2);
  FUnpackedChannelValues::Add(param_3,pFVar3);
  if ((local_18 & 1) != 0) {
    pppuVar4 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  pcVar5 = "A";
LAB_146701856:
  pFVar2 = ::FName::FName(&local_40,pcVar5);
  local_58._8_4_ = (undefined4)param_1->A;
  local_58._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_48 = 3;
  pFVar3 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_58,*pFVar2);
  FUnpackedChannelValues::Add(param_3,pFVar3);
  if ((local_18 & 1) != 0) {
    pppuVar4 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 1467018f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FString *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **local_70;
  FString local_68;
  undefined4 local_58;
  undefined1 local_50 [8];
  undefined8 **local_48 [3];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_70 = &___7__TChannelValue_UFMovieSceneStringChannel___MovieScene_UE__6B_;
  local_78 = 0;
  ::FString::FString(&local_68,param_1);
  local_30 = local_30 & 0xfc;
  local_70 = &___7__TIndexedChannelValue_UFMovieSceneStringChannel___MovieScene_UE__6B_;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_58 = 0;
  local_48[0] = FMemory::Malloc(0x20,8);
  pppuVar4 = local_48;
  if ((local_30 & 2) == 0) {
    pppuVar4 = (undefined8 ***)local_48[0];
  }
  local_30 = local_30 | 1;
  *pppuVar4 = (undefined8 **)&___7__TChannelValue_UFMovieSceneStringChannel___MovieScene_UE__6B_;
  pppuVar4[1] = (undefined8 **)0x0;
  pppuVar4[1] = (undefined8 **)local_68.Data.AllocatorInstance.Data;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pppuVar4 + 2) = local_68.Data.ArrayNum;
  *(int *)((longlong)pppuVar4 + 0x14) = local_68.Data.ArrayMax;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  *pppuVar4 = (undefined8 **)
              &___7__TIndexedChannelValue_UFMovieSceneStringChannel___MovieScene_UE__6B_;
  *(undefined4 *)(pppuVar4 + 3) = local_58;
  if ((local_30 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pppuVar4 = local_48;
  if ((local_30 & 2) == 0) {
    pppuVar4 = (undefined8 ***)local_48[0];
  }
  if ((local_30 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pppuVar3 = local_48;
  if ((local_30 & 2) == 0) {
    pppuVar3 = (undefined8 ***)local_48[0];
  }
  if (pppuVar4 != pppuVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUnpackedChannelValues::Add(param_3,(FUnpackedChannelValue *)local_50);
  if ((local_30 & 1) != 0) {
    pppuVar4 = local_48;
    if ((local_30 & 2) == 0) {
      pppuVar4 = (undefined8 ***)local_48[0];
    }
    local_30 = local_30 & 0xfe;
    (*(code *)**pppuVar4)(pppuVar4,0);
    if ((local_30 & 2) == 0) {
      FMemory::Free(local_48[0]);
    }
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

// UnpackChannelsFromOperational @ 146701ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (FText *param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined1 auStack_88 [32];
  FName local_68;
  undefined1 local_60 [8];
  undefined **local_58;
  FText local_50;
  undefined4 local_40;
  undefined1 local_38 [8];
  undefined8 ***local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  local_50.TextData.Reference = (param_1->TextData).Reference;
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 8))(local_50.TextData.Reference,local_60);
  }
  local_50.Flags = param_1->Flags;
  local_18 = local_18 & 0xfc;
  local_38._0_4_ = local_68.ComparisonIndex.Value;
  local_38._4_4_ = local_68.Number;
  local_58 = &___7__TIndexedChannelValue_UFMovieSceneTextChannel___MovieScene_UE__6B_;
  local_40 = 0;
  local_30[0] = FMemory::Malloc(0x20,8);
  ppppuVar4 = local_30;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined8 ****)local_30[0];
  }
  local_18 = local_18 | 1;
  *ppppuVar4 = (undefined8 ***)&___7__TChannelValue_UFMovieSceneTextChannel___MovieScene_UE__6B_;
  FText::FText((FText *)(ppppuVar4 + 1),&local_50);
  *ppppuVar4 = (undefined8 ***)
               &___7__TIndexedChannelValue_UFMovieSceneTextChannel___MovieScene_UE__6B_;
  *(undefined4 *)(ppppuVar4 + 3) = local_40;
  if ((local_18 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppppuVar4 = local_30;
  if ((local_18 & 2) == 0) {
    ppppuVar4 = (undefined8 ****)local_30[0];
  }
  if ((local_18 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppppuVar3 = local_30;
  if ((local_18 & 2) == 0) {
    ppppuVar3 = (undefined8 ****)local_30[0];
  }
  if (ppppuVar4 != ppppuVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUnpackedChannelValues::Add(param_3,(FUnpackedChannelValue *)local_38);
  if ((local_18 & 1) != 0) {
    ppppuVar4 = local_30;
    if ((local_18 & 2) == 0) {
      ppppuVar4 = (undefined8 ****)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar4)(ppppuVar4,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  return;
}

// UnpackChannelsFromOperational @ 146701c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (uchar param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined ****ppppuVar3;
  undefined ****ppppuVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined ***local_38;
  uchar local_30;
  uchar local_28 [8];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = local_20 | 3;
  local_48 = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_38 = (undefined ***)&___7__TIndexedChannelValue_UFMovieSceneByteChannel___MovieScene_UE__6B_
  ;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_30 = param_1;
  if ((local_20 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppppuVar4 = &local_38;
  if ((local_20 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_38;
  }
  if ((local_20 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppppuVar3 = &local_38;
  if ((local_20 & 2) == 0) {
    ppppuVar3 = (undefined ****)local_38;
  }
  if (ppppuVar4 != ppppuVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUnpackedChannelValues::Add(param_3,(FUnpackedChannelValue *)local_40);
  if ((local_20 & 1) != 0) {
    ppppuVar4 = &local_38;
    if ((local_20 & 2) == 0) {
      ppppuVar4 = (undefined ****)local_38;
    }
    local_20 = local_20 & 0xfe;
    (*(code *)**ppppuVar4)(ppppuVar4,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_38);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 146701de0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (float param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FUnpackedChannelValue *pFVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [16];
  int local_40;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_40 = 0;
  local_50._0_8_ = &___7__TIndexedChannelValue_UFMovieSceneFloatChannel___MovieScene_UE__6B_;
  local_50._8_4_ = param_1;
  pFVar1 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneFloatChannel>
                     ((FUnpackedChannelValue *)local_38,
                      (TIndexedChannelValue<FMovieSceneFloatChannel> *)local_50,(FName)0x0);
  FUnpackedChannelValues::Add(param_3,pFVar1);
  if ((local_18 & 1) != 0) {
    pppuVar2 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar2 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar2)(pppuVar2,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 146701e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (double param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  FUnpackedChannelValue *pFVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  TIndexedChannelValue<FMovieSceneDoubleChannel> local_50;
  undefined1 local_38 [8];
  undefined8 **local_30 [3];
  byte local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_50.ChannelIndex = 0;
  local_50._padding_ =
       (longlong)&___7__TIndexedChannelValue_UFMovieSceneDoubleChannel___MovieScene_UE__6B_;
  local_50._padding_ = (longlong)param_1;
  pFVar1 = FUnpackedChannelValue::FUnpackedChannelValue<FMovieSceneDoubleChannel>
                     ((FUnpackedChannelValue *)local_38,&local_50,(FName)0x0);
  FUnpackedChannelValues::Add(param_3,pFVar1);
  if ((local_18 & 1) != 0) {
    pppuVar2 = local_30;
    if ((local_18 & 2) == 0) {
      pppuVar2 = (undefined8 ***)local_30[0];
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**pppuVar2)(pppuVar2,0);
    if ((local_18 & 2) == 0) {
      FMemory::Free(local_30[0]);
    }
  }
  return;
}

// UnpackChannelsFromOperational @ 146701f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::UnpackChannelsFromOperational
          (long64 param_1,FProperty *param_2,FUnpackedChannelValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined ****ppppuVar3;
  undefined ****ppppuVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [8];
  undefined ***local_38;
  uchar local_30 [8];
  uchar local_28 [8];
  byte local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_20 = local_20 | 3;
  local_48 = 0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_38 = (undefined ***)
             &___7__TIndexedChannelValue_UFMovieSceneIntegerChannel___MovieScene_UE__6B_;
  local_30._0_4_ = (undefined4)param_1;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  if ((local_20 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppppuVar4 = &local_38;
  if ((local_20 & 2) == 0) {
    ppppuVar4 = (undefined ****)local_38;
  }
  if ((local_20 & 1) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppppuVar3 = &local_38;
  if ((local_20 & 2) == 0) {
    ppppuVar3 = (undefined ****)local_38;
  }
  if (ppppuVar4 != ppppuVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUnpackedChannelValues::Add(param_3,(FUnpackedChannelValue *)local_40);
  if ((local_20 & 1) != 0) {
    ppppuVar4 = &local_38;
    if ((local_20 & 2) == 0) {
      ppppuVar4 = (undefined ****)local_38;
    }
    local_20 = local_20 & 0xfe;
    (*(code *)**ppppuVar4)(ppppuVar4,0);
    if ((local_20 & 2) == 0) {
      FMemory::Free(local_38);
    }
  }
  return;
}

// Construct<FMovieSceneEventSectionData> @ 146721640

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEventSectionData>(void *param_1)

{
  memset(param_1,0,0x110);
  FMovieSceneEventSectionData::FMovieSceneEventSectionData(param_1);
  return;
}

// ConstructForTests<FMovieSceneEventSectionData> @ 146721670

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneEventSectionData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneEventSectionData__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 2;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xf0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  return;
}

// Destruct<FMovieSceneEventSectionData> @ 1467216c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEventSectionData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xc0));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0x88));
  DestructItems<FEventPayload,int>
            (*(FEventPayload **)((longlong)param_1 + 0x78),*(int *)((longlong)param_1 + 0x80));
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Construct<FMovieSceneColorKeyStruct> @ 1467216d0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneColorKeyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneColorKeyStruct__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FMovieSceneColorKeyStruct> @ 146721720

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneColorKeyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined ***)param_1 = &___7FMovieSceneColorKeyStruct__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FMovieSceneColorKeyStruct> @ 146721750

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneColorKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Copy<FMovieSceneEventSectionData> @ 146721830

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEventSectionData>(void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  ForAnyElementType *pFVar2;
  ForAnyElementType *pFVar3;
  int *piVar4;
  int iVar5;
  FEventPayload *pFVar6;
  void *pvVar7;
  
  pvVar7 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar7 + 0x48),
                 pTVar1);
    }
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar7 + 0x68),
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar7 + (longlong)param_2 + (0x68 - (longlong)param_1)));
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar7 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pFVar3 = (ForAnyElementType *)((longlong)pvVar7 + 0x78);
    if (pFVar3 != pFVar2) {
      DestructItems<FEventPayload,int>
                ((FEventPayload *)pFVar3->Data,*(int *)((longlong)pvVar7 + 0x80));
      iVar5 = *(int *)((longlong)pvVar7 + (longlong)param_2 + (0x80 - (longlong)param_1));
      piVar4 = (int *)((longlong)pvVar7 + 0x84);
      pFVar6 = (FEventPayload *)pFVar2->Data;
      *(int *)((longlong)pvVar7 + 0x80) = iVar5;
      if ((iVar5 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar5,*piVar4,pFVar3,iVar5,piVar4);
        ConstructItems<FEventPayload,FEventPayload,int>(pFVar3->Data,pFVar6,iVar5);
      }
    }
    FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar7 + 0x88));
    pvVar7 = (void *)((longlong)pvVar7 + 0x110);
  }
  return true;
}

// Construct<FMovieSceneVector3fKeyStruct> @ 146721e70

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneVector3fKeyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector3fKeyStruct__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FMovieSceneVector3fKeyStruct> @ 146721ec0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneVector3fKeyStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector3fKeyStruct__6B_;
  *(undefined8 *)((longlong)param_1 + 0x28) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)((longlong)param_1 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FMovieSceneVector3fKeyStruct> @ 146721f00

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneVector3fKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FEventPayload> @ 146722180

void __cdecl UE::CoreUObject::Private::Construct<FEventPayload>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(FPackageFileVersion *)((longlong)param_1 + 0x28) = GPackageFileUEVersion;
  *(int *)((longlong)param_1 + 0x30) = GPackageFileLicenseeUEVersion;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FEventPayload> @ 1467221c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEventPayload>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(FPackageFileVersion *)((longlong)param_1 + 0x28) = GPackageFileUEVersion;
  *(int *)((longlong)param_1 + 0x30) = GPackageFileLicenseeUEVersion;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FEventPayload> @ 146722200

void __cdecl UE::CoreUObject::Private::Destruct<FEventPayload>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FEventPayload> @ 146722240

bool __cdecl UE::CoreUObject::Private::Copy<FEventPayload>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(lVar2 + (longlong)puVar1);
      FSoftObjectPath::operator=
                ((FSoftObjectPath *)((longlong)param_1 + 8),
                 (FSoftObjectPath *)((longlong)puVar1 + lVar2 + 8));
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)puVar1 + lVar2 + 0x28);
      *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)puVar1 + lVar2 + 0x30);
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x38),
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                 ((longlong)puVar1 + lVar2 + 0x38));
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 9;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTransformParameterNameAndCurves> @ 1467223e0

void __cdecl UE::CoreUObject::Private::Construct<FTransformParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x380));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x4a8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x5d0));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x6f8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x820));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x948));
  return;
}

// ConstructForTests<FTransformParameterNameAndCurves> @ 1467223f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTransformParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x380));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x4a8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x5d0));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x6f8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x820));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x948));
  return;
}

// Destruct<FTransformParameterNameAndCurves> @ 146722400

void __cdecl UE::CoreUObject::Private::Destruct<FTransformParameterNameAndCurves>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x948));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x820));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x6f8));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x5d0));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x4a8));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x380));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  return;
}

// Copy<FTransformParameterNameAndCurves> @ 146722420

bool __cdecl
UE::CoreUObject::Private::Copy<FTransformParameterNameAndCurves>
          (void *param_1,void *param_2,int param_3)

{
  FTransformParameterNameAndCurves *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FTransformParameterNameAndCurves::operator=
                (this,(FTransformParameterNameAndCurves *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneVector2fKeyStruct> @ 146722580

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneVector2fKeyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector2fKeyStruct__6B_;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return;
}

// ConstructForTests<FMovieSceneVector2fKeyStruct> @ 1467225d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneVector2fKeyStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector2fKeyStruct__6B_;
  ((TVector2<float>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  return;
}

// Destruct<FMovieSceneVector2fKeyStruct> @ 1467226c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneVector2fKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FMovieSceneEventParameters> @ 146722bf0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEventParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(FPackageFileVersion *)((longlong)param_1 + 0x20) = GPackageFileUEVersion;
  *(int *)((longlong)param_1 + 0x28) = GPackageFileLicenseeUEVersion;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// ConstructForTests<FMovieSceneEventParameters> @ 146722c50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneEventParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(FPackageFileVersion *)((longlong)param_1 + 0x20) = GPackageFileUEVersion;
  *(int *)((longlong)param_1 + 0x28) = GPackageFileLicenseeUEVersion;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  return;
}

// Destruct<FMovieSceneEventParameters> @ 146722c90

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEventParameters>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// SerializeArchive<FMovieSceneEventParameters> @ 146722db0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FMovieSceneEventParameters>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  UObject *local_res8;
  FSoftObjectPath local_28;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) ||
     (iVar2 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID),
     7 < iVar2)) {
    (**(code **)(*(longlong *)param_1 + 0x140))(param_1,param_2);
  }
  else {
    local_res8 = (UObject *)0x0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_res8);
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,local_res8);
    puVar1 = (undefined8 *)((longlong)param_2 + 0x10);
    *(FName *)param_2 = local_28.AssetPath.PackageName;
    *(FName *)((longlong)param_2 + 8) = local_28.AssetPath.AssetName;
    if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      *puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
      *(int *)((longlong)param_2 + 0x18) = local_28.SubPathString.Data.ArrayNum;
      *(int *)((longlong)param_2 + 0x1c) = local_28.SubPathString.Data.ArrayMax;
      local_28.SubPathString.Data.ArrayNum = 0;
      local_28.SubPathString.Data.ArrayMax = 0;
      local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
  }
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x30)
            );
  if ((param_1->field_0x28 & 1) != 0) {
    *(undefined8 *)((longlong)param_2 + 0x20) = *(undefined8 *)&param_1->field_0x40;
    *(undefined4 *)((longlong)param_2 + 0x28) = *(undefined4 *)&param_1->field_0x48;
  }
  return true;
}

// Copy<FMovieSceneEventParameters> @ 146722fa0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEventParameters>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftObjectPath::operator=(param_1,param_2);
    (((FSoftObjectPath *)((longlong)param_1 + 0x20))->AssetPath).PackageName =
         (((FSoftObjectPath *)((longlong)param_2 + 0x20))->AssetPath).PackageName;
    (((FSoftObjectPath *)((longlong)param_1 + 0x20))->AssetPath).AssetName.ComparisonIndex.Value =
         (((FSoftObjectPath *)((longlong)param_2 + 0x20))->AssetPath).AssetName.ComparisonIndex.
         Value;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               &((FSoftObjectPath *)((longlong)param_1 + 0x20))->SubPathString,
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               &((FSoftObjectPath *)((longlong)param_2 + 0x20))->SubPathString);
    param_2 = (void *)((longlong)param_2 + 0x40);
    param_1 = (FSoftObjectPath *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FColorParameterNameAndCurves> @ 146723170

void __cdecl UE::CoreUObject::Private::Construct<FColorParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x380));
  return;
}

// ConstructForTests<FColorParameterNameAndCurves> @ 1467231c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FColorParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x380));
  return;
}

// Destruct<FColorParameterNameAndCurves> @ 146723210

void __cdecl UE::CoreUObject::Private::Destruct<FColorParameterNameAndCurves>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x380));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  return;
}

// Construct<FMovieSceneCameraShakeSectionData> @ 146723260

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneCameraShakeSectionData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneCameraShakeSectionData> @ 146723350

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneCameraShakeSectionData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneCameraShakeSectionData> @ 146723380

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneCameraShakeSectionData>(void *param_1)

{
  return;
}

// Copy<FColorParameterNameAndCurves> @ 146723390

bool __cdecl
UE::CoreUObject::Private::Copy<FColorParameterNameAndCurves>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 8),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 8));
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 0x130));
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 600),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 600));
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x380),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 0x380));
    param_2 = (void *)((longlong)param_2 + 0x4a8);
    param_1 = (undefined8 *)((longlong)param_1 + 0x4a8);
  }
  return true;
}

// Copy<FMovieSceneCameraShakeSectionData> @ 146723550

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneCameraShakeSectionData>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar3 = *puVar1;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined1 *)((longlong)puVar3 + 0xc) = *(undefined1 *)((longlong)puVar1 + 0xc);
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      puVar3[4] = puVar1[4];
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneFloatVectorKeyStructBase> @ 146723670

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneFloatVectorKeyStructBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneFloatVectorKeyStructBase__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneFloatVectorKeyStructBase> @ 1467236a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneFloatVectorKeyStructBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneFloatVectorKeyStructBase__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneFloatVectorKeyStructBase> @ 1467236d0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneFloatVectorKeyStructBase>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FVectorParameterNameAndCurves> @ 146723dd0

void __cdecl UE::CoreUObject::Private::Construct<FVectorParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  return;
}

// ConstructForTests<FVectorParameterNameAndCurves> @ 146723e10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVectorParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  return;
}

// Destruct<FVectorParameterNameAndCurves> @ 146723f10

void __cdecl UE::CoreUObject::Private::Destruct<FVectorParameterNameAndCurves>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 600));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  return;
}

// Copy<FVectorParameterNameAndCurves> @ 146723f50

bool __cdecl
UE::CoreUObject::Private::Copy<FVectorParameterNameAndCurves>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 8),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 8));
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 0x130));
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 600),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 600));
    param_2 = (void *)((longlong)param_2 + 0x380);
    param_1 = (undefined8 *)((longlong)param_1 + 0x380);
  }
  return true;
}

// Construct<FVector2DParameterNameAndCurves> @ 146724360

void __cdecl UE::CoreUObject::Private::Construct<FVector2DParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  return;
}

// ConstructForTests<FVector2DParameterNameAndCurves> @ 146724450

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FVector2DParameterNameAndCurves>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  return;
}

// Destruct<FVector2DParameterNameAndCurves> @ 146724480

void __cdecl UE::CoreUObject::Private::Destruct<FVector2DParameterNameAndCurves>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  return;
}

// Copy<FVector2DParameterNameAndCurves> @ 1467244b0

bool __cdecl
UE::CoreUObject::Private::Copy<FVector2DParameterNameAndCurves>
          (void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 8),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 8));
    FMovieSceneFloatChannel::operator=
              ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x130),
               (FMovieSceneFloatChannel *)((longlong)param_2 + 0x130));
    param_2 = (void *)((longlong)param_2 + 600);
    param_1 = (undefined8 *)((longlong)param_1 + 600);
  }
  return true;
}

// Construct<FScalarParameterNameAndCurve> @ 1467247b0

void __cdecl UE::CoreUObject::Private::Construct<FScalarParameterNameAndCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FScalarParameterNameAndCurve> @ 1467247d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FScalarParameterNameAndCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  return;
}

// Destruct<FScalarParameterNameAndCurve> @ 1467247f0

void __cdecl UE::CoreUObject::Private::Destruct<FScalarParameterNameAndCurve>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 8));
  return;
}

// Copy<FScalarParameterNameAndCurve> @ 146724840

bool __cdecl
UE::CoreUObject::Private::Copy<FScalarParameterNameAndCurve>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)(puVar1 + 1),
                 (FMovieSceneFloatChannel *)
                 ((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x26;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBoolParameterNameAndCurve> @ 146724fa0

void __cdecl UE::CoreUObject::Private::Construct<FBoolParameterNameAndCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel((FMovieSceneBoolChannel *)((longlong)param_1 + 8));
  return;
}

// ConstructForTests<FBoolParameterNameAndCurve> @ 146724fc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBoolParameterNameAndCurve>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel((FMovieSceneBoolChannel *)((longlong)param_1 + 8));
  return;
}

// Destruct<FBoolParameterNameAndCurve> @ 146724fe0

void __cdecl UE::CoreUObject::Private::Destruct<FBoolParameterNameAndCurve>(void *param_1)

{
  FMovieSceneBoolChannel::~FMovieSceneBoolChannel((FMovieSceneBoolChannel *)((longlong)param_1 + 8))
  ;
  return;
}

// Copy<FBoolParameterNameAndCurve> @ 1467250b0

bool __cdecl
UE::CoreUObject::Private::Copy<FBoolParameterNameAndCurve>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar2 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      *puVar4 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if (puVar2 != puVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar4 + 2),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar2 + 2));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar4 + 6),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar2 + 6));
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
        CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar4 + 10),
                   (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(puVar2 + 10));
      }
      *(undefined1 *)(puVar4 + 0xe) = *(undefined1 *)(puVar2 + 0xe);
      *(undefined1 *)((longlong)puVar4 + 0x71) = *(undefined1 *)((longlong)puVar2 + 0x71);
      TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(puVar4 + 0xf),
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(puVar2 + 0xf));
      *(undefined1 *)(puVar4 + 0x11) = *(undefined1 *)(puVar2 + 0x11);
      *(undefined1 *)((longlong)puVar4 + 0x89) = *(undefined1 *)((longlong)puVar2 + 0x89);
      if (puVar4 != puVar2) {
        iVar3 = *(int *)(puVar2 + 0x13);
        piVar1 = (int *)((longlong)puVar4 + 0x9c);
        _Src = (void *)puVar2[0x12];
        *(int *)(puVar4 + 0x13) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3,*piVar1,(ForAnyElementType *)(puVar4 + 0x12),iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)(puVar4 + 0x12))->Data,_Src,(longlong)iVar3);
          }
        }
      }
      FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)(puVar4 + 0x14));
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0x25;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBaseParameterNameAndValue> @ 1467252e0

void __cdecl UE::CoreUObject::Private::Construct<FBaseParameterNameAndValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FBaseParameterNameAndValue> @ 1467252f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBaseParameterNameAndValue>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FBaseParameterNameAndValue> @ 146725300

void __cdecl UE::CoreUObject::Private::Destruct<FBaseParameterNameAndValue>(void *param_1)

{
  return;
}

// Copy<FBaseParameterNameAndValue> @ 146725310

bool __cdecl
UE::CoreUObject::Private::Copy<FBaseParameterNameAndValue>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneCVarOverrides> @ 1467253c0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneCVarOverrides>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FMovieSceneCVarOverrides> @ 146725400

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneCVarOverrides>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FMovieSceneCVarOverrides> @ 146725430

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneCVarOverrides>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FMovieSceneCVarOverrides> @ 146725530

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneCVarOverrides>(void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=(this,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                        *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneConsoleVariableCollection> @ 146725980

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneConsoleVariableCollection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMovieSceneConsoleVariableCollection> @ 1467259a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneConsoleVariableCollection>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMovieSceneConsoleVariableCollection> @ 1467259c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneConsoleVariableCollection>(void *param_1)

{
  return;
}

// Copy<FMovieSceneConsoleVariableCollection> @ 1467259d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneConsoleVariableCollection>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar1 + 2);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneSkeletalAnimationParams> @ 146725be0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneSkeletalAnimationParams>(void *param_1)

{
  double dVar1;
  float fVar2;
  
  dVar1 = __real_3ff0000000000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant
            ((FMovieSceneNumericVariant *)((longlong)param_1 + 0x18),dVar1);
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x40));
  fVar2 = SkeletalDeprecatedMagicNumber;
  dVar1 = __real_3ff0000000000000;
  *(float *)((longlong)param_1 + 0x16c) = SkeletalDeprecatedMagicNumber;
  *(float *)((longlong)param_1 + 0x170) = fVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)((longlong)param_1 + 0x18),dVar1);
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) & 0xfffffffe;
  *(FName *)((longlong)param_1 + 0x2c) = DefaultSlotName;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x20000;
  return;
}

// ConstructForTests<FMovieSceneSkeletalAnimationParams> @ 146725bf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneSkeletalAnimationParams>(void *param_1)

{
  double dVar1;
  float fVar2;
  
  dVar1 = __real_3ff0000000000000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant
            ((FMovieSceneNumericVariant *)((longlong)param_1 + 0x18),dVar1);
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x40));
  fVar2 = SkeletalDeprecatedMagicNumber;
  dVar1 = __real_3ff0000000000000;
  *(float *)((longlong)param_1 + 0x16c) = SkeletalDeprecatedMagicNumber;
  *(float *)((longlong)param_1 + 0x170) = fVar2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FMovieSceneTimeWarpVariant::Set((FMovieSceneTimeWarpVariant *)((longlong)param_1 + 0x18),dVar1);
  *(uint *)((longlong)param_1 + 0x28) = *(uint *)((longlong)param_1 + 0x28) & 0xfffffffe;
  *(FName *)((longlong)param_1 + 0x2c) = DefaultSlotName;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x168) = 0x20000;
  return;
}

// Destruct<FMovieSceneSkeletalAnimationParams> @ 146725c00

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneSkeletalAnimationParams>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x40));
  return;
}

// Copy<FMovieSceneSkeletalAnimationParams> @ 146725c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneSkeletalAnimationParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  FWeakObjectPtr FVar2;
  FMovieSceneNumericVariant *pFVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  FMovieSceneNumericVariant local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar4 = *puVar1;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar1 + 2);
      pFVar3 = FMovieSceneNumericVariant::ShallowCopy
                         ((FMovieSceneNumericVariant *)(puVar1 + 3),&local_48);
      FVar2 = (pFVar3->WeakCustomGetter).WeakPtr;
      puVar4[3] = *(undefined8 *)pFVar3->Data;
      *(FWeakObjectPtr *)(puVar4 + 4) = FVar2;
      *(uint *)(puVar4 + 5) =
           *(uint *)(puVar4 + 5) ^ (*(uint *)(puVar4 + 5) ^ *(uint *)(puVar1 + 5)) & 1;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = *(undefined8 *)((longlong)puVar1 + 0x2c);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[7] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[7]);
      }
      puVar4[7] = puVar1[7];
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)(puVar4 + 8),(FMovieSceneFloatChannel *)(puVar1 + 8));
      *(undefined1 *)(puVar4 + 0x2d) = *(undefined1 *)(puVar1 + 0x2d);
      *(undefined1 *)((longlong)puVar4 + 0x169) = *(undefined1 *)((longlong)puVar1 + 0x169);
      *(undefined1 *)((longlong)puVar4 + 0x16a) = *(undefined1 *)((longlong)puVar1 + 0x16a);
      *(undefined1 *)((longlong)puVar4 + 0x16b) = *(undefined1 *)((longlong)puVar1 + 0x16b);
      *(undefined4 *)((longlong)puVar4 + 0x16c) = *(undefined4 *)((longlong)puVar1 + 0x16c);
      *(undefined4 *)(puVar4 + 0x2e) = *(undefined4 *)(puVar1 + 0x2e);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 0x2f;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FColorMaterialParameterInfoAndCurves> @ 146726b40

void __cdecl
UE::CoreUObject::Private::Construct<FColorMaterialParameterInfoAndCurves>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 2;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x10));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x138));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x260));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x388));
  return;
}

// ConstructForTests<FColorMaterialParameterInfoAndCurves> @ 146726ba0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FColorMaterialParameterInfoAndCurves>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 2;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x10));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x138));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x260));
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x388));
  return;
}

// Destruct<FColorMaterialParameterInfoAndCurves> @ 146726c00

void __cdecl UE::CoreUObject::Private::Destruct<FColorMaterialParameterInfoAndCurves>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x388));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x260));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x138));
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FColorMaterialParameterInfoAndCurves> @ 146726cd0

bool __cdecl
UE::CoreUObject::Private::Copy<FColorMaterialParameterInfoAndCurves>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar3 + (longlong)param_1);
      uVar2 = puVar1[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x10),
                 (FMovieSceneFloatChannel *)((longlong)param_2 + 0x10));
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x138),
                 (FMovieSceneFloatChannel *)((longlong)param_2 + 0x138));
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x260),
                 (FMovieSceneFloatChannel *)((longlong)param_2 + 0x260));
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x388),
                 (FMovieSceneFloatChannel *)((longlong)param_2 + 0x388));
      param_2 = (void *)((longlong)param_2 + 0x4b0);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x4b0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneVector4dKeyStruct> @ 146726fd0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneVector4dKeyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector4dKeyStruct__6B_;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FMovieSceneVector4dKeyStruct> @ 146727050

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneVector4dKeyStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector4dKeyStruct__6B_;
  *(double *)((longlong)param_1 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0x3ff0000000000000;
  return;
}

// Destruct<FMovieSceneVector4dKeyStruct> @ 1467270b0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneVector4dKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FScalarMaterialParameterInfoAndCurve> @ 1467273b0

void __cdecl
UE::CoreUObject::Private::Construct<FScalarMaterialParameterInfoAndCurve>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 2;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FScalarMaterialParameterInfoAndCurve> @ 1467273e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FScalarMaterialParameterInfoAndCurve>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 2;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FScalarMaterialParameterInfoAndCurve> @ 146727410

void __cdecl UE::CoreUObject::Private::Destruct<FScalarMaterialParameterInfoAndCurve>(void *param_1)

{
  FMovieSceneFloatChannel::~FMovieSceneFloatChannel
            ((FMovieSceneFloatChannel *)((longlong)param_1 + 0x10));
  return;
}

// Copy<FScalarMaterialParameterInfoAndCurve> @ 146727460

bool __cdecl
UE::CoreUObject::Private::Copy<FScalarMaterialParameterInfoAndCurve>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      FMovieSceneFloatChannel::operator=
                ((FMovieSceneFloatChannel *)(puVar3 + 2),
                 (FMovieSceneFloatChannel *)
                 ((longlong)puVar3 + ((longlong)param_2 - (longlong)param_1) + 0x10));
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 0x27;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneVector3dKeyStruct> @ 1467277f0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneVector3dKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector3dKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// ConstructForTests<FMovieSceneVector3dKeyStruct> @ 146727840

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneVector3dKeyStruct>(void *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector3dKeyStruct__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0x28) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(double *)((longlong)param_1 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// Destruct<FMovieSceneVector3dKeyStruct> @ 146727880

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneVector3dKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FMovieSceneVector2DKeyStruct> @ 146727f00

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneVector2DKeyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector2DKeyStruct__6B_;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// ConstructForTests<FMovieSceneVector2DKeyStruct> @ 146727f40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneVector2DKeyStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector2DKeyStruct__6B_;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x28))->_s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  return;
}

// Destruct<FMovieSceneVector2DKeyStruct> @ 146727f70

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneVector2DKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FMovieSceneParticleChannel> @ 146728030

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneParticleChannel>(void *param_1)

{
  UEnum *pUVar1;
  UPackage *pUVar2;
  
  FMovieSceneByteChannel::FMovieSceneByteChannel(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneParticleChannel__6B_;
  if (Z_Registration_Info_UEnum_EParticleKey.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UEnum_EParticleKey.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EParticleKey,(UObject *)pUVar2,
                       L"EParticleKey");
  }
  pUVar1 = Z_Registration_Info_UEnum_EParticleKey.OuterSingleton;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_EParticleKey.OuterSingleton != (UEnum *)0x0)) {
    GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EParticleKey.OuterSingleton);
  }
  *(UEnum **)((longlong)param_1 + 0x98) = pUVar1;
  return;
}

// ConstructForTests<FMovieSceneParticleChannel> @ 146728040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneParticleChannel>(void *param_1)

{
  UEnum *pUVar1;
  UPackage *pUVar2;
  
  FMovieSceneByteChannel::FMovieSceneByteChannel(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneParticleChannel__6B_;
  if (Z_Registration_Info_UEnum_EParticleKey.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UEnum_EParticleKey.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EParticleKey,(UObject *)pUVar2,
                       L"EParticleKey");
  }
  pUVar1 = Z_Registration_Info_UEnum_EParticleKey.OuterSingleton;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UEnum_EParticleKey.OuterSingleton != (UEnum *)0x0)) {
    GC::MarkAsReachable((UObject *)Z_Registration_Info_UEnum_EParticleKey.OuterSingleton);
  }
  *(UEnum **)((longlong)param_1 + 0x98) = pUVar1;
  return;
}

// Destruct<FMovieSceneParticleChannel> @ 146728050

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneParticleChannel>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x120) = 0;
  if (*(void **)((longlong)param_1 + 0x118) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x118));
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xd8));
  TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator>
            ((TSparseArray<FKeyHandle,FDefaultSparseArrayAllocator> *)((longlong)param_1 + 0xa0));
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  FMovieSceneChannel::~FMovieSceneChannel(param_1);
  return;
}

// Copy<FMovieSceneParticleChannel> @ 146728060

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneParticleChannel>(void *param_1,void *param_2,int param_3)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar1;
  UObject *pUVar2;
  void *pvVar3;
  
  pvVar3 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (8 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 8)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 8),pTVar1
                );
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x28 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x28),
                 pTVar1);
    }
    pTVar1 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             ((longlong)pvVar3 + (longlong)param_2 + (0x48 - (longlong)param_1));
    if (pTVar1 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48)) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)((longlong)pvVar3 + 0x48),
                 pTVar1);
    }
    *(undefined1 *)((longlong)pvVar3 + 0x68) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x69) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x69 - (longlong)param_1));
    TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)((longlong)pvVar3 + 0x70),
               (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x70 - (longlong)param_1)));
    *(undefined1 *)((longlong)pvVar3 + 0x80) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar3 + 0x81) =
         *(undefined1 *)((longlong)pvVar3 + (longlong)param_2 + (0x81 - (longlong)param_1));
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)((longlong)pvVar3 + 0x88),
               (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
               ((longlong)pvVar3 + (longlong)param_2 + (0x88 - (longlong)param_1)));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = *(UObject **)((longlong)pvVar3 + (longlong)param_2 + (0x98 - (longlong)param_1)),
       pUVar2 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar2);
    }
    *(undefined8 *)((longlong)pvVar3 + 0x98) =
         *(undefined8 *)((longlong)pvVar3 + (longlong)param_2 + (0x98 - (longlong)param_1));
    FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)((longlong)pvVar3 + 0xa0));
    pvVar3 = (void *)((longlong)pvVar3 + 0x128);
  }
  return true;
}

// StructuredSerializeFromMismatchedTag<FMovieSceneParticleChannel> @ 1467281c0

bool __cdecl
UE::CoreUObject::Private::StructuredSerializeFromMismatchedTag<FMovieSceneParticleChannel>
          (FPropertyTag *param_1,FStructuredArchiveSlot param_2,void *param_3)

{
  bool bVar1;
  
  bVar1 = FMovieSceneByteChannel::SerializeFromMismatchedTag(param_3,param_1,param_2);
  return bVar1;
}

// Construct<FMovieSceneDoubleVectorKeyStructBase> @ 146728460

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneDoubleVectorKeyStructBase>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneDoubleVectorKeyStructBase__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMovieSceneDoubleVectorKeyStructBase> @ 146728490

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneDoubleVectorKeyStructBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FMovieSceneDoubleVectorKeyStructBase__6B_;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMovieSceneDoubleVectorKeyStructBase> @ 1467284c0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneDoubleVectorKeyStructBase>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// Construct<FMovieSceneVector4fKeyStruct> @ 146729020

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneVector4fKeyStruct>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector4fKeyStruct__6B_;
  *(float *)((longlong)param_1 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  *(float *)((longlong)param_1 + 0x34) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  *(float *)((longlong)param_1 + 0x38) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  return;
}

// ConstructForTests<FMovieSceneVector4fKeyStruct> @ 146729090

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneVector4fKeyStruct>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneVector4fKeyStruct__6B_;
  *(float *)((longlong)param_1 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  *(float *)((longlong)param_1 + 0x34) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  *(float *)((longlong)param_1 + 0x38) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  return;
}

// Destruct<FMovieSceneVector4fKeyStruct> @ 146729120

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneVector4fKeyStruct>(void *param_1)

{
  DestructItems<FMovieSceneChannelValueHelper,int>
            (*(FMovieSceneChannelValueHelper **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  *(undefined ***)param_1 = &___7FMovieSceneKeyStruct__6B_;
  return;
}

// AccessorToString<double,double,double,double,double,double,double,double,double,FString,__int64,bool> @ 14672c130

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
AccessorToString<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
          (TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
           *param_1,FEntityManager *param_2,FString *param_3)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  ForAnyElementType FVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  uint local_50;
  uint local_4c;
  FString local_48;
  FString local_38;
  
  uVar4 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_4c = 0;
  do {
    if (local_50 == local_4c) {
      local_50 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_58,(int *)&local_4c);
    }
    pFVar7 = local_58.Data + (longlong)(int)local_50 * 0x10;
    *(undefined8 *)pFVar7 = 0;
    *(undefined8 *)(pFVar7 + 8) = 0;
    local_50 = local_50 + 1;
    OneOfAccessorToString(param_1->ComponentTypes + (int)uVar4,param_2,(FString *)pFVar7);
    uVar2 = local_50;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xc);
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar7 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar5.Data = local_58.Data;
  while( true ) {
    if ((uint)uVar3 != uVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar5.Data == pFVar7) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar6 = *(int *)(FVar5.Data + 8) + -1;
    if (*(int *)(FVar5.Data + 8) == 0) {
      iVar6 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar5.Data,iVar6);
    uVar3 = (ulonglong)local_50;
    FVar5.Data = FVar5.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Or More Of: [ %s ]");
  iVar6 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// AddAccessorToFilter<double,double,double,double,double,double,double,double,double,FString,__int64,bool> @ 14672db50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::
AddAccessorToFilter<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
          (TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
           *param_1,FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  ulonglong uVar8;
  uint uVar9;
  TBitArray<TFixedAllocator<12>_> *this;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  TBitArray<TFixedAllocator<12>_> local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar12 = 0;
  uVar10 = 0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x180;
  do {
    uVar3 = *(ushort *)param_1;
    if (uVar3 != 0xffff) {
      iVar11 = (uVar3 - uVar12) + 1;
      if (0 < iVar11) {
        TBitArray<TFixedAllocator<12>_>::Add(&local_78,false,iVar11);
        uVar12 = local_78.NumBits;
      }
      if (((int)uVar12 <= (int)(uint)uVar3) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar2 = local_78.AllocatorInstance.InlineData + (uVar3 >> 5);
      *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
      uVar12 = local_78.NumBits;
    }
    uVar10 = uVar10 + 1;
    param_1 = (TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
               *)((longlong)param_1 + 4);
  } while (uVar10 < 0xc);
  iVar15 = 0;
  uVar14 = 0;
  iVar11 = (int)(uVar12 + 0x1f + ((int)(uVar12 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
  uVar10 = uVar12 & 0x8000001f;
  if ((int)uVar10 < 0) {
    uVar10 = (uVar10 - 1 | 0xffffffe0) + 1;
  }
  uVar9 = 0xffffffff >> ((byte)(0x20 - uVar10) & 0x1f);
  if (0x1f < (int)(0x20 - uVar10)) {
    uVar9 = 0xffffffff;
  }
  uVar10 = 0xffffffff;
  if (iVar11 == 1) {
    uVar10 = uVar9;
  }
  if (0 < iVar11) {
    do {
      uVar13 = *(uint *)local_78.AllocatorInstance.InlineData[uVar14].Pad;
      uVar6 = uVar13 & uVar10;
      if (uVar10 == 0xffffffff) {
        uVar6 = uVar13;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar8 = (ulonglong)uVar6 - ((ulonglong)(uVar6 >> 1) & 0x5555555555555555);
      uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
      iVar15 = iVar15 + (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38);
      uVar10 = 0xffffffff;
      if (uVar13 == iVar11 - 1U) {
        uVar10 = uVar9;
      }
    } while ((int)uVar13 < iVar11);
    if (iVar15 != 0) goto LAB_14672dd3c;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Mask.NumComponents() != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                     ,0x1cb,L"");
  uVar12 = local_78.NumBits;
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14672dd3c:
  if (0 < (int)uVar12) {
    iVar11 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar11 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar11 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_78);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  return;
}

// AddReferencedObjectForComponent<FMovieScenePreAnimatedMaterialParameters,UScriptStruct_*> @ 146736dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::
AddReferencedObjectForComponent<FMovieScenePreAnimatedMaterialParameters,UScriptStruct_*>
          (FReferenceCollector *param_1,FMovieScenePreAnimatedMaterialParameters *param_2)

{
  UScriptStruct *pUVar1;
  FFieldClass *pFVar2;
  TTuple<FProperty_const_*,void_const_*> *pTVar3;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar4;
  undefined1 auStackY_768 [32];
  FPropertyValueIterator local_738;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_768;
  pUVar1 = FMovieScenePreAnimatedMaterialParameters::StaticStruct();
  pFVar2 = FObjectProperty::StaticClass();
  FPropertyValueIterator::FPropertyValueIterator
            (&local_738,pFVar2,(UStruct *)pUVar1,param_2,FullRecursion,IncludeDeprecated);
  while( true ) {
    if (local_738.PropertyIteratorStack.ArrayNum < 1) break;
    FPropertyValueIterator::operator->(&local_738);
    pTVar3 = FPropertyValueIterator::operator->(&local_738);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,*(undefined8 *)&pTVar3->field_0x8,0,0);
    FPropertyValueIterator::IterateToNext(&local_738);
  }
  FVar4 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_738;
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FVar4 = local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData;
  }
  DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
            ((FPropertyValueStackEntry *)FVar4,local_738.PropertyIteratorStack.ArrayNum);
  if (local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
      (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
    FMemory::Free((void *)local_738.PropertyIteratorStack.AllocatorInstance.SecondaryData);
  }
  return;
}

// DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_*_&> @ 146739080

TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>_*_&>
                    (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedCustomPrimitiveDataInfo,FObjectKey,FName>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_*_&> @ 1467390a0

TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>_*_&>
          (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FPreAnimAttachment,FObjectKey>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_*_&> @ 1467390c0

TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<enum_EComponentMobility::Type,FObjectKey>_*_&>
          (TOverlappingEntityTracker_WithGarbage<EComponentMobility::Type,FObjectKey> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_*_&> @ 1467390e0

/* WARNING: Enum "Type": Some values do not have unique names */

TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>,UE::MovieScene::TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>_*_&>
                    (TMovieSceneMaterialSystem<UE::MovieScene::FComponentMaterialAccessor,UObject_*,FComponentMaterialInfo>
                     **param_1)

{
  return *param_1;
}

// EvaluateChannel<FMovieSceneFloatChannel,float> @ 146741df0

bool __cdecl
UE::MovieScene::EvaluateChannel<FMovieSceneFloatChannel,float>
          (FMovieSceneFloatChannel *param_1,FFrameTime param_2,float *param_3)

{
  bool bVar1;
  
  bVar1 = TMovieSceneCurveChannelImpl<FMovieSceneFloatChannel>::EvaluateCached
                    (param_1,(FTimeEvaluationCache *)0x0,param_2,param_3);
  return bVar1;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FAttachmentComponent>_>_> @ 146747130

FAttachmentComponent * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FAttachmentComponent>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FAttachmentComponent>_> *param_1,
          int param_2)

{
  return (FAttachmentComponent *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FComponentMaterialInfo>_>_> @ 146747150

FComponentMaterialInfo * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FComponentMaterialInfo>_>_>
          (TComponentLock<UE::MovieScene::TRead<FComponentMaterialInfo>_> *param_1,int param_2)

{
  return (FComponentMaterialInfo *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x10);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FConstraintComponentData>_>_> @ 146747170

FConstraintComponentData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FConstraintComponentData>_>_>
          (TComponentLock<UE::MovieScene::TRead<FConstraintComponentData>_> *param_1,int param_2)

{
  return (FConstraintComponentData *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>_> @ 146747190

FFrameTime * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>_>
          (TComponentLock<UE::MovieScene::TRead<FFrameTime>_> *param_1,int param_2)

{
  return (FFrameTime *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneCameraShakeComponentData>_>_> @ 1467471b0

FMovieSceneCameraShakeComponentData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneCameraShakeComponentData>_>_>
          (TComponentLock<UE::MovieScene::TRead<FMovieSceneCameraShakeComponentData>_> *param_1,
          int param_2)

{
  return (FMovieSceneCameraShakeComponentData *)
         ((longlong)param_2 * 0x40 + *(longlong *)&param_1->field_0x10);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FObjectComponent>_>_> @ 1467471d0

FObjectComponent * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FObjectComponent>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FObjectComponent>_> *param_1,
          int param_2)

{
  return (FObjectComponent *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x10);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FPerlinNoiseParams>_>_> @ 1467471f0

FPerlinNoiseParams * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FPerlinNoiseParams>_>_>
          (TComponentLock<UE::MovieScene::TRead<FPerlinNoiseParams>_> *param_1,int param_2)

{
  return (FPerlinNoiseParams *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceBoolChannel>_>_> @ 146747210

FSourceBoolChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceBoolChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceBoolChannel>_> *param_1,
          int param_2)

{
  return (FSourceBoolChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceByteChannel>_>_> @ 146747230

FSourceByteChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceByteChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceByteChannel>_> *param_1,
          int param_2)

{
  return (FSourceByteChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_>_> @ 146747250

FSourceDoubleChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_> *param_1,
          int param_2)

{
  return (FSourceDoubleChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_>_> @ 146747270

FSourceFloatChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_> *param_1,
          int param_2)

{
  return (FSourceFloatChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceIntegerChannel>_>_> @ 146747290

FSourceIntegerChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceIntegerChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceIntegerChannel>_> *param_1,
          int param_2)

{
  return (FSourceIntegerChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<unsigned_char>_>_> @ 1467472b0

uchar * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<unsigned_char>_>_>
          (TComponentLock<UE::MovieScene::TWrite<unsigned_char>_> *param_1,int param_2)

{
  return (uchar *)((longlong)param_2 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>_> @ 1467472c0

TWeakObjectPtr<USceneComponent,FWeakObjectPtr> * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>_>
          (TComponentLock<UE::MovieScene::TWrite<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>_>_>
           *param_1,int param_2)

{
  return (TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *)
         (*(longlong *)&param_1->field_0x18 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>_> @ 1467472e0

FCachedInterpolation * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>_>
          (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>
           *param_1,int param_2)

{
  return (FCachedInterpolation *)((longlong)param_2 * 0x60 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FMovieSceneCameraShakeInstanceData>_>_> @ 146747300

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMovieSceneCameraShakeInstanceData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FMovieSceneCameraShakeInstanceData>_>_>
          (TComponentLock<UE::MovieScene::TWrite<FMovieSceneCameraShakeInstanceData>_> *param_1,
          int param_2)

{
  return (FMovieSceneCameraShakeInstanceData *)
         ((longlong)param_2 * 0x20 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_>_> @ 146747320

FObjectComponent * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_>_>
          (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> *param_1,
          int param_2)

{
  return (FObjectComponent *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<__int64>_>_> @ 146747340

long64 * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<__int64>_>_>
          (TComponentLock<UE::MovieScene::TWrite<__int64>_> *param_1,int param_2)

{
  return (long64 *)(*(longlong *)&param_1->field_0x18 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<bool>_>_> @ 146747360

bool * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<bool>_>_>
          (TComponentLock<UE::MovieScene::TWrite<bool>_> *param_1,int param_2)

{
  return (bool *)((longlong)param_2 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UObject_*>_> @ 146747370

UObject * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UObject_*>_>
          (TRead<UObject_*> *param_1,int param_2)

{
  return *(UObject **)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<FConstraintComponentData>_> @ 146747390

FConstraintComponentData * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<FConstraintComponentData>_>
          (TRead<FConstraintComponentData> *param_1,int param_2)

{
  return (FConstraintComponentData *)((longlong)*param_1 + (longlong)param_2 * 0x18);
}

// GetComponentAtIndex<UE::MovieScene::TRead<FFrameTime>_> @ 1467473b0

FFrameTime * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<FFrameTime>_>
          (TRead<FFrameTime> *param_1,int param_2)

{
  return (FFrameTime *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<FPerlinNoiseParams>_> @ 1467473d0

FPerlinNoiseParams * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<FPerlinNoiseParams>_>
          (TRead<FPerlinNoiseParams> *param_1,int param_2)

{
  return (FPerlinNoiseParams *)((longlong)*param_1 + (longlong)param_2 * 0x18);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceBoolChannel>_> @ 1467473f0

FSourceBoolChannel * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceBoolChannel>_>
          (TRead<UE::MovieScene::FSourceBoolChannel> *param_1,int param_2)

{
  return (FSourceBoolChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceByteChannel>_> @ 146747410

FSourceByteChannel * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceByteChannel>_>
          (TRead<UE::MovieScene::FSourceByteChannel> *param_1,int param_2)

{
  return (FSourceByteChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_> @ 146747430

FSourceDoubleChannel * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceDoubleChannel>_>
          (TRead<UE::MovieScene::FSourceDoubleChannel> *param_1,int param_2)

{
  return (FSourceDoubleChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_> @ 146747450

FSourceFloatChannel * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceFloatChannel>_>
          (TRead<UE::MovieScene::FSourceFloatChannel> *param_1,int param_2)

{
  return (FSourceFloatChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceIntegerChannel>_> @ 146747470

FSourceIntegerChannel * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceIntegerChannel>_>
          (TRead<UE::MovieScene::FSourceIntegerChannel> *param_1,int param_2)

{
  return (FSourceIntegerChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TWrite<unsigned_char>_> @ 146747490

uchar * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TWrite<unsigned_char>_>
          (TWrite<unsigned_char> *param_1,int param_2)

{
  return (uchar *)((longlong)param_2 + (longlong)*param_1);
}

// GetComponentAtIndex<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_> @ 1467474a0

FCachedInterpolation * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TWrite<UE::MovieScene::Interpolation::FCachedInterpolation>_>
          (TWrite<UE::MovieScene::Interpolation::FCachedInterpolation> *param_1,int param_2)

{
  return (FCachedInterpolation *)((longlong)param_2 * 0x60 + (longlong)*param_1);
}

// GetComponentAtIndex<UE::MovieScene::TWrite<__int64>_> @ 1467474c0

long64 * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TWrite<__int64>_>
          (TWrite<__int64> *param_1,int param_2)

{
  return (long64 *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TWrite<bool>_> @ 1467474e0

bool * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TWrite<bool>_>
          (TWrite<bool> *param_1,int param_2)

{
  return (bool *)((longlong)param_2 + (longlong)*param_1);
}

// MakeChannelProxy<FMovieSceneFloatChannel> @ 146753dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FMovieSceneChannelProxy,1> * __cdecl
UE::MovieScene::MakeChannelProxy<FMovieSceneFloatChannel>
          (TSharedPtr<FMovieSceneChannelProxy,1> *__return_storage_ptr__,
          UMovieSceneSectionChannelOverrideRegistry *param_1,FMovieSceneFloatChannel *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UMovieSceneChannelOverrideContainer *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedPtr<FMovieSceneChannelProxy,1> *pTVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  TReferenceControllerBase<1> *pTVar10;
  FMovieSceneChannelProxy *pFVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  FMovieSceneChannelProxyData local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  local_68 = 0;
  local_60.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  local_60.Entries.ArrayNum = 0;
  local_60.Entries.ArrayMax = 1;
  if (param_1 == (UMovieSceneSectionChannelOverrideRegistry *)0x0) {
LAB_146753e2c:
    FMovieSceneChannelProxyData::AddInternal<FMovieSceneFloatChannel>(&local_60,param_2);
  }
  else {
    pUVar6 = UMovieSceneSectionChannelOverrideRegistry::GetChannel(param_1,(FName)0x0);
    if (pUVar6 == (UMovieSceneChannelOverrideContainer *)0x0) goto LAB_146753e2c;
    (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6,0,&local_60);
  }
  pTVar7 = ::operator_new(0x68);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pFVar11 = (FMovieSceneChannelProxy *)&DAT_00000010;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMovieSceneChannelProxy___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[3]._padding_ = 0;
    pTVar7[3].SharedReferenceCount = (atomic<int>)0x2;
    pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
    if (local_60.Entries.AllocatorInstance.SecondaryData ==
        (ForElementType<FMovieSceneChannelEntry>)0x0) {
      memmove(pTVar7 + 4,&local_60,0x18);
    }
    if (*(void **)&pTVar7[5].SharedReferenceCount != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar7[5].SharedReferenceCount);
    }
    pFVar11 = (FMovieSceneChannelProxy *)(pTVar7 + 1);
    *(ForElementType<FMovieSceneChannelEntry> *)&pTVar7[5].SharedReferenceCount =
         local_60.Entries.AllocatorInstance.SecondaryData;
    local_60.Entries.AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
    *(int *)&pTVar7[6]._padding_ = local_60.Entries.ArrayNum;
    *(int *)((longlong)&pTVar7[6]._padding_ + 4) = local_60.Entries.ArrayMax;
    local_60.Entries.ArrayNum = 0;
    local_60.Entries.ArrayMax = 1;
    pTVar10 = pTVar7;
    if (pFVar11 == (FMovieSceneChannelProxy *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FMovieSceneChannelProxy,1> *)(*pcVar4)();
        return pTVar8;
      }
      goto LAB_146753f87;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pTVar10 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar11->_padding_;
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
      pFVar11->_padding_ = (longlong)pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_146753f87:
  __return_storage_ptr__->Object = pFVar11;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  FVar9 = (ForElementType<FMovieSceneChannelEntry>)&local_60;
  if (local_60.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = local_60.Entries.AllocatorInstance.SecondaryData;
  }
  DestructItems<FMovieSceneChannelEntry,int>
            ((FMovieSceneChannelEntry *)FVar9,local_60.Entries.ArrayNum);
  if (local_60.Entries.AllocatorInstance.SecondaryData !=
      (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FMemory::Free((void *)local_60.Entries.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// OnRemapChannelKeyTime<FEventPayload> @ 146754ab0

void __cdecl
UE::MovieScene::OnRemapChannelKeyTime<FEventPayload>
          (FMovieSceneChannel *param_1,IRetimingInterface *param_2,FFrameNumber param_3,
          FFrameNumber param_4,FEventPayload *param_5)

{
  return;
}

// PopulatePrerequisites<double,double,double,double,double,double,double,double,double,FString,__int64,bool> @ 146754ac0

void __cdecl
UE::MovieScene::
PopulatePrerequisites<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
          (TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
           *param_1,FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  uint uVar1;
  FComponentTypeID local_res20;
  FComponentTypeID local_res22 [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  uVar1 = 0;
  do {
    local_res20.Value = *(ushort *)param_1;
    if (local_res20.Value != 0xffff) {
      local_28._First = &local_res20;
      local_28._Last = local_res22;
      FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
    }
    uVar1 = uVar1 + 1;
    param_1 = (TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
               *)((longlong)param_1 + 4);
  } while (uVar1 < 0xc);
  return;
}

// PopulateReadWriteDependencies<double,double,double,double,double,double,double,double,double,FString,__int64,bool> @ 146754b40

void __cdecl
UE::MovieScene::
PopulateReadWriteDependencies<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
          (TReadOneOrMoreOfAccessor<double,double,double,double,double,double,double,double,double,FString,__int64,bool>
           *param_1,FComponentMask *param_2,FComponentMask *param_3)

{
  uint uVar1;
  FOptionalReadAccess *pFVar2;
  
  uVar1 = 0;
  pFVar2 = param_1->ComponentTypes;
  do {
    if (*(short *)pFVar2 != -1) {
      FComponentMask::Set(param_2,(FComponentTypeID)
                                  *(ushort *)(param_1->ComponentTypes + (int)uVar1));
    }
    uVar1 = uVar1 + 1;
    pFVar2 = pFVar2 + 1;
  } while (uVar1 < 0xc);
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPostProcessSettings,float>_>_> @ 146756740

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FPostProcessSettings,float>_>_>
          (uint param_1,uint param_2,ForElementType<TTuple<FPostProcessSettings,float>_> *param_3,
          int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TTuple<FPostProcessSettings,float>_>::ResizeAllocation(param_3,uVar2,iVar8,uVar7)
    ;
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_> @ 146756810

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
          (ushort param_1,ForElementType<USceneComponent_*> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
    ResizeAllocation(param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>_> @ 1467568d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>_>
          (ushort param_1,ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FDoubleChannelTypeAssociation>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FFloatChannelTypeAssociation>_> @ 146756990

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FFloatChannelTypeAssociation>_>
          (ushort param_1,ForElementType<UE::MovieScene::FFloatChannelTypeAssociation> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar6 = 4;
    uVar7 = (ulonglong)(byte)param_1;
    if (4 < uVar1) {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 5) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      uVar3 = (uint)(uVar4 / uVar7);
      if ((int)uVar3 < (int)uVar1) {
        uVar3 = 0x7fffffff;
      }
      uVar6 = (ulonglong)uVar3;
    }
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FFloatChannelTypeAssociation>::ResizeAllocation
              (param_2,uVar2,(int)uVar6,uVar7);
    *param_3 = (int)uVar6;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_> @ 146756a50

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
          (uint param_1,uint param_2,ForElementType<USceneComponent_*> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// CollectGarbageForOutput @ 146781430

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::MovieScene::CollectGarbageForOutput(FAnimatedCustomPrimitiveDataInfo *param_1)

{
  UObject *pUVar1;
  FBuiltInComponentTypes *pFVar2;
  UMovieSceneBlenderSystem *this;
  FMovieSceneBlendChannelID local_res8;
  
  if ((param_1->OutputEntityID).Value != 0xffff) {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if (pUVar1 != (UObject *)0x0) {
      pFVar2 = FBuiltInComponentTypes::Get();
      FEntityManager::AddComponent
                ((FEntityManager *)(pUVar1 + 1),(FMovieSceneEntityID)(param_1->OutputEntityID).Value
                 ,(FComponentTypeID)(pFVar2->Tags).NeedsUnlink.Value);
    }
    (param_1->OutputEntityID).Value = 0xffff;
  }
  if ((param_1->BlendChannelID).ChannelID != 0xffff) {
    this = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get(&(param_1->WeakBlenderSystem).WeakPtr);
    if (this != (UMovieSceneBlenderSystem *)0x0) {
      UMovieSceneBlenderSystem::ReleaseBlendChannel(this,param_1->BlendChannelID);
    }
    local_res8.SystemID.Value = 0xff;
    local_res8.ChannelID = 0xffff;
    param_1->BlendChannelID = local_res8;
  }
  return;
}

// ComputeCameraShakeDurationOverride @ 146783a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TOptional<float> __cdecl
UE::MovieScene::ComputeCameraShakeDurationOverride
          (FMovieSceneContext *param_1,FMovieSceneCameraShakeComponentData *param_2)

{
  UCameraShakeBase *this;
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  TOptional<float> TVar8;
  FCameraShakeDuration FVar9;
  int iVar10;
  int iVar11;
  undefined8 *in_R8;
  double dVar12;
  double dVar13;
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 local_res8;
  int iStackX_14;
  undefined1 local_48 [48];
  
  dVar13 = (param_2->SectionData).UserDefinedPlaySpace.Yaw;
  pUVar7 = (UClass *)*in_R8;
  if ((GC::GIsIncrementalReachabilityPending) && (pUVar7 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  local_res8._0_4_ = 0.0;
  local_res8 = 0;
  if (GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar7 == (UClass *)0x0) goto LAB_146783b6b;
  }
  else {
    if (pUVar7 == (UClass *)0x0) goto LAB_146783b6b;
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  if (pUVar6 == (UClass *)0x0) goto LAB_146783b6b;
  iVar3 = (int)pUVar6->_padding_;
  if (((int)pUVar7->_padding_ < iVar3) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar3 * 8) != &pUVar6->_padding_))
  {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_146783b6b;
  pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
LAB_146783ae5:
    pUVar7 = (UClass *)0x0;
  }
  else {
    iVar3 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar3 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_146783ae5;
  }
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  this = (UCameraShakeBase *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  lVar1 = *(longlong *)&this->field_0x10;
  iVar3 = (int)pUVar7->_padding_;
  if (((*(int *)(lVar1 + 0x38) < iVar3) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar3 * 8) !=
       &pUVar7->_padding_)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar8 = (TOptional<float>)(*pcVar2)();
    return TVar8;
  }
  FVar9 = UCameraShakeBase::GetCameraShakeDuration(this);
  local_res8 = *(undefined8 *)FVar9;
LAB_146783b6b:
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  iVar5 = *(int *)((longlong)in_R8 + 0x2c) - *(int *)(in_R8 + 5);
  iVar3 = SUB84(dVar13,0);
  iStackX_14 = (int)((ulonglong)dVar13 >> 0x20);
  if ((char)((ulonglong)local_res8 >> 0x20) == '\0') {
    dVar13 = (param_2->SectionData).UserDefinedPlaySpace.Yaw;
    dVar12 = ((double)SUB84(dVar13,0) * (double)(float)local_res8) /
             (double)(int)((ulonglong)dVar13 >> 0x20);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = dVar12;
    auVar14 = roundpd(in_XMM3,auVar14,1);
    dVar13 = auVar14._0_8_;
    dVar12 = dVar12 - dVar13;
    if (__real_41dfffffffc00000 <= dVar13) {
      dVar13 = __real_41dfffffffc00000;
    }
    if (dVar13 <= __real_c1e0000000000000) {
      dVar13 = __real_c1e0000000000000;
    }
    iVar11 = (int)dVar12;
    iVar10 = (int)dVar13 + iVar11;
    fVar15 = (float)dVar12 - (float)iVar11;
    if ((0.0 < fVar15) && (::FFrameTime::MaxSubframe <= fVar15)) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (::FFrameTime::MaxSubframe <= fVar15) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    if (((iVar5 < iVar10) || ((iVar10 == iVar5 && (0.0 < fVar15)))) &&
       ((FMovieSceneContext *)local_48 != param_1)) {
      *(float *)&param_1->_padding_ = (float)((longlong)iStackX_14 * (longlong)iVar5) / (float)iVar3
      ;
      *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
    }
  }
  else if ((FMovieSceneContext *)(local_48 + 4) != param_1) {
    *(float *)&param_1->_padding_ = (float)((longlong)iVar5 * (longlong)iStackX_14) / (float)iVar3;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
  }
  return (TOptional<float>)param_1;
}

// DecodeEntityID @ 146787590

void __cdecl
UE::MovieScene::DecodeEntityID(uint param_1,short *param_2,uchar *param_3,uchar *param_4)

{
  *param_2 = (short)param_1;
  *param_3 = (uchar)(param_1 >> 0x18);
  *param_4 = (uchar)(param_1 >> 0x10);
  return;
}

// DecodeEntityID @ 1467875b0

void __cdecl UE::MovieScene::DecodeEntityID(uint param_1,int *param_2,uchar *param_3)

{
  *param_2 = param_1 & 0xffffff;
  *param_3 = (uchar)(param_1 >> 0x18);
  return;
}

// DecodeMaterialParameterEntityID @ 1467875d0

void __cdecl
UE::MovieScene::DecodeMaterialParameterEntityID(uint param_1,int *param_2,uchar *param_3)

{
  *param_2 = param_1 & 0xffffff;
  *param_3 = (uchar)(param_1 >> 0x18);
  return;
}

// EncodeEntityID @ 14678a130

uint __cdecl UE::MovieScene::EncodeEntityID(short param_1,uchar param_2,uchar param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex >= 0 && InIndex < int32(0x0000FFFF)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneCustomPrimitiveDataSection.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)CONCAT11(param_2,param_3) << 0x10 | (int)param_1;
}

// EncodeEntityID @ 14678a1a0

uint __cdecl UE::MovieScene::EncodeEntityID(int param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0xfffffe < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneParameterSection.cpp"
                       ,0x14,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)param_2 << 0x18 | param_1;
}

// EncodeMaterialParameterEntityID @ 14678a200

uint __cdecl UE::MovieScene::EncodeMaterialParameterEntityID(int param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (0xfffffe < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex >= 0 && InIndex < int32(0x00FFFFFF)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Sections\\MovieSceneComponentMaterialParameterSection.cpp"
                       ,0x17,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uint)param_2 << 0x18 | param_1;
}

// EntityIDToVisibility @ 14678b910

bool __cdecl UE::MovieScene::EntityIDToVisibility(int param_1)

{
  return 0 < param_1;
}

// GetFlattenedHierarchy @ 146794b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::GetFlattenedHierarchy
          (USceneComponent *param_1,
          TArray<USceneComponent_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  USceneComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<USceneComponent_*> FVar6;
  ForElementType<USceneComponent_*> FVar7;
  void *_Dst;
  uint uVar8;
  longlong lVar9;
  undefined1 auStackY_d8 [32];
  USceneComponent *local_88;
  undefined1 local_80 [8];
  USceneComponent *local_78;
  ForElementType<USceneComponent_*> local_70;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_70.SecondaryData = (ForElementType<USceneComponent_*>)0x0;
  local_44 = 4;
  local_48 = 0;
  iVar4 = 0;
  local_80 = (undefined1  [8])param_1;
  if ((&local_70 <= (ForElementType<USceneComponent_*> *)local_80) &&
     (local_80 < &local_70.SecondaryData)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = local_48;
    if (local_48 == local_44) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                        (0x808,&local_70,&local_44);
    }
  }
  local_48 = iVar4 + 1;
  FVar7 = (ForElementType<USceneComponent_*>)&local_70;
  if (local_70.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
    FVar7 = local_70.SecondaryData;
  }
  *(undefined1 (*) [8])((longlong)FVar7 + (longlong)iVar4 * 8) = local_80;
  do {
    do {
      if (local_48 < 1) {
        if (local_70.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
          FMemory::Free((void *)local_70.SecondaryData);
        }
        return;
      }
      FVar7 = (ForElementType<USceneComponent_*>)&local_70;
      if (local_70.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar7 = local_70.SecondaryData;
      }
      lVar9 = (longlong)(local_48 + -1) * 8;
      pUVar1 = *(USceneComponent **)(lVar9 + (longlong)FVar7);
      FVar7 = (ForElementType<USceneComponent_*>)&local_70;
      if (local_70.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
        FVar7 = local_70.SecondaryData;
      }
      _Dst = (void *)(lVar9 + (longlong)FVar7);
      iVar4 = (local_48 - (local_48 + -1)) + -1;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar4 << 3);
      }
      local_48 = local_48 + -1;
      Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                (8,8,&local_70,local_48,&local_44);
      FVar7 = (param_2->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<USceneComponent_*>)param_2;
      if (FVar7 != (ForElementType<USceneComponent_*>)0x0) {
        FVar6 = FVar7;
      }
      local_88 = pUVar1;
      if ((ulonglong)FVar6 <= &local_88) {
        FVar6 = (ForElementType<USceneComponent_*>)param_2;
        if (FVar7 != (ForElementType<USceneComponent_*>)0x0) {
          FVar6 = FVar7;
        }
        if ((&local_88 < (USceneComponent **)((longlong)FVar6 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar4 = param_2->ArrayNum;
      if (iVar4 == param_2->ArrayMax) {
        iVar4 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      pUVar1 = local_88;
      param_2->ArrayNum = iVar4 + 1;
      FVar7 = (param_2->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<USceneComponent_*>)param_2;
      if (FVar7 != (ForElementType<USceneComponent_*>)0x0) {
        FVar6 = FVar7;
      }
      *(USceneComponent **)((longlong)FVar6 + (longlong)iVar4 * 8) = local_88;
      uVar8 = (local_88->AttachChildren).ArrayNum - 1;
    } while ((int)uVar8 < 0);
    lVar9 = (longlong)(int)uVar8 * 8;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (pUVar1->AttachChildren).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78 = *(USceneComponent **)((pUVar1->AttachChildren).AllocatorInstance.Data + lVar9);
      if (local_78 != (USceneComponent *)0x0) {
        FVar7 = (ForElementType<USceneComponent_*>)&local_70;
        if (local_70.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
          FVar7 = local_70.SecondaryData;
        }
        if ((ulonglong)FVar7 <= &local_78) {
          FVar7 = (ForElementType<USceneComponent_*>)&local_70;
          if (local_70.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
            FVar7 = local_70.SecondaryData;
          }
          if ((&local_78 < (USceneComponent **)((longlong)FVar7 + (longlong)local_44 * 8)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar4 = local_48;
        if (local_48 == local_44) {
          iVar4 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<USceneComponent_*>_>
                            (0x808,&local_70,&local_44);
        }
        local_48 = iVar4 + 1;
        FVar7 = (ForElementType<USceneComponent_*>)&local_70;
        if (local_70.SecondaryData != (ForElementType<USceneComponent_*>)0x0) {
          FVar7 = local_70.SecondaryData;
        }
        *(USceneComponent **)((longlong)FVar7 + (longlong)iVar4 * 8) = local_78;
      }
      lVar9 = lVar9 + -8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  } while( true );
}

// GetTypeHash @ 14679bc60

uint __cdecl UE::MovieScene::GetTypeHash(TOverlappingEntityInput<FObjectKey,FName> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)&(param_1->Key).field_0x4;
  uVar1 = *(undefined8 *)&(param_1->Key).field_0x8;
  uVar5 = *(int *)&param_1->Key - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar5) - uVar3 ^ uVar5 << 8;
  uVar4 = (uVar3 - uVar2) - uVar5 ^ uVar2 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar3 = (uVar2 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar2 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 5;
  uVar4 = (uVar5 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 << 10;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 0xf;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return uVar3 + 0x9e3779b9 + (int)((ulonglong)uVar1 >> 0x20) + uVar2 * 0x40 + (uVar2 >> 2) ^ uVar2;
}

// GetTypeHash @ 14679bd20

uint __cdecl UE::MovieScene::GetTypeHash(FComponentMaterialKey *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FVar1 = (param_1->MaterialInfo).MaterialSlotName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = (param_1->Object).ObjectSerialNumber;
  uVar6 = (uint)(param_1->MaterialInfo).MaterialType ^ (param_1->MaterialInfo).MaterialSlotIndex ^
          uVar2 + FVar1.Number;
  uVar4 = (param_1->Object).ObjectIndex - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  uVar2 = ((uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf) - uVar6 ^ uVar6 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar2 ^ uVar2 << 8;
  uVar4 = (uVar6 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 14679be70

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FVar1 = param_1->IndexName;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar4 = (param_1->Object).ObjectSerialNumber;
  uVar2 = uVar2 + FVar1.Number;
  uVar5 = (param_1->Object).ObjectIndex - uVar4 ^ uVar4 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar4 ^ uVar5 << 8;
  uVar6 = (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar6) - uVar3 ^ uVar6 >> 0xc;
  uVar4 = (uVar3 - uVar5) - uVar6 ^ uVar5 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 >> 5;
  uVar3 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 << 10;
  uVar3 = ((uVar6 - uVar4) - uVar3 ^ uVar4 >> 0xf) - uVar2 ^ uVar2 >> 0xd;
  uVar4 = (-0x61c88647 - uVar2) - uVar3 ^ uVar3 << 8;
  uVar5 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar2 = (uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar4 = (uVar4 - uVar2) - uVar5 ^ uVar2 << 0x10;
  uVar3 = (uVar5 - uVar4) - uVar2 ^ uVar4 >> 5;
  uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar3 >> 3;
  uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf;
}

// GetTypeHash @ 14679bfb0

uint __cdecl UE::MovieScene::GetTypeHash(FKeyType *param_1)

{
  ulong64 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = CityHash64((char *)&param_1->ConstraintID,0x10);
  uVar3 = (param_1->Object).ObjectSerialNumber;
  uVar4 = (param_1->Object).ObjectIndex - uVar3 ^ uVar3 >> 0xd;
  uVar2 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
  uVar5 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar2 ^ uVar5 >> 0xc;
  uVar3 = (uVar2 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar3) - uVar4 ^ uVar3 >> 5;
  uVar2 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar5 ^ uVar2 << 10;
  iVar6 = (int)uVar1;
  uVar2 = ((uVar5 - uVar3) - uVar2 ^ uVar3 >> 0xf) - iVar6 ^ (uint)(uVar1 >> 0xd) & 0x7ffff;
  uVar3 = (-0x61c88647 - uVar2) - iVar6 ^ uVar2 << 8;
  uVar4 = (iVar6 - uVar3) - uVar2 ^ uVar3 >> 0xd;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 5;
  uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 << 10;
  return (uVar4 - uVar3) - uVar2 ^ uVar3 >> 0xf;
}

// VisibilityToEntityID @ 1467c6c50

int __cdecl UE::MovieScene::VisibilityToEntityID(bool param_1)

{
  return (int)param_1;
}

// Construct<FMovieScenePreAnimatedMaterialParameters> @ 1467cdd60

void __cdecl
UE::CoreUObject::Private::Construct<FMovieScenePreAnimatedMaterialParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  return;
}

// ConstructForTests<FMovieScenePreAnimatedMaterialParameters> @ 1467cdd90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieScenePreAnimatedMaterialParameters>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  (((FUtf8String *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x20),0);
  return;
}

// Destruct<FMovieScenePreAnimatedMaterialParameters> @ 1467cddc0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieScenePreAnimatedMaterialParameters>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x20);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// Copy<FMovieScenePreAnimatedMaterialParameters> @ 1467cdde0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieScenePreAnimatedMaterialParameters>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      TPersistentObjectPtr<FSoftObjectPath>::operator=
                ((TPersistentObjectPtr<FSoftObjectPath> *)(puVar2 + 1),
                 (TPersistentObjectPtr<FSoftObjectPath> *)(puVar1 + 1));
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneEventTriggerData> @ 1467cf430

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneEventTriggerData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// ConstructForTests<FMovieSceneEventTriggerData> @ 1467cf470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneEventTriggerData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  return;
}

// Destruct<FMovieSceneEventTriggerData> @ 1467cf4a0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneEventTriggerData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// Copy<FMovieSceneEventTriggerData> @ 1467cf500

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneEventTriggerData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  FFieldClass *pFVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar4 = *puVar1;
      pFVar3 = FProperty::StaticClass();
      FFieldPath::GetTyped((FFieldPath *)(puVar1 + 1),pFVar3,(UStruct *)0x0);
      FFieldPath::operator=((FFieldPath *)(puVar4 + 1),(FFieldPath *)(puVar1 + 1));
      uVar2 = puVar1[6];
      puVar4[5] = puVar1[5];
      puVar4[6] = uVar2;
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(puVar1 + 7);
      *(undefined8 *)((longlong)puVar4 + 0x3c) = *(undefined8 *)((longlong)puVar1 + 0x3c);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 9;
    } while (param_3 != 0);
  }
  return true;
}

// AccessorToString<double,double,double,double> @ 1467d0c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::AccessorToString<double,double,double,double>
          (TReadOneOrMoreOfAccessor<double,double,double,double> *param_1,FEntityManager *param_2,
          FString *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  pFVar6 = local_58.Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = iVar2 + 1;
  OneOfAccessorToString(param_1->ComponentTypes,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  pFVar6 = local_58.Data + (longlong)(int)local_50 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = (int)local_50 + 1;
  OneOfAccessorToString(param_1->ComponentTypes + 1,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  pFVar6 = local_58.Data + (longlong)(int)local_50 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = (int)local_50 + 1;
  OneOfAccessorToString(param_1->ComponentTypes + 2,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar7 = (longlong)(int)local_50;
  local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
  pFVar6 = local_58.Data + lVar7 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  OneOfAccessorToString(param_1->ComponentTypes + 3,param_2,(FString *)pFVar6);
  iVar2 = (int)local_50;
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar6 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar4.Data = local_58.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar5 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar4.Data,iVar5);
    uVar3 = local_50 & 0xffffffff;
    FVar4.Data = FVar4.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Or More Of: [ %s ]");
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// AccessorToString<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName> @ 1467d0eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::AccessorToString<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
           *param_1,FEntityManager *param_2,FString *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  pFVar6 = local_58.Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = iVar2 + 1;
  OneOfAccessorToString(param_1->ComponentTypes,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  pFVar6 = local_58.Data + (longlong)(int)local_50 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = (int)local_50 + 1;
  OneOfAccessorToString(param_1->ComponentTypes + 1,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  pFVar6 = local_58.Data + (longlong)(int)local_50 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = (int)local_50 + 1;
  OneOfAccessorToString(param_1->ComponentTypes + 2,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar7 = (longlong)(int)local_50;
  local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
  pFVar6 = local_58.Data + lVar7 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  OneOfAccessorToString(param_1->ComponentTypes + 3,param_2,(FString *)pFVar6);
  iVar2 = (int)local_50;
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar6 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar4.Data = local_58.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar5 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar4.Data,iVar5);
    uVar3 = local_50 & 0xffffffff;
    FVar4.Data = FVar4.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Or More Of: [ %s ]");
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// AccessorToString<FMaterialParameterInfo,FName> @ 1467d10e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::AccessorToString<FMaterialParameterInfo,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName> *param_1,FEntityManager *param_2,
          FString *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  pFVar6 = local_58.Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = iVar2 + 1;
  OneOfAccessorToString(param_1->ComponentTypes,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar7 = (longlong)(int)local_50;
  local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
  pFVar6 = local_58.Data + lVar7 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  OneOfAccessorToString(param_1->ComponentTypes + 1,param_2,(FString *)pFVar6);
  iVar2 = (int)local_50;
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar6 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar4.Data = local_58.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar5 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar4.Data,iVar5);
    uVar3 = local_50 & 0xffffffff;
    FVar4.Data = FVar4.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Or More Of: [ %s ]");
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// AccessorToString<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel> @ 1467d1290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::
AccessorToString<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
          (TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
           *param_1,FEntityManager *param_2,FString *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  pFVar6 = local_58.Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = iVar2 + 1;
  OneOfAccessorToString(param_1->ComponentTypes,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  pFVar6 = local_58.Data + (longlong)(int)local_50 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = (int)local_50 + 1;
  OneOfAccessorToString(param_1->ComponentTypes + 1,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar7 = (longlong)(int)local_50;
  local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
  pFVar6 = local_58.Data + lVar7 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  OneOfAccessorToString(param_1->ComponentTypes + 2,param_2,(FString *)pFVar6);
  iVar2 = (int)local_50;
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar6 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar4.Data = local_58.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar5 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar4.Data,iVar5);
    uVar3 = local_50 & 0xffffffff;
    FVar4.Data = FVar4.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Or More Of: [ %s ]");
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// AddAccessorToFilter<double,double,double,double> @ 1467d1ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddAccessorToFilter<double,double,double,double>
          (TReadOneOrMoreOfAccessor<double,double,double,double> *param_1,
          FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TBitArray<TFixedAllocator<12>_> *this;
  int iVar7;
  undefined1 auStack_88 [32];
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)param_1->ComponentTypes;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x180;
  if (uVar3 != 0xffff) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,uVar3 + 1);
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 1);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 2);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 3);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  iVar7 = FComponentMask::NumComponents((FComponentMask *)&local_68);
  if (iVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mask.NumComponents() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1cb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0 < local_68.NumBits) {
    iVar7 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar7 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar7 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_68);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  return;
}

// AddAccessorToFilter<FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName> @ 1467d2190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::
AddAccessorToFilter<FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName>
          (TReadOneOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FMaterialParameterInfo,FName,FName,FName>
           *param_1,FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TBitArray<TFixedAllocator<12>_> *this;
  int iVar7;
  undefined1 auStack_88 [32];
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)param_1->ComponentTypes;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x180;
  if (uVar3 != 0xffff) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,uVar3 + 1);
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 1);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 2);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 3);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 4);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 5);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  iVar7 = FComponentMask::NumComponents((FComponentMask *)&local_68);
  if (iVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mask.NumComponents() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1bb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0 < local_68.NumBits) {
    iVar7 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar7 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar7 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_68);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x01';
  }
  return;
}

// AddAccessorToFilter<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName> @ 1467d2510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddAccessorToFilter<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
           *param_1,FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TBitArray<TFixedAllocator<12>_> *this;
  int iVar7;
  undefined1 auStack_88 [32];
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)param_1->ComponentTypes;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x180;
  if (uVar3 != 0xffff) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,uVar3 + 1);
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 1);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 2);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 3);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  iVar7 = FComponentMask::NumComponents((FComponentMask *)&local_68);
  if (iVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mask.NumComponents() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1cb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0 < local_68.NumBits) {
    iVar7 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar7 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar7 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_68);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  return;
}

// AddAccessorToFilter<FMaterialParameterInfo,FName> @ 1467d27c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddAccessorToFilter<FMaterialParameterInfo,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName> *param_1,
          FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TBitArray<TFixedAllocator<12>_> *this;
  int iVar7;
  undefined1 auStack_88 [32];
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)param_1->ComponentTypes;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x180;
  if (uVar3 != 0xffff) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,uVar3 + 1);
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 1);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  iVar7 = FComponentMask::NumComponents((FComponentMask *)&local_68);
  if (iVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mask.NumComponents() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1cb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0 < local_68.NumBits) {
    iVar7 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar7 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar7 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_68);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  return;
}

// AddAccessorToFilter<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel> @ 1467d2990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::
AddAccessorToFilter<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
          (TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
           *param_1,FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  TBitArray<TFixedAllocator<12>_> *this;
  int iVar7;
  undefined1 auStack_88 [32];
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)param_1->ComponentTypes;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x180;
  if (uVar3 != 0xffff) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,uVar3 + 1);
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 1);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 2);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if (local_68.NumBits <= (int)(uint)uVar3) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  iVar7 = FComponentMask::NumComponents((FComponentMask *)&local_68);
  if (iVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mask.NumComponents() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                       ,0x1cb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (0 < local_68.NumBits) {
    iVar7 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar7 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar7 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_68);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  return;
}

// AddReferencedObjectForComponent<UDataLayerInstance> @ 1467d38e0

void __cdecl
UE::MovieScene::AddReferencedObjectForComponent<UDataLayerInstance>
          (FReferenceCollector *param_1,TObjectKey<UDataLayerInstance> *param_2)

{
  return;
}

// DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_*_&> @ 1467d6a30

TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
* __cdecl UE::Core::Private::
          DereferenceIfNecessary<UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>,UE::MovieScene::TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>_*_&>
                    (TOverlappingEntityTracker_WithGarbage<UE::MovieScene::FAnimatedMaterialParameterInfo,UE::MovieScene::FObjectComponent,FMaterialParameterInfo>
                     **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMovieScenePostEvalEventSystem,UMovieScenePostEvalEventSystem_*_&> @ 1467d6a50

UMovieScenePostEvalEventSystem * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMovieScenePostEvalEventSystem,UMovieScenePostEvalEventSystem_*_&>
          (UMovieScenePostEvalEventSystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMovieScenePropertyInstantiatorSystem,UMovieScenePropertyInstantiatorSystem_*_&> @ 1467d6a70

UMovieScenePropertyInstantiatorSystem * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMovieScenePropertyInstantiatorSystem,UMovieScenePropertyInstantiatorSystem_*_&>
          (UMovieScenePropertyInstantiatorSystem **param_1)

{
  return *param_1;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<unsigned_char>_>_> @ 1467ec110

uchar __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<unsigned_char>_>_>
          (TComponentLock<UE::MovieScene::TRead<unsigned_char>_> *param_1,int param_2)

{
  return *(uchar *)((longlong)param_2 + *(longlong *)&param_1->field_0x10);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FEntityGroupID>_>_> @ 1467ec130

FEntityGroupID * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FEntityGroupID>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FEntityGroupID>_> *param_1,
          int param_2)

{
  return (FEntityGroupID *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 0xc);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FIntermediate3DTransform>_>_> @ 1467ec150

FIntermediate3DTransform * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FIntermediate3DTransform>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FIntermediate3DTransform>_> *param_1
          ,int param_2)

{
  return (FIntermediate3DTransform *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 0x48);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_>_> @ 1467ec170

FMovieSceneBlendChannelID * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_>_>
          (TComponentLock<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_> *param_1,int param_2)

{
  return (FMovieSceneBlendChannelID *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 4);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneSequenceID>_>_> @ 1467ec190

FMovieSceneSequenceID * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneSequenceID>_>_>
          (TComponentLock<UE::MovieScene::TRead<FMovieSceneSequenceID>_> *param_1,int param_2)

{
  return (FMovieSceneSequenceID *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 4);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>_> @ 1467ec1b0

FRootInstanceHandle * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_> *param_1,
          int param_2)

{
  return (FRootInstanceHandle *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 4);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<bool>_>_> @ 1467ec1d0

bool __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<bool>_>_>
          (TComponentLock<UE::MovieScene::TRead<bool>_> *param_1,int param_2)

{
  return (bool)*(undefined1 *)((longlong)param_2 + *(longlong *)&param_1->field_0x10);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_> @ 1467ec1f0

double * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<double>_>_>
          (TComponentLock<UE::MovieScene::TReadOptional<double>_> *param_1,int param_2)

{
  if (*(longlong *)&param_1->field_0x10 != 0) {
    return (double *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
  }
  return (double *)0x0;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_>_> @ 1467ec210

FIntermediate3DTransform * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_>_>
          (TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_>
           *param_1,int param_2)

{
  if (*(longlong *)&param_1->field_0x10 != 0) {
    return (FIntermediate3DTransform *)
           (*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 0x48);
  }
  return (FIntermediate3DTransform *)0x0;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_>_> @ 1467ec230

FIntermediate3DTransform * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_>_>
          (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FIntermediate3DTransform>_>
           *param_1,int param_2)

{
  return (FIntermediate3DTransform *)(*(longlong *)&param_1->field_0x18 + (longlong)param_2 * 0x48);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FPropertyNotifyComponentData>_>_> @ 1467ec250

FPropertyNotifyComponentData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FPropertyNotifyComponentData>_>_>
          (TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FPropertyNotifyComponentData>_>
           *param_1,int param_2)

{
  return (FPropertyNotifyComponentData *)
         (*(longlong *)&param_1->field_0x18 + (longlong)param_2 * 0x14);
}

// GetComponentAtIndex<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_> @ 1467ec270

FMovieSceneBlendChannelID * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<FMovieSceneBlendChannelID>_>
          (TRead<FMovieSceneBlendChannelID> *param_1,int param_2)

{
  return (FMovieSceneBlendChannelID *)((longlong)*param_1 + (longlong)param_2 * 4);
}

// GetComponentAtIndex<UE::MovieScene::TRead<bool>_> @ 1467ec290

bool __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<bool>_>(TRead<bool> *param_1,int param_2)

{
  return (bool)*(undefined1 *)((longlong)param_2 + (longlong)*param_1);
}

// GetComponentAtIndex<UE::MovieScene::TReadOptional<double>_> @ 1467ec2b0

double * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TReadOptional<double>_>
          (TReadOptional<double> *param_1,int param_2)

{
  if (*param_1 != (TReadOptional<double>)0x0) {
    return (double *)((longlong)*param_1 + (longlong)param_2 * 8);
  }
  return (double *)0x0;
}

// GetComponentAtIndex<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_> @ 1467ec2d0

FIntermediate3DTransform * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TReadOptional<UE::MovieScene::FIntermediate3DTransform>_>
          (TReadOptional<UE::MovieScene::FIntermediate3DTransform> *param_1,int param_2)

{
  if (*param_1 != (TReadOptional<UE::MovieScene::FIntermediate3DTransform>)0x0) {
    return (FIntermediate3DTransform *)((longlong)*param_1 + (longlong)param_2 * 0x48);
  }
  return (FIntermediate3DTransform *)0x0;
}

// PopulatePrerequisites<double,double,double,double> @ 1467face0

void __cdecl
UE::MovieScene::PopulatePrerequisites<double,double,double,double>
          (TReadOneOrMoreOfAccessor<double,double,double,double> *param_1,
          FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  FComponentTypeID local_res20;
  FComponentTypeID local_res22 [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_res20.Value = *(ushort *)param_1->ComponentTypes;
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 1);
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 2);
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 3);
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  return;
}

// PopulatePrerequisites<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName> @ 1467fadd0

void __cdecl
UE::MovieScene::PopulatePrerequisites<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
           *param_1,FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  FComponentTypeID local_res20;
  FComponentTypeID local_res22 [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_28;
  
  local_res20.Value = *(ushort *)param_1->ComponentTypes;
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 1);
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 2);
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 3);
  if (local_res20.Value != 0xffff) {
    local_28._First = &local_res20;
    local_28._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_28);
  }
  return;
}

// PopulatePrerequisites<FMaterialParameterInfo,FName> @ 1467faec0

void __cdecl
UE::MovieScene::PopulatePrerequisites<FMaterialParameterInfo,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName> *param_1,
          FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  FComponentTypeID local_res20;
  FComponentTypeID local_res22 [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res20.Value = *(ushort *)param_1->ComponentTypes;
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 1);
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  return;
}

// PopulatePrerequisites<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel> @ 1467faf60

void __cdecl
UE::MovieScene::
PopulatePrerequisites<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
          (TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
           *param_1,FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  FComponentTypeID local_res20;
  FComponentTypeID local_res22 [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res20.Value = *(ushort *)param_1->ComponentTypes;
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 1);
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 2);
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  return;
}

// PopulateReadWriteDependencies<double,double,double,double> @ 1467fb030

void __cdecl
UE::MovieScene::PopulateReadWriteDependencies<double,double,double,double>
          (TReadOneOrMoreOfAccessor<double,double,double,double> *param_1,FComponentMask *param_2,
          FComponentMask *param_3)

{
  if (*(short *)param_1->ComponentTypes != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)param_1->ComponentTypes);
  }
  if (*(short *)(param_1->ComponentTypes + 1) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 1));
  }
  if (*(short *)(param_1->ComponentTypes + 2) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 2));
  }
  if (*(short *)(param_1->ComponentTypes + 3) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 3));
  }
  return;
}

// PopulateReadWriteDependencies<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName> @ 1467fb0b0

void __cdecl
UE::MovieScene::
PopulateReadWriteDependencies<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FMaterialParameterInfo,FName,FName>
           *param_1,FComponentMask *param_2,FComponentMask *param_3)

{
  if (*(short *)param_1->ComponentTypes != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)param_1->ComponentTypes);
  }
  if (*(short *)(param_1->ComponentTypes + 1) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 1));
  }
  if (*(short *)(param_1->ComponentTypes + 2) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 2));
  }
  if (*(short *)(param_1->ComponentTypes + 3) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 3));
  }
  return;
}

// PopulateReadWriteDependencies<FMaterialParameterInfo,FName> @ 1467fb130

void __cdecl
UE::MovieScene::PopulateReadWriteDependencies<FMaterialParameterInfo,FName>
          (TReadOneOrMoreOfAccessor<FMaterialParameterInfo,FName> *param_1,FComponentMask *param_2,
          FComponentMask *param_3)

{
  if (*(short *)param_1->ComponentTypes != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)param_1->ComponentTypes);
  }
  if (*(short *)(param_1->ComponentTypes + 1) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 1));
  }
  return;
}

// PopulateReadWriteDependencies<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel> @ 1467fb190

void __cdecl
UE::MovieScene::
PopulateReadWriteDependencies<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
          (TReadOneOrMoreOfAccessor<UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel,UE::MovieScene::FSourceDoubleChannel>
           *param_1,FComponentMask *param_2,FComponentMask *param_3)

{
  if (*(short *)param_1->ComponentTypes != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)param_1->ComponentTypes);
  }
  if (*(short *)(param_1->ComponentTypes + 1) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 1));
  }
  if (*(short *)(param_1->ComponentTypes + 2) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 2));
  }
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_> @ 1467fcba0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 5) {
      iVar1 = 4;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FActiveSkeletalAnimation>_> @ 1467fcc40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FActiveSkeletalAnimation>_>
          (ushort param_1,ForElementType<UE::MovieScene::FActiveSkeletalAnimation> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FActiveSkeletalAnimation>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>_> @ 1467fcd10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
          *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_> @ 1467fcde0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneEntityID>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::MovieScene::FMovieSceneEntityID> *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FMovieSceneEntityID>::ResizeAllocation(param_4,iVar2,iVar8,uVar7)
    ;
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 1467fcec0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// operator== @ 146810290

bool __cdecl
UE::MovieScene::operator==(FMaterialParameterKey *param_1,FMaterialParameterKey *param_2)

{
  if (((((param_1->BoundMaterial).ObjectIndex == (param_2->BoundMaterial).ObjectIndex) &&
       ((param_1->BoundMaterial).ObjectSerialNumber == (param_2->BoundMaterial).ObjectSerialNumber))
      && ((param_1->ParameterInfo).Name.ComparisonIndex.Value ==
          (param_2->ParameterInfo).Name.ComparisonIndex.Value)) &&
     ((((param_1->ParameterInfo).Name.Number == (param_2->ParameterInfo).Name.Number &&
       ((param_1->ParameterInfo).Association.Value == (param_2->ParameterInfo).Association.Value))
      && ((param_1->ParameterInfo).Index == (param_2->ParameterInfo).Index)))) {
    return true;
  }
  return false;
}

// AddOverrideResults @ 146819860

void __cdecl UE::MovieScene::AddOverrideResults(FAdditiveAndOverrides *param_1,double *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  fVar5 = __real_3f800000;
  dVar4 = __real_3ff0000000000000;
  iVar3 = (param_1->Data).Pairs.ArrayNum;
  pFVar6 = (param_1->Data).Pairs.AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar3 * 0x20;
  while( true ) {
    if ((param_1->Data).Pairs.ArrayNum != iVar3) {
      `TCheckedPointerIterator<TTuple<int,UE::MovieScene::FAdditveAndOverrideData>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    fVar2 = *(float *)(pFVar6 + 0x18);
    if (pFVar6[8] == (FScriptContainerElement)0x0) {
      if (fVar2 < fVar5) {
        pFVar1 = pFVar6 + 0x10;
        pFVar6 = pFVar6 + 0x20;
        *param_2 = (dVar4 - (double)fVar2) * *param_2 + (double)fVar2 * *(double *)pFVar1;
      }
      else {
        pFVar1 = pFVar6 + 0x10;
        pFVar6 = pFVar6 + 0x20;
        *param_2 = *(double *)pFVar1;
      }
    }
    else {
      pFVar1 = pFVar6 + 0x10;
      pFVar6 = pFVar6 + 0x20;
      *param_2 = (double)fVar2 * *(double *)pFVar1 + *param_2;
    }
  }
  return;
}

// AnimationUIFlickerFixActive @ 14681b920

bool __cdecl UE::MovieScene::AnimationUIFlickerFixActive(void)

{
  bool bVar1;
  
  if (GAnimationUIFlickerFix) {
    return true;
  }
  if ((ShouldUseLegacyControlRigTemplate != (_func___cdecl_bool *)0x0) &&
     (bVar1 = (*ShouldUseLegacyControlRigTemplate)(), !bVar1)) {
    return true;
  }
  return false;
}

// BlendResults @ 14681eb20

void __cdecl
UE::MovieScene::BlendResults(FAccumulationResult *param_1,ushort param_2,double *param_3)

{
  FBlendResult *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  FAdditiveAndOverrides local_58 [5];
  
  if (param_1->Absolutes == (FBlendResult *)0x0) {
    local_58[0].Data.Pairs._8_8_ = local_58[0].Data.Pairs._8_8_ & 0xffffffff00000000;
    fVar4 = 0.0;
    uVar2 = 0;
    uVar3 = 0;
    local_58[0].Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = param_1->Absolutes + param_2;
    uVar2 = *(undefined4 *)&pFVar1->Total;
    uVar3 = *(undefined4 *)((longlong)&pFVar1->Total + 4);
    fVar4 = pFVar1->Weight;
  }
  if (param_1->Additives == (FBlendResult *)0x0) {
    local_58[0].Data.Pairs._8_8_ = local_58[0].Data.Pairs._8_8_ & 0xffffffff00000000;
    uVar7 = 0;
    uVar8 = 0;
    local_58[0].Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = param_1->Additives + param_2;
    uVar7 = *(undefined4 *)&pFVar1->Total;
    uVar8 = *(undefined4 *)((longlong)&pFVar1->Total + 4);
  }
  if (param_1->AdditivesFromBase == (FBlendResult *)0x0) {
    local_58[0].Data.Pairs._8_8_ = local_58[0].Data.Pairs._8_8_ & 0xffffffff00000000;
    uVar5 = 0;
    uVar6 = 0;
    local_58[0].Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = param_1->AdditivesFromBase + param_2;
    uVar5 = *(undefined4 *)&pFVar1->Total;
    uVar6 = *(undefined4 *)((longlong)&pFVar1->Total + 4);
  }
  FAccumulationResult::GetAdditiveAndOverrideResult(param_1,local_58,param_2);
  if (fVar4 != 0.0) {
    *param_3 = (double)CONCAT44(uVar3,uVar2) / (double)fVar4 + (double)CONCAT44(uVar8,uVar7) +
               (double)CONCAT44(uVar6,uVar5);
  }
  if (0 < local_58[0].Data.Pairs.ArrayNum) {
    AddOverrideResults(local_58,param_3);
  }
  if (local_58[0].Data.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.Pairs.AllocatorInstance.Data);
  }
  return;
}

// BlendResultsWithInitial @ 14681ef30

void __cdecl
UE::MovieScene::BlendResultsWithInitial
          (FAccumulationResult *param_1,ushort param_2,double param_3,double *param_4)

{
  FBlendResult *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  FAdditiveAndOverrides local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  float fStack_70;
  int iStack_6c;
  
  if (param_1->Absolutes == (FBlendResult *)0x0) {
    local_88.Data.Pairs.ArrayNum = 0;
    fVar13 = 0.0;
    uVar11 = 0;
    uVar12 = 0;
    local_88.Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = param_1->Absolutes + param_2;
    uVar11 = *(undefined4 *)&pFVar1->Total;
    uVar12 = *(undefined4 *)((longlong)&pFVar1->Total + 4);
    fVar13 = pFVar1->Weight;
  }
  if (param_1->Relatives == (FBlendResult *)0x0) {
    fVar5 = 0.0;
    uVar6 = 0;
    uVar7 = 0;
    local_88.Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.Pairs.ArrayNum = 0;
  }
  else {
    pFVar1 = param_1->Relatives + param_2;
    uVar6 = *(undefined4 *)&pFVar1->Total;
    uVar7 = *(undefined4 *)((longlong)&pFVar1->Total + 4);
    fVar5 = pFVar1->Weight;
    local_88.Data.Pairs.ArrayMax = *(int *)&pFVar1->field_0xc;
  }
  if (param_1->Additives == (FBlendResult *)0x0) {
    local_88.Data.Pairs.ArrayNum = 0;
    fVar10 = 0.0;
    uVar8 = 0;
    uVar9 = 0;
    local_88.Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = param_1->Additives + param_2;
    uVar8 = *(undefined4 *)&pFVar1->Total;
    uVar9 = *(undefined4 *)((longlong)&pFVar1->Total + 4);
    fVar10 = pFVar1->Weight;
  }
  if (param_1->AdditivesFromBase == (FBlendResult *)0x0) {
    local_88.Data.Pairs.ArrayNum = 0;
    fVar16 = 0.0;
    uVar14 = 0;
    uVar15 = 0;
    local_88.Data.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar1 = param_1->AdditivesFromBase + param_2;
    uVar14 = *(undefined4 *)&pFVar1->Total;
    uVar15 = *(undefined4 *)((longlong)&pFVar1->Total + 4);
    fVar16 = pFVar1->Weight;
  }
  local_78 = uVar6;
  uStack_74 = uVar7;
  fStack_70 = fVar5;
  iStack_6c = local_88.Data.Pairs.ArrayMax;
  FAccumulationResult::GetAdditiveAndOverrideResult(param_1,&local_88,param_2);
  if (fVar5 == 0.0) {
    dVar3 = (double)CONCAT44(uStack_74,local_78);
  }
  else {
    dVar3 = (double)fVar5 * param_3 + (double)CONCAT44(uVar7,uVar6);
  }
  dVar4 = (double)CONCAT44(uVar9,uVar8) + (double)CONCAT44(uVar15,uVar14);
  fVar5 = fVar13 + fStack_70;
  if (fVar5 == 0.0) {
    if (fVar10 + fVar16 != 0.0) {
      param_3 = dVar4 + param_3;
    }
  }
  else {
    if ((fVar13 <= 0.0) || (__real_3f800000 <= fVar13)) {
      dVar2 = (double)CONCAT44(uVar12,uVar11);
    }
    else {
      fVar5 = (__real_3f800000 - fVar13) + fVar5;
      dVar2 = (double)(__real_3f800000 - fVar13) * param_3 + (double)CONCAT44(uVar12,uVar11);
    }
    param_3 = (dVar2 + dVar3) / (double)fVar5 + dVar4;
  }
  *param_4 = param_3;
  if (0 < local_88.Data.Pairs.ArrayNum) {
    AddOverrideResults(&local_88,param_4);
  }
  if (local_88.Data.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.Pairs.AllocatorInstance.Data);
  }
  return;
}

// CollectGarbageForOutput @ 146821950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UE::MovieScene::CollectGarbageForOutput(FAnimatedMaterialParameterInfo *param_1)

{
  UObject *pUVar1;
  FBuiltInComponentTypes *pFVar2;
  UMovieSceneBlenderSystem *this;
  FMovieSceneBlendChannelID local_res8;
  
  if ((param_1->OutputEntityID).Value != 0xffff) {
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)param_1);
    if (pUVar1 != (UObject *)0x0) {
      pFVar2 = FBuiltInComponentTypes::Get();
      FEntityManager::AddComponent
                ((FEntityManager *)(pUVar1 + 1),(FMovieSceneEntityID)(param_1->OutputEntityID).Value
                 ,(FComponentTypeID)(pFVar2->Tags).NeedsUnlink.Value);
    }
    (param_1->OutputEntityID).Value = 0xffff;
  }
  if ((param_1->BlendChannelID).ChannelID != 0xffff) {
    this = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get(&(param_1->WeakBlenderSystem).WeakPtr);
    if (this != (UMovieSceneBlenderSystem *)0x0) {
      UMovieSceneBlenderSystem::ReleaseBlendChannel(this,param_1->BlendChannelID);
    }
    local_res8.SystemID.Value = 0xff;
    local_res8.ChannelID = 0xffff;
    param_1->BlendChannelID = local_res8;
  }
  return;
}

// GetAnimSequencerInstance @ 146834380

UAnimSequencerInstance * __cdecl
UE::MovieScene::GetAnimSequencerInstance(USkeletalMeshComponent *param_1)

{
  int iVar1;
  UAnimInstance *this;
  UClass *pUVar2;
  longlong *plVar3;
  UAnimSequencerInstance *pUVar4;
  
  this = USkeletalMeshComponent::GetAnimInstance(param_1);
  if (this == (UAnimInstance *)0x0) {
    return (UAnimSequencerInstance *)0x0;
  }
  pUVar2 = Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
  plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
  if (plVar3 != (longlong *)0x0) {
    pUVar4 = (UAnimSequencerInstance *)(**(code **)(*plVar3 + 0x10))(plVar3);
    if (pUVar4 != (UAnimSequencerInstance *)0x0) {
      pUVar2 = Z_Construct_UClass_UAnimSequencerInstance_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return pUVar4;
      }
    }
    return (UAnimSequencerInstance *)0x0;
  }
  return (UAnimSequencerInstance *)0x0;
}

// GetLevelVisibility @ 146834a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UE::MovieScene::GetLevelVisibility(ULevelStreaming *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146834a93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1->_padding_ + 0x2f0))();
  return (bool)uVar1;
}

// GetSimulatedMotionVectorTime @ 146837830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FFrameTime __cdecl UE::MovieScene::GetSimulatedMotionVectorTime(FMovieSceneContext *param_1)

{
  undefined1 auVar1 [16];
  FMovieSceneEvaluationRange *in_RDX;
  undefined1 in_XMM2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = ((double)(in_RDX->CurrentFrameRate).Numerator * ___real_3f71111111111137) /
                 (double)(in_RDX->CurrentFrameRate).Denominator;
  roundpd(in_XMM2,auVar1,1);
  TRange<FFrameTime>::Size<FFrameTime>(&in_RDX->EvaluationRange);
  FMovieSceneEvaluationRange::GetOffsetTime(in_RDX,(FFrameTime)param_1);
  return (FFrameTime)param_1;
}

// GetStreamingLevel @ 146837c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreaming * __cdecl UE::MovieScene::GetStreamingLevel(FString *param_1,UWorld *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ULevelStreaming *this;
  bool bVar4;
  FString *this_00;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  undefined4 local_res10 [2];
  FString local_48;
  FString local_38;
  
  bVar7 = false;
  local_res10[0] = 0;
  bVar4 = FPackageName::IsShortPackageName(param_1);
  if (bVar4) {
    ::FString::ConcatCF(&local_48,L"/",param_1);
    if (param_1 != &local_48) {
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = (param_2->StreamingLevels).AllocatorInstance.Data;
  iVar1 = (param_2->StreamingLevels).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar1 * 8;
  do {
    if ((param_2->StreamingLevels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar6 == pFVar3) {
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return (ULevelStreaming *)0x0;
    }
    this = *(ULevelStreaming **)pFVar6;
    if (this == (ULevelStreaming *)0x0) {
LAB_146837d99:
      bVar4 = false;
    }
    else {
      bVar7 = true;
      this_00 = ULevelStreaming::GetWorldAssetPackageName(this,&local_38);
      iVar2 = (param_1->Data).ArrayNum;
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = ::FString::EndsWith(this_00,pwVar5,iVar8,IgnoreCase);
      if (!bVar4) goto LAB_146837d99;
      bVar4 = true;
    }
    if ((bVar7) &&
       (bVar7 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pFVar3 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      return this;
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// GetTypeHash @ 146838040

uint __cdecl UE::MovieScene::GetTypeHash(FMaterialParameterKey *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (param_1->BoundMaterial).ObjectSerialNumber;
  uVar4 = (param_1->BoundMaterial).ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar1 = (-0x61c88647 - uVar4) - uVar2 ^ uVar4 << 8;
  uVar3 = (uVar2 - uVar1) - uVar4 ^ uVar1 >> 0xd;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 >> 0xc;
  uVar2 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar2 >> 5;
  uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar3 >> 3;
  uVar1 = (uVar2 - uVar4) - uVar3 ^ uVar4 << 10;
  uVar2 = ::GetTypeHash(&param_1->ParameterInfo);
  return uVar2 ^ (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf;
}

// GetTypeHash @ 1468380e0

uint __cdecl UE::MovieScene::GetTypeHash(FObjectComponent *param_1)

{
  int iVar1;
  UObject *pUVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = (param_1->ObjectKey).ObjectIndex;
  if ((iVar1 == 0) && ((param_1->ObjectKey).ObjectSerialNumber == 0)) {
    pUVar2 = (param_1->ObjectPtr).field0_0x0.DebugPtr;
    uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    return uVar3 >> 0x10 ^ uVar3;
  }
  uVar3 = (param_1->ObjectKey).ObjectSerialNumber;
  uVar6 = iVar1 - uVar3 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar3 ^ uVar6 << 8;
  uVar5 = (uVar3 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar5) - uVar4 ^ uVar5 >> 0xc;
  uVar3 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 0x10;
  uVar4 = (uVar5 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 >> 3;
  uVar3 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 10;
  return (uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf;
}

// MakeSafeLevelName @ 1468411c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __cdecl
UE::MovieScene::MakeSafeLevelName(FString *__return_storage_ptr__,FName *param_1,UWorld *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((param_2->StreamingLevelsPrefix).Data.ArrayNum < 2) {
    ::FName::ToString(param_1,__return_storage_ptr__);
  }
  else {
    pFVar2 = FPackageName::GetShortName(&local_38,param_1);
    ::FString::ConcatFF(&local_58,&param_2->StreamingLevelsPrefix,pFVar2);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    bVar1 = FPackageName::IsShortPackageName(*param_1);
    if (!bVar1) {
      pFVar2 = ::FName::ToString(param_1,&local_18);
      pFVar2 = FPackageName::GetLongPackagePath(&local_28,pFVar2);
      ::FString::ConcatFC(&local_38,pFVar2,L"/");
      ::FString::ConcatFF(&local_48,&local_38,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      local_58.Data.ArrayNum = local_48.Data.ArrayNum;
      local_58.Data.ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// SetLevelVisibility @ 14686bd30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MovieScene::SetLevelVisibility
          (ULevelStreaming *param_1,bool param_2,EFlushLevelStreamingType *param_3)

{
  ULevelStreaming::SetShouldBeVisible(param_1,param_2);
  if ((param_3 != (EFlushLevelStreamingType *)0x0) && (*param_3 == None)) {
    *param_3 = Visibility;
  }
  if ((param_2) && ((param_1->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0)) {
    (**(code **)(param_1->_padding_ + 0x2d0))(param_1,1);
    if (param_3 != (EFlushLevelStreamingType *)0x0) {
      *param_3 = Full;
    }
  }
  return;
}

// Construct<FMovieSceneSkeletalAnimRootMotionTrackParams> @ 1468765b0

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneSkeletalAnimRootMotionTrackParams>(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined2 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  return;
}

// ConstructForTests<FMovieSceneSkeletalAnimRootMotionTrackParams> @ 146876660

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneSkeletalAnimRootMotionTrackParams>
          (void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined2 *)((longlong)param_1 + 0x18) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)((longlong)param_1 + 0x20) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)((longlong)param_1 + 0x28) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x30) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x38) = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)((longlong)param_1 + 0x40) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)((longlong)param_1 + 0x48) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x50) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x58) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)((longlong)param_1 + 0x60) = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)((longlong)param_1 + 0x68) = (double)fVar1;
  *(double *)((longlong)param_1 + 0x70) = (double)fVar2;
  *(double *)((longlong)param_1 + 0x78) = (double)fVar3;
  return;
}

// Destruct<FMovieSceneSkeletalAnimRootMotionTrackParams> @ 1468766d0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneSkeletalAnimRootMotionTrackParams>(void *param_1)

{
  return;
}

// Copy<FMovieSceneSkeletalAnimRootMotionTrackParams> @ 1468766e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneSkeletalAnimRootMotionTrackParams>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  if (param_3 != 0) {
    lVar17 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar17 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar17 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x60 + (longlong)param_1);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      puVar1 = (undefined8 *)(lVar17 + 0x70 + (longlong)param_1);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar17 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      *(undefined8 *)((longlong)param_1 + 0x60) = uVar13;
      *(undefined8 *)((longlong)param_1 + 0x68) = uVar14;
      *(undefined8 *)((longlong)param_1 + 0x70) = uVar15;
      *(undefined8 *)((longlong)param_1 + 0x78) = uVar16;
      param_1 = (void *)((longlong)param_1 + 0x80);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FComponentMaterialInfo> @ 146882f20

void __cdecl UE::CoreUObject::Private::Construct<FComponentMaterialInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FComponentMaterialInfo> @ 146882f70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FComponentMaterialInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FComponentMaterialInfo> @ 146882f90

void __cdecl UE::CoreUObject::Private::Destruct<FComponentMaterialInfo>(void *param_1)

{
  return;
}

// Copy<FComponentMaterialInfo> @ 146883120

bool __cdecl
UE::CoreUObject::Private::Copy<FComponentMaterialInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FComponentMaterialInfo> @ 146883150

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FComponentMaterialInfo>(void *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined8 *)param_1;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  return (uint)*(byte *)((longlong)param_1 + 0xc) ^ *(uint *)((longlong)param_1 + 8) ^
         uVar2 + (int)((ulonglong)uVar1 >> 0x20);
}

// AccessorToString<double,double> @ 146883780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::AccessorToString<double,double>
          (TReadOneOrMoreOfAccessor<double,double> *param_1,FEntityManager *param_2,FString *param_3
          )

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  undefined1 local_res18 [16];
  ForAnyElementType local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  iVar2 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  pFVar6 = local_58.Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  local_50._0_4_ = iVar2 + 1;
  OneOfAccessorToString(param_1->ComponentTypes,param_2,(FString *)pFVar6);
  if ((int)local_50 == local_50._4_4_) {
    local_50._0_4_ =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x810,&local_58,(int *)((longlong)&local_50 + 4));
  }
  lVar7 = (longlong)(int)local_50;
  local_50 = CONCAT44(local_50._4_4_,(int)local_50 + 1);
  pFVar6 = local_58.Data + lVar7 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(undefined8 *)(pFVar6 + 8) = 0;
  OneOfAccessorToString(param_1->ComponentTypes + 1,param_2,(FString *)pFVar6);
  iVar2 = (int)local_50;
  uVar3 = (ulonglong)(int)local_50;
  bVar1 = true;
  pFVar6 = local_58.Data + uVar3 * 0x10;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  FVar4.Data = local_58.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (FVar4.Data == pFVar6) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      ::FString::AppendChars(&local_48,L",",1);
    }
    iVar5 = *(int *)(FVar4.Data + 8) + -1;
    if (*(int *)(FVar4.Data + 8) == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_48,*(wchar_t **)FVar4.Data,iVar5);
    uVar3 = local_50 & 0xffffffff;
    FVar4.Data = FVar4.Data + 0x10;
  }
  ::FString::PrintfImpl(&local_38,L"\n\tRead One Or More Of: [ %s ]");
  iVar2 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(param_3,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// AddAccessorToFilter<double,double> @ 146883e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MovieScene::AddAccessorToFilter<double,double>
          (TReadOneOrMoreOfAccessor<double,double> *param_1,FEntityComponentFilter *param_2)

{
  int *piVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  TBitArray<TFixedAllocator<12>_> *this;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_88 [32];
  TBitArray<TFixedAllocator<12>_> local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar3 = *(ushort *)param_1->ComponentTypes;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x180;
  if (uVar3 != 0xffff) {
    TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,uVar3 + 1);
    if ((local_68.NumBits <= (int)(uint)uVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  uVar3 = *(ushort *)(param_1->ComponentTypes + 1);
  if (uVar3 != 0xffff) {
    iVar7 = ((uint)uVar3 - local_68.NumBits) + 1;
    if (0 < iVar7) {
      TBitArray<TFixedAllocator<12>_>::Add(&local_68,false,iVar7);
    }
    if ((local_68.NumBits <= (int)(uint)uVar3) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = local_68.AllocatorInstance.InlineData + (uVar3 >> 5);
    *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar3 & 0x1f);
  }
  iVar13 = 0;
  uVar12 = 0;
  iVar7 = (int)(local_68.NumBits + 0x1fU + ((int)(local_68.NumBits + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  uVar9 = local_68.NumBits & 0x8000001f;
  if ((int)uVar9 < 0) {
    uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
  }
  uVar10 = 0xffffffff >> ((byte)(0x20 - uVar9) & 0x1f);
  if (0x1f < (int)(0x20 - uVar9)) {
    uVar10 = 0xffffffff;
  }
  uVar9 = 0xffffffff;
  if (iVar7 == 1) {
    uVar9 = uVar10;
  }
  if (0 < iVar7) {
    do {
      if (uVar9 == 0xffffffff) {
        uVar9 = *(uint *)local_68.AllocatorInstance.InlineData[uVar12].Pad;
      }
      else {
        uVar9 = uVar9 & *(uint *)local_68.AllocatorInstance.InlineData[uVar12].Pad;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar8 = (ulonglong)uVar9 - ((ulonglong)(uVar9 >> 1) & 0x5555555555555555);
      uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
      iVar13 = iVar13 + (uint)(byte)(((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38);
      uVar9 = 0xffffffff;
      if (uVar11 == iVar7 - 1U) {
        uVar9 = uVar10;
      }
    } while ((int)uVar11 < iVar7);
    if (iVar13 != 0) goto LAB_146884029;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("Mask.NumComponents() != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneComponentAccessors.h"
                     ,0x1cb,L"");
  if (bVar6) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_146884029:
  if (0 < local_68.NumBits) {
    iVar7 = (param_2->ComplexMasks).ArrayNum;
    piVar1 = &(param_2->ComplexMasks).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x43c,&(param_2->ComplexMasks).AllocatorInstance,piVar1);
    }
    pFVar4 = (param_2->ComplexMasks).AllocatorInstance.Data;
    (param_2->ComplexMasks).ArrayNum = iVar7 + 1;
    this = (TBitArray<TFixedAllocator<12>_> *)(pFVar4 + (longlong)iVar7 * 0x3c);
    this->NumBits = 0;
    this->MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this,&local_68);
    this[1].AllocatorInstance.InlineData[0].Pad[0] = '\x02';
  }
  return;
}

// Decay<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_>,TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>_> @ 1468868e0

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Unsafe::
Decay<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_>_>,TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UMovieSceneSection>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneSection>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<unsigned_short>_>_> @ 14688bb00

ushort __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<unsigned_short>_>_>
          (TComponentLock<UE::MovieScene::TRead<unsigned_short>_> *param_1,int param_2)

{
  return *(ushort *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 2);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FEasingComponentData>_>_> @ 14688bb20

FEasingComponentData * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FEasingComponentData>_>_>
          (TComponentLock<UE::MovieScene::TRead<FEasingComponentData>_> *param_1,int param_2)

{
  return (FEasingComponentData *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FHierarchicalBlendTarget>_>_> @ 14688bb40

FHierarchicalBlendTarget * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FHierarchicalBlendTarget>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FHierarchicalBlendTarget>_> *param_1
          ,int param_2)

{
  return (FHierarchicalBlendTarget *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x10);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceObjectPathChannel>_>_> @ 14688bb60

FSourceObjectPathChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceObjectPathChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceObjectPathChannel>_> *param_1
          ,int param_2)

{
  return (FSourceObjectPathChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceStringChannel>_>_> @ 14688bb80

FSourceStringChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceStringChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceStringChannel>_> *param_1,
          int param_2)

{
  return (FSourceStringChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceTextChannel>_>_> @ 14688bba0

FSourceTextChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceTextChannel>_>_>
          (TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FSourceTextChannel>_> *param_1,
          int param_2)

{
  return (FSourceTextChannel *)(*(longlong *)&param_1->field_0x10 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FString>_>_> @ 14688bbc0

FString * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FString>_>_>
          (TComponentLock<UE::MovieScene::TWrite<FString>_> *param_1,int param_2)

{
  return (FString *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FText>_>_> @ 14688bbe0

FText * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<FText>_>_>
          (TComponentLock<UE::MovieScene::TWrite<FText>_> *param_1,int param_2)

{
  return (FText *)((longlong)param_2 * 0x10 + *(longlong *)&param_1->field_0x18);
}

// GetComponentAtIndex<UE::MovieScene::TRead<unsigned_short>_> @ 14688bc00

ushort __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<unsigned_short>_>
          (TRead<unsigned_short> *param_1,int param_2)

{
  return *(ushort *)((longlong)*param_1 + (longlong)param_2 * 2);
}

// GetComponentAtIndex<UE::MovieScene::TRead<FEasingComponentData>_> @ 14688bc20

FEasingComponentData * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<FEasingComponentData>_>
          (TRead<FEasingComponentData> *param_1,int param_2)

{
  return (FEasingComponentData *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceObjectPathChannel>_> @ 14688bc40

FSourceObjectPathChannel * __cdecl
UE::MovieScene::
GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceObjectPathChannel>_>
          (TRead<UE::MovieScene::FSourceObjectPathChannel> *param_1,int param_2)

{
  return (FSourceObjectPathChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceStringChannel>_> @ 14688bc60

FSourceStringChannel * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceStringChannel>_>
          (TRead<UE::MovieScene::FSourceStringChannel> *param_1,int param_2)

{
  return (FSourceStringChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceTextChannel>_> @ 14688bc80

FSourceTextChannel * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TRead<UE::MovieScene::FSourceTextChannel>_>
          (TRead<UE::MovieScene::FSourceTextChannel> *param_1,int param_2)

{
  return (FSourceTextChannel *)((longlong)*param_1 + (longlong)param_2 * 8);
}

// GetComponentAtIndex<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_> @ 14688bca0

FObjectComponent * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TWrite<UE::MovieScene::FObjectComponent>_>
          (TWrite<UE::MovieScene::FObjectComponent> *param_1,int param_2)

{
  return (FObjectComponent *)((longlong)param_2 * 0x10 + (longlong)*param_1);
}

// GetComponentAtIndex<UE::MovieScene::TWrite<FText>_> @ 14688bcc0

FText * __cdecl
UE::MovieScene::GetComponentAtIndex<UE::MovieScene::TWrite<FText>_>
          (TWrite<FText> *param_1,int param_2)

{
  return (FText *)((longlong)param_2 * 0x10 + (longlong)*param_1);
}

// PopulatePrerequisites<double,double> @ 146897b40

void __cdecl
UE::MovieScene::PopulatePrerequisites<double,double>
          (TReadOneOrMoreOfAccessor<double,double> *param_1,FSystemTaskPrerequisites *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  FComponentTypeID local_res20;
  FComponentTypeID local_res22 [3];
  initializer_list<UE::MovieScene::FComponentTypeID> local_18;
  
  local_res20.Value = *(ushort *)param_1->ComponentTypes;
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  local_res20.Value = *(ushort *)(param_1->ComponentTypes + 1);
  if (local_res20.Value != 0xffff) {
    local_18._First = &local_res20;
    local_18._Last = local_res22;
    FSystemTaskPrerequisites::FilterByComponent(param_2,param_3,&local_18);
  }
  return;
}

// PopulateReadWriteDependencies<double,double> @ 146897be0

void __cdecl
UE::MovieScene::PopulateReadWriteDependencies<double,double>
          (TReadOneOrMoreOfAccessor<double,double> *param_1,FComponentMask *param_2,
          FComponentMask *param_3)

{
  if (*(short *)param_1->ComponentTypes != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)param_1->ComponentTypes);
  }
  if (*(short *)(param_1->ComponentTypes + 1) != -1) {
    FComponentMask::Set(param_2,(FComponentTypeID)*(ushort *)(param_1->ComponentTypes + 1));
  }
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FCinematicShotSectionSortData>_> @ 146897c40

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FCinematicShotSectionSortData>_>
          (ushort param_1,ForElementType<UE::MovieScene::FCinematicShotSectionSortData> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FCinematicShotSectionSortData>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FIntermediatePropertyValue>_> @ 146897d10

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FIntermediatePropertyValue>_>
          (ushort param_1,ForElementType<UE::MovieScene::FIntermediatePropertyValue> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FIntermediatePropertyValue>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>_> @ 146897de0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>_>
          (ushort param_1,
          ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FRootSequenceData::FSequenceIDAndChannel>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 146897eb0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x11) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>_> @ 1468980d0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
          *param_4,int *param_5,int *param_6)

{
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  *this;
  int iVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  _Src;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = *param_5;
  uVar6 = *param_6;
  uVar8 = iVar1 + param_3;
  *param_5 = uVar8;
  if ((uint)param_3 <= uVar6 - iVar1) {
    return iVar1;
  }
  if ((int)uVar8 < iVar1) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar7 = (ulonglong)param_1;
  if (uVar8 < 9) {
    _Src = param_4->SecondaryData;
    uVar8 = 8;
LAB_14689818b:
    uVar6 = uVar8;
    if (_Src == (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                 )0x0) goto LAB_1468981df;
    memmove(param_4,(void *)_Src,(longlong)iVar1 * 0x1b0);
    uVar6 = 0;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(int)uVar8;
    if (uVar6 < 9) {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
      uVar2 = 4;
      if (4 < uVar4) {
        uVar2 = uVar4;
      }
    }
    else {
      uVar2 = (uVar4 * 3 >> 3) + 0x10 + uVar4;
    }
    uVar3 = FMemory::QuantizeSize(uVar7 * uVar2,0);
    uVar6 = (uint)(uVar3 / uVar7);
    this = &param_4->SecondaryData;
    _Src = *this;
    if ((int)uVar6 < (int)uVar8) {
      uVar6 = 0x7fffffff;
    }
    uVar8 = uVar6;
    if (uVar6 < 9) goto LAB_14689818b;
    iVar5 = iVar1;
    if (_Src == (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                 )0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)this,0,uVar6,uVar7);
      memmove((void *)*this,param_4,(longlong)iVar1 * 0x1b0);
      goto LAB_1468981df;
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_4->SecondaryData,iVar5,uVar6,uVar7);
  uVar6 = uVar8;
LAB_1468981df:
  *param_6 = uVar6;
  return iVar1;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_> @ 146898210

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FIntermediatePropertyValue>_> @ 146898290

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FIntermediatePropertyValue>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::MovieScene::FIntermediatePropertyValue> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x11) {
      iVar1 = 0x10;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::MovieScene::FIntermediatePropertyValue>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits> @ 1468989d0

TRecompositionResult<double> * __cdecl
UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
          (TRecompositionResult<double> *__return_storage_ptr__,UObject *param_1,
          UMovieSceneSection *param_2,
          TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *param_3,double *param_4,
          FFrameTime param_5)

{
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(UMovieSceneSection **)local_18.AllocatorInstance.Data = param_2;
  RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
            (__return_storage_ptr__,param_1,&local_18,param_3,param_4,param_5);
  return __return_storage_ptr__;
}

// RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits> @ 146898a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146898e72) */
/* WARNING: Enum "Type": Some values do not have unique names */

TRecompositionResult<double> * __cdecl
UE::MovieScene::Test::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
          (TRecompositionResult<double> *__return_storage_ptr__,UObject *param_1,
          TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *param_2,
          TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *param_3,double *param_4,
          FFrameTime param_5)

{
  int iVar1;
  UObjectBaseUtility *this;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UObject *pUVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  TRecompositionResult<double> *pTVar8;
  UClass *pUVar9;
  UMovieSceneTrack *pUVar10;
  UMovieSceneEntitySystem *pUVar11;
  FString *pFVar12;
  FScriptContainerElement *pFVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStackY_3b8 [32];
  FMovieSceneEntityID local_368;
  undefined1 local_364 [4];
  ForAnyElementType local_360;
  undefined8 local_358;
  FInterrogationChannel local_350;
  int local_348;
  undefined4 uStack_344;
  FEntityManager *local_340;
  FFrameTime local_338;
  TRecompositionResult<double> *local_330;
  double local_328;
  UClass *local_320;
  UObject *local_318;
  double *local_310;
  TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *local_308;
  FDecompositionQuery local_300;
  FString local_2e0;
  FString local_2d0;
  TRecompositionResult<double> local_2c0;
  FSystemInterrogator local_2a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_310 = param_4;
  local_330 = __return_storage_ptr__;
  local_318 = param_1;
  local_308 = param_3;
  FSystemInterrogator::FSystemInterrogator(&local_2a8);
  FSystemInterrogator::TrackImportedEntities(&local_2a8,true);
  local_340 = GEntityManagerForDebuggingVisualizers;
  GEntityManagerForDebuggingVisualizers =
       (FEntityManager *)((longlong)local_2a8.Linker.field0_0x0 + 0x28);
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPropertySections.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                         ,0x2b,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TRecompositionResult<double> *)(*pcVar3)();
    return pTVar8;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TRecompositionResult<double> *)(*pcVar3)();
    return pTVar8;
  }
  this = *(UObjectBaseUtility **)(param_2->AllocatorInstance).Data;
  pUVar9 = UMovieScenePropertyTrack::StaticClass();
  pUVar10 = (UMovieSceneTrack *)UObjectBaseUtility::GetTypedOuter(this,pUVar9);
  if ((pUVar10 == (UMovieSceneTrack *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyTrack",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                         ,0x2d,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TRecompositionResult<double> *)(*pcVar3)();
    return pTVar8;
  }
  uStack_344 = 0;
  FInterrogationChannels::AllocateChannel
            (&local_2a8.Channels,(UObject *)&local_350,(FMovieScenePropertyBinding *)param_1);
  local_348 = local_350.Value;
  FSystemInterrogator::ImportTrack(&local_2a8,pUVar10,local_350,MovieSceneSequenceID::Invalid);
  local_338 = param_5;
  FSystemInterrogator::AddInterrogation(&local_2a8,(FInterrogationParams *)&local_338);
  FSystemInterrogator::Update(&local_2a8);
  pFVar13 = (param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  pUVar4 = (UObject *)CONCAT44(uStack_344,local_348);
  local_360.Data = (FScriptContainerElement *)0x0;
  local_358 = 0;
  pFVar2 = pFVar13 + (longlong)iVar1 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      local_364[0] = 0;
      `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_364);
    }
    pTVar8 = local_330;
    if (pFVar13 == pFVar2) break;
    FSystemInterrogator::FindEntityFromOwner
              (&local_2a8,(FInterrogationKey)&local_368,pUVar4,(uint)*(undefined8 *)pFVar13);
    if (local_368.Value == 0xffff) {
      bVar6 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2431774319370567741>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Tests\\MovieSceneDecomposerTests.cpp"
                         ,0x3d,"EntityID.IsValid()");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRecompositionResult<double> *)(*pcVar3)();
        return pTVar8;
      }
    }
    else {
      if (((local_360.Data <= (FScriptContainerElement *)&local_368) &&
          ((FScriptContainerElement *)&local_368 < local_360.Data + (longlong)local_358._4_4_ * 2))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TRecompositionResult<double> *)(*pcVar3)();
        return pTVar8;
      }
      iVar7 = (int)local_358;
      if ((int)local_358 == local_358._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&local_360,(int *)((longlong)&local_358 + 4));
      }
      local_358 = CONCAT44(local_358._4_4_,iVar7 + 1);
      *(ushort *)(local_360.Data + (longlong)iVar7 * 2) = local_368.Value;
    }
    pFVar13 = pFVar13 + 8;
  }
  pwVar15 = L"";
  if ((int)local_358 == 0) {
    local_328 = 0.0;
    TRecompositionResult<double>::TRecompositionResult<double>(local_330,&local_328,1);
  }
  else {
    local_320 = Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_320 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_320);
    }
    pUVar11 = UMovieSceneEntitySystemLinker::FindSystem
                        ((UMovieSceneEntitySystemLinker *)local_2a8.Linker.field0_0x0,
                         (TSubclassOf<UMovieSceneEntitySystem>)&local_320);
    if (pUVar11 == (UMovieSceneEntitySystem *)0x0) {
      pUVar11 = (UMovieSceneEntitySystem *)0x0;
    }
    else {
      pUVar9 = Z_Construct_UClass_UMovieSceneInterrogatedPropertyInstantiatorSystem_NoRegister();
      iVar1 = (int)pUVar9->_padding_;
      if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar9->_padding_)) {
        pFVar12 = GetTypeName<UMovieSceneInterrogatedPropertyInstantiatorSystem>(&local_2d0);
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        pFVar12 = GetFullNameForCastLogError<UMovieSceneEntitySystem>(&local_2e0,pUVar11);
        if ((pFVar12->Data).ArrayNum != 0) {
          pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar15,pwVar14);
      }
    }
    FVar5.Data = local_360.Data;
    iVar1 = (int)local_358;
    if (((int)local_358 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TRecompositionResult<double> *)(*pcVar3)();
      return pTVar8;
    }
    local_300.Entities._12_4_ = local_2e0.Data.ArrayMax;
    local_300.Object = local_318;
    local_300.Entities.DataPtr = (FMovieSceneEntityID *)FVar5.Data;
    local_300.Entities.ArrayNum = iVar1;
    local_300.bConvertFromSourceEntityIDs = false;
    FPropertyRecomposerImpl::RecomposeBlendOperational<UE::MovieScene::FFloatPropertyTraits>
              ((FPropertyRecomposerImpl *)(pUVar11 + 7),&local_2c0,local_308,&local_300,local_310);
    (pTVar8->Values).AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
    if (local_2c0.Values.AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
      *&(pTVar8->Values).AllocatorInstance.InlineData =
           local_2c0.Values.AllocatorInstance.InlineData;
    }
    (pTVar8->Values).AllocatorInstance.SecondaryData =
         local_2c0.Values.AllocatorInstance.SecondaryData;
    (pTVar8->Values).ArrayNum = local_2c0.Values.ArrayNum;
    (pTVar8->Values).ArrayMax = local_2c0.Values.ArrayMax;
    local_2c0.Values.ArrayMax = 1;
    local_2c0.Values.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
    local_2c0.Values.ArrayNum = 0;
  }
  if (local_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_360.Data);
  }
  GEntityManagerForDebuggingVisualizers = local_340;
  FSystemInterrogator::~FSystemInterrogator(&local_2a8);
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return pTVar8;
}

// Rehash<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_> @ 146898f60

void __cdecl
UE::Core::Private::
Rehash<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
          (ForElementType<FSetElementId> *param_1,int param_2)

{
  ulonglong uVar1;
  ForElementType<FSetElementId> FVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(uint)param_2;
  if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&param_1->SecondaryData,0,0,4);
  }
  if (param_2 != 0) {
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>::
    ResizeAllocation(param_1,0,param_2,4);
    if (0 < param_2) {
      uVar3 = 0;
      do {
        FVar2 = (ForElementType<FSetElementId>)param_1;
        if (param_1->SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar2 = param_1->SecondaryData;
        }
        uVar1 = uVar3 & (longlong)param_2 - 1U;
        uVar3 = uVar3 + 1;
        *(undefined4 *)((longlong)FVar2 + uVar1 * 4) = 0xffffffff;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

// Factorial @ 1468b2770

float __cdecl UE::MovieScene::Factorial(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  
  if ((param_1 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("In >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                         ,0x2c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar4 = (float)(*pcVar1)();
    return fVar4;
  }
  iVar3 = 1;
  for (; 0 < param_1; param_1 = param_1 + -1) {
    iVar3 = iVar3 * param_1;
  }
  return (float)iVar3;
}

// GetPlaybackController @ 1468b6000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __cdecl UE::MovieScene::GetPlaybackController(UObject *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  APlayerController *pAVar4;
  
  if (param_1 != (UObject *)0x0) {
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x230) != 0)) {
      pUVar3 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar3->_padding_)) &&
         (pAVar4 = *(APlayerController **)&param_1[8].field_0x18, pAVar4 != (APlayerController *)0x0
         )) {
        pUVar3 = Z_Construct_UClass_APlayerController_NoRegister();
        iVar1 = (int)pUVar3->_padding_;
        if ((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar3->_padding_)) {
          return pAVar4;
        }
      }
      pAVar4 = UGameInstance::GetFirstLocalPlayerController
                         (*(UGameInstance **)(lVar2 + 0x230),(UWorld *)0x0);
      return pAVar4;
    }
  }
  return (APlayerController *)0x0;
}

