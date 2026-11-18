// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 28

// FNetTraceAnalyzer @ 14d3ccb20

FNetTraceAnalyzer * __thiscall
TraceServices::FNetTraceAnalyzer::FNetTraceAnalyzer
          (FNetTraceAnalyzer *this,IAnalysisSession *param_1,FNetProfilerProvider *param_2)

{
  IFrameProvider *pIVar1;
  
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FNetTraceAnalyzer_TraceServices__6B_;
  this->NetProfilerProvider = param_2;
  pIVar1 = ReadFrameProvider(param_1);
  this->FrameProvider = pIVar1;
  this->NetTraceVersion = 0;
  this->NetTraceReporterVersion = 0;
  *(undefined8 *)&this->TracedNameIdToNetProfilerNameIdMap = 0;
  *(undefined8 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x8 = 0;
  *(undefined8 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x20 = 0;
  *(undefined4 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x28 = 0;
  *(undefined4 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x34 = 0;
  *(undefined4 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x40 = 0;
  *(undefined4 *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x48 = 0;
  *(undefined8 *)&this->TraceEventTypeToNetProfilerEventTypeIndexMap = 0;
  *(undefined8 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->TraceEventTypeToNetProfilerEventTypeIndexMap).field_0x48 = 0;
  *(undefined8 *)&this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap = 0;
  *(undefined8 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x20 = 0
  ;
  *(undefined4 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x28 = 0
  ;
  *(undefined4 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x2c =
       0x80;
  *(undefined4 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x34 = 0
  ;
  *(undefined4 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x30 =
       0xffffffff;
  *(undefined8 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x40 = 0
  ;
  *(undefined4 *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x48 = 0
  ;
  *(undefined8 *)&this->ActiveGameInstances = 0;
  *(undefined8 *)&(this->ActiveGameInstances).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveGameInstances).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveGameInstances).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveGameInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveGameInstances).field_0x34 = 0;
  *(undefined4 *)&(this->ActiveGameInstances).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ActiveGameInstances).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveGameInstances).field_0x48 = 0;
  return this;
}

// AddEvent @ 14d3d3480

void __thiscall
TraceServices::FNetTraceAnalyzer::AddEvent
          (FNetTraceAnalyzer *this,
          TPagedArray<TraceServices::FNetProfilerContentEvent,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>_>
          *param_1,FNetProfilerContentEvent *param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNetProfilerContentEvent *pFVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  pFVar4 = TPagedArray<TraceServices::FNetProfilerContentEvent,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>_>
           ::PushBack(param_1);
  uVar6 = (ulonglong)param_2->Level + (ulonglong)param_4;
  if (uVar6 != (uVar6 & 0xff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = GetTracedEventTypeIndex(this,param_2->NameIndex,(uchar)uVar6);
  pFVar4->EventTypeIndex = uVar3;
  pFVar4->NameIndex = param_2->NameIndex;
  pFVar4->ObjectInstanceIndex = param_2->ObjectInstanceIndex;
  uVar5 = *(longlong *)param_2 + (ulonglong)param_3;
  uVar6._0_3_ = pFVar4->StartPos;
  uVar6._3_3_ = pFVar4->EndPos;
  uVar6._6_1_ = pFVar4->Level;
  uVar6._7_1_ = pFVar4->Padding;
  uVar5 = (uVar5 ^ uVar6) & 0xffffffffff000000 ^ uVar5;
  pFVar4->StartPos = (int3)uVar5;
  pFVar4->EndPos = (int3)(uVar5 >> 0x18);
  pFVar4->Level = (char)(uVar5 >> 0x30);
  pFVar4->Padding = (char)(uVar5 >> 0x38);
  uVar6 = *(longlong *)param_2 + (ulonglong)param_3 * 0x1000000;
  uVar6 = (uVar6 ^ uVar5) & 0xffff000000ffffff ^ uVar6;
  pFVar4->StartPos = (int3)uVar6;
  pFVar4->EndPos = (int3)(uVar6 >> 0x18);
  pFVar4->Level = (char)(uVar6 >> 0x30);
  pFVar4->Padding = (char)(uVar6 >> 0x38);
  pFVar4->Level = (char)param_4 + param_2->Level;
  pFVar4->BunchInfo = param_2->BunchInfo;
  return;
}

// AddEvent @ 14d3d3580

void __thiscall
TraceServices::FNetTraceAnalyzer::AddEvent
          (FNetTraceAnalyzer *this,
          TPagedArray<TraceServices::FNetProfilerContentEvent,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>_>
          *param_1,uint param_2,uint param_3,uint param_4,uint param_5,FNetProfilerBunchInfo param_6
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FNetProfilerContentEvent *pFVar4;
  ulonglong uVar5;
  
  pFVar4 = TPagedArray<TraceServices::FNetProfilerContentEvent,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>_>
           ::PushBack(param_1);
  if (param_4 != (param_4 & 0xff)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = GetTracedEventTypeIndex(this,param_5,(byte)param_4);
  pFVar4->EventTypeIndex = uVar3;
  pFVar4->NameIndex = param_5;
  uVar5._0_3_ = pFVar4->StartPos;
  uVar5._3_3_ = pFVar4->EndPos;
  uVar5._6_1_ = pFVar4->Level;
  uVar5._7_1_ = pFVar4->Padding;
  pFVar4->ObjectInstanceIndex = 0;
  uVar5 = ((ulonglong)param_2 ^ (ulonglong)param_3 << 0x18) & 0xffff000000ffffff ^
          uVar5 & 0xffff000000000000 ^ (ulonglong)param_3 << 0x18;
  pFVar4->BunchInfo = param_6;
  pFVar4->StartPos = (int3)uVar5;
  pFVar4->EndPos = (int3)(uVar5 >> 0x18);
  pFVar4->Level = (char)(uVar5 >> 0x30);
  pFVar4->Padding = (char)(uVar5 >> 0x38);
  pFVar4->Level = (byte)param_4;
  return;
}

// DestroyActiveGameInstanceState @ 14d3d7b80

void __thiscall
TraceServices::FNetTraceAnalyzer::DestroyActiveGameInstanceState
          (FNetTraceAnalyzer *this,uint param_1)

{
  uint uVar1;
  FNetProfilerGameInstanceInternal *pFVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint local_res10 [2];
  
  if (*(int *)&(this->ActiveGameInstances).field_0x8 !=
      *(int *)&(this->ActiveGameInstances).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ActiveGameInstances).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ActiveGameInstances).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->ActiveGameInstances).field_0x48 - 1U & param_1) * 4)
    ;
    if (uVar1 != 0xffffffff) {
      while (puVar3 = (uint *)((longlong)(int)uVar1 * 0x20 +
                              *(longlong *)&(this->ActiveGameInstances).field_0x0),
            *puVar3 != param_1) {
        uVar1 = puVar3[6];
        if (uVar1 == 0xffffffff) {
          return;
        }
      }
      puVar5 = puVar3 + 2;
      if (puVar3 == (uint *)0x0) {
        puVar5 = (uint *)0x0;
      }
      if (puVar5 != (uint *)0x0) {
        pFVar2 = FNetProfilerProvider::EditGameInstance
                           (this->NetProfilerProvider,*(uint *)(*(longlong *)puVar5 + 0x108));
        if (pFVar2 != (FNetProfilerGameInstanceInternal *)0x0) {
          (pFVar2->Instance).LifeTime.End = this->LastTimeStamp;
          FNetProfilerProvider::MarkGameInstancesDirty(this->NetProfilerProvider);
        }
        if (*(int *)&(this->ActiveGameInstances).field_0x8 !=
            *(int *)&(this->ActiveGameInstances).field_0x34) {
          local_res10[0] = param_1;
          TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<unsigned_int>
                    ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>,0>,FDefaultSetAllocator>
                      *)&this->ActiveGameInstances,param_1,local_res10);
        }
      }
    }
  }
  return;
}

// FlushFrameStatsCounters @ 14d3debc0

void __thiscall
TraceServices::FNetTraceAnalyzer::FlushFrameStatsCounters
          (FNetTraceAnalyzer *this,FNetTraceGameInstanceState *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  uint *puVar3;
  TPagedArray<TraceServices::FNetProfilerFrame,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerFrame>_>
  *pTVar4;
  ulong64 uVar5;
  TPagedArray<TraceServices::FNetProfilerStats,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerStats>_>
  *pTVar6;
  TPagedArrayPage<TraceServices::FNetProfilerStats> *pTVar7;
  int iVar8;
  int iVar9;
  FNetProfilerGameInstanceInternal *pFVar10;
  FNetProfilerFrame *pFVar11;
  FNetProfilerStats *pFVar12;
  TPagedArrayPage<TraceServices::FNetProfilerFrame> *pTVar13;
  TPagedArrayPage<TraceServices::FNetProfilerStats> *pTVar14;
  FNetProfilerStats *pFVar15;
  undefined1 local_res8 [8];
  FNetProfilerStats *local_res10;
  
  pFVar10 = FNetProfilerProvider::EditGameInstance
                      (this->NetProfilerProvider,param_1->GameInstanceIndex);
  if (pFVar10 == (FNetProfilerGameInstanceInternal *)0x0) {
    return;
  }
  pTVar4 = pFVar10->Frames;
  if (pTVar4->TotalItemCount != 0) {
    uVar5 = pTVar4->LastPage->Count;
    pFVar11 = pTVar4->LastPage->Items;
    if (pFVar11[uVar5 - 1].EngineFrameNumber == (ulonglong)param_1->CurrentEngineFrameIndex) {
      puVar3 = &pFVar11[uVar5 - 1].StatsCount;
      *puVar3 = *puVar3 + (param_1->FrameStatsCounters).ArrayNum;
      goto LAB_14d3ded14;
    }
  }
  if ((pTVar4->LastPage == (TPagedArrayPage<TraceServices::FNetProfilerFrame> *)0x0) ||
     (pTVar4->LastPage->Count == pTVar4->PageSize)) {
    iVar8 = (pTVar4->PagesArray).ArrayNum;
    piVar1 = &(pTVar4->PagesArray).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(pTVar4->PagesArray).AllocatorInstance,piVar1);
    }
    (pTVar4->PagesArray).ArrayNum = iVar8 + 1;
    pTVar13 = (TPagedArrayPage<TraceServices::FNetProfilerFrame> *)
              ((pTVar4->PagesArray).AllocatorInstance.Data + (longlong)iVar8 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerFrame>,int>
              (pTVar13,1);
    pTVar4->FirstPage =
         (TPagedArrayPage<TraceServices::FNetProfilerFrame> *)
         (pTVar4->PagesArray).AllocatorInstance.Data;
    pTVar4->LastPage = pTVar13;
    pFVar11 = (FNetProfilerFrame *)
              (**(code **)((longlong)*pTVar4->Allocator + 8))
                        (pTVar4->Allocator,pTVar4->PageSize * 0x18);
    pTVar4->LastPage->Items = pFVar11;
  }
  pTVar4->TotalItemCount = pTVar4->TotalItemCount + 1;
  uVar5 = pTVar4->LastPage->Count;
  pFVar11 = pTVar4->LastPage->Items;
  pFVar11[uVar5].TimeStamp = 0.0;
  pFVar11[uVar5].EngineFrameNumber = 0;
  pFVar11[uVar5].StartStatsIndex = 0;
  pFVar11[uVar5].StatsCount = 0;
  puVar2 = &pTVar4->LastPage->Count;
  *puVar2 = *puVar2 + 1;
  pFVar11[uVar5].EngineFrameNumber = (ulonglong)param_1->CurrentEngineFrameIndex;
  pFVar11[uVar5].StartStatsIndex = (uint)pFVar10->FrameStats->TotalItemCount;
  pFVar11[uVar5].StatsCount = (param_1->FrameStatsCounters).ArrayNum;
  pFVar11[uVar5].TimeStamp = this->LastTimeStamp;
LAB_14d3ded14:
  pFVar15 = (FNetProfilerStats *)(param_1->FrameStatsCounters).AllocatorInstance.Data;
  iVar8 = (param_1->FrameStatsCounters).ArrayNum;
  pFVar12 = pFVar15 + iVar8;
  local_res10 = pFVar12;
  while( true ) {
    if ((param_1->FrameStatsCounters).ArrayNum != iVar8) {
      `TCheckedPointerIterator<TraceServices::FNetProfilerStats,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar12) break;
    pTVar6 = pFVar10->FrameStats;
    if ((pTVar6->LastPage == (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0) ||
       (pTVar6->LastPage->Count == pTVar6->PageSize)) {
      iVar9 = (pTVar6->PagesArray).ArrayNum;
      piVar1 = &(pTVar6->PagesArray).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pTVar6->PagesArray).AllocatorInstance,piVar1);
      }
      (pTVar6->PagesArray).ArrayNum = iVar9 + 1;
      pTVar14 = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)
                ((pTVar6->PagesArray).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
      DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerStats>,int>
                (pTVar14,1);
      pTVar7 = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)
               (pTVar6->PagesArray).AllocatorInstance.Data;
      pTVar6->LastPage = pTVar14;
      pTVar6->FirstPage = pTVar7;
      pFVar12 = (FNetProfilerStats *)
                (**(code **)((longlong)*pTVar6->Allocator + 8))
                          (pTVar6->Allocator,pTVar6->PageSize << 3);
      pTVar6->LastPage->Items = pFVar12;
      pFVar12 = local_res10;
    }
    pTVar6->TotalItemCount = pTVar6->TotalItemCount + 1;
    pTVar6->LastPage->Items[pTVar6->LastPage->Count] = *pFVar15;
    puVar2 = &pTVar6->LastPage->Count;
    *puVar2 = *puVar2 + 1;
    pFVar15 = pFVar15 + 1;
  }
  (param_1->FrameStatsCounters).ArrayNum = 0;
  if ((param_1->FrameStatsCounters).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(param_1->FrameStatsCounters).AllocatorInstance,0,
               &(param_1->FrameStatsCounters).ArrayMax);
  }
  param_1->CurrentNetProfilerFrameIndex = (uint)pFVar10->Frames->TotalItemCount;
  pFVar10->FramesChangeCount = pFVar10->FramesChangeCount + 1;
  return;
}

// FlushPacketEvents @ 14d3def00

void __thiscall
TraceServices::FNetTraceAnalyzer::FlushPacketEvents
          (FNetTraceAnalyzer *this,FNetTraceConnectionState *param_1,
          FNetProfilerConnectionData *param_2,ENetProfilerConnectionMode param_3)

{
  TPagedArray<TraceServices::FNetProfilerContentEvent,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerContentEvent>_>
  *pTVar1;
  undefined3 uVar2;
  undefined1 uVar4;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  FNetProfilerContentEvent *pFVar17;
  FNetProfilerBunchInfo *pFVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  FNetProfilerBunchInfo *pFVar22;
  TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> *pTVar23;
  ulonglong uVar24;
  undefined1 local_res20 [8];
  undefined5 uVar3;
  undefined2 uVar5;
  
  pTVar1 = &param_2->ContentEvents;
  uVar13 = 0;
  pTVar23 = param_1->BunchEvents + param_3;
  if (param_1->BunchInfos[param_3].ArrayNum == 0) {
    iVar12 = pTVar23->ArrayNum;
  }
  else {
    if ((param_1->BunchInfos[param_3].ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar12 = *(int *)(param_1->BunchInfos[param_3].AllocatorInstance.Data + 0x10);
  }
  lVar15 = (longlong)iVar12;
  uVar21 = uVar13;
  uVar16 = uVar13;
  uVar24 = uVar13;
  if (0 < iVar12) {
    do {
      uVar19 = (uint)uVar21;
      uVar9 = 0;
      if ((int)uVar19 < pTVar23->ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar17 = (FNetProfilerContentEvent *)((pTVar23->AllocatorInstance).Data + uVar16);
      AddEvent(this,pTVar1,pFVar17,0,0);
      uVar2 = pFVar17->EndPos;
      uVar4 = pFVar17->Level;
      uVar6 = pFVar17->Padding;
      uVar5 = CONCAT11(uVar6,uVar4);
      uVar3 = CONCAT23(uVar5,uVar2);
      uVar9 = (uint)uVar3 & 0xffffff;
      if ((uint)uVar24 < uVar9) {
        uVar24 = (ulonglong)uVar9;
      }
      param_2->ContentEventChangeCount = param_2->ContentEventChangeCount + 1;
      uVar21 = (ulonglong)(uVar19 + 1);
      lVar15 = lVar15 + -1;
      uVar16 = uVar16 + 0x20;
    } while (lVar15 != 0);
  }
  pTVar10 = param_1->BunchInfos + param_3;
  uVar9 = pTVar10->ArrayNum;
  uVar11 = (ulonglong)(int)uVar9;
  pFVar18 = (FNetProfilerBunchInfo *)(pTVar10->AllocatorInstance).Data;
  pFVar22 = pFVar18 + uVar11 * 4;
  uVar16 = uVar13;
  do {
    if (pTVar10->ArrayNum != (int)uVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TraceServices::FNetTraceAnalyzer::FBunchInfo,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar18 == pFVar22) {
      pTVar23 = param_1->BunchEvents + param_3;
      pTVar23->ArrayNum = 0;
      if (pTVar23->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&pTVar23->AllocatorInstance,0,&pTVar23->ArrayMax);
      }
      pTVar10 = param_1->BunchInfos + param_3;
      pTVar10->ArrayNum = 0;
      if (pTVar10->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&pTVar10->AllocatorInstance,0,&pTVar10->ArrayMax);
      }
      return;
    }
    iVar12 = *(int *)((longlong)pFVar18 + 0xc);
    uVar14 = (int)uVar16 + *(int *)((longlong)pFVar18 + 0x14);
    uVar16 = (ulonglong)uVar14;
    uVar19 = (uint)uVar24;
    if (iVar12 != 0) {
      AddEvent(this,pTVar1,uVar19,iVar12 + uVar19 + *(int *)(pFVar18 + 1),0,*(uint *)(pFVar18 + 3),
               *pFVar18);
      AddEvent(this,pTVar1,uVar19,*(int *)((longlong)pFVar18 + 0xc) + uVar19,1,
               this->BunchHeaderNameIndex,(FNetProfilerBunchInfo)0x0);
      if (uVar14 != 0) {
        do {
          uVar20 = (uint)uVar21;
          uVar14 = 0;
          if ((int)uVar20 < pTVar23->ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          AddEvent(this,pTVar1,
                   (FNetProfilerContentEvent *)
                   ((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x20),
                   iVar12 + uVar19,1);
          uVar21 = (ulonglong)(uVar20 + 1);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      uVar24 = (ulonglong)(uVar19 + *(int *)(pFVar18 + 1) + *(int *)((longlong)pFVar18 + 0xc));
      uVar16 = uVar13;
    }
    uVar11 = (ulonglong)uVar9;
    param_2->ContentEventChangeCount = param_2->ContentEventChangeCount + 1;
    pFVar18 = pFVar18 + 4;
  } while( true );
}

// GetActiveConnectionState @ 14d3dfe00

FNetTraceConnectionState * __thiscall
TraceServices::FNetTraceAnalyzer::GetActiveConnectionState
          (FNetTraceAnalyzer *this,uint param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->ActiveGameInstances).field_0x8 !=
      *(int *)&(this->ActiveGameInstances).field_0x34) {
    puVar6 = *(undefined1 **)&(this->ActiveGameInstances).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ActiveGameInstances).field_0x38;
    }
    uVar2 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->ActiveGameInstances).field_0x48 - 1U & param_1) * 4)
    ;
    if (uVar2 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->ActiveGameInstances);
        if (*puVar4 == param_1) {
          puVar3 = puVar4 + 2;
          if (puVar4 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return (FNetTraceConnectionState *)0x0;
          }
          plVar1 = *(longlong **)puVar3;
          if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
            return (FNetTraceConnectionState *)0x0;
          }
          plVar5 = (longlong *)plVar1[8];
          if ((longlong *)plVar1[8] == (longlong *)0x0) {
            plVar5 = plVar1 + 7;
          }
          uVar2 = *(uint *)((longlong)plVar5 + (ulonglong)((int)plVar1[9] - 1U & param_2) * 4);
          if (uVar2 == 0xffffffff) {
            return (FNetTraceConnectionState *)0x0;
          }
          while (puVar4 = (uint *)((longlong)(int)uVar2 * 0x20 + *plVar1), *puVar4 != param_2) {
            uVar2 = puVar4[6];
            if (uVar2 == 0xffffffff) {
              return (FNetTraceConnectionState *)0x0;
            }
          }
          puVar3 = puVar4 + 2;
          if (puVar4 == (uint *)0x0) {
            puVar3 = (uint *)0x0;
          }
          if (puVar3 == (uint *)0x0) {
            return (FNetTraceConnectionState *)0x0;
          }
          return *(FNetTraceConnectionState **)puVar3;
        }
        uVar2 = puVar4[6];
      } while (uVar2 != 0xffffffff);
    }
  }
  return (FNetTraceConnectionState *)0x0;
}

// GetCurrentNetProfilerFrameIndexAndFlushFrameStatsCountersIfNeeded @ 14d3e04d0

uint __thiscall
TraceServices::FNetTraceAnalyzer::GetCurrentNetProfilerFrameIndexAndFlushFrameStatsCountersIfNeeded
          (FNetTraceAnalyzer *this,uint param_1,uint param_2)

{
  uint uVar1;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_18;
  
  GetOrCreateActiveGameInstanceState(this,&local_18,param_1);
  if ((local_18.Object)->CurrentEngineFrameIndex < param_2) {
    FlushFrameStatsCounters(this,local_18.Object);
    (local_18.Object)->CurrentEngineFrameIndex = param_2;
  }
  uVar1 = (local_18.Object)->CurrentNetProfilerFrameIndex;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return uVar1;
}

// GetOrCreateActiveGameInstanceState @ 14d3e1340

TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> * __thiscall
TraceServices::FNetTraceAnalyzer::GetOrCreateActiveGameInstanceState
          (FNetTraceAnalyzer *this,
          TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
          *__return_storage_ptr__,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNetProfilerGameInstanceInternal *pFVar5;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> *pTVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint local_res18 [2];
  FNetTraceGameInstanceState *local_38;
  TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
  *local_30;
  uint *local_28;
  FNetTraceGameInstanceState **local_20;
  
  if (*(int *)&(this->ActiveGameInstances).field_0x8 !=
      *(int *)&(this->ActiveGameInstances).field_0x34) {
    puVar10 = *(undefined1 **)&(this->ActiveGameInstances).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->ActiveGameInstances).field_0x38;
    }
    uVar7 = *(uint *)(puVar10 +
                     (ulonglong)(*(int *)&(this->ActiveGameInstances).field_0x48 - 1U & param_1) * 4
                     );
    if (uVar7 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar7 * 0x20 +
                         *(longlong *)&(this->ActiveGameInstances).field_0x0);
        if (*puVar8 == param_1) {
          puVar9 = puVar8 + 2;
          if (puVar8 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            __return_storage_ptr__->Object = *(FNetTraceGameInstanceState **)puVar9;
            pTVar1 = *(TReferenceControllerBase<1> **)(puVar9 + 2);
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
            if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
              return __return_storage_ptr__;
            }
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
            return __return_storage_ptr__;
          }
          break;
        }
        uVar7 = puVar8[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  local_res18[0] = param_1;
  pFVar5 = FNetProfilerProvider::CreateGameInstance(this->NetProfilerProvider);
  (pFVar5->Instance).GameInstanceId = local_res18[0];
  (pFVar5->Instance).LifeTime.Begin = this->LastTimeStamp;
  local_30 = SharedPointerInternals::
             NewIntrusiveReferenceController<1,TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState>
                       ();
  local_38 = (FNetTraceGameInstanceState *)&local_30->ObjectStorage;
  if ((local_38 == (FNetTraceGameInstanceState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> *)
             (*pcVar2)();
    return pTVar6;
  }
  local_28 = local_res18;
  local_20 = &local_38;
  TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_const_&>_>
            ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>,0>,FDefaultSetAllocator>
              *)&this->ActiveGameInstances,
             (TPairInitializer<unsigned_int_const_&,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_const_&>
              *)&stack0x00000008,(bool *)&local_28);
  local_38->GameInstanceIndex = (pFVar5->Instance).GameInstanceIndex;
  iVar4 = (**(code **)((longlong)*this->FrameProvider + 0x20))(this->FrameProvider,0);
  uVar7 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  local_38->CurrentEngineFrameIndex = uVar7;
  __return_storage_ptr__->Object = local_38;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)local_30;
  if (local_30 !=
      (TIntrusiveReferenceController<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>
       *)0x0) {
    LOCK();
    *(int *)&local_30->_padding_ = (int)local_30->_padding_ + 1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_30);
  return __return_storage_ptr__;
}

// GetOrCreateNetProfilerStatsCounterTypeIndex @ 14d3e1670

uint __thiscall
TraceServices::FNetTraceAnalyzer::GetOrCreateNetProfilerStatsCounterTypeIndex
          (FNetTraceAnalyzer *this,uint param_1,ENetProfilerStatsCounterType param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  uint *local_18;
  uint *local_10;
  
  puVar5 = (uint *)0x0;
  if (*(int *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x8 !=
      *(int *)&(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x34) {
    puVar4 = *(undefined1 **)
              &(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->
                                         TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap
                                         ).field_0x48 - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x10 +
                         *(longlong *)
                          &(this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap).
                           field_0x0);
        if (*puVar3 == param_1) {
          puVar2 = puVar3 + 1;
          if (puVar3 == (uint *)0x0) {
            puVar2 = puVar5;
          }
          if (puVar2 != (uint *)0x0) {
            return *puVar2;
          }
          break;
        }
        uVar1 = puVar3[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  if (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x8 !=
      *(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TracedNameIdToNetProfilerNameIdMap).field_0x38;
    }
    uVar1 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x48 - 1U
                               & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x10 +
                         *(longlong *)&this->TracedNameIdToNetProfilerNameIdMap);
        if (*puVar3 == param_1) {
          puVar2 = puVar3 + 1;
          if (puVar3 == (uint *)0x0) {
            puVar2 = puVar5;
          }
          puVar5 = (uint *)0x0;
          if (puVar2 != (uint *)0x0) {
            puVar5 = (uint *)(ulonglong)*puVar2;
          }
          break;
        }
        uVar1 = puVar3[2];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res10[0] = param_1;
  local_res8[0] =
       FNetProfilerProvider::AddNetProfilerStatsCounterType
                 (this->NetProfilerProvider,(uint)puVar5,param_2);
  local_18 = local_res10;
  local_10 = local_res8;
  TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->TraceNetStatsCounterIdToNetProfilerStatsCounterTypeIndexMap,
             (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)&stack0x00000020,
             (bool *)&local_18);
  return local_res8[0];
}

// GetTracedEventTypeIndex @ 14d3e3910

uint __thiscall
TraceServices::FNetTraceAnalyzer::GetTracedEventTypeIndex
          (FNetTraceAnalyzer *this,uint param_1,uchar param_2)

{
  uint *puVar1;
  ulonglong local_res8;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_res10;
  ulonglong *local_28;
  uint **local_20;
  
  local_res8 = (ulonglong)CONCAT41(param_1,param_2);
  puVar1 = TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&this->TraceEventTypeToNetProfilerEventTypeIndexMap,local_res8);
  if (puVar1 != (uint *)0x0) {
    return *puVar1;
  }
  local_res10.Value._0_4_ =
       FNetProfilerProvider::AddNetProfilerEventType
                 (this->NetProfilerProvider,param_1,(uint)param_2);
  local_28 = &local_res8;
  local_20 = &local_res10.Value;
  TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->TraceEventTypeToNetProfilerEventTypeIndexMap,&local_res10,(bool *)&local_28);
  return (uint)local_res10.Value;
}

// HandleConnectionClosedEvent @ 14d3e3d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleConnectionClosedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  byte bVar1;
  ushort uVar2;
  FNetProfilerConnectionInternal *pFVar3;
  uint *puVar4;
  ForElementType<FSetElementId> FVar5;
  uint *puVar6;
  uint uVar7;
  uint local_res20 [2];
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_18;
  
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  GetOrCreateActiveGameInstanceState(this,&local_18,(uint)bVar1);
  if (*(int *)&((local_18.Object)->ActiveConnections).field_0x8 !=
      *(int *)&((local_18.Object)->ActiveConnections).field_0x34) {
    FVar5 = *(ForElementType<FSetElementId> *)&((local_18.Object)->ActiveConnections).field_0x40;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&((local_18.Object)->ActiveConnections).field_0x38;
    }
    uVar7 = *(uint *)((longlong)FVar5 +
                     ((ulonglong)(*(int *)&((local_18.Object)->ActiveConnections).field_0x48 - 1) &
                     (ulonglong)uVar2) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar7 * 0x20 +
                         *(longlong *)&(local_18.Object)->ActiveConnections);
        uVar7 = (uint)uVar2;
        if (*puVar4 == uVar7) {
          puVar6 = puVar4 + 2;
          if (puVar4 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            pFVar3 = FNetProfilerProvider::EditConnection
                               (this->NetProfilerProvider,**(uint **)puVar6);
            if (pFVar3 != (FNetProfilerConnectionInternal *)0x0) {
              (pFVar3->Connection).LifeTime.End = this->LastTimeStamp;
            }
            local_res20[0] = uVar7;
            if (*(int *)&((local_18.Object)->ActiveConnections).field_0x8 !=
                *(int *)&((local_18.Object)->ActiveConnections).field_0x34) {
              TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned_int>
                        ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>,0>,FDefaultSetAllocator>
                          *)local_18.Object,(uint)uVar2,local_res20);
            }
            goto LAB_14d3e3dd5;
          }
          break;
        }
        uVar7 = puVar4[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  if (2 < (byte)LogNetTrace._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTrace);
  }
LAB_14d3e3dd5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// HandleConnectionCreatedEvent @ 14d3e3e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleConnectionCreatedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNetProfilerConnectionInternal *pFVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  byte local_res8 [8];
  ushort local_res20 [4];
  uint local_68;
  undefined1 local_64 [20];
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_50;
  byte *local_40;
  ushort *local_38;
  uint *local_30;
  undefined1 *local_28;
  
  local_res8[0] =
       UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  local_res20[0] =
       UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  GetOrCreateActiveGameInstanceState(this,&local_50,(uint)local_res8[0]);
  if (*(int *)&((local_50.Object)->ActiveConnections).field_0x8 !=
      *(int *)&((local_50.Object)->ActiveConnections).field_0x34) {
    FVar6 = *(ForElementType<FSetElementId> *)&((local_50.Object)->ActiveConnections).field_0x40;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&((local_50.Object)->ActiveConnections).field_0x38;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    ((ulonglong)(*(int *)&((local_50.Object)->ActiveConnections).field_0x48 - 1) &
                    (ulonglong)local_res20[0]) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x20 + *(longlong *)&(local_50.Object)->ActiveConnections)
            == (uint)local_res20[0]) {
          local_40 = local_res8;
          local_38 = local_res20;
          `TraceServices::FNetTraceAnalyzer::HandleConnectionCreatedEvent'::__l2::<lambda_1>::
          operator()(&local_40);
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 +
                        *(longlong *)&(local_50.Object)->ActiveConnections);
      } while (iVar3 != -1);
    }
  }
  pFVar4 = FNetProfilerProvider::CreateConnection
                     (this->NetProfilerProvider,(local_50.Object)->GameInstanceIndex);
  local_64._12_8_ = ::operator_new(0x88);
  if ((TReferenceControllerBase<1> *)local_64._12_8_ == (TReferenceControllerBase<1> *)0x0) {
    local_64._4_8_ = ___xmm_00000000000000000000000000000010;
    local_64._12_8_ = _UNK_150651568;
  }
  else {
    ((TReferenceControllerBase<1> *)local_64._12_8_)->SharedReferenceCount = (atomic<int>)0x1;
    ((TReferenceControllerBase<1> *)local_64._12_8_)->WeakReferenceCount = (atomic<int>)0x1;
    ((TReferenceControllerBase<1> *)local_64._12_8_)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNetTraceConnectionState_FNetTraceAnalyzer_TraceServices___00_SharedPointerInternals__6B_
    ;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x10))->_padding_ = 0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x10))->SharedReferenceCount =
         (atomic<int>)0x0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x10))->WeakReferenceCount = (atomic<int>)0x0
    ;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x20))->_padding_ = 0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x20))->SharedReferenceCount =
         (atomic<int>)0x0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x20))->WeakReferenceCount = (atomic<int>)0x0
    ;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x80))->_padding_ = 0;
    local_64._4_8_ = local_64._12_8_ + 0x10;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x30))->_padding_ = 0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x30))->SharedReferenceCount =
         (atomic<int>)0x0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x30))->WeakReferenceCount = (atomic<int>)0x0
    ;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x40))->_padding_ = 0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x40))->SharedReferenceCount =
         (atomic<int>)0x0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x40))->WeakReferenceCount = (atomic<int>)0x0
    ;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x50))->_padding_ = 0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x50))->SharedReferenceCount =
         (atomic<int>)0x0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x50))->WeakReferenceCount = (atomic<int>)0x0
    ;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x60))->_padding_ = 0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x60))->SharedReferenceCount =
         (atomic<int>)0x0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x60))->WeakReferenceCount = (atomic<int>)0x0
    ;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x70))->_padding_ = 0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x70))->SharedReferenceCount =
         (atomic<int>)0x0;
    ((TReferenceControllerBase<1> *)(local_64._12_8_ + 0x70))->WeakReferenceCount = (atomic<int>)0x0
    ;
    if (((TReferenceControllerBase<1> *)local_64._4_8_ == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_68 = (uint)local_res20[0];
  local_30 = &local_68;
  local_28 = local_64 + 4;
  TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned_int_&&,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_const_&>_>
            ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>,0>,FDefaultSetAllocator>
              *)local_50.Object,
             (TPairInitializer<unsigned_int_&&,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_const_&>
              *)local_64,(bool *)&local_30);
  uVar5 = ((uint)local_res20[0] << 0x10 ^ *(uint *)&(pFVar4->Connection).ConnectionIndex) &
          0x3fff0000 ^ *(uint *)&(pFVar4->Connection).ConnectionIndex;
  *(uint *)&(pFVar4->Connection).ConnectionIndex = uVar5;
  (pFVar4->Connection).LifeTime.Begin = this->LastTimeStamp;
  *(uint *)(longlong *)local_64._4_8_ = uVar5 & 0xffff;
  *(undefined4 *)((longlong)(longlong *)local_64._4_8_ + 4) = 0;
  *(atomic<int> *)(local_64._4_8_ + 8) = (atomic<int>)0x0;
  *(atomic<int> *)(local_64._4_8_ + 0xc) = (atomic<int>)0x0;
  *(undefined4 *)&((TReferenceControllerBase<1> *)(local_64._4_8_ + 0x10))->_padding_ = 0;
  *(undefined4 *)
   ((longlong)&((TReferenceControllerBase<1> *)(local_64._4_8_ + 0x10))->_padding_ + 4) = 0;
  ((TReferenceControllerBase<1> *)(local_64._4_8_ + 0x10))->SharedReferenceCount = (atomic<int>)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_64._12_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  return;
}

// HandleConnectionStateUpdatedEvent @ 14d3e4090

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleConnectionStateUpdatedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  byte bVar1;
  uchar uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_18;
  
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  uVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                    (param_2,"ConnectionStateValue",'\0');
  GetOrCreateActiveGameInstanceState(this,&local_18,(uint)bVar1);
  if (*(int *)&((local_18.Object)->ActiveConnections).field_0x8 !=
      *(int *)&((local_18.Object)->ActiveConnections).field_0x34) {
    puVar7 = *(undefined1 **)&((local_18.Object)->ActiveConnections).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &((local_18.Object)->ActiveConnections).field_0x38;
    }
    uVar4 = *(uint *)(puVar7 + ((ulonglong)
                                (*(int *)&((local_18.Object)->ActiveConnections).field_0x48 - 1) &
                               (ulonglong)uVar3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar5 = (uint *)((longlong)(int)uVar4 * 0x20 +
                         *(longlong *)&(local_18.Object)->ActiveConnections);
        if (*puVar5 == (uint)uVar3) {
          puVar6 = puVar5 + 2;
          if (puVar5 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            *(uchar *)(*(longlong *)puVar6 + 0x70) = uVar2;
          }
          break;
        }
        uVar4 = puVar5[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// HandleConnectionUpdatedEvent @ 14d3e4190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleConnectionUpdatedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  FNetProfilerConnectionInternal *pFVar5;
  wchar_t *pwVar6;
  undefined1 *puVar7;
  uint *puVar8;
  FString local_48;
  FString local_38;
  FScriptContainerElement *local_28;
  int local_20;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_18;
  
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  UE::Trace::IAnalyzer::FEventData::GetString(param_2,"Name",&local_38);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  UE::Trace::IAnalyzer::FEventData::GetString(param_2,"Address",&local_48);
  GetOrCreateActiveGameInstanceState(this,&local_18,(uint)bVar1);
  if (*(int *)&((local_18.Object)->ActiveConnections).field_0x8 !=
      *(int *)&((local_18.Object)->ActiveConnections).field_0x34) {
    puVar7 = *(undefined1 **)&((local_18.Object)->ActiveConnections).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &((local_18.Object)->ActiveConnections).field_0x38;
    }
    uVar3 = *(uint *)(puVar7 + ((ulonglong)
                                (*(int *)&((local_18.Object)->ActiveConnections).field_0x48 - 1) &
                               (ulonglong)uVar2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar3 * 0x20 +
                         *(longlong *)&(local_18.Object)->ActiveConnections);
        if (*puVar4 == (uint)uVar2) {
          puVar8 = puVar4 + 2;
          if (puVar4 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 != (uint *)0x0) {
            pFVar5 = FNetProfilerProvider::EditConnection
                               (this->NetProfilerProvider,**(uint **)puVar8);
            if (pFVar5 != (FNetProfilerConnectionInternal *)0x0) {
              local_28 = local_38.Data.AllocatorInstance.Data;
              puVar4 = (uint *)(ulonglong)(local_38.Data.ArrayNum - 1);
              if (local_38.Data.ArrayNum == 0) {
                puVar4 = (uint *)0x0;
              }
              local_20 = (int)puVar4;
              pwVar6 = (wchar_t *)
                       (**(code **)((longlong)*this->Session + 200))(this->Session,&local_28);
              (pFVar5->Connection).Name = pwVar6;
              local_28 = local_48.Data.AllocatorInstance.Data;
              local_20 = local_48.Data.ArrayNum + -1;
              if (local_48.Data.ArrayNum == 0) {
                local_20 = 0;
              }
              pwVar6 = (wchar_t *)
                       (**(code **)((longlong)*this->Session + 200))(this->Session,&local_28);
              (pFVar5->Connection).AddressString = pwVar6;
            }
            goto LAB_14d3e4292;
          }
          break;
        }
        uVar3 = puVar4[6];
      } while (uVar3 != 0xffffffff);
    }
  }
  if (2 < (byte)LogNetTrace._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTrace);
  }
LAB_14d3e4292:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleFrameStatsCounterEvent @ 14d3e4800

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleFrameStatsCounterEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  int *piVar1;
  FNetTraceGameInstanceState *pFVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  double dVar9;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_38;
  
  uVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"Timestamp",0);
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"StatsValue",0);
  bVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"NameId",0);
  dVar9 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1->EventTime,uVar8);
  this->LastTimeStamp = dVar9;
  uVar6 = (**(code **)((longlong)*this->FrameProvider + 0x50))(this->FrameProvider,0,SUB84(dVar9,0))
  ;
  GetOrCreateActiveGameInstanceState(this,&local_38,(uint)bVar3);
  pFVar2 = local_38.Object;
  if ((local_38.Object)->CurrentEngineFrameIndex < uVar6) {
    FlushFrameStatsCounters(this,local_38.Object);
    pFVar2->CurrentEngineFrameIndex = uVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  uVar5 = GetOrCreateNetProfilerStatsCounterTypeIndex(this,uVar5,Frame);
  GetOrCreateActiveGameInstanceState(this,&local_38,(uint)bVar3);
  iVar7 = ((local_38.Object)->FrameStatsCounters).ArrayNum;
  piVar1 = &((local_38.Object)->FrameStatsCounters).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&((local_38.Object)->FrameStatsCounters).AllocatorInstance,piVar1);
  }
  ((local_38.Object)->FrameStatsCounters).ArrayNum = iVar7 + 1;
  *(ulonglong *)
   (((local_38.Object)->FrameStatsCounters).AllocatorInstance.Data + (longlong)iVar7 * 8) =
       CONCAT44(uVar4,uVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// HandleGameInstanceUpdatedEvent @ 14d3e4970

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleGameInstanceUpdatedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  byte bVar1;
  bool bVar2;
  FNetProfilerGameInstanceInternal *pFVar3;
  wchar_t *pwVar4;
  FString local_38;
  FScriptContainerElement *local_28;
  int local_20;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_18;
  
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  bVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(param_2,"bIsServer",false);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  UE::Trace::IAnalyzer::FEventData::GetString(param_2,"Name",&local_38);
  GetOrCreateActiveGameInstanceState(this,&local_18,(uint)bVar1);
  pFVar3 = FNetProfilerProvider::EditGameInstance
                     (this->NetProfilerProvider,(local_18.Object)->GameInstanceIndex);
  if (pFVar3 != (FNetProfilerGameInstanceInternal *)0x0) {
    (pFVar3->Instance).bIsServer = bVar2;
    local_28 = local_38.Data.AllocatorInstance.Data;
    local_20 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      local_20 = 0;
    }
    pwVar4 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_28);
    (pFVar3->Instance).InstanceName = pwVar4;
    FNetProfilerProvider::MarkGameInstancesDirty(this->NetProfilerProvider);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleObjectCreatedEvent @ 14d3e5140

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleObjectCreatedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  uint *puVar5;
  FNetTraceActiveObjectState *pFVar6;
  FNetProfilerObjectInstance *pFVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  ulong64 local_res20;
  uint local_58;
  uint local_54;
  ulong64 *local_50;
  uint *local_48;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_40;
  
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"TypeId",0);
  local_res20 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"ObjectId",0);
  uVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"NameId",0);
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  GetOrCreateActiveGameInstanceState(this,&local_40,(uint)bVar1);
  puVar10 = (uint *)0x0;
  if (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x8 !=
      *(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TracedNameIdToNetProfilerNameIdMap).field_0x38;
    }
    uVar3 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x48 - 1U
                               & uVar2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar3 * 0x10 +
                         *(longlong *)&this->TracedNameIdToNetProfilerNameIdMap);
        if (*puVar8 == uVar2) {
          puVar5 = puVar8 + 1;
          if (puVar8 == (uint *)0x0) {
            puVar5 = puVar10;
          }
          puVar10 = (uint *)0x0;
          if (puVar5 != (uint *)0x0) {
            puVar10 = (uint *)(ulonglong)*puVar5;
          }
          break;
        }
        uVar3 = puVar8[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  pFVar6 = TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
           ::Find((TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
                   *)&(local_40.Object)->ActiveObjects,local_res20);
  uVar2 = (uint)puVar10;
  if ((pFVar6 != (FNetTraceActiveObjectState *)0x0) &&
     (pFVar7 = FNetProfilerProvider::EditObject
                         (this->NetProfilerProvider,(local_40.Object)->GameInstanceIndex,
                          pFVar6->ObjectIndex), pFVar7 != (FNetProfilerObjectInstance *)0x0)) {
    if ((pFVar7->NameIndex == uVar2) || (pFVar7->NameIndex == this->PendingNameIndex)) {
      (pFVar7->LifeTime).Begin = this->LastTimeStamp;
      pFVar7->NetObjectId = local_res20;
      pFVar7->TypeId = uVar4;
      pFVar7->NameIndex = uVar2;
      pFVar6->NameIndex = uVar2;
      goto LAB_14d3e52eb;
    }
    (pFVar7->LifeTime).End = this->LastTimeStamp;
    TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
    ::Remove((TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
              *)&(local_40.Object)->ActiveObjects,local_res20);
  }
  pFVar7 = FNetProfilerProvider::CreateObject
                     (this->NetProfilerProvider,(local_40.Object)->GameInstanceIndex);
  (pFVar7->LifeTime).Begin = this->LastTimeStamp;
  pFVar7->NameIndex = uVar2;
  pFVar7->NetObjectId = local_res20;
  pFVar7->TypeId = uVar4;
  local_58 = pFVar7->ObjectIndex;
  local_50 = &local_res20;
  local_48 = &local_58;
  local_54 = uVar2;
  TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState_&&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
              *)&(local_40.Object)->ActiveObjects,
             (TPairInitializer<unsigned___int64_const_&,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState_&&>
              *)&stack0x00000008,(bool *)&local_50);
LAB_14d3e52eb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  return;
}

// HandleObjectDestroyedEvent @ 14d3e5340

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleObjectDestroyedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  ulong64 uVar4;
  longlong lVar5;
  FNetProfilerObjectInstance *pFVar6;
  int iVar7;
  undefined1 *puVar8;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_18;
  
  bVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"ObjectId",0);
  GetOrCreateActiveGameInstanceState(this,&local_18,(uint)bVar3);
  if (*(int *)&((local_18.Object)->ActiveObjects).field_0x8 !=
      *(int *)&((local_18.Object)->ActiveObjects).field_0x34) {
    puVar8 = *(undefined1 **)&((local_18.Object)->ActiveObjects).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &((local_18.Object)->ActiveObjects).field_0x38;
    }
    iVar7 = *(int *)(puVar8 + ((uVar4 >> 0x20) * 0x17 + uVar4 &
                              (ulonglong)
                              (*(int *)&((local_18.Object)->ActiveObjects).field_0x48 - 1)) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&(local_18.Object)->ActiveObjects;
      do {
        lVar5 = (longlong)iVar7;
        if (*(ulong64 *)(lVar1 + lVar5 * 0x18) == uVar4) {
          uVar2 = *(undefined8 *)(lVar1 + 8 + lVar5 * 0x18);
          TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
                           *)&(local_18.Object)->ActiveObjects,iVar7);
          pFVar6 = FNetProfilerProvider::EditObject
                             (this->NetProfilerProvider,(local_18.Object)->GameInstanceIndex,
                              (uint)uVar2);
          if (pFVar6 != (FNetProfilerObjectInstance *)0x0) {
            (pFVar6->LifeTime).End = this->LastTimeStamp;
          }
          break;
        }
        iVar7 = *(int *)(lVar1 + 0x10 + lVar5 * 0x18);
      } while (iVar7 != -1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// HandleObjectExistsEvent @ 14d3e5450

void __thiscall
TraceServices::FNetTraceAnalyzer::HandleObjectExistsEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  uint *puVar5;
  FNetTraceActiveObjectState *pFVar6;
  FNetProfilerObjectInstance *pFVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint *puVar10;
  ulong64 local_res20;
  uint local_58;
  uint local_54;
  ulong64 *local_50;
  uint *local_48;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_40;
  
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"TypeId",0);
  local_res20 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"ObjectId",0);
  uVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"NameId",0);
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  GetOrCreateActiveGameInstanceState(this,&local_40,(uint)bVar1);
  puVar10 = (uint *)0x0;
  if (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x8 !=
      *(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TracedNameIdToNetProfilerNameIdMap).field_0x38;
    }
    uVar3 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x48 - 1U
                               & uVar2) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar3 * 0x10 +
                         *(longlong *)&this->TracedNameIdToNetProfilerNameIdMap);
        if (*puVar8 == uVar2) {
          puVar5 = puVar8 + 1;
          if (puVar8 == (uint *)0x0) {
            puVar5 = puVar10;
          }
          puVar10 = (uint *)0x0;
          if (puVar5 != (uint *)0x0) {
            puVar10 = (uint *)(ulonglong)*puVar5;
          }
          break;
        }
        uVar3 = puVar8[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  pFVar6 = TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
           ::Find((TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
                   *)&(local_40.Object)->ActiveObjects,local_res20);
  uVar2 = (uint)puVar10;
  if ((pFVar6 != (FNetTraceActiveObjectState *)0x0) &&
     (pFVar7 = FNetProfilerProvider::EditObject
                         (this->NetProfilerProvider,(local_40.Object)->GameInstanceIndex,
                          pFVar6->ObjectIndex), pFVar7 != (FNetProfilerObjectInstance *)0x0)) {
    if ((pFVar7->NameIndex == uVar2) || (pFVar7->NameIndex == this->PendingNameIndex)) {
      (pFVar7->LifeTime).Begin = this->StartTimeStamp;
      pFVar7->NetObjectId = local_res20;
      pFVar7->TypeId = uVar4;
      pFVar7->NameIndex = uVar2;
      pFVar6->NameIndex = uVar2;
      goto LAB_14d3e55fb;
    }
    (pFVar7->LifeTime).End = this->LastTimeStamp;
    TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
    ::Remove((TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
              *)&(local_40.Object)->ActiveObjects,local_res20);
  }
  pFVar7 = FNetProfilerProvider::CreateObject
                     (this->NetProfilerProvider,(local_40.Object)->GameInstanceIndex);
  (pFVar7->LifeTime).Begin = this->StartTimeStamp;
  pFVar7->NameIndex = uVar2;
  pFVar7->NetObjectId = local_res20;
  pFVar7->TypeId = uVar4;
  local_58 = pFVar7->ObjectIndex;
  local_50 = &local_res20;
  local_48 = &local_58;
  local_54 = uVar2;
  TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState_&&>_>
            ((TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
              *)&(local_40.Object)->ActiveObjects,
             (TPairInitializer<unsigned___int64_const_&,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState_&&>
              *)&stack0x00000008,(bool *)&local_50);
LAB_14d3e55fb:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.SharedReferenceCount.ReferenceController);
  return;
}

// HandlePacketContentEvent @ 14d3e5650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TraceServices::FNetTraceAnalyzer::HandlePacketContentEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> *pTVar7;
  FNetTraceGameInstanceState *pFVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  FNetTraceConnectionState *pFVar16;
  FArrayReader *this_00;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  FNetTraceActiveObjectState *pFVar20;
  FNetProfilerObjectInstance *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  uint *puVar24;
  uint *puVar25;
  FScriptContainerElement *pFVar26;
  int *piVar27;
  FScriptContainerElement *pFVar28;
  int *piVar29;
  int iVar30;
  uint uVar31;
  undefined1 *puVar32;
  int *piVar33;
  TMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>_>
  *this_01;
  longlong lVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  uint *puVar37;
  undefined1 auStack_128 [32];
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  char local_d8;
  byte local_d7;
  FScriptContainerElement *local_d0;
  FNetTraceAnalyzer *local_c8;
  TArray<TraceServices::FNetProfilerContentEvent,TSizedDefaultAllocator<32>_> *local_c0;
  FNetTraceActiveObjectState local_b8;
  uint local_b0;
  uint local_ac;
  TArray<TraceServices::FNetTraceAnalyzer::FBunchInfo,TSizedDefaultAllocator<32>_> *local_a8;
  uint local_a0;
  uint local_9c;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_98;
  TPairInitializer<unsigned___int64_const_&,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState_&&>
  local_88;
  FScriptContainerElement *local_78;
  FScriptContainerElement **local_70;
  uint *local_68;
  undefined8 local_60;
  int iStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_c8 = this;
  uVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  bVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  bVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"PacketType",'\0');
  local_ac = (uint)bVar9;
  local_d7 = bVar10;
  GetOrCreateActiveGameInstanceState(this,&local_98,local_ac);
  local_b0 = (uint)uVar12;
  pFVar16 = GetActiveConnectionState(this,(uint)bVar9,local_b0);
  if (pFVar16 == (FNetTraceConnectionState *)0x0) goto LAB_14d3e6058;
  local_c0 = pFVar16->BunchEvents + bVar10;
  local_a8 = pFVar16->BunchInfos + bVar10;
  this_00 = UE::Trace::IAnalyzer::FEventData::GetArrayImpl(param_1->EventData,"Data");
  uVar13 = UE::Trace::IAnalyzer::FArrayReader::Num(this_00);
  pFVar17 = UE::Trace::IAnalyzer::FArrayReader::GetImpl(this_00,0,&local_d8);
  if (pFVar17 == (FScriptContainerElement *)0x0) {
LAB_14d3e5761:
    pFVar17 = (FScriptContainerElement *)0x0;
  }
  else {
    iVar30 = -(int)local_d8;
    if (iVar30 < 0) {
      iVar30 = (int)local_d8;
    }
    if (iVar30 != 1) goto LAB_14d3e5761;
  }
  if (((int)uVar13 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (pFVar17 == (FScriptContainerElement *)0x0) {
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_1->EventData);
    pFVar17 = (FScriptContainerElement *)
              UE::Trace::IAnalyzer::FEventData::GetAttachment(param_1->EventData);
    if (((int)uVar13 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar23 = (FScriptContainerElement *)0x0;
  local_78 = pFVar17 + (int)uVar13;
  pFVar18 = pFVar17;
  pFVar19 = pFVar23;
  if (pFVar17 < local_78) {
    do {
      pTVar6 = local_c0;
      pFVar22 = (FScriptContainerElement *)0x0;
      FVar1 = *pFVar18;
      pFVar17 = pFVar18 + 1;
      if ((FVar1 == (FScriptContainerElement)0x0) || (FVar1 == (FScriptContainerElement)0x1)) {
        iVar30 = local_c0->ArrayNum;
        if (iVar30 == local_c0->ArrayMax) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,&local_c0->AllocatorInstance,&local_c0->ArrayMax);
        }
        pFVar8 = local_98.Object;
        pFVar35 = (FScriptContainerElement *)0x0;
        pFVar22 = (pTVar6->AllocatorInstance).Data;
        pTVar6->ArrayNum = iVar30 + 1;
        lVar34 = (longlong)iVar30 * 0x20;
        *(undefined8 *)(pFVar22 + lVar34) = 0;
        *(undefined8 *)(pFVar22 + lVar34 + 8) = 0;
        *(undefined8 *)(pFVar22 + lVar34 + 0x10) = 0;
        *(undefined8 *)(pFVar22 + lVar34 + 0x10 + 8) = 0;
        FVar2 = *pFVar17;
        pFVar17 = pFVar18 + 2;
        pFVar18 = pFVar35;
        pFVar26 = pFVar35;
        do {
          FVar3 = *pFVar17;
          pFVar17 = pFVar17 + 1;
          bVar9 = (byte)pFVar18;
          pFVar18 = pFVar18 + 7;
          pFVar26 = (FScriptContainerElement *)
                    ((ulonglong)pFVar26 | (ulonglong)((byte)FVar3 & 0x7f) << (bVar9 & 0x3f));
          pFVar28 = pFVar35;
          pFVar36 = pFVar35;
        } while ((char)FVar3 < '\0');
        do {
          FVar3 = *pFVar17;
          pFVar17 = pFVar17 + 1;
          pFVar36 = (FScriptContainerElement *)
                    ((ulonglong)pFVar36 | (ulonglong)((byte)FVar3 & 0x7f) << ((byte)pFVar28 & 0x3f))
          ;
          pFVar28 = pFVar28 + 7;
        } while ((char)FVar3 < '\0');
        pFVar19 = pFVar19 + (longlong)pFVar36;
        pFVar18 = pFVar35;
        do {
          FVar3 = *pFVar17;
          pFVar17 = pFVar17 + 1;
          bVar9 = (byte)pFVar35;
          pFVar35 = pFVar35 + 7;
          pFVar18 = (FScriptContainerElement *)
                    ((ulonglong)pFVar18 | (ulonglong)((byte)FVar3 & 0x7f) << (bVar9 & 0x3f));
        } while ((char)FVar3 < '\0');
        *(undefined8 *)(pFVar22 + lVar34 + 0x14) = 0;
        *(undefined8 *)(pFVar22 + lVar34 + 8) = 0;
        *(ulonglong *)(pFVar22 + lVar34) =
             ((longlong)(pFVar18 + (longlong)pFVar19 + (longlong)pFVar23) * 0x1000000 ^
             (ulonglong)(pFVar23 + (longlong)pFVar19)) & 0xffff000000ffffff ^
             ((ulonglong)(pFVar23 + (longlong)pFVar19) ^ *(ulonglong *)(pFVar22 + lVar34)) &
             0xffff000000000000 ^
             (longlong)(pFVar18 + (longlong)pFVar19 + (longlong)pFVar23) * 0x1000000;
        pFVar22[lVar34 + 6] = FVar2;
        local_d0 = pFVar26;
        if (FVar1 == (FScriptContainerElement)0x0) {
          pFVar20 = TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
                    ::Find((TMapBase<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>_>
                            *)&(local_98.Object)->ActiveObjects,(ulong64)pFVar26);
          if (pFVar20 == (FNetTraceActiveObjectState *)0x0) {
            if (pFVar26 != (FScriptContainerElement *)0x0) {
              pFVar21 = FNetProfilerProvider::CreateObject
                                  (local_c8->NetProfilerProvider,
                                   (local_98.Object)->GameInstanceIndex);
              (pFVar21->LifeTime).Begin = local_c8->LastTimeStamp;
              local_9c = local_c8->PendingNameIndex;
              pFVar21->NameIndex = local_9c;
              pFVar21->TypeId = 0;
              local_70 = &local_d0;
              pFVar21->NetObjectId = (ulong64)local_d0;
              local_a0 = pFVar21->ObjectIndex;
              local_68 = &local_a0;
              TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<unsigned___int64_const_&,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState_&&>_>
                        ((TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
                          *)&pFVar8->ActiveObjects,&local_88,(bool *)&local_70);
              *(uint *)(pFVar22 + lVar34 + 0x14) = pFVar21->NameIndex;
              *(uint *)(pFVar22 + lVar34 + 0x18) = pFVar21->ObjectIndex;
            }
          }
          else {
            *(uint *)(pFVar22 + lVar34 + 0x14) = pFVar20->NameIndex;
            *(uint *)(pFVar22 + lVar34 + 0x18) = pFVar20->ObjectIndex;
          }
        }
        else if (FVar1 == (FScriptContainerElement)0x1) {
          if ((pFVar26 != (FScriptContainerElement *)((ulonglong)pFVar26 & 0xffffffff)) &&
             (local_108 = pFVar26,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)&(local_c8->TracedNameIdToNetProfilerNameIdMap).field_0x8 !=
              *(int *)&(local_c8->TracedNameIdToNetProfilerNameIdMap).field_0x34) {
            puVar4 = *(undefined1 **)&(local_c8->TracedNameIdToNetProfilerNameIdMap).field_0x40;
            puVar32 = &(local_c8->TracedNameIdToNetProfilerNameIdMap).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar32 = puVar4;
            }
            iVar30 = *(int *)(puVar32 +
                             ((ulonglong)
                              (*(int *)&(local_c8->TracedNameIdToNetProfilerNameIdMap).field_0x48 -
                              1) & (ulonglong)pFVar26 & 0xffffffff) * 4);
            if (iVar30 != -1) {
              do {
                piVar29 = (int *)((longlong)iVar30 * 0x10 +
                                 *(longlong *)&local_c8->TracedNameIdToNetProfilerNameIdMap);
                if (*piVar29 == (int)pFVar26) {
                  piVar27 = piVar29 + 1;
                  if (piVar29 == (int *)0x0) {
                    piVar27 = (int *)0x0;
                  }
                  if (piVar27 != (int *)0x0) {
                    *(int *)(pFVar22 + lVar34 + 0x14) = *piVar27;
                    goto LAB_14d3e5fe6;
                  }
                  break;
                }
                iVar30 = piVar29[2];
              } while (iVar30 != -1);
            }
          }
          if (2 < (byte)LogNetTrace._0_1_) {
            local_108 = (FScriptContainerElement *)0x150d98228;
            if (local_d7 != 0) {
              local_108 = (FScriptContainerElement *)0x150d98020;
            }
            local_100 = local_d0;
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTrace);
          }
        }
LAB_14d3e5fe6:
        uVar13 = GetTracedEventTypeIndex
                           (local_c8,*(uint *)(pFVar22 + lVar34 + 0x14),(uchar)pFVar22[lVar34 + 6]);
        *(uint *)(pFVar22 + lVar34 + 0x10) = uVar13;
      }
      else {
        pFVar18 = pFVar22;
        if (FVar1 == (FScriptContainerElement)0x2) {
          do {
            FVar1 = *pFVar17;
            pFVar17 = pFVar17 + 1;
            bVar9 = (byte)pFVar22;
            pFVar22 = pFVar22 + 7;
            pFVar18 = (FScriptContainerElement *)
                      ((ulonglong)((byte)FVar1 & 0x7f) << (bVar9 & 0x3f) | (ulonglong)pFVar18);
          } while ((char)FVar1 < '\0');
          if ((pFVar18 != (FScriptContainerElement *)((ulonglong)pFVar18 & 0xffffffff)) &&
             (local_108 = pFVar18,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar26 = (FScriptContainerElement *)0x0;
          pFVar19 = pFVar26;
          pFVar22 = pFVar26;
          if (this->NetTraceVersion < 4) {
            do {
              FVar1 = *pFVar17;
              pFVar17 = pFVar17 + 1;
              pFVar22 = (FScriptContainerElement *)
                        ((ulonglong)pFVar22 |
                        (ulonglong)((byte)FVar1 & 0x7f) << ((byte)pFVar19 & 0x3f));
              pFVar19 = pFVar19 + 7;
              pFVar35 = pFVar26;
            } while ((char)FVar1 < '\0');
            do {
              FVar1 = *pFVar17;
              pFVar17 = pFVar17 + 1;
              bVar9 = (byte)pFVar26;
              pFVar26 = pFVar26 + 7;
              pFVar35 = (FScriptContainerElement *)
                        ((ulonglong)pFVar35 | (ulonglong)((byte)FVar1 & 0x7f) << (bVar9 & 0x3f));
            } while ((char)FVar1 < '\0');
            iVar30 = (int)pFVar22 + (int)pFVar35;
          }
          else {
            do {
              FVar1 = *pFVar17;
              pFVar17 = pFVar17 + 1;
              bVar9 = (byte)pFVar26;
              pFVar26 = pFVar26 + 7;
              pFVar19 = (FScriptContainerElement *)
                        ((ulonglong)((byte)FVar1 & 0x7f) << (bVar9 & 0x3f) | (ulonglong)pFVar19);
            } while ((char)FVar1 < '\0');
            iVar30 = (int)pFVar19;
            if ((pFVar19 != (FScriptContainerElement *)((ulonglong)pFVar19 & 0xffffffff)) &&
               (local_108 = pFVar19,
               bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IntFitsIn<OutType>(In)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
               bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          pTVar7 = local_a8;
          piVar29 = (int *)0x0;
          if ((int)pFVar18 == 0) {
            local_50 = local_c0->ArrayNum;
LAB_14d3e5c8a:
            iStack_48 = 0;
          }
          else {
            piVar27 = piVar29;
            if (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x8 !=
                *(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x34) {
              puVar4 = *(undefined1 **)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x40;
              puVar32 = &(this->TracedNameIdToNetProfilerNameIdMap).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar32 = puVar4;
              }
              iVar15 = *(int *)(puVar32 +
                               ((ulonglong)
                                (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x48 - 1)
                               & (ulonglong)pFVar18 & 0xffffffff) * 4);
              if (iVar15 != -1) {
                do {
                  piVar27 = (int *)((longlong)iVar15 * 0x10 +
                                   *(longlong *)&this->TracedNameIdToNetProfilerNameIdMap);
                  if (*piVar27 == (int)pFVar18) break;
                  iVar15 = piVar27[2];
                  piVar27 = piVar29;
                } while (iVar15 != -1);
              }
            }
            piVar33 = piVar27 + 1;
            if (piVar27 == (int *)0x0) {
              piVar33 = piVar29;
            }
            local_50 = local_c0->ArrayNum;
            if (piVar33 == (int *)0x0) goto LAB_14d3e5c8a;
            iStack_48 = *piVar33;
          }
          uStack_54 = 0;
          local_60 = 0;
          pFVar18 = (local_a8->AllocatorInstance).Data;
          iStack_58 = iVar30;
          if ((pFVar18 <= (FScriptContainerElement *)&local_60) &&
             ((FScriptContainerElement *)&local_60 < pFVar18 + (longlong)local_a8->ArrayMax * 0x20))
          {
            local_f0 = (longlong)local_a8->ArrayNum;
            local_e8 = 0x20;
            local_108 = (FScriptContainerElement *)&local_60;
            local_100 = pFVar18;
            local_f8 = (longlong)local_a8->ArrayMax;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar30 = pTVar7->ArrayNum;
          if (iVar30 == pTVar7->ArrayMax) {
            iVar30 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x820,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
          }
          pFVar19 = (FScriptContainerElement *)0x0;
          pTVar7->ArrayNum = iVar30 + 1;
          pFVar22 = (pTVar7->AllocatorInstance).Data;
          pFVar18 = pFVar22 + (longlong)iVar30 * 0x20;
          *(undefined4 *)pFVar18 = (undefined4)local_60;
          *(undefined4 *)(pFVar18 + 4) = local_60._4_4_;
          *(int *)(pFVar18 + 8) = iStack_58;
          *(undefined4 *)(pFVar18 + 0xc) = uStack_54;
          pFVar22 = pFVar22 + (longlong)iVar30 * 0x20 + 0x10;
          *(ulonglong *)pFVar22 = CONCAT44(uStack_4c,local_50);
          *(ulonglong *)(pFVar22 + 8) = CONCAT44(uStack_44,iStack_48);
        }
        else if (FVar1 == (FScriptContainerElement)0x3) {
          do {
            FVar1 = *pFVar17;
            pFVar17 = pFVar17 + 1;
            bVar9 = (byte)pFVar22;
            pFVar22 = pFVar22 + 7;
            pFVar18 = (FScriptContainerElement *)
                      ((ulonglong)((byte)FVar1 & 0x7f) << (bVar9 & 0x3f) | (ulonglong)pFVar18);
          } while ((char)FVar1 < '\0');
          if ((pFVar18 != (FScriptContainerElement *)((ulonglong)pFVar18 & 0xffffffff)) &&
             (local_108 = pFVar18,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar23 = (FScriptContainerElement *)0x0;
          pFVar22 = pFVar23;
          do {
            FVar1 = *pFVar17;
            pFVar17 = pFVar17 + 1;
            bVar9 = (byte)pFVar23;
            pFVar23 = pFVar23 + 7;
            pFVar22 = (FScriptContainerElement *)
                      ((ulonglong)((byte)FVar1 & 0x7f) << (bVar9 & 0x3f) | (ulonglong)pFVar22);
          } while ((char)FVar1 < '\0');
          if ((pFVar22 != (FScriptContainerElement *)((ulonglong)pFVar22 & 0xffffffff)) &&
             (local_108 = pFVar22,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("IntFitsIn<OutType>(In)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                 ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar7 = local_a8;
          iVar30 = local_a8->ArrayNum;
          uVar31 = iVar30 - 1;
          uVar13 = 0;
          if ((int)uVar31 < iVar30) {
            uVar13 = ~uVar31 >> 0x1f;
          }
          if (uVar13 == 0) {
            local_108 = (FScriptContainerElement *)(longlong)(int)uVar31;
            local_100 = (FScriptContainerElement *)(longlong)iVar30;
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          puVar24 = (uint *)0x0;
          pFVar26 = (pTVar7->AllocatorInstance).Data;
          lVar34 = (longlong)pTVar7->ArrayNum * 0x20;
          *(int *)(pFVar26 + lVar34 + -0xc) = (int)pFVar18;
          *(int *)(pFVar26 + lVar34 + -0x10) = local_c0->ArrayNum - (int)pFVar18;
          if ((int)pFVar22 == 0) {
            pFVar23 = (FScriptContainerElement *)(ulonglong)*(uint *)(pFVar26 + lVar34 + -0x18);
          }
          else {
            puVar25 = puVar24;
            puVar37 = puVar24;
            if (1 < this->NetTraceVersion) {
              do {
                FVar1 = *pFVar17;
                pFVar17 = pFVar17 + 1;
                puVar37 = (uint *)((ulonglong)puVar37 |
                                  (ulonglong)((byte)FVar1 & 0x7f) << ((byte)puVar25 & 0x3f));
                puVar25 = (uint *)((longlong)puVar25 + 7);
              } while ((char)FVar1 < '\0');
              puVar25 = (uint *)(ulonglong)((uint)puVar37 & 0xfffff);
              if (2 < this->NetTraceVersion) {
                puVar25 = puVar37;
              }
              *(uint **)(pFVar26 + lVar34 + -0x20) = puVar25;
              uVar31 = (uint)puVar25 & 0xfffff;
              uVar13 = *(uint *)(pFVar26 + lVar34 + -8);
              if (uVar13 == 0) {
                if (*(int *)&((local_98.Object)->ChannelNames).field_0x8 !=
                    *(int *)&((local_98.Object)->ChannelNames).field_0x34) {
                  puVar4 = *(undefined1 **)&((local_98.Object)->ChannelNames).field_0x40;
                  puVar32 = &((local_98.Object)->ChannelNames).field_0x38;
                  if (puVar4 != (undefined1 *)0x0) {
                    puVar32 = puVar4;
                  }
                  uVar13 = *(uint *)(puVar32 +
                                    (ulonglong)
                                    (*(int *)&((local_98.Object)->ChannelNames).field_0x48 - 1U &
                                    uVar31) * 4);
                  if (uVar13 != 0xffffffff) {
                    do {
                      puVar25 = (uint *)((longlong)(int)uVar13 * 0x10 +
                                        *(longlong *)&(local_98.Object)->ChannelNames);
                      if (*puVar25 == uVar31) {
                        puVar37 = puVar25 + 1;
                        if (puVar25 == (uint *)0x0) {
                          puVar37 = puVar24;
                        }
                        if (puVar37 != (uint *)0x0) {
                          uVar13 = *puVar37;
                          goto LAB_14d3e5aba;
                        }
                        break;
                      }
                      uVar13 = puVar25[2];
                    } while (uVar13 != 0xffffffff);
                  }
                }
                uVar13 = 0;
LAB_14d3e5aba:
                *(uint *)(pFVar26 + lVar34 + -8) = uVar13;
              }
              else {
                this_01 = &(local_98.Object)->ChannelNames;
                local_b8.ObjectIndex = uVar31;
                if (*(int *)&((local_98.Object)->ChannelNames).field_0x8 !=
                    *(int *)&((local_98.Object)->ChannelNames).field_0x34) {
                  puVar4 = *(undefined1 **)&((local_98.Object)->ChannelNames).field_0x40;
                  puVar32 = &((local_98.Object)->ChannelNames).field_0x38;
                  if (puVar4 != (undefined1 *)0x0) {
                    puVar32 = puVar4;
                  }
                  uVar14 = *(uint *)(puVar32 +
                                    (ulonglong)
                                    (*(int *)&((local_98.Object)->ChannelNames).field_0x48 - 1U &
                                    uVar31) * 4);
                  if (uVar14 != 0xffffffff) {
                    do {
                      puVar24 = (uint *)((longlong)(int)uVar14 * 0x10 +
                                        *(longlong *)&this_01->field_0x0);
                      if (*puVar24 == uVar31) {
                        if (puVar24 != (uint *)0x0) goto LAB_14d3e5a4a;
                        break;
                      }
                      uVar14 = puVar24[2];
                    } while (uVar14 != 0xffffffff);
                  }
                }
                local_88.Value = &local_b8;
                local_108 = (FScriptContainerElement *)0x0;
                TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<int_&&>_>
                          ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,0>,FDefaultSetAllocator>
                            *)this_01,(int)&local_b8 + 4,
                           (TKeyInitializer<int_&&> *)(ulonglong)uVar31,(bool *)&local_88.Value);
                puVar24 = (uint *)((longlong)(int)local_b8.NameIndex * 0x10 +
                                  *(longlong *)&this_01->field_0x0);
LAB_14d3e5a4a:
                puVar24[1] = uVar13;
              }
              *(ulonglong *)(pFVar26 + lVar34 + -0x20) =
                   *(ulonglong *)(pFVar26 + lVar34 + -0x20) | 0x400000000000;
            }
            pFVar23 = (FScriptContainerElement *)0x0;
            *(int *)(pFVar26 + lVar34 + -0x14) = (int)pFVar22;
          }
        }
      }
      pFVar18 = pFVar17;
      this = local_c8;
    } while (pFVar17 < local_78);
  }
  if ((pFVar17 != local_78) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("BufferPtr == BufferEnd",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\NetTraceAnalyzer.cpp"
                          ,0x19b,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14d3e6058:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return;
}

// HandlePacketDroppedEvent @ 14d3e60b0

void __thiscall
TraceServices::FNetTraceAnalyzer::HandlePacketDroppedEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  byte bVar1;
  ENetProfilerConnectionMode EVar2;
  ushort uVar3;
  uint uVar4;
  ulong64 uVar5;
  FNetTraceConnectionState *pFVar6;
  double dVar7;
  
  uVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"Timestamp",0);
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"SequenceNumber",0);
  bVar1 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  EVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"PacketType",'\0');
  dVar7 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1->EventTime,uVar5);
  this->LastTimeStamp = dVar7;
  pFVar6 = GetActiveConnectionState(this,(uint)bVar1,(uint)uVar3);
  if (pFVar6 != (FNetTraceConnectionState *)0x0) {
    FNetProfilerProvider::EditConnectionData
              (this->NetProfilerProvider,pFVar6->ConnectionIndex,EVar2);
    FNetProfilerProvider::EditPacketDeliveryStatus
              (this->NetProfilerProvider,pFVar6->ConnectionIndex,EVar2,uVar4,Dropped);
  }
  return;
}

// HandlePacketEvent @ 14d3e61c0

void __thiscall
TraceServices::FNetTraceAnalyzer::HandlePacketEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  ILinearAllocator *pIVar3;
  FNetProfilerPacket *pFVar4;
  TPagedArrayPage<TraceServices::FNetProfilerStats> *pTVar5;
  double dVar6;
  byte bVar7;
  ENetProfilerConnectionMode EVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong64 uVar15;
  FNetTraceConnectionState *pFVar16;
  FNetProfilerConnectionData *this_00;
  FNetProfilerPacket *pFVar17;
  FNetProfilerStats *pFVar18;
  TPagedArrayPage<TraceServices::FNetProfilerPacket> *pTVar19;
  TPagedArrayPage<TraceServices::FNetProfilerStats> *pTVar20;
  FNetProfilerStats *pFVar21;
  FNetProfilerStats *pFVar22;
  uint local_res10 [2];
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_48;
  
  uVar15 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(param_2,"Timestamp",0);
  uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"PacketBits",0);
  uVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"SequenceNumber",0);
  bVar7 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  EVar8 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"PacketType",'\0');
  dVar6 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_1->EventTime,uVar15);
  this->LastTimeStamp = dVar6;
  uVar12 = (**(code **)((longlong)*this->FrameProvider + 0x50))
                     (this->FrameProvider,0,SUB84(dVar6,0));
  GetOrCreateActiveGameInstanceState(this,&local_48,(uint)bVar7);
  if ((local_48.Object)->CurrentEngineFrameIndex < uVar12) {
    FlushFrameStatsCounters(this,local_48.Object);
    (local_48.Object)->CurrentEngineFrameIndex = uVar12;
  }
  local_res10[0] = (local_48.Object)->CurrentNetProfilerFrameIndex;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  pFVar16 = GetActiveConnectionState(this,(uint)bVar7,(uint)uVar9);
  if (pFVar16 != (FNetTraceConnectionState *)0x0) {
    this_00 = FNetProfilerProvider::EditConnectionData
                        (this->NetProfilerProvider,pFVar16->ConnectionIndex,EVar8);
    if ((EVar8 == Incoming) && ((this_00->Packets).TotalItemCount != 0)) {
      pTVar19 = (this_00->Packets).LastPage;
      uVar12 = pTVar19->Items[pTVar19->Count - 1].SequenceNumber;
      while (uVar12 = uVar12 + 1, uVar12 < uVar11) {
        pTVar19 = (this_00->Packets).LastPage;
        if ((pTVar19 == (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)0x0) ||
           (pTVar19->Count == (this_00->Packets).PageSize)) {
          iVar13 = (this_00->Packets).PagesArray.ArrayNum;
          piVar1 = &(this_00->Packets).PagesArray.ArrayMax;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(this_00->Packets).PagesArray.AllocatorInstance,piVar1);
          }
          (this_00->Packets).PagesArray.ArrayNum = iVar13 + 1;
          pTVar19 = (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)
                    ((this_00->Packets).PagesArray.AllocatorInstance.Data + (longlong)iVar13 * 0x10)
          ;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerPacket>,int>
                    (pTVar19,1);
          pIVar3 = (this_00->Packets).Allocator;
          (this_00->Packets).FirstPage =
               (TPagedArrayPage<TraceServices::FNetProfilerPacket> *)
               (this_00->Packets).PagesArray.AllocatorInstance.Data;
          (this_00->Packets).LastPage = pTVar19;
          pFVar17 = (FNetProfilerPacket *)
                    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,(this_00->Packets).PageSize * 0x30);
          ((this_00->Packets).LastPage)->Items = pFVar17;
        }
        puVar2 = &(this_00->Packets).TotalItemCount;
        *puVar2 = *puVar2 + 1;
        pTVar19 = (this_00->Packets).LastPage;
        uVar15 = pTVar19->Count;
        pFVar4 = pTVar19->Items;
        pFVar17 = pFVar4 + uVar15;
        pFVar17->TimeStamp = 0.0;
        pFVar17->SequenceNumber = 0;
        pFVar17->ContentSizeInBits = 0;
        pFVar17 = pFVar4 + uVar15;
        pFVar17->TotalPacketSizeInBytes = 0;
        pFVar17->StartEventIndex = 0;
        *(undefined8 *)(&pFVar17->TotalPacketSizeInBytes + 2) = 0;
        pFVar17 = pFVar4 + uVar15;
        pFVar17->StatsCount = 0;
        pFVar17->NetProfilerFrameIndex = 0;
        *(undefined8 *)(&pFVar17->StatsCount + 2) = 0;
        puVar2 = &((this_00->Packets).LastPage)->Count;
        *puVar2 = *puVar2 + 1;
        pFVar4[uVar15].SequenceNumber = uVar12;
        pFVar4[uVar15].StartEventIndex = pFVar16->CurrentPacketStartIndex[1];
        pFVar4[uVar15].EventCount = 0;
        pFVar4[uVar15].TimeStamp = this->LastTimeStamp;
        pFVar4[uVar15].DeliveryStatus = Dropped;
        pFVar4[uVar15].ConnectionState = pFVar16->ConnectionState;
        pFVar4[uVar15].ContentSizeInBits = 0;
        pFVar4[uVar15].TotalPacketSizeInBytes = 0;
        this_00->PacketChangeCount = this_00->PacketChangeCount + 1;
      }
    }
    pFVar17 = TPagedArray<TraceServices::FNetProfilerPacket,TraceServices::TPagedArrayPage<TraceServices::FNetProfilerPacket>_>
              ::PushBack(&this_00->Packets);
    this_00->PacketChangeCount = this_00->PacketChangeCount + 1;
    FlushPacketEvents(this,pFVar16,this_00,EVar8);
    pFVar17->NetProfilerFrameIndex = local_res10[0];
    uVar12 = pFVar16->CurrentPacketStartIndex[EVar8];
    pFVar17->StartEventIndex = uVar12;
    pFVar17->EventCount = (int)(this_00->ContentEvents).TotalItemCount - uVar12;
    pFVar17->TimeStamp = this->LastTimeStamp;
    pFVar17->DeliveryStatus = Unknown;
    pFVar17->SequenceNumber = uVar11;
    pFVar17->ConnectionState = pFVar16->ConnectionState;
    pFVar17->ContentSizeInBits = uVar10;
    pFVar17->TotalPacketSizeInBytes = uVar10 + 7 >> 3;
    pFVar17->DeliveryStatus = Delivered;
    pFVar17->StartStatsIndex = (uint)(this_00->PacketStats).TotalItemCount;
    pFVar17->StatsCount = (pFVar16->PacketStats).ArrayNum;
    iVar13 = (pFVar16->PacketStats).ArrayNum;
    pFVar21 = (FNetProfilerStats *)(pFVar16->PacketStats).AllocatorInstance.Data;
    pFVar22 = pFVar21 + iVar13;
    while( true ) {
      if ((pFVar16->PacketStats).ArrayNum != iVar13) {
        `TCheckedPointerIterator<TraceServices::FNetProfilerStats,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar21 == pFVar22) break;
      pTVar5 = (this_00->PacketStats).LastPage;
      if ((pTVar5 == (TPagedArrayPage<TraceServices::FNetProfilerStats> *)0x0) ||
         (pTVar5->Count == (this_00->PacketStats).PageSize)) {
        iVar14 = (this_00->PacketStats).PagesArray.ArrayNum;
        piVar1 = &(this_00->PacketStats).PagesArray.ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(this_00->PacketStats).PagesArray.AllocatorInstance,piVar1);
          (this_00->PacketStats).PagesArray.ArrayNum = iVar14;
        }
        pTVar20 = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)
                  ((this_00->PacketStats).PagesArray.AllocatorInstance.Data +
                  (longlong)iVar14 * 0x10);
        (this_00->PacketStats).PagesArray.ArrayNum = iVar14 + 1;
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FNetProfilerStats>,int>
                  (pTVar20,1);
        pTVar5 = (TPagedArrayPage<TraceServices::FNetProfilerStats> *)
                 (this_00->PacketStats).PagesArray.AllocatorInstance.Data;
        pIVar3 = (this_00->PacketStats).Allocator;
        (this_00->PacketStats).LastPage = pTVar20;
        (this_00->PacketStats).FirstPage = pTVar5;
        pFVar18 = (FNetProfilerStats *)
                  (**(code **)((longlong)*pIVar3 + 8))(pIVar3,(this_00->PacketStats).PageSize << 3);
        ((this_00->PacketStats).LastPage)->Items = pFVar18;
      }
      puVar2 = &(this_00->PacketStats).TotalItemCount;
      *puVar2 = *puVar2 + 1;
      pTVar5 = (this_00->PacketStats).LastPage;
      pTVar5->Items[pTVar5->Count] = *pFVar21;
      puVar2 = &((this_00->PacketStats).LastPage)->Count;
      *puVar2 = *puVar2 + 1;
      pFVar21 = pFVar21 + 1;
    }
    (pFVar16->PacketStats).ArrayNum = 0;
    if ((pFVar16->PacketStats).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(pFVar16->PacketStats).AllocatorInstance,0,&(pFVar16->PacketStats).ArrayMax)
      ;
    }
    uVar15 = (this_00->ContentEvents).TotalItemCount;
    this_00->PacketStatsChangeCount = this_00->PacketStatsChangeCount + 1;
    pFVar16->CurrentPacketStartIndex[EVar8] = (uint)uVar15;
    pFVar16->CurrentPacketBitOffset[EVar8] = 0;
    pFVar16->CurrentPacketStatsStartIndex[EVar8] = (uint)(this_00->PacketStats).TotalItemCount;
  }
  return;
}

// HandlePacketStatsCounterEvent @ 14d3e6610

void __thiscall
TraceServices::FNetTraceAnalyzer::HandlePacketStatsCounterEvent
          (FNetTraceAnalyzer *this,FOnEventContext *param_1,FEventData *param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_28;
  
  uVar4 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"StatsValue",0);
  bVar2 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(param_2,"GameInstanceId",'\0');
  uVar3 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(param_2,"ConnectionId",0);
  uVar5 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(param_2,"NameId",0);
  uVar5 = GetOrCreateNetProfilerStatsCounterTypeIndex(this,uVar5,Packet);
  GetOrCreateActiveGameInstanceState(this,&local_28,(uint)bVar2);
  if (*(int *)&((local_28.Object)->ActiveConnections).field_0x8 !=
      *(int *)&((local_28.Object)->ActiveConnections).field_0x34) {
    puVar10 = *(undefined1 **)&((local_28.Object)->ActiveConnections).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &((local_28.Object)->ActiveConnections).field_0x38;
    }
    uVar6 = *(uint *)(puVar10 +
                     ((ulonglong)(*(int *)&((local_28.Object)->ActiveConnections).field_0x48 - 1) &
                     (ulonglong)uVar3) * 4);
    if (uVar6 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar6 * 0x20 +
                         *(longlong *)&(local_28.Object)->ActiveConnections);
        if (*puVar8 == (uint)uVar3) {
          puVar9 = puVar8 + 2;
          if (puVar8 == (uint *)0x0) {
            puVar9 = (uint *)0x0;
          }
          if (puVar9 != (uint *)0x0) {
            lVar1 = *(longlong *)puVar9;
            iVar7 = *(int *)(lVar1 + 0x28);
            if (iVar7 == *(int *)(lVar1 + 0x2c)) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,(ForAnyElementType *)(lVar1 + 0x20),(int *)(lVar1 + 0x2c));
            }
            *(int *)(lVar1 + 0x28) = iVar7 + 1;
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar7 * 8) =
                 CONCAT44(uVar4,uVar5);
          }
          break;
        }
        uVar6 = puVar8[6];
      } while (uVar6 != 0xffffffff);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// OnAnalysisBegin @ 14d3e9020

void __thiscall
TraceServices::FNetTraceAnalyzer::OnAnalysisBegin
          (FNetTraceAnalyzer *this,FOnAnalysisContext *param_1)

{
  FInterfaceBuilder *pFVar1;
  IAnalysisSession *pIVar2;
  uint uVar3;
  
  pFVar1 = param_1->InterfaceBuilder;
  (**(code **)*pFVar1)(pFVar1,0,"NetTrace","InitEvent",0);
  (**(code **)*pFVar1)(pFVar1,1,"NetTrace","InstanceDestroyedEvent",0);
  (**(code **)*pFVar1)(pFVar1,2,"NetTrace","NameEvent",0);
  (**(code **)*pFVar1)(pFVar1,3,"NetTrace","PacketContentEvent",0);
  (**(code **)*pFVar1)(pFVar1,4,"NetTrace","PacketEvent",0);
  (**(code **)*pFVar1)(pFVar1,5,"NetTrace","PacketDroppedEvent",0);
  (**(code **)*pFVar1)(pFVar1,6,"NetTrace","ConnectionCreatedEvent",0);
  (**(code **)*pFVar1)(pFVar1,7,"NetTrace","ConnectionUpdatedEvent",0);
  (**(code **)*pFVar1)(pFVar1,8,"NetTrace","ConnectionClosedEvent",0);
  (**(code **)*pFVar1)(pFVar1,9,"NetTrace","PacketStatsCounterEvent",0);
  (**(code **)*pFVar1)(pFVar1,10,"NetTrace","FrameStatsCounterEvent",0);
  (**(code **)*pFVar1)(pFVar1,0xb,"NetTrace","ObjectCreatedEvent",0);
  (**(code **)*pFVar1)(pFVar1,0xc,"NetTrace","ObjectExistsEvent",0);
  (**(code **)*pFVar1)(pFVar1,0xd,"NetTrace","ObjectDestroyedEvent",0);
  (**(code **)*pFVar1)(pFVar1,0xe,"NetTrace","ConnectionStateUpdatedEvent",0);
  (**(code **)*pFVar1)(pFVar1,0xf,"NetTrace","InstanceUpdatedEvent",0);
  pIVar2 = this->Session;
  (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  uVar3 = FNetProfilerProvider::AddNetProfilerName(this->NetProfilerProvider,L"BunchHeader");
  this->BunchHeaderNameIndex = uVar3;
  uVar3 = FNetProfilerProvider::AddNetProfilerName(this->NetProfilerProvider,L"Pending");
  this->PendingNameIndex = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014d3e9272. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  return;
}

// OnAnalysisEnd @ 14d3eab00

void __thiscall TraceServices::FNetTraceAnalyzer::OnAnalysisEnd(FNetTraceAnalyzer *this)

{
  return;
}

// OnEvent @ 14d3f4970

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TraceServices::FNetTraceAnalyzer::OnEvent
          (FNetTraceAnalyzer *this,ushort param_1,EStyle param_2,FOnEventContext *param_3)

{
  int *piVar1;
  IAnalysisSession *pIVar2;
  FEventData *this_00;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 uVar8;
  ENetProfilerConnectionMode EVar9;
  uchar uVar10;
  byte bVar11;
  bool bVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uchar *puVar17;
  FString *pFVar18;
  FNetTraceConnectionState *pFVar19;
  uint *puVar20;
  FNetProfilerConnectionInternal *pFVar21;
  ulong64 uVar22;
  longlong lVar23;
  FNetProfilerObjectInstance *pFVar24;
  FNetProfilerGameInstanceInternal *pFVar25;
  wchar_t *pwVar26;
  uint *puVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  ForElementType<FSetElementId> FVar30;
  undefined1 *puVar31;
  FLLMScope local_res8 [2];
  uint local_118 [2];
  undefined1 local_110 [16];
  undefined8 local_100;
  uint local_f8 [2];
  uint local_f0 [2];
  uint local_e8 [2];
  FString local_e0;
  FMemScope local_d0;
  uint *local_c8;
  uint *local_c0;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_b8;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_a8;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_98;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_88;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_78;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_68;
  FScriptContainerElement *local_58;
  int local_50;
  TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1> local_48;
  FString local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name92,L"Insights/FNetTraceAnalyzer");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name92,false,None,Default,true);
  FMemScope::FMemScope(&local_d0,&LLMScope_Name92,true);
  pIVar2 = this->Session;
  (**(code **)((longlong)*pIVar2 + 0xa0))(pIVar2);
  if ((this->NetTraceVersion == 0) && (param_1 != 0)) goto switchD_14d3f4a3f_default;
  this_00 = param_3->EventData;
  switch(param_1) {
  case 0:
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    dVar7 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar22);
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = dVar7;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    this->StartTimeStamp = dVar7;
    this->LastTimeStamp = (double)auVar6._8_8_;
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"NetTraceVersion",0);
    this->NetTraceVersion = uVar14;
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                       (this_00,"NetTraceReporterVersion",0);
    this->NetTraceReporterVersion = uVar14;
    FNetProfilerProvider::SetNetTraceVersion(this->NetProfilerProvider,this->NetTraceVersion);
    break;
  case 1:
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    if (*(int *)&(this->ActiveGameInstances).field_0x8 !=
        *(int *)&(this->ActiveGameInstances).field_0x34) {
      puVar31 = *(undefined1 **)&(this->ActiveGameInstances).field_0x40;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = &(this->ActiveGameInstances).field_0x38;
      }
      uVar14 = *(uint *)(puVar31 +
                        ((ulonglong)(*(int *)&(this->ActiveGameInstances).field_0x48 - 1) &
                        (ulonglong)bVar11) * 4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar27 = (uint *)((longlong)(int)uVar14 * 0x20 +
                            *(longlong *)&(this->ActiveGameInstances).field_0x0);
          uVar14 = (uint)bVar11;
          if (*puVar27 == uVar14) {
            puVar20 = puVar27 + 2;
            if (puVar27 == (uint *)0x0) {
              puVar20 = (uint *)0x0;
            }
            if (puVar20 != (uint *)0x0) {
              pFVar25 = FNetProfilerProvider::EditGameInstance
                                  (this->NetProfilerProvider,*(uint *)(*(longlong *)puVar20 + 0x108)
                                  );
              if (pFVar25 != (FNetProfilerGameInstanceInternal *)0x0) {
                (pFVar25->Instance).LifeTime.End = this->LastTimeStamp;
                FNetProfilerProvider::MarkGameInstancesDirty(this->NetProfilerProvider);
              }
              local_f8[0] = uVar14;
              if (*(int *)&(this->ActiveGameInstances).field_0x8 !=
                  *(int *)&(this->ActiveGameInstances).field_0x34) {
                TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>,0>,FDefaultSetAllocator>
                ::RemoveImpl<unsigned_int>
                          ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceGameInstanceState,1>,0>,FDefaultSetAllocator>
                            *)&this->ActiveGameInstances,(uint)bVar11,local_f8);
              }
            }
            break;
          }
          uVar14 = puVar27[6];
        } while (uVar14 != 0xffffffff);
      }
    }
    break;
  case 2:
    local_f0[0] = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"NameId",0);
    if (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x8 !=
        *(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x34) {
      puVar31 = *(undefined1 **)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x40;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = &(this->TracedNameIdToNetProfilerNameIdMap).field_0x38;
      }
      iVar16 = *(int *)(puVar31 +
                       (ulonglong)
                       (*(int *)&(this->TracedNameIdToNetProfilerNameIdMap).field_0x48 - 1U &
                       local_f0[0]) * 4);
      if (iVar16 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->TracedNameIdToNetProfilerNameIdMap +
                       (longlong)iVar16 * 0x10) == local_f0[0]) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Private\\Analyzers\\NetTraceAnalyzer.cpp"
                                ,0x85,L"");
            if (bVar12) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            goto switchD_14d3f4a3f_default;
          }
          iVar16 = *(int *)(*(longlong *)&this->TracedNameIdToNetProfilerNameIdMap + 8 +
                           (longlong)iVar16 * 0x10);
        } while (iVar16 != -1);
      }
    }
    local_110._8_8_ = (FScriptContainerElement *)0x0;
    local_100 = 0;
    bVar12 = UE::Trace::IAnalyzer::FEventData::GetString
                       (param_3->EventData,"Name",(FString *)(local_110 + 8));
    if (!bVar12) {
      uVar14 = UE::Trace::IAnalyzer::FEventData::GetAttachmentSize(param_3->EventData);
      puVar17 = UE::Trace::IAnalyzer::FEventData::GetAttachment(param_3->EventData);
      pFVar18 = ::FString::ConstructFromPtrSize(&local_38,puVar17,uVar14);
      if ((FString *)(local_110 + 8) != pFVar18) {
        if ((FScriptContainerElement *)local_110._8_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_110._8_8_);
        }
        local_110._8_8_ = (pFVar18->Data).AllocatorInstance.Data;
        (pFVar18->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_100._0_4_ = (pFVar18->Data).ArrayNum;
        local_100._4_4_ = (pFVar18->Data).ArrayMax;
        (pFVar18->Data).ArrayNum = 0;
        (pFVar18->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    pFVar29 = (FScriptContainerElement *)L"";
    if ((int)local_100 != 0) {
      pFVar29 = (FScriptContainerElement *)local_110._8_8_;
    }
    local_118[0] = FNetProfilerProvider::AddNetProfilerName
                             (this->NetProfilerProvider,(wchar_t *)pFVar29);
    local_c8 = local_f0;
    local_c0 = local_118;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_&&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->TracedNameIdToNetProfilerNameIdMap,
               (TPairInitializer<unsigned_int_const_&,unsigned_int_&&> *)local_110,(bool *)&local_c8
              );
    FVar28.Data = (FScriptContainerElement *)local_110._8_8_;
    goto LAB_14d3f5417;
  case 3:
    HandlePacketContentEvent(this,param_3,this_00);
    break;
  case 4:
    HandlePacketEvent(this,param_3,this_00);
    break;
  case 5:
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    local_118[0] = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>
                             (this_00,"SequenceNumber",0);
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"ConnectionId",0);
    EVar9 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>(this_00,"PacketType",'\0');
    dVar7 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar22);
    this->LastTimeStamp = dVar7;
    pFVar19 = GetActiveConnectionState(this,(uint)bVar11,(uint)uVar13);
    if (pFVar19 != (FNetTraceConnectionState *)0x0) {
      FNetProfilerProvider::EditConnectionData
                (this->NetProfilerProvider,pFVar19->ConnectionIndex,EVar9);
      FNetProfilerProvider::EditPacketDeliveryStatus
                (this->NetProfilerProvider,pFVar19->ConnectionIndex,EVar9,local_118[0],Dropped);
    }
    break;
  case 6:
    HandleConnectionCreatedEvent(this,param_3,this_00);
    break;
  case 7:
    HandleConnectionUpdatedEvent(this,param_3,this_00);
    break;
  case 8:
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"ConnectionId",0);
    GetOrCreateActiveGameInstanceState(this,&local_78,(uint)bVar11);
    if (*(int *)&((local_78.Object)->ActiveConnections).field_0x8 !=
        *(int *)&((local_78.Object)->ActiveConnections).field_0x34) {
      FVar30 = *(ForElementType<FSetElementId> *)&((local_78.Object)->ActiveConnections).field_0x40;
      if (FVar30 == (ForElementType<FSetElementId>)0x0) {
        FVar30 = (ForElementType<FSetElementId>)&((local_78.Object)->ActiveConnections).field_0x38;
      }
      uVar14 = *(uint *)((longlong)FVar30 +
                        ((ulonglong)(*(int *)&((local_78.Object)->ActiveConnections).field_0x48 - 1)
                        & (ulonglong)uVar13) * 4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar27 = (uint *)((longlong)(int)uVar14 * 0x20 +
                            *(longlong *)&(local_78.Object)->ActiveConnections);
          uVar14 = (uint)uVar13;
          if (*puVar27 == uVar14) {
            puVar20 = puVar27 + 2;
            if (puVar27 == (uint *)0x0) {
              puVar20 = (uint *)0x0;
            }
            if (puVar20 != (uint *)0x0) {
              pFVar21 = FNetProfilerProvider::EditConnection
                                  (this->NetProfilerProvider,**(uint **)puVar20);
              if (pFVar21 != (FNetProfilerConnectionInternal *)0x0) {
                (pFVar21->Connection).LifeTime.End = this->LastTimeStamp;
              }
              local_e8[0] = uVar14;
              if (*(int *)&((local_78.Object)->ActiveConnections).field_0x8 ==
                  *(int *)&((local_78.Object)->ActiveConnections).field_0x34) goto LAB_14d3f51d5;
              TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>,0>,FDefaultSetAllocator>
              ::RemoveImpl<unsigned_int>
                        ((TSet<TTuple<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedRef<TraceServices::FNetTraceAnalyzer::FNetTraceConnectionState,1>,0>,FDefaultSetAllocator>
                          *)local_78.Object,(uint)uVar13,local_e8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_78.SharedReferenceCount.ReferenceController);
              goto switchD_14d3f4a3f_default;
            }
            break;
          }
          uVar14 = puVar27[6];
        } while (uVar14 != 0xffffffff);
      }
    }
    if (2 < (byte)LogNetTrace._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetTrace);
    }
LAB_14d3f51d5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    break;
  case 9:
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"StatsValue",0);
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"ConnectionId",0);
    uVar15 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"NameId",0);
    local_110._0_4_ = GetOrCreateNetProfilerStatsCounterTypeIndex(this,uVar15,Packet);
    local_110._4_4_ = uVar14;
    GetOrCreateActiveGameInstanceState(this,&local_b8,(uint)bVar11);
    if (*(int *)&((local_b8.Object)->ActiveConnections).field_0x8 !=
        *(int *)&((local_b8.Object)->ActiveConnections).field_0x34) {
      puVar31 = *(undefined1 **)&((local_b8.Object)->ActiveConnections).field_0x40;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = &((local_b8.Object)->ActiveConnections).field_0x38;
      }
      uVar14 = *(uint *)(puVar31 +
                        ((ulonglong)(*(int *)&((local_b8.Object)->ActiveConnections).field_0x48 - 1)
                        & (ulonglong)uVar13) * 4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar27 = (uint *)((longlong)(int)uVar14 * 0x20 +
                            *(longlong *)&(local_b8.Object)->ActiveConnections);
          if (*puVar27 == (uint)uVar13) {
            puVar20 = puVar27 + 2;
            if (puVar27 == (uint *)0x0) {
              puVar20 = (uint *)0x0;
            }
            if (puVar20 != (uint *)0x0) {
              lVar3 = *(longlong *)puVar20;
              iVar16 = *(int *)(lVar3 + 0x28);
              if (iVar16 == *(int *)(lVar3 + 0x2c)) {
                iVar16 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,(ForAnyElementType *)(lVar3 + 0x20),(int *)(lVar3 + 0x2c))
                ;
              }
              *(int *)(lVar3 + 0x28) = iVar16 + 1;
              *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar16 * 8) =
                   CONCAT44(local_110._4_4_,local_110._0_4_);
            }
            goto LAB_14d3f4f09;
          }
          uVar14 = puVar27[6];
        } while (uVar14 != 0xffffffff);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        break;
      }
    }
LAB_14d3f4f09:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    break;
  case 10:
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"Timestamp",0);
    local_118[0] = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"StatsValue",0);
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    uVar14 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_int>(this_00,"NameId",0);
    dVar7 = UE::Trace::IAnalyzer::FEventTime::AsSeconds(param_3->EventTime,uVar22);
    this->LastTimeStamp = dVar7;
    uVar15 = (**(code **)((longlong)*this->FrameProvider + 0x50))
                       (this->FrameProvider,0,SUB84(dVar7,0));
    GetOrCreateActiveGameInstanceState(this,&local_a8,(uint)bVar11);
    if ((local_a8.Object)->CurrentEngineFrameIndex < uVar15) {
      FlushFrameStatsCounters(this,local_a8.Object);
      (local_a8.Object)->CurrentEngineFrameIndex = uVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    local_110._0_4_ = GetOrCreateNetProfilerStatsCounterTypeIndex(this,uVar14,Frame);
    local_110._4_4_ = local_118[0];
    GetOrCreateActiveGameInstanceState(this,&local_98,(uint)bVar11);
    iVar16 = ((local_98.Object)->FrameStatsCounters).ArrayNum;
    piVar1 = &((local_98.Object)->FrameStatsCounters).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&((local_98.Object)->FrameStatsCounters).AllocatorInstance,piVar1);
    }
    ((local_98.Object)->FrameStatsCounters).ArrayNum = iVar16 + 1;
    *(ulonglong *)
     (((local_98.Object)->FrameStatsCounters).AllocatorInstance.Data + (longlong)iVar16 * 8) =
         CONCAT44(local_110._4_4_,local_110._0_4_);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    break;
  case 0xb:
    HandleObjectCreatedEvent(this,param_3,this_00);
    break;
  case 0xc:
    HandleObjectExistsEvent(this,param_3,this_00);
    break;
  case 0xd:
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    uVar22 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned___int64>(this_00,"ObjectId",0);
    GetOrCreateActiveGameInstanceState(this,&local_68,(uint)bVar11);
    if (*(int *)&((local_68.Object)->ActiveObjects).field_0x8 !=
        *(int *)&((local_68.Object)->ActiveObjects).field_0x34) {
      puVar31 = *(undefined1 **)&((local_68.Object)->ActiveObjects).field_0x40;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = &((local_68.Object)->ActiveObjects).field_0x38;
      }
      iVar16 = *(int *)(puVar31 +
                       ((ulonglong)(*(int *)&((local_68.Object)->ActiveObjects).field_0x48 - 1) &
                       (uVar22 >> 0x20) * 0x17 + uVar22) * 4);
      if (iVar16 != -1) {
        lVar3 = *(longlong *)&(local_68.Object)->ActiveObjects;
        do {
          lVar23 = (longlong)iVar16;
          if (*(ulong64 *)(lVar3 + lVar23 * 0x18) == uVar22) {
            uVar4 = *(undefined8 *)(lVar3 + 8 + lVar23 * 0x18);
            TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
            ::RemoveByIndex((TSet<TTuple<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState>,TDefaultMapHashableKeyFuncs<unsigned___int64,TraceServices::FNetTraceAnalyzer::FNetTraceActiveObjectState,0>,FDefaultSetAllocator>
                             *)&(local_68.Object)->ActiveObjects,iVar16);
            pFVar24 = FNetProfilerProvider::EditObject
                                (this->NetProfilerProvider,(local_68.Object)->GameInstanceIndex,
                                 (uint)uVar4);
            if (pFVar24 != (FNetProfilerObjectInstance *)0x0) {
              (pFVar24->LifeTime).End = this->LastTimeStamp;
            }
            goto LAB_14d3f5345;
          }
          iVar16 = *(int *)(lVar3 + 0x10 + lVar23 * 0x18);
        } while (iVar16 != -1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        break;
      }
    }
LAB_14d3f5345:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    break;
  case 0xe:
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    uVar13 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_short>(this_00,"ConnectionId",0);
    uVar10 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"ConnectionStateValue",'\0');
    GetOrCreateActiveGameInstanceState(this,&local_88,(uint)bVar11);
    if (*(int *)&((local_88.Object)->ActiveConnections).field_0x8 !=
        *(int *)&((local_88.Object)->ActiveConnections).field_0x34) {
      puVar31 = *(undefined1 **)&((local_88.Object)->ActiveConnections).field_0x40;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = &((local_88.Object)->ActiveConnections).field_0x38;
      }
      uVar14 = *(uint *)(puVar31 +
                        ((ulonglong)(*(int *)&((local_88.Object)->ActiveConnections).field_0x48 - 1)
                        & (ulonglong)uVar13) * 4);
      if (uVar14 != 0xffffffff) {
        do {
          puVar27 = (uint *)((longlong)(int)uVar14 * 0x20 +
                            *(longlong *)&(local_88.Object)->ActiveConnections);
          if (*puVar27 == (uint)uVar13) {
            puVar20 = puVar27 + 2;
            if (puVar27 == (uint *)0x0) {
              puVar20 = (uint *)0x0;
            }
            if (puVar20 != (uint *)0x0) {
              *(uchar *)(*(longlong *)puVar20 + 0x70) = uVar10;
            }
            goto LAB_14d3f510d;
          }
          uVar14 = puVar27[6];
        } while (uVar14 != 0xffffffff);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        break;
      }
    }
LAB_14d3f510d:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    break;
  case 0xf:
    bVar11 = UE::Trace::IAnalyzer::FEventData::GetValue<unsigned_char>
                       (this_00,"GameInstanceId",'\0');
    bVar12 = UE::Trace::IAnalyzer::FEventData::GetValue<bool>(this_00,"bIsServer",false);
    local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.Data.ArrayNum = 0;
    local_e0.Data.ArrayMax = 0;
    UE::Trace::IAnalyzer::FEventData::GetString(this_00,"Name",&local_e0);
    GetOrCreateActiveGameInstanceState(this,&local_48,(uint)bVar11);
    pFVar25 = FNetProfilerProvider::EditGameInstance
                        (this->NetProfilerProvider,(local_48.Object)->GameInstanceIndex);
    if (pFVar25 != (FNetProfilerGameInstanceInternal *)0x0) {
      (pFVar25->Instance).bIsServer = bVar12;
      local_58 = local_e0.Data.AllocatorInstance.Data;
      local_50 = local_e0.Data.ArrayNum + -1;
      if (local_e0.Data.ArrayNum == 0) {
        local_50 = 0;
      }
      pwVar26 = (wchar_t *)(**(code **)((longlong)*this->Session + 200))(this->Session,&local_58);
      (pFVar25->Instance).InstanceName = pwVar26;
      FNetProfilerProvider::MarkGameInstancesDirty(this->NetProfilerProvider);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FVar28.Data = local_e0.Data.AllocatorInstance.Data;
LAB_14d3f5417:
    if (FVar28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar28.Data);
    }
  }
switchD_14d3f4a3f_default:
  (**(code **)((longlong)*pIVar2 + 0xa8))(pIVar2);
  FMemScope::~FMemScope(&local_d0);
  FLLMScope::~FLLMScope(local_res8);
  return true;
}

// operator() @ 15057bb00

bool __thiscall
`TraceServices::FNetTraceAnalyzer::HandleConnectionCreatedEvent'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_3610704604028730719>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3610704604028730719>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

