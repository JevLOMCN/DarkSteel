// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SourceControl
// Functions: 10

// Construct<FSourceControlState> @ 146af5650

void __cdecl UE::CoreUObject::Private::Construct<FSourceControlState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// ConstructForTests<FSourceControlState> @ 146af5680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceControlState>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FSourceControlState> @ 146af56b0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceControlState>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FSourceControlState> @ 146af5700

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceControlState>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 1) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 1);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 2) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 2);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 3) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 3);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 4) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 4);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 5) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 5);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 6) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 6);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data + 7) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data + 7);
    *(char *)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum =
         (char)(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum + 1);
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum + 2) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum + 2);
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum + 3) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum + 3);
    *(char *)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax =
         (char)(((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax + 1);
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax + 2) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax + 2);
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayMax + 3) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayMax + 3);
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum);
    *(char *)&(((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum =
         (char)(((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x30))->Data).ArrayNum + 1);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x40),(FString *)((longlong)param_2 + 0x40));
    param_2 = (void *)((longlong)param_2 + 0x50);
    param_1 = (FString *)((longlong)param_1 + 0x50);
  }
  return true;
}

// DereferenceIfNecessary<FSourceControlFileStatusMonitor,FSourceControlFileStatusMonitor_*_&> @ 146af8330

FSourceControlFileStatusMonitor * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FSourceControlFileStatusMonitor,FSourceControlFileStatusMonitor_*_&>
          (FSourceControlFileStatusMonitor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FSourceControlModule,FSourceControlModule_*_&> @ 146af8350

/* WARNING: Enum "Type": Some values do not have unique names */

FSourceControlModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FSourceControlModule,FSourceControlModule_*_&>
          (FSourceControlModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSourceControlControls,SSourceControlControls_*_&> @ 146af8370

SSourceControlControls * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSourceControlControls,SSourceControlControls_*_&>
          (SSourceControlControls **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&> @ 146af8390

/* WARNING: Enum "Type": Some values do not have unique names */

SSourceControlLogin * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSourceControlLogin,SSourceControlLogin_*_&>
          (SSourceControlLogin **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&> @ 146af83b0

SSourceControlPicker * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSourceControlPicker,SSourceControlPicker_*_&>
          (SSourceControlPicker **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&> @ 146af83d0

SSourceControlProgress * __cdecl
UE::Core::Private::DereferenceIfNecessary<SSourceControlProgress,SSourceControlProgress_*_&>
          (SSourceControlProgress **param_1)

{
  return *param_1;
}

