// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_><TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> @ 145ed05e0

TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> * __thiscall
TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>::
TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_><TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_>
          (TTuple<TObjectPtr<UFoliageType>,TUniqueObj<FFoliageInfo>_> *this,
          TObjectPtr<UFoliageType> *param_1,TUniqueObj<FFoliageInfo> *param_2)

{
  UFoliageType *pUVar1;
  FFoliageInfo *pFVar2;
  EFoliageImplType *pEVar3;
  
  pUVar1 = (param_1->field0_0x0).DebugPtr;
  *(UFoliageType **)this = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UFoliageType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pFVar2 = (param_2->Obj).Ptr;
  pEVar3 = ::operator_new(0x10);
  if (pEVar3 != (EFoliageImplType *)0x0) {
    *pEVar3 = pFVar2->Type;
    *(FFoliageImpl **)(pEVar3 + 8) = (pFVar2->Implementation).Ptr;
    (pFVar2->Implementation).Ptr = (FFoliageImpl *)0x0;
    *(EFoliageImplType **)&this->field_0x8 = pEVar3;
    return this;
  }
  *(undefined8 *)&this->field_0x8 = 0;
  return this;
}

