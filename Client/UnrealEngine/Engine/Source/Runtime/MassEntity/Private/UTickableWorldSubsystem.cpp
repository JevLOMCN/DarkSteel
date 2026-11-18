// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// GetStatId @ 147227b00

TStatId __thiscall UTickableWorldSubsystem::GetStatId(UTickableWorldSubsystem *this)

{
  TStatIdData *in_RDX;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Subsystems\\WorldSubsystem.h"
             ,0x57,L"Pure virtual not implemented (%s)");
  in_RDX->Name = (TAtomic<FMinimalName>)&TStatId::TStatId_NAME_None;
  return (TStatId)in_RDX;
}

