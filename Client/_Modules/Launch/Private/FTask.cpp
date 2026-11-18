// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Launch
// Functions: 1

// operator() @ 148d9d4d0

FTask * __thiscall
`LowLevelTasks::FTask::Init<`FQueuedLowLevelThreadPool::AddQueuedWork'::__l2::<lambda_1>_>'::__l13::
<lambda_1>::operator()(void *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTask *pFVar5;
  undefined1 local_res10 [24];
  code *local_48;
  undefined1 *local_40;
  FMemMark local_38;
  
  if (param_1) {
    puVar3 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_40 = local_res10;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar4 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,puVar3);
    local_38.Mem = (FMemStackBase *)(pFVar4 + 2);
    local_38.Top = (local_38.Mem)->Top;
    local_38.SavedChunk = *(FTaggedMemory **)(pFVar4 + 4);
    local_38.bPopped = false;
    local_38.NextTopmostMark = *(FMemMark **)(pFVar4 + 5);
    pFVar4[5] = (FTlsAutoCleanup)&local_38;
    *(int *)(pFVar4 + 6) = *(int *)(pFVar4 + 6) + 1;
    (**(code **)**(undefined8 **)this)();
    if (local_38.bPopped == false) {
      if ((local_38.Mem)->TopMark != &local_38) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FTask *)(*pcVar1)();
          return pFVar5;
        }
      }
      local_38.bPopped = true;
      (local_38.Mem)->NumMarks = (local_38.Mem)->NumMarks + -1;
      if (local_38.SavedChunk != (local_38.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_38.Mem,local_38.SavedChunk);
      }
      (local_38.Mem)->Top = local_38.Top;
      (local_38.Mem)->TopMark = local_38.NextTopmostMark;
    }
  }
  return (FTask *)0x0;
}

