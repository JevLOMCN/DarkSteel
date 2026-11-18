// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 239

// ConstructForTests<FMovieGraphRenderDataIdentifier> @ 14dc652a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphRenderDataIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Destruct<FMovieGraphRenderDataIdentifier> @ 14dc652d0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphRenderDataIdentifier>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMovieGraphRenderDataIdentifier> @ 14dc65460

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphRenderDataIdentifier>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      ::FString::operator=((FString *)((longlong)param_1 + 8),(FString *)((longlong)param_2 + 8));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_2 + 0x18));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
      param_2 = (void *)((longlong)param_2 + 0x48);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x48);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMovieGraphRenderDataIdentifier> @ 14dc65540

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMovieGraphRenderDataIdentifier>(void *param_1)

{
  uint uVar1;
  FMovieGraphRenderDataIdentifier local_58;
  
  local_58.RootBranchName = *(FName *)param_1;
  ::FString::FString(&local_58.LayerName,(FString *)((longlong)param_1 + 8));
  ::FString::FString(&local_58.RendererName,(FString *)((longlong)param_1 + 0x18));
  ::FString::FString(&local_58.SubResourceName,(FString *)((longlong)param_1 + 0x28));
  ::FString::FString(&local_58.CameraName,(FString *)((longlong)param_1 + 0x38));
  uVar1 = ::GetTypeHash(&local_58);
  return uVar1;
}

// Construct<FMovieGraphTraversalContext> @ 14dc658e0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphTraversalContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  return;
}

// ConstructForTests<FMovieGraphTraversalContext> @ 14dc658f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphTraversalContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  return;
}

// Destruct<FMovieGraphTraversalContext> @ 14dc65900

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphTraversalContext>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
    return;
  }
  return;
}

// Copy<FMovieGraphTraversalContext> @ 14dc659b0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphTraversalContext>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 8) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 8));
      }
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x10));
      }
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_2 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x18));
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x38),(FString *)((longlong)param_2 + 0x38));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x48),(FString *)((longlong)param_2 + 0x48));
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x58),(FString *)((longlong)param_2 + 0x58));
      FMovieGraphTimeStepData::operator=
                ((FMovieGraphTimeStepData *)((longlong)param_1 + 0x68),
                 (FMovieGraphTimeStepData *)((longlong)param_2 + 0x68));
      param_2 = (void *)((longlong)param_2 + 0xe8);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0xe8);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphNamedResolution> @ 14dc65d00

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphNamedResolution>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(FName *)param_1 = FMovieGraphNamedResolution::DefaultResolutionName;
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)FMovieGraphNamedResolution::DefaultResolution.field0_0x0;
  return;
}

// ConstructForTests<FMovieGraphNamedResolution> @ 14dc65d30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphNamedResolution>(void *param_1)

{
  *(FName *)param_1 = FMovieGraphNamedResolution::DefaultResolutionName;
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)FMovieGraphNamedResolution::DefaultResolution.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMovieGraphNamedResolution> @ 14dc65d60

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphNamedResolution>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
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

// Copy<FMovieGraphNamedResolution> @ 14dc65dc0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphNamedResolution>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_1 + lVar1 + 0x10)
                );
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphBranch> @ 14dc65eb0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphBranch>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMovieGraphBranch> @ 14dc65ec0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphBranch>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMovieGraphBranch> @ 14dc65ed0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphBranch>(void *param_1)

{
  return;
}

// Copy<FMovieGraphBranch> @ 14dc65ee0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphBranch>(void *param_1,void *param_2,int param_3)

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

// Construct<FMovieGraphTimeStepData> @ 14dc66670

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphTimeStepData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  return;
}

// ConstructForTests<FMovieGraphTimeStepData> @ 14dc66780

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphTimeStepData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  return;
}

// Destruct<FMovieGraphTimeStepData> @ 14dc667d0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphTimeStepData>(void *param_1)

{
  return;
}

// Copy<FMovieGraphTimeStepData> @ 14dc667f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphTimeStepData>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    pvVar2 = param_2;
    puVar3 = param_1;
    do {
      *puVar3 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      puVar3[1] = *(undefined4 *)((longlong)pvVar2 + 4);
      puVar3[2] = *(undefined4 *)((longlong)pvVar2 + 8);
      puVar3[3] = *(undefined4 *)((longlong)pvVar2 + 0xc);
      puVar3[4] = *(undefined4 *)((longlong)pvVar2 + 0x10);
      *(undefined1 *)(puVar3 + 5) = *(undefined1 *)((longlong)pvVar2 + 0x14);
      puVar3[6] = *(undefined4 *)((longlong)pvVar2 + 0x18);
      puVar3[7] = *(undefined4 *)((longlong)pvVar2 + 0x1c);
      *(undefined8 *)(puVar3 + 8) = *(undefined8 *)((longlong)pvVar2 + 0x20);
      puVar3[10] = *(undefined4 *)((longlong)pvVar2 + 0x28);
      puVar3[0xb] = *(undefined4 *)((longlong)pvVar2 + 0x2c);
      puVar3[0xc] = *(undefined4 *)((longlong)pvVar2 + 0x30);
      puVar3[0xd] = *(undefined4 *)((longlong)pvVar2 + 0x34);
      *(undefined1 *)(puVar3 + 0xe) = *(undefined1 *)((longlong)pvVar2 + 0x38);
      *(undefined1 *)((longlong)puVar3 + 0x39) = *(undefined1 *)((longlong)pvVar2 + 0x39);
      *(undefined1 *)((longlong)puVar3 + 0x3a) = *(undefined1 *)((longlong)pvVar2 + 0x3a);
      *(undefined1 *)((longlong)puVar3 + 0x3b) = *(undefined1 *)((longlong)pvVar2 + 0x3b);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar2 + 0x40) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar2 + 0x40));
      }
      *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)((longlong)pvVar2 + 0x40);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x50);
      *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)((longlong)pvVar2 + 0x48);
      *(undefined8 *)(puVar3 + 0x14) = uVar1;
      *(undefined8 *)(puVar3 + 0x16) = *(undefined8 *)((longlong)pvVar2 + 0x58);
      puVar3[0x18] = *(undefined4 *)((longlong)pvVar2 + 0x60);
      uVar1 = *(undefined8 *)((longlong)pvVar2 + 0x6c);
      *(undefined8 *)(puVar3 + 0x19) = *(undefined8 *)((longlong)pvVar2 + 100);
      *(undefined8 *)(puVar3 + 0x1b) = uVar1;
      *(undefined8 *)(puVar3 + 0x1d) = *(undefined8 *)((longlong)pvVar2 + 0x74);
      puVar3[0x1f] = *(undefined4 *)((longlong)pvVar2 + 0x7c);
      param_3 = param_3 + -1;
      pvVar2 = (void *)((longlong)pvVar2 + 0x80);
      puVar3 = puVar3 + 0x20;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphEvaluationContext> @ 14dc672f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphEvaluationContext>(void *param_1)

{
  memset(param_1,0,0x178);
  FMovieGraphEvaluationContext::FMovieGraphEvaluationContext(param_1);
  return;
}

// ConstructForTests<FMovieGraphEvaluationContext> @ 14dc67320

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluationContext>(void *param_1)

{
  FMovieGraphTraversalContext::FMovieGraphTraversalContext(param_1);
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined1 *)((longlong)param_1 + 0x150) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x158));
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170) = 0;
  return;
}

// Destruct<FMovieGraphEvaluationContext> @ 14dc67330

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphEvaluationContext>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x168));
  }
  if (*(longlong **)((longlong)param_1 + 0x158) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x158) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x140) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x140));
  }
  *(undefined4 *)((longlong)param_1 + 0x130) = 0;
  if (*(void **)((longlong)param_1 + 0x128) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x128));
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xe8));
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  return;
}

// Copy<FMovieGraphEvaluationContext> @ 14dc67340

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphEvaluationContext>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FString *pFVar2;
  FString *pFVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  longlong *plVar11;
  TSubclassOf<UMovieGraphSettingNode> *pTVar12;
  undefined1 local_res18 [16];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FMovieGraphTraversalContext::operator=(param_1,param_2);
    if ((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8) !=
        (FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->RenderDataIdentifier
                  ).RendererName,
                 (int *)&(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->
                         RenderDataIdentifier).SubResourceName,
                 (ForElementType<FSetElementId> *)
                 &(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->RenderDataIdentifier
                  ).RendererName,
                 *(int *)&(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->
                          RenderDataIdentifier).SubResourceName.Data.AllocatorInstance.Data);
      TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0xe8),
                  (TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0xe8));
    }
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 = *(UObject **)
                  &(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->
                   RenderDataIdentifier).SubResourceName.Data.ArrayNum, pUVar8 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar8);
    }
    iVar6 = (((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->RenderDataIdentifier).
            SubResourceName.Data.ArrayMax;
    pFVar2 = &(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->RenderDataIdentifier).
              CameraName;
    pFVar3 = &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->RenderDataIdentifier).
              CameraName;
    (((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->RenderDataIdentifier).
    SubResourceName.Data.ArrayNum =
         (((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->RenderDataIdentifier).
         SubResourceName.Data.ArrayNum;
    (((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->RenderDataIdentifier).
    SubResourceName.Data.ArrayMax = iVar6;
    if (pFVar3 != pFVar2) {
      iVar6 = (((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->RenderDataIdentifier).
              CameraName.Data.ArrayNum;
      piVar1 = &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->RenderDataIdentifier).
                CameraName.Data.ArrayMax;
      pFVar9 = (pFVar2->Data).AllocatorInstance.Data;
      iVar7 = *piVar1;
      (((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->RenderDataIdentifier).CameraName
      .Data.ArrayNum = iVar6;
      if ((iVar6 == 0) && (iVar7 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar6,iVar7,(ForAnyElementType *)pFVar3,iVar6,piVar1);
        ConstructItems<TObjectPtr<UMovieGraphSubgraphNode_const_>,TObjectPtr<UMovieGraphSubgraphNode_const_>,int>
                  ((pFVar3->Data).AllocatorInstance.Data,
                   (TObjectPtr<UMovieGraphSubgraphNode_const_> *)pFVar9,iVar6);
      }
    }
    *(char *)&(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).OutputFrameNumber
         = (char)(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->Time).
                 OutputFrameNumber;
    plVar10 = *(longlong **)
               &(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->Time).
                RenderedFrameNumber;
    plVar11 = *(longlong **)
               &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).
                RenderedFrameNumber;
    if (plVar11 != plVar10) {
      *(longlong **)
       &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).RenderedFrameNumber =
           plVar10;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 8))(plVar10,local_res18);
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    pfVar4 = &(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->Time).WorldSeconds;
    pfVar5 = &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).WorldSeconds;
    (((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).WorldTimeDilation =
         (((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->Time).WorldTimeDilation;
    if (pfVar5 != pfVar4) {
      iVar6 = (((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->Time).FrameRate.
              Numerator;
      piVar1 = &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).FrameRate.
                Denominator;
      pTVar12 = *(TSubclassOf<UMovieGraphSettingNode> **)pfVar4;
      iVar7 = *piVar1;
      (((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).FrameRate.Numerator =
           iVar6;
      if ((iVar6 == 0) && (iVar7 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar6,iVar7,(ForAnyElementType *)pfVar5,iVar6,piVar1);
        ConstructItems<TSubclassOf<UMovieGraphSettingNode>,TSubclassOf<UMovieGraphSettingNode>,int>
                  (*(void **)pfVar5,pTVar12,iVar6);
      }
    }
    param_1 = &(((FMovieGraphTraversalContext *)((longlong)param_1 + 0xe8))->Time).
               TemporalSampleIndex;
    param_2 = &(((FMovieGraphTraversalContext *)((longlong)param_2 + 0xe8))->Time).
               TemporalSampleIndex;
  }
  return true;
}

// Construct<FMovieGraphEvaluationContext_VisitedNodeInfo> @ 14dc67800

void __cdecl
UE::CoreUObject::Private::Construct<FMovieGraphEvaluationContext_VisitedNodeInfo>(void *param_1)

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

// ConstructForTests<FMovieGraphEvaluationContext_VisitedNodeInfo> @ 14dc67850

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluationContext_VisitedNodeInfo>
          (void *param_1)

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

// Destruct<FMovieGraphEvaluationContext_VisitedNodeInfo> @ 14dc67890

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieGraphEvaluationContext_VisitedNodeInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMovieGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FMovieGraphEvaluationContext_VisitedNodeInfo> @ 14dc678d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphEvaluationContext_VisitedNodeInfo>
          (void *param_1,void *param_2,int param_3)

{
  TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
      ::operator=(this,(TSet<TObjectPtr<UMovieGraphNode>,DefaultKeyFuncs<TObjectPtr<UMovieGraphNode>,0>,FDefaultSetAllocator>
                        *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphEvaluatedBranchConfig> @ 14dc67ba0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphEvaluatedBranchConfig>(void *param_1)

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

// ConstructForTests<FMovieGraphEvaluatedBranchConfig> @ 14dc67be0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluatedBranchConfig>(void *param_1)

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

// Destruct<FMovieGraphEvaluatedBranchConfig> @ 14dc67c50

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphEvaluatedBranchConfig>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FMovieGraphEvaluatedBranchConfig> @ 14dc67ca0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphEvaluatedBranchConfig>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      if (this != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)(this + 1),(int *)&this[1].field_0x10,
                   (ForElementType<FSetElementId> *)(pTVar1 + 1),*(int *)&pTVar1[1].field_0x10);
        TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=(this,pTVar1);
      }
      param_3 = param_3 + -1;
      this = (TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this[1].field_0x18;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphEvaluatedSettingsStack> @ 14dc68080

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphEvaluatedSettingsStack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMovieGraphEvaluatedSettingsStack> @ 14dc68090

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluatedSettingsStack>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMovieGraphEvaluatedSettingsStack> @ 14dc680a0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphEvaluatedSettingsStack>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FMovieGraphEvaluatedSettingsStack> @ 14dc68100

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphEvaluatedSettingsStack>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<TObjectPtr<UMovieGraphNode>,TObjectPtr<UMovieGraphNode>,int>
                    (pFVar6->Data,(TObjectPtr<UMovieGraphNode> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphRenderOutputData> @ 14dc69890

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphRenderOutputData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FMovieGraphRenderOutputData> @ 14dc698d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphRenderOutputData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FMovieGraphRenderOutputData> @ 14dc69910

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphRenderOutputData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FMovieGraphRenderOutputData> @ 14dc699d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphRenderOutputData>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar1);
      TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                   *)(puVar1 + 1),
                  (TSet<TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData,0>,FDefaultSetAllocator>
                   *)((longlong)puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0xb;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphRenderLayerOutputData> @ 14dc69cb0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphRenderLayerOutputData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  return;
}

// ConstructForTests<FMovieGraphRenderLayerOutputData> @ 14dc69d00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphRenderLayerOutputData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FMovieGraphRenderLayerOutputData> @ 14dc69d50

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphRenderLayerOutputData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x10),*(int *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FMovieGraphRenderLayerOutputData> @ 14dc69db0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphRenderLayerOutputData>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    if ((TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0x20) !=
        (TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0x20)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
                  ArrayNum,
                 &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60))->
                  ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50))->
                  ArrayNum,
                 ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x60))->
                 ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x20),
                  (TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x20));
    }
    pTVar1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70);
    param_2 = &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70))->ArrayNum
    ;
    *(undefined4 *)
     &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))->
      AllocatorInstance).Data = *(undefined4 *)&(pTVar1->AllocatorInstance).Data;
    param_1 = &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))->ArrayNum
    ;
  }
  return true;
}

// Construct<FMovieGraphStringArray> @ 14dc69ff0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphStringArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMovieGraphStringArray> @ 14dc6a000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphStringArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMovieGraphStringArray> @ 14dc6a050

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphStringArray>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMovieGraphStringArray> @ 14dc6a090

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphStringArray>(void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphRenderDataIdentifier> @ 14dc6a600

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphRenderDataIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// Decay<TObjectPtr<UMovieGraphValueContainer>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UMovieGraphValueContainer>_>,UMovieGraphValueContainer_*> @ 14dc6c680

UMovieGraphValueContainer ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UMovieGraphValueContainer>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UMovieGraphValueContainer>_>,UMovieGraphValueContainer_*>
          (TObjectPtr<UMovieGraphValueContainer> *param_1)

{
  return (UMovieGraphValueContainer **)param_1;
}

// Construct<FMovieGraphPinProperties> @ 14dc98dc0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphPinProperties>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 5;
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 1;
  return;
}

// ConstructForTests<FMovieGraphPinProperties> @ 14dc98de0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphPinProperties>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 5;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x1000001;
  return;
}

// Destruct<FMovieGraphPinProperties> @ 14dc98e00

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphPinProperties>(void *param_1)

{
  return;
}

// Copy<FMovieGraphPinProperties> @ 14dc98e10

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphPinProperties>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)((longlong)pvVar1 + 8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x10));
      }
      puVar2[2] = *(undefined8 *)((longlong)pvVar1 + 0x10);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar1 + 0x18);
      *(undefined1 *)((longlong)puVar2 + 0x19) = *(undefined1 *)((longlong)pvVar1 + 0x19);
      *(undefined1 *)((longlong)puVar2 + 0x1a) = *(undefined1 *)((longlong)pvVar1 + 0x1a);
      *(undefined1 *)((longlong)puVar2 + 0x1b) = *(undefined1 *)((longlong)pvVar1 + 0x1b);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x20);
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphEvaluationResult> @ 14dc995e0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphEvaluationResult>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// ConstructForTests<FMovieGraphEvaluationResult> @ 14dc99660

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphEvaluationResult>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FMovieGraphEvaluationResult> @ 14dc996d0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphEvaluationResult>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FMovieGraphEvaluationResult> @ 14dc99730

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphEvaluationResult>(void *param_1,void *param_2,int param_3)

{
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *pTVar1;
  TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>::operator=
                (this,pTVar1);
      TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                   *)(this + 1),
                  (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
                   *)(pTVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphTokenResolveContext> @ 14dc998f0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphTokenResolveContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMovieGraphTokenResolveContext> @ 14dc99900

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphTokenResolveContext>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMovieGraphTokenResolveContext> @ 14dc99910

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphTokenResolveContext>(void *param_1)

{
  return;
}

// Copy<FMovieGraphTokenResolveContext> @ 14dc99a20

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphTokenResolveContext>
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
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphPropertyInfo> @ 14dc99d90

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphPropertyInfo>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FMovieGraphPropertyInfo> @ 14dc99df0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphPropertyInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  FText::FText((FText *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined2 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FMovieGraphPropertyInfo> @ 14dc99e30

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphPropertyInfo>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc99e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x10))();
    return;
  }
  return;
}

// Copy<FMovieGraphPropertyInfo> @ 14dc99f10

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphPropertyInfo>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  UObject *pUVar3;
  longlong lVar4;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar4 + (longlong)param_1);
      plVar1 = *(longlong **)((longlong)param_1 + lVar4 + 8);
      plVar2 = *(longlong **)((longlong)param_1 + 8);
      if (plVar2 != plVar1) {
        *(longlong **)((longlong)param_1 + 8) = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar4 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x18);
      *(undefined1 *)((longlong)param_1 + 0x20) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x21);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = *(UObject **)((longlong)param_1 + lVar4 + 0x28), pUVar3 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar3);
      }
      *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_1 + lVar4 + 0x28);
      *(undefined1 *)((longlong)param_1 + 0x30) = *(undefined1 *)((longlong)param_1 + lVar4 + 0x30);
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x38);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphActorQueryEntry> @ 14dc9a2d0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphActorQueryEntry>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FMovieGraphActorQueryEntry> @ 14dc9a320

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphActorQueryEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  (((FUtf8String *)((longlong)param_1 + 0x18))->Data).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FUtf8String::Reset((FUtf8String *)((longlong)param_1 + 0x18),0);
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FMovieGraphActorQueryEntry> @ 14dc9a370

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphActorQueryEntry>(void *param_1)

{
  DestructItems<TSoftObjectPtr<UActorComponent>,int>
            (*(TSoftObjectPtr<UActorComponent> **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FMovieGraphActorQueryEntry> @ 14dc9a440

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphActorQueryEntry>(void *param_1,void *param_2,int param_3)

{
  TPersistentObjectPtr<FSoftObjectPath> *pTVar1;
  uint *puVar2;
  TPersistentObjectPtr<FSoftObjectPath> *pTVar3;
  uint uVar4;
  uint uVar5;
  FWeakObjectPtr FVar6;
  TPersistentObjectPtr<FSoftObjectPath> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar3 = (TPersistentObjectPtr<FSoftObjectPath> *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TPersistentObjectPtr<FSoftObjectPath>::operator=(this,pTVar3);
      pTVar1 = this + 1;
      if (pTVar1 != pTVar3 + 1) {
        DestructItems<TSoftObjectPtr<UActorComponent>,int>
                  ((TSoftObjectPtr<UActorComponent> *)pTVar1->WeakPtr,
                   this[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value);
        uVar4 = pTVar3[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value;
        puVar2 = &this[1].ObjectID.AssetPath.PackageName.Number;
        FVar6 = pTVar3[1].WeakPtr;
        uVar5 = *puVar2;
        this[1].ObjectID.AssetPath.PackageName.ComparisonIndex.Value = uVar4;
        if ((uVar4 == 0) && (uVar5 == 0)) {
          *puVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,uVar4,uVar5,(ForAnyElementType *)pTVar1,uVar4,(int *)puVar2);
          ConstructItems<TSoftObjectPtr<UActorComponent>,TSoftObjectPtr<UActorComponent>,int>
                    ((void *)pTVar1->WeakPtr,(TSoftObjectPtr<UActorComponent> *)FVar6,uVar4);
        }
      }
      param_3 = param_3 + -1;
      this = (TPersistentObjectPtr<FSoftObjectPath> *)&this[1].ObjectID.AssetPath.AssetName;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphFilenameResolveParams> @ 14dc9a710

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphFilenameResolveParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x150) = 1;
  return;
}

// ConstructForTests<FMovieGraphFilenameResolveParams> @ 14dc9a720

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphFilenameResolveParams>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc0) = 1;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  *(undefined4 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x150) = 1;
  return;
}

// Destruct<FMovieGraphFilenameResolveParams> @ 14dc9a740

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphFilenameResolveParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  if (*(void **)((longlong)param_1 + 0x120) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x120));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xe0));
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x58));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FMovieGraphFilenameResolveParams> @ 14dc9a840

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphFilenameResolveParams>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      ::FString::operator=((FString *)(puVar2 + 1),(FString *)((longlong)pvVar1 + 8));
      ::FString::operator=((FString *)(puVar2 + 3),(FString *)((longlong)pvVar1 + 0x18));
      ::FString::operator=((FString *)(puVar2 + 5),(FString *)((longlong)pvVar1 + 0x28));
      ::FString::operator=((FString *)(puVar2 + 7),(FString *)((longlong)pvVar1 + 0x38));
      *(undefined4 *)(puVar2 + 9) = *(undefined4 *)((longlong)pvVar1 + 0x48);
      *(undefined4 *)((longlong)puVar2 + 0x4c) = *(undefined4 *)((longlong)pvVar1 + 0x4c);
      *(undefined4 *)(puVar2 + 10) = *(undefined4 *)((longlong)pvVar1 + 0x50);
      *(undefined4 *)((longlong)puVar2 + 0x54) = *(undefined4 *)((longlong)pvVar1 + 0x54);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(puVar2 + 0xb),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)pvVar1 + 0x58));
      *(undefined4 *)(puVar2 + 0x15) = *(undefined4 *)((longlong)pvVar1 + 0xa8);
      *(undefined1 *)((longlong)puVar2 + 0xac) = *(undefined1 *)((longlong)pvVar1 + 0xac);
      ::FString::operator=((FString *)(puVar2 + 0x16),(FString *)((longlong)pvVar1 + 0xb0));
      *(undefined1 *)(puVar2 + 0x18) = *(undefined1 *)((longlong)pvVar1 + 0xc0);
      puVar2[0x19] = *(undefined8 *)((longlong)pvVar1 + 200);
      puVar2[0x1a] = *(undefined8 *)((longlong)pvVar1 + 0xd0);
      *(undefined4 *)(puVar2 + 0x1b) = *(undefined4 *)((longlong)pvVar1 + 0xd8);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(puVar2 + 0x1c),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)pvVar1 + 0xe0));
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x130) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x130));
      }
      puVar2[0x26] = *(undefined8 *)((longlong)pvVar1 + 0x130);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x138) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x138));
      }
      puVar2[0x27] = *(undefined8 *)((longlong)pvVar1 + 0x138);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x140) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x140));
      }
      puVar2[0x28] = *(undefined8 *)((longlong)pvVar1 + 0x140);
      *(undefined4 *)(puVar2 + 0x29) = *(undefined4 *)((longlong)pvVar1 + 0x148);
      *(undefined8 *)((longlong)puVar2 + 0x14c) = *(undefined8 *)((longlong)pvVar1 + 0x14c);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x158);
      puVar2 = puVar2 + 0x2b;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphResolveArgs> @ 14dc9ae10

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphResolveArgs>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  return;
}

// ConstructForTests<FMovieGraphResolveArgs> @ 14dc9ae90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphResolveArgs>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FMovieGraphResolveArgs> @ 14dc9af40

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphResolveArgs>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
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

// Copy<FMovieGraphResolveArgs> @ 14dc9b060

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphResolveArgs>(void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar1;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pTVar1 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=(this,pTVar1);
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=(this + 1,pTVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphInitConfig> @ 14dc9dca0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphInitConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pUVar1 = UMovieGraphDefaultRenderer::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)param_1 = pUVar1;
  pUVar1 = UMovieGraphSequenceDataSource::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 8) = pUVar1;
  pUVar1 = UMovieGraphDefaultAudioRenderer::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x10) = pUVar1;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMovieGraphInitConfig> @ 14dc9dcb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphInitConfig>(void *param_1)

{
  UClass *pUVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  pUVar1 = UMovieGraphDefaultRenderer::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)param_1 = pUVar1;
  pUVar1 = UMovieGraphSequenceDataSource::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 8) = pUVar1;
  pUVar1 = UMovieGraphDefaultAudioRenderer::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(UClass **)((longlong)param_1 + 0x10) = pUVar1;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMovieGraphInitConfig> @ 14dc9dcc0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphInitConfig>(void *param_1)

{
  return;
}

// Copy<FMovieGraphInitConfig> @ 14dc9dcd0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphInitConfig>(void *param_1,void *param_2,int param_3)

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
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[1]);
      }
      puVar2[1] = puVar1[1];
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar1[2] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar1[2]);
      }
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphImagePreviewData> @ 14dc9e710

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphImagePreviewData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FMovieGraphImagePreviewData> @ 14dc9e790

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieGraphImagePreviewData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FMovieGraphImagePreviewData> @ 14dc9e810

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphImagePreviewData>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FMovieGraphImagePreviewData> @ 14dc9e880

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphImagePreviewData>(void *param_1,void *param_2,int param_3)

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
      ::FString::operator=((FString *)(puVar2 + 2),(FString *)(puVar1 + 2));
      ::FString::operator=((FString *)(puVar2 + 4),(FString *)(puVar1 + 4));
      ::FString::operator=((FString *)(puVar2 + 6),(FString *)(puVar1 + 6));
      ::FString::operator=((FString *)(puVar2 + 8),(FString *)(puVar1 + 8));
      *(undefined1 *)(puVar2 + 10) = *(undefined1 *)(puVar1 + 10);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0xb;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>_>,TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_>_> @ 14dca0a50

TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Unsafe::
Decay<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_>_>,TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_>_>
          (TArray<TObjectPtr<UMovieGraphPin>,TSizedDefaultAllocator<32>_> *param_1)

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
      `TCheckedPointerIterator<TObjectPtr<UMovieGraphPin>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  return (TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *)param_1;
}

// Decay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_> @ 14dca0ab0

TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> * __cdecl
UE::Core::Private::Unsafe::
Decay<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>_>,TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<AActor>,DefaultKeyFuncs<TObjectPtr<AActor>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dca0b4d;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14dca0b4d:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)(*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dca0c50;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14dca0c50:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator> *)param_1;
}

// Decay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_> @ 14dca0cb0

TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> * __cdecl
UE::Core::Private::Unsafe::
Decay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
          (TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dca0d4d;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar7 = local_res10 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14dca0d4d:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar11);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar13;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
             (*pcVar4)();
    return pTVar8;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14dca0e50;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14dca0e50:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UActorComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar10) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
         param_1;
}

// DereferenceIfNecessary<UMovieGraphPipeline,UMovieGraphPipeline_*_&> @ 14dca11e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMovieGraphPipeline * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMovieGraphPipeline,UMovieGraphPipeline_*_&>
          (UMovieGraphPipeline **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMovieGraphSequenceDataSource,UMovieGraphSequenceDataSource_*_&> @ 14dca1200

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieGraphSequenceDataSource * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMovieGraphSequenceDataSource,UMovieGraphSequenceDataSource_*_&>
          (UMovieGraphSequenceDataSource **param_1)

{
  return *param_1;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_> @ 14dcac940

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_>
          (ushort param_1,ForElementType<TObjectPtr<UActorComponent>_> *param_2,int *param_3)

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
    if (uVar1 < 0x19) {
      iVar8 = 0x18;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x19) {
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TObjectPtr<UActorComponent>_>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_> @ 14dcaca10

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<TObjectPtr<UActorComponent>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TObjectPtr<UActorComponent>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x19) {
      iVar1 = 0x18;
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
    TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TObjectPtr<UActorComponent>_>::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// GetAudioDeviceFromWorldContext @ 14dccaa10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDevice * __cdecl UE::MovieGraph::Audio::GetAudioDeviceFromWorldContext(UObject *param_1)

{
  ENetMode EVar1;
  UWorld *this;
  FAudioDevice *pFVar2;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((this != (UWorld *)0x0) && (this->bAllowAudioPlayback != '\0')) {
    EVar1 = UWorld::InternalGetNetMode(this);
    if (EVar1 != NM_DedicatedServer) {
      pFVar2 = UWorld::GetAudioDeviceRaw(this);
      return pFVar2;
    }
  }
  return (FAudioDevice *)0x0;
}

// GetAudioMixerDeviceFromWorldContext @ 14dccaa70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMixerDevice * __cdecl UE::MovieGraph::Audio::GetAudioMixerDeviceFromWorldContext(UObject *param_1)

{
  ENetMode EVar1;
  UWorld *this;
  FMixerDevice *pFVar2;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((this != (UWorld *)0x0) && (this->bAllowAudioPlayback != '\0')) {
    EVar1 = UWorld::InternalGetNetMode(this);
    if (EVar1 != NM_DedicatedServer) {
      pFVar2 = (FMixerDevice *)UWorld::GetAudioDeviceRaw(this);
      return pFVar2;
    }
  }
  return (FMixerDevice *)0x0;
}

// GetTypeHash @ 14dcd3e80

uint __cdecl
UE::MovieGraph::DefaultRenderer::GetTypeHash(FMovieGraphImagePreviewDataPoolParams *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  TIntPoint<int>_u_0 local_68;
  undefined8 uStack_60;
  FMovieGraphRenderDataIdentifier local_58;
  
  local_58.RootBranchName = (param_1->Identifier).RootBranchName;
  ::FString::FString(&local_58.LayerName,&(param_1->Identifier).LayerName);
  ::FString::FString(&local_58.RendererName,&(param_1->Identifier).RendererName);
  ::FString::FString(&local_58.SubResourceName,&(param_1->Identifier).SubResourceName);
  ::FString::FString(&local_58.CameraName,&(param_1->Identifier).CameraName);
  uVar2 = ::GetTypeHash(&local_58);
  local_68._s_0 = *(TIntPoint<int>_u_0_s_0 *)&(param_1->RenderInitParams).Size.field0_0x0;
  uStack_60._0_4_ = (param_1->RenderInitParams).TargetGamma;
  uStack_60._4_1_ = (param_1->RenderInitParams).bForceLinearGamma;
  uStack_60._5_1_ = (param_1->RenderInitParams).PixelFormat;
  uStack_60._6_1_ = (param_1->RenderInitParams).bIncludeInPreviewWindow;
  uStack_60._7_1_ = (param_1->RenderInitParams).field_0xf;
  uVar3 = GetTypeHash((FRenderTargetInitParams *)&local_68._s_0);
  pFVar1 = (param_1->Identifier).CameraName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Identifier).SubResourceName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Identifier).RendererName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Identifier).LayerName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return uVar2 + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3;
}

// GetTypeHash @ 14dcd3f60

uint __cdecl UE::MovieGraph::DefaultRenderer::GetTypeHash(FRenderTargetInitParams *param_1)

{
  float fVar1;
  EPixelFormat EVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (param_1->Size).field0_0x0._s_0.Y;
  EVar2 = param_1->PixelFormat;
  bVar3 = param_1->bForceLinearGamma;
  fVar1 = param_1->TargetGamma;
  uVar6 = (param_1->Size).field0_0x0._s_0.X - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
  uVar7 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
  uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 0xc;
  uVar5 = (uVar4 - uVar6) - uVar7 ^ uVar6 << 0x10;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 5;
  uVar4 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
  uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
  uVar5 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf;
  return (uVar5 >> 2) + 0x9e3779b9 +
         (((uint)fVar1 >> 2) + 0x9e3779b9 +
          ((byte)(bVar3 >> 2) + 0x9e3779b9 +
           ((EVar2 >> 2) + 0x9e3779b9 + (uint)param_1->bIncludeInPreviewWindow + (uint)EVar2 * 0x40
           ^ (uint)EVar2) + (uint)bVar3 * 0x40 ^ (uint)bVar3) + (int)fVar1 * 0x40 ^ (uint)fVar1) +
         uVar5 * 0x40 ^ uVar5;
}

// GetUniqueName @ 14dcd40f0

FString * __cdecl
UE::MovieGraph::GetUniqueName
          (FString *__return_storage_ptr__,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  bool bVar7;
  FString local_98;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_88;
  FString local_78;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  
  iVar6 = 0;
  ::FString::FString(__return_storage_ptr__,param_2);
LAB_14dcd4130:
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar5 = pFVar3 + (longlong)param_1->ArrayNum * 0x10;
  do {
    if (pFVar3 == pFVar5) {
      return __return_storage_ptr__;
    }
    iVar2 = *(int *)(pFVar3 + 8);
    iVar1 = (__return_storage_ptr__->Data).ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) break;
      iVar2 = FGenericPlatformStricmp::Stricmp
                        (*(wchar_t **)pFVar3,
                         (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data);
      bVar7 = iVar2 == 0;
    }
    else {
      bVar7 = iVar2 + iVar1 == 1;
    }
    if (bVar7) break;
    pFVar3 = pFVar3 + 0x10;
  } while( true );
  local_78.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar4 = (longlong)local_78.Data.ArrayNum;
  iVar6 = iVar6 + 1;
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pFVar3,lVar4 * 2);
  }
  FStringFormatArg::FStringFormatArg(&local_68,&local_78);
  FStringFormatArg::FStringFormatArg(&local_48,iVar6);
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 2;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_88.AllocatorInstance,2,&local_88.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_88.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl(&local_98,L"{0} {1}",&local_88);
  if (__return_storage_ptr__ != &local_98) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_98.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_98.Data.ArrayMax;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
  if ((FStringFormatArg *)local_88.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  goto LAB_14dcd4130;
}

// GetValueTypeFromProperty @ 14dcd5000

EMovieGraphValueType __cdecl
UE::MovieGraph::Private::GetValueTypeFromProperty
          (FProperty *param_1,TObjectPtr<UObject_const_> *param_2)

{
  longlong lVar1;
  UObject *pUVar2;
  
  do {
    if (param_1 == (FProperty *)0x0) {
      return None;
    }
    lVar1 = param_1->_padding_;
    if ((*(uint *)(lVar1 + 0x18) >> 0x11 & 1) != 0) {
      return Bool;
    }
    if ((*(byte *)(lVar1 + 0x18) & 0x40) != 0) {
      lVar1 = (**(code **)(param_1->_padding_ + 0x1e0))(param_1);
      if (lVar1 == 0) {
        return Byte;
      }
      pUVar2 = (UObject *)param_1[1]._padding_;
LAB_14dcd5127:
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      (param_2->field0_0x0).DebugPtr = pUVar2;
      return Enum;
    }
    if ((*(byte *)(lVar1 + 0x18) & 0x80) != 0) {
      return Int32;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0x16 & 1) != 0) {
      return Int64;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 8 & 1) != 0) {
      return Float;
    }
    if ((*(ulonglong *)(lVar1 + 0x18) & 0x100000000) != 0) {
      return Double;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0xd & 1) != 0) {
      return Name;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0xe & 1) != 0) {
      return String;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0x1e & 1) != 0) {
      return Text;
    }
    if ((*(ulonglong *)(lVar1 + 0x18) & 0x1000000000000) != 0) {
      pUVar2 = (UObject *)param_1[1]._padding_;
      goto LAB_14dcd5127;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0x14 & 1) != 0) {
      pUVar2 = (UObject *)param_1[1]._padding_;
      if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      (param_2->field0_0x0).DebugPtr = pUVar2;
      return Struct;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0x10 & 1) != 0) {
      pUVar2 = (UObject *)param_1[1]._padding_;
      if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      (param_2->field0_0x0).DebugPtr = pUVar2;
      return Object;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0x1d & 1) != 0) {
      pUVar2 = (UObject *)param_1[1]._padding_;
      if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      (param_2->field0_0x0).DebugPtr = pUVar2;
      return SoftObject;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 10 & 1) != 0) {
      pUVar2 = (UObject *)param_1[1]._padding_;
      if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      (param_2->field0_0x0).DebugPtr = pUVar2;
      return Class;
    }
    if ((*(ulonglong *)(lVar1 + 0x18) & 0x200000000) != 0) {
      pUVar2 = (UObject *)param_1[1]._padding_;
      if ((GC::GIsIncrementalReachabilityPending) && (pUVar2 != (UObject *)0x0)) {
        GC::MarkAsReachable(pUVar2);
      }
      (param_2->field0_0x0).DebugPtr = pUVar2;
      return SoftClass;
    }
    if ((*(uint *)(lVar1 + 0x18) >> 0x15 & 1) == 0) {
      return None;
    }
    param_1 = (FProperty *)param_1[1]._padding_;
  } while( true );
}

// IsMoviePipelineAudioOutputSupported @ 14dcd7430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UE::MovieGraph::Audio::IsMoviePipelineAudioOutputSupported(UObject *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  char cVar2;
  bool bVar3;
  ENetMode EVar4;
  UWorld *this;
  FAudioDevice *pFVar5;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if ((this != (UWorld *)0x0) && (this->bAllowAudioPlayback != '\0')) {
    EVar4 = UWorld::InternalGetNetMode(this);
    if (EVar4 != NM_DedicatedServer) {
      pFVar5 = UWorld::GetAudioDeviceRaw(this);
      if ((pFVar5 != (FAudioDevice *)0x0) &&
         (pTVar1 = pFVar5[1].ReverbPluginInterface.SharedReferenceCount.ReferenceController,
         pTVar1 != (TReferenceControllerBase<1> *)0x0)) {
        cVar2 = (**(code **)(pTVar1->_padding_ + 0xf8))();
        if (cVar2 != '\0') {
          return true;
        }
      }
    }
  }
  bVar3 = FAudioThread::IsUsingThreadedAudio();
  return !bVar3;
}

// ResolveConnectedPinValue @ 14dce0c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::MovieGraph::ResolveConnectedPinValue
          (UMovieGraphPin *param_1,TArray<UMovieGraphPin_*,TSizedDefaultAllocator<32>_> *param_2,
          FMovieGraphEvaluationContext *param_3,FString *param_4)

{
  int *piVar1;
  EMovieGraphValueType EVar2;
  EMovieGraphValueType EVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  UMovieGraphNode *pUVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  UMovieGraphPin *pUVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStackY_298 [32];
  UMovieGraphPin *local_248;
  ForAnyElementType local_240;
  undefined8 local_238;
  ForAnyElementType local_230;
  int local_228;
  int local_224;
  UMovieGraphPin *local_220;
  FString local_218;
  UMovieGraphPin **local_208;
  FName local_200;
  FString local_1f8;
  void *local_1e8 [2];
  FString local_1d8;
  FMovieGraphTraversalContext local_1c8;
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e0;
  void *local_a0;
  undefined4 local_98;
  UMovieGraphPin *local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined1 local_78;
  FText local_70;
  void *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_240.Data = (FScriptContainerElement *)0x0;
  local_238 = 0;
  local_220 = param_1;
  FMovieGraphTraversalContext::FMovieGraphTraversalContext(&local_1c8);
  local_e0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_e0._48_8_ = _UNK_150631d98;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  local_e0._32_8_ = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (UMovieGraphPin *)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78 = 0;
  FText::FText(&local_70);
  pUVar10 = local_220;
  local_60 = (void *)0x0;
  local_58 = 0;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_220 != (UMovieGraphPin *)0x0)) {
    GC::MarkAsReachable((UObject *)local_220);
  }
  local_90 = pUVar10;
  if ((TArray<TObjectPtr<UMovieGraphSubgraphNode_const_>,TSizedDefaultAllocator<32>_> *)&local_88 !=
      &param_3->SubgraphStack) {
    iVar12 = (param_3->SubgraphStack).ArrayNum;
    pFVar5 = (param_3->SubgraphStack).AllocatorInstance.Data;
    local_80 = CONCAT44(local_80._4_4_,iVar12);
    if ((iVar12 == 0) && (local_80._4_4_ == 0)) {
      local_80 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar12,local_80._4_4_,&local_88,iVar12,(int *)((longlong)&local_80 + 4));
      ConstructItems<TObjectPtr<UMovieGraphSubgraphNode_const_>,TObjectPtr<UMovieGraphSubgraphNode_const_>,int>
                (local_88.Data,(TObjectPtr<UMovieGraphSubgraphNode_const_> *)pFVar5,iVar12);
    }
  }
  local_228 = param_2->ArrayNum;
  lVar17 = (longlong)local_228;
  pFVar5 = (param_2->AllocatorInstance).Data;
  local_230.Data = (FScriptContainerElement *)0x0;
  if (local_228 == 0) {
    local_224 = 0;
    iVar12 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_228,0,&local_230,local_228,&local_224);
    memcpy(local_230.Data,pFVar5,lVar17 << 3);
    iVar12 = local_228;
  }
  bVar19 = iVar12 == 0;
  if (!bVar19) {
    do {
      if ((bVar19 || iVar12 < 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      local_248 = *(UMovieGraphPin **)local_230.Data;
      if (local_248 == (UMovieGraphPin *)0x0) {
        local_208 = &local_220;
        bVar19 = `UE::MovieGraph::ResolveConnectedPinValue'::__l5::<lambda_1>::operator()
                           (&local_208);
        if (!bVar19) break;
      }
      uVar18 = (ulonglong)(int)local_238;
      for (FVar14.Data = local_240.Data; FVar14.Data != local_240.Data + uVar18 * 8;
          FVar14.Data = FVar14.Data + 8) {
        if (*(UMovieGraphPin **)FVar14.Data == local_248) {
          if ((byte)LogMovieRenderPipeline._0_1_ < 3) goto LAB_14dce10d6;
          local_200 = (FName)((local_220->Node).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_200,&local_1f8);
          ::FName::ToString(&(local_248->Properties).Label,&local_1d8);
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
          if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
          }
          goto LAB_14dce10d1;
        }
      }
      EVar2 = (local_220->Properties).Type;
      if ((EVar2 == Float) || (EVar2 == Double)) {
        bVar19 = true;
      }
      else {
        bVar19 = false;
      }
      EVar3 = (local_248->Properties).Type;
      if ((EVar3 == Float) || (EVar3 == Double)) {
        bVar9 = true;
      }
      else {
        bVar9 = false;
      }
      if ((((EVar2 == EVar3) || ((bVar19 && (bVar9)))) &&
          (pUVar6 = (local_248->Node).field0_0x0.DebugPtr, pUVar6 != (UMovieGraphNode *)0x0)) &&
         (pUVar6->bIsDisabled == 0)) {
        iVar12 = (int)local_238;
        if ((local_240.Data <= (FScriptContainerElement *)&local_248) &&
           ((FScriptContainerElement *)&local_248 < local_240.Data + (longlong)local_238._4_4_ * 8))
        {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar19) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          iVar12 = (int)local_238;
        }
        if (iVar12 == local_238._4_4_) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_240,(int *)((longlong)&local_238 + 4));
        }
        local_238 = CONCAT44(local_238._4_4_,iVar12 + 1);
        *(UMovieGraphPin **)(local_240.Data + (longlong)iVar12 * 8) = local_248;
      }
      pUVar10 = local_248;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_248 != (UMovieGraphPin *)0x0))
      {
        GC::MarkAsReachable((UObject *)local_248);
      }
      pUVar6 = (local_248->Node).field0_0x0.DebugPtr;
      local_90 = pUVar10;
      pFVar15 = (ForAnyElementType *)
                (**(code **)(pUVar6->_padding_ + 0x2f0))(pUVar6,local_1e8,&local_1c8);
      if (&local_230 != pFVar15) {
        if (local_230.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data);
        }
        local_230.Data = pFVar15->Data;
        pFVar15->Data = (FScriptContainerElement *)0x0;
        local_228 = *(int *)&pFVar15[1].Data;
        local_224 = *(int *)((longlong)&pFVar15[1].Data + 4);
        pFVar15[1].Data = (FScriptContainerElement *)0x0;
      }
      if (local_1e8[0] != (void *)0x0) {
        FMemory::Free(local_1e8[0]);
      }
      bVar19 = false;
      iVar12 = local_228;
      if (local_228 == 0) break;
    } while( true );
  }
LAB_14dce10d1:
  uVar18 = local_238 & 0xffffffff;
LAB_14dce10d6:
  uVar16 = (int)uVar18 - 1;
  if (-1 < (int)uVar16) {
    lVar17 = (longlong)(int)uVar16 * 8;
    while( true ) {
      uVar13 = 0;
      if ((int)uVar16 < (int)uVar18) {
        uVar13 = ~uVar16 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      plVar7 = *(longlong **)(*(longlong *)(local_240.Data + lVar17) + 0x28);
      (**(code **)(*plVar7 + 0x2c8))
                (plVar7,&local_218,*(longlong *)(local_240.Data + lVar17) + 0x30,param_3);
      FVar14.Data = local_218.Data.AllocatorInstance.Data;
      iVar12 = local_218.Data.ArrayNum;
      if (1 < iVar12) {
        if (param_4 != &local_218) {
          iVar4 = (param_4->Data).ArrayMax;
          piVar1 = &(param_4->Data).ArrayMax;
          (param_4->Data).ArrayNum = iVar12;
          if ((iVar12 == 0) && (iVar4 == 0)) {
            *piVar1 = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar12,iVar4,(ForAnyElementType *)param_4,iVar12,piVar1);
            if (iVar12 != 0) {
              memcpy((param_4->Data).AllocatorInstance.Data,FVar14.Data,(longlong)iVar12 * 2);
            }
          }
        }
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
        bVar19 = true;
        goto LAB_14dce11f4;
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      lVar17 = lVar17 + -8;
      uVar16 = uVar16 - 1;
      if ((int)uVar16 < 0) break;
      uVar18 = local_238 & 0xffffffff;
    }
  }
  bVar19 = false;
LAB_14dce11f4:
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_98 = 0;
  if (local_a0 != (void *)0x0) {
    FMemory::Free(local_a0);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e0);
  if (local_1c8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.RenderDataIdentifier.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_1c8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.RenderDataIdentifier.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_1c8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.RenderDataIdentifier.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_1c8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.RenderDataIdentifier.LayerName.Data.AllocatorInstance.Data);
  }
  if (local_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data);
  }
  return bVar19;
}

// Construct<FMovieGraphMetadataAttribute> @ 14dcf48e0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphMetadataAttribute>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMovieGraphMetadataAttribute> @ 14dcf4900

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphMetadataAttribute>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMovieGraphMetadataAttribute> @ 14dcf4960

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphMetadataAttribute>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMovieGraphMetadataAttribute> @ 14dcf49e0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphMetadataAttribute>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined1 *)((longlong)param_1 + 0x20) =
         *(undefined1 *)&(pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FMovieGraphSequencePlaybackRangeBound> @ 14dcf5f50

void __cdecl
UE::CoreUObject::Private::Construct<FMovieGraphSequencePlaybackRangeBound>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// ConstructForTests<FMovieGraphSequencePlaybackRangeBound> @ 14dcf5f70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphSequencePlaybackRangeBound>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FMovieGraphSequencePlaybackRangeBound> @ 14dcf5fd0

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieGraphSequencePlaybackRangeBound>(void *param_1)

{
  return;
}

// Copy<FMovieGraphSequencePlaybackRangeBound> @ 14dcf5fe0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphSequencePlaybackRangeBound>
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

// Construct<FMovieGraphVersioningSettings> @ 14dcf64f0

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphVersioningSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  return;
}

// ConstructForTests<FMovieGraphVersioningSettings> @ 14dcf6550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphVersioningSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  return;
}

// Destruct<FMovieGraphVersioningSettings> @ 14dcf6570

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphVersioningSettings>(void *param_1)

{
  return;
}

// Copy<FMovieGraphVersioningSettings> @ 14dcf6580

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphVersioningSettings>
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

// Decay<TObjectPtr<UClass>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UClass>_>,UClass_*> @ 14dcfc140

UClass ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UClass>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UClass>_>,UClass_*>
          (TObjectPtr<UClass> *param_1)

{
  return (UClass **)param_1;
}

// DereferenceIfNecessary<UMoviePipeline,UMoviePipeline_*_&> @ 14dcfc2f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipeline * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMoviePipeline,UMoviePipeline_*_&>
          (UMoviePipeline **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMoviePipelineCommandLineEncoder,UMoviePipelineCommandLineEncoder_*_&> @ 14dcfc310

UMoviePipelineCommandLineEncoder * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMoviePipelineCommandLineEncoder,UMoviePipelineCommandLineEncoder_*_&>
          (UMoviePipelineCommandLineEncoder **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMoviePipelineExecutorBase,UMoviePipelineExecutorBase_*_&> @ 14dcfc330

UMoviePipelineExecutorBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMoviePipelineExecutorBase,UMoviePipelineExecutorBase_*_&>
          (UMoviePipelineExecutorBase **param_1)

{
  return *param_1;
}

// GetOptionalValue<unsigned_char> @ 14dcfe9d0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<unsigned_char>
          (TValueOrError<unsigned_char,EPropertyBagResult> *param_1,uchar *param_2)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    uVar1 = (param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_char,TValueOrError<unsigned_char,EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_char,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = uVar1;
  }
  return bVar3;
}

// GetOptionalValue<int> @ 14dcfead0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<int>
          (TValueOrError<int,EPropertyBagResult> *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    iVar1 = (param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = iVar1;
  }
  return bVar3;
}

// GetOptionalValue<float> @ 14dcfebd0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<float>
          (TValueOrError<float,EPropertyBagResult> *param_1,float *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    fVar1 = (float)(param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = fVar1;
  }
  return bVar3;
}

// GetOptionalValue<double> @ 14dcfece0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<double>
          (TValueOrError<double,EPropertyBagResult> *param_1,double *param_2)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<float,float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    dVar1 = (double)(param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<double,TValueOrError<double,EPropertyBagResult>::FWrapErrorType,TValueOrError<double,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = dVar1;
  }
  return bVar3;
}

// GetOptionalValue<UClass_*> @ 14dcfedf0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<UClass_*>
          (TValueOrError<UClass_*,EPropertyBagResult> *param_1,UClass **param_2)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UClass*___ptr64,UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    pUVar1 = (UClass *)(param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UClass*___ptr64,TValueOrError<UClass*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UClass*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = pUVar1;
  }
  return bVar3;
}

// GetOptionalValue<UObject_*> @ 14dcfeef0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<UObject_*>
          (TValueOrError<UObject_*,EPropertyBagResult> *param_1,UObject **param_2)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UObject*___ptr64,UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    pUVar1 = (UObject *)(param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UObject*___ptr64,TValueOrError<UObject*___ptr64,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_UObject*___ptr64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = pUVar1;
  }
  return bVar3;
}

// GetOptionalValue<FStructView> @ 14dcfeff0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<FStructView>
          (TValueOrError<FStructView,EPropertyBagResult> *param_1,FStructView *param_2)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6 + 4) == '\0') {
    bVar4 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    pUVar2 = (UScriptStruct *)(param_1->Variant)._padding_;
    puVar3 = (uchar *)(param_1->Variant)._padding_;
    uVar6 = (ulonglong)(param_1->Variant).TypeIndex;
    if (2 < uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FStructView,TValueOrError<FStructView,EPropertyBagResult>::FWrapErrorType,TValueOrError<struct_FStructView,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar4 = true;
    param_2->ScriptStruct = pUVar2;
    param_2->StructMemory = puVar3;
  }
  return bVar4;
}

// GetOptionalValue<FName> @ 14dcff0f0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<FName>
          (TValueOrError<FName,EPropertyBagResult> *param_1,FName *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar6) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    bVar4 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    uVar6 = (ulonglong)(param_1->Variant).TypeIndex;
    uVar2 = *(undefined4 *)&(param_1->Variant).field_0x0;
    uVar3 = *(undefined4 *)&(param_1->Variant).field_0x4;
    if (2 < uVar6) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(param_1);
    bVar4 = true;
    (param_1->Variant).TypeIndex = '\x02';
    param_2->ComparisonIndex = (FNameEntryId)uVar2;
    param_2->Number = uVar3;
  }
  return bVar4;
}

// GetOptionalValue<FString> @ 14dcff1f0

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<FString>
          (TValueOrError<FString,EPropertyBagResult> *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FString local_28;
  
  uVar7 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar7) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FName,FName,TValueOrError<FName,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FName,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7 + 4) != '\0') {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pFVar8 = (FScriptContainerElement *)(param_1->Variant)._padding_;
    (param_1->Variant)._padding_ = 0;
    lVar4 = (param_1->Variant)._padding_;
    iVar1 = *(int *)((longlong)&(param_1->Variant)._padding_ + 4);
    (param_1->Variant)._padding_ = 0;
    uVar7 = (ulonglong)(param_1->Variant).TypeIndex;
    if (2 < uVar7) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FString,TValueOrError<FString,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FString,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    if (param_2 != &local_28) {
      pFVar2 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (param_2->Data).AllocatorInstance.Data = pFVar8;
      pFVar8 = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (int)lVar4;
      (param_2->Data).ArrayMax = iVar1;
    }
    if (pFVar8 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar8);
    }
    return true;
  }
  return false;
}

// GetOptionalValue<FText> @ 14dcff350

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<FText>
          (TValueOrError<FText,EPropertyBagResult> *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  FText local_18;
  
  uVar4 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FText,FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar2 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    FText::FText(&local_18,(FText *)param_1);
    uVar4 = (ulonglong)(param_1->Variant).TypeIndex;
    if (2 < uVar4) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FText,TValueOrError<FText,EPropertyBagResult>::FWrapErrorType,TValueOrError<class_FText,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar4])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    FText::operator=(param_2,&local_18);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    bVar2 = true;
  }
  return bVar2;
}

// GetOptionalValue<__int64> @ 14dcff470

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<__int64>
          (TValueOrError<__int64,EPropertyBagResult> *param_1,long64 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<int,int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5 + 4) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    lVar1 = (param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<__int64,TValueOrError<__int64,EPropertyBagResult>::FWrapErrorType,TValueOrError<__int64,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = lVar1;
  }
  return bVar3;
}

// GetOptionalValue<bool> @ 14dcff570

bool __cdecl
UE::MovieGraph::Private::GetOptionalValue<bool>
          (TValueOrError<bool,EPropertyBagResult> *param_1,bool *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<bool,bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) == '\0') {
    bVar3 = false;
  }
  else {
    if ((param_1->Variant).TypeIndex != '\0') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    bVar1 = (bool)(param_1->Variant)._padding_;
    if (2 < uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TValueOrError<bool,EPropertyBagResult>::FWrapErrorType,TValueOrError<bool,enum_EPropertyBagResult>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(param_1);
    (param_1->Variant).TypeIndex = '\x02';
    bVar3 = true;
    *param_2 = bVar1;
  }
  return bVar3;
}

// GetStructPtr<FLinearColor> @ 14dcff730

/* WARNING: Removing unreachable block (ram,0x00014dcff793) */

FLinearColor * __cdecl
UE::StructUtils::GetStructPtr<FLinearColor>(UScriptStruct *param_1,void *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  
  if ((param_2 != (void *)0x0) && (param_1 != (UScriptStruct *)0x0)) {
    pUVar2 = TBaseStructure<FLinearColor>::Get();
    if (param_1 == pUVar2) {
      return param_2;
    }
    pUVar2 = TBaseStructure<FLinearColor>::Get();
    if (pUVar2 != (UScriptStruct *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= (int)param_1->_padding_) &&
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        return param_2;
      }
      return (FLinearColor *)0x0;
    }
  }
  return (FLinearColor *)0x0;
}

// operator() @ 14dd10130

FMovieGraphPinProperties * __thiscall
`UE::MovieGraph::Private::MembersToPinProperties'::__l2::<lambda_2>::operator()
          (void *this,FMovieGraphPinProperties *__return_storage_ptr__,
          UMovieGraphInterfaceBase *param_1)

{
  void *_Src;
  EMovieGraphValueType EVar1;
  UObject *pUVar2;
  FName *pFVar3;
  int iVar4;
  longlong lVar5;
  FName local_res10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  pUVar2 = UMovieGraphValueContainer::GetValueTypeObject((UMovieGraphValueContainer *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  EVar1 = UMovieGraphValueContainer::GetValueType((UMovieGraphValueContainer *)param_1);
  local_30 = (int)param_1->_padding_;
  lVar5 = (longlong)local_30;
  _Src = (void *)param_1->_padding_;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar5 * 2);
  }
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = 0;
  }
  pFVar3 = ::FName::FName(&local_res10,iVar4,(wchar_t *)local_38.Data,FNAME_Add);
  __return_storage_ptr__->Label = *pFVar3;
  __return_storage_ptr__->Type = EVar1;
  (__return_storage_ptr__->TypeObject).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  __return_storage_ptr__->bAllowMultipleConnections = false;
  __return_storage_ptr__->bIsBranch = false;
  __return_storage_ptr__->bIsWildcard = false;
  __return_storage_ptr__->bIsBuiltIn = true;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  __return_storage_ptr__->bIsBranch = param_1->bIsBranch;
  return __return_storage_ptr__;
}

// GetErrorTexts @ 14dd25110

TArray<FText,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::GetErrorTexts(TArray<FText,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UObject *pUVar1;
  FText *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *this;
  FText *pFVar6;
  TArray<FText,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this = UMoviePipelineCommandLineEncoderSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  pUVar1 = (this->ClassDefaultObject).field0_0x0.DebugPtr;
  iVar8 = 0;
  iVar5 = *(int *)&pUVar1[1].field_0x18 + -1;
  if (*(int *)&pUVar1[1].field_0x18 == 0) {
    iVar5 = iVar8;
  }
  if (iVar5 == 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"MovieRenderPipeline",L"CommandLineEncode_MissingExecutable",
                        L"No encoder executable has been specified in the Project Settings. Please set an encoder executable in Project Settings > Movie Pipeline CLI Encoder"
                       );
    pFVar2 = (FText *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FText,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10
                          ),pFVar6);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  iVar5 = *(int *)&pUVar1[2].field_0x10 + -1;
  if (*(int *)&pUVar1[2].field_0x10 == 0) {
    iVar5 = iVar8;
  }
  if (iVar5 == 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"MovieRenderPipeline",L"CommandLineEncode_MissingVideoCodec",
                        L"No video encoding codec has been specified in the Project Settings. Please set an video codec in Project Settings > Movie Pipeline CLI Encoder"
                       );
    pFVar2 = (FText *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FText,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10
                          ),pFVar6);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  iVar5 = *(int *)&pUVar1[2].field_0x20 + -1;
  if (*(int *)&pUVar1[2].field_0x20 == 0) {
    iVar5 = iVar8;
  }
  if (iVar5 == 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"MovieRenderPipeline",L"CommandLineEncode_MissingAudioCodec",
                        L"No audio encoding codec has been specified in the Project Settings. Please set an audio codec in Project Settings > Movie Pipeline CLI Encoder"
                       );
    pFVar2 = (FText *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FText,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10
                          ),pFVar6);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  iVar5 = *(int *)&pUVar1[3].field_0x8 + -1;
  if (*(int *)&pUVar1[3].field_0x8 == 0) {
    iVar5 = iVar8;
  }
  if (iVar5 == 0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"MovieRenderPipeline",L"CommandLineEncode_MissingFileExtension",
                        L"No file extension has been specified in the Project Settings. Please set a file extension in Project Settings > Movie Pipeline CLI Encoder"
                       );
    pFVar2 = (FText *)(__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + __return_storage_ptr__->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FText,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    FText::FText((FText *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10
                          ),pFVar6);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// HasMultipleRenderPasses @ 14dd31ec0

bool __cdecl
UE::MoviePipeline::HasMultipleRenderPasses
          (TArray<FMoviePipelineShotOutputData,TSizedDefaultAllocator<32>_> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  wchar_t *pwVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  bVar9 = false;
  uVar2 = param_1->ArrayNum;
  uVar19 = (ulonglong)(int)uVar2;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar17 = pFVar13 + 0x28;
  pFVar15 = pFVar13 + uVar19 * 0x58;
  do {
    if (param_1->ArrayNum != (int)uVar19) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMoviePipelineShotOutputData_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar13 == pFVar15) {
      return bVar9;
    }
    uVar16 = *(uint *)(pFVar17 + 8);
    iVar21 = 0;
    iVar10 = 0;
    iVar18 = 0;
    uVar6 = 1;
    uVar7 = 0;
    if (uVar16 != 0) {
      pFVar20 = *(FScriptContainerElement **)pFVar17;
      if (*(FScriptContainerElement **)pFVar17 == (FScriptContainerElement *)0x0) {
        pFVar20 = pFVar17 + -0x10;
      }
      uVar7 = *(uint *)pFVar20;
      while (uVar7 == 0) {
        lVar8 = (longlong)iVar10;
        iVar18 = iVar18 + 0x20;
        iVar10 = iVar10 + 1;
        uVar7 = uVar16;
        if ((int)(((int)(uVar16 - 1) >> 0x1f & 0x1fU) + (uVar16 - 1)) >> 5 < iVar10)
        goto LAB_14dd31faf;
        uVar7 = *(uint *)(pFVar20 + (lVar8 + 1) * 4);
      }
      uVar6 = -uVar7 & uVar7;
      uVar19 = (ulonglong)uVar6 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar7 = iVar18 + -1 + (int)lVar8;
      if ((int)uVar16 < (int)uVar7) {
        uVar7 = uVar16;
      }
    }
LAB_14dd31faf:
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar17 + -0x10);
    uVar14 = uVar16 & 0xffffffe0;
    TStack_98._padding_ = CONCAT44(uVar6,iVar10);
    TStack_98.CurrentBitIndex = uVar7;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._28_4_ = local_54;
    TStack_98.BaseBitIndex = iVar18;
    uStack_78 = CONCAT44(uStack_a4,*(int *)(pFVar17 + -0x18) - *(int *)(pFVar17 + 0x14));
    iVar10 = (int)uVar16 >> 5;
    TStack_98.Array = pTVar1;
    if (((int)uVar16 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar7 = *(uint *)(pFVar17 + 8);
    if (uVar16 != uVar7) {
      pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar17;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar17 ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar11 = pTVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) &
               *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
      while (uVar16 == 0) {
        lVar8 = (longlong)iVar10;
        uVar14 = uVar14 + 0x20;
        iVar10 = iVar10 + 1;
        uVar16 = uVar7;
        if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar10)
        goto LAB_14dd320b0;
        uVar16 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar16 = (int)lVar8 + -1 + uVar14;
      if ((int)uVar7 < (int)uVar16) {
        uVar16 = uVar7;
      }
    }
LAB_14dd320b0:
    while( true ) {
      iVar10 = iVar21;
      if (*(int *)(pFVar17 + -0x18) - *(int *)(pFVar17 + 0x14) != (int)uStack_78) {
        local_res20[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if ((TStack_98.CurrentBitIndex == uVar16) && (TStack_98.Array == pTVar1)) break;
      if (*(int *)((longlong)TStack_98.CurrentBitIndex * 0x38 + 8 + *(longlong *)(pFVar17 + -0x20))
          == 0) {
        pwVar12 = L"";
      }
      else {
        pwVar12 = *(wchar_t **)
                   ((longlong)TStack_98.CurrentBitIndex * 0x38 + *(longlong *)(pFVar17 + -0x20));
      }
      iVar18 = FGenericPlatformStricmp::Stricmp(pwVar12,L"Audio");
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
      iVar21 = iVar10 + 1;
      if (iVar18 == 0) {
        iVar21 = iVar10;
      }
    }
    bVar9 = (bool)(bVar9 | 1 < iVar10);
    pFVar13 = pFVar13 + 0x58;
    uVar19 = (ulonglong)uVar2;
    pFVar17 = pFVar17 + 0x58;
  } while( true );
}

// MembersToPinProperties @ 14dd360f0

TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> * __cdecl
UE::MovieGraph::Private::MembersToPinProperties
          (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArray<UMovieGraphInterfaceBase_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMovieGraphPinProperties *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *pTVar7;
  FName *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FMovieGraphPinProperties local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMovieGraphInterfaceBase_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    if (*(UMovieGraphInterfaceBase **)pFVar9 != (UMovieGraphInterfaceBase *)0x0) {
      `UE::MovieGraph::Private::MembersToPinProperties'::__l2::<lambda_2>::operator()
                (local_res10,&local_48,*(UMovieGraphInterfaceBase **)pFVar9);
      pFVar3 = (FMovieGraphPinProperties *)(__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= &local_48) && (&local_48 < pFVar3 + __return_storage_ptr__->ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TArray<FMovieGraphPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar7;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar8 = (FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x20);
      *pFVar8 = local_48.Label;
      *(EMovieGraphValueType *)&pFVar8[1].ComparisonIndex.Value = local_48.Type;
      pFVar8[2] = (FName)local_48.TypeObject.field0_0x0;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (local_48.TypeObject.field0_0x0 != (TObjectPtr<UObject_const_>_u_0)0x0)) {
        GC::MarkAsReachable((UObject *)local_48.TypeObject.field0_0x0);
      }
      *(bool *)&pFVar8[3].ComparisonIndex.Value = local_48.bAllowMultipleConnections;
      *(bool *)((longlong)&pFVar8[3].ComparisonIndex.Value + 1) = local_48.bIsBranch;
      *(bool *)((longlong)&pFVar8[3].ComparisonIndex.Value + 2) = local_48.bIsWildcard;
      *(bool *)((longlong)&pFVar8[3].ComparisonIndex.Value + 3) = local_48.bIsBuiltIn;
    }
    pFVar9 = pFVar9 + 8;
  }
  return __return_storage_ptr__;
}

// Construct<FMovieGraphPostRenderSettings> @ 14dd5aaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::CoreUObject::Private::Construct<FMovieGraphPostRenderSettings>(void *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStackY_c8 [32];
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  ulonglong auStack_18 [2];
  
  auStack_18[0] = __security_cookie.value ^ (ulonglong)auStackY_c8;
  ::FString::FString(&FStack_88,L"EXR");
  ::FString::FString(&FStack_78,L"PNG");
  ::FString::FString(&FStack_68,L"JPEG");
  ::FString::FString(&FStack_58,L"MP4");
  ::FString::FString(&FStack_48,L"BMP");
  ::FString::FString(&FStack_38,L"MOV");
  ::FString::FString(&FStack_28,L"MXF");
  lVar3 = 7;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 7;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,7,0,param_1,7,(int *)((longlong)param_1 + 0xc));
  ConstructItems<FString,FString,int>(*(void **)param_1,&FStack_88,7);
  puVar2 = auStack_18;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FMovieGraphPostRenderSettings> @ 14dd5aab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphPostRenderSettings>(void *param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStackY_c8 [32];
  FString FStack_88;
  FString FStack_78;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  ulonglong auStack_18 [2];
  
  auStack_18[0] = __security_cookie.value ^ (ulonglong)auStackY_c8;
  ::FString::FString(&FStack_88,L"EXR");
  ::FString::FString(&FStack_78,L"PNG");
  ::FString::FString(&FStack_68,L"JPEG");
  ::FString::FString(&FStack_58,L"MP4");
  ::FString::FString(&FStack_48,L"BMP");
  ::FString::FString(&FStack_38,L"MOV");
  ::FString::FString(&FStack_28,L"MXF");
  lVar3 = 7;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 7;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,7,0,param_1,7,(int *)((longlong)param_1 + 0xc));
  ConstructItems<FString,FString,int>(*(void **)param_1,&FStack_88,7);
  puVar2 = auStack_18;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined2 *)((longlong)param_1 + 0x40) = 0;
  *(undefined2 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FMovieGraphPostRenderSettings> @ 14dd5aac0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieGraphPostRenderSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMovieGraphPostRenderSettings> @ 14dd5aad0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphPostRenderSettings>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    *(undefined1 *)
     &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->
      AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10))->
           AllocatorInstance).Data;
    *(char *)&((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10))->ArrayNum
         = (char)((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10))->
                 ArrayNum;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    *(undefined1 *)
     &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->
      AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))->
           AllocatorInstance).Data;
    *(undefined1 *)
     ((longlong)
      &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->
       AllocatorInstance).Data + 1) =
         *(undefined1 *)
          ((longlong)
           &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))->
            AllocatorInstance).Data + 1);
    *(char *)&((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->ArrayNum
         = (char)((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))->
                 ArrayNum;
    *(undefined1 *)
     ((longlong)
      &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x40))->ArrayNum + 1) =
         *(undefined1 *)
          ((longlong)
           &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x40))->ArrayNum +
          1);
    *(undefined1 *)
     &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
      AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50))->
           AllocatorInstance).Data;
    ::FString::operator=
              ((FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x50))->
                ArrayNum,
               (FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x50))->
                ArrayNum);
    ::FString::operator=
              ((FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x60))->
                ArrayNum,
               (FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x60))->
                ArrayNum);
    *(char *)&((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))->ArrayNum
         = (char)((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70))->
                 ArrayNum;
    *(undefined1 *)
     ((longlong)
      &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70))->ArrayNum + 1) =
         *(undefined1 *)
          ((longlong)
           &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70))->ArrayNum +
          1);
    *(undefined1 *)
     &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))->
      AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x80))->
           AllocatorInstance).Data;
    ::FString::operator=
              ((FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x80))->
                ArrayNum,
               (FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x80))->
                ArrayNum);
    ::FString::operator=
              ((FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x90))->
                ArrayNum,
               (FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x90))->
                ArrayNum);
    *(char *)&((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0))->ArrayNum
         = (char)((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0))->
                 ArrayNum;
    *(undefined1 *)
     ((longlong)
      &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xa0))->ArrayNum + 1) =
         *(undefined1 *)
          ((longlong)
           &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xa0))->ArrayNum +
          1);
    *(undefined1 *)
     &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0))->
      AllocatorInstance).Data =
         *(undefined1 *)
          &(((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xb0))->
           AllocatorInstance).Data;
    ::FString::operator=
              ((FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xb0))->
                ArrayNum,
               (FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xb0))->
                ArrayNum);
    ::FString::operator=
              ((FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xc0))->
                ArrayNum,
               (FString *)
               &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xc0))->
                ArrayNum);
    *(char *)&((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xd0))->ArrayNum
         = (char)((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xd0))->
                 ArrayNum;
    pTVar1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0xd0);
    param_2 = (void *)((longlong)param_2 + 0xe0);
    *(undefined1 *)
     ((longlong)
      &((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xd0))->ArrayNum + 1) =
         *(undefined1 *)((longlong)&pTVar1->ArrayNum + 1);
    param_1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0xe0);
  }
  return true;
}

// Construct<FMovieGraphPostRenderImageSequencePlayOptions> @ 14dd5b0e0

void __cdecl
UE::CoreUObject::Private::Construct<FMovieGraphPostRenderImageSequencePlayOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FMovieGraphPostRenderImageSequencePlayOptions> @ 14dd5b110

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphPostRenderImageSequencePlayOptions>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined2 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FMovieGraphPostRenderImageSequencePlayOptions> @ 14dd5b140

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieGraphPostRenderImageSequencePlayOptions>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMovieGraphPostRenderImageSequencePlayOptions> @ 14dd5b3c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphPostRenderImageSequencePlayOptions>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      ::FString::operator=((FString *)(puVar2 + 8),(FString *)((longlong)pvVar1 + 8));
      ::FString::operator=((FString *)(puVar2 + 0x18),(FString *)((longlong)pvVar1 + 0x18));
      puVar2[0x28] = *(undefined1 *)((longlong)pvVar1 + 0x28);
      puVar2[0x29] = *(undefined1 *)((longlong)pvVar1 + 0x29);
      puVar2[0x30] = *(undefined1 *)((longlong)pvVar1 + 0x30);
      puVar2[0x31] = *(undefined1 *)((longlong)pvVar1 + 0x31);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x38);
      puVar2 = puVar2 + 0x38;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieGraphPostRenderVideoPlayOptions> @ 14dd5b900

void __cdecl
UE::CoreUObject::Private::Construct<FMovieGraphPostRenderVideoPlayOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FMovieGraphPostRenderVideoPlayOptions> @ 14dd5b960

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieGraphPostRenderVideoPlayOptions>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FMovieGraphPostRenderVideoPlayOptions> @ 14dd5b980

void __cdecl
UE::CoreUObject::Private::Destruct<FMovieGraphPostRenderVideoPlayOptions>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FMovieGraphPostRenderVideoPlayOptions> @ 14dd5b9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieGraphPostRenderVideoPlayOptions>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = puVar2[(longlong)param_2 - (longlong)param_1];
      ::FString::operator=((FString *)(puVar2 + 8),(FString *)((longlong)pvVar1 + 8));
      ::FString::operator=((FString *)(puVar2 + 0x18),(FString *)((longlong)pvVar1 + 0x18));
      puVar2[0x28] = *(undefined1 *)((longlong)pvVar1 + 0x28);
      puVar2[0x29] = *(undefined1 *)((longlong)pvVar1 + 0x29);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x30);
      puVar2 = puVar2 + 0x30;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelineOutputData> @ 14dd5c950

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineOutputData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FMoviePipelineOutputData> @ 14dd5c980

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMoviePipelineOutputData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// Destruct<FMoviePipelineOutputData> @ 14dd5c9f0

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineOutputData>(void *param_1)

{
  DestructItems<FMovieGraphRenderOutputData,int>
            (*(FMovieGraphRenderOutputData **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FMoviePipelineShotOutputData,int>
            (*(FMoviePipelineShotOutputData **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
    return;
  }
  return;
}

// Copy<FMoviePipelineOutputData> @ 14dd5ca80

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineOutputData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  FMoviePipelineShotOutputData *pFVar5;
  FMovieGraphRenderOutputData *pFVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    do {
      puVar3 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar7);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar3);
      }
      *puVar7 = *puVar3;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)puVar3[1] != (UObject *)0x0)) {
        GC::MarkAsReachable((UObject *)puVar3[1]);
      }
      puVar7[1] = puVar3[1];
      pFVar1 = (ForAnyElementType *)(puVar7 + 3);
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar3 + 2);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 3)) {
        DestructItems<FMoviePipelineShotOutputData,int>
                  ((FMoviePipelineShotOutputData *)pFVar1->Data,*(int *)(puVar7 + 4));
        iVar4 = *(int *)(puVar3 + 4);
        piVar2 = (int *)((longlong)puVar7 + 0x24);
        pFVar5 = (FMoviePipelineShotOutputData *)((ForAnyElementType *)(puVar3 + 3))->Data;
        *(int *)(puVar7 + 4) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FMoviePipelineShotOutputData,FMoviePipelineShotOutputData,int>
                    (pFVar1->Data,pFVar5,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)(puVar7 + 5);
      if (pFVar1 != (ForAnyElementType *)(puVar3 + 5)) {
        DestructItems<FMovieGraphRenderOutputData,int>
                  ((FMovieGraphRenderOutputData *)pFVar1->Data,*(int *)(puVar7 + 6));
        iVar4 = *(int *)(puVar3 + 6);
        piVar2 = (int *)((longlong)puVar7 + 0x34);
        pFVar6 = (FMovieGraphRenderOutputData *)((ForAnyElementType *)(puVar3 + 5))->Data;
        *(int *)(puVar7 + 6) = iVar4;
        if ((iVar4 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar4,*piVar2,pFVar1,iVar4,piVar2);
          ConstructItems<FMovieGraphRenderOutputData,FMovieGraphRenderOutputData,int>
                    (pFVar1->Data,pFVar6,iVar4);
        }
      }
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 7;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelineShotOutputData> @ 14dd5d360

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineShotOutputData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FMoviePipelineShotOutputData> @ 14dd5d3a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMoviePipelineShotOutputData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FMoviePipelineShotOutputData> @ 14dd5d3e0

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineShotOutputData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FMoviePipelineShotOutputData> @ 14dd5d4a0

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineShotOutputData>
          (void *param_1,void *param_2,int param_3)

{
  TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pTVar1 = (TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)param_1 + lVar2 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if ((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)((longlong)param_1 + 8) != pTVar1) {
        Core::Private::
        CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                  ((ForElementType<FSetElementId> *)((longlong)param_1 + 0x40),
                   (int *)((longlong)param_1 + 0x50),
                   (ForElementType<FSetElementId> *)((longlong)param_1 + lVar2 + 0x40),
                   *(int *)((longlong)param_1 + lVar2 + 0x50));
        TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::operator=((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)((longlong)param_1 + 8),pTVar1);
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelineRenderPassOutputData> @ 14dd5d8d0

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineRenderPassOutputData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FMoviePipelineRenderPassOutputData> @ 14dd5d8e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMoviePipelineRenderPassOutputData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FMoviePipelineRenderPassOutputData> @ 14dd5d8f0

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineRenderPassOutputData>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMoviePipelineRenderPassOutputData> @ 14dd5d980

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineRenderPassOutputData>
          (void *param_1,void *param_2,int param_3)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (this,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelineFilenameResolveParams> @ 14dd5da20

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineFilenameResolveParams>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0xffffffff;
  return;
}

// ConstructForTests<FMoviePipelineFilenameResolveParams> @ 14dd5da30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMoviePipelineFilenameResolveParams>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x108) = 0xffffffff;
  return;
}

// Destruct<FMoviePipelineFilenameResolveParams> @ 14dd5da40

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineFilenameResolveParams>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
  if (*(void **)((longlong)param_1 + 0xd8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd8));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x98));
  *(undefined4 *)((longlong)param_1 + 0x90) = 0;
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x48));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  return;
}

// Copy<FMoviePipelineFilenameResolveParams> @ 14dd5db00

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineFilenameResolveParams>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      puVar2[1] = *(undefined4 *)((longlong)pvVar1 + 4);
      puVar2[2] = *(undefined4 *)((longlong)pvVar1 + 8);
      puVar2[3] = *(undefined4 *)((longlong)pvVar1 + 0xc);
      ::FString::operator=((FString *)(puVar2 + 4),(FString *)((longlong)pvVar1 + 0x10));
      ::FString::operator=((FString *)(puVar2 + 8),(FString *)((longlong)pvVar1 + 0x20));
      puVar2[0xc] = *(undefined4 *)((longlong)pvVar1 + 0x30);
      *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)((longlong)pvVar1 + 0x34);
      ::FString::operator=((FString *)(puVar2 + 0xe),(FString *)((longlong)pvVar1 + 0x38));
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(puVar2 + 0x12),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)pvVar1 + 0x48));
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)(puVar2 + 0x26),
                  (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                   *)((longlong)pvVar1 + 0x98));
      *(undefined8 *)(puVar2 + 0x3a) = *(undefined8 *)((longlong)pvVar1 + 0xe8);
      *(undefined8 *)(puVar2 + 0x3c) = *(undefined8 *)((longlong)pvVar1 + 0xf0);
      puVar2[0x3e] = *(undefined4 *)((longlong)pvVar1 + 0xf8);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x100) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x100));
      }
      *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)((longlong)pvVar1 + 0x100);
      puVar2[0x42] = *(undefined4 *)((longlong)pvVar1 + 0x108);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x110) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x110));
      }
      *(undefined8 *)(puVar2 + 0x44) = *(undefined8 *)((longlong)pvVar1 + 0x110);
      puVar2[0x46] = *(undefined4 *)((longlong)pvVar1 + 0x118);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x120);
      puVar2 = puVar2 + 0x48;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelineFormatArgs> @ 14dd5df60

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineFormatArgs>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// ConstructForTests<FMoviePipelineFormatArgs> @ 14dd5dfd0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMoviePipelineFormatArgs>(void *param_1)

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
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FMoviePipelineFormatArgs> @ 14dd5e040

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineFormatArgs>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x98) = 0;
  if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x90));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x50));
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

// Copy<FMoviePipelineFormatArgs> @ 14dd5e0b0

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineFormatArgs>(void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *pTVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=(param_1,param_2);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_1 + 0x50),
                (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)((longlong)param_2 + 0x50));
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)
         &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            *)((longlong)param_2 + 0xa0))->Elements != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)
                           &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                              *)((longlong)param_2 + 0xa0))->Elements);
    }
    pTVar1 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)((longlong)param_2 + 0xa0);
    param_2 = &(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)((longlong)param_2 + 0xa0))->Elements).field_0x8;
    *(undefined8 *)
     &((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        *)((longlong)param_1 + 0xa0))->Elements = *(undefined8 *)&pTVar1->Elements;
    param_1 = &(((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)((longlong)param_1 + 0xa0))->Elements).field_0x8;
  }
  return true;
}

// Construct<FMoviePipelineCameraCutInfo> @ 14dd5e4b0

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineCameraCutInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 60000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 1;
  *(undefined1 *)((longlong)param_1 + 0x80) = 2;
  *(undefined1 *)((longlong)param_1 + 0x88) = 2;
  *(undefined1 *)((longlong)param_1 + 0x90) = 2;
  *(undefined1 *)((longlong)param_1 + 0x98) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  return;
}

// ConstructForTests<FMoviePipelineCameraCutInfo> @ 14dd5e4c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMoviePipelineCameraCutInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 60000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 1;
  *(undefined1 *)((longlong)param_1 + 0x80) = 2;
  *(undefined1 *)((longlong)param_1 + 0x88) = 2;
  *(undefined1 *)((longlong)param_1 + 0x90) = 2;
  *(undefined1 *)((longlong)param_1 + 0x98) = 2;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  return;
}

// Destruct<FMoviePipelineCameraCutInfo> @ 14dd5e4d0

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineCameraCutInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            (*(FMovieSceneNestedSequenceTransform **)((longlong)param_1 + 0x70),
             *(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FMoviePipelineCameraCutInfo> @ 14dd5e560

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineCameraCutInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = param_1;
    do {
      lVar2 = *(longlong *)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)puVar5);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar5);
      uVar3 = *puVar1;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar5[1];
      *puVar5 = uVar3;
      puVar5[1] = lVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      *(undefined1 *)(puVar5 + 2) = *(undefined1 *)(puVar1 + 2);
      *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar1 + 3);
      *(undefined8 *)((longlong)puVar5 + 0x1c) = *(undefined8 *)((longlong)puVar1 + 0x1c);
      *(undefined8 *)((longlong)puVar5 + 0x24) = *(undefined8 *)((longlong)puVar1 + 0x24);
      *(undefined8 *)((longlong)puVar5 + 0x2c) = *(undefined8 *)((longlong)puVar1 + 0x2c);
      *(undefined8 *)((longlong)puVar5 + 0x34) = *(undefined8 *)((longlong)puVar1 + 0x34);
      *(undefined1 *)((longlong)puVar5 + 0x3c) = *(undefined1 *)((longlong)puVar1 + 0x3c);
      *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(puVar1 + 8);
      *(undefined8 *)((longlong)puVar5 + 0x44) = *(undefined8 *)((longlong)puVar1 + 0x44);
      *(undefined8 *)((longlong)puVar5 + 0x4c) = *(undefined8 *)((longlong)puVar1 + 0x4c);
      *(undefined8 *)((longlong)puVar5 + 0x54) = *(undefined8 *)((longlong)puVar1 + 0x54);
      FMovieSceneSequenceTransform::operator=
                ((FMovieSceneSequenceTransform *)(puVar5 + 0xc),
                 (FMovieSceneSequenceTransform *)(puVar1 + 0xc));
      uVar3 = puVar1[0x11];
      puVar5[0x10] = puVar1[0x10];
      puVar5[0x11] = uVar3;
      uVar3 = puVar1[0x13];
      puVar5[0x12] = puVar1[0x12];
      puVar5[0x13] = uVar3;
      ::FString::operator=((FString *)(puVar5 + 0x14),(FString *)(puVar1 + 0x14));
      *(undefined4 *)(puVar5 + 0x16) = *(undefined4 *)(puVar1 + 0x16);
      *(undefined4 *)((longlong)puVar5 + 0xb4) = *(undefined4 *)((longlong)puVar1 + 0xb4);
      *(undefined4 *)(puVar5 + 0x17) = *(undefined4 *)(puVar1 + 0x17);
      *(undefined4 *)((longlong)puVar5 + 0xbc) = *(undefined4 *)((longlong)puVar1 + 0xbc);
      *(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(puVar1 + 0x18);
      *(undefined4 *)((longlong)puVar5 + 0xc4) = *(undefined4 *)((longlong)puVar1 + 0xc4);
      *(undefined1 *)(puVar5 + 0x19) = *(undefined1 *)(puVar1 + 0x19);
      *(undefined4 *)((longlong)puVar5 + 0xcc) = *(undefined4 *)((longlong)puVar1 + 0xcc);
      *(undefined4 *)(puVar5 + 0x1a) = *(undefined4 *)(puVar1 + 0x1a);
      *(undefined4 *)((longlong)puVar5 + 0xd4) = *(undefined4 *)((longlong)puVar1 + 0xd4);
      param_3 = param_3 + -1;
      puVar5 = puVar5 + 0x1b;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelineSegmentWorkMetrics> @ 14dd5ed50

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineSegmentWorkMetrics>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  return;
}

// ConstructForTests<FMoviePipelineSegmentWorkMetrics> @ 14dd5ed80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMoviePipelineSegmentWorkMetrics>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0xffffffffffffffff;
  return;
}

// Destruct<FMoviePipelineSegmentWorkMetrics> @ 14dd5edb0

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineSegmentWorkMetrics>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FMoviePipelineSegmentWorkMetrics> @ 14dd5edd0

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineSegmentWorkMetrics>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Data.AllocatorInstance.Data;
      this[5] = *(undefined4 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4);
      this[6] = pFVar1[1].Data.ArrayNum;
      this[7] = pFVar1[1].Data.ArrayMax;
      this[8] = *(undefined4 *)&pFVar1[2].Data.AllocatorInstance.Data;
      this[9] = *(undefined4 *)((longlong)&pFVar1[2].Data.AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = this + 10;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelineConsoleVariableEntry> @ 14dd5eff0

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineConsoleVariableEntry>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FMoviePipelineConsoleVariableEntry> @ 14dd5f010

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMoviePipelineConsoleVariableEntry>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FMoviePipelineConsoleVariableEntry> @ 14dd5f1f0

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineConsoleVariableEntry>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
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

// Copy<FMoviePipelineConsoleVariableEntry> @ 14dd5f350

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineConsoleVariableEntry>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      this[4] = *(undefined4 *)&pFVar1[1].Data.AllocatorInstance.Data;
      *(undefined1 *)(this + 5) =
           *(undefined1 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMoviePipelinePassIdentifier> @ 14dd5f8e0

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelinePassIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FMoviePipelinePassIdentifier> @ 14dd5f900

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMoviePipelinePassIdentifier>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FMoviePipelinePassIdentifier> @ 14dd5f920

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelinePassIdentifier>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Construct<FMoviePipelineSidecarCamera> @ 14dd5f960

void __cdecl UE::CoreUObject::Private::Construct<FMoviePipelineSidecarCamera>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FMoviePipelineSidecarCamera> @ 14dd5f990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMoviePipelineSidecarCamera>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FMoviePipelineSidecarCamera> @ 14dd5f9b0

void __cdecl UE::CoreUObject::Private::Destruct<FMoviePipelineSidecarCamera>(void *param_1)

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

// Copy<FMoviePipelinePassIdentifier> @ 14dd5f9d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelinePassIdentifier>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FMoviePipelineSidecarCamera> @ 14dd5fa90

bool __cdecl
UE::CoreUObject::Private::Copy<FMoviePipelineSidecarCamera>(void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = ((undefined8 *)(lVar2 + (longlong)param_1))[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar2 + 0x10);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_1 + lVar2 + 0x18)
                );
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FMoviePipelinePassIdentifier> @ 14dd5fb00

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FMoviePipelinePassIdentifier>(void *param_1)

{
  uint uVar1;
  FMoviePipelinePassIdentifier local_28;
  
  ::FString::FString(&local_28.Name,param_1);
  ::FString::FString(&local_28.CameraName,(FString *)((longlong)param_1 + 0x10));
  uVar1 = ::GetTypeHash(&local_28);
  return uVar1;
}

// ConvertLinearToLinearBitDepth<FColor,FLinearColor,unsigned_char> @ 14dd62470

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FColor,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::ConvertLinearToLinearBitDepth<FColor,FLinearColor,unsigned_char>
          (TArray<FColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FLinearColor *param_1,
          long64 param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)param_2,Default);
  fVar3 = __real_437f0000;
  fVar2 = __real_3f000000;
  lVar7 = 0;
  if (3 < param_2) {
    pfVar8 = &(param_1->field0_0x0)._s_0.B;
    lVar9 = 0;
    do {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar4 = (int)(((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar9 + 2] = FVar5;
      iVar4 = (int)(pfVar8[-1] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar9 + 1] = FVar5;
      iVar4 = (int)(*pfVar8 * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar9] = FVar5;
      iVar4 = (int)(pfVar8[1] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar9 + 3] = FVar5;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar4 = (int)(pfVar8[2] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 6] = FVar5;
      iVar4 = (int)(pfVar8[3] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 5] = FVar5;
      iVar4 = (int)(pfVar8[4] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 4] = FVar5;
      iVar4 = (int)(pfVar8[5] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 7] = FVar5;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar4 = (int)(pfVar8[6] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 10] = FVar5;
      iVar4 = (int)(pfVar8[7] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 9] = FVar5;
      iVar4 = (int)(pfVar8[8] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 8] = FVar5;
      iVar4 = (int)(pfVar8[9] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 0xb] = FVar5;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar4 = (int)(pfVar8[10] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 0xe] = FVar5;
      iVar4 = (int)(pfVar8[0xb] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 0xd] = FVar5;
      iVar4 = (int)(pfVar8[0xc] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 0xc] = FVar5;
      iVar4 = (int)(pfVar8[0xd] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pfVar8 = pfVar8 + 0x10;
      pFVar1[lVar7 * 4 + 0xf] = FVar5;
      lVar9 = lVar9 + 0x10;
      lVar7 = lVar7 + 4;
    } while (lVar7 < param_2 + -3);
  }
  if (lVar7 < param_2) {
    pfVar8 = &param_1[lVar7].field0_0x0._s_0.B;
    do {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      iVar4 = (int)(((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 2] = FVar5;
      iVar4 = (int)(pfVar8[-1] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 1] = FVar5;
      iVar4 = (int)(*pfVar8 * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4] = FVar5;
      iVar4 = (int)(pfVar8[1] * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pfVar8 = pfVar8 + 4;
      pFVar1[lVar7 * 4 + 3] = FVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_2);
  }
  return __return_storage_ptr__;
}

// ConvertLinearToLinearBitDepth<FColor,FFloat16Color,unsigned_char> @ 14dd628a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FColor,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::ConvertLinearToLinearBitDepth<FColor,FFloat16Color,unsigned_char>
          (TArray<FColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FFloat16Color *param_1
          ,long64 param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  longlong lVar7;
  FFloat16 *pFVar8;
  float fVar9;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)param_2,Default);
  fVar3 = __real_437f0000;
  fVar2 = __real_3f000000;
  lVar7 = 0;
  if (0 < param_2) {
    pFVar8 = &param_1->B;
    do {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      fVar9 = FGenericPlatformMath::LoadHalf((ushort *)(pFVar8 + -2));
      iVar4 = (int)(fVar9 * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 2] = FVar5;
      fVar9 = FGenericPlatformMath::LoadHalf(&pFVar8[-1].Encoded);
      iVar4 = (int)(fVar9 * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4 + 1] = FVar5;
      fVar9 = FGenericPlatformMath::LoadHalf(&pFVar8->Encoded);
      iVar4 = (int)(fVar9 * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar1[lVar7 * 4] = FVar5;
      fVar9 = FGenericPlatformMath::LoadHalf(&pFVar8[1].Encoded);
      iVar4 = (int)(fVar9 * fVar3 + fVar2);
      iVar6 = 0xff;
      if (iVar4 < 0xff) {
        iVar6 = iVar4;
      }
      FVar5 = (FScriptContainerElement)0x0;
      if (0 < iVar6) {
        FVar5 = SUB41(iVar6,0);
      }
      pFVar8 = pFVar8 + 4;
      pFVar1[lVar7 * 4 + 3] = FVar5;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_2);
  }
  return __return_storage_ptr__;
}

// DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&> @ 14dd62ac0

FMovieRenderPipelineCoreModule * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FMovieRenderPipelineCoreModule,FMovieRenderPipelineCoreModule_*_&>
          (FMovieRenderPipelineCoreModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&> @ 14dd62ae0

UMoviePipelineInProcessExecutor * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMoviePipelineInProcessExecutor,UMoviePipelineInProcessExecutor_*_&>
          (UMoviePipelineInProcessExecutor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMoviePipelinePythonHostExecutor,UMoviePipelinePythonHostExecutor_*_&> @ 14dd62b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMoviePipelinePythonHostExecutor * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMoviePipelinePythonHostExecutor,UMoviePipelinePythonHostExecutor_*_&>
          (UMoviePipelinePythonHostExecutor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMoviePipelineQueueEngineSubsystem,UMoviePipelineQueueEngineSubsystem_*_&> @ 14dd62b20

UMoviePipelineQueueEngineSubsystem * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMoviePipelineQueueEngineSubsystem,UMoviePipelineQueueEngineSubsystem_*_&>
          (UMoviePipelineQueueEngineSubsystem **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMoviePipelineSetting_BlueprintBase,UMoviePipelineSetting_BlueprintBase_*_&> @ 14dd62b40

UMoviePipelineSetting_BlueprintBase * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UMoviePipelineSetting_BlueprintBase,UMoviePipelineSetting_BlueprintBase_*_&>
          (UMoviePipelineSetting_BlueprintBase **param_1)

{
  return *param_1;
}

// operator() @ 14dd6daf0

void __thiscall
`UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  
  fVar6 = __real_43ff0000;
  fVar5 = __real_3f000000;
  lVar14 = (longlong)((param_1 + 1) * **(int **)this);
  lVar12 = **(longlong **)((longlong)this + 8);
  if (lVar14 < **(longlong **)((longlong)this + 8)) {
    lVar12 = lVar14;
  }
  lVar14 = (longlong)(**(int **)this * param_1);
  if (lVar14 < lVar12) {
    lVar15 = lVar14 + 2;
    do {
      plVar1 = *(longlong **)((longlong)this + 0x28);
      lVar2 = **(longlong **)((longlong)this + 0x10);
      uVar13 = (uint)(lVar14 % (longlong)**(int **)((longlong)this + 0x30));
      uVar8 = 0;
      if ((int)uVar13 < (int)plVar1[1]) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar16 = *(float *)(**(longlong **)((longlong)this + 0x18) +
                         (ulonglong)*(ushort *)(**(longlong **)((longlong)this + 0x20) + lVar14 * 8)
                         * 4) + *(float *)(*plVar1 + (longlong)(int)uVar13 * 4);
      *(char *)(lVar2 + 2 + lVar14 * 4) = (char)((int)ROUND((fVar16 + fVar16) - fVar5) >> 1);
      plVar1 = *(longlong **)((longlong)this + 0x28);
      uVar13 = (uint)((lVar15 + -1) % (longlong)**(int **)((longlong)this + 0x30));
      uVar8 = 0;
      if ((int)uVar13 < (int)plVar1[1]) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar16 = *(float *)(**(longlong **)((longlong)this + 0x18) +
                         (ulonglong)
                         *(ushort *)(**(longlong **)((longlong)this + 0x20) + 2 + lVar14 * 8) * 4) +
               *(float *)(*plVar1 + (longlong)(int)uVar13 * 4);
      *(char *)(lVar2 + 1 + lVar14 * 4) = (char)((int)ROUND((fVar16 + fVar16) - fVar5) >> 1);
      plVar1 = *(longlong **)((longlong)this + 0x28);
      uVar13 = (uint)(lVar15 % (longlong)**(int **)((longlong)this + 0x30));
      uVar8 = 0;
      if ((int)uVar13 < (int)plVar1[1]) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar16 = *(float *)(**(longlong **)((longlong)this + 0x18) +
                         (ulonglong)
                         *(ushort *)(**(longlong **)((longlong)this + 0x20) + 4 + lVar14 * 8) * 4) +
               *(float *)(*plVar1 + (longlong)(int)uVar13 * 4);
      *(char *)(lVar2 + lVar14 * 4) = (char)((int)ROUND((fVar16 + fVar16) - fVar5) >> 1);
      plVar1 = *(longlong **)((longlong)this + 0x28);
      fVar16 = FGenericPlatformMath::LoadHalf
                         ((ushort *)(**(longlong **)((longlong)this + 0x20) + lVar14 * 8 + 6));
      lVar15 = lVar15 + 1;
      uVar13 = (uint)(lVar15 % (longlong)**(int **)((longlong)this + 0x30));
      uVar8 = 0;
      if ((int)uVar13 < (int)plVar1[1]) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *plVar1;
      iVar9 = (int)ROUND((fVar16 * fVar6 + *(float *)(lVar3 + (longlong)(int)uVar13 * 4) +
                         *(float *)(lVar3 + (longlong)(int)uVar13 * 4)) - fVar5) >> 1;
      iVar11 = 0xff;
      if (iVar9 < 0xff) {
        iVar11 = iVar9;
      }
      uVar10 = 0;
      if (0 < iVar11) {
        uVar10 = (char)iVar11;
      }
      *(undefined1 *)(lVar2 + 3 + lVar14 * 4) = uVar10;
      lVar14 = lVar14 + 1;
    } while (lVar14 < lVar12);
  }
  return;
}

// CanWriteToFile @ 14dd7a7e0

bool __cdecl UE::MoviePipeline::CanWriteToFile(wchar_t *param_1,bool param_2)

{
  bool bVar1;
  IFileManager *pIVar2;
  longlong lVar3;
  ulonglong local_res18;
  ulong64 local_res20;
  FString local_18;
  
  ::FString::FString(&local_18,param_1);
  bVar1 = FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(&local_18,&local_res20,&local_res18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((bVar1) && (local_res18 < 0x4000001)) {
    return false;
  }
  if (!param_2) {
    pIVar2 = IFileManager::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x110))(pIVar2,param_1);
    if (lVar3 != -1) {
      return false;
    }
  }
  return true;
}

// ComputeAutoExposureCubeCaptureSize @ 14dd7b650

int __cdecl UE::MoviePipeline::Panoramic::ComputeAutoExposureCubeCaptureSize(TIntPoint<int> param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_1.field0_0x0._4_4_ / 2;
  iVar2 = param_1.field0_0x0._0_4_;
  uVar3 = iVar2 / 3 + (iVar2 >> 0x1f) +
          (int)(((longlong)iVar2 / 3 + ((longlong)iVar2 >> 0x3f) & 0xffffffffU) >> 0x1f);
  if ((int)uVar3 < (int)uVar1) {
    uVar1 = uVar3;
  }
  return uVar1 & 0xfffffff8;
}

// ConformOutputFormatStringToken @ 14dd7b690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::ConformOutputFormatStringToken
          (FString *param_1,TStringView<wchar_t> *param_2,FName *param_3,FName *param_4)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  FString *pFVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar4 = FrameNumberIdentifiers;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FString::FString(FrameNumberIdentifiers,L"{frame_number}");
    ::FString::FString(FrameNumberIdentifiers + 1,L"{frame_number_shot}");
    ::FString::FString(FrameNumberIdentifiers + 2,L"{frame_number_rel}");
    ::FString::FString(FrameNumberIdentifiers + 3,L"{frame_number_shot_rel}");
    atexit(`UE::MoviePipeline::ConformOutputFormatStringToken'::__l2::
           _dynamic_atexit_destructor_for__FrameNumberIdentifiers__);
    _Init_thread_footer(&::_TSS0);
  }
  pwVar1 = param_2->DataPtr;
  iVar2 = ::FString::Find(param_1,pwVar1,(int)*(undefined8 *)&param_2->Size,IgnoreCase,FromStart,-1)
  ;
  if (iVar2 == -1) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      ::FName::ToString(param_4,&local_28);
      ::FName::ToString(param_3,&local_38);
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    do {
      iVar2 = (pFVar4->Data).ArrayNum;
      if (iVar2 == 0) {
        pwVar3 = L"";
        iVar2 = 0;
      }
      else {
        pwVar3 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
        iVar2 = iVar2 + -1;
      }
      iVar2 = ::FString::Find(param_1,pwVar3,iVar2,IgnoreCase,FromEnd,-1);
      if (iVar2 != -1) {
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        pFVar4 = ::FString::ConstructFromPtrSize
                           (&local_28,pwVar1,(int)*(undefined8 *)&param_2->Size);
        if (&local_48 != pFVar4) {
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
          (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
          local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
          (pFVar4->Data).ArrayNum = 0;
          (pFVar4->Data).ArrayMax = 0;
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        ::FString::ConcatFC(&local_38,&local_48,L".");
        ::FString::InsertAt(param_1,iVar2,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
        return;
      }
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != (FString *)&::_TSS0);
    ::FString::AppendChars(param_1,pwVar1,(int)*(undefined8 *)&param_2->Size);
  }
  return;
}

// ConvertLinearTosRGB16bppViaLookupTable @ 14dd7b950

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FFloat16Color,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::ConvertLinearTosRGB16bppViaLookupTable
          (TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FFloat16Color *param_1,long64 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ForAnyElementType FVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB16bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
  FVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FNameEntryId FVar10;
  FName FVar11;
  int iVar12;
  longlong lVar13;
  FNameEntryId FVar14;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_58;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> local_48;
  
  GenerateSRGBTableFloat16to16(&local_48);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  FVar14.Value = 0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar12 = (int)param_2;
  if (iVar12 < 1) {
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(param_2 & 0xffffffff);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,2,iVar12,&__return_storage_ptr__->AllocatorInstance,
               &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  }
  FVar5.Data = local_48.AllocatorInstance.Data;
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ImageQuant_ApplysRGB ==
        (FThreadSafeStaticStat<,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB16bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_ImageQuant_ApplysRGB");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_ApplysRGB,*pFVar6,
                 L"STAT_ImageQuant_ApplysRGB","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_ImageQuant_ApplysRGB;
  if (StatPtr_STAT_ImageQuant_ApplysRGB ==
      (FThreadSafeStaticStat<,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB16bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res20,"STAT_ImageQuant_ApplysRGB");
    FVar7 = (FThreadSafeStaticStat<,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB16bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_ApplysRGB,*pFVar6,
                         L"STAT_ImageQuant_ApplysRGB","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar8 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                   ,0x113);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar10.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar14.Value = FVar10.Value;
      goto LAB_14dd7bb5f;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14dd7bb5f:
  if (0 < param_2) {
    lVar13 = (longlong)param_1 - (longlong)pFVar9;
    pFVar9 = pFVar9 + 2;
    do {
      *(undefined2 *)(pFVar9 + -2) =
           *(undefined2 *)(FVar5.Data + (ulonglong)*(ushort *)(pFVar9 + lVar13 + -2) * 2);
      *(undefined2 *)pFVar9 =
           *(undefined2 *)(FVar5.Data + (ulonglong)*(ushort *)(pFVar9 + lVar13) * 2);
      *(undefined2 *)(pFVar9 + 2) =
           *(undefined2 *)(FVar5.Data + (ulonglong)*(ushort *)(pFVar9 + lVar13 + 2) * 2);
      *(undefined2 *)(pFVar9 + 4) = *(undefined2 *)(pFVar9 + lVar13 + 4);
      param_2 = param_2 + -1;
      pFVar9 = pFVar9 + 8;
    } while (param_2 != 0);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_58.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_58);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertLinearTosRGB8bppViaLookupTable @ 14dd7bd80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FColor,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable
          (TArray<FColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FLinearColor *param_1,
          long64 param_2)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_38 [2];
  
  GenerateSRGBTable(local_38,0x1000);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)param_2,Default);
  fVar6 = __real_437f0000;
  fVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  lVar9 = 0;
  local_38[0].ArrayNum = local_38[0].ArrayNum + -1;
  fVar12 = (float)local_38[0].ArrayNum;
  if (3 < param_2) {
    pfVar8 = &(param_1->field0_0x0)._s_0.B;
    lVar10 = 0;
    do {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      fVar11 = pfVar8[-1];
      iVar7 = (int)(fVar12 * ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R);
      iVar3 = local_38[0].ArrayNum;
      if (iVar7 < local_38[0].ArrayNum) {
        iVar3 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      fVar1 = *pfVar8;
      pFVar2[lVar10 + 2] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar11) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar11);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar10 + 1] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar1) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar1);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar10] = local_38[0].AllocatorInstance.Data[iVar7];
      fVar11 = pfVar8[1];
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (fVar4 <= fVar11) {
        fVar11 = fVar4;
      }
      pFVar2[lVar10 + 3] = SUB41((int)(fVar11 * fVar6 + fVar5),0);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      fVar11 = pfVar8[3];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * pfVar8[2]) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * pfVar8[2]);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      fVar1 = pfVar8[4];
      pFVar2[lVar9 * 4 + 6] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar11) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar11);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4 + 5] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar1) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar1);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4 + 4] = local_38[0].AllocatorInstance.Data[iVar7];
      fVar11 = pfVar8[5];
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (fVar4 <= fVar11) {
        fVar11 = fVar4;
      }
      pFVar2[lVar9 * 4 + 7] = SUB41((int)(fVar11 * fVar6 + fVar5),0);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      fVar11 = pfVar8[7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * pfVar8[6]) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * pfVar8[6]);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      fVar1 = pfVar8[8];
      pFVar2[lVar9 * 4 + 10] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar11) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar11);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4 + 9] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar1) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar1);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4 + 8] = local_38[0].AllocatorInstance.Data[iVar7];
      fVar11 = pfVar8[9];
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (fVar4 <= fVar11) {
        fVar11 = fVar4;
      }
      pFVar2[lVar9 * 4 + 0xb] = SUB41((int)(fVar11 * fVar6 + fVar5),0);
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      fVar11 = pfVar8[0xb];
      fVar1 = pfVar8[0xc];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * pfVar8[10]) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * pfVar8[10]);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4 + 0xe] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar11) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar11);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4 + 0xd] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar1) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar1);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      lVar10 = lVar10 + 0x10;
      pFVar2[lVar9 * 4 + 0xc] = local_38[0].AllocatorInstance.Data[iVar7];
      fVar11 = pfVar8[0xd];
      pfVar8 = pfVar8 + 0x10;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (fVar4 <= fVar11) {
        fVar11 = fVar4;
      }
      pFVar2[lVar9 * 4 + 0xf] = SUB41((int)(fVar11 * fVar6 + fVar5),0);
      lVar9 = lVar9 + 4;
    } while (lVar9 < param_2 + -3);
  }
  if (lVar9 < param_2) {
    pfVar8 = &param_1[lVar9].field0_0x0._s_0.B;
    do {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      fVar11 = pfVar8[-1];
      iVar7 = (int)(fVar12 * ((FLinearColor_u_0_s_0 *)(pfVar8 + -2))->R);
      iVar3 = local_38[0].ArrayNum;
      if (iVar7 < local_38[0].ArrayNum) {
        iVar3 = iVar7;
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      fVar1 = *pfVar8;
      pFVar2[lVar9 * 4 + 2] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar11) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar11);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4 + 1] = local_38[0].AllocatorInstance.Data[iVar7];
      iVar3 = local_38[0].ArrayNum;
      if ((int)(fVar12 * fVar1) < local_38[0].ArrayNum) {
        iVar3 = (int)(fVar12 * fVar1);
      }
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      pFVar2[lVar9 * 4] = local_38[0].AllocatorInstance.Data[iVar7];
      fVar11 = pfVar8[1];
      pfVar8 = pfVar8 + 4;
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (fVar4 <= fVar11) {
        fVar11 = fVar4;
      }
      pFVar2[lVar9 * 4 + 3] = SUB41((int)(fVar11 * fVar6 + fVar5),0);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_2);
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ConvertLinearTosRGB8bppViaLookupTable @ 14dd7c1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FColor,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable
          (TArray<FColor,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FFloat16Color *param_1
          ,long64 param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<,TArray<FColor,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
  FVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar11;
  FNameEntryId FVar12;
  ulonglong uVar13;
  FName FVar14;
  ulonglong uVar15;
  uint uVar16;
  FFloat16Color *local_res10;
  long64 local_res18;
  int local_res20 [2];
  FColor_u_0 local_128 [2];
  FName local_120;
  ForAnyElementType local_118;
  int local_110 [4];
  FName local_100;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  LARGE_INTEGER local_e0;
  FStatMessage local_d8;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  int **local_b0;
  TArray<float,TSizedDefaultAllocator<32>_> local_a8;
  int *local_98;
  long64 *local_90;
  FScriptContainerElement **local_88;
  FScriptContainerElement **local_80;
  FFloat16Color **local_78;
  ForAnyElementType *local_70;
  int *local_68;
  FName local_60;
  FName local_58 [4];
  
  local_res10 = param_1;
  local_res18 = param_2;
  GenerateSRGBTableFloat16toFloat(&local_a8);
  local_res20[0] = 0x100007;
  uVar13 = 0;
  local_118.Data = (FScriptContainerElement *)0x0;
  local_110[0] = 0;
  local_110[1] = 0;
  uVar16 = 0x7a69;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x100007,&local_118,local_110,local_110 + 1);
  fVar5 = __real_3f800000;
  uVar15 = uVar13;
  if (0 < local_res20[0]) {
    do {
      uVar11 = (uint)uVar13;
      uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
      uVar7 = 0;
      if ((int)uVar11 < local_110[0]) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<FColor,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
      uVar13 = (ulonglong)(uVar11 + 1);
      *(uint *)(local_118.Data + uVar15) =
           (uint)((float)(uVar16 >> 9 | 0x3f800000) - fVar5) & 0xffffff00;
      uVar15 = uVar15 + 4;
    } while ((int)(uVar11 + 1) < local_res20[0]);
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,(int)local_res18,Default);
  local_e8 = local_a8.AllocatorInstance.Data;
  local_f0 = (__return_storage_ptr__->AllocatorInstance).Data;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ImageQuant_ApplysRGB ==
        (FThreadSafeStaticStat<,TArray<FColor,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
         )0x0) {
      pFVar9 = ::FName::FName(&local_60,"STAT_ImageQuant_ApplysRGB");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_ApplysRGB,*pFVar9,
                 L"STAT_ImageQuant_ApplysRGB","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_ImageQuant_ApplysRGB;
  if (StatPtr_STAT_ImageQuant_ApplysRGB ==
      (FThreadSafeStaticStat<,TArray<FColor,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
       )0x0) {
    pFVar9 = ::FName::FName(local_58,"STAT_ImageQuant_ApplysRGB");
    FVar10 = (FThreadSafeStaticStat<,TArray<FColor,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable(FFloat16Color_*,__int64)_::_2_::FStat_STAT_ImageQuant_ApplysRGB>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_ApplysRGB,*pFVar9,
                          L"STAT_ImageQuant_ApplysRGB","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar6 = false;
  bVar4 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar12 = FVar14.ComparisonIndex.Value;
  uVar16 = FVar14.Number;
  if ((FVar12.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar6 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = FVar12.Value;
        local_120.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                   ,0xcf);
        bVar6 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120.ComparisonIndex.Value = FVar12.Value;
      local_120.Number = uVar16;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar3 = true;
      goto LAB_14dd7c4ae;
    }
  }
  bVar3 = false;
  FVar14 = local_100;
LAB_14dd7c4ae:
  local_98 = local_110 + 2;
  local_110[2] = 0x80000;
  local_90 = &local_res18;
  local_c8.DataPtr = (void **)0x0;
  local_88 = &local_f0;
  local_c8.ArrayNum = 0;
  local_80 = &local_e8;
  local_78 = &local_res10;
  local_70 = &local_118;
  local_68 = local_res20;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::MoviePipeline::ConvertLinearTosRGB8bppViaLookupTable'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_98;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             -((int)ROUND(__real_bf000000 - (float)local_res18 * ___real_36800000) >> 1),1,
             (TFunctionRef<void___cdecl(int)> *)&local_b8,local_res20[0]._0_1_,None,&local_c8);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_d8.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_d8.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_d8.StatData.Pad[4] = '\0';
      local_d8.StatData.Pad[5] = '\0';
      local_d8.StatData.Pad[6] = '\0';
      local_d8.StatData.Pad[7] = '\0';
      local_d8.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_d8.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_d8.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_d8.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_d8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  if (local_118.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data);
  }
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DeduplicateNameArray @ 14dd7e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::MoviePipeline::DeduplicateNameArray(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint *puVar18;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176 [6];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_170;
  undefined4 local_160;
  int local_15c;
  int local_158;
  FString local_150;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FScriptContainerElement *local_e0;
  undefined4 *local_d8;
  FStringFormatArg local_d0;
  undefined4 local_94;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  ulonglong uVar17;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  iVar10 = param_1->ArrayNum;
  uVar17 = 0;
  uVar16 = 0;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pFVar13 = pFVar11 + (longlong)iVar10 * 0x10;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  uVar6 = 1;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar10) {
      local_178 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_178)
      ;
    }
    uVar4 = local_60;
    if (pFVar11 == pFVar13) break;
    local_160 = 0;
    if (*(int *)(pFVar11 + 8) == 0) {
      pwVar9 = L"";
      iVar5 = 0;
    }
    else {
      pwVar9 = *(wchar_t **)&pFVar11->field_0x0;
      iVar5 = *(int *)(pFVar11 + 8) + -1;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar9);
    iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                        *)local_88,uVar4,(FString *)pFVar11);
    if ((iVar5 == -1) || (lVar8 = (longlong)iVar5 * 0x20 + local_88._0_8_, lVar8 == 0)) {
      local_d8 = &local_160;
      local_e0 = pFVar11;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      EmplaceByHash<TPairInitializer<FString_const_&,int_&&>_>
                ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                  *)local_88,(uint)&local_15c,
                 (TPairInitializer<FString_const_&,int_&&> *)(ulonglong)uVar4,(bool *)&local_e0);
      lVar8 = (longlong)local_15c * 0x20 + local_88._0_8_;
    }
    *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
    if (1 < *(int *)(lVar8 + 0x10)) {
      if (*(int *)(pFVar11 + 8) == 0) {
        pwVar9 = L"";
        uVar4 = uVar16;
      }
      else {
        pwVar9 = *(wchar_t **)&pFVar11->field_0x0;
        uVar4 = *(int *)(pFVar11 + 8) - 1;
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,pwVar9);
      iVar5 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                          *)local_88,uVar4,(FString *)pFVar11);
      uVar14 = uVar17;
      if (((iVar5 == -1) || (uVar14 = (longlong)iVar5 * 0x20 + local_88._0_8_, uVar14 == 0)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FStringFormatArg::FStringFormatArg(&local_d0,*(int *)(uVar14 + 0x10));
      local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.ArrayNum = 1;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_170.AllocatorInstance,1,&local_170.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_170.AllocatorInstance.Data,&local_d0,1);
      ::FString::FormatImpl(&local_150,L"({0})",&local_170);
      uVar4 = local_150.Data.ArrayNum - 1;
      if (local_150.Data.ArrayNum == 0) {
        uVar4 = uVar16;
      }
      ::FString::AppendChars
                ((FString *)pFVar11,(wchar_t *)local_150.Data.AllocatorInstance.Data,uVar4);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
      if ((FStringFormatArg *)local_170.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_170.AllocatorInstance.Data);
      }
      if (local_d0.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.StringValue.Data.AllocatorInstance.Data);
      }
    }
    pFVar11 = pFVar11 + 0x10;
  }
  uStack_124 = uVar16;
  local_120 = uVar16;
  if (local_60 != 0) {
    puVar18 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar18 = local_68;
    }
    uVar12 = *puVar18;
    uVar14 = uVar17;
    while (uVar12 == 0) {
      iVar10 = (int)uVar17;
      local_120 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)local_120;
      uVar16 = iVar10 + 1;
      uVar17 = (ulonglong)uVar16;
      uStack_124 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14dd7e594;
      uVar12 = puVar18[(longlong)iVar10 + 1];
    }
    uVar6 = -uVar12 & uVar12;
    uVar17 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_158 = (int)lVar8;
    uStack_124 = (local_120 - 1) + local_158;
    if ((int)local_60 < (int)uStack_124) {
      uStack_124 = local_60;
    }
  }
LAB_14dd7e594:
  local_140 = (longlong *)local_88;
  uStack_11c = local_94;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  iStack_118 = local_88._8_4_ - local_54;
  uVar12 = local_60 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar6,uVar16);
  iVar10 = (int)local_60 >> 5;
  TStack_108._28_4_ = local_94;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar7 = (byte)local_60;
  uStack_138 = uVar16;
  uStack_134 = uVar6;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_60 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar4 != local_60) {
    puVar18 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar18 = local_68;
    }
    uVar16 = -1 << (bVar7 & 0x1f) & puVar18[iVar10];
    while (uVar16 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar4 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_14dd7e68d;
      uVar16 = puVar18[lVar8 + 1];
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar4 = (int)lVar8 + -1 + uVar12;
    if ((int)local_60 < (int)uVar4) {
      uVar4 = local_60;
    }
  }
LAB_14dd7e68d:
LAB_14dd7e691:
  plVar2 = local_110;
  if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
    `TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_177);
  }
  if (((TStack_108.CurrentBitIndex == uVar4) &&
      (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
     (plVar2 == (longlong *)local_88)) {
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_88);
    return;
  }
  puVar15 = (undefined8 *)((longlong)TStack_108.CurrentBitIndex * 0x20 + *plVar2);
  if (1 < *(int *)(puVar15 + 2)) {
    iVar10 = param_1->ArrayNum;
    pFVar11 = (param_1->AllocatorInstance).Data;
    pFVar13 = pFVar11 + (longlong)iVar10 * 0x10;
    do {
      if (param_1->ArrayNum != iVar10) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_176);
      }
      if (pFVar11 == pFVar13) break;
      iVar5 = *(int *)(pFVar11 + 8);
      if (iVar5 == *(int *)(puVar15 + 1)) {
        if (iVar5 < 2) goto LAB_14dd7e745;
        iVar5 = wcscmp(*(wchar_t **)&pFVar11->field_0x0,(wchar_t *)*puVar15);
        bVar3 = iVar5 == 0;
      }
      else {
        bVar3 = iVar5 + *(int *)(puVar15 + 1) == 1;
      }
      if (bVar3) goto LAB_14dd7e745;
      pFVar11 = pFVar11 + 0x10;
    } while( true );
  }
  goto LAB_14dd7e75a;
LAB_14dd7e745:
  ::FString::AppendChars((FString *)pFVar11,L"(1)",3);
LAB_14dd7e75a:
  TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  goto LAB_14dd7e691;
}

// DistributeValuesInInterval @ 14dd7e9f0

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::Panoramic::DistributeValuesInInterval
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,float param_1,
          float param_2,int param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  float local_38 [12];
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar8 = (ulonglong)(uint)param_3;
  iVar6 = param_3;
  if (param_4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    iVar6 = param_3 + -1;
  }
  iVar5 = 1;
  if (1 < iVar6) {
    iVar5 = iVar6;
  }
  local_38[0] = param_1;
  if (0 < param_3) {
    do {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)*piVar1 * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           local_38[0];
      local_38[0] = local_38[0] + (param_2 - param_1) / (float)iVar5;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return __return_storage_ptr__;
}

// DoPostProcessBlend @ 14dd7eb60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::DoPostProcessBlend
          (TVector<double> *param_1,UWorld *param_2,FMinimalViewInfo *param_3,FSceneView *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  float fVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  float local_res10 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  FPostProcessSettings *local_88;
  float local_7c;
  float local_78;
  char local_74;
  char local_73;
  
  fVar4 = __real_3f800000;
  pFVar5 = (param_2->PostProcessVolumes).AllocatorInstance.Data;
  iVar2 = (param_2->PostProcessVolumes).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_2->PostProcessVolumes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<IInterface_PostProcessVolume_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar5 == pFVar1) break;
    plVar3 = *(longlong **)pFVar5;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_88);
    if (local_74 != '\0') {
      fVar7 = local_78;
      if (fVar4 <= local_78) {
        fVar7 = fVar4;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (local_73 == '\0') {
        local_a8 = *(undefined4 *)&param_1->field0_0x0;
        uStack_a4 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
        uStack_a0 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
        uStack_9c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
        local_98 = (param_1->field0_0x0)._s_0.Z;
        local_res10[0] = 0.0;
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_a8,0,local_res10);
        if ((local_res10[0] < 0.0) || (local_7c <= local_res10[0])) {
          fVar7 = 0.0;
        }
        else {
          fVar6 = fVar4 - local_res10[0] / local_7c;
          if (fVar4 <= fVar6) {
            fVar6 = fVar4;
          }
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          fVar7 = fVar6 * fVar7;
        }
      }
      FSceneView::OverridePostProcessSettings(param_4,local_88,fVar7);
    }
    pFVar5 = pFVar5 + 8;
  }
  FSceneView::OverridePostProcessSettings
            (param_4,&param_3->PostProcessSettings,param_3->PostProcessBlendWeight);
  return;
}

// FindMoviePipelineSettingClasses @ 14dd82880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<UClass_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::MovieRenderPipeline::FindMoviePipelineSettingClasses
          (TArray<UClass_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UClass *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FMapHandle FVar3;
  code *pcVar4;
  FKeyForward FVar5;
  int iVar6;
  FAssetData *pFVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  EInternalObjectFlags EVar13;
  FName *pFVar14;
  FModuleManager *this;
  IModuleInterface *pIVar15;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *pTVar16;
  UClass *pUVar17;
  longlong *plVar18;
  FValueId *pFVar19;
  FString *pFVar20;
  UField *pUVar21;
  UObject *pUVar22;
  ulonglong uVar23;
  FAssetTagValueRef_u_0 FVar24;
  ulonglong uVar25;
  longlong lVar26;
  FMapHandle *this_00;
  undefined1 auStackY_348 [32];
  FKeyForward local_2f8 [8];
  TObjectIterator<UClass> local_2f0;
  FString local_2d8;
  FAssetData *local_2c8;
  ulonglong local_2c0;
  uint local_2b8;
  undefined4 local_2b4;
  FAssetTagValueRef_u_0 local_2b0;
  FAssetTagValueRef_u_0 local_2a8;
  UClass *local_2a0;
  FTopLevelAssetPath local_298;
  FTopLevelAssetPath local_288;
  FName local_278;
  FName local_270;
  FAssetData *local_268;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> *local_260;
  FName local_258;
  FName local_250;
  UClass *local_248 [2];
  FScriptContainerElement *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FString local_228;
  FString local_218;
  FName local_208;
  FString local_200;
  FString local_1f0;
  TStringView<wchar_t> local_1d8;
  FString local_1c8;
  FSoftObjectPath local_1b8;
  void *local_198;
  undefined8 local_190;
  void *local_188;
  undefined8 local_180;
  FSoftObjectPath *local_178;
  undefined8 local_170;
  void *local_168;
  undefined8 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_148;
  void *local_108;
  undefined4 local_100;
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_f8;
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2b4 = 0;
  local_2a0 = param_1;
  local_260 = __return_storage_ptr__;
  pFVar14 = ::FName::FName(&local_208,L"AssetRegistry");
  FVar2 = *pFVar14;
  this = FModuleManager::Get();
  pIVar15 = FModuleManager::LoadModuleChecked(this,FVar2);
  local_2c8 = (FAssetData *)0x0;
  local_2c0 = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_178 = (FSoftObjectPath *)0x0;
  local_170 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_148._0_8_ = 0;
  local_148._8_8_ = 0;
  local_148._32_8_ = 0;
  local_148._40_4_ = 0;
  local_148._44_4_ = 0x80;
  local_148._48_4_ = 0xffffffff;
  local_148._52_4_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  local_f8._0_8_ = 0;
  local_f8._8_8_ = 0;
  local_f8._32_8_ = 0;
  local_f8._40_4_ = 0;
  local_f8._44_4_ = 0x80;
  local_f8._48_4_ = 0xffffffff;
  local_f8._52_4_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_a8._32_8_ = 0;
  local_a8._40_4_ = 0;
  local_a8._44_4_ = 0x80;
  local_a8._48_4_ = 0xffffffff;
  local_a8._52_4_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  UStruct::GetStructPathName((UStruct *)param_1,&local_298);
  if ((local_158.Data <= &local_298) &&
     (&local_298 < (FTopLevelAssetPath *)(local_158.Data + (longlong)local_150._4_4_ * 0x10))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar16;
    }
  }
  iVar10 = (int)local_150;
  if ((int)local_150 == local_150._4_4_) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x410,&local_158,(int *)((longlong)&local_150 + 4));
  }
  pFVar1 = local_158.Data + (longlong)iVar10 * 0x10;
  *(uint *)pFVar1 = local_298.PackageName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 4) = local_298.PackageName.Number;
  *(uint *)(pFVar1 + 8) = local_298.AssetName.ComparisonIndex.Value;
  *(uint *)(pFVar1 + 0xc) = local_298.AssetName.Number;
  local_150._0_4_ = iVar10 + 1;
  if (param_2) {
    pUVar17 = Z_Construct_UClass_UBlueprint_NoRegister();
    UStruct::GetStructPathName((UStruct *)pUVar17,&local_288);
    if ((local_158.Data <= &local_288) &&
       (&local_288 < (FTopLevelAssetPath *)(local_158.Data + (longlong)local_150._4_4_ * 0x10))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar16;
      }
    }
    if ((int)local_150 == local_150._4_4_) {
      local_150._0_4_ =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x410,&local_158,(int *)((longlong)&local_150 + 4));
    }
    pFVar1 = local_158.Data + (longlong)(int)local_150 * 0x10;
    *(uint *)pFVar1 = local_288.PackageName.ComparisonIndex.Value;
    *(uint *)(pFVar1 + 4) = local_288.PackageName.Number;
    *(uint *)(pFVar1 + 8) = local_288.AssetName.ComparisonIndex.Value;
    *(uint *)(pFVar1 + 0xc) = local_288.AssetName.Number;
    local_150._0_4_ = (int)local_150 + 1;
  }
  local_58 = CONCAT11(1,(undefined1)local_58);
  plVar18 = (longlong *)(**(code **)((longlong)*pIVar15 + 0x40))(pIVar15);
  (**(code **)(*plVar18 + 0x50))(plVar18,&local_198,&local_2c8,1);
  FVar5 = local_2f8[0];
  uVar23 = (ulonglong)(int)(uint)local_2c0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FMapHandle *)&local_2c8->TagsAndValues;
  local_2b8 = (uint)local_2c0;
  local_268 = local_2c8 + uVar23;
  uVar25 = uVar23;
  while( true ) {
    pFVar7 = local_268;
    if ((int)uVar23 != (int)uVar25) {
      local_2f8[0] = (FKeyForward)0x0;
      `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2f8);
    }
    if ((FAssetData *)(this_00 + -7) == pFVar7) break;
    local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d8.Data.ArrayNum = 0;
    local_2d8.Data.ArrayMax = 0;
    if (this_00->IsValid == 0) {
      FVar3 = *this_00;
      if (FVar3 != (FMapHandle)0x0) {
        local_278 = FBlueprintTags::NativeParentClassPath;
        uVar12 = Algo::
                 BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                           ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)FVar3,
                            &local_278,FVar5,(FNameFastLess)FVar5);
        if (uVar12 == 0xffffffff) {
          local_2b0.Loose = (FString *)0x0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar12 < *(int *)((longlong)FVar3 + 8)) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar16;
          }
          local_2b0.Loose = (FString *)(*(longlong *)FVar3 + ((longlong)(int)uVar12 * 3 + 1) * 8);
        }
        goto LAB_14dd82d3a;
      }
LAB_14dd82da6:
      local_2b0.Loose = (FString *)0x0;
LAB_14dd82daa:
      if (this_00->IsValid == 0) {
        FVar3 = *this_00;
        if (FVar3 == (FMapHandle)0x0) goto LAB_14dd82ee0;
        local_270 = FBlueprintTags::ParentClassPath;
        uVar12 = Algo::
                 BinarySearchBy<TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_>,FName,TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::FKeyForward,FNameFastLess>
                           ((TArray<TTuple<FName,FString>,TSizedDefaultAllocator<32>_> *)FVar3,
                            &local_270,FVar5,(FNameFastLess)FVar5);
        FVar24.Loose = (FString *)0x0;
        if (uVar12 != 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar12 < *(int *)((longlong)FVar3 + 8)) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar16;
          }
          FVar24.Loose = (FString *)(*(longlong *)FVar3 + ((longlong)(int)uVar12 * 3 + 1) * 8);
        }
      }
      else {
        pFVar19 = FixedTagPrivate::FMapHandle::FindValue(this_00,FBlueprintTags::ParentClassPath);
        if (pFVar19 == (FValueId *)0x0) {
LAB_14dd82ee0:
          local_2a8.Loose = (FString *)0x0;
          goto LAB_14dd82ee4;
        }
        FVar24.Bits = ((ulonglong)*(ushort *)this_00 & 0xfffffffffffffffc) << 0x1e |
                      (ulonglong)(uint)*pFVar19 | 0x8000000000000000;
      }
      local_2a8 = FVar24;
      if (FVar24.Loose != (FString *)0x0) {
        pFVar20 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_2a8.Fixed,&local_1f0);
        if (&local_2d8 != pFVar20) {
          if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
          }
          local_2d8.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
          (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2d8.Data.ArrayNum = (pFVar20->Data).ArrayNum;
          local_2d8.Data.ArrayMax = (pFVar20->Data).ArrayMax;
          (pFVar20->Data).ArrayNum = 0;
          (pFVar20->Data).ArrayMax = 0;
        }
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      pFVar19 = FixedTagPrivate::FMapHandle::FindValue
                          (this_00,FBlueprintTags::NativeParentClassPath);
      if (pFVar19 == (FValueId *)0x0) goto LAB_14dd82da6;
      local_2b0.Bits =
           ((ulonglong)*(ushort *)this_00 & 0xfffffffffffffffc) << 0x1e | (ulonglong)(uint)*pFVar19
           | 0x8000000000000000;
LAB_14dd82d3a:
      if (local_2b0.Loose == (FString *)0x0) goto LAB_14dd82daa;
      pFVar20 = FAssetTagValueRef::AsString((FAssetTagValueRef *)&local_2b0.Fixed,&local_200);
      if (&local_2d8 != pFVar20) {
        if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        local_2d8.Data.AllocatorInstance.Data = (pFVar20->Data).AllocatorInstance.Data;
        (pFVar20->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2d8.Data.ArrayNum = (pFVar20->Data).ArrayNum;
        local_2d8.Data.ArrayMax = (pFVar20->Data).ArrayMax;
        (pFVar20->Data).ArrayNum = 0;
        (pFVar20->Data).ArrayMax = 0;
      }
      if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
    }
LAB_14dd82ee4:
    if (local_2d8.Data.ArrayNum < 2) {
LAB_14dd82f88:
      param_1 = local_2a0;
      FAssetData::GetSoftObjectPath((FAssetData *)(this_00 + -7),&local_1b8);
      pUVar22 = FSoftObjectPath::TryLoad(&local_1b8,(FUObjectSerializeContext *)0x0);
      if (pUVar22 != (UObject *)0x0) {
        Z_Construct_UClass_UBlueprint_NoRegister();
      }
      if (local_1b8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    else {
      pFVar20 = FPackageName::ExportTextPathToObjectPath(&local_1c8,&local_2d8);
      local_238 = (pFVar20->Data).AllocatorInstance.Data;
      iVar10 = (pFVar20->Data).ArrayNum;
      iStack_230 = iVar10 + -1;
      if (iVar10 == 0) {
        iStack_230 = 0;
      }
      pUVar17 = Z_Construct_UClass_UClass_NoRegister();
      local_1d8._12_4_ = uStack_22c;
      local_1d8.Size = iStack_230;
      local_1d8.DataPtr = (wchar_t *)local_238;
      pUVar21 = UClass::TryFindTypeSlow(pUVar17,&local_1d8,None);
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      param_1 = local_2a0;
      if ((pUVar21 != (UField *)0x0) && (local_2a0 != (UClass *)0x0)) {
        iVar10 = (int)local_2a0->_padding_;
        if (((int)pUVar21[1]._padding_ < iVar10) ||
           ((longlong *)*(undefined1 **)(pUVar21[1]._padding_ + (longlong)iVar10 * 8) !=
            &local_2a0->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) goto LAB_14dd82f88;
      }
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    uVar23 = local_2c0 & 0xffffffff;
    this_00 = this_00 + 0xd;
    uVar25 = (ulonglong)local_2b8;
  }
  bVar8 = false;
  local_2f0.Index = 0xffffffff;
  local_2f0.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f0.ObjectArray.ArrayNum = 0;
  local_2f0.ObjectArray.ArrayMax = 0;
  EVar13 = GetAsyncLoadingInternalFlagsExclusion();
  pUVar17 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar17,&local_2f0.ObjectArray,true,RF_ClassDefaultObject,
                    EVar13 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UClass>::Advance(&local_2f0);
  pTVar16 = local_260;
  do {
    lVar26 = (longlong)local_2f0.Index;
    if ((local_2f0.Index < 0) || (local_2f0.ObjectArray.ArrayNum <= local_2f0.Index)) {
      if (local_2f0.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.ObjectArray.AllocatorInstance.Data);
      }
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FTopLevelAssetPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_a8);
      local_b0 = 0;
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_f8);
      local_100 = 0;
      if (local_108 != (void *)0x0) {
        FMemory::Free(local_108);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_148);
      if ((FTopLevelAssetPath *)local_158.Data != (FTopLevelAssetPath *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      DestructItems<FSoftObjectPath,int>(local_178,(int)local_170);
      if (local_178 != (FSoftObjectPath *)0x0) {
        FMemory::Free(local_178);
      }
      if (local_188 != (void *)0x0) {
        FMemory::Free(local_188);
      }
      if (local_198 != (void *)0x0) {
        FMemory::Free(local_198);
      }
      DestructItems<FAssetData,int>(local_2c8,(uint)local_2c0);
      if (local_2c8 != (FAssetData *)0x0) {
        FMemory::Free(local_2c8);
      }
      return pTVar16;
    }
    uVar12 = 0;
    if (local_2f0.Index < local_2f0.ObjectArray.ArrayNum) {
      uVar12 = (uint)~local_2f0.Index >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar16;
      }
    }
    if (param_1 != (UClass *)0x0) {
      iVar10 = (int)param_1->_padding_;
      if ((*(int *)(*(longlong *)(local_2f0.ObjectArray.AllocatorInstance.Data + lVar26 * 8) + 0x38)
           < iVar10) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)
             (*(longlong *)(local_2f0.ObjectArray.AllocatorInstance.Data + lVar26 * 8) + 0x30) +
           (longlong)iVar10 * 8) != &param_1->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        lVar26 = (longlong)local_2f0.Index;
        uVar11 = 0;
        uVar12 = uVar11;
        if (local_2f0.Index < local_2f0.ObjectArray.ArrayNum) {
          uVar12 = (uint)~local_2f0.Index >> 0x1f;
        }
        iVar10 = local_2f0.ObjectArray.ArrayNum;
        if (uVar12 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar16;
          }
          iVar10 = local_2f0.ObjectArray.ArrayNum;
        }
        iVar6 = local_2f0.Index;
        if ((*(uint *)(*(longlong *)(local_2f0.ObjectArray.AllocatorInstance.Data + lVar26 * 8) +
                      0xd4) & 0x82000001) == 0) {
          uVar12 = uVar11;
          if (local_2f0.Index < iVar10) {
            uVar12 = (uint)~local_2f0.Index >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar16;
          }
          local_258 = *(FName *)(*(longlong *)
                                  (local_2f0.ObjectArray.AllocatorInstance.Data +
                                  (longlong)iVar6 * 8) + 0x18);
          ::FName::ToString(&local_258,&local_218);
          bVar9 = ::FString::StartsWith(&local_218,L"SKEL_",5,IgnoreCase);
          if (bVar9) {
LAB_14dd8326f:
            bVar9 = true;
          }
          else {
            lVar26 = (longlong)local_2f0.Index;
            uVar12 = uVar11;
            if (local_2f0.Index < local_2f0.ObjectArray.ArrayNum) {
              uVar12 = (uint)~local_2f0.Index >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar16;
            }
            bVar8 = true;
            local_250 = *(FName *)(*(longlong *)
                                    (local_2f0.ObjectArray.AllocatorInstance.Data + lVar26 * 8) +
                                  0x18);
            ::FName::ToString(&local_250,&local_228);
            bVar9 = ::FString::StartsWith(&local_228,L"REINST_",7,IgnoreCase);
            if (bVar9) goto LAB_14dd8326f;
            bVar9 = false;
          }
          if ((bVar8) &&
             (bVar8 = false, local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (!bVar9) {
            lVar26 = (longlong)local_2f0.Index;
            if (local_2f0.Index < local_2f0.ObjectArray.ArrayNum) {
              uVar11 = (uint)~local_2f0.Index >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar4 = (code *)swi(3);
              pTVar16 = (TArray<UClass_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
              return pTVar16;
            }
            local_248[0] = *(UClass **)(local_2f0.ObjectArray.AllocatorInstance.Data + lVar26 * 8);
            TArray<UClass_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UClass_*>(pTVar16,local_248)
            ;
          }
        }
      }
    }
    TObjectIterator<UClass>::Advance(&local_2f0);
  } while( true );
}

// GenerateInverseSRGBTable @ 14dd84430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::GenerateInverseSRGBTable
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uint param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float _Y;
  double dVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateInverseSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
  FVar11;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FNameEntryId FVar12;
  FName FVar13;
  ulonglong uVar14;
  FNameEntryId FVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  LARGE_INTEGER local_res8;
  FName local_res18;
  FStatMessage local_88 [6];
  
  uVar14 = 0;
  FVar15.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ImageQuant_TableGeneration ==
        (FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateInverseSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res8.s,"STAT_ImageQuant_TableGeneration");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,*pFVar10,
                 L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_ImageQuant_TableGeneration;
  if (StatPtr_STAT_ImageQuant_TableGeneration ==
      (FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateInverseSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
       )0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_ImageQuant_TableGeneration");
    FVar11 = (FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateInverseSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,
                          *pFVar10,L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar2 = false;
  bVar4 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar16 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                   ,0x50);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar3 = true;
      FVar15.Value = FVar12.Value;
      goto LAB_14dd845c2;
    }
  }
  bVar3 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_14dd845c2:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (__return_storage_ptr__,param_1,Default);
  dVar8 = __real_3fa4b5dcc63f1412;
  _Y = __real_4019999a;
  fVar7 = __real_3f72a76f;
  fVar6 = __real_3d9e8391;
  fVar5 = __real_3d55891a;
  iVar9 = __return_storage_ptr__->ArrayNum;
  uVar17 = uVar14;
  if (0 < iVar9) {
    do {
      fVar18 = (float)(int)uVar17 / (float)(iVar9 + -1);
      if (dVar8 < (double)fVar18) {
        fVar18 = powf(fVar18 * fVar7 + fVar5,_Y);
      }
      else {
        fVar18 = fVar18 * fVar6;
      }
      uVar16 = (int)uVar17 + 1;
      *(float *)((__return_storage_ptr__->AllocatorInstance).Data + uVar14) = fVar18;
      uVar14 = uVar14 + 4;
      iVar9 = __return_storage_ptr__->ArrayNum;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < iVar9);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_88[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_88[0].NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_88[0].StatData.Pad[4] = '\0';
      local_88[0].StatData.Pad[5] = '\0';
      local_88[0].StatData.Pad[6] = '\0';
      local_88[0].StatData.Pad[7] = '\0';
      local_88[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_88[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_88[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_88[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_88);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return __return_storage_ptr__;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// GenerateSRGBTable @ 14dd84870

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::GenerateSRGBTable
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uint param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float _Y;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  int iVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<,TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
  FVar16;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar17;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FNameEntryId FVar18;
  FName FVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_108;
  FName local_100;
  FStatMessage local_f0 [11];
  
  uVar21 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ImageQuant_TableGeneration ==
        (FThreadSafeStaticStat<,TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
         )0x0) {
      pFVar15 = ::FName::FName(&local_res20,"STAT_ImageQuant_TableGeneration");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,*pFVar15,
                 L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_ImageQuant_TableGeneration;
  if (StatPtr_STAT_ImageQuant_TableGeneration ==
      (FThreadSafeStaticStat<,TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
       )0x0) {
    pFVar15 = ::FName::FName(&local_108,"STAT_ImageQuant_TableGeneration");
    FVar16 = (FThreadSafeStaticStat<,TArray<unsigned_char,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTable(unsigned_int)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,
                          *pFVar15,L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar16;
  bVar3 = false;
  bVar5 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar20 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar18.Value;
        local_res8.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                   ,0x35);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar18.Value;
      local_res18.s.HighPart = uVar20;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar4 = true;
      goto LAB_14dd849e7;
    }
  }
  bVar4 = false;
  FVar19 = local_100;
LAB_14dd849e7:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if ((int)param_1 < 1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
  }
  else {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1,&__return_storage_ptr__->AllocatorInstance,piVar1,
               &__return_storage_ptr__->ArrayMax);
  }
  fVar12 = __real_3b4d2e1c;
  fVar11 = __real_437f0000;
  fVar10 = __real_3f000000;
  fVar9 = __real_414eb852;
  fVar8 = __real_3f870a3d;
  fVar7 = __real_3f800000;
  _Y = __real_3ed55555;
  fVar6 = __real_3d6147ae;
  iVar14 = *piVar1;
  uVar22 = uVar21;
  if (0 < iVar14) {
    do {
      fVar23 = (float)(int)uVar21 / (float)(iVar14 + -1);
      if (fVar12 < fVar23) {
        fVar23 = powf(fVar23,_Y);
        fVar23 = fVar23 * fVar8 - fVar6;
      }
      else {
        fVar23 = fVar23 * fVar9;
      }
      if (((fVar23 < 0.0) || (fVar7 < fVar23)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ValueAsLinear >= 0.f && ValueAsLinear <= 1.f",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                              ,0x47,L""), bVar13)) {
        pcVar2 = (code *)swi(3);
        pTVar17 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar17;
      }
      uVar20 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar20;
      (__return_storage_ptr__->AllocatorInstance).Data[uVar22] =
           SUB41((int)(fVar23 * fVar11 + fVar10),0);
      iVar14 = *piVar1;
      uVar22 = uVar22 + 1;
    } while ((int)uVar20 < iVar14);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar19 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_f0[0].NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_f0[0].NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_f0[0].StatData.Pad[4] = '\0';
      local_f0[0].StatData.Pad[5] = '\0';
      local_f0[0].StatData.Pad[6] = '\0';
      local_f0[0].StatData.Pad[7] = '\0';
      local_f0[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_f0[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_f0[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_f0[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,local_f0);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// GenerateSRGBTableFloat16to16 @ 14dd84d70

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FFloat16,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::GenerateSRGBTableFloat16to16
          (TArray<FFloat16,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float _Y;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<,TArray<FFloat16,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16to16(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
  FVar14;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  float fVar19;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_88 [6];
  
  iVar18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_ImageQuant_TableGeneration ==
          (FThreadSafeStaticStat<,TArray<FFloat16,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16to16(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
           )0x0) {
        pFVar13 = ::FName::FName((FName *)&local_res8.s,"STAT_ImageQuant_TableGeneration");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,*pFVar13,
                   L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar14 = StatPtr_STAT_ImageQuant_TableGeneration;
  if (StatPtr_STAT_ImageQuant_TableGeneration ==
      (FThreadSafeStaticStat<,TArray<FFloat16,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16to16(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
       )0x0) {
    pFVar13 = ::FName::FName(&local_res10,"STAT_ImageQuant_TableGeneration");
    FVar14 = (FThreadSafeStaticStat<,TArray<FFloat16,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16to16(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,
                          *pFVar13,L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar11 = local_res8.s.LowPart._2_2_;
  uVar9 = local_res8.s.LowPart._0_2_;
  FVar16 = *(FName *)FVar14;
  bVar2 = false;
  bVar4 = false;
  uVar15 = FVar16.Number;
  if ((FVar16.ComparisonIndex.Value.Value != 0) || (uVar15 != 0)) {
    local_res8.s.LowPart._0_2_ = FVar16.ComparisonIndex.Value._0_2_;
    uVar10 = local_res8.s.LowPart._0_2_;
    local_res8.s.LowPart._2_2_ = FVar16.ComparisonIndex.Value._2_2_;
    uVar12 = local_res8.s.LowPart._2_2_;
    local_res8.s.LowPart._0_2_ = uVar9;
    local_res8.s.LowPart._2_2_ = uVar11;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart._0_2_ = 0;
      local_res8.s.LowPart._2_2_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart._0_2_ = uVar10;
        local_res8.s.LowPart._2_2_ = uVar12;
        local_res8.s.HighPart = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                   ,0x8e);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart._0_2_ = uVar10;
      local_res8.s.LowPart._2_2_ = uVar12;
      local_res8.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar3 = true;
      goto LAB_14dd84f03;
    }
  }
  bVar3 = false;
  FVar16.ComparisonIndex.Value = 0;
  FVar16.Number = 0;
LAB_14dd84f03:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,0x10000,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  fVar8 = __real_3b4d2e1c;
  fVar7 = __real_414eb852;
  fVar6 = __real_3f870a3d;
  _Y = __real_3ed55555;
  fVar5 = __real_3d6147ae;
  pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
  do {
    local_res8.s.LowPart._0_2_ = (undefined2)iVar18;
    fVar19 = FGenericPlatformMath::LoadHalf((ushort *)&local_res8.QuadPart);
    if (fVar8 < fVar19) {
      fVar19 = powf(fVar19,_Y);
      fVar19 = fVar19 * fVar6 - fVar5;
    }
    else {
      fVar19 = fVar19 * fVar7;
    }
    FGenericPlatformMath::StoreHalf((ushort *)pFVar17,fVar19);
    iVar18 = iVar18 + 1;
    pFVar17 = pFVar17 + 2;
  } while (iVar18 < 0x10000);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_88[0].NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_88[0].NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_88[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_88[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      local_88[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_88[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_88[0].StatData.Pad[4] = '\0';
      local_88[0].StatData.Pad[5] = '\0';
      local_88[0].StatData.Pad[6] = '\0';
      local_88[0].StatData.Pad[7] = '\0';
      FThreadStats::AddStatMessage(this,local_88);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// GenerateSRGBTableFloat16toFloat @ 14dd85150

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
UE::MoviePipeline::GenerateSRGBTableFloat16toFloat
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float _Y;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16toFloat(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
  FVar14;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar15;
  longlong lVar16;
  FName FVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  float fVar22;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_88 [6];
  
  iVar18 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ImageQuant_TableGeneration ==
        (FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16toFloat(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
         )0x0) {
      pFVar13 = ::FName::FName((FName *)&local_res8.s,"STAT_ImageQuant_TableGeneration");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,*pFVar13,
                 L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_ImageQuant_TableGeneration;
  if (StatPtr_STAT_ImageQuant_TableGeneration ==
      (FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16toFloat(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
       )0x0) {
    pFVar13 = ::FName::FName(&local_res10,"STAT_ImageQuant_TableGeneration");
    FVar14 = (FThreadSafeStaticStat<,TArray<float,TSizedDefaultAllocator<32>_>___cdecl_UE::MoviePipeline::GenerateSRGBTableFloat16toFloat(void)_::_2_::FStat_STAT_ImageQuant_TableGeneration>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuant_TableGeneration,
                          *pFVar13,L"STAT_ImageQuant_TableGeneration","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  uVar11 = local_res8.s.LowPart._2_2_;
  uVar9 = local_res8.s.LowPart._0_2_;
  FVar17 = *(FName *)FVar14;
  bVar2 = false;
  bVar4 = false;
  uVar15 = FVar17.Number;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (uVar15 != 0)) {
    local_res8.s.LowPart._0_2_ = FVar17.ComparisonIndex.Value._0_2_;
    uVar10 = local_res8.s.LowPart._0_2_;
    local_res8.s.LowPart._2_2_ = FVar17.ComparisonIndex.Value._2_2_;
    uVar12 = local_res8.s.LowPart._2_2_;
    local_res8.s.LowPart._0_2_ = uVar9;
    local_res8.s.LowPart._2_2_ = uVar11;
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart._0_2_ = 0;
      local_res8.s.LowPart._2_2_ = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart._0_2_ = uVar10;
        local_res8.s.LowPart._2_2_ = uVar12;
        local_res8.s.HighPart = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                   ,0x67);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart._0_2_ = uVar10;
      local_res8.s.LowPart._2_2_ = uVar12;
      local_res8.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar3 = true;
      goto LAB_14dd852d5;
    }
  }
  bVar3 = false;
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
LAB_14dd852d5:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,0x10000,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  pFVar21 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_res8.s.LowPart._0_2_ = 0;
  FGenericPlatformMath::StoreHalf((ushort *)&local_res8.QuadPart,__real_3f800000);
  uVar9 = local_res8.s.LowPart._0_2_;
  uVar20 = (ulonglong)(ushort)local_res8.s.LowPart._0_2_;
  if (uVar20 < 0x8000) {
    pFVar19 = pFVar21 + uVar20 * 4;
    for (lVar16 = 0x8000 - uVar20; lVar16 != 0; lVar16 = lVar16 + -1) {
      *(undefined4 *)pFVar19 = 0x437f0000;
      pFVar19 = pFVar19 + 4;
    }
  }
  memset(pFVar21 + 0x20000,0,0x20000);
  fVar8 = __real_454de99a;
  fVar7 = __real_43868333;
  fVar6 = __real_41606666;
  fVar5 = __real_3b4d2e1c;
  _Y = __real_3ed55555;
  if (uVar9 != 0) {
    do {
      local_res8.s.LowPart._0_2_ = (undefined2)iVar18;
      fVar22 = FGenericPlatformMath::LoadHalf((ushort *)&local_res8.QuadPart);
      if (fVar5 < fVar22) {
        fVar22 = powf(fVar22,_Y);
        fVar22 = fVar22 * fVar7 - fVar6;
      }
      else {
        fVar22 = fVar22 * fVar8;
      }
      *(float *)pFVar21 = fVar22;
      iVar18 = iVar18 + 1;
      pFVar21 = pFVar21 + 4;
    } while (iVar18 < (int)(uint)(ushort)uVar9);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_88[0].NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_88[0].NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_88[0].StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_88[0].StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      local_88[0].StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_88[0].StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_88[0].StatData.Pad[4] = '\0';
      local_88[0].StatData.Pad[5] = '\0';
      local_88[0].StatData.Pad[6] = '\0';
      local_88[0].StatData.Pad[7] = '\0';
      FThreadStats::AddStatMessage(this,local_88);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return __return_storage_ptr__;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetAlphaOutputOverride @ 14dd86080

bool __cdecl UE::MoviePipeline::GetAlphaOutputOverride(void)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarMoviePipelineAlphaOutputOverride.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// GetCachedGPUDriverInfo @ 14dd861c0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::GetCachedGPUDriverInfo
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1)

{
  TPairInitializer<FString_&&,FString_&&> local_res10;
  FString local_a8;
  FString *local_98;
  FString *local_90;
  FString local_88;
  FGPUDriverInfo local_78;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::MoviePipeline::GetCachedGPUDriverInfo'::__l2::
             _dynamic_atexit_destructor_for__CachedInfo__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if (0 < (int)(CachedInfo._8_4_ - CachedInfo._52_4_)) {
    TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Append<FDefaultSetAllocator>(param_1,&CachedInfo);
    return;
  }
  FWindowsPlatformMisc::GetGPUDriverInfo(&local_78,&GRHIGlobals.GpuInfo.AdapterName,true);
  ::FString::PrintfImpl(&local_a8,L"%u");
  ::FString::FString(&local_88,L"unreal/system/gpu/vendorId");
  local_98 = &local_88;
  local_90 = &local_a8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&CachedInfo,&local_res10,(bool *)&local_98);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"unreal/system/gpu/deviceDescription");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&CachedInfo,&local_a8,&local_78.DeviceDescription);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"unreal/system/gpu/providerName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&CachedInfo,&local_a8,&local_78.ProviderName);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"unreal/system/gpu/internalDriverVersion");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&CachedInfo,&local_a8,&local_78.InternalDriverVersion);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"unreal/system/gpu/userDriverVersion");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&CachedInfo,&local_a8,&local_78.UserDriverVersion);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"unreal/system/gpu/driverDate");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&CachedInfo,&local_a8,&local_78.DriverDate);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"unreal/system/gpu/rhiName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&CachedInfo,&local_a8,&local_78.RHIName);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Append<FDefaultSetAllocator>(param_1,&CachedInfo);
  if (local_78.RHIName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.RHIName.Data.AllocatorInstance.Data);
  }
  if (local_78.DriverDate.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DriverDate.Data.AllocatorInstance.Data);
  }
  if (local_78.UserDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.UserDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_78.InternalDriverVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_78.InternalDriverVersion.Data.AllocatorInstance.Data);
  }
  if (local_78.ProviderName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.ProviderName.Data.AllocatorInstance.Data);
  }
  if (local_78.DeviceDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DeviceDescription.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCameraOrientationForStereo @ 14dd86530

void __cdecl
UE::MoviePipeline::Panoramic::GetCameraOrientationForStereo
          (TVector<double> *param_1,TRotator<double> *param_2,TRotator<double> *param_3,
          FPanoramicPane *param_4,int param_5,bool param_6)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  undefined8 uVar15;
  bool bVar16;
  longlong lVar17;
  TQuat<double> *pTVar18;
  TRotator<double> *pTVar19;
  FPanoramicPane *pFVar20;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  uint uVar21;
  uint uVar22;
  double dStack_1d0;
  TArray<float,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<float,TSizedDefaultAllocator<32>_> local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [32];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [32];
  TRotator<double> local_128;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TQuat<double> local_e8 [6];
  
  DistributeValuesInInterval
            (&local_1b8,__real_c25c0000,__real_425c0000,param_4->NumVerticalSteps,true);
  DistributeValuesInInterval(&local_1c8,0.0,__real_43b40000,param_4->NumHorizontalSteps,false);
  uVar21 = 0;
  if (param_4->HorizontalStepIndex < local_1c8.ArrayNum) {
    uVar21 = (uint)~param_4->HorizontalStepIndex >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar21 = 0;
  if (param_4->VerticalStepIndex < local_1b8.ArrayNum) {
    uVar21 = (uint)~param_4->VerticalStepIndex >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  __libm_sse2_sincos_();
  dVar8 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
          UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  dVar7 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
          UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  dVar6 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) *
          UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  dVar5 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  __libm_sse2_sincos_();
  dVar3 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
          UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X;
  dVar11 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
           UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y;
  lVar17 = 0x48;
  if (!param_6) {
    lVar17 = 0x30;
  }
  dVar9 = (double)CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00) *
          UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z;
  pdVar1 = (double *)((longlong)&(param_4->OriginalCameraLocation).field0_0x0 + lVar17);
  local_128.Pitch = *pdVar1;
  local_128.Yaw = pdVar1[1];
  local_128.Roll =
       *(double *)((longlong)&(param_4->OriginalCameraLocation).field0_0x0 + lVar17 + 0x10);
  dVar10 = (double)CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
  pTVar18 = UE::Math::TRotator<double>::Quaternion(&local_128,local_e8);
  local_108 = pTVar18->X;
  dStack_100 = pTVar18->Y;
  local_f8 = pTVar18->Z;
  dStack_f0 = pTVar18->W;
  local_188._8_4_ = SUB84(dVar7,0);
  local_188._0_8_ = dVar8;
  local_188._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  local_1a8._8_4_ = extraout_XMM0_Dc;
  local_1a8._0_8_ = dVar6;
  local_1a8._12_4_ = extraout_XMM0_Dd;
  dVar12 = local_108 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar8 * dStack_f0 +
           dVar6 * dStack_100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           local_f8 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar13 = local_108 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar7 * dStack_f0 +
           dVar5 * dStack_100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           local_f8 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar5 = local_108 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar6 * dStack_f0 +
          dVar8 * dStack_100 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          local_f8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = local_108 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          (double)local_1a8._8_8_ * dStack_f0 +
          (double)local_188._8_8_ * dStack_100 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          local_f8 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_148._8_4_ = SUB84(dVar9,0);
  local_148._0_8_ = dVar10;
  local_148._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uVar15 = local_148._8_8_;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dStack_1d0 = auVar4._8_8_;
  dVar7 = dVar12 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar11 * dVar6 +
          dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dStack_1d0 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_168._8_4_ = SUB84(dVar7,0);
  local_168._0_8_ =
       dVar12 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar3 * dVar6 +
       dVar9 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar5 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_168._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  dVar7 = dVar12 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar10 * dVar6 +
          dVar11 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dStack_1d0 * (double)local_148._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_158._8_4_ = SUB84(dVar7,0);
  local_158._0_8_ =
       dVar12 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
       dVar9 * dVar6 +
       dVar3 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar5 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_158._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  pTVar19 = UE::Math::TRotator<double>::TRotator<double>
                      ((TRotator<double> *)local_148,(TQuat<double> *)local_168);
  dVar6 = pTVar19->Yaw;
  param_2->Pitch = pTVar19->Pitch;
  param_2->Yaw = dVar6;
  param_2->Roll = pTVar19->Roll;
  dVar6 = dVar3 * (double)local_1a8._8_8_;
  dVar5 = (double)local_1a8._8_8_ * dVar9;
  dVar7 = (double)local_1a8._8_8_ * dVar10;
  dVar8 = (double)local_188._0_8_ * (double)uVar15 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar11 * (double)local_1a8._8_8_ +
          (double)local_188._8_8_ * dVar10 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          (double)local_1a8._0_8_ * dVar3 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar12 = (double)local_1a8._0_8_ * dVar10;
  dVar13 = (double)local_1a8._0_8_ * (double)uVar15;
  local_1a8._8_4_ = SUB84(dVar8,0);
  local_1a8._0_8_ =
       (double)local_188._0_8_ * dVar10 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar6 +
       (double)local_188._8_8_ * dVar9 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)local_1a8._0_8_ * dVar11 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_1a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar6 = (double)local_188._0_8_ * dVar3 *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar7 +
          dVar11 * (double)local_188._8_8_ *
          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_198._8_4_ = SUB84(dVar6,0);
  local_198._0_8_ =
       (double)local_188._0_8_ * dVar11 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar5 +
       dVar3 * (double)local_188._8_8_ *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_198._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  pTVar19 = UE::Math::TRotator<double>::TRotator<double>
                      ((TRotator<double> *)local_188,(TQuat<double> *)local_1a8);
  dVar3 = pTVar19->Yaw;
  param_3->Pitch = pTVar19->Pitch;
  param_3->Yaw = dVar3;
  param_3->Roll = pTVar19->Roll;
  if (param_5 < 0) {
    pFVar20 = (FPanoramicPane *)&param_4->PrevOriginalCameraLocation;
    if (!param_6) {
      pFVar20 = param_4;
    }
    dVar3 = (pFVar20->OriginalCameraLocation).field0_0x0._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (pFVar20->OriginalCameraLocation).field0_0x0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar3;
    (param_1->field0_0x0)._s_0.Z = (pFVar20->OriginalCameraLocation).field0_0x0._s_0.Z;
  }
  else {
    if ((1 < (uint)param_5) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InStereoIndex == 0 || InStereoIndex == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineUtils.cpp"
                            ,0x5d2,L""), bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar14 = __real_3f000000;
    if (param_5 == 0) {
      fVar14 = __real_bf000000;
    }
    dVar3 = (double)(param_4->EyeSeparation * fVar14);
    pFVar20 = (FPanoramicPane *)&param_4->PrevOriginalCameraLocation;
    if (!param_6) {
      pFVar20 = param_4;
    }
    dVar6 = (pFVar20->OriginalCameraLocation).field0_0x0._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (pFVar20->OriginalCameraLocation).field0_0x0._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar6;
    (param_1->field0_0x0)._s_0.Z = (pFVar20->OriginalCameraLocation).field0_0x0._s_0.Z;
    dVar6 = dVar3 * (double)local_168._0_8_ + dVar3 * (double)local_168._0_8_;
    dVar5 = dVar3 * (double)local_158._0_8_ + dVar3 * (double)local_158._0_8_;
    uVar21 = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar22 = (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    (param_1->field0_0x0)._s_0.X =
         dVar6 * (double)local_168._8_8_ + (double)CONCAT44(uVar22,uVar21) * (double)local_158._8_8_
         + (param_1->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Z =
         (dVar6 * (double)local_158._8_8_ -
         (double)CONCAT44(uVar22,uVar21) * (double)local_168._8_8_) + (param_1->field0_0x0)._s_0.Z;
    (param_1->field0_0x0)._s_0.Y =
         ((double)CONCAT44(uVar22,uVar21) * (double)local_158._0_8_ -
         dVar6 * (double)local_168._0_8_) + dVar3 + (param_1->field0_0x0)._s_0.Y;
  }
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  return;
}

// GetColorBilinearFiltered @ 14dd86bb0

FLinearColor * __cdecl
UE::MoviePipeline::GetColorBilinearFiltered
          (FLinearColor *__return_storage_ptr__,FImagePixelData *param_1,TVector2<double> *param_2,
          bool *param_3,bool param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FLinearColor *pFVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  FLinearColor_u_0 local_e0;
  longlong local_d0;
  FLinearColor local_c8;
  FLinearColor local_b8;
  FLinearColor local_a8 [6];
  
  dVar5 = __real_3fe0000000000000;
  TVar3 = (param_1->Size).field0_0x0._s_0;
  iVar18 = TVar3.X + -1;
  iVar13 = (int)((longlong)
                 ROUND((((param_2->field0_0x0)._s_0.X - __real_3fe0000000000000) +
                       (param_2->field0_0x0)._s_0.X) - __real_3ff0000000000000) >> 1);
  iVar17 = iVar13 + 1;
  iVar9 = (int)((longlong)
                ROUND((((param_2->field0_0x0)._s_0.Y - __real_3fe0000000000000) +
                      (param_2->field0_0x0)._s_0.Y) - __real_3ff0000000000000) >> 1);
  iVar16 = iVar9 + 1;
  iVar7 = TVar3.Y;
  if ((((iVar18 < iVar13) || (iVar7 + -1 < iVar9)) || (iVar13 < 0)) || (iVar9 < 0)) {
    *param_3 = true;
  }
  iVar7 = iVar7 + -1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  if (iVar13 < iVar18) {
    iVar18 = iVar13;
  }
  iVar14 = 0;
  iVar20 = iVar14;
  if (0 < iVar18) {
    iVar20 = iVar18;
  }
  iVar18 = iVar14;
  if (0 < iVar7) {
    iVar18 = iVar7;
  }
  TVar3 = (param_1->Size).field0_0x0._s_0;
  iVar19 = TVar3.X + -1;
  iVar7 = TVar3.Y;
  if (((iVar19 < iVar17) || (iVar7 + -1 < iVar9)) || ((iVar17 < 0 || (iVar9 < 0)))) {
    *param_3 = true;
  }
  iVar7 = iVar7 + -1;
  if (iVar9 < iVar7) {
    iVar7 = iVar9;
  }
  iVar9 = 0;
  if (iVar17 < iVar19) {
    iVar19 = iVar17;
  }
  iVar10 = iVar9;
  if (0 < iVar19) {
    iVar10 = iVar19;
  }
  iVar19 = iVar14;
  if (0 < iVar7) {
    iVar19 = iVar7;
  }
  TVar3 = (param_1->Size).field0_0x0._s_0;
  iVar11 = TVar3.X + -1;
  iVar7 = TVar3.Y;
  if (((iVar11 < iVar13) || (iVar7 + -1 < iVar16)) || ((iVar13 < 0 || (iVar16 < 0)))) {
    *param_3 = true;
  }
  iVar7 = iVar7 + -1;
  if (iVar16 < iVar7) {
    iVar7 = iVar16;
  }
  if (iVar13 < iVar11) {
    iVar11 = iVar13;
  }
  iVar13 = iVar9;
  if (0 < iVar11) {
    iVar13 = iVar11;
  }
  iVar11 = iVar14;
  if (0 < iVar7) {
    iVar11 = iVar7;
  }
  TVar3 = (param_1->Size).field0_0x0._s_0;
  iVar12 = TVar3.X + -1;
  iVar7 = TVar3.Y;
  if ((((iVar12 < iVar17) || (iVar7 + -1 < iVar16)) || (iVar17 < 0)) || (iVar16 < 0)) {
    *param_3 = true;
  }
  iVar7 = iVar7 + -1;
  local_d0 = 0;
  local_f0 = 0;
  if (iVar16 < iVar7) {
    iVar7 = iVar16;
  }
  if (iVar17 < iVar12) {
    iVar12 = iVar17;
  }
  if (0 < iVar12) {
    iVar9 = iVar12;
  }
  if (0 < iVar7) {
    iVar14 = iVar7;
  }
  (**(code **)(param_1->_padding_ + 8))(param_1,&local_d0,&local_f0);
  lVar15 = 0;
  if ((local_d0 != 0) &&
     (local_f0 ==
      (ulonglong)(param_1->BitDepth >> 3) * (ulonglong)param_1->NumChannels *
      (longlong)(param_1->Size).field0_0x0._s_0.Y * (longlong)(param_1->Size).field0_0x0._s_0.X)) {
    lVar15 = local_d0;
  }
  if (param_1->Type == Float16) {
    pFVar8 = FLinearColor::FLinearColor
                       ((FLinearColor *)&local_e0._s_0,
                        (FFloat16Color *)
                        (lVar15 + (longlong)(iVar18 * (param_1->Size).field0_0x0._s_0.X + iVar20) *
                                  8));
    local_e0._0_8_ = *(undefined8 *)&pFVar8->field0_0x0;
    local_e0._8_8_ = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
    pFVar8 = FLinearColor::FLinearColor
                       (&local_c8,
                        (FFloat16Color *)
                        (lVar15 + (longlong)(iVar19 * (param_1->Size).field0_0x0._s_0.X + iVar10) *
                                  8));
    local_110 = *(undefined8 *)&pFVar8->field0_0x0;
    uStack_108 = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
    pFVar8 = FLinearColor::FLinearColor
                       (&local_b8,
                        (FFloat16Color *)
                        (lVar15 + (longlong)(iVar11 * (param_1->Size).field0_0x0._s_0.X + iVar13) *
                                  8));
    local_100 = *(undefined8 *)&pFVar8->field0_0x0;
    uStack_f8 = *(undefined8 *)((longlong)&pFVar8->field0_0x0 + 8);
    pFVar8 = FLinearColor::FLinearColor
                       (local_a8,(FFloat16Color *)
                                 (lVar15 + (longlong)
                                           (iVar9 + iVar14 * (param_1->Size).field0_0x0._s_0.X) * 8)
                       );
    fVar21 = (pFVar8->field0_0x0)._s_0.R;
    fVar22 = (pFVar8->field0_0x0)._s_0.G;
    fStack_e8 = (pFVar8->field0_0x0)._s_0.B;
    fStack_e4 = (pFVar8->field0_0x0)._s_0.A;
  }
  else {
    if (param_1->Type != Float32) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelinePanoramicBlenderBase.cpp"
                         ,0x53,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FLinearColor *)(*pcVar4)();
        return pFVar8;
      }
      goto LAB_14dd86ee3;
    }
    iVar7 = (param_1->Size).field0_0x0._s_0.X;
    puVar1 = (undefined8 *)(lVar15 + (longlong)(iVar7 * iVar18 + iVar20) * 0x10);
    local_e0._0_8_ = *puVar1;
    local_e0._8_8_ = puVar1[1];
    puVar1 = (undefined8 *)(lVar15 + (longlong)(iVar7 * iVar19 + iVar10) * 0x10);
    local_110 = *puVar1;
    uStack_108 = puVar1[1];
    puVar1 = (undefined8 *)(lVar15 + (longlong)(iVar7 * iVar11 + iVar13) * 0x10);
    local_100 = *puVar1;
    uStack_f8 = puVar1[1];
    pfVar2 = (float *)(lVar15 + (longlong)(iVar9 + iVar7 * iVar14) * 0x10);
    fVar21 = *pfVar2;
    fVar22 = pfVar2[1];
    fStack_e8 = pfVar2[2];
    fStack_e4 = pfVar2[3];
  }
  local_f0 = CONCAT44(fVar22,fVar21);
LAB_14dd86ee3:
  fVar24 = (float)(((param_2->field0_0x0)._s_0.X - (double)iVar20) - dVar5);
  fVar22 = __real_3f800000 - fVar24;
  fVar23 = (float)(((param_2->field0_0x0)._s_0.Y - (double)iVar18) - dVar5);
  fVar21 = __real_3f800000 - fVar23;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (local_e0._s_0.R * fVar22 + fVar24 * (float)local_110) * fVar21 +
       ((float)local_100 * fVar22 + fVar24 * (float)local_f0) * fVar23;
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       (local_e0._s_0.G * fVar22 + fVar24 * local_110._4_4_) * fVar21 +
       (local_100._4_4_ * fVar22 + fVar24 * local_f0._4_4_) * fVar23;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (local_e0._s_0.B * fVar22 + fVar24 * (float)uStack_108) * fVar21 +
       ((float)uStack_f8 * fVar22 + fVar24 * fStack_e8) * fVar23;
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (local_e0._s_0.A * fVar22 + fVar24 * uStack_108._4_4_) * fVar21 +
       (uStack_f8._4_4_ * fVar22 + fVar24 * fStack_e4) * fVar23;
  if (param_4) {
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  }
  return __return_storage_ptr__;
}

// GetColorCubicFiltered @ 14dd870b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __cdecl
UE::MoviePipeline::GetColorCubicFiltered
          (FLinearColor *__return_storage_ptr__,FImagePixelData *param_1,TVector2<double> *param_2,
          float param_3,float param_4,bool *param_5,bool param_6)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FLinearColor *pFVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong local_120;
  longlong local_118;
  float afStack_110 [4];
  float afStack_100 [4];
  FLinearColor local_f0 [11];
  
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  iVar9 = -1;
  iVar5 = (int)((longlong)
                ROUND(((dVar2 - __real_3fe0000000000000) + dVar2) - __real_3ff0000000000000) >> 1);
  lVar11 = 0;
  iVar14 = (int)((longlong)
                 ROUND(((dVar3 - __real_3fe0000000000000) + dVar3) - __real_3ff0000000000000) >> 1);
  lVar7 = lVar11;
  do {
    fVar20 = param_3 + param_3;
    fVar16 = (float)((uint)((float)iVar9 -
                           (float)((dVar2 - (double)iVar5) - __real_3fe0000000000000)) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar15 = fVar16 * fVar16;
    if (__real_3f800000 < fVar16) {
      if (__real_40000000 <= fVar16) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (((param_4 * __real_40a00000 + param_3) * fVar15 -
                  (param_4 * __real_40c00000 + param_3) * fVar15 * fVar16 * __real_3e2aaaab) -
                 (param_4 * __real_41000000 + fVar20) * fVar16) +
                 param_3 * ___real_3faaaaab + param_4 * __real_40800000;
      }
    }
    else {
      fVar15 = ((__real_40000000 - param_3 * __real_3fc00000) - param_4) * fVar15 * fVar16 +
               ((fVar20 + param_4) - __real_40400000) * fVar15 +
               (__real_3f800000 - param_3 * __real_3eaaaaab);
    }
    *(float *)((longlong)afStack_100 + lVar7) = fVar15;
    fVar16 = (float)((uint)((float)iVar9 -
                           (float)((dVar3 - (double)iVar14) - __real_3fe0000000000000)) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar15 = fVar16 * fVar16;
    if (__real_3f800000 < fVar16) {
      if (__real_40000000 <= fVar16) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = (((param_4 * __real_40a00000 + param_3) * fVar15 -
                  (param_4 * __real_40c00000 + param_3) * fVar15 * fVar16 * __real_3e2aaaab) -
                 (param_4 * __real_41000000 + fVar20) * fVar16) +
                 param_3 * ___real_3faaaaab + param_4 * __real_40800000;
      }
    }
    else {
      fVar15 = ((__real_40000000 - param_3 * __real_3fc00000) - param_4) * fVar15 * fVar16 +
               ((fVar20 + param_4) - __real_40400000) * fVar15 +
               (__real_3f800000 - param_3 * __real_3eaaaaab);
    }
    iVar9 = iVar9 + 1;
    *(float *)((longlong)afStack_110 + lVar7) = fVar15;
    lVar7 = lVar7 + 4;
  } while (lVar7 < 0x10);
  local_120 = 0;
  local_118 = 0;
  (**(code **)(param_1->_padding_ + 8))(param_1,&local_120,&local_118);
  if ((local_120 != 0) &&
     (local_118 ==
      (ulonglong)(param_1->BitDepth >> 3) * (ulonglong)param_1->NumChannels *
      (longlong)(param_1->Size).field0_0x0._s_0.X * (longlong)(param_1->Size).field0_0x0._s_0.Y)) {
    lVar11 = local_120;
  }
  *param_5 = false;
  lVar7 = 0;
  iVar14 = iVar14 + -1;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  do {
    fVar15 = afStack_110[lVar7];
    iVar9 = (param_1->Size).field0_0x0._s_0.Y + -1;
    if (iVar14 < iVar9) {
      iVar9 = iVar14;
    }
    iVar12 = 0;
    if (0 < iVar9) {
      iVar12 = iVar9;
    }
    lVar13 = 0;
    iVar9 = iVar5 + -1;
    do {
      iVar4 = (param_1->Size).field0_0x0._s_0.X;
      fVar16 = 0.0;
      fVar20 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      iVar6 = iVar4 + -1;
      if (iVar9 < iVar6) {
        iVar6 = iVar9;
      }
      iVar10 = 0;
      if (0 < iVar6) {
        iVar10 = iVar6;
      }
      iVar10 = iVar10 + iVar4 * iVar12;
      if (param_1->Type == Float16) {
        pFVar8 = FLinearColor::FLinearColor
                           (local_f0,(FFloat16Color *)(lVar11 + (longlong)iVar10 * 8));
        fVar16 = (pFVar8->field0_0x0)._s_0.R;
        fVar20 = (pFVar8->field0_0x0)._s_0.G;
        fVar18 = (pFVar8->field0_0x0)._s_0.B;
        fVar19 = (pFVar8->field0_0x0)._s_0.A;
      }
      else if (param_1->Type == Float32) {
        pfVar1 = (float *)(lVar11 + (longlong)iVar10 * 0x10);
        fVar16 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar19 = pfVar1[3];
      }
      iVar9 = iVar9 + 1;
      fVar17 = fVar15 * afStack_100[lVar13];
      lVar13 = lVar13 + 1;
      (__return_storage_ptr__->field0_0x0)._s_0.R =
           fVar17 * fVar16 + (__return_storage_ptr__->field0_0x0)._s_0.R;
      (__return_storage_ptr__->field0_0x0)._s_0.G =
           fVar17 * fVar20 + (__return_storage_ptr__->field0_0x0)._s_0.G;
      (__return_storage_ptr__->field0_0x0)._s_0.B =
           fVar17 * fVar18 + (__return_storage_ptr__->field0_0x0)._s_0.B;
      (__return_storage_ptr__->field0_0x0)._s_0.A =
           fVar17 * fVar19 + (__return_storage_ptr__->field0_0x0)._s_0.A;
    } while (lVar13 < 4);
    iVar14 = iVar14 + 1;
    lVar7 = lVar7 + 1;
  } while (lVar7 < 4);
  if (param_6) {
    (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  }
  return __return_storage_ptr__;
}

// GetDiagnosticMetadata @ 14dd876a0

void __cdecl
UE::MoviePipeline::GetDiagnosticMetadata
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,bool param_2)

{
  FEngineVersion *this;
  FString *pFVar1;
  wchar_t *pwVar2;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  FString local_18;
  
  this = FEngineVersion::Current();
  pFVar1 = FEngineVersion::ToString(this,&local_18,Branch);
  ::FString::FString((FString *)local_28,L"unreal/build");
  local_38._0_8_ = local_28;
  local_38._8_8_ = pFVar1;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_38
            );
  if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pwVar2 = L"true";
  if (!param_2) {
    pwVar2 = L"false";
  }
  ::FString::FString(&local_18,pwVar2);
  ::FString::FString((FString *)local_38,L"unreal/usesGraph");
  local_28._0_8_ = local_38;
  local_28._8_8_ = &local_18;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000010,(bool *)local_28
            );
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetEffectiveAntiAliasingMethod @ 14dd877b0

EAntiAliasingMethod __cdecl
UE::MovieRenderPipeline::GetEffectiveAntiAliasingMethod(UMoviePipelineAntiAliasingSetting *param_1)

{
  code *pcVar1;
  bool bVar2;
  EAntiAliasingMethod EVar3;
  longlong *plVar4;
  
  if ((param_1 == (UMoviePipelineAntiAliasingSetting *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineUtils.cpp"
                         ,0x9c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  if (param_1->bOverrideAntiAliasing != false) {
    return (EAntiAliasingMethod)(param_1->AntiAliasingMethod).Value;
  }
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.AntiAliasingMethod",1);
  if ((plVar4 != (longlong *)0x0) && (EVar3 = (**(code **)(*plVar4 + 200))(plVar4), EVar3 < AAM_MAX)
     ) {
    return EVar3;
  }
  return AAM_None;
}

// GetEffectiveAntiAliasingMethod @ 14dd87880

EAntiAliasingMethod __cdecl
UE::MovieRenderPipeline::GetEffectiveAntiAliasingMethod(bool param_1,EAntiAliasingMethod param_2)

{
  code *pcVar1;
  bool bVar2;
  EAntiAliasingMethod EVar3;
  EAntiAliasingMethod EVar4;
  longlong *plVar5;
  
  if (param_1) {
    return param_2;
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
  }
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.AntiAliasingMethod",1);
  if (plVar5 != (longlong *)0x0) {
    EVar4 = (**(code **)(*plVar5 + 200))(plVar5);
    EVar3 = AAM_None;
    if (EVar4 < AAM_MAX) {
      EVar3 = EVar4;
    }
    return EVar3;
  }
  return AAM_None;
}

// GetHardwareUsageMetadata @ 14dd887f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::GetHardwareUsageMetadata
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_HardwareMetadata> FVar7;
  FStatNameAndInfo FVar8;
  FString *pFVar9;
  FStatMessage *pFVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  LARGE_INTEGER local_res8;
  FName local_res10;
  ulong64 local_res18;
  undefined1 local_128 [16];
  FStatMessage local_118;
  undefined1 local_108 [16];
  FName local_f8;
  FString local_e8;
  FString local_d8;
  FPlatformMemoryStats local_c8;
  
  FVar7 = StatPtr_STAT_HardwareMetadata;
  if (StatPtr_STAT_HardwareMetadata ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_HardwareMetadata>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_HardwareMetadata");
    FVar7 = (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_HardwareMetadata>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_HardwareMetadata,*pFVar6,
                       L"STAT_MoviePipeline_HardwareMetadata","STATGROUP_MoviePipeline",
                       "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar13 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar12.Value;
        local_res8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineUtils.cpp"
                   ,0x457);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar12.Value;
      local_res8.s.HighPart = uVar11;
      local_f8 = FVar13;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      FVar12.Value = local_f8.ComparisonIndex.Value;
      goto LAB_14dd88953;
    }
  }
  bVar4 = false;
  FVar13 = local_f8;
  FVar12.Value = 0;
LAB_14dd88953:
  FVar8 = (FStatNameAndInfo)FWindowsPlatformMisc::GetCPUVendor((FString *)local_108);
  ::FString::FString((FString *)local_128,L"unreal/system/cpuVendor");
  local_118.StatData.Pad = (uchar  [8])local_128;
  local_118.NameAndInfo = FVar8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)&local_118)
  ;
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  pFVar9 = FGenericPlatformMisc::GetCPUChipset((FString *)local_108);
  ::FString::FString((FString *)&local_118,L"unreal/system/cpuChipset");
  local_128._0_8_ = &local_118;
  local_128._8_8_ = pFVar9;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_128);
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  pFVar9 = FWindowsPlatformMisc::GetCPUBrand((FString *)local_108);
  ::FString::FString((FString *)&local_118,L"unreal/system/cpuBrand");
  local_128._0_8_ = &local_118;
  local_128._8_8_ = pFVar9;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_128);
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  FWindowsPlatformMisc::GetOSVersions(&local_d8,&local_e8);
  ::FString::FString((FString *)local_128,L"unreal/system/osVersion");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_128,&local_d8);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  ::FString::FString((FString *)local_128,L"unreal/system/osSubVersion");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_128,&local_e8);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  FGenericPlatformMisc::GetDeviceTemperatureLevel();
  ::FString::PrintfImpl((FString *)local_108,L"%f");
  ::FString::FString((FString *)&local_118,L"unreal/system/deviceTemp");
  local_128._0_8_ = &local_118;
  local_128._8_8_ = local_108;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_128);
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  pFVar10 = (FStatMessage *)FGenericPlatformMisc::GetDeviceMakeAndModel((FString *)&local_118);
  ::FString::FString((FString *)local_128,L"unreal/system/deviceMakeAndModel");
  local_108._0_8_ = local_128;
  local_108._8_8_ = pFVar10;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  iVar2 = (param_2->Data).ArrayNum;
  uVar11 = iVar2 - 1;
  if (iVar2 == 0) {
    uVar11 = 0;
  }
  if (0 < (int)uVar11) {
    FWindowsPlatformMisc::GetDiskTotalAndFreeSpace(param_2,(ulong64 *)&local_res10,&local_res18);
    ::FString::PrintfImpl((FString *)&local_118,L"%llu");
    ::FString::FString((FString *)local_128,L"unreal/stats/outputDirectoryTotalSizeMB");
    local_108._0_8_ = local_128;
    local_108._8_8_ = &local_118;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108
              );
    if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
    if (local_118.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_118.StatData.Pad);
    }
    ::FString::PrintfImpl((FString *)&local_118,L"%llu");
    ::FString::FString((FString *)local_128,L"unreal/stats/outputDirectoryTotalFreeMB");
    local_108._0_8_ = local_128;
    local_108._8_8_ = &local_118;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108
              );
    if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
      FMemory::Free((void *)local_128._0_8_);
    }
    if (local_118.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_118.StatData.Pad);
    }
  }
  GetCachedGPUDriverInfo(param_1);
  FWindowsPlatformMemory::GetStats(&local_c8);
  ::FString::PrintfImpl((FString *)&local_118,L"%llu");
  ::FString::FString((FString *)local_128,L"unreal/stats/memory/availablePhysicalMB");
  local_108._0_8_ = local_128;
  local_108._8_8_ = &local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  ::FString::PrintfImpl((FString *)&local_118,L"%llu");
  ::FString::FString((FString *)local_128,L"unreal/stats/memory/availableVirtualMB");
  local_108._0_8_ = local_128;
  local_108._8_8_ = &local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  ::FString::PrintfImpl((FString *)&local_118,L"%llu");
  ::FString::FString((FString *)local_128,L"unreal/stats/memory/totalPhysicalMB");
  local_108._0_8_ = local_128;
  local_108._8_8_ = &local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  ::FString::PrintfImpl((FString *)&local_118,L"%llu");
  ::FString::FString((FString *)local_128,L"unreal/stats/memory/totalVirtualMB");
  local_108._0_8_ = local_128;
  local_108._8_8_ = &local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  ::FString::PrintfImpl((FString *)&local_118,L"%llu");
  ::FString::FString((FString *)local_128,L"unreal/stats/memory/peakUsedPhysicalMB");
  local_108._0_8_ = local_128;
  local_108._8_8_ = &local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  ::FString::PrintfImpl((FString *)&local_118,L"%llu");
  ::FString::FString((FString *)local_128,L"unreal/stats/memory/peakUsedVirtualMB");
  local_108._0_8_ = local_128;
  local_108._8_8_ = &local_118;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_1,(TPairInitializer<FString_&&,FString_&&> *)&local_res8.s,(bool *)local_108);
  if ((FStatMessage *)local_128._0_8_ != (FStatMessage *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  if (local_118.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_118.StatData.Pad);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_118.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar13.Number,FVar12.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_118);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// GetJobAuthor @ 14dd890a0

FString * __cdecl
UE::MoviePipeline::GetJobAuthor(FString *__return_storage_ptr__,UMoviePipelineExecutorJob *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (param_1 != (UMoviePipelineExecutorJob *)0x0) {
    iVar1 = (param_1->Author).Data.ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      ::FString::FString(__return_storage_ptr__,&param_1->Author);
      return __return_storage_ptr__;
    }
  }
  pwVar2 = FWindowsPlatformProcess::UserName(false);
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// GetMetadataFromCameraLocRot @ 14dd89340

void __cdecl
UE::MoviePipeline::GetMetadataFromCameraLocRot
          (TVector<double> *param_1,TRotator<double> *param_2,TVector<double> *param_3,
          TRotator<double> *param_4,FString *param_5,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_6)

{
  TRotator<double> *pTVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *this;
  FString *pFVar2;
  TRotator<double> *local_res20;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  FString local_38;
  
  local_res20 = param_4;
  pFVar2 = ::FString::SanitizeFloat(&local_38,(param_1->field0_0x0)._s_0.X,1);
  ::FString::PrintfImpl((FString *)local_48,L"%s/curPos/x");
  this = param_6;
  local_58._0_8_ = local_48;
  local_58._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_6,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_58);
  if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_48._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,(param_1->field0_0x0)._s_0.Y,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/curPos/y");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,(param_1->field0_0x0)._s_0.Z,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/curPos/z");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,param_2->Pitch,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/curRot/pitch");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,param_2->Yaw,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/curRot/yaw");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,param_2->Roll,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/curRot/roll");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,(param_3->field0_0x0)._s_0.X,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/prevPos/x");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,(param_3->field0_0x0)._s_0.Y,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/prevPos/y");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,(param_3->field0_0x0)._s_0.Z,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/prevPos/z");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&param_5,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pTVar1 = local_res20;
  pFVar2 = ::FString::SanitizeFloat(&local_38,local_res20->Pitch,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/prevRot/pitch");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&local_res20,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,pTVar1->Yaw,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/prevRot/yaw");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&local_res20,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = ::FString::SanitizeFloat(&local_38,pTVar1->Roll,1);
  ::FString::PrintfImpl((FString *)local_58,L"%s/prevRot/roll");
  local_48._0_8_ = local_58;
  local_48._8_8_ = pFVar2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_&&,FString_&&> *)&local_res20,(bool *)local_48);
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetMetadataFromCameraLocRot @ 14dd898f0

void __cdecl
UE::MoviePipeline::GetMetadataFromCameraLocRot
          (FString *param_1,FString *param_2,TVector<double> *param_3,TRotator<double> *param_4,
          TVector<double> *param_5,TRotator<double> *param_6,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_7)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_28,L"%s/%s");
  if (((param_2->Data).ArrayNum < 2) && (&local_28 != param_1)) {
    iVar1 = (param_1->Data).ArrayNum;
    _Src = (param_1->Data).AllocatorInstance.Data;
    local_28.Data.ArrayNum = iVar1;
    if (((iVar1 != 0) || (local_28.Data.ArrayMax != 0)) &&
       (Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_28.Data.ArrayMax,(ForAnyElementType *)&local_28,iVar1,
                   &local_28.Data.ArrayMax), iVar1 != 0)) {
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
    }
  }
  ::FString::PrintfImpl(&local_18,L"unreal/%s");
  GetMetadataFromCameraLocRot(param_3,param_4,param_5,param_6,&local_18,param_7);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// GetMetadataFromCineCamera @ 14dd89a50

void __cdecl
UE::MoviePipeline::GetMetadataFromCineCamera
          (UCineCameraComponent *param_1,FString *param_2,FString *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"unreal/%s/%s");
  GetMetadataFromCineCamera(param_1,&local_18,param_4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetMetadataFromCineCamera @ 14dd89ad0

void __cdecl
UE::MoviePipeline::GetMetadataFromCineCamera
          (UCineCameraComponent *param_1,FString *param_2,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_3)

{
  FString *pFVar1;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (param_1 != (UCineCameraComponent *)0x0) {
    pFVar1 = ::FString::SanitizeFloat((FString *)local_28,(double)(param_1->Filmback).SensorWidth,1)
    ;
    ::FString::PrintfImpl((FString *)local_38,L"%s/sensorWidth");
    local_48 = (undefined1  [8])local_38;
    local_40 = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_48);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    pFVar1 = ::FString::SanitizeFloat
                       ((FString *)local_28,(double)(param_1->Filmback).SensorHeight,1);
    ::FString::PrintfImpl((FString *)local_48,L"%s/sensorHeight");
    local_38._0_8_ = local_48;
    local_38._8_8_ = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_38);
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    pFVar1 = ::FString::SanitizeFloat
                       ((FString *)local_28,(double)(param_1->Filmback).SensorAspectRatio,1);
    ::FString::PrintfImpl((FString *)local_48,L"%s/sensorAspectRatio");
    local_38._0_8_ = local_48;
    local_38._8_8_ = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_38);
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    pFVar1 = ::FString::SanitizeFloat
                       ((FString *)local_28,(double)(param_1->LensSettings).MinFocalLength,1);
    ::FString::PrintfImpl((FString *)local_48,L"%s/minFocalLength");
    local_38._0_8_ = local_48;
    local_38._8_8_ = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_38);
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    pFVar1 = ::FString::SanitizeFloat
                       ((FString *)local_28,(double)(param_1->LensSettings).MaxFocalLength,1);
    ::FString::PrintfImpl((FString *)local_48,L"%s/maxFocalLength");
    local_38._0_8_ = local_48;
    local_38._8_8_ = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_38);
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    pFVar1 = ::FString::SanitizeFloat
                       ((FString *)local_28,(double)(param_1->LensSettings).MinFStop,1);
    ::FString::PrintfImpl((FString *)local_48,L"%s/minFStop");
    local_38._0_8_ = local_48;
    local_38._8_8_ = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_38);
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    pFVar1 = ::FString::SanitizeFloat
                       ((FString *)local_28,(double)(param_1->LensSettings).MaxFStop,1);
    ::FString::PrintfImpl((FString *)local_48,L"%s/maxFStop");
    local_38._0_8_ = local_48;
    local_38._8_8_ = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_38);
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    local_48 = (undefined1  [8])0x0;
    local_40._0_4_ = 0;
    local_40._4_4_ = 0;
    ::FString::AppendInt((FString *)local_48,(param_1->LensSettings).DiaphragmBladeCount);
    ::FString::PrintfImpl((FString *)local_28,L"%s/dofDiaphragmBladeCount");
    local_38._0_8_ = local_28;
    local_38._8_8_ = local_48;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_38);
    if ((FScriptContainerElement *)local_28._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
    pFVar1 = ::FString::SanitizeFloat((FString *)local_48,(double)param_1->CurrentFocalLength,1);
    ::FString::PrintfImpl((FString *)local_38,L"%s/focalLength");
    local_28._0_8_ = local_38;
    local_28._8_8_ = pFVar1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)param_3,(TPairInitializer<FString_&&,FString_&&> *)&stack0x00000008,
               (bool *)local_28);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    if (local_48 != (undefined1  [8])0x0) {
      FMemory::Free((void *)local_48);
    }
  }
  return;
}

// GetMetadataPrefixPath @ 14dd89f50

FString * __cdecl
UE::MoviePipeline::GetMetadataPrefixPath
          (FString *__return_storage_ptr__,FMovieGraphRenderDataIdentifier *param_1)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"unreal/%s/%s/%s");
  return __return_storage_ptr__;
}

// GetPaddingFormatString @ 14dd8b580

FString * __cdecl
UE::MoviePipeline::GetPaddingFormatString(FString *__return_storage_ptr__,int param_1,int param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%0*d");
  return __return_storage_ptr__;
}

// GetRenderPassMetrics @ 14dd8c610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineRenderPassMetrics * __cdecl
UE::MoviePipeline::GetRenderPassMetrics
          (FMoviePipelineRenderPassMetrics *__return_storage_ptr__,
          UMoviePipelinePrimaryConfig *param_1,UMoviePipelineExecutorShot *param_2,
          FMoviePipelineRenderPassMetrics *param_3,TIntPoint<int> *param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  TIntPoint<int>_u_0 TVar7;
  TIntPoint<int>_u_0 TVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UMoviePipelineOutputSetting *pUVar13;
  UMoviePipelineSetting *pUVar14;
  UClass *pUVar15;
  FMoviePipelineRenderPassMetrics *pFVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  TIntPoint<int>_u_0 local_res8;
  TIntPoint<int>_u_0 local_48;
  TIntPoint<int>_u_0 local_40;
  UClass *local_28 [2];
  
  FMoviePipelineRenderPassMetrics::FMoviePipelineRenderPassMetrics(__return_storage_ptr__,param_3);
  if (param_1 == (UMoviePipelinePrimaryConfig *)0x0) {
    return __return_storage_ptr__;
  }
  if (param_2 == (UMoviePipelineExecutorShot *)0x0) {
    return __return_storage_ptr__;
  }
  pUVar13 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)param_1,false);
  local_28[0] = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_28[0]);
  }
  pUVar14 = UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
                      ((TSubclassOf<UMoviePipelineSetting>)local_28,param_1,param_2);
  if (pUVar14 != (UMoviePipelineSetting *)0x0) {
    pUVar15 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
    iVar4 = (int)pUVar15->_padding_;
    if ((iVar4 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar15->_padding_)) goto LAB_14dd8c6ad;
  }
  pUVar14 = (UMoviePipelineSetting *)0x0;
LAB_14dd8c6ad:
  if ((pUVar13 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineUtils.cpp"
                          ,0x564,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FMoviePipelineRenderPassMetrics *)(*pcVar6)();
    return pFVar16;
  }
  if ((pUVar14 == (UMoviePipelineSetting *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("HighResSettings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineUtils.cpp"
                          ,0x565,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar16 = (FMoviePipelineRenderPassMetrics *)(*pcVar6)();
    return pFVar16;
  }
  fVar9 = __real_bf000000;
  fVar21 = __return_storage_ptr__->SpatialShiftY * __real_c0000000;
  fVar20 = (float)(param_4->field0_0x0)._s_0.X /
           (float)(__return_storage_ptr__->OriginalTileCounts).field0_0x0._s_0.X;
  iVar18 = -((int)ROUND(__real_bf000000 - (fVar20 + fVar20)) >> 1);
  fVar20 = (float)(param_4->field0_0x0)._s_0.Y /
           (float)(__return_storage_ptr__->OriginalTileCounts).field0_0x0._s_0.Y;
  iVar11 = -((int)ROUND(__real_bf000000 - (fVar20 + fVar20)) >> 1);
  local_res8._s_0.Y = iVar11;
  local_res8._s_0.X = iVar18;
  fVar19 = __real_bf000000 - ((float)iVar18 + (float)iVar18) * *(float *)&pUVar14[1]._padding_;
  fVar20 = __return_storage_ptr__->SpatialShiftX;
  fVar22 = (float)iVar11 * __real_40000000;
  fVar1 = *(float *)&pUVar14[1]._padding_;
  (__return_storage_ptr__->TileSize).field0_0x0 = local_res8;
  local_res8._s_0.X = iVar18 + ((int)ROUND(fVar19) >> 1) * -2;
  local_res8._s_0.Y = iVar11 + ((int)ROUND(fVar9 - fVar22 * fVar1) >> 1) * -2;
  (__return_storage_ptr__->BackbufferSize).field0_0x0 = local_res8;
  (__return_storage_ptr__->ProjectionMatrixJitterAmount).field0_0x0._s_0.X =
       (double)((fVar20 + fVar20) / (float)local_res8._s_0.X);
  (__return_storage_ptr__->ProjectionMatrixJitterAmount).field0_0x0._s_0.Y =
       (double)(fVar21 / (float)local_res8._s_0.Y);
  (__return_storage_ptr__->EffectiveOutputResolution).field0_0x0 = param_4->field0_0x0;
  (__return_storage_ptr__->OverscannedResolution).field0_0x0 = param_4->field0_0x0;
  fVar1 = _UNK_150689624;
  fVar20 = ___xmm_3f0000003f0000003f0000003f000000;
  iVar4 = (pUVar13->OutputResolution).field0_0x0._s_0.X;
  iVar5 = (pUVar13->OutputResolution).field0_0x0._s_0.Y;
  local_48._s_0.X = ((param_4->field0_0x0)._s_0.X - iVar4) / 2;
  local_48._s_0.Y = ((param_4->field0_0x0)._s_0.Y - iVar5) / 2;
  (__return_storage_ptr__->CropRectangle).field0_0x0._s_0.Min.field0_0x0 = local_48;
  local_40._s_0.Y = local_48._s_0.Y + iVar5;
  local_40._s_0.X = iVar4 + local_48._s_0.X;
  (__return_storage_ptr__->CropRectangle).field0_0x0._s_0.Max.field0_0x0 = local_40;
  iVar4 = (__return_storage_ptr__->TileIndexes).field0_0x0._s_0.X;
  iVar5 = (__return_storage_ptr__->TileIndexes).field0_0x0._s_0.Y;
  iVar17 = (int)ROUND(fVar9 - ((float)iVar18 + (float)iVar18) * *(float *)&pUVar14[1]._padding_) >>
           1;
  uVar2 = __return_storage_ptr__->SpatialShiftX;
  uVar3 = __return_storage_ptr__->SpatialShiftY;
  iVar12 = (int)ROUND(fVar9 - ((float)iVar11 + (float)iVar11) * *(float *)&pUVar14[1]._padding_) >>
           1;
  TVar7._s_0.Y = -iVar12;
  TVar7._s_0.X = -iVar17;
  (__return_storage_ptr__->OverlappedPad).field0_0x0 = TVar7;
  TVar8._s_0.Y = iVar11 * iVar5 + iVar12;
  TVar8._s_0.X = iVar18 * iVar4 + iVar17;
  (__return_storage_ptr__->OverlappedOffset).field0_0x0 = TVar8;
  (__return_storage_ptr__->OverlappedSubpixelShift).field0_0x0._s_0.X =
       (double)(fVar20 - (float)uVar2);
  (__return_storage_ptr__->OverlappedSubpixelShift).field0_0x0._s_0.Y =
       (double)(fVar1 - (float)uVar3);
  return __return_storage_ptr__;
}

// GetRendererFrameCount @ 14dd8c940

ulong64 __cdecl UE::MovieRenderPipeline::GetRendererFrameCount(void)

{
  return GFrameCounter;
}

// GetSharedFormatArguments @ 14dd8c980

void __cdecl
UE::MoviePipeline::GetSharedFormatArguments
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,FDateTime *param_3,int param_4,UMoviePipelineExecutorJob *param_5,
          FTimespan *param_6)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  ForAnyElementType _Src;
  int iVar4;
  wchar_t *pwVar5;
  FString *pFVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FDateTime local_res10;
  undefined1 local_e8 [8];
  FString *local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  FVar8.Data = (FScriptContainerElement *)0x0;
  local_res10.Ticks = param_3->Ticks + param_6->Ticks;
  FDateTime::ToString(&local_res10,&local_38,L"%Y.%m.%d");
  FDateTime::ToString(&local_res10,&local_48,L"%H.%M.%S");
  FDateTime::ToString(&local_res10,&local_58,L"%Y");
  FDateTime::ToString(&local_res10,&local_68,L"%m");
  FDateTime::ToString(&local_res10,&local_78,L"%d");
  ::FString::FString((FString *)local_e8,L"date");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_e8,&local_38);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"time");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_e8,&local_48);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"year");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_e8,&local_58);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"month");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_e8,&local_68);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"day");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_e8,&local_78);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::PrintfImpl(&local_98,L"v%0*d");
  ::FString::FString((FString *)local_e8,L"version");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,(FString *)local_e8,&local_98);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"unreal/jobDate");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,(FString *)local_e8,&local_38);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"unreal/jobTime");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,(FString *)local_e8,&local_48);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"unreal/jobYear");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,(FString *)local_e8,&local_58);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"unreal/jobMonth");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,(FString *)local_e8,&local_68);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  ::FString::FString((FString *)local_e8,L"unreal/jobDay");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,(FString *)local_e8,&local_78);
  if (local_e8 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_e8);
  }
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  ::FString::AppendInt(&local_d8,param_4);
  ::FString::FString(&local_c8,L"unreal/jobVersion");
  local_e8 = (undefined1  [8])&local_c8;
  local_e0 = &local_d8;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_2,(TPairInitializer<FString_&&,FString_&&> *)&param_6,(bool *)local_e8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (param_5 == (UMoviePipelineExecutorJob *)0x0) {
    local_e0 = (FString *)0x0;
    pFVar6 = (FString *)local_e8;
    bVar3 = false;
    bVar2 = true;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  else {
    iVar9 = (param_5->Author).Data.ArrayNum;
    iVar4 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) {
      pwVar5 = FWindowsPlatformProcess::UserName(false);
      ::FString::FString(&local_d8,pwVar5);
      pFVar6 = &local_d8;
      bVar3 = true;
      bVar2 = false;
      local_88.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    }
    else {
      pFVar1 = (param_5->Author).Data.AllocatorInstance.Data;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = iVar9;
      if (iVar9 == 0) {
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        pFVar6 = &local_d8;
        bVar3 = true;
        bVar2 = false;
        local_88.Data.AllocatorInstance.Data = FVar8.Data;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar9,0,(ForAnyElementType *)&local_d8,iVar9,&local_d8.Data.ArrayMax);
        memcpy(local_d8.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar9 * 2);
        pFVar6 = &local_d8;
        bVar3 = true;
        bVar2 = false;
        local_88.Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      }
    }
  }
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_88.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar2) && (local_e8 != (undefined1  [8])0x0)) {
    FMemory::Free((void *)local_e8);
  }
  if ((bVar3) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (param_5 == (UMoviePipelineExecutorJob *)0x0) {
    local_b8.Data.ArrayNum = 0;
    bVar3 = false;
    bVar2 = true;
    FVar7.Data = FVar8.Data;
LAB_14dd8cebd:
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.Data.ArrayMax = 0;
  }
  else {
    iVar9 = (param_5->JobName).Data.ArrayNum;
    pFVar1 = (param_5->JobName).Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      iVar9 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,(ForAnyElementType *)&local_d8,iVar9,&local_d8.Data.ArrayMax);
      memcpy(local_d8.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar9 * 2);
      iVar9 = local_d8.Data.ArrayNum;
    }
    _Src.Data = local_d8.Data.AllocatorInstance.Data;
    bVar3 = true;
    bVar2 = false;
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar7.Data = local_98.Data.AllocatorInstance.Data;
    local_b8.Data.ArrayNum = iVar9;
    if (iVar9 == 0) goto LAB_14dd8cebd;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,0,(ForAnyElementType *)&local_b8,iVar9,&local_b8.Data.ArrayMax);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar9 * 2);
    FVar7.Data = local_98.Data.AllocatorInstance.Data;
  }
  if ((bVar2) && (FVar7.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar7.Data);
  }
  if ((bVar3) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (param_5 == (UMoviePipelineExecutorJob *)0x0) {
    local_a8.Data.ArrayNum = 0;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    iVar9 = (param_5->Comment).Data.ArrayNum;
    pFVar1 = (param_5->Comment).Data.AllocatorInstance.Data;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Data.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      iVar9 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,(ForAnyElementType *)&local_d8,iVar9,&local_d8.Data.ArrayMax);
      memcpy(local_d8.Data.AllocatorInstance.Data,pFVar1,(longlong)iVar9 * 2);
      iVar9 = local_d8.Data.ArrayNum;
    }
    FVar7.Data = local_d8.Data.AllocatorInstance.Data;
    bVar3 = true;
    bVar2 = false;
    local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar8.Data = local_98.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = iVar9;
    if (iVar9 != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,(ForAnyElementType *)&local_a8,iVar9,&local_a8.Data.ArrayMax);
      memcpy(local_a8.Data.AllocatorInstance.Data,FVar7.Data,(longlong)iVar9 * 2);
      FVar8.Data = local_98.Data.AllocatorInstance.Data;
      goto LAB_14dd8cfca;
    }
  }
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayMax = 0;
LAB_14dd8cfca:
  if ((bVar2) && (FVar8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FVar8.Data);
  }
  if ((bVar3) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"job_author");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_c8,&local_88);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"job_name");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_1,&local_c8,&local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"unreal/jobName");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_c8,&local_b8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"unreal/jobAuthor");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_c8,&local_88);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"unreal/jobComment");
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)param_2,&local_c8,&local_a8);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetSubPixelJitter @ 14dd8d580

TVector2<float> __cdecl UE::MoviePipeline::GetSubPixelJitter(int param_1,int param_2)

{
  TVector2<float>_u_0 TVar1;
  undefined4 in_register_0000000c;
  uint uVar2;
  uint uVar3;
  int in_R8D;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = 0.0;
  fVar5 = 0.0;
  uVar4 = param_2 % in_R8D + 1;
  fVar7 = __real_3f000000;
  uVar2 = uVar4;
  if (0 < (int)uVar4) {
    do {
      uVar3 = uVar2 >> 1;
      fVar5 = fVar5 + (float)(uVar2 & 1) * fVar7;
      fVar8 = __real_3eaaaaab;
      fVar7 = fVar7 * __real_3f000000;
      uVar2 = uVar3;
    } while (uVar3 != 0);
    do {
      uVar2 = uVar4 / 3;
      fVar6 = fVar6 + (float)(uVar4 % 3) * fVar8;
      fVar8 = fVar8 * __real_3eaaaaab;
      uVar4 = uVar2;
    } while (uVar2 != 0);
  }
  TVar1._s_0.Y = (float)in_register_0000000c;
  TVar1._s_0.X = (float)param_1;
  fVar6 = fVar6 - __real_3f000000;
  *(float *)CONCAT44(in_register_0000000c,param_1) = fVar5 - __real_3f000000;
  *(float *)(CONCAT44(in_register_0000000c,param_1) + 4) = fVar6;
  return (TVector2<float>)TVar1;
}

// QuantizeImagePixelDataToBitDepth @ 14dd96ac0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __cdecl
UE::MoviePipeline::QuantizeImagePixelDataToBitDepth
          (FImagePixelData *param_1,int param_2,TSharedPtr<IImagePixelDataPayload,1> *param_3,
          bool param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ImageQuantization> FVar9;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar10;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar11;
  undefined4 in_register_00000014;
  FNameEntryId FVar12;
  FName FVar13;
  undefined7 in_register_00000089;
  undefined8 *puVar14;
  FName local_res8;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  undefined1 local_98 [24];
  FName local_80;
  FStatMessage local_70;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  
  puVar14 = (undefined8 *)CONCAT71(in_register_00000089,param_4);
  FVar9 = StatPtr_STAT_ImageQuantization;
  if (StatPtr_STAT_ImageQuantization ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ImageQuantization>)0x0) {
    pFVar8 = ::FName::FName((FName *)(local_98 + 0x10),"STAT_ImageQuantization");
    FVar9 = (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ImageQuantization>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImageQuantization,*pFVar8,
                       L"STAT_MoviePipeline_ImageQuantization","STATGROUP_MoviePipeline",
                       "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar13 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value == 0) && (uVar11 == 0)) {
LAB_14dd96c1c:
    bVar5 = false;
    FVar13 = local_80;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar12.Value;
        local_res8.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                   ,0x1c2);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd96c1c;
    local_res20 = FVar12.Value;
    uStackX_24 = uVar11;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar5 = true;
  }
  param_1->_padding_ = 0;
  if ((int)param_3 == 8) {
    local_50 = *puVar14;
    local_48 = puVar14[1];
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
      UNLOCK();
    }
    TVar10 = QuantizePixelDataTo8bpp
                       ((FImagePixelData *)local_98,
                        (TSharedPtr<IImagePixelDataPayload,1> *)
                        CONCAT44(in_register_00000014,param_2),SUB81(&local_50,0));
    if (param_1 != TVar10.Ptr) {
      puVar2 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = (TVar10.Ptr)->_padding_;
      (TVar10.Ptr)->_padding_ = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  else {
    if ((int)param_3 != 0x10) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                         ,0x1d3,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        TVar10.Ptr = (FImagePixelData *)(*pcVar3)();
        return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar10.Ptr;
      }
      goto LAB_14dd96d3e;
    }
    local_60 = *puVar14;
    local_58 = puVar14[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    TVar10 = QuantizePixelDataTo16bpp
                       ((FImagePixelData *)&local_res20,
                        (TSharedPtr<IImagePixelDataPayload,1> *)
                        CONCAT44(in_register_00000014,param_2),SUB81(&local_60,0));
    if (param_1 != TVar10.Ptr) {
      puVar2 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = (TVar10.Ptr)->_padding_;
      (TVar10.Ptr)->_padding_ = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    local_98._0_8_ = CONCAT44(uStackX_24,local_res20);
  }
  if ((undefined8 *)local_98._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_98._0_8_)(local_98._0_8_,1);
  }
LAB_14dd96d3e:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_70.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_98 + 8));
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_98[8];
      local_70.StatData.Pad[1] = local_98[9];
      local_70.StatData.Pad[2] = local_98[10];
      local_70.StatData.Pad[3] = local_98[0xb];
      FThreadStats::AddStatMessage(this,&local_70);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)puVar14[1]);
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)param_1;
}

// QuantizePixelDataTo16bpp @ 14dd96e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __cdecl
UE::MoviePipeline::QuantizePixelDataTo16bpp
          (FImagePixelData *param_1,TSharedPtr<IImagePixelDataPayload,1> *param_2,bool param_3)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  TIntPoint<int>_u_0 TVar4;
  undefined8 *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined4 uVar39;
  bool bVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar44;
  longlong lVar45;
  TImagePixelData<FFloat16Color> *pTVar46;
  TImagePixelData<FFloat16Color> *pTVar47;
  ForAnyElementType FVar48;
  ForAnyElementType FVar49;
  ForAnyElementType FVar50;
  ulong64 uVar51;
  uint uVar52;
  TImagePixelData<FFloat16Color> *pTVar53;
  undefined7 in_register_00000081;
  undefined8 *puVar54;
  char in_R9B;
  byte *pbVar55;
  longlong lVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined2 local_res8;
  undefined2 uStackX_a;
  undefined2 uStackX_c;
  undefined2 uStackX_e;
  TIntPoint<int>_u_0 local_res10;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_1e8;
  TImagePixelData<FFloat16Color> *local_1d0;
  TArray<FFloat16Color,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_1b8;
  longlong local_1a0;
  TImagePixelData<FFloat16Color> *local_198;
  longlong local_190;
  TImagePixelData<FFloat16Color> *local_188;
  longlong local_180;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_178;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_160;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_148;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_130;
  TSharedPtr<IImagePixelDataPayload,1> local_118;
  TSharedPtr<IImagePixelDataPayload,1> local_108;
  TSharedPtr<IImagePixelDataPayload,1> local_f8;
  TSharedPtr<IImagePixelDataPayload,1> local_e8;
  TArray<float,TSizedDefaultAllocator<32>_> local_d8 [10];
  
  puVar54 = (undefined8 *)CONCAT71(in_register_00000081,param_3);
  pTVar47 = (TImagePixelData<FFloat16Color> *)0x0;
  param_1->_padding_ = 0;
  TVar4 = (TIntPoint<int>_u_0)(param_2->SharedReferenceCount).ReferenceController;
  cVar2 = *(char *)((longlong)&param_2[1].Object + 5);
  uVar41 = 0;
  local_res10 = TVar4;
  if (cVar2 == '\b') {
    local_1d0 = (TImagePixelData<FFloat16Color> *)0x0;
    local_188 = (TImagePixelData<FFloat16Color> *)0x0;
    local_180 = 0;
    (*(code *)param_2->Object[1])(param_2,&local_188,&local_180);
    if ((local_188 != (TImagePixelData<FFloat16Color> *)0x0) &&
       (local_180 ==
        (ulonglong)(*(byte *)((longlong)&param_2[1].Object + 5) >> 3) *
        (ulonglong)*(byte *)((longlong)&param_2[1].Object + 6) *
        (longlong)*(int *)((longlong)&(param_2->SharedReferenceCount).ReferenceController + 4) *
        (longlong)*(int *)&(param_2->SharedReferenceCount).ReferenceController)) {
      local_1d0 = local_188;
    }
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    TArray<FFloat16Color,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              (&local_1e8,(longlong)TVar4._s_0.Y * (longlong)TVar4._s_0.X,Default);
    GenerateInverseSRGBTable(local_d8,0x100);
    FVar50.Data = local_d8[0].AllocatorInstance.Data;
    fVar12 = __real_3b808081;
    lVar45 = (longlong)TVar4._s_0.Y * (longlong)TVar4._s_0.X;
    if (in_R9B == '\0') {
      if (0 < lVar45) {
        pbVar55 = (byte *)((longlong)&local_1d0->_padding_ + 1);
        pTVar46 = pTVar47;
        do {
          bVar3 = pbVar55[1];
          uVar52 = (uint)((ulonglong)pTVar46 >> 0x3f) ^ 1;
          uVar43 = uVar41;
          if ((longlong)pTVar46 < local_1e8.ArrayNum) {
            uVar43 = uVar52;
          }
          if ((uVar43 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
            return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
          }
          FGenericPlatformMath::StoreHalf
                    ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8),
                     (float)bVar3 * fVar12);
          bVar3 = *pbVar55;
          uVar43 = uVar41;
          if ((longlong)pTVar46 < local_1e8.ArrayNum) {
            uVar43 = uVar52;
          }
          if ((uVar43 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
            return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
          }
          FGenericPlatformMath::StoreHalf
                    ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8 + 2),
                     (float)bVar3 * fVar12);
          bVar3 = pbVar55[-1];
          uVar43 = uVar41;
          if ((longlong)pTVar46 < local_1e8.ArrayNum) {
            uVar43 = uVar52;
          }
          if ((uVar43 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
            return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
          }
          FGenericPlatformMath::StoreHalf
                    ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8 + 4),
                     (float)bVar3 * fVar12);
          bVar3 = pbVar55[2];
          uVar43 = uVar41;
          if ((longlong)pTVar46 < local_1e8.ArrayNum) {
            uVar43 = uVar52;
          }
          if ((uVar43 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar6 = (code *)swi(3);
            TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
            return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
          }
          FGenericPlatformMath::StoreHalf
                    ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8 + 6),
                     (float)bVar3 * fVar12);
          pTVar46 = (TImagePixelData<FFloat16Color> *)((longlong)&pTVar46->_padding_ + 1);
          pbVar55 = pbVar55 + 4;
        } while ((longlong)pTVar46 < (longlong)local_res10._s_0.Y * (longlong)local_res10._s_0.X);
      }
    }
    else if (0 < lVar45) {
      pbVar55 = (byte *)((longlong)&local_1d0->_padding_ + 1);
      pTVar46 = pTVar47;
      do {
        uVar52 = (uint)((ulonglong)pTVar46 >> 0x3f) ^ 1;
        fVar1 = *(float *)(FVar50.Data + (ulonglong)pbVar55[1] * 4);
        uVar43 = uVar41;
        if ((longlong)pTVar46 < local_1e8.ArrayNum) {
          uVar43 = uVar52;
        }
        if ((uVar43 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
          return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
        }
        FGenericPlatformMath::StoreHalf
                  ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8),fVar1);
        fVar1 = *(float *)(FVar50.Data + (ulonglong)*pbVar55 * 4);
        uVar43 = uVar41;
        if ((longlong)pTVar46 < local_1e8.ArrayNum) {
          uVar43 = uVar52;
        }
        if ((uVar43 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
          return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
        }
        FGenericPlatformMath::StoreHalf
                  ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8 + 2),fVar1);
        fVar1 = *(float *)(FVar50.Data + (ulonglong)pbVar55[-1] * 4);
        uVar43 = uVar41;
        if ((longlong)pTVar46 < local_1e8.ArrayNum) {
          uVar43 = uVar52;
        }
        if ((uVar43 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
          return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
        }
        FGenericPlatformMath::StoreHalf
                  ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8 + 4),fVar1);
        bVar3 = pbVar55[2];
        uVar43 = uVar41;
        if ((longlong)pTVar46 < local_1e8.ArrayNum) {
          uVar43 = uVar52;
        }
        if ((uVar43 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
          return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
        }
        FGenericPlatformMath::StoreHalf
                  ((ushort *)(local_1e8.AllocatorInstance.Data + (longlong)pTVar46 * 8 + 6),
                   (float)bVar3 * fVar12);
        pTVar46 = (TImagePixelData<FFloat16Color> *)((longlong)&pTVar46->_padding_ + 1);
        pbVar55 = pbVar55 + 4;
      } while ((longlong)pTVar46 < (longlong)local_res10._s_0.Y * (longlong)local_res10._s_0.X);
    }
    FVar48.Data = local_1e8.AllocatorInstance.Data;
    local_130.ArrayNum = local_1e8.ArrayNum;
    local_130.ArrayMax = local_1e8.ArrayMax;
    local_130.AllocatorInstance.Data = local_1e8.AllocatorInstance.Data;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    pTVar46 = ::operator_new(0x40);
    if (pTVar46 != (TImagePixelData<FFloat16Color> *)0x0) {
      local_e8.Object = (IImagePixelDataPayload *)*puVar54;
      local_e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar54[1];
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar47 = TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                          (pTVar46,(TIntPoint<int> *)&local_res10._s_0,&local_130,&local_e8);
      FVar48.Data = local_130.AllocatorInstance.Data;
    }
    puVar5 = (undefined8 *)param_1->_padding_;
    param_1->_padding_ = (longlong)pTVar47;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    if (FVar48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar48.Data);
    }
    FVar48.Data = local_1e8.AllocatorInstance.Data;
    if (local_d8[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8[0].AllocatorInstance.Data);
      FVar48.Data = local_1e8.AllocatorInstance.Data;
    }
  }
  else if (cVar2 == '\x10') {
    local_198 = (TImagePixelData<FFloat16Color> *)0x0;
    local_190 = 0;
    (*(code *)param_2->Object[1])(param_2,&local_198,&local_190);
    pTVar46 = pTVar47;
    if ((local_198 != (TImagePixelData<FFloat16Color> *)0x0) &&
       (local_190 ==
        (ulonglong)(*(byte *)((longlong)&param_2[1].Object + 5) >> 3) *
        (ulonglong)*(byte *)((longlong)&param_2[1].Object + 6) *
        (longlong)*(int *)((longlong)&(param_2->SharedReferenceCount).ReferenceController + 4) *
        (longlong)*(int *)&(param_2->SharedReferenceCount).ReferenceController)) {
      pTVar46 = local_198;
    }
    if (in_R9B == '\0') {
      uVar51 = (longlong)local_res10._s_0.Y * (longlong)local_res10._s_0.X;
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if ((longlong)uVar51 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar51);
      }
      if (((pTVar46 == (TImagePixelData<FFloat16Color> *)0x0) && (uVar51 != 0)) &&
         (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ptr != nullptr || Count == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x2d3,L""), bVar40)) {
        pcVar6 = (code *)swi(3);
        TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
        return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
      }
      local_178.ArrayNum = uVar51;
      if (uVar51 == 0) {
        local_178.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (8,2,uVar51,0,&local_178.AllocatorInstance,uVar51,&local_178.ArrayMax);
        ConstructItems<FFloat16Color,FFloat16Color,__int64>
                  (local_178.AllocatorInstance.Data,(FFloat16Color *)pTVar46,uVar51);
      }
      pTVar46 = ::operator_new(0x40);
      if (pTVar46 != (TImagePixelData<FFloat16Color> *)0x0) {
        local_f8.Object = (IImagePixelDataPayload *)*puVar54;
        local_f8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar54[1];
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pTVar47 = TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                            (pTVar46,(TIntPoint<int> *)&local_res10._s_0,&local_178,&local_f8);
      }
      puVar5 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = (longlong)pTVar47;
      FVar48.Data = local_178.AllocatorInstance.Data;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
        FVar48.Data = local_178.AllocatorInstance.Data;
      }
    }
    else {
      ConvertLinearTosRGB16bppViaLookupTable
                (&local_1c8,(FFloat16Color *)pTVar46,
                 (longlong)local_res10._s_0.Y * (longlong)local_res10._s_0.X);
      FVar50.Data = local_1c8.AllocatorInstance.Data;
      local_148.ArrayNum = (long64)local_1c8.ArrayNum;
      local_148.ArrayMax = (long64)local_1c8.ArrayMax;
      local_148.AllocatorInstance.Data = local_1c8.AllocatorInstance.Data;
      local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.ArrayNum = 0;
      local_1c8.ArrayMax = 0;
      pTVar46 = ::operator_new(0x40);
      if (pTVar46 != (TImagePixelData<FFloat16Color> *)0x0) {
        local_108.Object = (IImagePixelDataPayload *)*puVar54;
        local_108.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar54[1];
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pTVar47 = TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                            (pTVar46,(TIntPoint<int> *)&local_res10._s_0,&local_148,&local_108);
        FVar50.Data = local_148.AllocatorInstance.Data;
      }
      puVar5 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = (longlong)pTVar47;
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      FVar48.Data = local_1c8.AllocatorInstance.Data;
      if (FVar50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar50.Data);
        FVar48.Data = local_1c8.AllocatorInstance.Data;
      }
    }
  }
  else {
    if (cVar2 != ' ') {
      bVar40 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                          ,0x1ba,L"");
      if (bVar40) {
        pcVar6 = (code *)swi(3);
        TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
        return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
      }
      goto LAB_14dd9793f;
    }
    local_1d0 = (TImagePixelData<FFloat16Color> *)0x0;
    local_1a0 = 0;
    (*(code *)param_2->Object[1])(param_2,&local_1d0,&local_1a0);
    pTVar46 = pTVar47;
    if ((local_1d0 != (TImagePixelData<FFloat16Color> *)0x0) &&
       (local_1a0 ==
        (ulonglong)(*(byte *)((longlong)&param_2[1].Object + 5) >> 3) *
        (ulonglong)*(byte *)((longlong)&param_2[1].Object + 6) *
        (longlong)*(int *)((longlong)&(param_2->SharedReferenceCount).ReferenceController + 4) *
        (longlong)*(int *)&(param_2->SharedReferenceCount).ReferenceController)) {
      pTVar46 = local_1d0;
    }
    lVar45 = (longlong)local_res10._s_0.X;
    uVar39 = local_res10._s_0.Y;
    lVar56 = (longlong)local_res10._s_0.Y;
    local_1b8.ArrayMax = 0;
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    TArray<FFloat16Color,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              (&local_1b8,lVar56 * lVar45,Default);
    iVar38 = _UNK_1508be50c;
    iVar37 = _UNK_1508be508;
    iVar36 = _UNK_1508be504;
    iVar35 = ___xmm_c8000fffc8000fffc8000fffc8000fff;
    iVar34 = _UNK_1508be4ec;
    iVar33 = _UNK_1508be4e8;
    iVar32 = _UNK_1508be4e4;
    iVar31 = ___xmm_47800000478000004780000047800000;
    iVar30 = _UNK_1508be4bc;
    iVar29 = _UNK_1508be4b8;
    iVar28 = _UNK_1508be4b4;
    iVar27 = ___xmm_38800000388000003880000038800000;
    uVar26 = _UNK_1508be48c;
    uVar25 = _UNK_1508be488;
    uVar24 = _UNK_1508be484;
    uVar23 = ___xmm_00000200000002000000020000000200;
    uVar22 = _UNK_1508be47c;
    uVar21 = _UNK_1508be478;
    uVar20 = _UNK_1508be474;
    uVar19 = ___xmm_000001ff000001ff000001ff000001ff;
    fVar18 = _UNK_15068962c;
    fVar17 = _UNK_150689628;
    fVar1 = _UNK_150689624;
    fVar12 = ___xmm_3f0000003f0000003f0000003f000000;
    uVar16 = _UNK_15068959c;
    uVar15 = _UNK_150689598;
    uVar14 = _UNK_150689594;
    uVar13 = ___xmm_00007c0000007c0000007c0000007c00;
    uVar11 = _UNK_15065157c;
    uVar10 = _UNK_150651578;
    uVar52 = _UNK_150651574;
    uVar43 = __xmm_80000000800000008000000080000000;
    pTVar53 = pTVar47;
    if (0 < lVar56 * lVar45) {
      do {
        uVar42 = (uint)pTVar46->_padding_;
        uVar7 = *(uint *)((longlong)&pTVar46->_padding_ + 4);
        uVar8 = (uint)pTVar46->_padding_;
        uVar9 = *(uint *)((longlong)&pTVar46->_padding_ + 4);
        fVar59 = (float)(~uVar43 & uVar42);
        fVar60 = (float)(~uVar52 & uVar7);
        fVar61 = (float)(~uVar10 & uVar8);
        fVar62 = (float)(~uVar11 & uVar9);
        auVar58._0_4_ = (int)(uVar42 & uVar43) >> 0x10;
        auVar58._4_4_ = (int)(uVar7 & uVar52) >> 0x10;
        auVar58._8_4_ = (int)(uVar8 & uVar10) >> 0x10;
        auVar58._12_4_ = (int)(uVar9 & uVar11) >> 0x10;
        uVar42 = uVar41;
        if ((longlong)pTVar53 < local_1b8.ArrayNum) {
          uVar42 = (uint)((ulonglong)pTVar53 >> 0x3f) ^ 1;
        }
        auVar57._0_4_ =
             (~-(uint)((int)fVar59 < iVar27) &
              (uint)((iVar35 + (int)fVar59) - (((int)fVar59 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar12 + fVar59) - (int)fVar12 & -(uint)((int)fVar59 < iVar27)) &
             -(uint)((int)fVar59 < iVar31);
        auVar57._4_4_ =
             (~-(uint)((int)fVar60 < iVar28) &
              (uint)((iVar36 + (int)fVar60) - (((int)fVar60 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar1 + fVar60) - (int)fVar1 & -(uint)((int)fVar60 < iVar28)) &
             -(uint)((int)fVar60 < iVar32);
        auVar57._8_4_ =
             (~-(uint)((int)fVar61 < iVar29) &
              (uint)((iVar37 + (int)fVar61) - (((int)fVar61 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar17 + fVar61) - (int)fVar17 & -(uint)((int)fVar61 < iVar29)) &
             -(uint)((int)fVar61 < iVar33);
        auVar57._12_4_ =
             (~-(uint)((int)fVar62 < iVar30) &
              (uint)((iVar38 + (int)fVar62) - (((int)fVar62 << 0x12) >> 0x1f)) >> 0xd |
             (int)(fVar18 + fVar62) - (int)fVar18 & -(uint)((int)fVar62 < iVar30)) &
             -(uint)((int)fVar62 < iVar34);
        auVar63._0_4_ =
             ~-(uint)((int)fVar59 < iVar31) &
             (((uint)fVar59 >> 0xd & uVar19 | uVar23) & -(uint)NAN(fVar59) | uVar13);
        auVar63._4_4_ =
             ~-(uint)((int)fVar60 < iVar32) &
             (((uint)fVar60 >> 0xd & uVar20 | uVar24) & -(uint)NAN(fVar60) | uVar14);
        auVar63._8_4_ =
             ~-(uint)((int)fVar61 < iVar33) &
             (((uint)fVar61 >> 0xd & uVar21 | uVar25) & -(uint)NAN(fVar61) | uVar15);
        auVar63._12_4_ =
             ~-(uint)((int)fVar62 < iVar34) &
             (((uint)fVar62 >> 0xd & uVar22 | uVar26) & -(uint)NAN(fVar62) | uVar16);
        auVar58 = auVar57 | auVar63 | auVar58;
        auVar58 = packssdw(auVar58,auVar58);
        if ((uVar42 == 0) &&
           (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar40)) {
          pcVar6 = (code *)swi(3);
          TVar44.Ptr = (FImagePixelData *)(*pcVar6)();
          return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar44.Ptr;
        }
        pTVar46 = (TImagePixelData<FFloat16Color> *)&pTVar46->_padding_;
        local_res8 = auVar58._0_2_;
        *(undefined2 *)(local_1b8.AllocatorInstance.Data + (longlong)pTVar53 * 8) = local_res8;
        uStackX_a = auVar58._2_2_;
        *(undefined2 *)(local_1b8.AllocatorInstance.Data + (longlong)pTVar53 * 8 + 2) = uStackX_a;
        uStackX_c = auVar58._4_2_;
        *(undefined2 *)(local_1b8.AllocatorInstance.Data + (longlong)pTVar53 * 8 + 4) = uStackX_c;
        uStackX_e = auVar58._6_2_;
        *(undefined2 *)(local_1b8.AllocatorInstance.Data + (longlong)pTVar53 * 8 + 6) = uStackX_e;
        pTVar53 = (TImagePixelData<FFloat16Color> *)((longlong)&pTVar53->_padding_ + 1);
      } while ((longlong)pTVar53 < (longlong)(int)uVar39 * (longlong)local_res10._s_0.X);
    }
    FVar49.Data = local_1b8.AllocatorInstance.Data;
    local_160.ArrayNum = local_1b8.ArrayNum;
    local_160.ArrayMax = local_1b8.ArrayMax;
    local_160.AllocatorInstance.Data = local_1b8.AllocatorInstance.Data;
    local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.ArrayNum = 0;
    local_1b8.ArrayMax = 0;
    pTVar46 = ::operator_new(0x40);
    if (pTVar46 != (TImagePixelData<FFloat16Color> *)0x0) {
      local_118.Object = (IImagePixelDataPayload *)*puVar54;
      local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar54[1]
      ;
      if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar47 = TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                          (pTVar46,(TIntPoint<int> *)&local_res10._s_0,&local_160,&local_118);
      FVar49.Data = local_160.AllocatorInstance.Data;
    }
    puVar5 = (undefined8 *)param_1->_padding_;
    param_1->_padding_ = (longlong)pTVar47;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    FVar48.Data = local_1b8.AllocatorInstance.Data;
    if (FVar49.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar49.Data);
      FVar48.Data = local_1b8.AllocatorInstance.Data;
    }
  }
  if (FVar48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar48.Data);
  }
LAB_14dd9793f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)puVar54[1]);
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)param_1;
}

// QuantizePixelDataTo8bpp @ 14dd97980

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> __cdecl
UE::MoviePipeline::QuantizePixelDataTo8bpp
          (FImagePixelData *param_1,TSharedPtr<IImagePixelDataPayload,1> *param_2,bool param_3)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> TVar9;
  TImagePixelData<FColor> *pTVar10;
  TImagePixelData<FColor> *pTVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  longlong lVar14;
  int iVar15;
  ForAnyElementType FVar16;
  ForAnyElementType FVar17;
  TIntPoint<int>_u_0 TVar18;
  undefined7 in_register_00000081;
  undefined8 *puVar19;
  char in_R9B;
  ushort *puVar20;
  float fVar21;
  TIntPoint<int>_u_0 local_res8;
  TImagePixelData<FColor> *local_res10;
  longlong local_res18;
  char local_res20;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined1 local_150 [12];
  int iStack_144;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_140;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_130;
  TImagePixelData<FColor> *local_120;
  longlong local_118;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_110;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_f8;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_e0;
  TIntPoint<int>_u_0 local_c8;
  longlong local_c0;
  longlong local_b8;
  TSharedPtr<IImagePixelDataPayload,1> local_b0;
  TSharedPtr<IImagePixelDataPayload,1> local_a0;
  TSharedPtr<IImagePixelDataPayload,1> local_90;
  TSharedPtr<IImagePixelDataPayload,1> local_80 [4];
  
  puVar19 = (undefined8 *)CONCAT71(in_register_00000081,param_3);
  pTVar11 = (TImagePixelData<FColor> *)0x0;
  param_1->_padding_ = 0;
  cVar1 = *(char *)((longlong)&param_2[1].Object + 5);
  local_res8 = (TIntPoint<int>_u_0)(param_2->SharedReferenceCount).ReferenceController;
  if (cVar1 == '\b') {
    (*(code *)param_2->Object[2])(param_2,local_168);
    if (param_1 != (FImagePixelData *)local_168) {
      puVar2 = (undefined8 *)param_1->_padding_;
      param_1->_padding_ = local_168._0_8_;
      local_168._0_8_ = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    if ((undefined8 *)local_168._0_8_ != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_168._0_8_)(local_168._0_8_,1);
    }
  }
  else {
    iVar15 = local_res8._s_0.X;
    if (cVar1 == '\x10') {
      local_120 = (TImagePixelData<FColor> *)0x0;
      local_118 = 0;
      (*(code *)param_2->Object[1])(param_2,&local_120,&local_118);
      pTVar10 = pTVar11;
      if ((local_120 != (TImagePixelData<FColor> *)0x0) &&
         (local_118 ==
          (ulonglong)(*(byte *)((longlong)&param_2[1].Object + 5) >> 3) *
          (longlong)*(int *)&(param_2->SharedReferenceCount).ReferenceController *
          (ulonglong)*(byte *)((longlong)&param_2[1].Object + 6) *
          (longlong)*(int *)((longlong)&(param_2->SharedReferenceCount).ReferenceController + 4))) {
        pTVar10 = local_120;
      }
      if (in_R9B == '\0') {
        lVar14 = (longlong)local_res8._s_0.Y * (longlong)iVar15;
        local_168._8_8_ = (TIntPoint<int>_u_0)0x0;
        local_158._0_4_ = Color;
        local_158._4_1_ = RGBA;
        local_158._5_1_ = '\0';
        local_158._6_1_ = '\0';
        local_158._7_1_ = false;
        TArray<FColor,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<FColor,TSizedDefaultAllocator<32>_> *)(local_168 + 8),(int)lVar14,Default
                  );
        fVar5 = __real_437f0000;
        fVar4 = __real_3f000000;
        if (0 < lVar14) {
          puVar20 = (ushort *)((longlong)&pTVar10->_padding_ + 4);
          pTVar10 = pTVar11;
          do {
            uVar6 = local_168._8_8_;
            fVar21 = FGenericPlatformMath::LoadHalf(puVar20 + -2);
            iVar8 = (int)(fVar21 * fVar5 + fVar4);
            iVar15 = 0xff;
            if (iVar8 < 0xff) {
              iVar15 = iVar8;
            }
            uVar12 = 0;
            if (0 < iVar15) {
              uVar12 = (undefined1)iVar15;
            }
            *(undefined1 *)(uVar6 + (longlong)pTVar10 * 4 + 2) = uVar12;
            fVar21 = FGenericPlatformMath::LoadHalf(puVar20 + -1);
            iVar8 = (int)(fVar21 * fVar5 + fVar4);
            iVar15 = 0xff;
            if (iVar8 < 0xff) {
              iVar15 = iVar8;
            }
            uVar13 = 0;
            uVar12 = uVar13;
            if (0 < iVar15) {
              uVar12 = (undefined1)iVar15;
            }
            *(undefined1 *)(uVar6 + (longlong)pTVar10 * 4 + 1) = uVar12;
            fVar21 = FGenericPlatformMath::LoadHalf(puVar20);
            iVar8 = (int)(fVar21 * fVar5 + fVar4);
            iVar15 = 0xff;
            if (iVar8 < 0xff) {
              iVar15 = iVar8;
            }
            uVar12 = uVar13;
            if (0 < iVar15) {
              uVar12 = (undefined1)iVar15;
            }
            *(undefined1 *)(uVar6 + (longlong)pTVar10 * 4) = uVar12;
            fVar21 = FGenericPlatformMath::LoadHalf(puVar20 + 1);
            iVar8 = (int)(fVar21 * fVar5 + fVar4);
            iVar15 = 0xff;
            if (iVar8 < 0xff) {
              iVar15 = iVar8;
            }
            if (0 < iVar15) {
              uVar13 = (undefined1)iVar15;
            }
            puVar20 = puVar20 + 4;
            *(undefined1 *)(uVar6 + (longlong)pTVar10 * 4 + 3) = uVar13;
            pTVar10 = (TImagePixelData<FColor> *)((longlong)&pTVar10->_padding_ + 1);
          } while ((longlong)pTVar10 < lVar14);
        }
        TVar18 = (TIntPoint<int>_u_0)local_168._8_8_;
        local_c0 = (longlong)(int)(EImagePixelType)local_158;
        local_b8 = (longlong)local_158._4_4_;
        local_c8 = (TIntPoint<int>_u_0)local_168._8_8_;
        local_168._8_8_ = (TIntPoint<int>_u_0)0x0;
        local_158._0_4_ = Color;
        local_158._4_1_ = RGBA;
        local_158._5_1_ = '\0';
        local_158._6_1_ = '\0';
        local_158._7_1_ = false;
        pTVar10 = ::operator_new(0x40);
        if (pTVar10 != (TImagePixelData<FColor> *)0x0) {
          local_80[0].Object = (IImagePixelDataPayload *)*puVar19;
          local_80[0].SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar19[1];
          if (local_80[0].SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_80[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_80[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 + 1);
            UNLOCK();
          }
          pTVar11 = TImagePixelData<FColor>::TImagePixelData<FColor>
                              (pTVar10,(TIntPoint<int> *)&local_res8._s_0,
                               (TArray<FColor,TSizedDefaultAllocator<64>_> *)&local_c8._s_0,local_80
                              );
          TVar18 = local_c8;
        }
        puVar2 = (undefined8 *)param_1->_padding_;
        param_1->_padding_ = (longlong)pTVar11;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        if (TVar18 != (TIntPoint<int>_u_0)0x0) {
          FMemory::Free((void *)TVar18);
        }
        if ((TIntPoint<int>_u_0)local_168._8_8_ != (TIntPoint<int>_u_0)0x0) {
          FMemory::Free((void *)local_168._8_8_);
        }
      }
      else {
        ConvertLinearTosRGB8bppViaLookupTable
                  (&local_130,(FFloat16Color *)pTVar10,
                   (longlong)local_res8._s_0.Y * (longlong)iVar15);
        FVar17.Data = local_130.AllocatorInstance.Data;
        local_e0.ArrayNum = (long64)local_130.ArrayNum;
        local_e0.ArrayMax = (long64)local_130.ArrayMax;
        local_e0.AllocatorInstance.Data = local_130.AllocatorInstance.Data;
        local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.ArrayNum = 0;
        local_130.ArrayMax = 0;
        pTVar10 = ::operator_new(0x40);
        if (pTVar10 != (TImagePixelData<FColor> *)0x0) {
          local_90.Object = (IImagePixelDataPayload *)*puVar19;
          local_90.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar19[1];
          if (local_90.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pTVar11 = TImagePixelData<FColor>::TImagePixelData<FColor>
                              (pTVar10,(TIntPoint<int> *)&local_res8._s_0,&local_e0,&local_90);
          FVar17.Data = local_e0.AllocatorInstance.Data;
        }
        puVar2 = (undefined8 *)param_1->_padding_;
        param_1->_padding_ = (longlong)pTVar11;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
        if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.AllocatorInstance.Data);
        }
      }
    }
    else if (cVar1 == ' ') {
      local_res10 = (TImagePixelData<FColor> *)0x0;
      local_res18 = 0;
      local_res20 = in_R9B;
      (*(code *)param_2->Object[1])(param_2,&local_res10,&local_res18);
      pTVar10 = pTVar11;
      if ((local_res10 != (TImagePixelData<FColor> *)0x0) &&
         (local_res18 ==
          (ulonglong)(*(byte *)((longlong)&param_2[1].Object + 5) >> 3) *
          (longlong)*(int *)&(param_2->SharedReferenceCount).ReferenceController *
          (ulonglong)*(byte *)((longlong)&param_2[1].Object + 6) *
          (longlong)*(int *)((longlong)&(param_2->SharedReferenceCount).ReferenceController + 4))) {
        pTVar10 = local_res10;
      }
      if (local_res20 == '\0') {
        ConvertLinearToLinearBitDepth<FColor,FLinearColor,unsigned_char>
                  (&local_140,(FLinearColor *)pTVar10,(longlong)local_res8._s_0.Y * (longlong)iVar15
                  );
        FVar17.Data = local_140.AllocatorInstance.Data;
        local_f8.ArrayNum = (long64)local_140.ArrayNum;
        local_f8.ArrayMax = (long64)local_140.ArrayMax;
        local_f8.AllocatorInstance.Data = local_140.AllocatorInstance.Data;
        local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_140.ArrayNum = 0;
        local_140.ArrayMax = 0;
        pTVar10 = ::operator_new(0x40);
        if (pTVar10 != (TImagePixelData<FColor> *)0x0) {
          local_a0.Object = (IImagePixelDataPayload *)*puVar19;
          local_a0.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar19[1];
          if (local_a0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pTVar11 = TImagePixelData<FColor>::TImagePixelData<FColor>
                              (pTVar10,(TIntPoint<int> *)&local_res8._s_0,&local_f8,&local_a0);
          FVar17.Data = local_f8.AllocatorInstance.Data;
        }
        puVar2 = (undefined8 *)param_1->_padding_;
        param_1->_padding_ = (longlong)pTVar11;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        if (FVar17.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar17.Data);
        }
        if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.AllocatorInstance.Data);
        }
      }
      else {
        ConvertLinearTosRGB8bppViaLookupTable
                  ((TArray<FColor,TSizedDefaultAllocator<32>_> *)local_150,(FLinearColor *)pTVar10,
                   (longlong)local_res8._s_0.Y * (longlong)iVar15);
        FVar16.Data = (FScriptContainerElement *)local_150._0_8_;
        local_110.ArrayNum = (long64)(int)local_150._8_4_;
        local_110.ArrayMax = (long64)iStack_144;
        local_110.AllocatorInstance.Data = (FScriptContainerElement *)local_150._0_8_;
        local_150._0_8_ = (FScriptContainerElement *)0x0;
        stack0xfffffffffffffeb8 = (TReferenceControllerBase<1> *)0x0;
        pTVar10 = ::operator_new(0x40);
        if (pTVar10 != (TImagePixelData<FColor> *)0x0) {
          local_b0.Object = (IImagePixelDataPayload *)*puVar19;
          local_b0.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar19[1];
          if (local_b0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          pTVar11 = TImagePixelData<FColor>::TImagePixelData<FColor>
                              (pTVar10,(TIntPoint<int> *)&local_res8._s_0,&local_110,&local_b0);
          FVar16.Data = local_110.AllocatorInstance.Data;
        }
        puVar2 = (undefined8 *)param_1->_padding_;
        param_1->_padding_ = (longlong)pTVar11;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        if (FVar16.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar16.Data);
        }
        if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_150._0_8_);
        }
      }
    }
    else {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineImageQuantization.cpp"
                         ,0x15b,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        TVar9.Ptr = (FImagePixelData *)(*pcVar3)();
        return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)TVar9.Ptr;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)puVar19[1]);
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>)param_1;
}

// RemoveFrameNumberFormatStrings @ 14dd995f0

void __cdecl UE::MoviePipeline::RemoveFrameNumberFormatStrings(FString *param_1,bool param_2)

{
  ::FString::ReplaceInline(param_1,L"{frame_number}",L"",IgnoreCase);
  ::FString::ReplaceInline(param_1,L"{frame_number_rel}",L"",IgnoreCase);
  if (param_2) {
    ::FString::ReplaceInline(param_1,L"{frame_number_shot}",L"",IgnoreCase);
    ::FString::ReplaceInline(param_1,L"{frame_number_shot_rel}",L"",IgnoreCase);
  }
  return;
}

// RestoreSkeletalMeshClothSubSteps @ 14dd9c860

void __cdecl
UE::MoviePipeline::RestoreSkeletalMeshClothSubSteps
          (TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>_>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  float fVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UChaosClothAssetInteractor *this;
  UClass *pUVar9;
  FName *pFVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  FWeakObjectPtr *this_00;
  longlong lVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FName local_70;
  FName local_68 [5];
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      iVar15 = iVar15 + 0x20;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14dd9c90c;
      uVar12 = puVar16[iVar13];
    }
    uVar7 = ~(uVar12 - 1) & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res18 = (int)lVar17;
    iVar8 = local_res18 + -1 + iVar15;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14dd9c90c:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44(uVar7,iVar13);
  TStack_98.CurrentBitIndex = iVar8;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_98._28_4_ = iVar8;
  TStack_98.BaseBitIndex = iVar15;
  uStack_78 = CONCAT44(uStack_ac,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      iVar13 = iVar13 + 1;
      uVar11 = uVar11 + 0x20;
      uVar12 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar13) goto LAB_14dd9ca00;
      uVar12 = *(uint *)(puVar14 + (longlong)iVar13 * 4);
    }
    uVar2 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res20 = (int)lVar17;
    uVar12 = local_res20 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14dd9ca00:
  do {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_98.CurrentBitIndex == uVar12) &&
       (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    this_00 = (FWeakObjectPtr *)((longlong)TStack_98.CurrentBitIndex * 0x20 + *(longlong *)param_1);
    this = (UChaosClothAssetInteractor *)FWeakObjectPtr::Get(this_00);
    if (this != (UChaosClothAssetInteractor *)0x0) {
      pUVar9 = Z_Construct_UClass_UClothingSimulationInteractor_NoRegister();
      iVar4 = (int)pUVar9->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8)
          != &pUVar9->_padding_)) {
        pUVar9 = Z_Construct_UClass_UChaosClothAssetInteractor_NoRegister();
        iVar4 = (int)pUVar9->_padding_;
        if ((iVar4 <= *(int *)(this->_padding_ + 0x38)) &&
           (((longlong *)
             *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
             &pUVar9->_padding_ && (uVar7 = 0, 0 < this_00[2].ObjectIndex)))) {
          lVar17 = 0;
          do {
            uVar11 = 0;
            if ((int)uVar7 < this_00[2].ObjectIndex) {
              uVar11 = ~uVar7 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            iVar4 = *(int *)(lVar17 + (longlong)this_00[1]);
            pFVar10 = ::FName::FName(&local_70,L"NumSubsteps");
            UChaosClothAssetInteractor::SetIntPropertyValue(this,*pFVar10,uVar7,iVar4);
            uVar11 = 0;
            if ((int)uVar7 < this_00[2].ObjectIndex) {
              uVar11 = ~uVar7 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            fVar3 = *(float *)(lVar17 + 4 + (longlong)this_00[1]);
            pFVar10 = ::FName::FName(local_68,L"DynamicSubstepDeltaTime");
            UChaosClothAssetInteractor::SetFloatPropertyValue(this,*pFVar10,uVar7,fVar3);
            uVar7 = uVar7 + 1;
            lVar17 = lVar17 + 8;
          } while ((int)uVar7 < this_00[2].ObjectIndex);
        }
      }
      else {
        pcVar5 = *(code **)(this->_padding_ + 0x308);
        if ((this_00[2].ObjectIndex < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (*pcVar5)(this,*(undefined4 *)this_00[1]);
      }
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  } while( true );
}

// ScaleResolutionByOverscan @ 14dd9d640

TIntPoint<int> __cdecl
UE::MoviePipeline::ScaleResolutionByOverscan(float param_1,TIntPoint<int> *param_2)

{
  undefined8 uVar1;
  TIntPoint<int>_u_0 in_RCX;
  undefined8 *in_R8;
  float in_XMM1_Da;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_3f800000;
  uVar1 = *in_R8;
  if (__real_3f800000 <= in_XMM1_Da) {
    in_XMM1_Da = __real_3f800000;
  }
  *(undefined8 *)in_RCX = uVar1;
  if (in_XMM1_Da <= 0.0) {
    in_XMM1_Da = 0.0;
  }
  if (0.0 < in_XMM1_Da) {
    fVar3 = in_XMM1_Da + fVar3;
    fVar2 = __real_bf000000 - (fVar3 + fVar3) * (float)*(int *)((longlong)in_RCX + 4);
    *(int *)in_RCX = -((int)ROUND(__real_bf000000 - (fVar3 + fVar3) * (float)(int)uVar1) >> 1);
    *(int *)((longlong)in_RCX + 4) = -((int)ROUND(fVar2) >> 1);
  }
  return (TIntPoint<int>)in_RCX;
}

// SetSkeletalMeshClothSubSteps @ 14dda37b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::SetSkeletalMeshClothSubSteps
          (int param_1,UWorld *param_2,
          TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>_>
          *param_3)

{
  longlong *plVar1;
  UObject *pUVar2;
  UChaosClothComponent *this;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ClothSubstepAdjust> FVar14;
  UClass *pUVar15;
  AActor *pAVar16;
  UClass *pUVar17;
  UClass *pUVar18;
  longlong lVar19;
  ForAnyElementType *pFVar20;
  FString *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  FName FVar25;
  longlong *plVar26;
  longlong lVar27;
  ForAnyElementType *pFVar28;
  uint uVar29;
  uint uVar30;
  ForAnyElementType *pFVar31;
  longlong *plVar32;
  ForAnyElementType *pFVar33;
  float fVar34;
  undefined1 local_res20 [8];
  undefined1 local_228;
  undefined1 local_227 [3];
  uint local_224;
  uint local_220;
  FWeakObjectPtr local_218;
  AActor *local_210;
  longlong *local_208;
  longlong *local_200;
  FWeakObjectPtr local_1f8;
  FName local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  ulonglong local_1d0;
  FColor_u_0 local_1c8;
  undefined1 local_1c4 [12];
  FName local_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  FWeakObjectPtr local_1a0;
  FName local_198;
  UObject *local_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr *local_178;
  TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> local_170;
  UClass *local_168;
  UClass *local_160;
  AActor *local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr *local_148;
  FWeakObjectPtr local_140;
  UClass *local_138;
  UClass *local_130;
  UClass *local_128 [2];
  TActorIteratorBase<TActorIterator<AActor>_> local_118;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FString local_90 [5];
  
  FVar14 = StatPtr_STAT_ClothSubstepAdjust;
  if (StatPtr_STAT_ClothSubstepAdjust ==
      (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ClothSubstepAdjust>)0x0) {
    pFVar13 = ::FName::FName(&local_a8,"STAT_ClothSubstepAdjust");
    FVar14 = (FThreadSafeStaticStat<UE::MoviePipeline::FStat_STAT_ClothSubstepAdjust>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ClothSubstepAdjust,*pFVar13,
                        L"STAT_MoviePipeline_ClothAdjust","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar25 = *(FName *)FVar14;
  bVar5 = false;
  bVar4 = false;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c8._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineUtils.cpp"
                   ,0x4f6);
        bVar5 = true;
        bVar4 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1f0 = FVar25;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar8 = true;
      goto LAB_14dda3932;
    }
  }
  bVar5 = bVar9;
  bVar4 = bVar8;
  bVar8 = false;
  local_1f0 = local_198;
  FVar25 = local_198;
LAB_14dda3932:
  pUVar15 = Z_Construct_UClass_AActor_NoRegister();
  if (GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar15 != (UClass *)0x0) {
      GC::MarkAsReachable((UObject *)pUVar15);
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar15);
    }
  }
  local_118.Flags = OnlyActiveLevels|SkipPendingKill;
  local_118.State.bIsSet = false;
  local_138 = pUVar15;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar15);
  }
  FActorIteratorState::FActorIteratorState
            (&local_118.State.TypedValue,param_2,(TSubclassOf<AActor>)&local_138);
  local_118.State.bIsSet = true;
  TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_118);
  fVar6 = __real_3f800000;
  do {
    if ((local_118.State.bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_118.State.TypedValue.ReachedEnd != false) {
      if (local_118.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_118.State.TypedValue.CurrentWorld,
                   local_118.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_118.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_118.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar8) {
        FThreadStats::AddMessage(FVar25,CycleScopeEnd);
      }
      return;
    }
    if ((local_118.State.bIsSet == false) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pAVar16 = FActorIteratorState::GetActorChecked(&local_118.State.TypedValue);
    local_210 = pAVar16;
    if (pAVar16 == (AActor *)0x0) {
      pFVar21 = GetTypeName<AActor>(local_90);
      if ((pFVar21->Data).ArrayNum == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar24);
    }
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar15 != (UClass *)0x0) goto LAB_14dda3a76;
LAB_14dda3aa7:
      pUVar17 = (UClass *)0x0;
    }
    else {
      if (pUVar15 == (UClass *)0x0) goto LAB_14dda3aa7;
      GC::MarkAsReachable((UObject *)pUVar15);
LAB_14dda3a76:
      pUVar17 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar17 == (UClass *)0x0) goto LAB_14dda3aa7;
      iVar10 = (int)pUVar17->_padding_;
      if (((int)pUVar15->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar17->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pUVar17 = pUVar15;
      if (!bVar9) goto LAB_14dda3aa7;
    }
    pUVar18 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar17 == pUVar18) {
      local_130 = pUVar15;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar15);
      }
      AActor::
      ForEachComponent_Internal<USkeletalMeshComponent,1,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (pAVar16,(TSubclassOf<UActorComponent>)&local_130,
                 (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *)&local_1d8);
    }
    else {
      local_128[0] = pUVar15;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar15);
      }
      AActor::
      ForEachComponent_Internal<USkeletalMeshComponent,0,0,_AActor::GetComponents<USkeletalMeshComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (pAVar16,(TSubclassOf<UActorComponent>)local_128,
                 (TArray<USkeletalMeshComponent_*,TSizedDefaultAllocator<32>_> *)&local_1d8);
    }
    uVar22 = (ulonglong)(int)(uint)local_1d0;
    local_220 = (uint)local_1d0;
    local_1c4._4_8_ = local_1d8 + uVar22;
    uVar23 = uVar22;
    plVar26 = local_1d8;
    while( true ) {
      uVar7 = local_1c4._4_8_;
      local_208 = plVar26;
      if ((int)uVar22 != (int)uVar23) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<USkeletalMeshComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (plVar26 == (longlong *)uVar7) break;
      lVar19 = *plVar26;
      local_224 = *(uint *)(lVar19 + 0xce8);
      uVar23 = (ulonglong)(int)local_224;
      plVar32 = *(longlong **)(lVar19 + 0xce0);
      plVar26 = plVar32 + uVar23 * 5;
      local_200 = plVar26;
      while( true ) {
        if (*(int *)(lVar19 + 0xce8) != (int)uVar23) {
          local_228 = 0;
          `TCheckedPointerIterator<FClothingSimulationInstance_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_228);
        }
        if (plVar32 == plVar26) break;
        plVar1 = (longlong *)*plVar32;
        pUVar2 = (UObject *)plVar32[2];
        if ((plVar1 != (longlong *)0x0) && (pUVar2 != (UObject *)0x0)) {
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar2);
          }
          local_218.ObjectIndex = 0;
          local_218.ObjectSerialNumber = 0;
          local_188 = pUVar2;
          if (GC::GIsIncrementalReachabilityPending != false) {
            GC::MarkAsReachable(pUVar2);
          }
          FWeakObjectPtr::operator=(&local_218,(FObjectPtr)&local_188);
          local_180 = local_218;
          iVar10 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                             ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                               *)param_3,local_218.ObjectSerialNumber ^ local_218.ObjectIndex,
                              (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_180);
          if (iVar10 == -1) {
LAB_14dda3c1d:
            local_178 = &local_218;
            TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Emplace<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
                      ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)param_3,
                       (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)local_1c4,
                       (bool *)&local_178);
            pFVar28 = (ForAnyElementType *)
                      (*(longlong *)param_3 + (longlong)(int)local_1c4._0_4_ * 0x20 + 8);
            iVar10 = *(int *)&pFVar28[1].Data;
            pFVar33 = pFVar28 + 1;
            if (iVar10 < 1) {
              iVar11 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (8,4,1 - iVar10,pFVar28,(int *)pFVar33,
                                  (int *)((longlong)&pFVar28[1].Data + 4));
              memset(pFVar28->Data + (longlong)iVar11 * 8,0,(longlong)(1 - iVar10) << 3);
            }
            else if (1 < iVar10) {
              uVar29 = iVar10 - 1;
              if ((int)uVar29 < 0) {
                bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  );
                if (bVar9) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              else if (uVar29 == 0) goto LAB_14dda3d34;
              iVar10 = ~uVar29 + *(int *)&pFVar33->Data;
              if (iVar10 != 0) {
                memmove(pFVar28->Data + 8,pFVar28->Data + 8 + (longlong)(int)uVar29 * 8,
                        (longlong)iVar10 << 3);
              }
              *(uint *)&pFVar33->Data = *(int *)&pFVar33->Data - uVar29;
              Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,pFVar28,*(int *)&pFVar33->Data,(int *)((longlong)&pFVar28[1].Data + 4))
              ;
            }
LAB_14dda3d34:
            local_1b0 = (**(code **)(*plVar1 + 0xb0))(plVar1);
            uStack_1ac = 0;
            if ((*(int *)&pFVar33->Data < 1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(ulonglong *)pFVar28->Data = CONCAT44(uStack_1ac,local_1b0);
          }
          else {
            lVar27 = (longlong)iVar10 * 0x20 + *(longlong *)param_3;
            pFVar28 = (ForAnyElementType *)(lVar27 + 8);
            if (lVar27 == 0) {
              pFVar28 = (ForAnyElementType *)0x0;
            }
            if (pFVar28 == (ForAnyElementType *)0x0) goto LAB_14dda3c1d;
          }
          pcVar3 = *(code **)(*(longlong *)pUVar2 + 0x308);
          if ((*(int *)&pFVar28[1].Data < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (*pcVar3)(pUVar2,param_1 * *(int *)pFVar28->Data);
          plVar26 = local_200;
        }
        uVar23 = (ulonglong)local_224;
        plVar32 = plVar32 + 5;
      }
      uVar22 = local_1d0 & 0xffffffff;
      plVar26 = local_208 + 1;
      uVar23 = (ulonglong)local_220;
    }
    local_1e8 = (longlong *)0x0;
    local_1e0 = 0;
    pUVar15 = Z_Construct_UClass_UChaosClothComponent_NoRegister();
    FVar25 = local_1f0;
    if (GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar15 != (UClass *)0x0) goto LAB_14dda3e45;
LAB_14dda3e76:
      pUVar17 = (UClass *)0x0;
    }
    else {
      if (pUVar15 == (UClass *)0x0) goto LAB_14dda3e76;
      GC::MarkAsReachable((UObject *)pUVar15);
LAB_14dda3e45:
      pUVar17 = Z_Construct_UClass_UActorComponent_NoRegister();
      if (pUVar17 == (UClass *)0x0) goto LAB_14dda3e76;
      iVar10 = (int)pUVar17->_padding_;
      if (((int)pUVar15->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar15->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar17->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      pUVar17 = pUVar15;
      if (!bVar9) goto LAB_14dda3e76;
    }
    pUVar18 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar17 == pUVar18) {
      local_168 = pUVar15;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar15);
      }
      AActor::
      ForEachComponent_Internal<UChaosClothComponent,1,0,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (local_210,(TSubclassOf<UActorComponent>)&local_168,
                 (TArray<UChaosClothComponent_*,TSizedDefaultAllocator<32>_> *)&local_1e8);
    }
    else {
      local_160 = pUVar15;
      if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
        GC::MarkAsReachable((UObject *)pUVar15);
      }
      AActor::
      ForEachComponent_Internal<UChaosClothComponent,0,0,_AActor::GetComponents<UChaosClothComponent,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>_>
                (local_210,(TSubclassOf<UActorComponent>)&local_160,
                 (TArray<UChaosClothComponent_*,TSizedDefaultAllocator<32>_> *)&local_1e8);
    }
    uVar22 = (ulonglong)(int)local_1e0;
    local_208 = (longlong *)CONCAT44(local_208._4_4_,(int)local_1e0);
    local_1c4._4_8_ = local_1e8 + uVar22;
    uVar23 = uVar22;
    plVar26 = local_1e8;
    while( true ) {
      uVar7 = local_1c4._4_8_;
      pFVar28 = (ForAnyElementType *)0x0;
      local_200 = plVar26;
      if ((int)uVar22 != (int)uVar23) {
        local_227[0] = 0;
        `TCheckedPointerIterator<UChaosClothComponent_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_227);
      }
      if (plVar26 == (longlong *)uVar7) break;
      this = (UChaosClothComponent *)*plVar26;
      local_1a8 = 0;
      pAVar16 = (AActor *)UChaosClothComponent::GetClothOutfitInteractor(this,0,(FName)0x0);
      local_210 = pAVar16;
      if (pAVar16 != (AActor *)0x0) {
        uVar29 = USkinnedMeshComponent::GetNumLODs((USkinnedMeshComponent *)this);
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pAVar16);
        }
        local_1f8.ObjectIndex = 0;
        local_1f8.ObjectSerialNumber = 0;
        local_158 = pAVar16;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)pAVar16);
        }
        FWeakObjectPtr::operator=(&local_1f8,(FObjectPtr)&local_158);
        local_1a0 = local_1f8;
        local_150 = local_1f8;
        iVar10 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                           ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)param_3,local_1f8.ObjectSerialNumber ^ local_1f8.ObjectIndex,
                            (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_150);
        if (iVar10 == -1) {
LAB_14dda3fcc:
          local_148 = &local_1a0;
          TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)param_3,&local_170,(bool *)&local_148);
          local_140 = local_1a0;
          iVar10 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                             ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<MoviePipeline::FClothSimSettingsCache,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                               *)param_3,local_1a0.ObjectSerialNumber ^ local_1a0.ObjectIndex,
                              (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_140);
          pFVar20 = pFVar28;
          if (iVar10 != -1) {
            pFVar20 = (ForAnyElementType *)((longlong)iVar10 * 0x20 + *(longlong *)param_3);
          }
          pFVar33 = pFVar20 + 1;
          if (pFVar20 == (ForAnyElementType *)0x0) {
            pFVar33 = pFVar28;
          }
          iVar10 = *(int *)&pFVar33[1].Data;
          pFVar20 = pFVar33 + 1;
          if (iVar10 < (int)uVar29) {
            Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar29 - iVar10,pFVar33,(int *)pFVar20,
                       (int *)((longlong)&pFVar33[1].Data + 4));
          }
          else {
            if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
              Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
            }
            if ((int)uVar29 < iVar10) {
              uVar12 = iVar10 - uVar29;
              if (((int)(uVar29 | uVar12) < 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (uVar12 != 0) {
                iVar10 = (*(int *)&pFVar20->Data - uVar12) - uVar29;
                if (iVar10 != 0) {
                  memmove(pFVar33->Data + (longlong)(int)uVar29 * 8,
                          pFVar33->Data + (longlong)(int)uVar29 * 8 + (longlong)(int)uVar12 * 8,
                          (longlong)iVar10 << 3);
                }
                *(uint *)&pFVar20->Data = *(int *)&pFVar20->Data - uVar12;
                Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,pFVar33,*(int *)&pFVar20->Data,
                           (int *)((longlong)&pFVar33[1].Data + 4));
              }
            }
          }
          pAVar16 = local_210;
          pFVar31 = pFVar28;
          if ((int)uVar29 < 1) goto LAB_14dda4235;
          do {
            pFVar13 = ::FName::FName(&local_a0,L"NumSubsteps");
            uVar30 = (uint)pFVar31;
            uVar12 = UChaosClothAssetInteractor::GetIntPropertyValue
                               ((UChaosClothAssetInteractor *)pAVar16,*pFVar13,uVar30,1);
            local_220 = 1;
            if (1 < (int)uVar12) {
              local_220 = uVar12;
            }
            pFVar13 = ::FName::FName(&local_98,L"DynamicSubstepDeltaTime");
            fVar34 = UChaosClothAssetInteractor::GetFloatPropertyValue
                               ((UChaosClothAssetInteractor *)pAVar16,*pFVar13,uVar30,fVar6);
            local_224 = ~uVar30 >> 0x1f;
            uVar12 = 0;
            if ((int)uVar30 < *(int *)&pFVar20->Data) {
              uVar12 = local_224;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(uint *)(pFVar33->Data + (longlong)&pFVar28->Data) = local_220;
            uVar12 = 0;
            if ((int)uVar30 < *(int *)&pFVar20->Data) {
              uVar12 = local_224;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(float *)(pFVar33->Data + 4 + (longlong)pFVar28) = fVar34;
            pFVar28 = pFVar28 + 1;
            pFVar31 = (ForAnyElementType *)(ulonglong)(uVar30 + 1);
          } while ((int)(uVar30 + 1) < (int)uVar29);
        }
        else {
          lVar19 = (longlong)iVar10 * 0x20 + *(longlong *)param_3;
          pFVar33 = (ForAnyElementType *)(lVar19 + 8);
          if (lVar19 == 0) {
            pFVar33 = pFVar28;
          }
          if (pFVar33 == (ForAnyElementType *)0x0) goto LAB_14dda3fcc;
LAB_14dda4235:
          if ((int)uVar29 < 1) goto LAB_14dda4312;
        }
        pAVar16 = local_210;
        uVar22 = 0;
        uVar23 = uVar22;
        do {
          iVar10 = (int)uVar22;
          if ((-1 < iVar10) && (iVar10 < *(int *)&pFVar33[1].Data)) {
            if ((iVar10 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar11 = *(int *)(pFVar33->Data + uVar23);
            pFVar13 = ::FName::FName(&local_b8,L"NumSubsteps");
            UChaosClothAssetInteractor::SetIntPropertyValue
                      ((UChaosClothAssetInteractor *)pAVar16,*pFVar13,iVar10,param_1 * iVar11);
            pFVar13 = ::FName::FName(&local_b0,L"DynamicSubstepDeltaTime");
            UChaosClothAssetInteractor::SetFloatPropertyValue
                      ((UChaosClothAssetInteractor *)pAVar16,*pFVar13,iVar10,0.0);
          }
          uVar22 = (ulonglong)(iVar10 + 1U);
          uVar23 = uVar23 + 8;
          FVar25 = local_1f0;
        } while ((int)(iVar10 + 1U) < (int)uVar29);
      }
LAB_14dda4312:
      uVar22 = local_1e0 & 0xffffffff;
      plVar26 = local_200 + 1;
      uVar23 = (ulonglong)local_208 & 0xffffffff;
    }
    if (local_1e8 != (longlong *)0x0) {
      FMemory::Free(local_1e8);
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    TActorIteratorBase<TActorIterator<AActor>_>::operator++(&local_118);
  } while( true );
}

// UpdateSceneViewForShowFlags @ 14dda8e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UE::MovieRenderPipeline::UpdateSceneViewForShowFlags(FSceneView *param_1)

{
  FEngineShowFlags *pFVar1;
  float fVar2;
  float fVar3;
  FSceneViewFamily *pFVar4;
  
  pFVar4 = param_1->Family;
  if ((pFVar4->EngineShowFlags).Wireframe == 0) {
    if (pFVar1->OverrideDiffuseAndSpecular == 0) {
      if (pFVar1->LightingOnlyOverride == 0) {
        if (pFVar1->ReflectionOverride != 0) {
          *(undefined8 *)&(param_1->DiffuseOverrideParameter).field0_0x0 = 0;
          *(undefined8 *)((longlong)&(param_1->DiffuseOverrideParameter).field0_0x0 + 8) = 0;
          (param_1->SpecularOverrideParameter).field0_0x0._s_0.X = 1.0;
          (param_1->SpecularOverrideParameter).field0_0x0._s_0.Y = 1.0;
          *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8) =
               0x3f800000;
          *(undefined8 *)&(param_1->NormalOverrideParameter).field0_0x0 = 0;
          *(undefined8 *)((longlong)&(param_1->NormalOverrideParameter).field0_0x0 + 8) = 0x3f800000
          ;
          (param_1->RoughnessOverrideParameter).field0_0x0 = (TVector2<float>_u_0)0x0;
        }
      }
      else {
        fVar2 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.G;
        fVar3 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.B;
        (param_1->DiffuseOverrideParameter).field0_0x0._s_0.X =
             (GEngine->LightingOnlyBrightness).field0_0x0._s_0.R;
        (param_1->DiffuseOverrideParameter).field0_0x0._s_0.Y = fVar2;
        (param_1->DiffuseOverrideParameter).field0_0x0._s_0.Z = fVar3;
        (param_1->DiffuseOverrideParameter).field0_0x0._s_0.W = 0.0;
        *(undefined8 *)&(param_1->SpecularOverrideParameter).field0_0x0 = 0;
        *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8) = 0;
      }
    }
    else {
      fVar2 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.B;
      fVar3 = (GEngine->LightingOnlyBrightness).field0_0x0._s_0.G;
      (param_1->DiffuseOverrideParameter).field0_0x0._s_0.X =
           (GEngine->LightingOnlyBrightness).field0_0x0._s_0.R;
      (param_1->DiffuseOverrideParameter).field0_0x0._s_0.Y = fVar3;
      (param_1->DiffuseOverrideParameter).field0_0x0._s_0.Z = fVar2;
      (param_1->DiffuseOverrideParameter).field0_0x0._s_0.W = 0.0;
      (param_1->SpecularOverrideParameter).field0_0x0._s_0.X = 0.1;
      (param_1->SpecularOverrideParameter).field0_0x0._s_0.Y = 0.1;
      *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8) = 0x3dcccccd;
    }
  }
  else {
    *(undefined8 *)&(param_1->DiffuseOverrideParameter).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->DiffuseOverrideParameter).field0_0x0 + 8) = 0;
    *(undefined8 *)&(param_1->SpecularOverrideParameter).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8) = 0;
  }
  if (!(BADTYPE)(pFVar4->EngineShowFlags).Diffuse) {
    *(undefined8 *)&(param_1->DiffuseOverrideParameter).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->DiffuseOverrideParameter).field0_0x0 + 8) = 0;
  }
  if ((pFVar4->EngineShowFlags).Specular == 0) {
    *(undefined8 *)&(param_1->SpecularOverrideParameter).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->SpecularOverrideParameter).field0_0x0 + 8) = 0;
  }
  if ((&pFVar4->EngineShowFlags)->MaterialNormal == 0) {
    *(undefined8 *)&(param_1->NormalOverrideParameter).field0_0x0 = 0;
    *(undefined8 *)((longlong)&(param_1->NormalOverrideParameter).field0_0x0 + 8) = 0x3f800000;
  }
  if ((&pFVar4->EngineShowFlags)->MaterialAmbientOcclusion == 0) {
    (param_1->AmbientOcclusionOverrideParameter).field0_0x0 = (TVector2<float>_u_0)0x3f800000;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&BufferVisualizationMode,L"WorldNormal");
      _Init_thread_footer(&::_TSS0);
    }
  }
  param_1->CurrentBufferVisualizationMode = BufferVisualizationMode;
  return;
}

// ValidateOutputFormatString @ 14dda9080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MoviePipeline::ValidateOutputFormatString
          (FString *param_1,bool param_2,bool param_3,bool param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  longlong lVar6;
  undefined1 auStackY_a8 [32];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_28.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_a8);
  ::FString::FString(&local_68,L"{frame_number}");
  ::FString::FString(&local_58,L"{frame_number_shot}");
  ::FString::FString(&local_48,L"{frame_number_rel}");
  ::FString::FString(&local_38,L"{frame_number_shot_rel}");
  if ((param_2) &&
     (iVar3 = ::FString::Find(param_1,L"{render_pass}",0xd,IgnoreCase,FromStart,-1), iVar3 == -1)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pFVar5 = &local_68;
    do {
      iVar1 = (pFVar5->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = ::FString::Find(param_1,pwVar4,iVar3,IgnoreCase,FromEnd,-1);
      if (iVar3 != -1) {
        ::FString::FString(&local_78,L"{render_pass}.");
        ::FString::InsertAt(param_1,iVar3,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        goto LAB_14dda91f7;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != &local_28);
    ::FString::AppendChars(param_1,L"{render_pass}",0xd);
  }
LAB_14dda91f7:
  if ((param_4) &&
     (iVar3 = ::FString::Find(param_1,L"{camera_name}",0xd,IgnoreCase,FromStart,-1), iVar3 == -1)) {
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    pFVar5 = &local_68;
    do {
      iVar1 = (pFVar5->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = ::FString::Find(param_1,pwVar4,iVar3,IgnoreCase,FromEnd,-1);
      if (iVar3 != -1) {
        ::FString::FString(&local_78,L"{camera_name}.");
        ::FString::InsertAt(param_1,iVar3,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        goto LAB_14dda92f7;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != &local_28);
    ::FString::AppendChars(param_1,L"{camera_name}",0xd);
  }
LAB_14dda92f7:
  if (param_3) {
    pFVar5 = &local_68;
    do {
      iVar1 = (pFVar5->Data).ArrayNum;
      iVar3 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar3 = 0;
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = ::FString::Find(param_1,pwVar4,iVar3,IgnoreCase,FromEnd,-1);
      if (iVar3 != -1) {
        ::FString::FString(&local_78,L"{file_dup}");
        ::FString::InsertAt(param_1,iVar3,&local_78);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        goto LAB_14dda93ae;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != &local_28);
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
LAB_14dda93ae:
  iVar3 = ::FString::Find(param_1,L"{file_dup}",10,IgnoreCase,FromStart,-1);
  if (iVar3 == -1) {
    ::FString::AppendChars(param_1,L"{file_dup}",10);
  }
  pFVar5 = &local_28;
  lVar6 = 4;
  do {
    pFVar2 = pFVar5[-1].Data.AllocatorInstance.Data;
    pFVar5 = pFVar5 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar6 != 0);
  return;
}

// operator() @ 15058c980

bool __thiscall `UE::MovieGraph::ResolveConnectedPinValue'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2835597396627423285>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(**(longlong **)this + 0x28) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2835597396627423285>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15058c9fc;
    }
  }
  bVar2 = false;
LAB_15058c9fc:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

