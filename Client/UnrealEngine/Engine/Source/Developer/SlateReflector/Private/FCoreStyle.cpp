// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// Get @ 142e978b0

ISlateStyle * __cdecl FCoreStyle::Get(void)

{
  ISlateStyle *pIVar1;
  ISlateStyle *pIVar2;
  
  pIVar1 = FSlateStyleRegistry::FindSlateStyle(&FAppStyle::AppStyleName);
  pIVar2 = Instance.Object;
  if (pIVar1 != (ISlateStyle *)0x0) {
    pIVar2 = pIVar1;
  }
  return pIVar2;
}

