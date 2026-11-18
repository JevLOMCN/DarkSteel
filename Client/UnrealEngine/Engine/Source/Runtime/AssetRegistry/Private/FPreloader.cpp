// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 7

// operator() @ 142b7fe80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::AssetRegistry::Premade::FPreloader::KickPreload'::__l2::<lambda_1>::operator()(void *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPreloader *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  ELoadResult EVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  ELoadResult local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this_00 = *(FPreloader **)this;
  EVar7 = UE::AssetRegistry::Premade::FPreloader::TryLoad(this_00);
  (**(code **)(this_00->PreloadReady->_padding_ + 0x10))();
  lpCriticalSection = &this_00->StateLock;
  local_48 = (code *)0x0;
  plStack_20 = (longlong *)0x0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this_00->LoadState == Loading) &&
       (this_00->LoadState = Loaded, *(longlong *)&this_00->ConsumeCallback != 0)) {
      pcVar5 = *(code **)&this_00->ConsumeCallback;
      uVar8 = *(undefined8 *)&(this_00->ConsumeCallback).field_0x8;
      uVar1 = *(undefined4 *)&(this_00->ConsumeCallback).field_0x10;
      uVar2 = *(undefined4 *)&(this_00->ConsumeCallback).field_0x14;
      uVar3 = *(undefined4 *)&(this_00->ConsumeCallback).field_0x18;
      uVar4 = *(undefined4 *)&(this_00->ConsumeCallback).field_0x1c;
      uVar6 = CONCAT44(uStack_24,local_28);
      local_28 = *(undefined4 *)&(this_00->ConsumeCallback).field_0x20;
      uStack_24 = *(undefined4 *)&(this_00->ConsumeCallback).field_0x24;
      plVar10 = *(longlong **)&(this_00->ConsumeCallback).field_0x28;
      *(undefined4 *)&this_00->ConsumeCallback = (undefined4)local_48;
      *(undefined4 *)&(this_00->ConsumeCallback).field_0x4 = local_48._4_4_;
      *(undefined4 *)&(this_00->ConsumeCallback).field_0x8 = (undefined4)uStack_40;
      *(undefined4 *)&(this_00->ConsumeCallback).field_0xc = uStack_40._4_4_;
      *(undefined4 *)&(this_00->ConsumeCallback).field_0x10 = local_38;
      *(undefined4 *)&(this_00->ConsumeCallback).field_0x14 = uStack_34;
      *(undefined4 *)&(this_00->ConsumeCallback).field_0x18 = uStack_30;
      *(undefined4 *)&(this_00->ConsumeCallback).field_0x1c = uStack_2c;
      *(undefined8 *)&(this_00->ConsumeCallback).field_0x20 = uVar6;
      *(longlong **)&(this_00->ConsumeCallback).field_0x28 = plStack_20;
      local_48 = pcVar5;
      uStack_40 = uVar8;
      local_38 = uVar1;
      uStack_34 = uVar2;
      uStack_30 = uVar3;
      uStack_2c = uVar4;
      plStack_20 = plVar10;
      if (*(longlong *)&this_00->ConsumeCallback != 0) {
        plVar10 = *(longlong **)&(this_00->ConsumeCallback).field_0x28;
        plVar9 = (longlong *)&(this_00->ConsumeCallback).field_0x10;
        if (plVar10 != (longlong *)0x0) {
          plVar9 = plVar10;
        }
        (**(code **)(*plVar9 + 0x10))();
        *(undefined8 *)&this_00->ConsumeCallback = 0;
      }
      this_00->LoadState = Consumed;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_48 != (code *)0x0) {
      local_58[0] = EVar7;
      UE::Core::Private::Function::CheckCallable(local_48);
      pcVar5 = local_48;
      plVar10 = (longlong *)&local_38;
      if (plStack_20 != (longlong *)0x0) {
        plVar10 = plStack_20;
      }
      uVar8 = (**(code **)(*plVar10 + 8))();
      (*pcVar5)(uVar8,local_58,&this_00->Payload);
      if ((this_00->OnTaskGraphReady).bIsSet != false) {
        (this_00->OnTaskGraphReady).bIsSet = false;
      }
      if (this_00->PreloadReady != (FEvent *)0x0) {
        FGenericPlatformProcess::ReturnSynchEventToPool(this_00->PreloadReady);
        this_00->PreloadReady = (FEvent *)0x0;
      }
      ::FString::Reset(&this_00->ARPath,0);
      FAssetRegistryState::Reset(&this_00->Payload);
      if (local_48 != (code *)0x0) {
        plVar10 = (longlong *)&local_38;
        if (plStack_20 != (longlong *)0x0) {
          plVar10 = plStack_20;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator() @ 142b80740

void __thiscall
`UE::AssetRegistry::Premade::FPreloader::FPreloader'::__l5::<lambda_1>::operator()(void *this)

{
  FPreloader *this_00;
  bool bVar1;
  FEvent *pFVar2;
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this_01;
  FDelegateHandle FVar3;
  bool bVar4;
  <lambda_1> local_res18 [16];
  
  *(undefined1 *)(*(longlong *)this + 0x2f0) = 2;
  this_00 = *(FPreloader **)this;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_UE::AssetRegistry::Premade::FPreloader::DelayedInitialize(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId505,
               "FCookedAssetRegistryPreloader::DelayedInitialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1f9);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_UE::AssetRegistry::Premade::FPreloader::DelayedInitialize(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId505);
  }
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar1) && (bVar1 = FTaskGraphInterface::IsRunning(), bVar1)) {
    pFVar2 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    this_00->PreloadReady = pFVar2;
    (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
    bVar1 = UE::AssetRegistry::Premade::FPreloader::TrySetPath(this_00);
    if (bVar1) {
      UE::AssetRegistry::Premade::FPreloader::KickPreload(this_00);
    }
    else {
      this_00->LoadState = NotFound;
      this_01 = FCoreDelegates::GetOnPakFileMounted2();
      FVar3 = TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
              ::
              AddLambda<_UE::AssetRegistry::Premade::FPreloader::DelayedInitialize_::__l10::<lambda_1>_>
                        ((TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                          *)this_01,local_res18);
                    /* WARNING: Load size is inaccurate */
      (this_00->PakMountedDelegate).ID = *FVar3.ID;
    }
  }
  else {
    this_00->LoadState = LoadSynchronous;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 142b80e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::AssetRegistry::Premade::FPreloader::DelayedInitialize'::__l10::<lambda_1>::operator()
          (void *this,IPakFile *param_1)

{
  longlong lVar1;
  FDelegateHandle FVar2;
  int iVar3;
  char cVar4;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  ForElementType<FString> FVar5;
  ForElementType<FString> FVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  TArray<FString,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_60;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 8);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x2f0) == '\x02') {
    UE::AssetRegistry::Premade::GetPriorityPaths(&local_60);
    iVar3 = local_60.ArrayNum;
    FVar5 = (ForElementType<FString>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar5 = local_60.AllocatorInstance.SecondaryData;
    }
    FVar6 = (ForElementType<FString>)((longlong)local_60.ArrayNum * 0x10 + (longlong)FVar5);
    while( true ) {
      if (local_60.ArrayNum != iVar3) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_68)
        ;
      }
      if (FVar5 == FVar6) {
        FVar5 = (ForElementType<FString>)&local_60;
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
          FVar5 = local_60.AllocatorInstance.SecondaryData;
        }
        DestructItems<FString,int>((FString *)FVar5,local_60.ArrayNum);
        if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
          FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
        }
        goto LAB_142b80fca;
      }
      cVar4 = (**(code **)((longlong)*param_1 + 8))(param_1,FVar5);
      if (cVar4 != '\0') break;
      FVar5 = (ForElementType<FString>)((longlong)FVar5 + 0x10);
    }
    FVar6 = (ForElementType<FString>)(lVar1 + 0x38);
    if (FVar6 != FVar5) {
      if (*(void **)FVar6 != (void *)0x0) {
        FMemory::Free(*(void **)FVar6);
      }
      *(undefined8 *)FVar6 = *(undefined8 *)FVar5;
      *(undefined8 *)FVar5 = 0;
      *(int *)(lVar1 + 0x40) = *(int *)((longlong)FVar5 + 8);
      *(int *)(lVar1 + 0x44) = *(int *)((longlong)FVar5 + 0xc);
      *(undefined8 *)((longlong)FVar5 + 8) = 0;
    }
    FVar5 = (ForElementType<FString>)&local_60;
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar5 = local_60.AllocatorInstance.SecondaryData;
    }
    DestructItems<FString,int>((FString *)FVar5,local_60.ArrayNum);
    if (local_60.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FMemory::Free((void *)local_60.AllocatorInstance.SecondaryData);
    }
    UE::AssetRegistry::Premade::FPreloader::KickPreload(*(FPreloader **)this);
    FVar2.ID = *(ulong64 *)(*(longlong *)this + 0x2b8);
    *(undefined8 *)(*(longlong *)this + 0x2b8) = 0;
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::GetOnPakFileMounted2();
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar2);
    }
  }
LAB_142b80fca:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ConsumeInternal @ 142b89e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EConsumeResult __thiscall
UE::AssetRegistry::Premade::FPreloader::ConsumeInternal
          (FPreloader *this,
          TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
          *param_1,TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
                   *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EState EVar1;
  FDelegateHandle FVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  ELoadResult EVar18;
  EConsumeResult EVar19;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  FAssetRegistryState *pFVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined1 uVar23;
  bool bVar24;
  undefined1 auStack_308 [32];
  undefined1 local_2e8 [8];
  FScopedBootTiming local_2e0;
  FScopedBootTiming local_2c8;
  FAssetRegistryState local_2a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_308;
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_enum_UE::AssetRegistry::Premade::FPreloader::EConsumeResult___cdecl_UE::AssetRegistry::Premade::FPreloader::ConsumeInternal(TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64,TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId591,"FCookedAssetRegistryPreloader::Consume",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x24f);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_enum_UE::AssetRegistry::Premade::FPreloader::EConsumeResult___cdecl_UE::AssetRegistry::Premade::FPreloader::ConsumeInternal(TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64,TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId591);
  }
  FScopedBootTiming::FScopedBootTiming(&local_2c8,"FCookedAssetRegistryPreloader::Consume");
  lpCriticalSection = &this->StateLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  EVar1 = this->LoadState;
  if (((EVar1 == WillNeverPreload) || (EVar1 == Consumed)) ||
     (*(longlong *)&this->ConsumeCallback != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->LoadState == Consumed) || (uVar23 = 3, *(longlong *)&this->ConsumeCallback != 0)) {
      uVar23 = 4;
    }
    pFVar20 = FAssetRegistryState::FAssetRegistryState(&local_2a8);
    local_2e8[0] = uVar23;
    Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar3 = *(code **)param_1;
    plVar22 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar22 = *(longlong **)&param_1->field_0x28;
    }
    uVar21 = (**(code **)(*plVar22 + 8))();
    (*pcVar3)(uVar21,local_2e8,pFVar20);
    FAssetRegistryState::~FAssetRegistryState(&local_2a8);
    EVar19 = Failed;
  }
  else if (EVar1 == LoadSynchronous) {
    bVar17 = TrySetPath(this);
    if (bVar17) {
      EVar18 = TryLoad(this);
    }
    else {
      EVar18 = NotFound;
    }
    this->LoadState = Consumed;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
    ::operator()(param_1,EVar18,&this->Payload);
    if ((this->OnTaskGraphReady).bIsSet != false) {
      (this->OnTaskGraphReady).bIsSet = false;
    }
    if (this->PreloadReady != (FEvent *)0x0) {
      FGenericPlatformProcess::ReturnSynchEventToPool(this->PreloadReady);
      this->PreloadReady = (FEvent *)0x0;
    }
    ::FString::Reset(&this->ARPath,0);
    FAssetRegistryState::Reset(&this->Payload);
    EVar19 = (EConsumeResult)(EVar18 != Succeeded);
  }
  else {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::GetOnPakFileMounted2();
    FVar2.ID = (this->PakMountedDelegate).ID;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar2);
    }
    (this->PakMountedDelegate).ID = 0;
    if ((*(longlong *)param_2 == 0) || (this->LoadState != Loading)) {
      bVar17 = -1 < CpuChannel->Enabled;
      if (bVar17) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`private:_enum_UE::AssetRegistry::Premade::FPreloader::EConsumeResult___cdecl_UE::AssetRegistry::Premade::FPreloader::ConsumeInternal(TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64,TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64)___ptr64'
                    ::__l12::__CpuProfilerEventSpecId625,"BlockingConsume",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                   ,0x271);
        FCpuProfilerTrace::OutputBeginEvent
                  (`private:_enum_UE::AssetRegistry::Premade::FPreloader::EConsumeResult___cdecl_UE::AssetRegistry::Premade::FPreloader::ConsumeInternal(TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64,TFunction<void___cdecl(UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState&&___ptr64)>&&___ptr64)___ptr64'
                   ::__l12::__CpuProfilerEventSpecId625);
      }
      FScopedBootTiming::FScopedBootTiming(&local_2e0,"BlockingConsume");
      (**(code **)(this->PreloadReady->_padding_ + 0x20))(this->PreloadReady,0xffffffff,0);
      FScopedBootTiming::~FScopedBootTiming(&local_2e0);
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((this->LoadState != Loaded) && (1 < (byte)(this->LoadState - NotFound))) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("LoadState == EState::Loaded || LoadState == EState::Loading || LoadState == EState::NotFound"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                              ,0x277,L""), bVar17)) {
        pcVar3 = (code *)swi(3);
        EVar19 = (*pcVar3)();
        return EVar19;
      }
      EVar18 = NotFound;
      if (this->LoadState != NotFound) {
        EVar18 = this->LoadResult;
      }
      this->LoadState = Consumed;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_UE::AssetRegistry::Premade::ELoadResult,FAssetRegistryState_&&)>
      ::operator()(param_1,EVar18,&this->Payload);
      if ((this->OnTaskGraphReady).bIsSet != false) {
        (this->OnTaskGraphReady).bIsSet = false;
      }
      if (this->PreloadReady != (FEvent *)0x0) {
        FGenericPlatformProcess::ReturnSynchEventToPool(this->PreloadReady);
        this->PreloadReady = (FEvent *)0x0;
      }
      ::FString::Reset(&this->ARPath,0);
      FAssetRegistryState::Reset(&this->Payload);
      EVar19 = (EConsumeResult)(EVar18 != Succeeded);
    }
    else {
      uVar21 = *(undefined8 *)&param_2->field_0x8;
      uVar4 = *(undefined4 *)&this->ConsumeCallback;
      uVar5 = *(undefined4 *)&(this->ConsumeCallback).field_0x4;
      uVar6 = *(undefined4 *)&(this->ConsumeCallback).field_0x8;
      uVar7 = *(undefined4 *)&(this->ConsumeCallback).field_0xc;
      EVar19 = Deferred;
      uVar8 = *(undefined4 *)&(this->ConsumeCallback).field_0x10;
      uVar9 = *(undefined4 *)&(this->ConsumeCallback).field_0x14;
      uVar10 = *(undefined4 *)&(this->ConsumeCallback).field_0x18;
      uVar11 = *(undefined4 *)&(this->ConsumeCallback).field_0x1c;
      uVar15 = *(undefined8 *)&(this->ConsumeCallback).field_0x20;
      uVar16 = *(undefined8 *)&(this->ConsumeCallback).field_0x28;
      *(undefined8 *)&this->ConsumeCallback = *(undefined8 *)param_2;
      *(undefined8 *)&(this->ConsumeCallback).field_0x8 = uVar21;
      uVar12 = *(undefined4 *)&param_2->field_0x14;
      uVar13 = *(undefined4 *)&param_2->field_0x18;
      uVar14 = *(undefined4 *)&param_2->field_0x1c;
      *(undefined4 *)&(this->ConsumeCallback).field_0x10 = *(undefined4 *)&param_2->field_0x10;
      *(undefined4 *)&(this->ConsumeCallback).field_0x14 = uVar12;
      *(undefined4 *)&(this->ConsumeCallback).field_0x18 = uVar13;
      *(undefined4 *)&(this->ConsumeCallback).field_0x1c = uVar14;
      uVar12 = *(undefined4 *)&param_2->field_0x24;
      uVar13 = *(undefined4 *)&param_2->field_0x28;
      uVar14 = *(undefined4 *)&param_2->field_0x2c;
      *(undefined4 *)&(this->ConsumeCallback).field_0x20 = *(undefined4 *)&param_2->field_0x20;
      *(undefined4 *)&(this->ConsumeCallback).field_0x24 = uVar12;
      *(undefined4 *)&(this->ConsumeCallback).field_0x28 = uVar13;
      *(undefined4 *)&(this->ConsumeCallback).field_0x2c = uVar14;
      *(undefined4 *)param_2 = uVar4;
      *(undefined4 *)&param_2->field_0x4 = uVar5;
      *(undefined4 *)&param_2->field_0x8 = uVar6;
      *(undefined4 *)&param_2->field_0xc = uVar7;
      *(undefined4 *)&param_2->field_0x10 = uVar8;
      *(undefined4 *)&param_2->field_0x14 = uVar9;
      *(undefined4 *)&param_2->field_0x18 = uVar10;
      *(undefined4 *)&param_2->field_0x1c = uVar11;
      *(undefined8 *)&param_2->field_0x20 = uVar15;
      *(undefined8 *)&param_2->field_0x28 = uVar16;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  FScopedBootTiming::~FScopedBootTiming(&local_2c8);
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar19;
}

// KickPreload @ 142b9cf90

void __thiscall UE::AssetRegistry::Premade::FPreloader::KickPreload(FPreloader *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  <lambda_1> local_res8;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_UE::AssetRegistry::Premade::FPreloader::KickPreload(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId547,"FCookedAssetRegistryPreloader::KickPreload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x223);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_UE::AssetRegistry::Premade::FPreloader::KickPreload(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId547);
  }
  if (((this->LoadState != NotFound) || ((this->ARPath).Data.ArrayNum < 2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoadState == EState::NotFound && !ARPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x225,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->LoadState = Loading;
  (**(code **)(this->PreloadReady->_padding_ + 0x18))();
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_res8.__this = this;
  Async<_UE::AssetRegistry::Premade::FPreloader::KickPreload_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,TaskGraph,&local_res8,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TryLoad @ 142bb3010

/* WARNING: Enum "Type": Some values do not have unique names */

ELoadResult __thiscall UE::AssetRegistry::Premade::FPreloader::TryLoad(FPreloader *this)

{
  code *pcVar1;
  bool bVar2;
  ELoadResult EVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  bool bVar7;
  FLLMScope local_res8 [2];
  FAssetRegistryLoadOptions local_res10;
  FMemScope local_res18;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_enum_UE::AssetRegistry::Premade::ELoadResult___cdecl_UE::AssetRegistry::Premade::FPreloader::TryLoad(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId488,"FCookedAssetRegistryPreloader::TryLoad",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
               ,0x1e8);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_enum_UE::AssetRegistry::Premade::ELoadResult___cdecl_UE::AssetRegistry::Premade::FPreloader::TryLoad(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId488);
  }
  FLLMScope::FLLMScope(local_res8,AssetRegistry,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,AssetRegistry,true);
  if (((this->ARPath).Data.ArrayNum < 2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ARPath.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetRegistry.cpp"
                         ,0x1ea,L"TryLoad must not be called until after TrySetPath has succeeded.")
     , bVar2)) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  local_res10.bLoadDependencies = true;
  local_res10.bLoadPackageData = true;
  bVar2 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar2) && (bVar2 = FTaskGraphInterface::IsRunning(), bVar2)) {
    iVar4 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
    iVar4 = iVar4 + -2;
  }
  else {
    iVar4 = 0;
  }
  iVar5 = 0x10;
  if (iVar4 < 0x10) {
    iVar5 = iVar4;
  }
  local_res10.ParallelWorkers = 0;
  if (0 < iVar5) {
    local_res10.ParallelWorkers = iVar5;
  }
  if ((this->ARPath).Data.ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(this->ARPath).Data.AllocatorInstance.Data;
  }
  bVar2 = FAssetRegistryState::LoadFromDisk(pwVar6,&local_res10,&this->Payload,(Type *)0x0);
  if ((2 < (byte)LogAssetRegistry._0_1_) && (!bVar2)) {
    Logging::Private::BasicLog<3>
              (&`private:_enum_UE::AssetRegistry::Premade::ELoadResult___cdecl_UE::AssetRegistry::Premade::FPreloader::TryLoad(void)___ptr64'
                ::__l12::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  if ((4 < (byte)LogAssetRegistry._0_1_) && (bVar2)) {
    Logging::Private::BasicLog<5>
              (&`private:_enum_UE::AssetRegistry::Premade::ELoadResult___cdecl_UE::AssetRegistry::Premade::FPreloader::TryLoad(void)___ptr64'
                ::__l34::LOG_Static,(FLogCategoryBase *)&LogAssetRegistry);
  }
  this->LoadResult = !bVar2 * '\x02';
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return !bVar2 * '\x02';
}

// TrySetPath @ 142bb3520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::AssetRegistry::Premade::FPreloader::TrySetPath(FPreloader *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  char cVar4;
  IFileManager *pIVar5;
  wchar_t *pwVar6;
  ForElementType<FString> FVar7;
  ForElementType<FString> FVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  TArray<FString,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  GetPriorityPaths(&local_40);
  iVar3 = local_40.ArrayNum;
  FVar7 = (ForElementType<FString>)&local_40;
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FVar7 = local_40.AllocatorInstance.SecondaryData;
  }
  FVar8 = (ForElementType<FString>)((longlong)local_40.ArrayNum * 0x10 + (longlong)FVar7);
  while( true ) {
    if (local_40.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_48);
    }
    if (FVar7 == FVar8) break;
    pIVar5 = IFileManager::Get();
    if (*(int *)((longlong)FVar7 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)FVar7;
    }
    cVar4 = (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,pwVar6);
    if (cVar4 != '\0') {
      pFVar1 = &this->ARPath;
      if ((ForElementType<FString>)pFVar1 != FVar7) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = *(FScriptContainerElement **)FVar7;
        *(undefined8 *)FVar7 = 0;
        (this->ARPath).Data.ArrayNum = *(int *)((longlong)FVar7 + 8);
        (this->ARPath).Data.ArrayMax = *(int *)((longlong)FVar7 + 0xc);
        *(undefined8 *)((longlong)FVar7 + 8) = 0;
      }
      FVar7 = (ForElementType<FString>)&local_40;
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
        FVar7 = local_40.AllocatorInstance.SecondaryData;
      }
      DestructItems<FString,int>((FString *)FVar7,local_40.ArrayNum);
      if (local_40.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
        FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
      }
      return true;
    }
    FVar7 = (ForElementType<FString>)((longlong)FVar7 + 0x10);
  }
  FVar7 = (ForElementType<FString>)&local_40;
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FVar7 = local_40.AllocatorInstance.SecondaryData;
  }
  DestructItems<FString,int>((FString *)FVar7,local_40.ArrayNum);
  if (local_40.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FMemory::Free((void *)local_40.AllocatorInstance.SecondaryData);
  }
  return false;
}

