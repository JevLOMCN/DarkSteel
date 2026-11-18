// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FCanvasWordWrapper @ 148906c40

FCanvasWordWrapper * __thiscall FCanvasWordWrapper::FCanvasWordWrapper(FCanvasWordWrapper *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<IBreakIterator,1> *pTVar2;
  TSharedRef<IBreakIterator,1> local_18;
  
  pTVar2 = FBreakIterator::CreateCharacterBoundaryIterator(&local_18);
  (this->GraphemeBreakIterator).Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (this->GraphemeBreakIterator).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pTVar2 = FBreakIterator::CreateLineBreakIterator(&local_18);
  (this->LineBreakIterator).Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (this->LineBreakIterator).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// AddLine @ 148916fd0

void __thiscall
FCanvasWordWrapper::AddLine(FCanvasWordWrapper *this,FWrappingState *param_1,int param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  FTextSizingParameters *pFVar3;
  UFont *this_00;
  TArray<FWrappedStringElement,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  double dVar12;
  float fVar13;
  wchar_t *pwVar14;
  schar sVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  FString *pFVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_res18 [2];
  float local_res20 [2];
  float local_148;
  float local_144;
  int local_140;
  FScriptContainerElement *local_138;
  int local_130;
  int local_12c;
  double local_128;
  double dStack_120;
  float local_110;
  float local_10c;
  double local_108;
  double dStack_100;
  UFont *local_f8;
  double local_f0;
  double dStack_e8;
  FString local_e0;
  FString local_d0 [9];
  
  pFVar3 = param_1->Parameters;
  this_00 = (pFVar3->DrawFont).field0_0x0.DebugPtr;
  dVar7 = (pFVar3->Scaling).field0_0x0._s_0.X;
  dVar8 = (pFVar3->Scaling).field0_0x0._s_0.Y;
  local_108 = dVar7;
  dStack_100 = dVar8;
  local_f8 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this_00 != (UFont *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  iVar18 = param_1->StartIndex;
  iVar20 = (param_1->String).Size;
  dVar9 = (pFVar3->SpacingAdjust).field0_0x0._s_0.X;
  dStack_e8 = (pFVar3->SpacingAdjust).field0_0x0._s_0.Y;
  fVar27 = 0.0;
  fVar28 = 0.0;
  iVar17 = param_2 - iVar18;
  if (iVar18 < 0) {
    iVar17 = param_2;
  }
  local_110 = 0.0;
  local_10c = 0.0;
  if (iVar18 < 0) {
    iVar18 = 0;
  }
  if (iVar20 < iVar18) {
    iVar18 = iVar20;
  }
  iVar6 = iVar20 - iVar18;
  if (iVar17 < iVar20 - iVar18) {
    iVar6 = iVar17;
  }
  iVar20 = 0;
  if (0 < iVar6) {
    iVar20 = iVar6;
  }
  pwVar1 = (param_1->String).DataPtr + iVar18;
  iVar18 = iVar20;
  local_140 = iVar20;
  fVar26 = local_110;
  fVar13 = local_10c;
  local_f0 = dVar9;
  if (this_00 != (UFont *)0x0) {
    UFont::GetCharSize(this_00,L'0',&local_148,&local_144);
    if (local_148 == 0.0) {
      UFont::GetCharSize(this_00,L'A',&local_148,&local_144);
    }
    dVar12 = dStack_e8;
    fVar29 = (float)dVar7;
    fVar25 = fVar28;
    pwVar14 = pwVar1;
    pwVar23 = pwVar1;
    pwVar11 = (wchar_t *)0x0;
    fVar26 = local_110;
    fVar13 = local_10c;
    while (pwVar10 = pwVar14, fVar28 = fVar25, pwVar10 < pwVar1 + iVar20) {
      pwVar23 = pwVar23 + 1;
      wVar2 = *pwVar10;
      iVar18 = local_140;
      fVar26 = fVar27;
      fVar13 = fVar28;
      if (wVar2 == L'\0') break;
      UFont::GetCharSize(this_00,wVar2,local_res18,local_res20);
      if ((local_res20[0] == 0.0) && (wVar2 == L'\n')) {
        local_res20[0] = local_144;
      }
      fVar26 = (float)((double)fVar29 * dVar9);
      if (pwVar11 != (wchar_t *)0x0) {
        sVar15 = UFont::GetCharKerning(this_00,*pwVar11,wVar2);
        fVar26 = (float)(int)sVar15 * fVar29 + (float)((double)fVar29 * dVar9);
      }
      local_res18[0] = local_res18[0] * fVar29;
      local_res20[0] = local_res20[0] * (float)dVar8;
      if (((pwVar23 < pwVar1 + iVar20) && (*pwVar23 != L'\0')) &&
         (iVar18 = iswspace(*pwVar23), iVar18 == 0)) {
        local_res18[0] = local_res18[0] + fVar26;
      }
      fVar27 = fVar27 + local_res18[0];
      fVar25 = (float)((double)(float)dVar8 * dVar12) + local_res20[0];
      pwVar14 = pwVar10 + 1;
      pwVar11 = pwVar10;
      iVar18 = local_140;
      fVar26 = fVar27;
      fVar13 = fVar25;
      if (fVar25 <= fVar28) {
        fVar25 = fVar28;
        fVar13 = fVar28;
      }
    }
  }
  local_10c = fVar13;
  local_110 = fVar26;
  pFVar21 = (FScriptContainerElement *)0x0;
  pFVar19 = ::FString::ConstructFromPtrSize(&local_e0,pwVar1,iVar18);
  local_130 = 0;
  local_12c = 0;
  if (local_d0 != pFVar19) {
    pFVar21 = (pFVar19->Data).AllocatorInstance.Data;
    (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_130 = (pFVar19->Data).ArrayNum;
    local_12c = (pFVar19->Data).ArrayMax;
    (pFVar19->Data).ArrayNum = 0;
    (pFVar19->Data).ArrayMax = 0;
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  dStack_120 = (double)fVar28;
  pTVar4 = param_1->Results;
  local_128 = (double)fVar27;
  pFVar22 = (pTVar4->AllocatorInstance).Data;
  local_138 = pFVar21;
  if (((pFVar22 <= (FScriptContainerElement *)&local_138) &&
      ((FScriptContainerElement *)&local_138 < pFVar22 + (longlong)pTVar4->ArrayMax * 0x20)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar18 = pTVar4->ArrayNum;
  if (iVar18 == pTVar4->ArrayMax) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&pTVar4->AllocatorInstance,&pTVar4->ArrayMax);
  }
  pFVar21 = local_138;
  pTVar4->ArrayNum = iVar18 + 1;
  pFVar22 = (pTVar4->AllocatorInstance).Data + (longlong)iVar18 * 0x20;
  *(undefined8 *)pFVar22 = 0;
  lVar24 = (longlong)local_130;
  *(int *)(pFVar22 + 8) = local_130;
  if (local_130 == 0) {
    *(int *)(pFVar22 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_130,0,(ForAnyElementType *)pFVar22,local_130,(int *)(pFVar22 + 0xc));
    memcpy(*(void **)pFVar22,pFVar21,lVar24 * 2);
  }
  *(double *)(pFVar22 + 0x10) = local_128;
  *(double *)(pFVar22 + 0x18) = dStack_120;
  if (local_138 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138);
  }
  return;
}

// DoesSubstringFit @ 148927b60

bool __thiscall
FCanvasWordWrapper::DoesSubstringFit(FCanvasWordWrapper *this,FWrappingState *param_1,int param_2)

{
  float *pfVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  FTextSizingParameters *pFVar4;
  UFont *this_00;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  schar sVar12;
  int iVar13;
  int iVar14;
  wchar_t *pwVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_a8 [28];
  
  pFVar4 = param_1->Parameters;
  dVar6 = (pFVar4->Scaling).field0_0x0._s_0.X;
  dVar7 = (pFVar4->Scaling).field0_0x0._s_0.Y;
  this_00 = (pFVar4->DrawFont).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this_00 != (UFont *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  iVar14 = param_1->StartIndex;
  iVar16 = (param_1->String).Size;
  dVar8 = (pFVar4->SpacingAdjust).field0_0x0._s_0.X;
  fVar18 = 0.0;
  iVar13 = param_2 - iVar14;
  if (iVar14 < 0) {
    iVar13 = param_2;
  }
  if (iVar14 < 0) {
    iVar14 = 0;
  }
  if (iVar16 < iVar14) {
    iVar14 = iVar16;
  }
  iVar5 = iVar16 - iVar14;
  if (iVar13 < iVar16 - iVar14) {
    iVar5 = iVar13;
  }
  iVar16 = 0;
  if (0 < iVar5) {
    iVar16 = iVar5;
  }
  pwVar15 = (param_1->String).DataPtr + iVar14;
  if (this_00 != (UFont *)0x0) {
    UFont::GetCharSize(this_00,L'0',local_res20,local_a8);
    if (local_res20[0] == 0.0) {
      UFont::GetCharSize(this_00,L'A',local_res20,local_a8);
    }
    fVar19 = (float)dVar6;
    pwVar2 = pwVar15 + iVar16;
    fVar20 = (float)((double)fVar19 * dVar8);
    pwVar11 = pwVar15;
    pwVar10 = (wchar_t *)0x0;
    while (pwVar9 = pwVar11, pwVar9 < pwVar2) {
      pwVar15 = pwVar15 + 1;
      wVar3 = *pwVar9;
      if (wVar3 == L'\0') break;
      UFont::GetCharSize(this_00,wVar3,local_res18,local_res10);
      if ((local_res10[0] == 0.0) && (wVar3 == L'\n')) {
        local_res10[0] = local_a8[0];
      }
      fVar17 = fVar20;
      if (pwVar10 != (wchar_t *)0x0) {
        sVar12 = UFont::GetCharKerning(this_00,*pwVar10,wVar3);
        fVar17 = (float)(int)sVar12 * fVar19 + fVar20;
      }
      local_res18[0] = local_res18[0] * fVar19;
      local_res10[0] = local_res10[0] * (float)dVar7;
      if (((pwVar15 < pwVar2) && (*pwVar15 != L'\0')) && (iVar14 = iswspace(*pwVar15), iVar14 == 0))
      {
        local_res18[0] = local_res18[0] + fVar17;
      }
      fVar18 = fVar18 + local_res18[0];
      pwVar10 = pwVar9;
      pwVar11 = pwVar9 + 1;
    }
  }
  pfVar1 = &param_1->Parameters->DrawXL;
  return fVar18 < *pfVar1 || fVar18 == *pfVar1;
}

// Execute @ 14893d820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FCanvasWordWrapper::Execute
          (FCanvasWordWrapper *this,TStringView<wchar_t> *param_1,FTextSizingParameters *param_2,
          TArray<FWrappedStringElement,TSizedDefaultAllocator<32>_> *param_3,
          TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *param_4)

{
  IBreakIterator *pIVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Canvas_WordWrappingTime> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar15;
  int iVar16;
  LARGE_INTEGER local_res10;
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FStatMessage local_a8;
  FWrappingState local_98;
  FName local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar16 = 0;
  FVar14 = StatPtr_STAT_Canvas_WordWrappingTime;
  local_res10 = (LARGE_INTEGER)param_1;
  if (StatPtr_STAT_Canvas_WordWrappingTime ==
      (FThreadSafeStaticStat<FStat_STAT_Canvas_WordWrappingTime>)0x0) {
    pFVar13 = ::FName::FName(local_68,"STAT_Canvas_WordWrappingTime");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Canvas_WordWrappingTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Canvas_WordWrappingTime,*pFVar13,
                        L"Word Wrapping Time","STATGROUP_Canvas","STATCAT_Advanced",L"Canvas",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar14;
  bVar5 = false;
  bVar11 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar5 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_res20.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\Canvas.cpp"
                   ,0x8b);
        bVar5 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14893d961;
    }
  }
  bVar6 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14893d961:
  local_98.StartIndex = 0;
  local_98.WrappedLineData = param_4;
  local_98.String.DataPtr._0_4_ = *(undefined4 *)local_res10;
  local_98.String.DataPtr._4_4_ = *(undefined4 *)(local_res10.QuadPart + 4);
  uVar9 = *(undefined8 *)local_res10;
  uVar7 = *(undefined8 *)local_res10;
  piVar4 = (int *)(local_res10.QuadPart + 8);
  iVar3 = *piVar4;
  local_98.String._12_4_ = *(undefined4 *)(local_res10.QuadPart + 0xc);
  uVar10 = *(undefined8 *)piVar4;
  uVar8 = *(undefined8 *)piVar4;
  local_98.String.Size = iVar3;
  local_98.Parameters = param_2;
  local_98.Results = param_3;
  if (param_4 != (TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *)0x0) {
    param_4->ArrayNum = 0;
    if (param_4->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
    }
  }
  if (iVar3 != 0) {
    if (((this->GraphemeBreakIterator).Object == (IBreakIterator *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->GraphemeBreakIterator).Object;
    local_58 = uVar7;
    uStack_50 = uVar8;
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_58);
    if (((this->LineBreakIterator).Object == (IBreakIterator *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->LineBreakIterator).Object;
    local_48 = uVar9;
    uStack_40 = uVar10;
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_48);
    if (0 < iVar3) {
      do {
        bVar12 = ProcessLine(this,&local_98);
        if (!bVar12) break;
        iVar16 = iVar16 + 1;
      } while (iVar16 < local_98.String.Size);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_a8.StatData.Pad = (uchar  [8])(local_res10.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_a8);
      piVar4 = &this_00->ScopeCount;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// FindEndOfLastWholeGraphemeCluster @ 148944520

int __thiscall
FCanvasWordWrapper::FindEndOfLastWholeGraphemeCluster
          (FCanvasWordWrapper *this,int param_1,int param_2)

{
  IBreakIterator *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->GraphemeBreakIterator).Object == (IBreakIterator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pIVar1 = (this->GraphemeBreakIterator).Object;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,param_2 + 1);
  if (iVar4 < param_1) {
    iVar4 = -1;
  }
  return iVar4;
}

// FindFirstMandatoryBreakBetween @ 148944b50

int __thiscall
FCanvasWordWrapper::FindFirstMandatoryBreakBetween
          (FCanvasWordWrapper *this,FWrappingState *param_1,int param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  ushort uVar3;
  wchar_t wVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar8 = param_1->StartIndex;
  iVar7 = iVar8 + 1;
  iVar9 = -1;
  if (iVar7 < param_2) {
    lVar10 = (longlong)iVar7 * 2 + -2;
    do {
      piVar1 = &(param_1->String).Size;
      if (((iVar8 < 0) || (*piVar1 <= iVar8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < Size",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                             ,0x234,
                             L"Index out of bounds on StringView: index %i on a view with a length of %i"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      uVar3 = *(ushort *)(lVar10 + (longlong)(param_1->String).DataPtr);
      if ((uVar3 == 0x2028 || (uVar3 - 10 < 4 || uVar3 == 0x2029)) || uVar3 == 0x85) {
        if (((iVar7 < 0) || (*piVar1 <= iVar7)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        pwVar2 = (param_1->String).DataPtr + iVar7;
        if (((uVar3 != 0xd) || (pwVar2 == (wchar_t *)0x0)) || (*pwVar2 != L'\n')) {
          iVar9 = iVar7;
          if (iVar7 != -1) {
            return iVar7;
          }
          break;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 2;
      iVar9 = -1;
    } while (iVar7 < param_2);
  }
  if (((param_2 + -1 < 0) || ((param_1->String).Size <= param_2 + -1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index < Size",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                         ,0x234,
                         L"Index out of bounds on StringView: index %i on a view with a length of %i"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  wVar4 = (param_1->String).DataPtr[(longlong)param_2 + -1];
  if ((wVar4 == L'\x2028' || ((ushort)wVar4 - 10 < 4 || wVar4 == L'\x2029')) || wVar4 == L'\x85') {
    iVar9 = param_2;
  }
  return iVar9;
}

// FindIndexAtOrAfterWrapWidth @ 148944d50

int __thiscall
FCanvasWordWrapper::FindIndexAtOrAfterWrapWidth(FCanvasWordWrapper *this,FWrappingState *param_1)

{
  int iVar1;
  FTextSizingParameters *pFVar2;
  int iVar3;
  int iVar4;
  int local_res10 [6];
  TStringView<wchar_t> local_58;
  FTextSizingParameters local_48;
  
  pFVar2 = param_1->Parameters;
  local_48.DrawX = pFVar2->DrawX;
  local_48.DrawY = pFVar2->DrawY;
  local_48.DrawXL = pFVar2->DrawXL;
  local_48.DrawYL = pFVar2->DrawYL;
  local_48.DrawFont.field0_0x0 =
       (TObjectPtr<UFont_const_>_u_0)(pFVar2->DrawFont).field0_0x0.DebugPtr;
  local_48.Scaling.field0_0x0._s_0.X = (pFVar2->Scaling).field0_0x0._s_0.X;
  local_48.Scaling.field0_0x0._s_0.Y = (pFVar2->Scaling).field0_0x0._s_0.Y;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (local_48.DrawFont.field0_0x0.DebugPtr != (UFont *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_48.DrawFont.field0_0x0);
  }
  iVar1 = (param_1->String).Size;
  local_48.SpacingAdjust.field0_0x0._s_0.X = (pFVar2->SpacingAdjust).field0_0x0._s_0.X;
  local_48.SpacingAdjust.field0_0x0._s_0.Y = (pFVar2->SpacingAdjust).field0_0x0._s_0.Y;
  local_res10[0] = -1;
  iVar4 = iVar1 - param_1->StartIndex;
  iVar3 = iVar1;
  if (iVar4 < iVar1) {
    iVar3 = iVar4;
  }
  local_58.Size = 0;
  if (0 < iVar3) {
    local_58.Size = iVar3;
  }
  local_58.DataPtr = (param_1->String).DataPtr + ((longlong)iVar1 - (longlong)local_58.Size);
  UCanvas::MeasureStringInternal
            (&local_48,&local_58,(int)param_1->Parameters->DrawXL,CharacterAtOffset,local_res10);
  return local_res10[0] + param_1->StartIndex;
}

// FindLastBreakCandidateBetween @ 148944e30

int __thiscall
FCanvasWordWrapper::FindLastBreakCandidateBetween(FCanvasWordWrapper *this,int param_1,int param_2)

{
  IBreakIterator *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if ((this->LineBreakIterator).Object == (IBreakIterator *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pIVar1 = (this->LineBreakIterator).Object;
  iVar4 = (**(code **)((longlong)*pIVar1 + 0x80))(pIVar1,param_2 + 1);
  if (iVar4 < param_1) {
    iVar4 = -1;
  }
  return iVar4;
}

// ProcessLine @ 148974000

bool __thiscall FCanvasWordWrapper::ProcessLine(FCanvasWordWrapper *this,FWrappingState *param_1)

{
  FTextSizingParameters *pFVar1;
  IBreakIterator *pIVar2;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int local_res10 [2];
  TStringView<wchar_t> local_78;
  FTextSizingParameters local_68;
  
  iVar11 = (param_1->String).Size;
  bVar6 = false;
  if (param_1->StartIndex < iVar11) {
    iVar9 = FindFirstMandatoryBreakBetween(this,param_1,iVar11);
    if ((iVar9 == -1) || (bVar6 = DoesSubstringFit(this,param_1,iVar9), !bVar6)) {
      pFVar1 = param_1->Parameters;
      local_68.DrawX = pFVar1->DrawX;
      local_68.DrawY = pFVar1->DrawY;
      local_68.DrawXL = pFVar1->DrawXL;
      local_68.DrawYL = pFVar1->DrawYL;
      local_68.DrawFont.field0_0x0 =
           (TObjectPtr<UFont_const_>_u_0)(pFVar1->DrawFont).field0_0x0.DebugPtr;
      local_68.Scaling.field0_0x0._s_0.X = (pFVar1->Scaling).field0_0x0._s_0.X;
      local_68.Scaling.field0_0x0._s_0.Y = (pFVar1->Scaling).field0_0x0._s_0.Y;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_68.DrawFont.field0_0x0.DebugPtr != (UFont *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_68.DrawFont.field0_0x0);
      }
      iVar9 = (param_1->String).Size;
      local_68.SpacingAdjust.field0_0x0._s_0.X = (pFVar1->SpacingAdjust).field0_0x0._s_0.X;
      local_68.SpacingAdjust.field0_0x0._s_0.Y = (pFVar1->SpacingAdjust).field0_0x0._s_0.Y;
      local_res10[0] = -1;
      iVar10 = iVar9 - param_1->StartIndex;
      iVar12 = iVar9;
      if (iVar10 < iVar9) {
        iVar12 = iVar10;
      }
      local_78.Size = 0;
      if (0 < iVar12) {
        local_78.Size = iVar12;
      }
      local_78.DataPtr = (param_1->String).DataPtr + ((longlong)iVar9 - (longlong)local_78.Size);
      UCanvas::MeasureStringInternal
                (&local_68,&local_78,(int)param_1->Parameters->DrawXL,CharacterAtOffset,local_res10)
      ;
      iVar12 = param_1->StartIndex;
      iVar10 = local_res10[0] + iVar12;
      iVar9 = -1;
      if (iVar10 == iVar11) {
        iVar9 = iVar10;
      }
      if (iVar9 <= iVar12) {
        if (((this->LineBreakIterator).Object == (IBreakIterator *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pIVar2 = (this->LineBreakIterator).Object;
        iVar9 = (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,iVar10 + 1);
        if (iVar9 < iVar12) {
          iVar9 = -1;
        }
      }
      iVar12 = param_1->StartIndex;
      if (iVar9 <= iVar12) {
        if (((this->GraphemeBreakIterator).Object == (IBreakIterator *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        pIVar2 = (this->GraphemeBreakIterator).Object;
        iVar9 = (**(code **)((longlong)*pIVar2 + 0x80))(pIVar2,iVar10 + 1);
        if (iVar9 < iVar12) {
          iVar9 = -1;
        }
      }
      iVar12 = iVar9;
      if (iVar9 <= param_1->StartIndex) {
        iVar9 = iVar10;
        iVar12 = iVar10;
      }
    }
    else {
      iVar12 = iVar9 + -1;
    }
    if (0 < iVar12) {
      lVar13 = (longlong)iVar12;
      iVar10 = iVar12;
      do {
        iVar10 = iVar10 + -1;
        if (((iVar10 < 0) || ((param_1->String).Size <= iVar10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        bVar6 = FTextChar::IsWhitespace((uint)(ushort)(param_1->String).DataPtr[lVar13 + -1]);
        if (!bVar6) break;
        iVar12 = iVar12 + -1;
        lVar13 = lVar13 + -1;
      } while (0 < lVar13);
    }
    iVar10 = param_1->StartIndex;
    if (iVar10 <= iVar12) {
      AddLine(this,param_1,iVar12);
    }
    bVar6 = iVar10 <= iVar12;
    if (iVar9 < iVar11) {
      lVar13 = (longlong)iVar9;
      do {
        if (((iVar9 < 0) || ((param_1->String).Size <= iVar9)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < Size",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                               ,0x234,
                               L"Index out of bounds on StringView: index %i on a view with a length of %i"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        bVar8 = FTextChar::IsWhitespace((uint)(ushort)(param_1->String).DataPtr[lVar13]);
        if (!bVar8) break;
        iVar9 = iVar9 + 1;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar11);
    }
    pTVar3 = param_1->WrappedLineData;
    if (pTVar3 != (TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *)0x0) {
      iVar11 = pTVar3->ArrayNum;
      if (iVar11 == pTVar3->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
      }
      pFVar4 = (pTVar3->AllocatorInstance).Data;
      pTVar3->ArrayNum = iVar11 + 1;
      *(int *)(pFVar4 + (longlong)iVar11 * 8) = param_1->StartIndex;
      *(int *)(pFVar4 + (longlong)iVar11 * 8 + 4) = iVar12;
    }
    param_1->StartIndex = iVar9;
  }
  return bVar6;
}

