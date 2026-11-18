// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FUnsafeToMigrateScope @ 1421b4430

FUnsafeToMigrateScope * __thiscall
UE::RemoteObject::Private::FUnsafeToMigrateScope::FUnsafeToMigrateScope(FUnsafeToMigrateScope *this)

{
  UnsafeToMigrateObjects = UnsafeToMigrateObjects + 1;
  return this;
}

// ~FUnsafeToMigrateScope @ 1421b6d90

void __thiscall
UE::RemoteObject::Private::FUnsafeToMigrateScope::~FUnsafeToMigrateScope
          (FUnsafeToMigrateScope *this)

{
  code *pcVar1;
  bool bVar2;
  
  UnsafeToMigrateObjects = UnsafeToMigrateObjects + -1;
  if (UnsafeToMigrateObjects < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnsafeToMigrateObjects >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\RemoteObject.cpp"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

