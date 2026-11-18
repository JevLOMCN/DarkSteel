// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14741fc80

UScriptStruct * __cdecl FAnimInitializationContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimInitializationContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimInitializationContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimInitializationContext,(UObject *)pUVar1,
                         L"AnimInitializationContext");
  }
  return Z_Registration_Info_UScriptStruct_FAnimInitializationContext.OuterSingleton;
}

// GetContext @ 147454740

FAnimationInitializeContext * __thiscall
FAnimInitializationContext::GetContext(FAnimInitializationContext *this)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 *puVar2;
  FAnimationInitializeContext *pFVar3;
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
      if (aVar4 == (atomic<int>)0x0) goto LAB_147454771;
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
    if ((puVar2 != (undefined8 *)0x0) && (*(int *)(puVar2 + 1) == 2)) {
      pFVar3 = (FAnimationInitializeContext *)*puVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return pFVar3;
    }
  }
LAB_147454771:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return (FAnimationInitializeContext *)0x0;
}

