// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 3

// ~IMetasoundUObjectRegistryEntry @ 14b3523e0

void __thiscall
Metasound::IMetasoundUObjectRegistryEntry::~IMetasoundUObjectRegistryEntry
          (IMetasoundUObjectRegistryEntry *this)

{
  return;
}

// GetInterfaceVersion @ 14b3b66e0

FMetasoundFrontendVersion * __thiscall
Metasound::IMetasoundUObjectRegistryEntry::GetInterfaceVersion(IMetasoundUObjectRegistryEntry *this)

{
  return &`public:_virtual_struct_FMetasoundFrontendVersion_const&___ptr64___cdecl_Metasound::IMetasoundUObjectRegistryEntry::GetInterfaceVersion(void)const___ptr64'
          ::__l2::InterfaceVersion;
}

// NewObject @ 14b3c9790

UObject * __thiscall
Metasound::IMetasoundUObjectRegistryEntry::NewObject
          (IMetasoundUObjectRegistryEntry *this,UPackage *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Public\\MetasoundUObjectRegistry.h"
                     ,0x3c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  return (UObject *)0x0;
}

