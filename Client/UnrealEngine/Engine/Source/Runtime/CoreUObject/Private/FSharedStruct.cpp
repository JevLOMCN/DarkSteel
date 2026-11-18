// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// StaticStruct @ 141f54350

UScriptStruct * __cdecl FSharedStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSharedStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FSharedStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSharedStruct,(UObject *)pUVar1,L"SharedStruct");
  }
  return Z_Registration_Info_UScriptStruct_FSharedStruct.OuterSingleton;
}

// AddStructReferencedObjects @ 141f6e110

void __thiscall
FSharedStruct::AddStructReferencedObjects(FSharedStruct *this,FReferenceCollector *param_1)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  longlong lVar2;
  
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(this->StructMemoryPtr).Object;
  if ((pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) &&
     (pTVar1->DebugPtr != (UScriptStruct *)0x0)) {
    lVar2 = (longlong)*(short *)((longlong)pTVar1->DebugPtr + 0x5c);
    FReferenceCollector::AddReferencedObjects
              (param_1,(TObjectPtr<UScriptStruct_const_> *)&pTVar1->ObjectPtr,
               (void *)((longlong)pTVar1 + lVar2 + 7 & -lVar2),(UObject *)0x0,(FProperty *)0x0);
  }
  return;
}

// Identical @ 141f8c750

bool __thiscall FSharedStruct::Identical(FSharedStruct *this,FSharedStruct *param_1,uint param_2)

{
  FStructSharedMemory *pFVar1;
  FStructSharedMemory *pFVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  longlong lVar5;
  UScriptStruct *pUVar6;
  
  if (param_1 != (FSharedStruct *)0x0) {
    pFVar1 = (this->StructMemoryPtr).Object;
    pUVar6 = (UScriptStruct *)0x0;
    pUVar4 = pUVar6;
    if (pFVar1 != (FStructSharedMemory *)0x0) {
      lVar5 = (longlong)
              *(short *)((longlong)&((pFVar1->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
      pUVar4 = (UScriptStruct *)((longlong)&(pFVar1->ScriptStruct).field0_0x0 + lVar5 + 7 & -lVar5);
    }
    pFVar2 = (param_1->StructMemoryPtr).Object;
    pUVar3 = pUVar6;
    if (pFVar2 != (FStructSharedMemory *)0x0) {
      lVar5 = (longlong)
              *(short *)((longlong)&((pFVar2->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
      pUVar3 = (UScriptStruct *)((longlong)&(pFVar2->ScriptStruct).field0_0x0 + lVar5 + 7 & -lVar5);
    }
    if (pUVar4 == pUVar3) {
      pUVar4 = pUVar6;
      if (pFVar1 != (FStructSharedMemory *)0x0) {
        pUVar4 = (pFVar1->ScriptStruct).field0_0x0.DebugPtr;
      }
      if (pFVar2 != (FStructSharedMemory *)0x0) {
        pUVar6 = (pFVar2->ScriptStruct).field0_0x0.DebugPtr;
      }
      if (pUVar4 == pUVar6) {
        return true;
      }
    }
  }
  return false;
}

