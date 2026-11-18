// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 7

// SysAllocString @ 15015a68f

BSTR __stdcall SysAllocString(OLECHAR *psz)

{
  BSTR pOVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pOVar1 = SysAllocString(psz);
  return pOVar1;
}

// SysFreeString @ 15015a69b

void __stdcall SysFreeString(BSTR bstrString)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SysFreeString(bstrString);
  return;
}

// SafeArrayPutElement @ 15015a6a7

HRESULT __stdcall SafeArrayPutElement(SAFEARRAY *psa,LONG *rgIndices,void *pv)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = SafeArrayPutElement(psa,rgIndices,pv);
  return HVar1;
}

// SafeArrayCreateVector @ 15015a6b3

SAFEARRAY * __stdcall SafeArrayCreateVector(VARTYPE vt,LONG lLbound,ULONG cElements)

{
  SAFEARRAY *pSVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar1 = SafeArrayCreateVector(vt,lLbound,cElements);
  return pSVar1;
}

// VariantCopy @ 15015a6bf

HRESULT __stdcall VariantCopy(VARIANTARG *pvargDest,VARIANTARG *pvargSrc)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a6bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantCopy(pvargDest,pvargSrc);
  return HVar1;
}

// VariantInit @ 15015a6cb

void __stdcall VariantInit(VARIANTARG *pvarg)

{
                    /* WARNING: Could not recover jumptable at 0x00015015a6cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  VariantInit(pvarg);
  return;
}

// VariantClear @ 15015a6d7

HRESULT __stdcall VariantClear(VARIANTARG *pvarg)

{
  HRESULT HVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015015a6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HVar1 = VariantClear(pvarg);
  return HVar1;
}

