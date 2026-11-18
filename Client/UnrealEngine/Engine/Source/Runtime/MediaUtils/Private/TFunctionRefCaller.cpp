// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// Call @ 146bf5fc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FMediaPlayerFacade::ContinueOpen'::__l5::FAsyncResourceReleaseNotification::Signal'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  FName *pFVar3;
  IModuleInterface *pIVar4;
  longlong *plVar5;
  FName local_res10 [3];
  undefined8 local_18;
  longlong local_10;
  
  pFVar3 = ::FName::FName(local_res10,"Media");
  pIVar4 = FModuleManager::GetModulePtr_Internal(*pFVar3);
  if (pIVar4 != (IModuleInterface *)0x0) {
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x98))(pIVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x10);
      pcVar2 = *(code **)(*plVar5 + 0x30);
      local_18 = *(undefined8 *)param_1;
      local_10 = *(longlong *)((longlong)param_1 + 8);
      if (local_10 != 0) {
        LOCK();
        *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
        UNLOCK();
      }
      (*pcVar2)(plVar5,&local_18,uVar1);
    }
  }
  return;
}

