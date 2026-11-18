// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 1

// RegisterHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction> @ 14e9811d0

void __thiscall
Chaos::FEventManager::
RegisterHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction>
          (FEventManager *this,EEventType *param_1,UNiagaraDataInterfaceChaosDestruction *param_2,
          pmf_c3666b6a param_3,pmf_1392879c param_4)

{
  EEventType EVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  
  EVar1 = *param_1;
  AcquireSRWLockShared((PSRWLOCK)&this->ContainerLock);
  if ((this->EventContainers).ArrayNum <= (int)EVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("EventID < EventContainers.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                       ,0x202,L"Registering event Handler for an event ID that does not exist");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = 0;
  if ((int)EVar1 < (this->EventContainers).ArrayNum) {
    uVar5 = ~EVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  plVar2 = *(longlong **)((this->EventContainers).AllocatorInstance.Data + (longlong)(int)EVar1 * 8)
  ;
  pcVar3 = *(code **)(*plVar2 + 8);
  puVar6 = ::operator_new(0x20);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = &
              ___7__TRawEventHandler_UFBreakingEventData_Chaos__VUNiagaraDataInterfaceChaosDestruction___Chaos__6B_
    ;
    *(pmf_1392879c *)(puVar6 + 3) = param_4;
    puVar6[1] = param_2;
    *(pmf_c3666b6a *)(puVar6 + 2) = param_3;
    if (param_2 == (UNiagaraDataInterfaceChaosDestruction *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Handler",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x46,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (puVar6[2] == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HandlerFunction",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                         ,0x47,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_res8 = puVar6;
  (*pcVar3)(plVar2,&local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014e981334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&this->ContainerLock);
  return;
}

