// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// GetHeader @ 142054f50

FSchemaHeader * __thiscall UE::GC::FSchemaView::GetHeader(FSchemaView *this)

{
  code *pcVar1;
  bool bVar2;
  FSchemaHeader *pFVar3;
  
  if ((this->Handle & 0xfffffffffffffffe) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetWords()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                       ,0x5f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSchemaHeader *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FSchemaHeader *)((this->Handle & 0xfffffffffffffffe) - 8);
}

// TryGetHeader @ 142091590

FSchemaHeader * __thiscall UE::GC::FSchemaView::TryGetHeader(FSchemaView *this)

{
  FSchemaHeader *pFVar1;
  ulonglong uVar2;
  
  uVar2 = this->Handle & 0xfffffffffffffffe;
  pFVar1 = (FSchemaHeader *)0x0;
  if (uVar2 != 0) {
    pFVar1 = (FSchemaHeader *)(uVar2 - 8);
  }
  return pFVar1;
}

