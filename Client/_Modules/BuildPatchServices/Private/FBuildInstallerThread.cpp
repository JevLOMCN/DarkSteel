// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// ~FBuildInstallerThread @ 143287770

void __thiscall
BuildPatchServices::FBuildInstallerThread::~FBuildInstallerThread(FBuildInstallerThread *this)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__BuildPatchServices__IBuildInstallerThread__;
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    this->Thread = (FRunnableThread *)0x0;
  }
  FGenericPlatformProcess::ReturnSynchEventToPool(this->DoWorkEvent);
  this->DoWorkEvent = (FEvent *)0x0;
  TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::
  ~TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>(&this->MsgQueue);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  this->_padding_ = (longlong)&___7IBuildInstallerThread_BuildPatchServices__6B_;
  return;
}

// Run @ 1432eb280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall BuildPatchServices::FBuildInstallerThread::Run(FBuildInstallerThread *this)

{
  atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*> aVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_128 [32];
  code *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  longlong *local_e0;
  byte local_d8;
  char local_c8;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *plStack_90;
  byte local_88;
  char local_78;
  code *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar4 = false;
  do {
    (**(code **)(*(longlong *)this->_padding_ + 0x20))((longlong *)this->_padding_,0xffffffff,0);
    local_68 = (code *)0x0;
    plStack_40 = (longlong *)0x0;
    local_38 = 0;
    while (aVar1 = *(atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*>
                     *)(this->MsgQueue).Head,
          aVar1 != (atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*>
                    )0x0) {
      local_108 = *(code **)((longlong)aVar1 + 0x10);
      local_e0 = *(longlong **)((longlong)aVar1 + 0x38);
      *(undefined8 *)((longlong)aVar1 + 0x38) = 0;
      local_f8 = *(undefined4 *)((longlong)aVar1 + 0x20);
      uStack_f4 = *(undefined4 *)((longlong)aVar1 + 0x24);
      uStack_f0 = *(undefined4 *)((longlong)aVar1 + 0x28);
      uStack_ec = *(undefined4 *)((longlong)aVar1 + 0x2c);
      local_e8 = *(undefined8 *)((longlong)aVar1 + 0x30);
      if (local_108 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar1 + 0x10) = 0;
      }
      local_d8 = *(byte *)((longlong)aVar1 + 0x40);
      local_c8 = '\x01';
      if (*(longlong *)((longlong)aVar1 + 0x10) != 0) {
        plVar13 = *(longlong **)((longlong)aVar1 + 0x38);
        if (*(longlong **)((longlong)aVar1 + 0x38) == (longlong *)0x0) {
          plVar13 = (longlong *)((longlong)aVar1 + 0x20);
        }
        (**(code **)(*plVar13 + 0x10))();
      }
      FMemory::Free((void *)(this->MsgQueue).Head);
      (this->MsgQueue).Head = aVar1;
      local_78 = local_c8;
      if (local_c8 == '\0') break;
      local_b8 = local_108;
      plStack_90 = local_e0;
      local_e0 = (longlong *)0x0;
      local_a8 = local_f8;
      uStack_a4 = uStack_f4;
      uStack_a0 = uStack_f0;
      uStack_9c = uStack_ec;
      local_98 = local_e8;
      if (local_108 != (code *)0x0) {
        local_108 = (code *)0x0;
      }
      local_88 = local_d8;
      if (local_108 != (code *)0x0) {
        (**(code **)(CONCAT44(uStack_f4,local_f8) + 0x10))(&local_f8);
      }
      plVar13 = plStack_40;
      uVar8 = uStack_4c;
      uVar7 = uStack_50;
      uVar6 = uStack_54;
      uVar5 = local_58;
      uVar11 = uStack_60;
      pcVar2 = local_68;
      if (local_78 == '\0') break;
      uVar3 = CONCAT44(uStack_44,local_48);
      local_68 = local_b8;
      uStack_60 = uStack_b0;
      local_48 = (undefined4)local_98;
      uStack_44 = local_98._4_4_;
      plStack_40 = plStack_90;
      local_58 = local_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      uStack_4c = uStack_9c;
      local_b8 = pcVar2;
      uStack_b0 = uVar11;
      local_a8 = uVar5;
      uStack_a4 = uVar6;
      uStack_a0 = uVar7;
      uStack_9c = uVar8;
      local_98 = uVar3;
      plStack_90 = plVar13;
      local_38 = local_88;
      if (pcVar2 != (code *)0x0) {
        plVar12 = (longlong *)&local_a8;
        if (plVar13 != (longlong *)0x0) {
          plVar12 = plVar13;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if ((local_38 & 1) != 0) {
        if (bVar4) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bExit",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerSharedContext.cpp"
                             ,0x3d,L"");
          if (bVar9) {
            pcVar2 = (code *)swi(3);
            uVar10 = (*pcVar2)();
            return uVar10;
          }
        }
        UE::Core::Private::Function::CheckCallable(local_68);
        pcVar2 = local_68;
        plVar13 = (longlong *)&local_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar13 = plStack_40;
        }
        uVar11 = (**(code **)(*plVar13 + 8))();
        (*pcVar2)(uVar11);
      }
      if ((local_38 & 2) != 0) {
        bVar4 = true;
      }
    }
    if (local_68 != (code *)0x0) {
      plVar13 = (longlong *)&local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar13 = plStack_40;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (bVar4) {
      return 0;
    }
  } while( true );
}

// RunTask @ 1432ec1a0

void __thiscall
BuildPatchServices::FBuildInstallerThread::RunTask
          (FBuildInstallerThread *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*> aVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*> aVar7;
  longlong *plVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((*(longlong *)param_1 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerSharedContext.cpp"
                         ,0x29,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  aVar7 = (atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*>)
          FMemory::Malloc(0x50,0x10);
  *(undefined8 *)aVar7 = 0;
  lVar2 = *(longlong *)param_1;
  uVar3 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  local_18 = *(undefined8 *)&param_1->field_0x20;
  local_28 = *(undefined4 *)&param_1->field_0x10;
  uStack_24 = *(undefined4 *)&param_1->field_0x14;
  lVar5 = *(longlong *)&param_1->field_0x10;
  uStack_20 = *(undefined4 *)&param_1->field_0x18;
  uStack_1c = *(undefined4 *)&param_1->field_0x1c;
  if (lVar2 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  *(longlong *)((longlong)aVar7 + 0x10) = lVar2;
  *(undefined8 *)((longlong)aVar7 + 0x38) = uVar3;
  *(undefined4 *)((longlong)aVar7 + 0x20) = local_28;
  *(undefined4 *)((longlong)aVar7 + 0x24) = uStack_24;
  *(undefined4 *)((longlong)aVar7 + 0x28) = uStack_20;
  *(undefined4 *)((longlong)aVar7 + 0x2c) = uStack_1c;
  local_10 = 0;
  *(undefined8 *)((longlong)aVar7 + 0x30) = local_18;
  *(undefined1 *)((longlong)aVar7 + 0x40) = 1;
  if ((*(longlong *)((longlong)aVar7 + 0x10) == 0) && (lVar2 != 0)) {
    (**(code **)(lVar5 + 0x10))(&local_28);
  }
  LOCK();
  aVar1 = (this->MsgQueue).Head;
  (this->MsgQueue).Head = aVar7;
  UNLOCK();
  *(atomic<TMpscQueue<BuildPatchServices::FBuildInstallerThread::FMsg,FMemory>::FNode_*> *)aVar1 =
       aVar7;
  (**(code **)(this->DoWorkEvent->_padding_ + 0x10))();
  if (*(longlong *)param_1 != 0) {
    plVar8 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// StartThread @ 1432ee700

bool __thiscall
BuildPatchServices::FBuildInstallerThread::StartThread(FBuildInstallerThread *this,wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEvent *pFVar4;
  FRunnableThread *pFVar5;
  FRunnable *pFVar6;
  
  pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->DoWorkEvent = pFVar4;
  pFVar6 = (FRunnable *)&this->_padding_;
  if (this == (FBuildInstallerThread *)0x0) {
    pFVar6 = (FRunnable *)0x0;
  }
  pFVar5 = FForkProcessHelper::CreateForkableThread
                     (pFVar6,param_1,0,TPri_Normal,0xffffffffffffffff,None,true);
  this->Thread = pFVar5;
  if (pFVar5 == (FRunnableThread *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Thread != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\InstallerSharedContext.cpp"
                       ,0x22,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->DoWorkEvent != (FEvent *)0x0) && (this->Thread != (FRunnableThread *)0x0)) {
    return true;
  }
  return false;
}

// Stop @ 1432ee7b0

void __thiscall BuildPatchServices::FBuildInstallerThread::Stop(FBuildInstallerThread *this)

{
  FRunnableThread *pFVar1;
  FRunnableThread *pFVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  pFVar2 = FMemory::Malloc(0x50,0x10);
  pFVar2->_padding_ = 0;
  (pFVar2->ThreadName).Data.ArrayNum = 0;
  (pFVar2->ThreadName).Data.ArrayMax = 0;
  pFVar2[1]._padding_ = 0;
  *(undefined4 *)&pFVar2->ThreadInitSyncEvent = local_28;
  *(undefined4 *)((longlong)&pFVar2->ThreadInitSyncEvent + 4) = uStack_24;
  *(undefined4 *)&pFVar2->ThreadAffinityMask = uStack_20;
  *(undefined4 *)((longlong)&pFVar2->ThreadAffinityMask + 4) = uStack_1c;
  pFVar2->ThreadPriority = (undefined4)local_18;
  pFVar2->ThreadID = local_18._4_4_;
  *(undefined1 *)&pFVar2[1].ThreadName.Data.AllocatorInstance.Data = 2;
  LOCK();
  pFVar1 = this->Thread;
  this->Thread = pFVar2;
  UNLOCK();
  pFVar1->_padding_ = (longlong)pFVar2;
                    /* WARNING: Could not recover jumptable at 0x0001432ee807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  return;
}

