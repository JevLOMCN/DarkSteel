// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Imports
// Functions: 6

// rand @ 15018fcb1

int __cdecl rand(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00015018fcb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = rand();
  return iVar1;
}

// qsort @ 150190065

void __cdecl
qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
                    /* WARNING: Could not recover jumptable at 0x000150190065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(_Base,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  return;
}

// srand @ 1501900b9

void __cdecl srand(uint _Seed)

{
                    /* WARNING: Could not recover jumptable at 0x0001501900b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  srand(_Seed);
  return;
}

// div @ 150190395

div_t __cdecl div(int _Numerator,int _Denominator)

{
  div_t dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = div(_Numerator,_Denominator);
  return dVar1;
}

// bsearch @ 150190431

void * __cdecl
bsearch(void *_Key,void *_Base,size_t _NumOfElements,size_t _SizeOfElements,
       _PtFuncCompare *_PtFuncCompare)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000150190431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = bsearch(_Key,_Base,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  return pvVar1;
}

// rand_s @ 1502445b4

void rand_s(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001502445b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  rand_s();
  return;
}

