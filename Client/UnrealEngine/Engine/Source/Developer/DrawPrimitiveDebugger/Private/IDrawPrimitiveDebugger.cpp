// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DrawPrimitiveDebugger
// Functions: 2

// Get @ 146d1afc0

IDrawPrimitiveDebugger * __cdecl IDrawPrimitiveDebugger::Get(void)

{
  FName FVar1;
  FName *pFVar2;
  FModuleManager *this;
  IModuleInterface *pIVar3;
  FName local_res8 [4];
  
  pFVar2 = ::FName::FName(local_res8,"DrawPrimitiveDebugger");
  FVar1 = *pFVar2;
  this = FModuleManager::Get();
  pIVar3 = FModuleManager::LoadModuleChecked(this,FVar1);
  return (IDrawPrimitiveDebugger *)pIVar3;
}

// IsAvailable @ 146d239b0

bool __cdecl IDrawPrimitiveDebugger::IsAvailable(void)

{
  bool bVar1;
  FModuleManager *this;
  FName *pFVar2;
  FName local_res8 [4];
  
  this = FModuleManager::Get();
  pFVar2 = ::FName::FName(local_res8,"DrawPrimitiveDebugger");
  bVar1 = FModuleManager::IsModuleLoaded(this,*pFVar2);
  return bVar1;
}

