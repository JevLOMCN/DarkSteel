// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147256070

UScriptStruct * __cdecl FAnimSubsystemInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimSubsystemInstance,(UObject *)pUVar1,
                         L"AnimSubsystemInstance");
  }
  return Z_Registration_Info_UScriptStruct_FAnimSubsystemInstance.OuterSingleton;
}

// Initialize_WorkerThread @ 1472560b0

void __thiscall FAnimSubsystemInstance::Initialize_WorkerThread(FAnimSubsystemInstance *this)

{
  return;
}

// ~FAnimSubsystemInstance @ 14725d940

void __thiscall FAnimSubsystemInstance::~FAnimSubsystemInstance(FAnimSubsystemInstance *this)

{
  *this = (FAnimSubsystemInstance)&___7FAnimSubsystemInstance__6B_;
  return;
}

