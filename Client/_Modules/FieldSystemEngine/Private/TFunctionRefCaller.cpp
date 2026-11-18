// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 2

// Call @ 14632e050

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UFieldSystemComponent::ClearFieldCommands'::__l17::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FPerSolverFieldSystem::RemovePersistentCommand
            (*(FPerSolverFieldSystem **)(*(longlong *)param_1 + 0xc88),
             (FFieldSystemCommand *)((longlong)param_1 + 8));
  return;
}

// Call @ 14632e070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UFieldSystemComponent::DispatchFieldCommand'::__l13::<lambda_1>::operator()<Chaos::FPBDRigidsSolver>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  FFieldSystemCommand *pFVar2;
  TArray<FFieldSystemCommand,TSizedDefaultAllocator<32>_> *pTVar3;
  FFieldSystemCommand *pFVar4;
  FPerSolverFieldSystem *this;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  
  pFVar2 = (FFieldSystemCommand *)((longlong)param_1 + 8);
  this = *(FPerSolverFieldSystem **)(*(longlong *)param_1 + 0xc88);
  if (*(char *)((longlong)param_1 + 0xd0) != '\0') {
    FPerSolverFieldSystem::AddTransientCommand(this,pFVar2);
    return;
  }
  pTVar3 = &this->PersistentCommands;
  pFVar4 = (FFieldSystemCommand *)(pTVar3->AllocatorInstance).Data;
  if ((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (this->PersistentCommands).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->PersistentCommands).ArrayNum;
  piVar1 = &(this->PersistentCommands).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->PersistentCommands).ArrayNum = iVar7 + 1;
  FFieldSystemCommand::FFieldSystemCommand
            ((FFieldSystemCommand *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 200),
             pFVar2);
  return;
}

