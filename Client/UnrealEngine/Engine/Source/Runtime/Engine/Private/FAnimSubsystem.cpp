// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 147255de0

UScriptStruct * __cdecl FAnimSubsystem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystem,(UObject *)pUVar1,L"AnimSubsystem"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FAnimSubsystem.OuterSingleton;
}

// OnPreUpdate_GameThread @ 147255e20

void __thiscall
FAnimSubsystem::OnPreUpdate_GameThread(FAnimSubsystem *this,FAnimSubsystemUpdateContext *param_1)

{
  return;
}

// OnPostUpdate_GameThread @ 147255e30

void __thiscall
FAnimSubsystem::OnPostUpdate_GameThread(FAnimSubsystem *this,FAnimSubsystemUpdateContext *param_1)

{
  return;
}

// OnPreUpdate_WorkerThread @ 147255e40

void __thiscall
FAnimSubsystem::OnPreUpdate_WorkerThread
          (FAnimSubsystem *this,FAnimSubsystemParallelUpdateContext *param_1)

{
  return;
}

// OnPostUpdate_WorkerThread @ 147255e50

void __thiscall
FAnimSubsystem::OnPostUpdate_WorkerThread
          (FAnimSubsystem *this,FAnimSubsystemParallelUpdateContext *param_1)

{
  return;
}

// OnPostLoadDefaults @ 147255e60

void __thiscall
FAnimSubsystem::OnPostLoadDefaults
          (FAnimSubsystem *this,FAnimSubsystemPostLoadDefaultsContext *param_1)

{
  return;
}

// OnPostLoad @ 147255e70

void __thiscall
FAnimSubsystem::OnPostLoad(FAnimSubsystem *this,FAnimSubsystemPostLoadContext *param_1)

{
  return;
}

// ~FAnimSubsystem @ 14725d930

void __thiscall FAnimSubsystem::~FAnimSubsystem(FAnimSubsystem *this)

{
  return;
}

