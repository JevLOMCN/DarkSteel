// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 6

// StaticStruct @ 149a16920

UScriptStruct * __cdecl FPCGCustomSelectionKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGCustomSelectionKey,(UObject *)pUVar1,
                         L"PCGCustomSelectionKey");
  }
  return Z_Registration_Info_UScriptStruct_FPCGCustomSelectionKey.OuterSingleton;
}

// GetScriptStruct @ 149a16960

UScriptStruct * __thiscall FPCGCustomSelectionKey::GetScriptStruct(FPCGCustomSelectionKey *this)

{
  return (UScriptStruct *)0x0;
}

// IsMatchingInternal @ 149a16970

bool __thiscall
FPCGCustomSelectionKey::IsMatchingInternal
          (FPCGCustomSelectionKey *this,FPCGCustomSelectionKey *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGActorSelector.h"
             ,0x6b,L"Pure virtual not implemented (%s)");
  return false;
}

// EqualsInternal @ 149a169a0

bool __thiscall
FPCGCustomSelectionKey::EqualsInternal(FPCGCustomSelectionKey *this,FPCGCustomSelectionKey *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGActorSelector.h"
             ,0x6c,L"Pure virtual not implemented (%s)");
  return false;
}

// GetTypeHashInternal @ 149a169d0

uint __thiscall FPCGCustomSelectionKey::GetTypeHashInternal(FPCGCustomSelectionKey *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Elements\\PCGActorSelector.h"
             ,0x6d,L"Pure virtual not implemented (%s)");
  return 0;
}

// ~FPCGCustomSelectionKey @ 149ad2b80

void __thiscall FPCGCustomSelectionKey::~FPCGCustomSelectionKey(FPCGCustomSelectionKey *this)

{
  return;
}

