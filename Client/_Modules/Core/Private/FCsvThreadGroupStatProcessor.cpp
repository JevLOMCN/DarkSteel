// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FCsvThreadGroupStatProcessor @ 141916df0

FCsvThreadGroupStatProcessor * __thiscall
FCsvThreadGroupStatProcessor::FCsvThreadGroupStatProcessor
          (FCsvThreadGroupStatProcessor *this,FCsvStreamWriter *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  
  this->Writer = param_1;
  (this->StatSeriesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatSeriesArray).ArrayNum = 0;
  (this->StatSeriesArray).ArrayMax = 0;
  FCsvStatRegister::FCsvStatRegister(&this->StatRegister);
  ::FString::FString(&this->Name,param_2);
  this->AggregateStatProcessor = (FCsvThreadGroupStatProcessor *)0x0;
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// FindOrCreateStatSeries @ 14193eb90

FCsvStatSeries * __thiscall
FCsvThreadGroupStatProcessor::FindOrCreateStatSeries
          (FCsvThreadGroupStatProcessor *this,FCsvStatBase *param_1,EType param_2,bool param_3,
          bool param_4)

{
  int *piVar1;
  TArray<FCsvStatSeries_*,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  FCsvStatSeries *pFVar8;
  FCsvStatSeries *pFVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  FCsvAggregateStatSeries *local_res10;
  EType local_res18;
  
  uVar6 = GCsvProcessingThreadId;
  if (GGameThreadIsCsvProcessingThread) {
    uVar6 = GGameThreadId;
  }
  local_res18 = param_2;
  DVar5 = GetCurrentThreadId();
  if ((DVar5 != uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInCsvProcessingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0xa99,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FCsvStatSeries *)(*pcVar3)();
    return pFVar8;
  }
  pFVar8 = (FCsvStatSeries *)0x0;
  local_res10 = (FCsvAggregateStatSeries *)0x0;
  if (this->AggregateStatProcessor != (FCsvThreadGroupStatProcessor *)0x0) {
    local_res10 = (FCsvAggregateStatSeries *)
                  FindOrCreateStatSeries(this->AggregateStatProcessor,param_1,param_2,param_3,true);
  }
  uVar6 = FCsvStatRegister::GetUniqueIndex
                    (&this->StatRegister,param_1->RawStatID,param_1->CategoryIndex,
                     (bool)(param_1->Flags & 1),param_3);
  piVar1 = &(this->StatSeriesArray).ArrayNum;
  iVar7 = *piVar1;
  pTVar2 = &this->StatSeriesArray;
  local_res8[0] = uVar6;
  if (iVar7 <= (int)uVar6) {
    iVar11 = (uVar6 - iVar7) + 1;
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar11,&pTVar2->AllocatorInstance,piVar1,
                       &(this->StatSeriesArray).ArrayMax);
    memset((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8,0,(longlong)iVar11 << 3);
  }
  uVar10 = 0;
  if ((int)uVar6 < (this->StatSeriesArray).ArrayNum) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FCsvStatSeries *)(*pcVar3)();
    return pFVar8;
  }
  if (*(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) == 0) {
    if (param_4) {
      pFVar9 = ::operator_new(0xa0);
      if (pFVar9 != (FCsvStatSeries *)0x0) {
        FCsvStatSeries::FCsvStatSeries
                  (pFVar9,local_res18,(int *)local_res8,this->Writer,&this->StatRegister,&this->Name
                   ,(FCsvAggregateStatSeries *)0x0);
        pFVar9->_padding_ = (longlong)&___7FCsvAggregateStatSeries__6B_;
        pFVar9[1]._padding_ = 0;
        pFVar9[1].StatID = 0;
        pFVar9[1].SeriesType = TimerData;
        pFVar9[1].field_0xd = 0;
        pFVar9[1]._padding_ = 0;
        *(undefined8 *)&pFVar9[1].CurrentWriteFrameNumber = 0;
        pFVar9[1].CurrentValue.AsIntValue = 0;
        *(undefined4 *)((longlong)&pFVar9[1].CurrentValue + 4) = 0x80;
        *(undefined4 *)&pFVar9[1].Writer = 0xffffffff;
        *(undefined4 *)((longlong)&pFVar9[1].Writer + 4) = 0;
        pFVar9[1].LinkedAggregateStatSeries = (FCsvAggregateStatSeries *)0x0;
        *(undefined4 *)&pFVar9[1].bDirty = 0;
        pFVar8 = pFVar9;
      }
    }
    else {
      pFVar9 = ::operator_new(0x50);
      if (pFVar9 != (FCsvStatSeries *)0x0) {
        pFVar8 = FCsvStatSeries::FCsvStatSeries
                           (pFVar9,local_res18,(int *)local_res8,this->Writer,&this->StatRegister,
                            &this->Name,local_res10);
      }
    }
    uVar10 = 0;
    if ((int)uVar6 < (this->StatSeriesArray).ArrayNum) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCsvStatSeries *)(*pcVar3)();
      return pFVar8;
    }
    *(FCsvStatSeries **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) = pFVar8;
  }
  else {
    uVar10 = 0;
    if ((int)uVar6 < (this->StatSeriesArray).ArrayNum) {
      uVar10 = ~uVar6 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FCsvStatSeries *)(*pcVar3)();
      return pFVar8;
    }
    pFVar8 = *(FCsvStatSeries **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 8);
    if (local_res18 != pFVar8->SeriesType) {
      FCsvStatRegister::GetStatName(&this->StatRegister,uVar6);
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SeriesType == Series->SeriesType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                         ,0xab9,
                         L"Stat named %s was used in multiple stat types. Can\'t use same identifier for different stat types. Stat types are: Custom(Int), Custom(Float) and Timing"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FCsvStatSeries *)(*pcVar3)();
        return pFVar8;
      }
    }
  }
  return pFVar8;
}

// GetAllocatedSize @ 141945380

ulong64 __thiscall
FCsvThreadGroupStatProcessor::GetAllocatedSize(FCsvThreadGroupStatProcessor *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->StatSeriesArray).AllocatorInstance.Data;
  iVar2 = (this->StatSeriesArray).ArrayNum;
  uVar5 = (longlong)(this->StatSeriesArray).ArrayMax << 3;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->StatSeriesArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FCsvStatSeries_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = (**(code **)(**(longlong **)pFVar4 + 0x18))();
    uVar5 = uVar5 + lVar3;
    pFVar4 = pFVar4 + 8;
  }
  return uVar5;
}

