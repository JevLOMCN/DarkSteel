// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCacheTracks
// Functions: 12

// Construct<FMovieSceneGeometryCacheSectionTemplate> @ 14cd86c00

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneGeometryCacheSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCacheSectionTemplate__6B_;
  FMovieSceneGeometryCacheSectionTemplateParameters::
  FMovieSceneGeometryCacheSectionTemplateParameters
            ((FMovieSceneGeometryCacheSectionTemplateParameters *)((longlong)param_1 + 0x20));
  return;
}

// ConstructForTests<FMovieSceneGeometryCacheSectionTemplate> @ 14cd86c30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCacheSectionTemplate>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined ***)param_1 = &___7FMovieSceneGeometryCacheSectionTemplate__6B_;
  FMovieSceneGeometryCacheSectionTemplateParameters::
  FMovieSceneGeometryCacheSectionTemplateParameters
            ((FMovieSceneGeometryCacheSectionTemplateParameters *)((longlong)param_1 + 0x20));
  return;
}

// Destruct<FMovieSceneGeometryCacheSectionTemplate> @ 14cd86c60

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCacheSectionTemplate>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  *(undefined ***)param_1 = &___7FMovieSceneEvalTemplateBase__6B_;
  return;
}

// Copy<FMovieSceneGeometryCacheSectionTemplate> @ 14cd86c90

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGeometryCacheSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 0x10) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x14) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    FMovieSceneGeometryCacheParams::operator=
              ((FMovieSceneGeometryCacheParams *)((longlong)pvVar1 + 0x20),
               (FMovieSceneGeometryCacheParams *)
               ((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1)));
    *(undefined4 *)((longlong)pvVar1 + 0x68) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x6c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x6c - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x70);
  }
  return true;
}

// Construct<FMovieSceneGeometryCacheSectionTemplateParameters> @ 14cd86d30

void __cdecl
UE::CoreUObject::Private::Construct<FMovieSceneGeometryCacheSectionTemplateParameters>
          (void *param_1)

{
  float fVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x38))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x38),0);
  fVar1 = GeometryCacheDeprecatedMagicNumber;
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(float *)((longlong)param_1 + 0x1c) = fVar1;
  *(float *)((longlong)param_1 + 0x20) = fVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FMovieSceneGeometryCacheSectionTemplateParameters> @ 14cd86d40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCacheSectionTemplateParameters>
          (void *param_1)

{
  float fVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x38))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x38),0);
  fVar1 = GeometryCacheDeprecatedMagicNumber;
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(float *)((longlong)param_1 + 0x1c) = fVar1;
  *(float *)((longlong)param_1 + 0x20) = fVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FMovieSceneGeometryCacheSectionTemplateParameters> @ 14cd86d50

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCacheSectionTemplateParameters>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x38);
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

// Copy<FMovieSceneGeometryCacheSectionTemplateParameters> @ 14cd86d70

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGeometryCacheSectionTemplateParameters>
          (void *param_1,void *param_2,int param_3)

{
  FMovieSceneGeometryCacheParams *pFVar1;
  FMovieSceneGeometryCacheParams *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FMovieSceneGeometryCacheParams *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FMovieSceneGeometryCacheParams::operator=(this,pFVar1);
      *(undefined4 *)&this[1].GeometryCacheAsset.field0_0x0 =
           *(undefined4 *)&pFVar1[1].GeometryCacheAsset.field0_0x0;
      *(undefined4 *)((longlong)&this[1].GeometryCacheAsset.field0_0x0 + 4) =
           *(undefined4 *)((longlong)&pFVar1[1].GeometryCacheAsset.field0_0x0 + 4);
      param_3 = param_3 + -1;
      this = (FMovieSceneGeometryCacheParams *)&this[1].FirstLoopStartFrameOffset;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneGeometryCacheParams> @ 14cd86df0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneGeometryCacheParams>(void *param_1)

{
  float fVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x38))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x38),0);
  fVar1 = GeometryCacheDeprecatedMagicNumber;
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(float *)((longlong)param_1 + 0x1c) = fVar1;
  *(float *)((longlong)param_1 + 0x20) = fVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// ConstructForTests<FMovieSceneGeometryCacheParams> @ 14cd86e50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneGeometryCacheParams>(void *param_1)

{
  float fVar1;
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x38))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x38),0);
  fVar1 = GeometryCacheDeprecatedMagicNumber;
  *(uint *)((longlong)param_1 + 0x18) = *(uint *)((longlong)param_1 + 0x18) & 0xfffffffe;
  *(float *)((longlong)param_1 + 0x1c) = fVar1;
  *(float *)((longlong)param_1 + 0x20) = fVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  return;
}

// Destruct<FMovieSceneGeometryCacheParams> @ 14cd86eb0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneGeometryCacheParams>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x38);
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

// Copy<FMovieSceneGeometryCacheParams> @ 14cd86f10

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneGeometryCacheParams>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      puVar2 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar2 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar2);
      }
      *puVar5 = *puVar2;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar2 + 1);
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar2 + 2);
      *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)((longlong)puVar2 + 0x14);
      *(uint *)(puVar5 + 3) =
           *(uint *)(puVar5 + 3) ^ (*(uint *)(puVar5 + 3) ^ *(uint *)(puVar2 + 3)) & 1;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = *(undefined4 *)((longlong)puVar2 + 0x1c);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar2 + 4);
      uVar4 = puVar2[6];
      puVar5[5] = puVar2[5];
      puVar5[6] = uVar4;
      if (puVar5 != puVar2) {
        iVar3 = *(int *)(puVar2 + 8);
        piVar1 = (int *)((longlong)puVar5 + 0x44);
        _Src = (void *)puVar2[7];
        *(int *)(puVar5 + 8) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar3,*piVar1,(ForAnyElementType *)(puVar5 + 7),iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(((ForAnyElementType *)(puVar5 + 7))->Data,_Src,(longlong)iVar3);
          }
        }
      }
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 9;
    } while (param_3 != 0);
  }
  return true;
}

