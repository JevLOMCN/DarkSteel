// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// FFakeThread @ 1416d4ba0

FFakeThread * __thiscall FFakeThread::FFakeThread(FFakeThread *this)

{
  code *pcVar1;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *pTVar2;
  bool bVar3;
  int iVar4;
  FThreadManager *lpCriticalSection;
  FFakeThread *pFVar5;
  TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
  *pTVar6;
  uint uVar7;
  char *pcVar8;
  wchar_t *pwVar9;
  undefined1 *puVar10;
  char local_48 [16];
  uint local_38 [2];
  FFakeThread *local_30;
  TPairInitializer<unsigned_int_const_&,FRunnableThread_*_const_&> local_28;
  FFakeThread **local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FFakeThread__6B_;
  this->bIsSuspended = false;
  this->SingleThreadRunnable = (FSingleThreadRunnable *)0x0;
  this->_padding_ = -1;
  uVar7 = ThreadIdCounter | 0x80000000;
  ThreadIdCounter = ThreadIdCounter + 1;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar7;
  lpCriticalSection = FThreadManager::Get();
  local_38[0] = *(uint *)((longlong)&this->_padding_ + 4);
  pcVar8 = local_48;
  iVar4 = 7;
  builtin_strncpy(local_48,"\x06\x10\x03 \x010",7);
  builtin_strncpy(local_48 + 7,"@\x05P\x02`\x04p",7);
  do {
    if ((int)*pcVar8 == (int)this->_padding_) {
      iVar4 = (int)pcVar8[1];
      break;
    }
    pcVar8 = pcVar8 + 2;
  } while (pcVar8 != local_48 + 0xe);
  if ((int)this->_padding_ == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)this->_padding_;
  }
  local_30 = this;
  UE::Trace::ThreadRegister(pwVar9,local_38[0],iVar4);
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if ((((!bVar3) && (pcVar1 = *(code **)(local_30->_padding_ + 0x28), pcVar1 != GetThreadType)) &&
      (iVar4 = (*pcVar1)(), iVar4 == 0)) &&
     (((local_38[0] & 0x80000000) != 0 &&
      (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ThreadId & FFakeThread::FakeIdReservedBit) == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\ThreadingBase.cpp"
                          ,0x20a,
                          L"The thread ID  assigned by the kernel clashes with the bit reserved for identifying fake threads. Need to revisit the fake ID assignment algo."
                         ), bVar3)))) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FFakeThread *)(*pcVar1)();
    return pFVar5;
  }
  if (lpCriticalSection == (FThreadManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(lpCriticalSection->Threads).field_0x1808 !=
      *(int *)&(lpCriticalSection->Threads).field_0x1844) {
    puVar10 = *(undefined1 **)&(lpCriticalSection->Threads).field_0x1a48;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(lpCriticalSection->Threads).field_0x1848;
    }
    iVar4 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(lpCriticalSection->Threads).field_0x1a50 - 1U & local_38[0]) * 4);
    if (iVar4 != -1) {
      pTVar2 = *(TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                 **)&(lpCriticalSection->Threads).field_0x1800;
      do {
        pTVar6 = &lpCriticalSection->Threads;
        if (pTVar2 != (TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                       *)0x0) {
          pTVar6 = pTVar2;
        }
        if (*(uint *)(&pTVar6->field_0x0 + (longlong)iVar4 * 0x18) == local_38[0]) {
          if (iVar4 != -1) goto LAB_1416d4d81;
          break;
        }
        pTVar6 = &lpCriticalSection->Threads;
        if (pTVar2 != (TMap<unsigned_int,FRunnableThread_*,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>_>
                       *)0x0) {
          pTVar6 = pTVar2;
        }
        iVar4 = *(int *)(&pTVar6->field_0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_28.Value = (FRunnableThread **)local_38;
  local_18 = &local_30;
  TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FRunnableThread_*_const_&>_>
            ((TSet<TTuple<unsigned_int,FRunnableThread_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FRunnableThread_*,0>,TInlineSetAllocator<256,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&lpCriticalSection->Threads,&local_28,(bool *)&local_28.Value);
  lpCriticalSection->bIsThreadListDirty = true;
LAB_1416d4d81:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return this;
}

// ~FFakeThread @ 1416d87e0

void __thiscall FFakeThread::~FFakeThread(FFakeThread *this)

{
  FThreadManager *pFVar1;
  
  this->_padding_ = (longlong)&___7FFakeThread__6B_;
  pFVar1 = FThreadManager::Get();
  FThreadManager::RemoveThread(pFVar1,(FRunnableThread *)this);
  this->_padding_ = (longlong)&___7FRunnableThread__6B_;
  if (GIsRequestingExit == false) {
    pFVar1 = FThreadManager::Get();
    FThreadManager::RemoveThread(pFVar1,(FRunnableThread *)this);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// CreateInternal @ 1416e8390

bool __thiscall
FFakeThread::CreateInternal
          (FFakeThread *this,FRunnable *param_1,wchar_t *param_2,uint param_3,
          EThreadPriority param_4,ulong64 param_5,EThreadCreateFlags param_6)

{
  FSingleThreadRunnable *pFVar1;
  
  ::FString::operator=((FString *)&this->_padding_,param_2);
  this->_padding_ = param_5;
  pFVar1 = (FSingleThreadRunnable *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  this->SingleThreadRunnable = pFVar1;
  if (pFVar1 != (FSingleThreadRunnable *)0x0) {
    (**(code **)*param_1)(param_1);
    this->_padding_ = (longlong)param_1;
  }
  return this->SingleThreadRunnable != (FSingleThreadRunnable *)0x0;
}

// GetThreadType @ 1416fbcb0

ThreadType __thiscall FFakeThread::GetThreadType(FFakeThread *this)

{
  return Fake;
}

// Kill @ 141703400

bool __thiscall FFakeThread::Kill(FFakeThread *this,bool param_1)

{
  FThreadManager *this_00;
  
  this_00 = FThreadManager::Get();
  FThreadManager::RemoveThread(this_00,(FRunnableThread *)this);
  return true;
}

// SetThreadPriority @ 1417121a0

void __thiscall FFakeThread::SetThreadPriority(FFakeThread *this,EThreadPriority param_1)

{
  return;
}

// Suspend @ 1417141f0

void __thiscall FFakeThread::Suspend(FFakeThread *this,bool param_1)

{
  this->bIsSuspended = param_1;
  return;
}

// Tick @ 141715180

void __thiscall FFakeThread::Tick(FFakeThread *this)

{
  if ((this->SingleThreadRunnable != (FSingleThreadRunnable *)0x0) && (this->bIsSuspended == false))
  {
                    /* WARNING: Could not recover jumptable at 0x000141715195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->SingleThreadRunnable + 8))();
    return;
  }
  return;
}

// WaitForCompletion @ 14171aaf0

void __thiscall FFakeThread::WaitForCompletion(FFakeThread *this)

{
  FThreadManager *this_00;
  
  this_00 = FThreadManager::Get();
  FThreadManager::RemoveThread(this_00,(FRunnableThread *)this);
  return;
}

