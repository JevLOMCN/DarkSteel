// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 3

// SetPrerequisites @ 14e45f700

void __thiscall
UE::Interchange::FInterchangeTaskBase::SetPrerequisites
          (FInterchangeTaskBase *this,TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EInterchangeTaskStatus EVar1;
  code *pcVar2;
  bool bVar3;
  
  lpCriticalSection = &this->TaskStatusCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar1 = this->TaskStatus;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (EVar1 != Waiting) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetTaskStatus() == EInterchangeTaskStatus::Waiting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                       ,0x27,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=(&this->PrerequisiteTasks,param_1);
  return;
}

// SetTaskStatus @ 14e45fa00

bool __thiscall
UE::Interchange::FInterchangeTaskBase::SetTaskStatus
          (FInterchangeTaskBase *this,EInterchangeTaskStatus param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->TaskStatusCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this->TaskStatus != param_1) {
    if (this->TaskStatus == Done) {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4239390204441395171>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                         ,0x1d,"TaskStatus != EInterchangeTaskStatus::Done");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = false;
      goto LAB_14e45fa6b;
    }
    this->TaskStatus = param_1;
  }
  bVar2 = true;
LAB_14e45fa6b:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// Wait @ 14e467c60

void __thiscall UE::Interchange::FInterchangeTaskBase::Wait(FInterchangeTaskBase *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  FInterchangeTaskSystem *pFVar4;
  undefined1 auVar5 [16];
  longlong local_res8 [2];
  ForAnyElementType local_48;
  undefined4 local_40;
  int local_3c;
  code *local_38;
  FInterchangeTaskSystem **local_30;
  FInterchangeTaskSystem *local_28;
  ForAnyElementType *local_20;
  longlong *local_18;
  
  pFVar4 = FInterchangeTaskSystem::Get();
  uVar1 = this->TaskId;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 1;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_48,1,&local_3c);
  *(ulong64 *)local_48.Data = uVar1;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Private\\InterchangeTaskSystem.cpp"
                       ,0xb0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = __real_4025000000000000;
  local_20 = &local_48;
  auVar5 = roundpd(auVar5,auVar5,1);
  local_res8[0] = (longlong)auVar5._0_8_;
  local_18 = local_res8;
  local_30 = &local_28;
  local_38 = Core::Private::Function::
             TFunctionRefCaller<`UE::Interchange::FInterchangeTaskSystem::WaitUntilTasksComplete'::__l2::<lambda_1>,bool>
             ::Call;
  local_28 = pFVar4;
  FGenericPlatformProcess::ConditionalSleep
            ((TFunctionRef<bool___cdecl(void)> *)&local_38,
             (float)((double)local_res8[0] * __real_3e7ad7f29abcaf48));
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

