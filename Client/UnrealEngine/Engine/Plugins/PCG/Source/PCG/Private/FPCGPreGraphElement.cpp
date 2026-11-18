// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// CanExecuteOnlyOnMainThread @ 149cb0c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPreGraphElement::CanExecuteOnlyOnMainThread(FPCGPreGraphElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149cc3820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FPCGPreGraphElement::ExecuteInternal(FPCGPreGraphElement *this,FPCGContext *param_1)

{
  IPCGGraphExecutionSource *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  longlong *plVar6;
  
  if (param_1 == (FPCGContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                       ,0xb48,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Graph\\PCGGraphExecutor.cpp"
                       ,0xb4a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource);
    if (bVar3) {
      bVar3 = false;
      goto LAB_149cc38a8;
    }
  }
  bVar3 = true;
LAB_149cc38a8:
  if ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource);
    if ((bVar5) &&
       (pIVar1 = (param_1->ExecutionSource).InterfaceInstance,
       pIVar1 != (IPCGGraphExecutionSource *)0x0)) {
      plVar6 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x18))();
      (**(code **)(*plVar6 + 0xb8))(plVar6,param_1);
      return true;
    }
  }
  (param_1->OutputData).bCancelExecution = bVar3;
  return true;
}

// IsCacheable @ 149ccd4c0

bool __thiscall FPCGPreGraphElement::IsCacheable(FPCGPreGraphElement *this,UPCGSettings *param_1)

{
  return false;
}

// IsPassthrough @ 149ccd660

bool __thiscall FPCGPreGraphElement::IsPassthrough(FPCGPreGraphElement *this,UPCGSettings *param_1)

{
  return true;
}

// SupportsBasePointDataInputs @ 149cdda60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGPreGraphElement::SupportsBasePointDataInputs(FPCGPreGraphElement *this,FPCGContext *param_1)

{
  return true;
}

