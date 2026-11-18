// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 1

// operator() @ 14630ba00

void __thiscall
TDefaultDelete<FChaosSolverActorConsoleObjects>::operator()
          (TDefaultDelete<FChaosSolverActorConsoleObjects> *this,
          FChaosSolverActorConsoleObjects *param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  if (param_1 != (FChaosSolverActorConsoleObjects *)0x0) {
    pFVar7 = (param_1->ConsoleCommands).AllocatorInstance.Data;
    iVar1 = (param_1->ConsoleCommands).ArrayNum;
    pFVar4 = pFVar7 + (longlong)iVar1 * 8;
    while( true ) {
      if ((param_1->ConsoleCommands).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<IConsoleObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar7 == pFVar4) break;
      uVar2 = *(undefined8 *)pFVar7;
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))
                (IConsoleManager::Singleton,uVar2,1);
      pFVar7 = pFVar7 + 8;
    }
    *(undefined4 *)&(param_1->SolverActors).field_0x48 = 0;
    pvVar3 = *(void **)&(param_1->SolverActors).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,AChaosSolverActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,AChaosSolverActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,AChaosSolverActor_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->SolverActors);
    pFVar4 = (param_1->ConsoleCommands).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(param_1,0x60);
  }
  return;
}

