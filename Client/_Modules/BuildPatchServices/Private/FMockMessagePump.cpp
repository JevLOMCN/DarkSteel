// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// PumpMessages @ 1432e2800

void __thiscall BuildPatchServices::FMockMessagePump::PumpMessages(FMockMessagePump *this)

{
  return;
}

// RegisterMessageHandler @ 1432e6700

void __thiscall
BuildPatchServices::FMockMessagePump::RegisterMessageHandler
          (FMockMessagePump *this,FMessageHandler *param_1)

{
  return;
}

// SendMessage @ 1432ecd90

void __thiscall
BuildPatchServices::FMockMessagePump::SendMessage(FMockMessagePump *this,FChunkSourceEvent *param_1)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (param_1->Location).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// SendMessage @ 1432ecdb0

void __thiscall
BuildPatchServices::FMockMessagePump::SendMessage(FMockMessagePump *this,FGenericMessage *param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_1->Payload2).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Payload1).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// SendMessage @ 1432ecdf0

void __thiscall
BuildPatchServices::FMockMessagePump::SendMessage
          (FMockMessagePump *this,FInstallationFileAction *param_1)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (param_1->Filename).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// SendRequest @ 1432ed050

bool __thiscall
BuildPatchServices::FMockMessagePump::SendRequest
          (FMockMessagePump *this,FChunkUriRequest *param_1,
          TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)> *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  
  pFVar1 = (param_1->RelativePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->CloudDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return false;
}

// UnregisterMessageHandler @ 1432f63d0

void __thiscall
BuildPatchServices::FMockMessagePump::UnregisterMessageHandler
          (FMockMessagePump *this,FMessageHandler *param_1)

{
  return;
}

