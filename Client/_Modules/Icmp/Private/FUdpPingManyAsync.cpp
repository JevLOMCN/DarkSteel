// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 7

// <lambda_1> @ 1445527e0

<lambda_1> * __thiscall
`FUdpPingManyAsync::Start'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FIcmpTarget *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 8);
  *(FUdpPingManyAsync **)this = param_1->__this;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Targets).ArrayNum;
  pFVar3 = (FIcmpTarget *)(param_1->Targets).AllocatorInstance.Data;
  *(int *)((longlong)this + 0x10) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x14) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x14));
    ConstructItems<FIcmpTarget,FIcmpTarget,int>(pFVar1->Data,pFVar3,iVar2);
  }
  *(float *)((longlong)this + 0x18) = param_1->Timeout;
  return this;
}

// FUdpPingManyAsync @ 1445532e0

FUdpPingManyAsync * __thiscall
FUdpPingManyAsync::FUdpPingManyAsync
          (FUdpPingManyAsync *this,ISocketSubsystem *param_1,
          TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy> *param_2)

{
  FTSTicker *pFVar1;
  
  pFVar1 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)this,0.0,pFVar1);
  this->SocketSub = param_1;
  this->_padding_ = (longlong)&___7FUdpPingManyAsync__6B_;
  TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FIcmpEchoManyCompleteResult),FDefaultDelegateUserPolicy>
            (&this->CompletionDelegate,param_2);
  this->bThreadCompleted = (FThreadSafeBool)0x0;
  *(undefined8 *)&this->FutureResult = 0;
  *(undefined8 *)&(this->FutureResult).field_0x8 = 0;
  return this;
}

// ~FUdpPingManyAsync @ 144553c90

void __thiscall FUdpPingManyAsync::~FUdpPingManyAsync(FUdpPingManyAsync *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  
  this->_padding_ = (longlong)&___7FUdpPingManyAsync__6B_;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x3e4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)&this->FutureResult != 0) {
    do {
      do {
      } while (*(longlong *)&this->FutureResult == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->FutureResult + 0x60);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->FutureResult).field_0x8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompletionDelegate);
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)this);
  return;
}

// operator() @ 144553ee0

void __thiscall
`FUdpPingManyAsync::RunWorker'::__l2::<lambda_1>::operator()
          (void *this,FIcmpEchoManyResult *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FIcmpEchoManyResult *)pFVar2->Data <= param_1) &&
     (param_1 < (FIcmpEchoManyResult *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,pFVar2,piVar1);
  }
  lVar7 = (longlong)iVar6;
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  pFVar3 = pFVar2->Data;
  *(EIcmpResponseStatus *)(pFVar3 + lVar7 * 0x48) = (param_1->EchoResult).Status;
  ::FString::FString((FString *)(pFVar3 + lVar7 * 0x48 + 8),&(param_1->EchoResult).ResolvedAddress);
  ::FString::FString((FString *)(pFVar3 + lVar7 * 0x48 + 0x18),&(param_1->EchoResult).ReplyFrom);
  *(float *)(pFVar3 + lVar7 * 0x48 + 0x28) = (param_1->EchoResult).Time;
  ::FString::FString((FString *)(pFVar3 + lVar7 * 0x48 + 0x30),&(param_1->Target).Address);
  *(int *)(pFVar3 + lVar7 * 0x48 + 0x40) = (param_1->Target).Port;
  pFVar3 = (param_1->Target).Address.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->EchoResult).ReplyFrom.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->EchoResult).ResolvedAddress.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// RunWorker @ 144558880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FIcmpEchoManyCompleteResult * __cdecl
FUdpPingManyAsync::RunWorker
          (FIcmpEchoManyCompleteResult *__return_storage_ptr__,ISocketSubsystem *param_1,
          TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *param_2,float param_3)

{
  int iVar1;
  FIcmpTarget *pFVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FStaticBasicLogRecord *pFVar6;
  char cVar7;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  undefined1 local_180 [8];
  FDelegateAllocation local_178;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  undefined1 local_148 [248];
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  (__return_storage_ptr__->AllResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllResults).ArrayNum = 0;
  (__return_storage_ptr__->AllResults).ArrayMax = 0;
  __return_storage_ptr__->Status = Invalid;
  local_180 = (undefined1  [8])0x0;
  local_178.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_178.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
             (FWriteAccessScope *)&local_168);
  local_150 = &local_178;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_178);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFIcmpEchoManyResult___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar4[3] = __return_storage_ptr__;
  }
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
  }
  local_198 = (undefined1  [8])0x0;
  local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_190.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_168);
  local_150 = &local_190;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_190);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXW4EIcmpEchoManyStatus___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy,`FUdpPingManyAsync::RunWorker'::`2'::<lambda_2>_>
               ::_vftable_;
    puVar4[3] = __return_storage_ptr__;
  }
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
  }
  iVar1 = param_2->ArrayNum;
  pFVar2 = (FIcmpTarget *)(param_2->AllocatorInstance).Data;
  local_148._24_8_ = 0.0;
  local_148._0_8_ = &___7FUdpPingWorker__6B_;
  local_148._12_4_ = 0;
  local_148._16_4_ = 0;
  local_148[0x14] = false;
  local_148._40_8_ = (FScriptContainerElement *)0x0;
  local_148._8_4_ = param_3;
  local_148._32_8_ = param_1;
  local_148._48_4_ = iVar1;
  if (iVar1 == 0) {
    local_148._52_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar1,0,(ForAnyElementType *)(local_148 + 0x28),iVar1,
               (int *)(local_148 + 0x34));
    ConstructItems<FIcmpTarget,FIcmpTarget,int>((void *)local_148._40_8_,pFVar2,iVar1);
  }
  local_148._56_8_ = 0;
  local_148._96_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_148._104_8_ = _UNK_150631d98;
  local_148._64_8_ = 0;
  local_148._176_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_148._184_8_ = _UNK_150631d98;
  local_148._88_8_ = 0;
  local_148._120_8_ = 0;
  local_148._128_4_ = 0;
  local_148._136_8_ = 0;
  local_148._144_8_ = 0;
  local_148._168_8_ = 0;
  local_148._200_8_ = 0;
  local_148._208_4_ = 0;
  TDelegate<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy> *)
             (local_148 + 0xd8),
             (TDelegate<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy> *)local_180);
  TDelegate<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy>
            (local_148 + 0xf0,
             (TDelegate<void___cdecl(EIcmpEchoManyStatus),FDefaultDelegateUserPolicy> *)local_198);
  FUdpPingWorker::Init((FUdpPingWorker *)local_148);
  if ((ISocketSubsystem *)local_148._32_8_ == (ISocketSubsystem *)0x0) {
    if (2 < (byte)LogPing._0_1_) {
      pFVar6 = &::LOG_Static;
LAB_144558aaa:
      UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogPing);
    }
  }
  else if (local_148._48_4_ == 0) {
    if (2 < (byte)LogPing._0_1_) {
      pFVar6 = &::LOG_Static;
      goto LAB_144558aaa;
    }
  }
  else {
    bVar3 = FUdpPingWorker::InitProgressTable
                      ((FUdpPingWorker *)local_148,
                       (TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *)(local_148 + 0x28));
    if (bVar3) {
      if (local_148[0x14] == false) {
        bVar3 = FUdpPingWorker::SendPings
                          ((FUdpPingWorker *)local_148,(ISocketSubsystem *)local_148._32_8_);
        if (bVar3) {
          bVar3 = true;
          goto LAB_144558ab1;
        }
      }
    }
    else if (2 < (byte)LogPing._0_1_) {
      pFVar6 = &::LOG_Static;
      goto LAB_144558aaa;
    }
  }
  bVar3 = false;
LAB_144558ab1:
  if (local_148[0x14] == false) {
    cVar7 = !bVar3 + '\x01';
  }
  else {
    cVar7 = '\x03';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_148 + 0xf0),
             (FReadAccessScope *)&local_168);
  if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
    (**(code **)(*local_50 + 0x68))(local_50,cVar7);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_168);
  FUdpPingWorker::~FUdpPingWorker((FUdpPingWorker *)local_148);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_168);
  if ((local_190.DelegateSize != 0) &&
     (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_190,0,0,0x10);
    local_190.DelegateSize = 0;
  }
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
  }
  if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_190.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_198);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
             (FWriteAccessScope *)&local_168);
  if ((local_178.DelegateSize != 0) &&
     (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_178.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_178,0,0,0x10);
    local_178.DelegateSize = 0;
  }
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
  }
  if (local_178.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_178.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_180);
  return __return_storage_ptr__;
}

// Start @ 14455a2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUdpPingManyAsync::Start
          (FUdpPingManyAsync *this,TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *param_1,
          float param_2,uint param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FIcmpTarget *pFVar3;
  ForAnyElementType FVar4;
  code **ppcVar5;
  TFuture<FIcmpEchoManyCompleteResult> *pTVar6;
  undefined1 auStackY_118 [32];
  FUdpPingManyAsync *local_d8;
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  float local_c0;
  TUniqueFunction<void___cdecl(void)> local_b8;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (this->SocketSub == (ISocketSubsystem *)0x0) {
    LOCK();
    this->bThreadCompleted = (FThreadSafeBool)0x1;
    UNLOCK();
  }
  else {
    LOCK();
    this->bThreadCompleted = (FThreadSafeBool)0x0;
    UNLOCK();
    iVar2 = param_1->ArrayNum;
    pFVar3 = (FIcmpTarget *)(param_1->AllocatorInstance).Data;
    local_d0.Data = (FScriptContainerElement *)0x0;
    local_d8 = this;
    local_c8 = iVar2;
    if (iVar2 == 0) {
      local_c4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar2,0,&local_d0,iVar2,&local_c4);
      ConstructItems<FIcmpTarget,FIcmpTarget,int>(local_d0.Data,pFVar3,iVar2);
    }
    local_88[0] = (code *)0x0;
    local_c0 = param_2;
    ppcVar5 = FMemory::Malloc(0x28,8);
    iVar2 = local_c8;
    FVar4.Data = local_d0.Data;
    *ppcVar5 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FUdpPingManyAsync::Start'::`2'::<lambda_1>,0,1>::
                        _vftable_;
    pFVar1 = (ForAnyElementType *)(ppcVar5 + 2);
    ppcVar5[1] = (code *)local_d8;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    *(int *)(ppcVar5 + 3) = local_c8;
    local_60 = ppcVar5;
    if (local_c8 == 0) {
      *(int *)((longlong)ppcVar5 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,local_c8,0,pFVar1,local_c8,(int *)((longlong)ppcVar5 + 0x1c));
      ConstructItems<FIcmpTarget,FIcmpTarget,int>(pFVar1->Data,(FIcmpTarget *)FVar4.Data,iVar2);
    }
    *(float *)(ppcVar5 + 4) = local_c0;
    if (ppcVar5 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FUdpPingManyAsync::Start'::__l2::<lambda_1>,FIcmpEchoManyCompleteResult>
                    ::Call;
    }
    DestructItems<FIcmpTarget,int>((FIcmpTarget *)local_d0.Data,local_c8);
    if ((FIcmpTarget *)local_d0.Data != (FIcmpTarget *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    local_b8._0_8_ = 0;
    local_b8._40_8_ = 0;
    pTVar6 = AsyncThread<TFunction<FIcmpEchoManyCompleteResult___cdecl(void)>_&>
                       ((TFuture<FIcmpEchoManyCompleteResult> *)&local_d8,
                        (TFunction<FIcmpEchoManyCompleteResult___cdecl(void)> *)local_88,param_3,
                        TPri_Normal,&local_b8);
    if (&this->FutureResult != pTVar6) {
      *(undefined8 *)&this->FutureResult = *(undefined8 *)pTVar6;
      *(undefined8 *)pTVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->FutureResult).field_0x8,
                 (FSharedReferencer<1> *)&pTVar6->field_0x8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_d0.Data);
    if (local_88[0] != (code *)0x0) {
      ppcVar5 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar5 = local_60;
      }
      (**(code **)(*ppcVar5 + 0x10))();
    }
  }
  return;
}

// Tick @ 14455ae40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FUdpPingManyAsync::Tick(FUdpPingManyAsync *this,float param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FIcmpEchoManyResult *pFVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ForAnyElementType FVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FUdpPingManyAsync::Tick(float)_::_2_::FStat_STAT_UDPPing_Tick>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  bool bVar15;
  FNameEntryId FVar16;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_a8;
  undefined1 local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  undefined1 local_80;
  FName local_78;
  uchar local_68 [8];
  uint local_60;
  int local_5c;
  undefined1 local_58;
  FReadAccessScope local_50;
  
  FVar16.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_UDPPing_Tick ==
          (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FUdpPingManyAsync::Tick(float)_::_2_::FStat_STAT_UDPPing_Tick>
           )0x0) {
        pFVar10 = ::FName::FName((FName *)&local_res8.s,"STAT_UDPPing_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UDPPing_Tick,*pFVar10,
                   L"STAT_UDPPing_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                   ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar11 = StatPtr_STAT_UDPPing_Tick;
  if (StatPtr_STAT_UDPPing_Tick ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FUdpPingManyAsync::Tick(float)_::_2_::FStat_STAT_UDPPing_Tick>
       )0x0) {
    pFVar10 = ::FName::FName(local_res18,"STAT_UDPPing_Tick");
    FVar11 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FUdpPingManyAsync::Tick(float)_::_2_::FStat_STAT_UDPPing_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UDPPing_Tick,*pFVar10,
                          L"STAT_UDPPing_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar12 == 0)) {
LAB_14455af9b:
    bVar7 = false;
    FVar14 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                   ,0x401);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14455af9b;
    local_res8.s.LowPart = FVar13.Value;
    local_res8.s.HighPart = uVar12;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar7 = true;
  }
  if (this->bThreadCompleted == (FThreadSafeBool)0x0) {
    bVar15 = true;
    goto LAB_14455b17a;
  }
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  local_80 = 0;
  if (*(longlong *)&this->FutureResult != 0) {
    lVar3 = *(longlong *)&this->FutureResult;
    while (*(char *)(lVar3 + 0x68) == '\0') {
      (**(code **)(**(longlong **)(lVar3 + 0x60) + 0x20))(*(longlong **)(lVar3 + 0x60),0xffffffff);
    }
    if (&local_90 == (ForAnyElementType *)(lVar3 + 0x70)) {
LAB_14455b06a:
      FVar16.Value = (uint)local_88;
    }
    else {
      DestructItems<FIcmpEchoManyResult,int>((FIcmpEchoManyResult *)local_90.Data,(uint)local_88);
      iVar2 = *(int *)(lVar3 + 0x78);
      pFVar4 = (FIcmpEchoManyResult *)((ForAnyElementType *)(lVar3 + 0x70))->Data;
      local_88 = CONCAT44(local_88._4_4_,iVar2);
      if ((iVar2 != 0) || (local_88._4_4_ != 0)) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,iVar2,local_88._4_4_,&local_90,iVar2,(int *)((longlong)&local_88 + 4));
        ConstructItems<FIcmpEchoManyResult,FIcmpEchoManyResult,int>(local_90.Data,pFVar4,iVar2);
        goto LAB_14455b06a;
      }
      local_88 = 0;
      FVar16.Value = 0;
    }
    local_80 = *(undefined1 *)(lVar3 + 0x80);
  }
  FVar9.Data = local_90.Data;
  local_a8.StatData.Pad[0] = '\0';
  local_a8.StatData.Pad[1] = '\0';
  local_a8.StatData.Pad[2] = '\0';
  local_a8.StatData.Pad[3] = '\0';
  local_a8.StatData.Pad[4] = '\0';
  local_a8.StatData.Pad[5] = '\0';
  local_a8.StatData.Pad[6] = '\0';
  local_a8.StatData.Pad[7] = '\0';
  local_a8.NameAndInfo.Index.Value = FVar16.Value;
  if (FVar16.Value == 0) {
    local_a8.NameAndInfo.Index.Value = 0;
    local_a8.NameAndInfo.Number = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,FVar16.Value,0,(ForAnyElementType *)&local_a8,FVar16.Value,
               &local_a8.NameAndInfo.Number);
    ConstructItems<FIcmpEchoManyResult,FIcmpEchoManyResult,int>
              ((void *)local_a8.StatData.Pad,(FIcmpEchoManyResult *)FVar9.Data,FVar16.Value);
  }
  local_98 = local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CompletionDelegate,
             &local_50);
  if ((*(int *)&(this->CompletionDelegate).field_0x10 != 0) &&
     (plVar5 = *(longlong **)&(this->CompletionDelegate).field_0x8, plVar5 != (longlong *)0x0)) {
    local_68[0] = local_a8.StatData.Pad[0];
    local_68[1] = local_a8.StatData.Pad[1];
    local_68[2] = local_a8.StatData.Pad[2];
    local_68[3] = local_a8.StatData.Pad[3];
    local_68[4] = local_a8.StatData.Pad[4];
    local_68[5] = local_a8.StatData.Pad[5];
    local_68[6] = local_a8.StatData.Pad[6];
    local_68[7] = local_a8.StatData.Pad[7];
    local_60 = local_a8.NameAndInfo.Index.Value;
    local_5c = local_a8.NameAndInfo.Number;
    local_58 = local_98;
    local_a8.StatData.Pad[0] = '\0';
    local_a8.StatData.Pad[1] = '\0';
    local_a8.StatData.Pad[2] = '\0';
    local_a8.StatData.Pad[3] = '\0';
    local_a8.StatData.Pad[4] = '\0';
    local_a8.StatData.Pad[5] = '\0';
    local_a8.StatData.Pad[6] = '\0';
    local_a8.StatData.Pad[7] = '\0';
    local_a8.NameAndInfo.Index.Value = 0;
    local_a8.NameAndInfo.Number = 0;
    (**(code **)(*plVar5 + 0x68))(plVar5,local_68);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  DestructItems<FIcmpEchoManyResult,int>
            ((FIcmpEchoManyResult *)local_a8.StatData.Pad,local_a8.NameAndInfo.Index.Value);
  if (local_a8.StatData.Pad != (uchar  [8])0x0) {
    FMemory::Free((void *)local_a8.StatData.Pad);
  }
  (**(code **)this->_padding_)(this,1);
  DestructItems<FIcmpEchoManyResult,int>((FIcmpEchoManyResult *)local_90.Data,(uint)local_88);
  if ((FIcmpEchoManyResult *)local_90.Data != (FIcmpEchoManyResult *)0x0) {
    FMemory::Free(local_90.Data);
  }
  bVar15 = false;
LAB_14455b17a:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar14 & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return bVar15;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar15;
}

