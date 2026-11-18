// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 2

// GetFloat @ 146bac560

float __cdecl FAppStyle::GetFloat(FName param_1,char *param_2)

{
  ISlateStyle *pIVar1;
  float fVar2;
  
  pIVar1 = Get();
  fVar2 = (float)(**(code **)((longlong)*pIVar1 + 0x28))
                           (pIVar1,param_1,param_2,FStyleDefaults::DefaultFloat,0);
  return fVar2;
}

// GetMargin @ 146baec90

FMargin * __cdecl FAppStyle::GetMargin(FName param_1,char *param_2)

{
  ISlateStyle *pIVar1;
  FMargin *pFVar2;
  
  pIVar1 = Get();
  pFVar2 = (FMargin *)
           (**(code **)((longlong)*pIVar1 + 0x48))
                     (pIVar1,param_1,param_2,&FStyleDefaults::DefaultMargin,0);
  return pFVar2;
}

