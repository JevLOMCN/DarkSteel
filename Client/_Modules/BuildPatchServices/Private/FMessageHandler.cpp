// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// ~FMessageHandler @ 143288a70

void __thiscall BuildPatchServices::FMessageHandler::~FMessageHandler(FMessageHandler *this)

{
  return;
}

// HandleMessage @ 1432da6d0

void __thiscall
BuildPatchServices::FMessageHandler::HandleMessage(FMessageHandler *this,FChunkSourceEvent *param_1)

{
  return;
}

// HandleMessage @ 1432da6e0

void __thiscall
BuildPatchServices::FMessageHandler::HandleMessage(FMessageHandler *this,FGenericMessage *param_1)

{
  return;
}

// HandleMessage @ 1432da6f0

void __thiscall
BuildPatchServices::FMessageHandler::HandleMessage
          (FMessageHandler *this,FInstallationFileAction *param_1)

{
  return;
}

// HandleRequest @ 1432da9e0

bool __thiscall
BuildPatchServices::FMessageHandler::HandleRequest
          (FMessageHandler *this,FChunkUriRequest *param_1,
          TFunction<void___cdecl(BuildPatchServices::FChunkUriResponse)> *param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)param_2 != 0) {
    plVar1 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  return false;
}

