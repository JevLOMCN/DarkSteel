// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 3

// UDPEcho @ 14455b780

void __cdecl
FUDPPing::UDPEcho(FString *param_1,float param_2,TFunction<void___cdecl(FIcmpEchoResult)> *param_3)

{
  FName *pFVar1;
  ISocketSubsystem *pIVar2;
  FUDPPingAsyncResult *this;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint local_68;
  FName local_64;
  TFunction<void___cdecl(FIcmpEchoResult)> local_58;
  
  local_68 = 0;
  FConfigCacheIni::GetInt(GConfig,L"Ping",L"StackSize",(int *)&local_68,&GEngineIni);
  if (local_68 != 0) {
    uVar3 = 0x200000;
    if ((int)local_68 < 0x200000) {
      uVar3 = local_68;
    }
    local_68 = 0x8000;
    if (0x8000 < (int)uVar3) {
      local_68 = uVar3;
    }
  }
  pFVar1 = ::FName::FName(&local_64,L"WINDOWS");
  pIVar2 = ISocketSubsystem::Get(pFVar1);
  this = ::operator_new(0x70);
  if (this != (FUDPPingAsyncResult *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_3;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar4 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar4)(puVar4,&local_58.field_0x10);
    }
    FUDPPingAsyncResult::FUDPPingAsyncResult(this,pIVar2,param_1,param_2,local_68,&local_58);
  }
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// UDPEchoMany @ 14455c0a0

void __cdecl
FUDPPing::UDPEchoMany
          (TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName *pFVar4;
  ISocketSubsystem *pIVar5;
  FUdpPingManyAsync *this;
  FTSTicker *pFVar6;
  uint local_res20 [2];
  FName local_38 [4];
  
  local_res20[0] = 0;
  FConfigCacheIni::GetInt(GConfig,L"Ping",L"StackSize",(int *)local_res20,&GEngineIni);
  if (local_res20[0] != 0) {
    uVar3 = 0x200000;
    if ((int)local_res20[0] < 0x200000) {
      uVar3 = local_res20[0];
    }
    local_res20[0] = 0x8000;
    if (0x8000 < (int)uVar3) {
      local_res20[0] = uVar3;
    }
  }
  uVar3 = local_res20[0];
  pFVar4 = ::FName::FName(local_38,L"WINDOWS");
  pIVar5 = ISocketSubsystem::Get(pFVar4);
  this = ::operator_new(0x50);
  if (this == (FUdpPingManyAsync *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PingMany",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x4fe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar6 = FTSTicker::GetCoreTicker();
    FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar6);
    this->SocketSub = pIVar5;
    this->_padding_ = (longlong)&___7FUdpPingManyAsync__6B_;
    TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
              (&this->CompletionDelegate,param_3);
    this->bThreadCompleted = (FThreadSafeBool)0x0;
    *(undefined8 *)&this->FutureResult = 0;
    *(undefined8 *)&(this->FutureResult).field_0x8 = 0;
    FUdpPingManyAsync::Start(this,param_1,param_2,uVar3);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3);
  return;
}

// UDPEchoMany @ 14455c1f0

void __cdecl
FUDPPing::UDPEchoMany
          (TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *param_1,float param_2,
          TFunction<void___cdecl(FIcmpEchoManyCompleteResult)> *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy> *this;
  FName *pFVar6;
  ISocketSubsystem *pIVar7;
  FUdpPingManyAsync *this_00;
  FTSTicker *pFVar8;
  longlong *plVar9;
  uint uVar10;
  uint local_c8 [2];
  undefined1 local_c0 [8];
  FDelegateAllocation local_b8;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FDelegateAllocation *local_78;
  FName local_70;
  TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy> local_68 [2];
  
  local_c0 = (undefined1  [8])0x0;
  local_b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)&local_90);
  local_78 = &local_b8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x50,&local_b8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseFunctorDelegateInstance___A6AXUFIcmpEchoManyCompleteResult___ZUFDefaultDelegateUserPolicy__V__TFunction___A6AXUFIcmpEchoManyCompleteResult___Z____V__6B_
    ;
    lVar1 = *(longlong *)param_3;
    puVar4[4] = lVar1;
    puVar4[9] = 0;
    if (lVar1 != 0) {
      puVar4 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar4)();
    }
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  this = TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>::
         TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
                   (local_68,(TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
                              *)local_c0);
  local_c8[0] = 0;
  FConfigCacheIni::GetInt(GConfig,L"Ping",L"StackSize",(int *)local_c8,&GEngineIni);
  if (local_c8[0] != 0) {
    uVar10 = 0x200000;
    if ((int)local_c8[0] < 0x200000) {
      uVar10 = local_c8[0];
    }
    local_c8[0] = 0x8000;
    if (0x8000 < (int)uVar10) {
      local_c8[0] = uVar10;
    }
  }
  uVar10 = local_c8[0];
  pFVar6 = ::FName::FName(&local_70,L"WINDOWS");
  pIVar7 = ISocketSubsystem::Get(pFVar6);
  this_00 = ::operator_new(0x50);
  if (this_00 == (FUdpPingManyAsync *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PingMany",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x4fe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pFVar8 = FTSTicker::GetCoreTicker();
    FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this_00,0.0,pFVar8);
    this_00->SocketSub = pIVar7;
    this_00->_padding_ = (longlong)&___7FUdpPingManyAsync__6B_;
    TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
              (&this_00->CompletionDelegate,this);
    this_00->bThreadCompleted = (FThreadSafeBool)0x0;
    *(undefined8 *)&this_00->FutureResult = 0;
    *(undefined8 *)&(this_00->FutureResult).field_0x8 = 0;
    FUdpPingManyAsync::Start(this_00,param_1,param_2,uVar10);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c0,
             (FWriteAccessScope *)&local_a8);
  if ((local_b8.DelegateSize != 0) &&
     (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b8,0,0,0x10);
    local_b8.DelegateSize = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c0);
  if (*(longlong *)param_3 != 0) {
    plVar9 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar9 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  return;
}

