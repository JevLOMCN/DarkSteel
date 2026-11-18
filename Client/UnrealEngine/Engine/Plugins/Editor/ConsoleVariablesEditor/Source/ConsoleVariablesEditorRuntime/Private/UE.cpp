// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ConsoleVariablesEditorRuntime
// Functions: 4

// Construct<FConsoleVariablesEditorAssetSaveData> @ 14de367f0

void __cdecl
UE::CoreUObject::Private::Construct<FConsoleVariablesEditorAssetSaveData>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x21) = 0;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 2;
  return;
}

// ConstructForTests<FConsoleVariablesEditorAssetSaveData> @ 14de36820

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FConsoleVariablesEditorAssetSaveData>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 2;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FConsoleVariablesEditorAssetSaveData> @ 14de36840

void __cdecl UE::CoreUObject::Private::Destruct<FConsoleVariablesEditorAssetSaveData>(void *param_1)

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

// Copy<FConsoleVariablesEditorAssetSaveData> @ 14de36880

bool __cdecl
UE::CoreUObject::Private::Copy<FConsoleVariablesEditorAssetSaveData>
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

