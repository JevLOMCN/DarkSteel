// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 7

// FSpeedRecorder @ 143224e40

FSpeedRecorder * __thiscall BuildPatchServices::FSpeedRecorder::FSpeedRecorder(FSpeedRecorder *this)

{
  double dVar1;
  int iVar2;
  FTSTicker *pFVar3;
  ulong64 uVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  longlong lVar7;
  
  *(undefined ***)this = &___7ISpeedRecorder_BuildPatchServices__6B_;
  pFVar3 = FTSTicker::GetCoreTicker();
  FTSTickerObjectBase::FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x8,0.0,pFVar3);
  dVar1 = __real_4014000000000000;
  *(undefined ***)this = &_vftable__for__BuildPatchServices__ISpeedRecorder__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FTSTickerObjectBase__;
  dVar1 = dVar1 / FGenericPlatformTime::SecondsPerCycle64;
  if (dVar1 < __real_43f0000000000000) {
    lVar7 = 0;
    if ((__real_43e0000000000000 <= dVar1) &&
       (dVar1 = dVar1 - __real_43e0000000000000, dVar1 < __real_43e0000000000000)) {
      lVar7 = -0x8000000000000000;
    }
    uVar4 = (longlong)dVar1 + lVar7;
  }
  else {
    uVar4 = 0xffffffffffffffff;
  }
  this->CyclesConfidenceFactor = uVar4;
  iVar2 = FUnitConversion::Convert<int>(10,Megabytes,Bytes);
  this->SizeConfidenceFactor = (longlong)iVar2;
  pTVar5 = ::operator_new(0x20);
  pTVar6 = (TNode *)0x0;
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).CyclesStart = 0;
    (pTVar5->Item).CyclesEnd = 0;
    (pTVar5->Item).Size = 0;
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).CyclesStart = 0;
    (pTVar5->Item).CyclesEnd = 0;
    (pTVar5->Item).Size = 0;
    pTVar6 = pTVar5;
  }
  (this->RecordsQueue).Tail = pTVar6;
  (this->RecordsQueue).Head = pTVar6;
  (this->PeakSpeed).CyclesConfidenceFactor = this->CyclesConfidenceFactor;
  (this->PeakSpeed).SizeConfidenceFactor = this->SizeConfidenceFactor;
  (this->Records).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Records).ArrayNum = 0;
  (this->Records).ArrayMax = 0;
  (this->Temp).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Temp).ArrayNum = 0;
  (this->Temp).ArrayMax = 0;
  (this->PeakSpeed).Records = &this->Records;
  (this->PeakSpeed).bIsConfident = false;
  (this->PeakSpeed).PeakSpeed = 0.0;
  return this;
}

// ~FSpeedRecorder @ 143228d00

void __thiscall BuildPatchServices::FSpeedRecorder::~FSpeedRecorder(FSpeedRecorder *this)

{
  FScriptContainerElement *pFVar1;
  TNode *pTVar2;
  
  *(undefined ***)this = &_vftable__for__BuildPatchServices__ISpeedRecorder__;
  *(undefined ***)&this->field_0x8 = &_vftable__for__FTSTickerObjectBase__;
  pFVar1 = (this->Temp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Records).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->RecordsQueue).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->RecordsQueue).Tail = pTVar2->NextNode;
    ::operator_delete(pTVar2,0x20);
    pTVar2 = (this->RecordsQueue).Tail;
  }
  FTSTickerObjectBase::~FTSTickerObjectBase((FTSTickerObjectBase *)&this->field_0x8);
  *(undefined ***)this = &___7ISpeedRecorder_BuildPatchServices__6B_;
  return;
}

// AddRecord @ 143233c80

void __thiscall BuildPatchServices::FSpeedRecorder::AddRecord(FSpeedRecorder *this,FRecord *param_1)

{
  TQueue<BuildPatchServices::ISpeedRecorder::FRecord,0> *pTVar1;
  TNode *pTVar2;
  ulong64 uVar3;
  TNode *pTVar4;
  
  pTVar1 = &this->RecordsQueue;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    uVar3 = param_1->CyclesEnd;
    (pTVar4->Item).CyclesStart = param_1->CyclesStart;
    (pTVar4->Item).CyclesEnd = uVar3;
    (pTVar4->Item).Size = param_1->Size;
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar4;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar4;
    UNLOCK();
  }
  return;
}

// GetAverageSpeed @ 143254340

double __thiscall
BuildPatchServices::FSpeedRecorder::GetAverageSpeed(FSpeedRecorder *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 local_res8 [8];
  
  PutRecordsInTemp(this,param_1);
  iVar2 = (this->Temp).ArrayNum;
  uVar5 = 0;
  pFVar4 = (this->Temp).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  uVar6 = uVar5;
  uVar7 = uVar5;
  while( true ) {
    if ((this->Temp).ArrayNum != iVar2) {
      `TCheckedPointerIterator<BuildPatchServices::ISpeedRecorder::FRecord,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    uVar3 = *(ulonglong *)(pFVar4 + 8);
    if (uVar6 < uVar3) {
      if (uVar6 < *(ulonglong *)pFVar4) {
        uVar6 = *(ulonglong *)pFVar4;
      }
      uVar5 = uVar5 + (uVar3 - uVar6);
      uVar6 = uVar3;
    }
    uVar7 = uVar7 + *(ulonglong *)(pFVar4 + 0x10);
    pFVar4 = pFVar4 + 0x18;
  }
  if (uVar5 == 0) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = (double)uVar7 / ((double)uVar5 * FGenericPlatformTime::SecondsPerCycle64);
  }
  return dVar8;
}

// GetPeakSpeed @ 1432571d0

double __thiscall BuildPatchServices::FSpeedRecorder::GetPeakSpeed(FSpeedRecorder *this)

{
  return (this->PeakSpeed).PeakSpeed;
}

// PutRecordsInTemp @ 14325f320

void __thiscall
BuildPatchServices::FSpeedRecorder::PutRecordsInTemp(FSpeedRecorder *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  LARGE_INTEGER LVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  ulonglong local_res8;
  LARGE_INTEGER local_res18 [2];
  
  piVar1 = &(this->Temp).ArrayMax;
  (this->Temp).ArrayNum = 0;
  if ((this->Temp).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Temp).AllocatorInstance,0,piVar1);
  }
  if ((this->Records).ArrayNum != 0) {
    dVar5 = (double)param_1 / FGenericPlatformTime::SecondsPerCycle64;
    if (dVar5 < __real_43f0000000000000) {
      lVar15 = 0;
      if ((__real_43e0000000000000 <= dVar5) &&
         (dVar5 = dVar5 - __real_43e0000000000000, dVar5 < __real_43e0000000000000)) {
        lVar15 = -0x8000000000000000;
      }
      LVar13.QuadPart = (longlong)dVar5 + lVar15;
    }
    else {
      LVar13.QuadPart = 0xffffffffffffffff;
    }
    QueryPerformanceCounter(local_res18);
    local_res8 = local_res18[0].QuadPart - (longlong)LVar13;
    if ((ulonglong)local_res18[0] <= (ulonglong)LVar13) {
      local_res8 = 0;
    }
    iVar8 = TArray<BuildPatchServices::ISpeedRecorder::FRecord,TSizedDefaultAllocator<32>_>::
            FindLastByPredicate<_BuildPatchServices::FSpeedRecorder::PutRecordsInTemp_::__l5::<lambda_1>_>
                      (&this->Records,(<lambda_1>)&local_res8,(this->Records).ArrayNum);
    iVar8 = iVar8 + 1;
    if (-1 < iVar8) {
      lVar15 = (longlong)iVar8 * 0x18;
      do {
        if ((this->Records).ArrayNum <= iVar8) {
          return;
        }
        if ((iVar8 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (this->Records).AllocatorInstance.Data + lVar15;
        pFVar2 = (this->Temp).AllocatorInstance.Data;
        if (*(ulonglong *)pFVar14 < local_res8) {
          if (((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + (longlong)*piVar1 * 0x18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->Temp).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&(this->Temp).AllocatorInstance,piVar1);
          }
          (this->Temp).ArrayNum = iVar9 + 1;
          uVar6 = *(ulonglong *)(pFVar14 + 8);
          pFVar3 = (this->Temp).AllocatorInstance.Data;
          pFVar2 = pFVar3 + (longlong)iVar9 * 0x18;
          *(ulonglong *)pFVar2 = *(ulonglong *)pFVar14;
          *(ulonglong *)(pFVar2 + 8) = uVar6;
          *(ulonglong *)(pFVar3 + (longlong)iVar9 * 0x18 + 0x10) = *(ulonglong *)(pFVar14 + 0x10);
          iVar9 = (this->Temp).ArrayNum;
          uVar12 = iVar9 - 1;
          uVar10 = 0;
          if ((int)uVar12 < iVar9) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar11 = (longlong)(this->Temp).ArrayNum;
          pFVar2 = (this->Temp).AllocatorInstance.Data;
          *(ulonglong *)(pFVar2 + lVar11 * 0x18 + -0x18) = local_res8;
          if (*(ulonglong *)(pFVar14 + 8) == *(ulonglong *)pFVar14) {
            *(undefined8 *)(pFVar2 + lVar11 * 0x18 + -8) = 0;
          }
          else {
            *(ulonglong *)(pFVar2 + lVar11 * 0x18 + -8) =
                 ((*(longlong *)(pFVar2 + lVar11 * 0x18 + -0x10) - local_res8) /
                 (*(ulonglong *)(pFVar14 + 8) - *(ulonglong *)pFVar14)) *
                 *(longlong *)(pFVar2 + lVar11 * 0x18 + -8);
          }
        }
        else {
          if (((pFVar2 <= pFVar14) && (pFVar14 < pFVar2 + (longlong)*piVar1 * 0x18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = (this->Temp).ArrayNum;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&(this->Temp).AllocatorInstance,piVar1);
          }
          (this->Temp).ArrayNum = iVar9 + 1;
          uVar6 = *(ulonglong *)(pFVar14 + 8);
          pFVar3 = (this->Temp).AllocatorInstance.Data;
          pFVar2 = pFVar3 + (longlong)iVar9 * 0x18;
          *(ulonglong *)pFVar2 = *(ulonglong *)pFVar14;
          *(ulonglong *)(pFVar2 + 8) = uVar6;
          *(ulonglong *)(pFVar3 + (longlong)iVar9 * 0x18 + 0x10) = *(ulonglong *)(pFVar14 + 0x10);
        }
        lVar15 = lVar15 + 0x18;
        iVar8 = iVar8 + 1;
      } while (-1 < iVar8);
    }
  }
  return;
}

// Tick @ 143269c10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall BuildPatchServices::FSpeedRecorder::Tick(FSpeedRecorder *this,float param_1)

{
  bool *pbVar1;
  int *piVar2;
  ulong64 *puVar3;
  TNode **_Dst;
  int iVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  code *pcVar10;
  double dVar11;
  ulong64 uVar12;
  TLess<void> TVar13;
  bool bVar14;
  TLess<void> TVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  int iVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_BuildPatchServices::FSpeedRecorder::Tick(float)_::_2_::FStat_STAT_FSpeedRecorder_Tick>
  FVar22;
  ulonglong uVar23;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  FName FVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  char cVar31;
  ulonglong uVar32;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  uVar28 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FSpeedRecorder_Tick ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_BuildPatchServices::FSpeedRecorder::Tick(float)_::_2_::FStat_STAT_FSpeedRecorder_Tick>
         )0x0) {
      pFVar21 = ::FName::FName(&local_68,"STAT_FSpeedRecorder_Tick");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSpeedRecorder_Tick,*pFVar21,
                 L"STAT_FSpeedRecorder_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar22 = StatPtr_STAT_FSpeedRecorder_Tick;
  if (StatPtr_STAT_FSpeedRecorder_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_BuildPatchServices::FSpeedRecorder::Tick(float)_::_2_::FStat_STAT_FSpeedRecorder_Tick>
       )0x0) {
    pFVar21 = ::FName::FName(&local_60,"STAT_FSpeedRecorder_Tick");
    FVar22 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_BuildPatchServices::FSpeedRecorder::Tick(float)_::_2_::FStat_STAT_FSpeedRecorder_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FSpeedRecorder_Tick,*pFVar21,
                          L"STAT_FSpeedRecorder_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar22;
  bVar14 = false;
  TVar13 = (TLess<void>)0x0;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar16 = false;
  TVar15 = (TLess<void>)0x0;
  if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_143269db2:
    bVar14 = bVar16;
    TVar13 = TVar15;
    bVar16 = false;
    FVar27 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar14 = false;
      TVar13 = (TLess<void>)0x1;
      bVar16 = false;
      TVar15 = (TLess<void>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_res20.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Common\\SpeedRecorder.cpp"
                   ,0xaa);
        bVar14 = true;
        TVar13 = (TLess<void>)0x1;
        bVar16 = true;
        TVar15 = (TLess<void>)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_143269db2;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar16 = true;
  }
  iVar4 = *(int *)&(this->Records).AllocatorInstance.Data;
  while( true ) {
    uVar19 = *(uint *)&(this->Records).AllocatorInstance.Data;
    if (uVar19 == *(uint *)((longlong)&(this->Records).AllocatorInstance.Data + 4)) {
      uVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)&(this->RecordsQueue).Tail,
                          (int *)((longlong)&(this->Records).AllocatorInstance.Data + 4));
    }
    *(uint *)&(this->Records).AllocatorInstance.Data = uVar19 + 1;
    uVar24 = 0;
    if ((int)uVar19 < (int)(uVar19 + 1)) {
      uVar24 = ~uVar19 >> 0x1f;
    }
    if ((uVar24 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar10 = (code *)swi(3);
      uVar18 = (*pcVar10)();
      return (bool)uVar18;
    }
    pTVar5 = (this->RecordsQueue).Tail;
    lVar25 = (longlong)*(int *)&(this->Records).AllocatorInstance.Data + -1;
    pTVar6 = ((this->RecordsQueue).Head)->NextNode;
    if (pTVar6 == (TNode *)0x0) break;
    uVar12 = (pTVar6->Item).CyclesEnd;
    puVar3 = (ulong64 *)((longlong)pTVar5 + lVar25 * 0x18);
    *puVar3 = (pTVar6->Item).CyclesStart;
    puVar3[1] = uVar12;
    *(ulong64 *)((longlong)pTVar5 + lVar25 * 0x18 + 0x10) = (pTVar6->Item).Size;
    pTVar5 = (this->RecordsQueue).Head;
    (this->RecordsQueue).Head = pTVar6;
    (pTVar6->Item).CyclesStart = 0;
    (pTVar6->Item).CyclesEnd = 0;
    (pTVar6->Item).Size = 0;
    ::operator_delete(pTVar5,0x20);
  }
  if ((*(int *)&(this->Records).AllocatorInstance.Data < 1) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar10 = (code *)swi(3);
    uVar18 = (*pcVar10)();
    return (bool)uVar18;
  }
  iVar20 = *(int *)&(this->Records).AllocatorInstance.Data;
  uVar19 = iVar20 - 1;
  _Dst = &((this->RecordsQueue).Tail)->NextNode + (longlong)(int)uVar19 * 3;
  iVar20 = ~uVar19 + iVar20;
  if (iVar20 != 0) {
    memmove(_Dst,_Dst + 3,(longlong)iVar20 * 0x18);
  }
  iVar20 = *(int *)&(this->Records).AllocatorInstance.Data;
  iVar26 = iVar20 + -1;
  *(int *)&(this->Records).AllocatorInstance.Data = iVar26;
  if (iVar20 + -2 < iVar4) goto LAB_14326a094;
  AlgoImpl::
  IntroSortInternal<BuildPatchServices::ISpeedRecorder::FRecord,int,UE::Core::Private::TProjectionMemberData<unsigned___int64_BuildPatchServices::ISpeedRecorder::FRecord::*>,TLess<void>_>
            ((FRecord *)(this->RecordsQueue).Tail,iVar26,
             (TProjectionMemberData<unsigned___int64_BuildPatchServices::ISpeedRecorder::FRecord::*>
             )0x0,TVar13);
  uVar30 = 0xffffffffffffffff;
  uVar19 = *(int *)((this->PeakSpeed).SizeConfidenceFactor + 8) - 1;
  uVar29 = uVar28;
  uVar32 = uVar28;
  if ((int)uVar19 < 0) {
LAB_14326a013:
    cVar31 = (char)uVar32;
    if (*(char *)&(this->PeakSpeed).Records != '\0') goto LAB_14326a094;
  }
  else {
    lVar25 = (longlong)(int)uVar19 * 0x18;
    do {
      cVar31 = (char)uVar32;
      if (cVar31 != '\0') goto LAB_14326a019;
      plVar7 = (longlong *)(this->PeakSpeed).SizeConfidenceFactor;
      uVar24 = 0;
      if ((int)uVar19 < (int)plVar7[1]) {
        uVar24 = ~uVar19 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      lVar8 = *plVar7;
      uVar9 = *(ulonglong *)(lVar8 + lVar25);
      if (uVar9 < uVar30) {
        uVar23 = *(ulonglong *)(lVar8 + 8 + lVar25);
        if (uVar30 < uVar23) {
          uVar23 = uVar30;
        }
        uVar29 = uVar29 + (uVar23 - uVar9);
        uVar30 = uVar9;
      }
      uVar28 = uVar28 + *(longlong *)(lVar8 + 0x10 + lVar25);
      uVar9._0_4_ = (this->Temp).ArrayNum;
      uVar9._4_4_ = (this->Temp).ArrayMax;
      if ((uVar9 <= uVar29) && ((this->PeakSpeed).CyclesConfidenceFactor <= uVar28)) {
        uVar32 = 1;
      }
      cVar31 = (char)uVar32;
      lVar25 = lVar25 + -0x18;
      uVar19 = uVar19 - 1;
    } while (-1 < (int)uVar19);
    if (cVar31 == '\0') goto LAB_14326a013;
  }
LAB_14326a019:
  dVar11 = (double)uVar28 / ((double)uVar29 * FGenericPlatformTime::SecondsPerCycle64);
  pbVar1 = &(this->PeakSpeed).bIsConfident;
  if ((*(double *)pbVar1 <= dVar11 && dVar11 != *(double *)pbVar1) ||
     (*(char *)&(this->PeakSpeed).Records == '\0')) {
    *(double *)&(this->PeakSpeed).bIsConfident = dVar11;
    *(char *)&(this->PeakSpeed).Records = cVar31;
  }
LAB_14326a094:
  if ((bool)TVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar16) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return true;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

