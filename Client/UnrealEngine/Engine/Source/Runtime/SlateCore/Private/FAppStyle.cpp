// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// Get @ 14257e530

ISlateStyle * __cdecl FAppStyle::Get(void)

{
  ISlateStyle *pIVar1;
  ISlateStyle *pIVar2;
  
  pIVar1 = FSlateStyleRegistry::FindSlateStyle(&AppStyleName);
  pIVar2 = FCoreStyle::Instance.Object;
  if (pIVar1 != (ISlateStyle *)0x0) {
    pIVar2 = pIVar1;
  }
  return pIVar2;
}

// GetAppStyleSetName @ 14257e8b0

FName __cdecl FAppStyle::GetAppStyleSetName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = AppStyleName;
  return in_RCX;
}

// SetAppStyleSet @ 142590740

void __cdecl FAppStyle::SetAppStyleSet(ISlateStyle *param_1)

{
  FName *pFVar1;
  
  pFVar1 = (FName *)(**(code **)((longlong)*param_1 + 8))();
  AppStyleName = *pFVar1;
  return;
}

// SetAppStyleSetName @ 142590760

void __cdecl FAppStyle::SetAppStyleSetName(FName *param_1)

{
  AppStyleName = *param_1;
  return;
}

