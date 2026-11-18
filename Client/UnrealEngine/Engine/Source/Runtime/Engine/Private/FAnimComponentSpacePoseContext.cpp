// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14741fe70

UScriptStruct * __cdecl FAnimComponentSpacePoseContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimComponentSpacePoseContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimComponentSpacePoseContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimComponentSpacePoseContext,(UObject *)pUVar1,
                         L"AnimComponentSpacePoseContext");
  }
  return Z_Registration_Info_UScriptStruct_FAnimComponentSpacePoseContext.OuterSingleton;
}

// GetContext @ 1474546d0

FComponentSpacePoseContext * __thiscall
FAnimComponentSpacePoseContext::GetContext(FAnimComponentSpacePoseContext *this)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FComponentSpacePoseContext *pFVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x8;
  pTVar6 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_147454701;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar7 = aVar4 == aVar5;
      if (bVar7) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar7);
    puVar2 = *(undefined8 **)this;
    pTVar6 = pTVar1;
    if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 1) == 4)) {
      pFVar3 = (FComponentSpacePoseContext *)*puVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return pFVar3;
    }
  }
LAB_147454701:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (FComponentSpacePoseContext *)0x0;
}

