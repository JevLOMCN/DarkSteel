// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetErrorContext<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext> @ 1475999c0

FStreamableManagerAdditionalContext * __thiscall
UE::UnifiedError::FError::
GetErrorContext<UE::UnifiedError::StreamableManager::FStreamableManagerAdditionalContext>
          (FError *this)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char *pcVar5;
  FStreamableManagerAdditionalContext *pFVar6;
  IErrorDetails *pIVar7;
  IErrorDetails *pIVar8;
  longlong lVar9;
  FStreamableManagerAdditionalContext *pFVar10;
  longlong *local_res8;
  undefined8 local_18 [2];
  
  pIVar7 = (this->ErrorDetails).Reference;
  if (pIVar7 == (IErrorDetails *)0x0) {
    return (FStreamableManagerAdditionalContext *)0x0;
  }
  (**(code **)((longlong)*pIVar7 + 8))(pIVar7,&local_res8);
  while( true ) {
    lVar9 = 0x1505;
    pcVar5 = "TErrorDetails<StreamableManager::FStreamableManagerAdditionalContext>";
    cVar2 = 'T';
    do {
      pcVar5 = pcVar5 + 1;
      lVar9 = lVar9 * 0x21 + (longlong)cVar2;
      cVar2 = *pcVar5;
    } while (cVar2 != '\0');
    lVar3 = (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7);
    if (lVar3 == lVar9) break;
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,&local_res8);
    pIVar8 = pIVar7;
    if (local_18 != puVar4) {
      pIVar8 = (IErrorDetails *)*puVar4;
      *puVar4 = 0;
      if (pIVar7 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
      }
    }
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
    pIVar7 = pIVar8;
    if (pIVar8 == (IErrorDetails *)0x0) {
      return (FStreamableManagerAdditionalContext *)0x0;
    }
  }
  if (pIVar7 == (IErrorDetails *)0x0) {
    return (FStreamableManagerAdditionalContext *)0x0;
  }
  LOCK();
  *(int *)(pIVar7 + 2) = *(int *)(pIVar7 + 2) + 1;
  UNLOCK();
  (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
  pFVar10 = (FStreamableManagerAdditionalContext *)(pIVar7 + 4);
  if (pIVar7 == (IErrorDetails *)0x0) {
    pFVar10 = (FStreamableManagerAdditionalContext *)0x0;
  }
  pIVar8 = pIVar7 + 2;
  LOCK();
  iVar1 = *(int *)pIVar8;
  *(int *)pIVar8 = *(int *)pIVar8 + -1;
  UNLOCK();
  if (iVar1 != 1) {
    return pFVar10;
  }
  pFVar6 = (FStreamableManagerAdditionalContext *)(pIVar7 + 1);
  if (pIVar8 == (IErrorDetails *)0x0) {
    pFVar6 = (FStreamableManagerAdditionalContext *)0x0;
  }
  if (pFVar6 == (FStreamableManagerAdditionalContext *)0x0) {
    return pFVar10;
  }
  (**(code **)(pFVar6->RequestedPackageName).Data.AllocatorInstance.Data)(pFVar6,1);
  return pFVar10;
}

