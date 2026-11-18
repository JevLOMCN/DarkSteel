// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Run @ 1487d3730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
_anon_689E48D4::FAutoRTFMTestCloseDisregardForGC::Run
          (FAutoRTFMTestCloseDisregardForGC *this,UWorld *param_1,UAutoRTFMTestLevel *param_2,
          AAutoRTFMTestActor *param_3,UAutoRTFMTestPrimitiveComponent *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  FUObjectArray local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FUObjectArray::FUObjectArray(&local_d8);
  FUObjectArray::CloseDisregardForGC(&local_d8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"AutoRTFM::ETransactionResult::AbortedByRequest == Result"
             ,false);
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_d8.UObjectDeleteListenersCritical);
  if (local_d8.UObjectDeleteListeners.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.UObjectDeleteListeners.AllocatorInstance.Data);
  }
  if (local_d8.UObjectCreateListeners.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.UObjectCreateListeners.AllocatorInstance.Data);
  }
  if (local_d8.ObjAvailableList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.ObjAvailableList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&local_d8.ObjObjectsCritical);
  if (local_d8.ObjObjects.PreAllocatedObjects == (FUObjectItem *)0x0) {
    iVar3 = 0;
    if (0 < local_d8.ObjObjects.MaxChunks) {
      lVar4 = 0;
      iVar2 = local_d8.ObjObjects.MaxChunks;
      do {
        lVar1 = *(longlong *)(lVar4 + (longlong)local_d8.ObjObjects.Objects);
        if (lVar1 != 0) {
          operator_delete__((void *)(lVar1 + -8),*(longlong *)(lVar1 + -8) * 0x20 + 8);
          iVar2 = local_d8.ObjObjects.MaxChunks;
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < iVar2);
    }
  }
  else {
    operator_delete__(&local_d8.ObjObjects.PreAllocatedObjects[-1].StatID,
                      (longlong)local_d8.ObjObjects.PreAllocatedObjects[-1].StatID.StatIdPtr * 0x20
                      + 8);
  }
  operator_delete__(local_d8.ObjObjects.Objects);
  return;
}

