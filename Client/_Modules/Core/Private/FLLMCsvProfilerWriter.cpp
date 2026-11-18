// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FLLMCsvProfilerWriter @ 141677a90

FLLMCsvProfilerWriter * __thiscall
UE::LLMPrivate::FLLMCsvProfilerWriter::FLLMCsvProfilerWriter(FLLMCsvProfilerWriter *this)

{
  *(undefined8 *)&this->TagDataToCsvStatName = 0;
  *(undefined8 *)&(this->TagDataToCsvStatName).field_0x8 = 0;
  *(undefined8 *)&(this->TagDataToCsvStatName).field_0x10 = 0;
  *(undefined8 *)&(this->TagDataToCsvStatName).field_0x28 = 0;
  *(undefined8 *)&(this->TagDataToCsvStatName).field_0x30 = 0;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x38 = 0;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x3c = 0x80;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x44 = 0;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x40 = 0xffffffff;
  *(undefined8 *)&(this->TagDataToCsvStatName).field_0x50 = 0;
  *(undefined8 *)&(this->TagDataToCsvStatName).field_0x58 = 0;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x60 = 0;
  return this;
}

// Clear @ 14168a7b0

void __thiscall UE::LLMPrivate::FLLMCsvProfilerWriter::Clear(FLLMCsvProfilerWriter *this)

{
  TLLMMap<UE::LLMPrivate::FTagData_const_*,FName> *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->TagDataToCsvStatName;
  bVar3 = 1 < *(int *)&(this->TagDataToCsvStatName).field_0x60;
  if (!bVar3) {
    TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
    ::UnhashElements((TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
                      *)this_00);
  }
  puVar1 = &(this->TagDataToCsvStatName).field_0x14;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<0,TSizedLLMAllocator<32>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x40 = 0xffffffff;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x44 = 0;
  iVar2 = *(int *)&(this->TagDataToCsvStatName).field_0x3c;
  *(undefined4 *)&(this->TagDataToCsvStatName).field_0x38 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TagDataToCsvStatName).field_0x3c = 0x80;
    TBitArray<FDefaultBitArrayLLMAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayLLMAllocator> *)&(this->TagDataToCsvStatName).field_0x18,0
              );
  }
  if (bVar3) {
    *(undefined4 *)&(this->TagDataToCsvStatName).field_0x60 = 1;
    TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
    ::Rehash((TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
              *)this_00);
  }
  return;
}

// Publish @ 1416b7370

/* WARNING: Enum "ESizeParams": Some values do not have unique names */

void __thiscall
UE::LLMPrivate::FLLMCsvProfilerWriter::Publish
          (FLLMCsvProfilerWriter *this,FLowLevelMemTracker *param_1,
          TLLMMap<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData> *param_2,
          FTagData *param_3,FTagData *param_4,long64 param_5,ESizeParams param_6)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FTagData *pFVar9;
  FTrackerTagSizeData *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  longlong lVar17;
  long64 lVar18;
  uint *puVar19;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayLLMAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar5 = _GCsvCategory_LLM.Index;
  if (this->Tracker == Platform) {
    uVar5 = _GCsvCategory_LLMPlatform.Index;
  }
  if (param_3 != (FTagData *)0x0) {
    RecordTagToCsv(this,uVar5,param_3,param_5);
  }
  if (param_4 != (FTagData *)0x0) {
    pFVar9 = FLowLevelMemTracker::FindTagData(param_1,TagName_Untagged,None,FunctionAPI);
    if ((pFVar9 == (FTagData *)0x0) ||
       (pFVar10 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                  ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                          *)param_2,pFVar9), pFVar10 == (FTrackerTagSizeData *)0x0)) {
      lVar18 = 0;
    }
    else {
      lVar18 = pFVar10->Size;
      if ((param_6 & ReportPeak) != Default) {
        lVar18 = pFVar10->PeakSize;
      }
      if ((param_6 & RelativeToSnapshot) != Default) {
        lVar17 = lVar18 - pFVar10->SizeInSnapshot;
        lVar11 = 0x7fffffffffffffff;
        if (lVar17 < 0x7fffffffffffffff) {
          lVar11 = lVar17;
        }
        lVar18 = 0;
        if (0 < lVar11) {
          lVar18 = lVar11;
        }
      }
    }
    RecordTagToCsv(this,uVar5,param_4,lVar18);
  }
  iVar3 = *(int *)&param_2->field_0x38;
  puVar1 = &param_2->field_0x18;
  iVar14 = 0;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar19 = *(uint **)&param_2->field_0x28;
    if (*(uint **)&param_2->field_0x28 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar13 = *puVar19;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1416b74bd;
      uVar13 = puVar19[lVar11 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar8 = iVar16 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1416b74bd:
  uVar13 = *(uint *)&param_2->field_0x38;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar14);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_2->field_0x10 - *(int *)&param_2->field_0x44);
  TStack_60.Array = (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_2->field_0x38;
  if (uVar13 != uVar7) {
    puVar15 = *(undefined1 **)&param_2->field_0x28;
    if (*(undefined1 **)&param_2->field_0x28 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1416b75c1;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_1416b75c1:
  while( true ) {
    if (*(int *)&param_2->field_0x10 - *(int *)&param_2->field_0x44 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData>_>,FDefaultSparseArrayLLMAllocator>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayLLMAllocator> *)puVar1)) break;
    pFVar9 = *(FTagData **)((longlong)TStack_60.CurrentBitIndex * 0x38 + *(longlong *)param_2);
    if (((pFVar9->bIsReportable != false) && (pFVar9->TagSet == None)) &&
       ((param_4 == (FTagData *)0x0 || (pFVar9->Name != TagName_Untagged)))) {
      pFVar10 = TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                ::Find((TMapBase<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,FDefaultSetLLMAllocator,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,UE::LLMPrivate::FTrackerTagSizeData,0>_>
                        *)param_2,pFVar9);
      if (pFVar10 == (FTrackerTagSizeData *)0x0) {
        lVar18 = 0;
      }
      else {
        lVar18 = pFVar10->Size;
        if ((param_6 & ReportPeak) != Default) {
          lVar18 = pFVar10->PeakSize;
        }
        if ((param_6 & RelativeToSnapshot) != Default) {
          lVar17 = lVar18 - pFVar10->SizeInSnapshot;
          lVar11 = 0x7fffffffffffffff;
          if (lVar17 < 0x7fffffffffffffff) {
            lVar11 = lVar17;
          }
          lVar18 = 0;
          if (0 < lVar11) {
            lVar18 = lVar11;
          }
        }
      }
      RecordTagToCsv(this,uVar5,pFVar9,lVar18);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayLLMAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RecordTagToCsv @ 1416bae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::LLMPrivate::FLLMCsvProfilerWriter::RecordTagToCsv
          (FLLMCsvProfilerWriter *this,int param_1,FTagData *param_2,long64 param_3)

{
  longlong lVar1;
  FName *pFVar2;
  uint uVar3;
  undefined1 *puVar4;
  FName *pFVar5;
  FName *pFVar6;
  undefined1 auStack_8c8 [32];
  FName local_8a8;
  TPairInitializer<UE::LLMPrivate::FTagData_const_*_const_&,FName_const_&> local_8a0;
  FName **local_890;
  FName *local_888;
  TStringBuilderBase<wchar_t> local_878;
  wchar_t local_858 [1035];
  wchar_t local_42 [5];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_8c8;
  pFVar6 = (FName *)0x0;
  local_8a8.ComparisonIndex.Value = 0;
  local_8a8.Number = 0;
  uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  pFVar2 = pFVar6;
  if (*(int *)&(this->TagDataToCsvStatName).field_0x10 !=
      *(int *)&(this->TagDataToCsvStatName).field_0x44) {
    puVar4 = *(undefined1 **)&(this->TagDataToCsvStatName).field_0x50;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TagDataToCsvStatName).field_0x48;
    }
    uVar3 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->TagDataToCsvStatName).field_0x60 - 1U &
                               (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (uVar3 != 0xffffffff) {
      lVar1 = *(longlong *)&(this->TagDataToCsvStatName).field_0x0;
      do {
        pFVar2 = (FName *)(lVar1 + (longlong)(int)uVar3 * 0x18);
        if (*(FTagData **)(lVar1 + (longlong)(int)uVar3 * 0x18) == param_2) break;
        uVar3 = pFVar2[2].ComparisonIndex.Value;
        pFVar2 = pFVar6;
      } while (uVar3 != 0xffffffff);
    }
  }
  pFVar5 = pFVar2 + 1;
  if (pFVar2 == (FName *)0x0) {
    pFVar5 = pFVar6;
  }
  local_8a0.Value = &param_2->Name;
  if (pFVar5 == (FName *)0x0) {
    local_878.Base = local_858;
    local_878.bIsDynamic = false;
    local_878.bIsExternal = false;
    local_878.End = local_42;
    local_878.CurPos = local_858;
    FTagData::AppendDisplayPath(param_2,&local_878,-1);
    pFVar2 = ::FName::FName((FName *)&local_8a0,
                            (int)((longlong)local_878.CurPos - (longlong)local_878.Base >> 1),
                            local_878.Base,FNAME_Add);
    local_8a8 = *pFVar2;
    local_890 = &local_8a0.Value;
    local_888 = &local_8a8;
    TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
    ::Emplace<TPairInitializer<UE::LLMPrivate::FTagData_const_*_const_&,FName_const_&>_>
              ((TSet<TTuple<UE::LLMPrivate::FTagData_const_*,FName>,TDefaultMapHashableKeyFuncs<UE::LLMPrivate::FTagData_const_*,FName,0>,FDefaultSetLLMAllocator>
                *)&this->TagDataToCsvStatName,&local_8a0,(bool *)&local_890);
    pFVar5 = &local_8a8;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_878);
  }
  FCsvProfiler::RecordCustomStat
            (pFVar5,param_1,(float)((double)param_3 * __real_3eb0000000000000),Set);
  return;
}

// SetTracker @ 1416c1240

void __thiscall
UE::LLMPrivate::FLLMCsvProfilerWriter::SetTracker(FLLMCsvProfilerWriter *this,ELLMTracker param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 < Max) {
    this->Tracker = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InTracker == ELLMTracker::Platform || InTracker == ELLMTracker::Default",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\LowLevelMemTracker.cpp"
                     ,0x19a9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Tracker = param_1;
  return;
}

