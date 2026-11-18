// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// FCsvStatSeries @ 1419165c0

/* WARNING: Enum "Type": Some values do not have unique names */

FCsvStatSeries * __thiscall
FCsvStatSeries::FCsvStatSeries
          (FCsvStatSeries *this,EType param_1,int *param_2,FCsvStreamWriter *param_3,
          FCsvStatRegister *param_4,FString *param_5,FCsvAggregateStatSeries *param_6)

{
  FString *pFVar1;
  wchar_t wVar2;
  uint uVar3;
  int iVar4;
  void *_Src;
  ForElementType<FSetElementId> FVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  FCsvStatNameValidator *pFVar9;
  FCsvStatRegister *this_00;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FCsvStatSeries *pFVar14;
  FString *pFVar15;
  FCsvCategoryData *lpCriticalSection;
  uint uVar16;
  ForElementType<FSetElementId> FVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  byte bVar22;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00 = param_4;
  pFVar1 = &this->Name;
  this->_padding_ = (longlong)&___7FCsvStatSeries__6B_;
  this->StatID = *param_2;
  this->SeriesType = param_1;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  uVar3 = this->StatID;
  this->LinkedAggregateStatSeries = param_6;
  this->CurrentWriteFrameNumber = 0xffffffff;
  this->Writer = param_3;
  this->ColumnIndex = -1;
  this->bDirty = false;
  (this->CurrentValue).AsTimerCycles = 0;
  uVar21 = 0;
  uVar16 = uVar21;
  if ((int)uVar3 < (param_4->StatCategoryIndices).ArrayNum) {
    uVar16 = ~uVar3 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FCsvStatSeries *)(*pcVar6)();
    return pFVar14;
  }
  uVar3 = *(uint *)((this_00->StatCategoryIndices).AllocatorInstance.Data + (longlong)(int)uVar3 * 4
                   );
  pFVar15 = FCsvStatRegister::GetStatName(this_00,this->StatID);
  ::FString::operator=(pFVar1,pFVar15);
  uVar16 = this->StatID;
  uVar12 = uVar21;
  if ((int)uVar16 < (this_00->StatFlags).ArrayNum) {
    uVar12 = ~uVar16 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar14 = (FCsvStatSeries *)(*pcVar6)();
    return pFVar14;
  }
  bVar22 = (byte)(this_00->StatFlags).AllocatorInstance.Data[(int)uVar16] & 1;
  if ((((this->SeriesType != CustomStatFloat) && (this->SeriesType != CustomStatInt)) ||
      (bVar22 != 0)) || (this->LinkedAggregateStatSeries != (FCsvAggregateStatSeries *)0x0)) {
    ::FString::ConcatFC(&local_58,param_5,L"/");
    ::FString::ConcatFF(&local_98,&local_58,pFVar1);
    if (pFVar1 != &local_98) {
      pFVar18 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (this->Name).Data.ArrayNum = local_98.Data.ArrayNum;
      (this->Name).Data.ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (0 < (int)uVar3) {
    lpCriticalSection = FCsvCategoryData::Get();
    if ((lpCriticalSection == (FCsvCategoryData *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FCsvStatSeries *)(*pcVar6)();
      return pFVar14;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((int)uVar3 < (lpCriticalSection->CategoryNames).ArrayNum) {
      uVar21 = ~uVar3 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      pFVar14 = (FCsvStatSeries *)(*pcVar6)();
      return pFVar14;
    }
    pFVar18 = (lpCriticalSection->CategoryNames).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = *(int *)(pFVar18 + (longlong)(int)uVar3 * 0x10 + 8);
    lVar19 = (longlong)local_68.Data.ArrayNum;
    _Src = *(void **)(pFVar18 + (longlong)(int)uVar3 * 0x10);
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src,lVar19 * 2);
    }
    if (lpCriticalSection != (FCsvCategoryData *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    ::FString::ConcatFC(&local_48,&local_68,L"/");
    ::FString::ConcatFF(&local_88,&local_48,pFVar1);
    if (pFVar1 != &local_88) {
      pFVar18 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (this->Name).Data.ArrayNum = local_88.Data.ArrayNum;
      (this->Name).Data.ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (bVar22 != 0) {
    ::FString::ConcatCF(&local_78,L"COUNTS/",pFVar1);
    if (pFVar1 != &local_78) {
      pFVar18 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar18);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (this->Name).Data.ArrayNum = local_78.Data.ArrayNum;
      (this->Name).Data.ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  pTVar7 = CVarCsvStatNameValidation.Ref;
  bVar10 = this->LinkedAggregateStatSeries == (FCsvAggregateStatSeries *)0x0;
  bVar11 = IsInParallelGameThread();
  if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
    lVar19 = 0;
  }
  else {
    lVar19 = 4;
  }
  pFVar9 = GCsvStatNameValidator;
  if ((0 < *(int *)((longlong)pTVar7->ShadowedValue + lVar19)) &&
     (GCsvStatNameValidator != (FCsvStatNameValidator *)0x0)) {
    iVar4 = (this->Name).Data.ArrayNum;
    pFVar18 = (pFVar1->Data).AllocatorInstance.Data;
    pFVar20 = pFVar18 + (longlong)iVar4 * 2 + -2;
    if (iVar4 == 0) {
      pFVar20 = pFVar18 + (longlong)iVar4 * 2;
    }
    while( true ) {
      if ((this->Name).Data.ArrayNum != iVar4) {
        `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&param_6);
      }
      if (pFVar18 == pFVar20) goto LAB_141916bb0;
      if (*(int *)&(pFVar9->ValidCharactersSet).Elements.field_0x8 ==
          *(int *)&(pFVar9->ValidCharactersSet).Elements.field_0x34) break;
      FVar5 = (pFVar9->ValidCharactersSet).Hash.SecondaryData;
      FVar17 = (ForElementType<FSetElementId>)&(pFVar9->ValidCharactersSet).Hash;
      if (FVar5 != (ForElementType<FSetElementId>)0x0) {
        FVar17 = FVar5;
      }
      iVar13 = *(int *)((longlong)FVar17 +
                       ((ulonglong)((pFVar9->ValidCharactersSet).HashSize - 1) &
                       (ulonglong)*(ushort *)pFVar18) * 4);
      if (iVar13 == -1) break;
      lVar19 = *(longlong *)&(pFVar9->ValidCharactersSet).Elements;
      while (*(ushort *)(lVar19 + (longlong)iVar13 * 0xc) != *(ushort *)pFVar18) {
        iVar13 = *(int *)(lVar19 + 4 + (longlong)iVar13 * 0xc);
        if (iVar13 == -1) goto LAB_141916a36;
      }
      pFVar18 = pFVar18 + 2;
    }
LAB_141916a36:
    if (2 < (byte)LogCsvProfiler._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCsvProfiler);
    }
    pTVar7 = CVarCsvStatNameValidation.Ref;
    bVar11 = IsInParallelGameThread();
    if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
      lVar19 = 0;
    }
    else {
      lVar19 = 4;
    }
    pFVar9 = GCsvStatNameValidator;
    pTVar8 = CVarCsvStatNameValidation.Ref;
    if (*(int *)((longlong)pTVar7->ShadowedValue + lVar19) == 2) {
      iVar4 = (this->Name).Data.ArrayNum;
      pFVar18 = (this->Name).Data.AllocatorInstance.Data;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      pFVar20 = pFVar18 + (longlong)iVar4 * 2 + -2;
      if (iVar4 == 0) {
        pFVar20 = pFVar18 + (longlong)iVar4 * 2;
      }
      while( true ) {
        if ((this->Name).Data.ArrayNum != iVar4) {
          `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&param_4);
        }
        if (pFVar18 == pFVar20) break;
        wVar2 = *(wchar_t *)pFVar18;
        if (*(int *)&(pFVar9->ValidCharactersSet).Elements.field_0x8 ==
            *(int *)&(pFVar9->ValidCharactersSet).Elements.field_0x34) {
LAB_141916b5a:
          pFVar18 = pFVar18 + 2;
        }
        else {
          FVar5 = (pFVar9->ValidCharactersSet).Hash.SecondaryData;
          FVar17 = (ForElementType<FSetElementId>)&(pFVar9->ValidCharactersSet).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar17 = FVar5;
          }
          iVar13 = *(int *)((longlong)FVar17 +
                           ((ulonglong)((pFVar9->ValidCharactersSet).HashSize - 1) &
                           (ulonglong)(ushort)wVar2) * 4);
          if (iVar13 == -1) goto LAB_141916b5a;
          lVar19 = *(longlong *)&(pFVar9->ValidCharactersSet).Elements;
          do {
            if (*(wchar_t *)(lVar19 + (longlong)iVar13 * 0xc) == wVar2) {
              ::FString::AppendChar(&local_a8,wVar2);
              goto LAB_141916b5a;
            }
            iVar13 = *(int *)(lVar19 + 4 + (longlong)iVar13 * 0xc);
          } while (iVar13 != -1);
          pFVar18 = pFVar18 + 2;
        }
      }
      pFVar1 = &this->Name;
      if (pFVar1 != &local_a8) {
        pFVar18 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar18 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar18);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        (this->Name).Data.ArrayNum = local_a8.Data.ArrayNum;
        (this->Name).Data.ArrayMax = local_a8.Data.ArrayMax;
        local_a8.Data.ArrayNum = 0;
        local_a8.Data.ArrayMax = 0;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar11 = IsInParallelGameThread();
      if ((bVar11) || (bVar11 = IsInGameThread(), lVar19 = 4, bVar11)) {
        lVar19 = 0;
      }
      if (*(int *)((longlong)pTVar8->ShadowedValue + lVar19) == 3) {
        bVar10 = false;
      }
    }
  }
LAB_141916bb0:
  if (uVar3 == _GCsvCategory_CsvBench.Index) {
    bVar10 = false;
  }
  FCsvStreamWriter::AddSeries(this->Writer,this,bVar10);
  return this;
}

// ~FCsvStatSeries @ 14191baf0

void __thiscall FCsvStatSeries::~FCsvStatSeries(FCsvStatSeries *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FCsvStatSeries__6B_;
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// FinalizeFrame @ 14193bd10

void __thiscall FCsvStatSeries::FinalizeFrame(FCsvStatSeries *this,long64 param_1)

{
  EType EVar1;
  char cVar2;
  FCsvAggregateStatSeries *pFVar3;
  <unnamed_type_Value> *p<Var4;
  <unnamed_type_Value> a<StackX_8 [2];
  ulonglong uStackX_10;
  
  if ((ulonglong)this->CurrentWriteFrameNumber != param_1) {
    return;
  }
  if (this->bDirty == false) {
    return;
  }
  EVar1 = this->SeriesType;
  a<StackX_8[0].AsInt = 0;
  if (EVar1 == TimerData) {
    a<StackX_8[0].AsFloat =
         (float)((double)(this->CurrentValue).AsTimerCycles *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
  }
  else if (EVar1 == CustomStatInt) {
    a<StackX_8[0] = (<unnamed_type_Value>)(this->CurrentValue).AsFloatValue;
  }
  else if (EVar1 == CustomStatFloat) {
    a<StackX_8[0] = (<unnamed_type_Value>)(this->CurrentValue).AsFloatValue;
  }
  pFVar3 = this->LinkedAggregateStatSeries;
  if (pFVar3 == (FCsvAggregateStatSeries *)0x0) goto LAB_14193f5a6;
  uStackX_10 = (ulonglong)this->CurrentWriteFrameNumber;
  p<Var4 = &TMapBase<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
            ::FindOrAddImpl<__int64_const_&>
                      ((TMapBase<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
                        *)&pFVar3->RowValues,this->CurrentWriteFrameNumber,(long64 *)&uStackX_10)->
            Value;
  cVar2 = *(char *)((longlong)&pFVar3->_padding_ + 4);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      p<Var4->AsInt = p<Var4->AsInt + a<StackX_8[0].AsInt;
      goto LAB_14193f5a6;
    }
    if (cVar2 != '\x02') goto LAB_14193f5a6;
  }
  p<Var4->AsFloat = a<StackX_8[0].AsFloat + p<Var4->AsFloat;
LAB_14193f5a6:
  if (this->ColumnIndex != -1) {
    FCsvStreamWriter::PushValue
              (this->Writer,this,(ulonglong)this->CurrentWriteFrameNumber,
               (FCsvStatSeriesValue *)a<StackX_8);
  }
  (this->CurrentValue).AsTimerCycles = 0;
  this->bDirty = false;
  return;
}

// FlushIfDirty @ 14193f4e0

void __thiscall FCsvStatSeries::FlushIfDirty(FCsvStatSeries *this)

{
  EType EVar1;
  char cVar2;
  FCsvAggregateStatSeries *pFVar3;
  <unnamed_type_Value> *p<Var4;
  <unnamed_type_Value> local_res8 [2];
  ulonglong local_res10;
  
  if (this->bDirty == false) {
    return;
  }
  EVar1 = this->SeriesType;
  local_res8[0].AsInt = 0;
  if (EVar1 == TimerData) {
    local_res8[0].AsFloat =
         (float)((double)(this->CurrentValue).AsTimerCycles *
                 FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000);
  }
  else if (EVar1 == CustomStatInt) {
    local_res8[0] = (<unnamed_type_Value>)(this->CurrentValue).AsFloatValue;
  }
  else if (EVar1 == CustomStatFloat) {
    local_res8[0] = (<unnamed_type_Value>)(this->CurrentValue).AsFloatValue;
  }
  pFVar3 = this->LinkedAggregateStatSeries;
  if (pFVar3 == (FCsvAggregateStatSeries *)0x0) goto LAB_14193f5a6;
  local_res10 = (ulonglong)this->CurrentWriteFrameNumber;
  p<Var4 = &TMapBase<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
            ::FindOrAddImpl<__int64_const_&>
                      ((TMapBase<__int64,FCsvStatSeriesValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FCsvStatSeriesValue,0>_>
                        *)&pFVar3->RowValues,this->CurrentWriteFrameNumber,(long64 *)&local_res10)->
            Value;
  cVar2 = *(char *)((longlong)&pFVar3->_padding_ + 4);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      p<Var4->AsInt = p<Var4->AsInt + local_res8[0].AsInt;
      goto LAB_14193f5a6;
    }
    if (cVar2 != '\x02') goto LAB_14193f5a6;
  }
  p<Var4->AsFloat = local_res8[0].AsFloat + p<Var4->AsFloat;
LAB_14193f5a6:
  if (this->ColumnIndex != -1) {
    FCsvStreamWriter::PushValue
              (this->Writer,this,(ulonglong)this->CurrentWriteFrameNumber,
               (FCsvStatSeriesValue *)local_res8);
  }
  (this->CurrentValue).AsTimerCycles = 0;
  this->bDirty = false;
  return;
}

// GetAllocatedSize @ 141944ef0

ulong64 __thiscall FCsvStatSeries::GetAllocatedSize(FCsvStatSeries *this)

{
  return (longlong)(this->Name).Data.ArrayMax * 2 + 0x50;
}

// IsAggregateSeries @ 141951180

bool __thiscall FCsvStatSeries::IsAggregateSeries(FCsvStatSeries *this)

{
  return false;
}

// SetCustomStatValue_Int @ 14196a670

void __thiscall
FCsvStatSeries::SetCustomStatValue_Int
          (FCsvStatSeries *this,uint param_1,ECsvCustomStatOp param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->SeriesType != CustomStatInt) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SeriesType == EType::CustomStatInt",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x7e1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 < this->CurrentWriteFrameNumber) && (this->CurrentWriteFrameNumber != 0xffffffff)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3045156212573206558>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ProfilingDebugging\\CsvProfiler.cpp"
                       ,0x7e2,
                       "CurrentWriteFrameNumber <= DataFrameNumber || CurrentWriteFrameNumber == -1"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->CurrentWriteFrameNumber != param_1) {
    if (this->CurrentWriteFrameNumber != 0xffffffff) {
      FlushIfDirty(this);
    }
    param_2 = Set;
    this->CurrentWriteFrameNumber = param_1;
    this->bDirty = true;
  }
  if (param_2 == Set) {
    (this->CurrentValue).AsIntValue = param_3;
  }
  else if (param_2 == Min) {
    iVar3 = (this->CurrentValue).AsIntValue;
    if (param_3 < (this->CurrentValue).AsIntValue) {
      iVar3 = param_3;
    }
    (this->CurrentValue).AsIntValue = iVar3;
  }
  else if (param_2 == Max) {
    iVar3 = (this->CurrentValue).AsIntValue;
    if ((this->CurrentValue).AsIntValue < param_3) {
      iVar3 = param_3;
    }
    (this->CurrentValue).AsIntValue = iVar3;
  }
  else if (param_2 == Accumulate) {
    (this->CurrentValue).AsIntValue = (this->CurrentValue).AsIntValue + param_3;
  }
  return;
}

