// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 20

// FUdpPingWorker @ 144553350

FUdpPingWorker * __thiscall
FUdpPingWorker::FUdpPingWorker
          (FUdpPingWorker *this,ISocketSubsystem *param_1,
          TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *param_2,float param_3,
          TDelegate<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy> *param_4,
          TDelegate<void___cdecl(EIcmpEchoManyStatus),FDefaultDelegateUserPolicy> *param_5)

{
  TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FIcmpTarget *pFVar4;
  
  this->Timeout = param_3;
  pTVar1 = &this->Targets;
  this->NumAwaitingReplies = 0;
  this->NumValidRepliesReceived = 0;
  this->bCancelOperation = false;
  this->_padding_ = (longlong)&___7FUdpPingWorker__6B_;
  this->MinPingSendWaitTimeMs = 0.0;
  piVar2 = &(this->Targets).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->SocketSubsystem = param_1;
  iVar3 = param_2->ArrayNum;
  pFVar4 = (FIcmpTarget *)(param_2->AllocatorInstance).Data;
  (this->Targets).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FIcmpTarget,FIcmpTarget,int>((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  *(undefined8 *)&this->ProgressTable = 0;
  *(undefined8 *)&(this->ProgressTable).field_0x8 = 0;
  *(undefined8 *)&(this->ProgressTable).field_0x20 = 0;
  *(undefined4 *)&(this->ProgressTable).field_0x28 = 0;
  *(undefined4 *)&(this->ProgressTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProgressTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProgressTable).field_0x34 = 0;
  *(undefined8 *)&(this->ProgressTable).field_0x40 = 0;
  *(undefined4 *)&(this->ProgressTable).field_0x48 = 0;
  *(undefined8 *)&this->SocketTable = 0;
  *(undefined8 *)&(this->SocketTable).field_0x8 = 0;
  *(undefined8 *)&(this->SocketTable).field_0x20 = 0;
  *(undefined4 *)&(this->SocketTable).field_0x28 = 0;
  *(undefined4 *)&(this->SocketTable).field_0x2c = 0x80;
  *(undefined4 *)&(this->SocketTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SocketTable).field_0x34 = 0;
  *(undefined8 *)&(this->SocketTable).field_0x40 = 0;
  *(undefined4 *)&(this->SocketTable).field_0x48 = 0;
  TDelegate<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FIcmpEchoManyResult),FDefaultDelegateUserPolicy>
            (&this->GotResultDelegate,param_4);
  TDelegate<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(enum_EIcmpEchoManyStatus),FDefaultDelegateUserPolicy>
            (&this->CompletionDelegate,param_5);
  return this;
}

// ~FUdpPingWorker @ 144553d30

void __thiscall FUdpPingWorker::~FUdpPingWorker(FUdpPingWorker *this)

{
  undefined1 *puVar1;
  TMap<FName,FSocket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>_>
  *this_00;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FUdpPingWorker__6B_;
  DestroySockets(this);
  this_00 = &this->SocketTable;
  bVar5 = 1 < *(int *)&(this->SocketTable).field_0x48;
  if (!bVar5) {
    TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->SocketTable).field_0xc;
  *(undefined4 *)&(this->SocketTable).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SocketTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SocketTable).field_0x34 = 0;
  iVar2 = *(int *)&(this->SocketTable).field_0x2c;
  *(undefined4 *)&(this->SocketTable).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SocketTable).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SocketTable).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(this->SocketTable).field_0x48 = 1;
    TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->CompletionDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->GotResultDelegate);
  *(undefined4 *)&(this->SocketTable).field_0x48 = 0;
  pvVar3 = *(void **)&(this->SocketTable).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSocket_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSocket_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSocket_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  *(undefined4 *)&(this->ProgressTable).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ProgressTable).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ProgressTable);
  DestructItems<FIcmpTarget,int>
            ((FIcmpTarget *)(this->Targets).AllocatorInstance.Data,(this->Targets).ArrayNum);
  pFVar4 = (this->Targets).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// CalculateTripTime @ 144554ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FUdpPingWorker::CalculateTripTime
          (ulong64 param_1,ulong64 param_2,double param_3,float *param_4,
          EIcmpResponseStatus *param_5)

{
  double dVar1;
  bool bVar2;
  float fVar3;
  
  dVar1 = (double)(param_2 - param_1) * FGenericPlatformTime::SecondsPerCycle64;
  if ((dVar1 <= 0.0) || (__real_40ed4c0000000000 <= dVar1)) {
    bVar2 = false;
    fVar3 = __real_bf800000;
  }
  else {
    bVar2 = true;
    fVar3 = (float)dVar1;
  }
  *param_4 = fVar3;
  *param_5 = (bVar2 ^ 1) << 2;
  if (6 < (byte)LogPing._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
  }
  return bVar2;
}

// CheckAwaitReplies @ 144554ff0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FUdpPingWorker::CheckAwaitReplies(FUdpPingWorker *this)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  longlong lVar20;
  TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
  *pTVar21;
  undefined1 local_res10 [8];
  int local_res18;
  LARGE_INTEGER local_res20;
  FString local_190;
  FString local_180;
  undefined4 local_170;
  FString local_168;
  undefined4 local_158;
  TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
  *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
  *local_118;
  TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
  *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString local_e0;
  undefined4 local_d0;
  undefined4 local_c8 [2];
  FScriptContainerElement *local_c0;
  int local_b8;
  int local_b4;
  FScriptContainerElement *local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  FScriptContainerElement *local_98;
  int local_90;
  int local_8c;
  undefined4 local_88;
  FReadAccessScope local_80 [2];
  
  iVar11 = *(int *)&(this->ProgressTable).field_0x28;
  pTVar19 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ProgressTable).field_0x10;
  iVar18 = 0;
  iStack_148 = 0;
  local_130 = 0;
  pTVar21 = &this->ProgressTable;
  uStack_144 = 1;
  iStack_134 = 0;
  if (iVar11 != 0) {
    puVar17 = *(uint **)&(this->ProgressTable).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)pTVar19;
    }
    uVar16 = *puVar17;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar11;
      if ((int)((iVar11 + -1 >> 0x1f & 0x1fU) + iVar11 + -1) >> 5 < iStack_148) goto LAB_1445550b0;
      uVar16 = puVar17[lVar12 + 1];
    }
    uStack_144 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_144 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res18 = (int)lVar12;
    iStack_134 = local_res18 + -1 + local_130;
    if (iVar11 < iStack_134) {
      iStack_134 = iVar11;
    }
  }
LAB_1445550b0:
  uVar16 = *(uint *)&(this->ProgressTable).field_0x28;
  iStack_128 = *(int *)&(this->ProgressTable).field_0x8 - *(int *)&(this->ProgressTable).field_0x34;
  uVar15 = uVar16 & 0xffffffe0;
  uStack_138 = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_144,iStack_148);
  TStack_108.CurrentBitIndex = iStack_134;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  TStack_108._28_4_ = iStack_134;
  TStack_108.BaseBitIndex = local_130;
  uStack_e8 = CONCAT44(uStack_124,iStack_128);
  local_150 = pTVar21;
  local_140 = (undefined1 *)pTVar19;
  iStack_12c = iStack_134;
  local_120 = pTVar19;
  local_118 = pTVar21;
  local_110 = pTVar21;
  TStack_108.Array = pTVar19;
  if ((((int)uVar16 < 0) || (iVar11 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    iVar11 = (*pcVar7)();
    return iVar11;
  }
  dVar8 = __real_4170000000000000;
  uVar2 = *(uint *)&(this->ProgressTable).field_0x28;
  if (uVar16 != uVar2) {
    puVar13 = *(undefined1 **)&(this->ProgressTable).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)pTVar19;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar14) goto LAB_1445551c0;
      uVar16 = *(uint *)(puVar13 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar15;
    if ((int)uVar2 < (int)uVar16) {
      uVar16 = uVar2;
    }
  }
LAB_1445551c0:
  while( true ) {
    pTVar9 = local_110;
    if (*(int *)&local_110->field_0x8 - *(int *)&local_110->field_0x34 != (int)uStack_e8) {
      `TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_108.CurrentBitIndex == uVar16) && (TStack_108.Array == pTVar19)) &&
       (pTVar9 == pTVar21)) break;
    lVar5 = *(longlong *)pTVar9;
    lVar20 = (longlong)TStack_108.CurrentBitIndex * 0x98;
    lVar12 = lVar20 + lVar5;
    if ((*(int *)(lVar20 + 0x48 + lVar5) == 4) && (0.0 < *(double *)(lVar12 + 0x30))) {
      QueryPerformanceCounter(&local_res20);
      if (((double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) -
          *(double *)(lVar12 + 0x30) < *(double *)(lVar12 + 0x38)) {
        iVar18 = iVar18 + 1;
      }
      else {
        if (4 < (byte)LogPing._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
        }
        *(undefined4 *)(lVar12 + 0x48) = 1;
        *(float *)(lVar20 + 0x70 + lVar5) = (float)*(double *)(lVar12 + 0x38);
        ::FString::Empty((FString *)(lVar20 + lVar5 + 0x60));
        uVar3 = *(undefined4 *)(lVar12 + 0x28);
        *(undefined8 *)(lVar12 + 0x78) = 0;
        ::FString::FString(&local_e0,(FString *)(lVar12 + 0x18));
        uVar4 = *(undefined4 *)(lVar12 + 0x48);
        local_d0 = uVar3;
        ::FString::FString(&local_190,(FString *)(lVar12 + 0x50));
        ::FString::FString(&local_180,(FString *)(lVar20 + lVar5 + 0x60));
        local_170 = *(undefined4 *)(lVar20 + 0x70 + lVar5);
        ::FString::FString(&local_168,&local_e0);
        local_158 = local_d0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->GotResultDelegate,local_80);
        if ((*(int *)&(this->GotResultDelegate).field_0x10 != 0) &&
           (plVar6 = *(longlong **)&(this->GotResultDelegate).field_0x8, plVar6 != (longlong *)0x0))
        {
          local_a0 = local_170;
          local_c0 = local_190.Data.AllocatorInstance.Data;
          local_b8 = local_190.Data.ArrayNum;
          local_b4 = local_190.Data.ArrayMax;
          local_b0 = local_180.Data.AllocatorInstance.Data;
          local_a8 = local_180.Data.ArrayNum;
          local_a4 = local_180.Data.ArrayMax;
          local_98 = local_168.Data.AllocatorInstance.Data;
          local_90 = local_168.Data.ArrayNum;
          local_8c = local_168.Data.ArrayMax;
          local_168.Data.ArrayNum = 0;
          local_168.Data.ArrayMax = 0;
          local_190.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_190.Data.ArrayNum = 0;
          local_190.Data.ArrayMax = 0;
          local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_180.Data.ArrayNum = 0;
          local_180.Data.ArrayMax = 0;
          local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88 = local_158;
          local_c8[0] = uVar4;
          (**(code **)(*plVar6 + 0x68))(plVar6,local_c8);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_80);
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_180.Data.AllocatorInstance.Data);
        }
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    pTVar19 = local_120;
    pTVar21 = local_118;
  }
  return iVar18;
}

// DestroySockets @ 144555eb0

bool __thiscall FUdpPingWorker::DestroySockets(FUdpPingWorker *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (this->SocketSubsystem == (ISocketSubsystem *)0x0) {
    return false;
  }
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  puVar1 = &(this->SocketTable).field_0x10;
  iVar3 = *(int *)&(this->SocketTable).field_0x28;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->SocketTable).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_144555f8d;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_144555f8d:
  uVar12 = *(uint *)&(this->SocketTable).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar13);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->SocketTable).field_0x8 -
                       *(int *)&(this->SocketTable).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar8 = *(uint *)&(this->SocketTable).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->SocketTable).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1445560a0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_1445560a0:
  while( true ) {
    if (*(int *)&(this->SocketTable).field_0x8 - *(int *)&(this->SocketTable).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FSocket_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar12) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->SocketTable;
    if (*(longlong *)(lVar4 + 8 + lVar10 * 0x18) != 0) {
      (**(code **)(this->SocketSubsystem->_padding_ + 0x38))();
      *(undefined8 *)(lVar4 + lVar10 * 0x18 + 8) = 0;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return true;
}

// Exit @ 1445565b0

void __thiscall FUdpPingWorker::Exit(FUdpPingWorker *this)

{
  return;
}

// GetOrCreateSocket @ 1445567b0

FSocket * __thiscall FUdpPingWorker::GetOrCreateSocket(FUdpPingWorker *this,FName *param_1)

{
  TMap<FName,FSocket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>_>
  *this_00;
  longlong lVar1;
  FName FVar2;
  ISocketSubsystem *pIVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FNameEntryId FVar8;
  undefined4 extraout_var;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  TPairInitializer<FName_const_&,FSocket_*_const_&> local_res8;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong *local_res20;
  undefined1 local_38 [16];
  
  if (this->SocketSubsystem != (ISocketSubsystem *)0x0) {
    FVar2 = *param_1;
    this_00 = &this->SocketTable;
    uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    if (*(int *)&(this->SocketTable).field_0x8 != *(int *)&(this->SocketTable).field_0x34) {
      puVar11 = *(undefined1 **)&(this->SocketTable).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->SocketTable).field_0x38;
      }
      iVar7 = *(int *)(puVar11 +
                      (ulonglong)
                      (*(int *)&(this->SocketTable).field_0x48 - 1U & FVar2.Number + uVar6) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x18;
          if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x18) == FVar2) {
            puVar10 = (undefined8 *)(lVar1 + 8);
            if (lVar1 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            if (puVar10 != (undefined8 *)0x0) {
              return (FSocket *)*puVar10;
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x10);
        } while (iVar7 != -1);
      }
    }
    pIVar3 = this->SocketSubsystem;
    pcVar4 = *(code **)(pIVar3->_padding_ + 0x18);
    ::FString::FString((FString *)local_38,L"UDPPing");
    FVar8 = FNameEntryId::FromValidEName((EName)&local_res8);
    local_res18 = *(undefined4 *)CONCAT44(extraout_var,FVar8.Value);
    local_res1c = 0;
    plVar9 = (longlong *)(*pcVar4)(pIVar3,&local_res18,local_38,param_1);
    if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_38._0_8_);
    }
    if (plVar9 != (longlong *)0x0) {
      cVar5 = (**(code **)(*plVar9 + 0xa0))(plVar9,CONCAT71((int7)((ulonglong)*plVar9 >> 8),1));
      if (cVar5 != '\0') {
        local_38._8_8_ = &local_res20;
        local_res20 = plVar9;
        local_38._0_8_ = param_1;
        TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FName_const_&,FSocket_*_const_&>_>
                  ((TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
                    *)this_00,&local_res8,(bool *)local_38);
        return *(FSocket **)
                (*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)local_res8.Key * 0x18);
      }
      (**(code **)(pIVar3->_padding_ + 0x38))(pIVar3,plVar9);
    }
  }
  return (FSocket *)0x0;
}

// HasReplyData @ 144556a30

bool __cdecl FUdpPingWorker::HasReplyData(FSocket *param_1,uint param_2)

{
  char cVar1;
  uint local_res8 [8];
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(param_1->_padding_ + 0x40))(param_1,local_res8);
  if ((cVar1 != '\0') && (param_2 <= local_res8[0])) {
    return true;
  }
  return false;
}

// Init @ 1445571a0

bool __thiscall FUdpPingWorker::Init(FUdpPingWorker *this)

{
  undefined1 *puVar1;
  TMap<FName,FSocket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>_>
  *this_00;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->ProgressTable).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
                      *)&this->ProgressTable);
  }
  TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ProgressTable,0,*(int *)&(this->ProgressTable).field_0x8);
  puVar1 = &(this->ProgressTable).field_0xc;
  *(undefined4 *)&(this->ProgressTable).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&this->ProgressTable,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProgressTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProgressTable).field_0x34 = 0;
  iVar2 = *(int *)&(this->ProgressTable).field_0x2c;
  *(undefined4 *)&(this->ProgressTable).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ProgressTable).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProgressTable).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ProgressTable).field_0x48 = 1;
    TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
              *)&this->ProgressTable);
  }
  DestroySockets(this);
  this_00 = &this->SocketTable;
  bVar3 = 1 < *(int *)&(this->SocketTable).field_0x48;
  if (!bVar3) {
    TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->SocketTable).field_0xc;
  *(undefined4 *)&(this->SocketTable).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SocketTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SocketTable).field_0x34 = 0;
  iVar2 = *(int *)&(this->SocketTable).field_0x2c;
  *(undefined4 *)&(this->SocketTable).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SocketTable).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SocketTable).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->SocketTable).field_0x48 = 1;
    TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this->NumAwaitingReplies = 0;
  this->NumValidRepliesReceived = 0;
  this->bCancelOperation = false;
  this->MinPingSendWaitTimeMs = (double)SendWaitTime.Ticks * __real_3f1a36e2eb1c432d;
  FConfigCacheIni::GetDouble
            (GConfig,L"Ping",L"MinPingSendWaitTimeMs",&this->MinPingSendWaitTimeMs,&GEngineIni);
  return true;
}

// InitProgressTable @ 144557350

bool __thiscall
FUdpPingWorker::InitProgressTable
          (FUdpPingWorker *this,TArray<FIcmpTarget,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType _Src_00;
  int iVar4;
  FProgress *pFVar5;
  bool bVar6;
  ulonglong uVar7;
  TPairInitializer<FUdpPingWorker::FProgressKey_const_&,FUdpPingWorker::FProgress_const_&> *pTVar8;
  FProgress *pFVar9;
  longlong lVar10;
  int iVar11;
  FString **ppFVar12;
  int iVar13;
  undefined1 local_res8 [8];
  FString local_128;
  int local_118;
  FString local_110;
  FProgress local_f8;
  TPairInitializer<FUdpPingWorker::FProgressKey_const_&,FUdpPingWorker::FProgress_const_&> local_78;
  FString *local_68;
  FProgress *local_60;
  FString *local_58;
  FProgress *local_50;
  
  if (this->SocketSubsystem == (ISocketSubsystem *)0x0) {
    return false;
  }
  bVar6 = 1 < *(int *)&(this->ProgressTable).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
                      *)&this->ProgressTable);
  }
  TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->ProgressTable,0,*(int *)&(this->ProgressTable).field_0x8);
  puVar1 = &(this->ProgressTable).field_0xc;
  *(undefined4 *)&(this->ProgressTable).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,8,0,(ForAnyElementType *)&this->ProgressTable,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ProgressTable).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ProgressTable).field_0x34 = 0;
  iVar13 = *(int *)&(this->ProgressTable).field_0x2c;
  *(undefined4 *)&(this->ProgressTable).field_0x28 = 0;
  if ((iVar13 < 0) || (0x80 < iVar13)) {
    *(undefined4 *)&(this->ProgressTable).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ProgressTable).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->ProgressTable).field_0x48 = 1;
    TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
              *)&this->ProgressTable);
  }
  uVar2 = param_1->ArrayNum;
  uVar7 = (ulonglong)(int)uVar2;
  iVar13 = 0;
  pFVar9 = (FProgress *)(param_1->AllocatorInstance).Data;
  local_78.Value = (FProgress *)((longlong)&pFVar9->Address + uVar7 * 0x18);
  while( true ) {
    pFVar5 = local_78.Value;
    if (param_1->ArrayNum != (int)uVar7) {
      `TCheckedPointerIterator<FIcmpTarget_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar5) break;
    local_f8.Address.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = iVar13 + 1;
    local_f8.Result.ResolvedAddress.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Result.ResolvedAddress.Data.ArrayNum = 0;
    local_f8.Result.ResolvedAddress.Data.ArrayMax = 0;
    local_f8.Address.Data.ArrayNum = 0;
    local_f8.Address.Data.ArrayMax = 0;
    local_f8.Port = 0;
    local_f8.EchoId = 0;
    local_f8.SequenceNum = 0;
    local_f8.Result.Time = -1.0;
    local_f8.SocketPtr = (FSocket *)0x0;
    local_f8.ToAddr.Object = (FInternetAddr *)0x0;
    local_f8.ToAddr.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_f8.Result.Status = InternalError;
    local_f8.Result.ReplyFrom.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Result.ReplyFrom.Data.ArrayNum = 0;
    local_f8.Result.ReplyFrom.Data.ArrayMax = 0;
    local_f8.StartTime = 0.0;
    local_f8.TimeoutDuration = 0.0;
    if (&local_f8 != pFVar9) {
      uVar3 = (pFVar9->Address).Data.ArrayNum;
      _Src = (pFVar9->Address).Data.AllocatorInstance.Data;
      local_f8.Address.Data.ArrayMax = 0;
      local_f8.Address.Data.ArrayNum = uVar3;
      if (uVar3 == 0) {
        local_f8.Address.Data.ArrayNum = 0;
        local_f8.Address.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar3,0,(ForAnyElementType *)&local_f8,uVar3,&local_f8.Address.Data.ArrayMax)
        ;
        if (uVar3 != 0) {
          memcpy(local_f8.Address.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar3 * 2);
        }
      }
    }
    local_f8.Port = pFVar9->Port;
    local_f8.TimeoutDuration = (double)this->Timeout;
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.EchoId = (ushort)iVar13;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    bVar6 = ResolveIp(this->SocketSubsystem,&pFVar9->Address,&local_110);
    _Src_00.Data = local_110.Data.AllocatorInstance.Data;
    if (bVar6) {
      iVar4 = local_110.Data.ArrayNum;
      lVar10 = (longlong)local_110.Data.ArrayNum;
      iVar11 = local_110.Data.ArrayNum + -1;
      if (local_110.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      ::FString::AssignRange
                (&local_f8.Result.ResolvedAddress,(wchar_t *)local_110.Data.AllocatorInstance.Data,
                 iVar11);
      local_128.Data.ArrayNum = iVar4;
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar4 == 0) {
        local_128.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar4,0,(ForAnyElementType *)&local_128,iVar4,&local_128.Data.ArrayMax);
        memcpy(local_128.Data.AllocatorInstance.Data,_Src_00.Data,lVar10 * 2);
      }
      local_68 = &local_128;
      local_60 = &local_f8;
      pTVar8 = (TPairInitializer<FUdpPingWorker::FProgressKey_const_&,FUdpPingWorker::FProgress_const_&>
                *)&stack0x00000020;
      ppFVar12 = &local_68;
    }
    else {
      local_f8.Result.Status = Unresolvable;
      ::FString::FString(&local_128,&pFVar9->Address);
      local_58 = &local_128;
      ppFVar12 = &local_58;
      local_50 = &local_f8;
      pTVar8 = &local_78;
    }
    local_118 = iVar13;
    TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FUdpPingWorker::FProgressKey_const_&,FUdpPingWorker::FProgress_const_&>_>
              ((TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
                *)&this->ProgressTable,pTVar8,(bool *)ppFVar12);
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    if (_Src_00.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src_00.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.ToAddr.SharedReferenceCount.ReferenceController);
    if (local_f8.Result.ReplyFrom.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Result.ReplyFrom.Data.AllocatorInstance.Data);
    }
    if (local_f8.Result.ResolvedAddress.Data.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Result.ResolvedAddress.Data.AllocatorInstance.Data);
    }
    if (local_f8.Address.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Address.Data.AllocatorInstance.Data);
    }
    uVar7 = (ulonglong)uVar2;
    pFVar9 = (FProgress *)&pFVar9->StartTime;
  }
  return true;
}

// IsCanceled @ 144557800

bool __thiscall FUdpPingWorker::IsCanceled(FUdpPingWorker *this)

{
  return this->bCancelOperation;
}

// NextSequenceNum @ 144557a30

int __cdecl FUdpPingWorker::NextSequenceNum(void)

{
  int iVar1;
  
  iVar1 = SequenceNum;
  SequenceNum = SequenceNum + 1;
  return iVar1;
}

// ProcessReply @ 144557ac0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

FProgress * __cdecl
FUdpPingWorker::ProcessReply
          (FInternetAddr *param_1,uchar *param_2,uint param_3,ulong64 param_4,
          TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
          *param_5)

{
  code *pcVar1;
  double dVar2;
  TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
  *pTVar3;
  bool bVar4;
  u_short uVar5;
  u_short uVar6;
  u_short uVar7;
  u_long uVar8;
  u_long uVar9;
  FProgress *pFVar10;
  FString *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  FProgress *pFVar15;
  EIcmpResponseStatus EVar16;
  longlong lVar17;
  float fVar18;
  u_short local_98;
  u_short uStack_96;
  u_short uStack_94;
  u_long local_80;
  FProgressKey local_78;
  u_long local_60;
  FInternetAddr *local_58;
  TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
  *local_50;
  void *local_48 [2];
  
  local_50 = (TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
              *)param_5;
  if ((param_2 == (uchar *)0x0) || (param_3 < 0x16)) {
    lVar17 = 0;
    uStack_94 = 0;
    uStack_96 = 0;
    local_98 = 0;
    local_60 = 0;
    local_80 = 0;
  }
  else {
    local_80 = *(u_long *)(param_2 + 0xe);
    uStack_94 = *(u_short *)(param_2 + 4);
    local_98 = *(u_short *)param_2;
    uStack_96 = *(u_short *)(param_2 + 2);
    lVar17 = *(longlong *)(param_2 + 6);
    local_60 = *(u_long *)(param_2 + 0x12);
  }
  local_58 = param_1;
  uVar5 = ntohs(local_98);
  uVar6 = ntohs(uStack_96);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < `NtoHLL'::`2'::_TSS0) &&
     (_Init_thread_header(&`NtoHLL'::`2'::_TSS0), `NtoHLL'::`2'::_TSS0 == -1)) {
    uVar8 = ntohl(1);
    `NtoHLL'::`2'::bNoConvert = uVar8 == 1;
    _Init_thread_footer(&`NtoHLL'::`2'::_TSS0);
  }
  if (`NtoHLL'::`2'::bNoConvert == false) {
    uVar8 = ntohl((u_long)lVar17);
    uVar9 = ntohl((u_long)((ulonglong)lVar17 >> 0x20));
    lVar17 = CONCAT44(uVar8,uVar9);
  }
  uVar8 = ntohl(local_80);
  uVar9 = ntohl(local_60);
  uVar7 = ntohs(uStack_94);
  if ((param_2 == (uchar *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PingPacketBuf",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                         ,0x4a6,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar10 = (FProgress *)(*pcVar1)();
    return pFVar10;
  }
  if ((param_3 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                         ,0x4a7,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar10 = (FProgress *)(*pcVar1)();
    return pFVar10;
  }
  uVar13 = (uint)*(ushort *)(param_2 + 0x14) + (uint)*(ushort *)(param_2 + 0x12) +
           (uint)*(ushort *)(param_2 + 0x10) + (uint)*(ushort *)(param_2 + 0xe) +
           (uint)*(ushort *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 10) +
           (uint)*(ushort *)(param_2 + 8) + (uint)*(ushort *)(param_2 + 6) +
           (uint)*(ushort *)(param_2 + 2) + (uint)*(ushort *)param_2;
  iVar14 = (uVar13 & 0xffff) + (uVar13 >> 0x10);
  if (uVar7 != (u_short)~((short)((uint)iVar14 >> 0x10) + (short)iVar14)) {
    if (5 < (byte)LogPing._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
    }
    return (FProgress *)0x0;
  }
  pFVar11 = (FString *)(**(code **)((longlong)*local_58 + 0x80))(local_58,local_48,0);
  ::FString::FString(&local_78.Address,pFVar11);
  local_78.UniqueId = (uint)uVar5;
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  uVar13 = ::GetTypeHash(&local_78);
  pTVar3 = local_50;
  iVar14 = TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FUdpPingWorker::FProgressKey>(local_50,uVar13,&local_78);
  pFVar10 = (FProgress *)0x0;
  EVar16 = Success;
  if (iVar14 != -1) {
    lVar12 = (longlong)iVar14 * 0x98 + *(longlong *)&pTVar3->Elements;
    pFVar15 = (FProgress *)(lVar12 + 0x18);
    if (lVar12 == 0) {
      pFVar15 = pFVar10;
    }
    if (pFVar15 != (FProgress *)0x0) {
      iVar14 = (pFVar15->Result).ResolvedAddress.Data.ArrayNum;
      if (local_78.Address.Data.ArrayNum == iVar14) {
        if (1 < local_78.Address.Data.ArrayNum) {
          iVar14 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_78.Address.Data.AllocatorInstance.Data,
                              (wchar_t *)
                              (pFVar15->Result).ResolvedAddress.Data.AllocatorInstance.Data);
          bVar4 = iVar14 == 0;
          goto LAB_144557d58;
        }
      }
      else {
        bVar4 = iVar14 + local_78.Address.Data.ArrayNum == 1;
LAB_144557d58:
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("LookupKey.Address == Result.ResolvedAddress",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                               ,0x371,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          pFVar10 = (FProgress *)(*pcVar1)();
          return pFVar10;
        }
      }
      iVar14 = (pFVar15->Result).ResolvedAddress.Data.ArrayNum;
      if (local_78.Address.Data.ArrayNum == iVar14) {
        if (1 < local_78.Address.Data.ArrayNum) {
          iVar14 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)local_78.Address.Data.AllocatorInstance.Data,
                              (wchar_t *)
                              (pFVar15->Result).ResolvedAddress.Data.AllocatorInstance.Data);
          bVar4 = iVar14 == 0;
          goto LAB_144557dae;
        }
      }
      else {
        bVar4 = iVar14 + local_78.Address.Data.ArrayNum == 1;
LAB_144557dae:
        if (!bVar4) {
          if (5 < (byte)LogPing._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
          }
          goto LAB_144557fa4;
        }
      }
      if ((pFVar15->Result).Status == InternalError) {
        if ((((uVar5 == pFVar15->EchoId) && (uVar6 == pFVar15->SequenceNum)) &&
            (uVar8 == 0xaaaaaaaa)) && ((uVar9 == 0xbbbbbbbb && (lVar17 != 0)))) {
          ::FString::operator=(&(pFVar15->Result).ReplyFrom,&local_78.Address);
          dVar2 = (double)(param_4 - lVar17) * FGenericPlatformTime::SecondsPerCycle64;
          if ((dVar2 <= 0.0) || (__real_40ed4c0000000000 <= dVar2)) {
            EVar16 = InternalError;
            fVar18 = __real_bf800000;
          }
          else {
            fVar18 = (float)dVar2;
          }
          (pFVar15->Result).Time = fVar18;
          (pFVar15->Result).Status = EVar16;
          pFVar10 = pFVar15;
          if ((6 < (byte)LogPing._0_1_) &&
             (UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing),
             6 < (byte)LogPing._0_1_)) {
            UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
          }
        }
        else if (5 < (byte)LogPing._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
        }
      }
      goto LAB_144557fa4;
    }
  }
  if (5 < (byte)LogPing._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
  }
LAB_144557fa4:
  if (local_78.Address.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Address.Data.AllocatorInstance.Data);
  }
  return pFVar10;
}

// RecvReplyFrom @ 144558020

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FUdpPingWorker::RecvReplyFrom
          (FSocket *param_1,uchar *param_2,uint param_3,FInternetAddr *param_4,ulong64 *param_5)

{
  char cVar1;
  LARGE_INTEGER local_res8;
  uint local_res18 [4];
  
  memset(param_2,0,(ulonglong)param_3);
  local_res18[0] = 0;
  cVar1 = (**(code **)(param_1->_padding_ + 0x68))(param_1,param_2,param_3,local_res18,param_4,0);
  if (cVar1 != '\0') {
    QueryPerformanceCounter(&local_res8);
    *param_5 = (ulong64)local_res8;
  }
  if (6 < (byte)LogPing._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
  }
  if ((cVar1 != '\0') && (local_res18[0] == param_3)) {
    return true;
  }
  return false;
}

// ResetSequenceNum @ 144558430

void __cdecl FUdpPingWorker::ResetSequenceNum(void)

{
  SequenceNum = 0;
  return;
}

// Run @ 144558780

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall FUdpPingWorker::Run(FUdpPingWorker *this)

{
  longlong *plVar1;
  bool bVar2;
  FStaticBasicLogRecord *pFVar3;
  char cVar4;
  FReadAccessScope local_28;
  
  if (this->SocketSubsystem == (ISocketSubsystem *)0x0) {
    if (2 < (byte)LogPing._0_1_) {
      pFVar3 = &::LOG_Static;
LAB_1445587a7:
      UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogPing);
    }
  }
  else if ((this->Targets).ArrayNum == 0) {
    if (2 < (byte)LogPing._0_1_) {
      pFVar3 = &::LOG_Static;
      goto LAB_1445587a7;
    }
  }
  else {
    bVar2 = InitProgressTable(this,&this->Targets);
    if (bVar2) {
      if (this->bCancelOperation == false) {
        bVar2 = SendPings(this,this->SocketSubsystem);
        if (bVar2) {
          bVar2 = true;
          goto LAB_1445587ae;
        }
      }
    }
    else if (2 < (byte)LogPing._0_1_) {
      pFVar3 = &::LOG_Static;
      goto LAB_1445587a7;
    }
  }
  bVar2 = false;
LAB_1445587ae:
  if (this->bCancelOperation == false) {
    cVar4 = !bVar2 + '\x01';
  }
  else {
    cVar4 = '\x03';
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->CompletionDelegate,
             &local_28);
  if ((*(int *)&(this->CompletionDelegate).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->CompletionDelegate).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,cVar4);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return 0;
}

// SendPing @ 144558c90

/* WARNING: Enum "Type": Some values do not have unique names */

ESendStatus __thiscall
FUdpPingWorker::SendPing
          (FUdpPingWorker *this,ISocketSubsystem *param_1,uchar *param_2,uint param_3,
          FProgress *param_4)

{
  TSharedPtr<FInternetAddr,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInternetAddr *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  ESendStatus EVar7;
  FName *pFVar8;
  FSocket *pFVar9;
  wchar_t *pwVar10;
  char local_a8 [8];
  FInternetAddr *local_a0;
  TReferenceControllerBase<1> *local_98;
  FInternetAddr *local_90;
  FSharedReferencer<1> local_88;
  ushort local_80;
  ushort uStack_7e;
  undefined4 uStack_7c;
  LARGE_INTEGER LStack_78;
  uint local_70;
  uint uStack_6c;
  LARGE_INTEGER local_68;
  uchar *local_60;
  undefined1 local_58 [8];
  FUdpPingPacket local_50;
  
  if ((param_4->Result).Status == Unresolvable) {
    return NoTarget;
  }
  pTVar1 = &param_4->ToAddr;
  local_60 = param_2;
  if ((param_4->ToAddr).Object == (FInternetAddr *)0x0) {
    (**(code **)(param_1->_padding_ + 0x90))(param_1,&local_a0);
    local_a8[0] = '\0';
    if ((param_4->Result).ResolvedAddress.Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_4->Result).ResolvedAddress.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*local_a0 + 0x10))(local_a0,pwVar10,local_a8);
    if (local_a8[0] == '\0') {
      if (5 < (byte)LogPing._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
      }
      (param_4->Result).Status = Unresolvable;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
      return BadTarget;
    }
    (**(code **)((longlong)*local_a0 + 0x28))(local_a0,param_4->Port);
    local_90 = local_a0;
    local_88.ReferenceController = local_98;
    if (local_98 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_98->SharedReferenceCount = (atomic<int>)((int)local_98->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FInternetAddr,1> *)&local_90) {
      pTVar1->Object = local_a0;
      local_90 = (FInternetAddr *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_4->ToAddr).SharedReferenceCount,&local_88);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_98);
  }
  if ((pTVar1->Object == (FInternetAddr *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Progress.ToAddr.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                         ,0x2e5,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar7 = (*pcVar4)();
    return EVar7;
  }
  pTVar2 = (param_4->ToAddr).SharedReferenceCount.ReferenceController;
  pFVar3 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = param_4->SocketPtr;
  if (pFVar9 == (FSocket *)0x0) {
    if ((pFVar3 == (FInternetAddr *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    pFVar8 = (FName *)(**(code **)((longlong)*pFVar3 + 0xa8))(pFVar3,local_58);
    pFVar9 = GetOrCreateSocket(this,pFVar8);
    if (pFVar9 == (FSocket *)0x0) {
      if (5 < (byte)LogPing._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
      }
      EVar7 = NoSocket;
      goto LAB_144558f5a;
    }
    param_4->SocketPtr = pFVar9;
  }
  cVar6 = (**(code **)(pFVar9->_padding_ + 0x80))(pFVar9,1,SendWaitTime.Ticks);
  if (cVar6 == '\0') {
    EVar7 = Busy;
  }
  else {
    uStack_7e = (ushort)SequenceNum;
    uStack_7c = 0;
    local_70 = 0xaaaaaaaa;
    SequenceNum = SequenceNum + 1;
    uStack_6c = 0xbbbbbbbb;
    local_80 = param_4->EchoId;
    param_4->SequenceNum = uStack_7e;
    QueryPerformanceCounter(&local_68);
    local_50.Body.Data[1] = uStack_6c;
    local_50.Body.Data[0] = local_70;
    LStack_78 = local_68;
    local_50.Header.Sequence = uStack_7e;
    local_50.Header.Id = local_80;
    local_50._4_4_ = uStack_7c;
    local_50.Body.TimeCode = (ulong64)local_68;
    if ((pFVar3 == (FInternetAddr *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    EVar7 = SendPing(pFVar9,local_60,param_3,pFVar3,&local_50,&param_4->StartTime);
  }
LAB_144558f5a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return EVar7;
}

// SendPing @ 144558fa0

/* WARNING: Enum "Type": Some values do not have unique names */

ESendStatus __cdecl
FUdpPingWorker::SendPing
          (FSocket *param_1,uchar *param_2,uint param_3,FInternetAddr *param_4,
          FUdpPingPacket *param_5,double *param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  u_short uVar5;
  ESendStatus EVar6;
  u_long uVar7;
  u_long uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulong64 uVar12;
  undefined4 in_register_00000084;
  int local_res18 [4];
  LARGE_INTEGER local_68;
  void *local_60 [2];
  void *local_50 [5];
  
  if (6 < (byte)LogPing._0_1_) {
    (**(code **)((longlong)*param_4 + 0x80))
              (param_4,local_60,CONCAT71((int7)(CONCAT44(in_register_00000084,param_3) >> 8),1));
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
    if (local_60[0] != (void *)0x0) {
      FMemory::Free(local_60[0]);
    }
  }
  if (param_3 < 0x16) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufSize >= SendDataSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\ICMP\\Private\\UDPPing.cpp"
                       ,0x30d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar6 = (*pcVar2)();
      return EVar6;
    }
    EVar6 = BadBuffer;
  }
  else {
    uVar5 = htons((param_5->Header).Id);
    (param_5->Header).Id = uVar5;
    uVar5 = htons((param_5->Header).Sequence);
    uVar9 = (ulonglong)_tls_index;
    (param_5->Header).Sequence = uVar5;
    uVar12 = (param_5->Body).TimeCode;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) <
         `HtoNLL'::`2'::_TSS0) &&
       (_Init_thread_header(&`HtoNLL'::`2'::_TSS0), `HtoNLL'::`2'::_TSS0 == -1)) {
      uVar7 = htonl(1);
      `HtoNLL'::`2'::bNoConvert = uVar7 == 1;
      _Init_thread_footer(&`HtoNLL'::`2'::_TSS0);
    }
    if (`HtoNLL'::`2'::bNoConvert == false) {
      uVar7 = htonl((u_long)uVar12);
      uVar8 = htonl((u_long)(uVar12 >> 0x20));
      uVar12 = CONCAT44(uVar7,uVar8);
    }
    (param_5->Body).TimeCode = uVar12;
    uVar8 = htonl((param_5->Body).Data[0]);
    uVar7 = (param_5->Body).Data[1];
    (param_5->Body).Data[0] = uVar8;
    uVar7 = htonl(uVar7);
    (param_5->Body).Data[1] = uVar7;
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    if (param_2 != (uchar *)0x0) {
      *(ushort *)param_2 = (param_5->Header).Id;
      *(ushort *)(param_2 + 2) = (param_5->Header).Sequence;
      *(ushort *)(param_2 + 4) = (param_5->Header).Checksum;
      *(ulong64 *)(param_2 + 6) = (param_5->Body).TimeCode;
      *(uint *)(param_2 + 0xe) = (param_5->Body).Data[0];
      *(uint *)(param_2 + 0x12) = (param_5->Body).Data[1];
    }
    param_2[4] = '\0';
    param_2[5] = '\0';
    uVar10 = (uint)*(ushort *)(param_2 + 0x14) + (uint)*(ushort *)(param_2 + 0x12) +
             (uint)*(ushort *)(param_2 + 0x10) + (uint)*(ushort *)(param_2 + 0xe) +
             (uint)*(ushort *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 10) +
             (uint)*(ushort *)(param_2 + 8) + (uint)*(ushort *)param_2 +
             (uint)*(ushort *)(param_2 + 2) + (uint)*(ushort *)(param_2 + 6);
    iVar11 = (uVar10 & 0xffff) + (uVar10 >> 0x10);
    uVar5 = htons(~((short)((uint)iVar11 >> 0x10) + (short)iVar11));
    local_res18[0] = 0;
    *(u_short *)(param_2 + 4) = uVar5;
    QueryPerformanceCounter(&local_68);
    lVar1 = param_1->_padding_;
    *param_6 = (double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
    cVar4 = (**(code **)(lVar1 + 0x58))(param_1,param_2,0x16,local_res18,param_4);
    if (cVar4 == '\0') {
      if (5 < (byte)LogPing._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
      }
      EVar6 = SocketSendFail;
    }
    else if (local_res18[0] == 0x16) {
      if (6 < (byte)LogPing._0_1_) {
        ntohs(*(u_short *)(param_2 + 4));
        ntohs((param_5->Header).Sequence);
        ntohs((param_5->Header).Id);
        ntohs((param_5->Header).Id);
        (**(code **)((longlong)*param_4 + 0x80))(param_4,local_50,1);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
        if (local_50[0] != (void *)0x0) {
          FMemory::Free(local_50[0]);
        }
      }
      EVar6 = Ok;
    }
    else {
      if (5 < (byte)LogPing._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
      }
      EVar6 = BadSendSize;
    }
  }
  return EVar6;
}

// SendPings @ 144559360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FUdpPingWorker::SendPings(FUdpPingWorker *this,ISocketSubsystem *param_1)

{
  TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
  *pTVar1;
  TMap<FName,FSocket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>_> *pTVar2
  ;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  LARGE_INTEGER LVar12;
  ISocketSubsystem *pIVar13;
  FUdpPingWorker *pFVar14;
  bool bVar15;
  undefined1 uVar16;
  char cVar17;
  bool bVar18;
  uint uVar19;
  int iVar20;
  ESendStatus EVar21;
  FProgress *pFVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  uint *puVar30;
  uint *puVar31;
  LARGE_INTEGER LVar32;
  longlong lVar33;
  undefined1 auStackY_418 [32];
  int local_3d4;
  undefined1 local_3d0;
  undefined1 local_3cf [3];
  int local_3cc;
  uint local_3c8;
  LARGE_INTEGER local_3c0;
  TMap<FName,FSocket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>_>
  *local_3b8;
  int iStack_3b0;
  uint uStack_3ac;
  undefined1 *local_3a8;
  undefined4 uStack_3a0;
  int iStack_39c;
  int local_398;
  undefined4 uStack_394;
  int iStack_390;
  undefined4 uStack_38c;
  EIcmpResponseStatus local_388;
  FString local_380;
  FString local_370;
  float local_360;
  FString local_358;
  int local_348;
  undefined4 local_340;
  FString local_338;
  FString local_328;
  undefined4 local_318;
  FString local_310;
  undefined4 local_300;
  longlong *local_2f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f0;
  TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
  *pTStack_2d0;
  TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
  *local_2c8;
  undefined2 local_2c0;
  ISocketSubsystem *local_2b8;
  FInternetAddr *local_2b0;
  TReferenceControllerBase<1> *local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  LARGE_INTEGER local_290;
  LARGE_INTEGER local_288;
  LARGE_INTEGER local_280;
  LARGE_INTEGER local_278;
  LARGE_INTEGER local_270;
  FUdpPingWorker *local_268;
  TMap<FName,FSocket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>_>
  *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  undefined8 uStack_238;
  TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
  *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  FString local_200;
  int local_1f0;
  FString local_1e8;
  undefined4 local_1d8;
  undefined4 local_1d0 [2];
  FScriptContainerElement *local_1c8;
  int local_1c0;
  int local_1bc;
  FScriptContainerElement *local_1b8;
  int local_1b0;
  int local_1ac;
  undefined4 local_1a8;
  FScriptContainerElement *local_1a0;
  int local_198;
  int local_194;
  undefined4 local_190;
  EIcmpResponseStatus local_188 [2];
  FScriptContainerElement *local_180;
  int local_178;
  int local_174;
  FScriptContainerElement *local_170;
  int local_168;
  int local_164;
  float local_160;
  FScriptContainerElement *local_158;
  int local_150;
  int local_14c;
  int local_148;
  FReadAccessScope local_140;
  FReadAccessScope local_128;
  void *local_110 [2];
  TIterator local_100;
  undefined4 local_b4;
  undefined4 local_94;
  uchar local_90 [24];
  uchar local_78 [24];
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pTVar1 = &this->ProgressTable;
  local_2b8 = param_1;
  local_268 = this;
  if (*(int *)&(this->ProgressTable).field_0x8 == *(int *)&(this->ProgressTable).field_0x34) {
    if (2 < (byte)LogPing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
    }
    bVar18 = false;
  }
  else {
    TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_100,
               (TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
                *)pTVar1);
    local_78[0x10] = '\0';
    local_78[0x11] = '\0';
    local_78[0x12] = '\0';
    local_78[0x13] = '\0';
    local_2f8 = (longlong *)local_100._padding_;
    TStack_2f0._padding_ = local_100._padding_;
    LVar32.QuadPart = 0;
    local_78[0x14] = '\0';
    local_78[0x15] = '\0';
    local_90[0x10] = '\0';
    local_90[0x11] = '\0';
    local_90[0x12] = '\0';
    local_90[0x13] = '\0';
    local_90[0x14] = '\0';
    local_90[0x15] = '\0';
    TStack_2f0._24_8_ = local_100._padding_;
    pTStack_2d0 = local_100.Set;
    local_78[0] = '\0';
    local_78[1] = '\0';
    local_78[2] = '\0';
    local_78[3] = '\0';
    local_78[4] = '\0';
    local_78[5] = '\0';
    local_78[6] = '\0';
    local_78[7] = '\0';
    local_78[8] = '\0';
    local_78[9] = '\0';
    local_78[10] = '\0';
    local_78[0xb] = '\0';
    local_78[0xc] = '\0';
    local_78[0xd] = '\0';
    local_78[0xe] = '\0';
    local_78[0xf] = '\0';
    local_90[0] = '\0';
    local_90[1] = '\0';
    local_90[2] = '\0';
    local_90[3] = '\0';
    local_90[4] = '\0';
    local_90[5] = '\0';
    local_90[6] = '\0';
    local_90[7] = '\0';
    local_90[8] = '\0';
    local_90[9] = '\0';
    local_90[10] = '\0';
    local_90[0xb] = '\0';
    local_90[0xc] = '\0';
    local_90[0xd] = '\0';
    local_90[0xe] = '\0';
    local_90[0xf] = '\0';
    local_2c0 = 0;
    TStack_2f0.Array._0_4_ = (undefined4)local_100._padding_;
    TStack_2f0.Array._4_4_ = local_100._padding_._4_4_;
    TStack_2f0.UnvisitedBitMask = (uint)local_100._padding_;
    TStack_2f0.CurrentBitIndex = local_100._padding_._4_4_;
    local_2c8 = (TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
                 *)pTVar1;
    (**(code **)(param_1->_padding_ + 0x90))(param_1);
    this->NumAwaitingReplies = 0;
    this->NumValidRepliesReceived = 0;
    QueryPerformanceCounter(&local_290);
    dVar11 = __real_4082c00000000000;
    dVar10 = __real_408f400000000000;
    local_3c0 = local_290;
    bVar18 = false;
    local_3d4 = -1;
    do {
      do {
        uVar19 = 1;
        if (this->bCancelOperation != false) goto LAB_144559cef;
        local_3a8 = &(this->SocketTable).field_0x10;
        iStack_3b0 = 0;
        iVar20 = *(int *)&(this->SocketTable).field_0x28;
        local_3b8 = &this->SocketTable;
        local_398 = 0;
        iStack_39c = 0;
        if (iVar20 != 0) {
          puVar31 = *(uint **)&(this->SocketTable).field_0x20;
          puVar30 = (uint *)local_3a8;
          if (puVar31 != (uint *)0x0) {
            puVar30 = puVar31;
          }
          uVar27 = *puVar30;
          while (uVar27 == 0) {
            lVar23 = (longlong)iStack_3b0;
            local_398 = local_398 + 0x20;
            iStack_3b0 = iStack_3b0 + 1;
            iStack_39c = iVar20;
            if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3b0)
            goto LAB_14455954e;
            uVar27 = puVar30[lVar23 + 1];
          }
          uVar19 = -uVar27 & uVar27;
          uVar3 = (ulonglong)uVar19 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_2a0 = (int)lVar23;
          iStack_39c = local_398 + -1 + local_2a0;
          if (iVar20 < iStack_39c) {
            iStack_39c = iVar20;
          }
        }
LAB_14455954e:
        uStack_394 = local_b4;
        iStack_390 = *(int *)&(this->SocketTable).field_0x8 -
                     *(int *)&(this->SocketTable).field_0x34;
        uVar27 = *(uint *)&(this->SocketTable).field_0x28;
        TStack_258._padding_ = CONCAT44(uVar19,iStack_3b0);
        uStack_3a0 = 0xffffffff;
        TStack_258.CurrentBitIndex = iStack_39c;
        TStack_258.UnvisitedBitMask = 0xffffffff;
        iVar24 = (int)uVar27 >> 5;
        uVar26 = uVar27 & 0xffffffe0;
        TStack_258._28_4_ = local_b4;
        TStack_258.BaseBitIndex = local_398;
        uStack_238 = CONCAT44(uStack_38c,iStack_390);
        uStack_3ac = uVar19;
        local_260 = local_3b8;
        TStack_258.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3a8;
        if ((((int)uVar27 < 0) || (iVar20 < (int)uVar27)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar15)) {
          pcVar8 = (code *)swi(3);
          uVar16 = (*pcVar8)();
          return (bool)uVar16;
        }
        uVar19 = *(uint *)&(this->SocketTable).field_0x28;
        if (uVar27 != uVar19) {
          puVar5 = *(undefined1 **)&(this->SocketTable).field_0x20;
          puVar28 = &(this->SocketTable).field_0x10;
          if (puVar5 != (undefined1 *)0x0) {
            puVar28 = puVar5;
          }
          uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar28 + (longlong)iVar24 * 4);
          while (uVar27 == 0) {
            lVar23 = (longlong)iVar24;
            uVar26 = uVar26 + 0x20;
            iVar24 = iVar24 + 1;
            uVar27 = uVar19;
            if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
            goto LAB_144559680;
            uVar27 = *(uint *)(puVar28 + lVar23 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
          lVar23 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_29c = (int)lVar23;
          uVar27 = local_29c + -1 + uVar26;
          if ((int)uVar19 < (int)uVar27) {
            uVar27 = uVar19;
          }
        }
LAB_144559680:
        pTVar2 = local_260;
        if (*(int *)&local_260->field_0x8 - *(int *)&local_260->field_0x34 != (int)uStack_238) {
          local_3d0 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FSocket_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d0);
        }
        if (((TStack_258.CurrentBitIndex != uVar27) ||
            (TStack_258.Array !=
             (TBitArray<FDefaultBitArrayAllocator> *)&(this->SocketTable).field_0x10)) ||
           (pTVar2 != &this->SocketTable)) {
          bVar15 = this->bCancelOperation == false;
          if (!bVar15) goto LAB_144559a9c;
          plVar6 = *(longlong **)
                    (*(longlong *)pTVar2 + 8 + (longlong)TStack_258.CurrentBitIndex * 0x18);
          if (((plVar6 != (longlong *)0x0) &&
              (cVar17 = (**(code **)(*plVar6 + 0x80))(plVar6), cVar17 != '\0')) &&
             (this->bCancelOperation == false)) {
            while( true ) {
              local_3c8 = 0;
              cVar17 = (**(code **)(*plVar6 + 0x40))(plVar6);
              if ((cVar17 == '\0') || (local_3c8 < 0x16)) goto LAB_144559a41;
              local_90[0x10] = '\0';
              local_90[0x11] = '\0';
              local_90[0x12] = '\0';
              local_90[0x13] = '\0';
              local_90[0] = '\0';
              local_90[1] = '\0';
              local_90[2] = '\0';
              local_90[3] = '\0';
              local_90[4] = '\0';
              local_90[5] = '\0';
              local_90[6] = '\0';
              local_90[7] = '\0';
              local_90[8] = '\0';
              local_90[9] = '\0';
              local_90[10] = '\0';
              local_90[0xb] = '\0';
              local_90[0xc] = '\0';
              local_90[0xd] = '\0';
              local_90[0xe] = '\0';
              local_90[0xf] = '\0';
              local_90[0x14] = '\0';
              local_90[0x15] = '\0';
              local_3cc = 0;
              cVar17 = (**(code **)(*plVar6 + 0x68))(plVar6);
              if (cVar17 != '\0') {
                QueryPerformanceCounter(&local_288);
                LVar32 = local_288;
              }
              if (6 < (byte)LogPing._0_1_) {
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
              }
              if ((cVar17 == '\0') || (local_3cc != 0x16)) break;
              if (6 < (byte)LogPing._0_1_) {
                (**(code **)((longlong)*local_2b0 + 0x80))(local_2b0,local_110,0);
                UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
                if (local_110[0] != (void *)0x0) {
                  FMemory::Free(local_110[0]);
                }
              }
              pFVar22 = ProcessReply(local_2b0,local_90,0x16,LVar32.QuadPart,pTVar1);
              if (pFVar22 != (FProgress *)0x0) {
                pFVar22->SocketPtr = (FSocket *)0x0;
                iVar20 = pFVar22->Port;
                ::FString::FString(&local_200,&pFVar22->Address);
                local_388 = (pFVar22->Result).Status;
                local_1f0 = iVar20;
                ::FString::FString(&local_380,&(pFVar22->Result).ResolvedAddress);
                ::FString::FString(&local_370,&(pFVar22->Result).ReplyFrom);
                local_360 = (pFVar22->Result).Time;
                ::FString::FString(&local_358,&local_200);
                local_348 = local_1f0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                           &this->GotResultDelegate,&local_140);
                if ((*(int *)&(this->GotResultDelegate).field_0x10 == 0) ||
                   (plVar7 = *(longlong **)&(this->GotResultDelegate).field_0x8,
                   plVar7 == (longlong *)0x0)) {
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                  ~FReadAccessScope(&local_140);
                  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.Data.AllocatorInstance.Data);
                  }
                  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_370.Data.AllocatorInstance.Data);
                  }
                  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_380.Data.AllocatorInstance.Data);
                  }
                }
                else {
                  local_160 = local_360;
                  local_188[0] = local_388;
                  local_180 = local_380.Data.AllocatorInstance.Data;
                  local_178 = local_380.Data.ArrayNum;
                  local_174 = local_380.Data.ArrayMax;
                  local_170 = local_370.Data.AllocatorInstance.Data;
                  local_168 = local_370.Data.ArrayNum;
                  local_164 = local_370.Data.ArrayMax;
                  local_158 = local_358.Data.AllocatorInstance.Data;
                  local_150 = local_358.Data.ArrayNum;
                  local_14c = local_358.Data.ArrayMax;
                  local_148 = local_348;
                  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_380.Data.ArrayNum = 0;
                  local_380.Data.ArrayMax = 0;
                  local_370.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_370.Data.ArrayNum = 0;
                  local_370.Data.ArrayMax = 0;
                  local_358.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_358.Data.ArrayNum = 0;
                  local_358.Data.ArrayMax = 0;
                  (**(code **)(*plVar7 + 0x68))(plVar7,local_188);
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
                  ~FReadAccessScope(&local_140);
                  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_358.Data.AllocatorInstance.Data);
                  }
                  if (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_370.Data.AllocatorInstance.Data);
                  }
                  if (local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_380.Data.AllocatorInstance.Data);
                  }
                }
                this->NumValidRepliesReceived = this->NumValidRepliesReceived + 1;
                if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_200.Data.AllocatorInstance.Data);
                }
              }
            }
            if (5 < (byte)LogPing._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
            }
LAB_144559a41:
            iVar20 = (**(code **)(local_2b8->_padding_ + 0xb8))();
            if ((iVar20 != 0) && (5 < (byte)LogPing._0_1_)) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
            }
          }
          TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
          goto LAB_144559680;
        }
        bVar15 = this->bCancelOperation == false;
LAB_144559a9c:
        bVar9 = true;
      } while (!bVar15);
      iVar20 = *(int *)(CONCAT44(TStack_2f0.Array._4_4_,TStack_2f0.Array._0_4_) + 0x18);
      iVar24 = CheckAwaitReplies(this);
      this->NumAwaitingReplies = iVar24;
      if ((TStack_2f0.CurrentBitIndex < iVar20) || (iVar24 != 0)) {
        bVar9 = false;
      }
      if (TStack_2f0.CurrentBitIndex < iVar20) {
        QueryPerformanceCounter(&local_280);
        LVar12 = local_3c0;
        if (dVar11 < (double)(ulonglong)(local_280.QuadPart - (longlong)local_3c0) *
                     FGenericPlatformTime::SecondsPerCycle64) {
          if (2 < (byte)LogPing._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
          }
          this->bCancelOperation = true;
          break;
        }
        QueryPerformanceCounter(&local_278);
        if (((!bVar18) ||
            (this->MinPingSendWaitTimeMs <=
             (double)(ulonglong)(local_278.QuadPart - (longlong)LVar12) *
             FGenericPlatformTime::SecondsPerCycle64 * dVar10)) || (local_3d4 < 0)) {
          if ((0 < local_3d4) && (6 < (byte)LogPing._0_1_)) {
            UE::Logging::Private::BasicLog<7>
                      ((FStaticBasicLogRecord *)&PTR_u_SendPings__paus_150d6d2f8,
                       (FLogCategoryBase *)&LogPing);
          }
          pIVar13 = local_2b8;
          lVar25 = (longlong)TStack_2f0.CurrentBitIndex * 0x98;
          lVar23 = *local_2f8;
          EVar21 = SendPing(this,local_2b8,local_78,0x16,(FProgress *)(lVar23 + 0x18 + lVar25));
          local_3d4 = 0;
          bVar18 = false;
          if (EVar21 == Ok) {
            bVar18 = true;
            QueryPerformanceCounter(&local_270);
            local_3c0 = local_270;
          }
          else if (EVar21 != NoTarget) {
            if (EVar21 == Busy) {
              iVar20 = (**(code **)(pIVar13->_padding_ + 0xb8))(pIVar13);
              if ((iVar20 == 0) || (iVar20 - 7U < 2)) goto LAB_144559cb5;
              if (5 < (byte)LogPing._0_1_) {
                UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
              }
            }
            else if (5 < (byte)LogPing._0_1_) {
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
              *(undefined4 *)(lVar25 + 0x48 + lVar23) = 3;
              goto LAB_144559ca4;
            }
            *(undefined4 *)(lVar25 + 0x48 + lVar23) = 3;
          }
LAB_144559ca4:
          TStack_2f0.UnvisitedBitMask = TStack_2f0.UnvisitedBitMask & ~TStack_2f0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f0);
        }
        else {
          local_3d4 = local_3d4 + 1;
        }
      }
LAB_144559cb5:
    } while (!bVar9);
LAB_144559cef:
    uVar19 = 1;
    DestroySockets(this);
    pTVar2 = &this->SocketTable;
    bVar18 = 1 < *(int *)&(this->SocketTable).field_0x48;
    if (!bVar18) {
      TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
                        *)pTVar2);
    }
    puVar5 = &(this->SocketTable).field_0xc;
    *(undefined4 *)&(this->SocketTable).field_0x8 = 0;
    if (*(int *)puVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar5);
    }
    *(undefined4 *)&(this->SocketTable).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->SocketTable).field_0x34 = 0;
    iVar20 = *(int *)&(this->SocketTable).field_0x2c;
    *(undefined4 *)&(this->SocketTable).field_0x28 = 0;
    if ((iVar20 < 0) || (0x80 < iVar20)) {
      *(undefined4 *)&(this->SocketTable).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SocketTable).field_0x10,0);
    }
    if (bVar18) {
      *(undefined4 *)&(this->SocketTable).field_0x48 = 1;
      TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FSocket_*>,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>,FDefaultSetAllocator>
                *)pTVar2);
    }
    iVar20 = *(int *)&(this->ProgressTable).field_0x28;
    local_3a8 = &(this->ProgressTable).field_0x10;
    LVar32.QuadPart = (LONGLONG)&this->ProgressTable;
    iStack_3b0 = 0;
    local_398 = 0;
    iStack_39c = 0;
    if (iVar20 != 0) {
      puVar31 = *(uint **)&(this->ProgressTable).field_0x20;
      if (puVar31 == (uint *)0x0) {
        puVar31 = (uint *)local_3a8;
      }
      uVar27 = *puVar31;
      while (uVar27 == 0) {
        lVar23 = (longlong)iStack_3b0;
        local_398 = local_398 + 0x20;
        iStack_3b0 = iStack_3b0 + 1;
        iStack_39c = iVar20;
        if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_3b0)
        goto LAB_144559e21;
        uVar27 = puVar31[lVar23 + 1];
      }
      uVar19 = -uVar27 & uVar27;
      uVar3 = (ulonglong)uVar19 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_298 = (int)lVar23;
      iStack_39c = local_398 + -1 + local_298;
      if (iVar20 < iStack_39c) {
        iStack_39c = iVar20;
      }
    }
LAB_144559e21:
    uVar27 = *(uint *)&(this->ProgressTable).field_0x28;
    puVar5 = &(this->ProgressTable).field_0x10;
    uStack_394 = local_94;
    iStack_390 = *(int *)&(this->ProgressTable).field_0x8 -
                 *(int *)&(this->ProgressTable).field_0x34;
    uStack_3a0 = 0xffffffff;
    uVar26 = uVar27 & 0xffffffe0;
    TStack_228.CurrentBitIndex = iStack_39c;
    TStack_228.UnvisitedBitMask = 0xffffffff;
    TStack_228._padding_ = CONCAT44(uVar19,iStack_3b0);
    iVar24 = (int)uVar27 >> 5;
    TStack_228._28_4_ = local_94;
    TStack_228.BaseBitIndex = local_398;
    uStack_208 = CONCAT44(uStack_38c,iStack_390);
    local_3c0 = LVar32;
    local_3b8 = (TMap<FName,FSocket_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSocket_*,0>_>
                 *)LVar32;
    uStack_3ac = uVar19;
    local_230 = (TMap<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>_>
                 *)LVar32;
    TStack_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3a8;
    if ((((int)uVar27 < 0) || (iVar20 < (int)uVar27)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      uVar16 = (*pcVar8)();
      return (bool)uVar16;
    }
    uVar19 = *(uint *)&(this->ProgressTable).field_0x28;
    if (uVar27 != uVar19) {
      puVar28 = *(undefined1 **)&(this->ProgressTable).field_0x20;
      puVar29 = puVar5;
      if (puVar28 != (undefined1 *)0x0) {
        puVar29 = puVar28;
      }
      uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
      while (uVar27 == 0) {
        lVar23 = (longlong)iVar24;
        uVar26 = uVar26 + 0x20;
        iVar24 = iVar24 + 1;
        uVar27 = uVar19;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_144559f3f;
        uVar27 = *(uint *)(puVar29 + lVar23 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      uVar27 = (uVar26 - 1) + (int)lVar23;
      if ((int)uVar19 < (int)uVar27) {
        uVar27 = uVar19;
      }
    }
LAB_144559f3f:
    while( true ) {
      pTVar1 = local_230;
      if (*(int *)&local_230->field_0x8 - *(int *)&local_230->field_0x34 != (int)uStack_208) {
        `TSparseArray<TSparseSetElement<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3cf);
      }
      if (((TStack_228.CurrentBitIndex == uVar27) &&
          (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar5)) &&
         ((LARGE_INTEGER)pTVar1 == (LARGE_INTEGER)LVar32.QuadPart)) break;
      lVar25 = *(longlong *)pTVar1;
      lVar33 = (longlong)TStack_228.CurrentBitIndex * 0x98;
      iVar20 = *(int *)(lVar33 + 0x48 + lVar25);
      lVar23 = lVar33 + lVar25;
      if ((iVar20 != 0) && (iVar20 != 1)) {
        if (5 < (byte)LogPing._0_1_) {
          switch(iVar20) {
          case 0:
            break;
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
          }
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPing);
        }
        *(float *)(lVar33 + 0x70 + lVar25) = (float)*(double *)(lVar23 + 0x38);
        ::FString::Empty((FString *)(lVar33 + lVar25 + 0x60));
        uVar4 = *(undefined4 *)(lVar23 + 0x28);
        ::FString::FString(&local_1e8,(FString *)(lVar23 + 0x18));
        pFVar14 = local_268;
        local_340 = *(undefined4 *)(lVar23 + 0x48);
        local_1d8 = uVar4;
        ::FString::FString(&local_338,(FString *)(lVar23 + 0x50));
        ::FString::FString(&local_328,(FString *)(lVar33 + lVar25 + 0x60));
        local_318 = *(undefined4 *)(lVar33 + 0x70 + lVar25);
        ::FString::FString(&local_310,&local_1e8);
        local_300 = local_1d8;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &pFVar14->GotResultDelegate,&local_128);
        if ((*(int *)&(pFVar14->GotResultDelegate).field_0x10 != 0) &&
           (plVar6 = *(longlong **)&(pFVar14->GotResultDelegate).field_0x8,
           plVar6 != (longlong *)0x0)) {
          local_1a8 = local_318;
          local_1d0[0] = local_340;
          local_1c8 = local_338.Data.AllocatorInstance.Data;
          local_1c0 = local_338.Data.ArrayNum;
          local_1bc = local_338.Data.ArrayMax;
          local_1b8 = local_328.Data.AllocatorInstance.Data;
          local_1b0 = local_328.Data.ArrayNum;
          local_1ac = local_328.Data.ArrayMax;
          local_1a0 = local_310.Data.AllocatorInstance.Data;
          local_198 = local_310.Data.ArrayNum;
          local_194 = local_310.Data.ArrayMax;
          local_310.Data.ArrayNum = 0;
          local_310.Data.ArrayMax = 0;
          local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_338.Data.ArrayNum = 0;
          local_338.Data.ArrayMax = 0;
          local_328.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_328.Data.ArrayNum = 0;
          local_328.Data.ArrayMax = 0;
          local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_190 = local_300;
          (**(code **)(*plVar6 + 0x68))(plVar6,local_1d0);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_128);
        if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_310.Data.AllocatorInstance.Data);
        }
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
        if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
        }
      }
      TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
      LVar32 = local_3c0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2a8);
    if (((char)local_2c0 != '\0') && (local_2c0._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_2c8->Elements).field_0x8 - *(int *)&(local_2c8->Elements).field_0x34;
      if (uVar19 < 4) {
        iVar20 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar23 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar20 = 1 << ((byte)lVar23 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_2c8->HashSize < iVar20)) || (iVar20 < local_2c8->HashSize)) {
        local_2c8->HashSize = iVar20;
        TSet<TTuple<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress>,TDefaultMapHashableKeyFuncs<FUdpPingWorker::FProgressKey,FUdpPingWorker::FProgress,0>,FDefaultSetAllocator>
        ::Rehash(local_2c8);
      }
    }
    bVar18 = true;
  }
  return bVar18;
}

// Stop @ 14455a510

void __thiscall FUdpPingWorker::Stop(FUdpPingWorker *this)

{
  this->bCancelOperation = true;
  return;
}

