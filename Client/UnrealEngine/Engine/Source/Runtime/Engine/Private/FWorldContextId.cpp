// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FWorldContextId @ 148809680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldContextId * __thiscall
UE::Tick::FWorldContextId::FWorldContextId(FWorldContextId *this,UWorld *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  FWorldContextId *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  if (param_1 != (UWorld *)0x0) {
    iVar9 = 0;
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    pFVar10 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    iVar4 = *piVar1;
    pFVar2 = pFVar10 + (longlong)iVar4 * 8;
    while( true ) {
      if (*piVar1 != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar2) goto LAB_148809794;
      pcVar5 = *(char **)pFVar10;
      if (param_1 == *(UWorld **)(pcVar5 + 0x2c0)) break;
      iVar9 = iVar9 + 1;
      pFVar10 = pFVar10 + 8;
    }
    cVar3 = *pcVar5;
    if (iVar9 == 0) {
      if ((1 < (byte)(cVar3 - 1U)) &&
         (bVar7 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_830330814561517516>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                             ,0x34,
                             "Context.WorldType == EWorldType::Game || Context.WorldType == EWorldType::Editor"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar8 = (FWorldContextId *)(*pcVar6)();
        return pFVar8;
      }
      this->WorldId = 0;
      return this;
    }
    if ((cVar3 == '\x01') || ((byte)(cVar3 - 4U) < 2)) {
      this->WorldId = *(int *)(pcVar5 + 0xa4) + 0x100;
      return this;
    }
  }
LAB_148809794:
  this->WorldId = -1;
  return this;
}

// GetContextIdForWorld @ 14883db70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorldContextId __cdecl UE::Tick::FWorldContextId::GetContextIdForWorld(UWorld *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong in_RDX;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 local_res10 [8];
  
  if (in_RDX != 0) {
    iVar9 = 0;
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    pFVar8 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    iVar7 = *piVar1;
    pFVar2 = pFVar8 + (longlong)iVar7 * 8;
    while( true ) {
      if (*piVar1 != iVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar8 == pFVar2) goto LAB_14883dc84;
      pcVar4 = *(char **)pFVar8;
      if (in_RDX == *(longlong *)(pcVar4 + 0x2c0)) break;
      iVar9 = iVar9 + 1;
      pFVar8 = pFVar8 + 8;
    }
    cVar3 = *pcVar4;
    if (iVar9 == 0) {
      if (1 < (byte)(cVar3 - 1U)) {
        bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_830330814561517516>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                           ,0x34,
                           "Context.WorldType == EWorldType::Game || Context.WorldType == EWorldType::Editor"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return (FWorldContextId)iVar7;
        }
      }
      *(undefined4 *)&param_1->_padding_ = 0;
      goto LAB_14883dc8a;
    }
    if ((cVar3 == '\x01') || ((byte)(cVar3 - 4U) < 2)) {
      *(int *)&param_1->_padding_ = *(int *)(pcVar4 + 0xa4) + 0x100;
      goto LAB_14883dc8a;
    }
  }
LAB_14883dc84:
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
LAB_14883dc8a:
  return (FWorldContextId)(int)param_1;
}

