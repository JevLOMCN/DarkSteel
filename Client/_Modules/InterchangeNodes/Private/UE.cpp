// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 15

// Construct<FInterchangeMeshPayLoadKey> @ 14e47aa70

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeMeshPayLoadKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FInterchangeMeshPayLoadKey> @ 14e47aaa0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeMeshPayLoadKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FInterchangeMeshPayLoadKey> @ 14e47aad0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeMeshPayLoadKey>(void *param_1)

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

// Copy<FInterchangeMeshPayLoadKey> @ 14e47ab90

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeMeshPayLoadKey>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      this[5] = *(undefined4 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FInterchangeMeshPayLoadKey> @ 14e47ad60

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FInterchangeMeshPayLoadKey>(void *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = 0;
  FStack_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&FStack_38,*(int *)((longlong)param_1 + 0x14));
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&FStack_48,(uint)*(byte *)((longlong)param_1 + 0x10));
  ::FString::ConcatFF(&FStack_18,param_1,&FStack_48);
  ::FString::ConcatFF(&FStack_28,&FStack_18,&FStack_38);
  iVar3 = FStack_28.Data.ArrayNum + -1;
  FVar1.Data = FStack_28.Data.AllocatorInstance.Data;
  if (FStack_28.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return uVar2;
}

// Construct<FInterchangeGroomPayloadKey> @ 14e47be10

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeGroomPayloadKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// ConstructForTests<FInterchangeGroomPayloadKey> @ 14e47be50

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeGroomPayloadKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

// Destruct<FInterchangeGroomPayloadKey> @ 14e47be80

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeGroomPayloadKey>(void *param_1)

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

// Copy<FInterchangeGroomPayloadKey> @ 14e47bf70

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeGroomPayloadKey>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      this[5] = *(undefined4 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 4);
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FInterchangeGroomPayloadKey> @ 14e47c1b0

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FInterchangeGroomPayloadKey>(void *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  FStack_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_38.Data.ArrayNum = 0;
  FStack_38.Data.ArrayMax = 0;
  ::FString::AppendInt(&FStack_38,*(int *)((longlong)param_1 + 0x14));
  FStack_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_48.Data.ArrayNum = 0;
  FStack_48.Data.ArrayMax = 0;
  ::FString::AppendInt(&FStack_48,(uint)*(byte *)((longlong)param_1 + 0x10));
  ::FString::ConcatFF(&FStack_18,param_1,&FStack_48);
  ::FString::ConcatFF(&FStack_28,&FStack_18,&FStack_38);
  iVar3 = FStack_28.Data.ArrayNum + -1;
  FVar1.Data = FStack_28.Data.AllocatorInstance.Data;
  if (FStack_28.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return uVar2;
}

// Construct<FInterchangeAnimationPayLoadKey> @ 14e47ce70

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeAnimationPayLoadKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FInterchangeAnimationPayLoadKey> @ 14e47cf20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangeAnimationPayLoadKey>(void *param_1)

{
  ::FString::FString(param_1,"");
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FInterchangeAnimationPayLoadKey> @ 14e47cf60

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeAnimationPayLoadKey>(void *param_1)

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

// Copy<FInterchangeAnimationPayLoadKey> @ 14e47d000

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeAnimationPayLoadKey>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined1 *)(this + 4) = *(undefined1 *)&pFVar1[1].Data.AllocatorInstance.Data;
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FInterchangeAnimationPayLoadKey> @ 14e47d1c0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FInterchangeAnimationPayLoadKey>(void *param_1)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FString FStack_28;
  FString FStack_18;
  
  FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_28.Data.ArrayNum = 0;
  FStack_28.Data.ArrayMax = 0;
  ::FString::AppendInt(&FStack_28,(uint)*(byte *)((longlong)param_1 + 0x10));
  ::FString::ConcatFF(&FStack_18,param_1,&FStack_28);
  iVar3 = FStack_18.Data.ArrayNum + -1;
  FVar1.Data = FStack_18.Data.AllocatorInstance.Data;
  if (FStack_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  return uVar2;
}

