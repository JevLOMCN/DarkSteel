// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// FStatsCollectorImpl @ 143224f80

FStatsCollectorImpl * __thiscall
BuildPatchServices::FStatsCollectorImpl::FStatsCollectorImpl(FStatsCollectorImpl *this)

{
  LARGE_INTEGER local_res8;
  
  this->_padding_ = (longlong)&___7FStatsCollectorImpl_BuildPatchServices__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DataCS,4000);
  *(undefined8 *)&this->AddedStats = 0;
  *(undefined8 *)&(this->AddedStats).field_0x8 = 0;
  *(undefined8 *)&(this->AddedStats).field_0x20 = 0;
  *(undefined4 *)&(this->AddedStats).field_0x28 = 0;
  *(undefined4 *)&(this->AddedStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->AddedStats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddedStats).field_0x34 = 0;
  *(undefined8 *)&(this->AddedStats).field_0x40 = 0;
  *(undefined4 *)&(this->AddedStats).field_0x48 = 0;
  *(undefined8 *)&this->AtomicNameMap = 0;
  *(undefined8 *)&(this->AtomicNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->AtomicNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->AtomicNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->AtomicNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AtomicNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AtomicNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->AtomicNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->AtomicNameMap).field_0x48 = 0;
  *(undefined8 *)&this->AtomicFormatMap = 0;
  *(undefined8 *)&(this->AtomicFormatMap).field_0x8 = 0;
  *(undefined8 *)&(this->AtomicFormatMap).field_0x20 = 0;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x28 = 0;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x34 = 0;
  *(undefined8 *)&(this->AtomicFormatMap).field_0x40 = 0;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x48 = 0;
  QueryPerformanceCounter(&local_res8);
  this->LastLogged = (ulong64)local_res8;
  this->LongestName = 0;
  FNumberFormattingOptions::FNumberFormattingOptions(&this->PercentageFormattingOptions);
  (this->PercentageFormattingOptions).MinimumFractionalDigits = 2;
  (this->PercentageFormattingOptions).MaximumFractionalDigits = 2;
  return this;
}

// ~FStatsCollectorImpl @ 143228db0

void __thiscall
BuildPatchServices::FStatsCollectorImpl::~FStatsCollectorImpl(FStatsCollectorImpl *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<FString,__int64_volatile_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>_>
  *this_00;
  ulonglong uVar2;
  TMap<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
  *this_01;
  TMap<__int64_*,BuildPatchServices::EStatFormat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,BuildPatchServices::EStatFormat,0>_>
  *this_02;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->DataCS;
  this->_padding_ = (longlong)&___7FStatsCollectorImpl_BuildPatchServices__6B_;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = *(int *)&(this->AddedStats).field_0x28;
  puVar1 = &(this->AddedStats).field_0x10;
  iVar10 = 0;
  this_00 = &this->AddedStats;
  iVar12 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->AddedStats).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar14 = *puVar13;
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_143228e80;
      uVar14 = puVar13[lVar9 + 1];
    }
    uVar7 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar12 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_143228e80:
  uVar14 = *(uint *)&(this->AddedStats).field_0x28;
  uVar15 = uVar14 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar10);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar14 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AddedStats).field_0x8 -
                       *(int *)&(this->AddedStats).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->AddedStats).field_0x28;
  if (uVar14 != uVar7) {
    puVar11 = *(undefined1 **)&(this->AddedStats).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      lVar9 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar14 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_143228f80;
      uVar14 = *(uint *)(puVar11 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar14 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar14) {
      uVar14 = uVar7;
    }
  }
LAB_143228f80:
  while( true ) {
    if (*(int *)&(this->AddedStats).field_0x8 - *(int *)&(this->AddedStats).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,__int64_volatile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar14) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    ::operator_delete(*(void **)((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 +
                                *(longlong *)&this_00->field_0x0),8);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar6 = 1 < *(int *)&(this->AddedStats).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64_volatile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,__int64_volatile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->AddedStats).field_0x8);
  puVar1 = &(this->AddedStats).field_0xc;
  *(undefined4 *)&(this->AddedStats).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AddedStats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddedStats).field_0x34 = 0;
  iVar3 = *(int *)&(this->AddedStats).field_0x2c;
  *(undefined4 *)&(this->AddedStats).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AddedStats).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AddedStats).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AddedStats).field_0x48 = 1;
    TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->AtomicNameMap;
  bVar6 = 1 < *(int *)&(this->AtomicNameMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<__int64_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->AtomicNameMap).field_0x8);
  puVar1 = &(this->AtomicNameMap).field_0xc;
  *(undefined4 *)&(this->AtomicNameMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AtomicNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AtomicNameMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->AtomicNameMap).field_0x2c;
  *(undefined4 *)&(this->AtomicNameMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AtomicNameMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AtomicNameMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AtomicNameMap).field_0x48 = 1;
    TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->AtomicFormatMap;
  bVar6 = 1 < *(int *)&(this->AtomicFormatMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<__int64_*,enum_BuildPatchServices::EStatFormat>,TDefaultMapHashableKeyFuncs<__int64_*,enum_BuildPatchServices::EStatFormat,0>,FDefaultSetAllocator>
    ::UnhashElements(this_02);
  }
  puVar1 = &(this->AtomicFormatMap).field_0xc;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AtomicFormatMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->AtomicFormatMap).field_0x2c;
  *(undefined4 *)&(this->AtomicFormatMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->AtomicFormatMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AtomicFormatMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AtomicFormatMap).field_0x48 = 1;
    TSet<TTuple<__int64_*,enum_BuildPatchServices::EStatFormat>,TDefaultMapHashableKeyFuncs<__int64_*,enum_BuildPatchServices::EStatFormat,0>,FDefaultSetAllocator>
    ::Rehash(this_02);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  *(undefined4 *)&(this->AtomicFormatMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AtomicFormatMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_*,enum_BuildPatchServices::EStatFormat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_*,enum_BuildPatchServices::EStatFormat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this_02);
  *(undefined4 *)&(this->AtomicNameMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AtomicNameMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_01);
  *(undefined4 *)&(this->AddedStats).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AddedStats).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,__int64_volatile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,__int64_volatile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,__int64_volatile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->_padding_ = (longlong)&___7FStatsCollector_BuildPatchServices__6B_;
  return;
}

// CreateStat @ 143248a60

long64 * __thiscall
BuildPatchServices::FStatsCollectorImpl::CreateStat
          (FStatsCollectorImpl *this,FString *param_1,EStatFormat param_2,long64 param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
  *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  EStatFormat *pEVar10;
  long64 *plVar11;
  long64 **pplVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  uint uVar15;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  TMap<FString,__int64_volatile_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>_>
  *this_00;
  undefined1 local_res8 [8];
  FString *local_res10;
  EStatFormat local_res18 [8];
  EStatFormat *local_108;
  TMap<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
  *local_100;
  uint uStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [8];
  TPairInitializer<__int64_*_&&,BuildPatchServices::EStatFormat_const_&> local_c8;
  EStatFormat *local_b8;
  TMap<FString,__int64_volatile_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>_>
  *local_b0;
  TMap<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FString *local_78;
  EStatFormat **local_70;
  EStatFormat **local_68;
  FString *local_60;
  FString local_58;
  EStatFormat **local_48;
  EStatFormat *local_40;
  EStatFormat *pEVar16;
  
  lpCriticalSection = &this->DataCS;
  local_res10 = param_1;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar8 = (param_1->Data).ArrayNum;
  this_00 = &this->AddedStats;
  if (iVar8 == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pEVar16 = (EStatFormat *)0x0;
  uVar15 = 0;
  uVar7 = iVar8 - 1;
  if (iVar8 == 0) {
    uVar7 = uVar15;
  }
  local_b0 = this_00;
  uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar7,pwVar14);
  iVar8 = TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
                      *)this_00,uVar7,param_1);
  if (iVar8 == -1) {
    pEVar10 = ::operator_new(8);
    local_108 = pEVar16;
    if (pEVar10 != (EStatFormat *)0x0) {
      *(long64 *)pEVar10 = param_3;
      local_108 = pEVar10;
    }
    local_70 = &local_108;
    local_78 = param_1;
    TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,__int64_volatile_*_const_&>_>
              ((TSet<TTuple<FString,__int64_volatile_*>,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<FString_const_&,__int64_volatile_*_const_&> *)local_d0,
               (bool *)&local_78);
    ::FString::ConcatFC(&local_58,param_1,L": ");
    pTVar1 = &this->AtomicNameMap;
    local_c8.Value = local_108;
    local_68 = &local_c8.Value;
    local_60 = &local_58;
    TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<__int64_*_&&,FString_&&>_>
              ((TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
                *)pTVar1,(TPairInitializer<__int64_*_&&,FString_&&> *)(local_d0 + 4),
               (bool *)&local_68);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    local_b8 = local_108;
    local_48 = &local_b8;
    local_40 = local_res18;
    TSet<TTuple<__int64_*,enum_BuildPatchServices::EStatFormat>,TDefaultMapHashableKeyFuncs<__int64_*,enum_BuildPatchServices::EStatFormat,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<__int64_*_&&,enum_BuildPatchServices::EStatFormat_const_&>_>
              (&this->AtomicFormatMap,&local_c8,(bool *)&local_48);
    iVar8 = (param_1->Data).ArrayNum;
    puVar2 = &(this->AtomicNameMap).field_0x10;
    uStack_f4 = 1;
    uVar7 = iVar8 + 1;
    if (iVar8 == 0) {
      uVar7 = 2;
    }
    if (uVar7 < (uint)this->LongestName) {
      uVar7 = this->LongestName;
    }
    this->LongestName = uVar7;
    uVar7 = *(uint *)&(this->AtomicNameMap).field_0x28;
    uStack_e4 = uVar15;
    local_e0 = uVar15;
    if (uVar7 != 0) {
      puVar18 = *(uint **)&(this->AtomicNameMap).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)puVar2;
      }
      uVar9 = *puVar18;
      pEVar10 = pEVar16;
      local_e0 = 0;
      uVar15 = 0;
      while (uVar9 == 0) {
        iVar8 = (int)pEVar16;
        local_e0 = (int)pEVar10 + 0x20;
        pEVar10 = (EStatFormat *)(ulonglong)local_e0;
        uVar15 = iVar8 + 1;
        pEVar16 = (EStatFormat *)(ulonglong)uVar15;
        uStack_e4 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
        goto LAB_143248c50;
        uVar9 = puVar18[(longlong)iVar8 + 1];
      }
      uStack_f4 = -uVar9 & uVar9;
      uVar3 = (ulonglong)uStack_f4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_c8.Key._4_4_ = (int)lVar13;
      uStack_e4 = (local_e0 - 1) + local_c8.Key._4_4_;
      if ((int)uVar7 < (int)uStack_e4) {
        uStack_e4 = uVar7;
      }
    }
LAB_143248c50:
    uVar9 = *(uint *)&(this->AtomicNameMap).field_0x28;
    iStack_d8 = *(int *)&(this->AtomicNameMap).field_0x8 - *(int *)&(this->AtomicNameMap).field_0x34
    ;
    uVar19 = uVar9 & 0xffffffe0;
    TStack_a0._padding_ = CONCAT44(uStack_f4,uVar15);
    uStack_e8 = 0xffffffff;
    TStack_a0.CurrentBitIndex = uStack_e4;
    TStack_a0.UnvisitedBitMask = 0xffffffff;
    iVar8 = (int)uVar9 >> 5;
    TStack_a0._28_4_ = uStack_e4;
    TStack_a0.BaseBitIndex = local_e0;
    uStack_80 = CONCAT44(uStack_d4,iStack_d8);
    local_100 = pTVar1;
    uStack_f8 = uVar15;
    local_f0 = puVar2;
    uStack_dc = uStack_e4;
    local_a8 = pTVar1;
    TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar9 < 0) || ((int)uVar7 < (int)uVar9)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      plVar11 = (long64 *)(*pcVar5)();
      return plVar11;
    }
    uVar15 = *(uint *)&(this->AtomicNameMap).field_0x28;
    if (uVar9 != uVar15) {
      puVar17 = *(undefined1 **)&(this->AtomicNameMap).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar2;
      }
      uVar7 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar8 * 4);
      while (uVar7 == 0) {
        lVar13 = (longlong)iVar8;
        uVar19 = uVar19 + 0x20;
        iVar8 = iVar8 + 1;
        uVar9 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
        goto LAB_143248d5e;
        uVar7 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar9 = (int)lVar13 + -1 + uVar19;
      if ((int)uVar15 < (int)uVar9) {
        uVar9 = uVar15;
      }
    }
LAB_143248d5e:
    while( true ) {
      pTVar1 = local_a8;
      if (*(int *)(&local_a8->field_0x0 + 8) - *(int *)(&local_a8->field_0x0 + 0x34) !=
          (int)uStack_80) {
        `TSparseArray<TSparseSetElement<TTuple<__int64_*,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_a0.CurrentBitIndex == uVar9) &&
          (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (param_1 = local_res10, this_00 = local_b0, pTVar1 == &this->AtomicNameMap)) break;
      lVar13 = *(longlong *)&pTVar1->field_0x0 + (longlong)TStack_a0.CurrentBitIndex * 0x20;
      while( true ) {
        iVar4 = *(int *)(lVar13 + 0x10);
        iVar8 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar8 = 0;
        }
        if (this->LongestName <= iVar8) break;
        ::FString::AppendChars((FString *)(lVar13 + 8),L" ",1);
      }
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    }
  }
  pplVar12 = TMapBase<FString,__int64_volatile_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>_>
             ::FindChecked((TMapBase<FString,__int64_volatile_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64_volatile_*,0>_>
                            *)this_00,param_1);
  plVar11 = *pplVar12;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return plVar11;
}

// LogStats @ 14325a1f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
BuildPatchServices::FStatsCollectorImpl::LogStats(FStatsCollectorImpl *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  EStatFormat EVar3;
  int iVar4;
  long64 *plVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FOutputDeviceRedirector *pFVar11;
  EStatFormat *pEVar12;
  FText *pFVar13;
  longlong lVar14;
  TRefCountPtr<ITextData> TVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  uint local_res8;
  undefined1 local_res10 [8];
  int local_res18;
  LARGE_INTEGER local_res20;
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  TSharedPtr<FCulture,1> local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FString local_70 [3];
  
  QueryPerformanceCounter(&local_res20);
  if ((double)(local_res20.QuadPart - this->LastLogged) * FGenericPlatformTime::SecondsPerCycle64 <
      (double)param_1) {
    return;
  }
  lpCriticalSection = &this->DataCS;
  this->LastLogged = (ulong64)local_res20;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar11 = GetGlobalLogSingleton();
  FOutputDevice::Log((FOutputDevice *)pFVar11,L"/-------- FStatsCollector Log ---------------------"
                    );
  iVar4 = *(int *)&(this->AddedStats).field_0x28;
  puVar1 = &(this->AddedStats).field_0x10;
  iVar18 = 0;
  uVar9 = 1;
  iVar20 = 0;
  iVar10 = iVar20;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(this->AddedStats).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar22 = *puVar21;
    iVar20 = 0;
    while (uVar22 == 0) {
      lVar14 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14325a351;
      uVar22 = puVar21[lVar14 + 1];
    }
    uVar9 = -uVar22 & uVar22;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar10 = iVar20 + -1 + local_res18;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14325a351:
  local_res8 = *(uint *)&(this->AddedStats).field_0x28;
  uVar22 = local_res8 & 0xffffffe0;
  TStack_f8._padding_ = CONCAT44(uVar9,iVar18);
  TStack_f8.CurrentBitIndex = iVar10;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_res8 >> 5;
  TStack_f8._28_4_ = iVar10;
  TStack_f8.BaseBitIndex = iVar20;
  uStack_d8 = CONCAT44(uStack_10c,
                       *(int *)&(this->AddedStats).field_0x8 -
                       *(int *)&(this->AddedStats).field_0x34);
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_res8 < 0) || (iVar4 < (int)local_res8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar7 = __real_3f1a36e2eb1c432d;
  uVar9 = *(uint *)&(this->AddedStats).field_0x28;
  if (local_res8 != uVar9) {
    puVar19 = *(undefined1 **)&(this->AddedStats).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar16 = -1 << ((byte)local_res8 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      local_res8 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14325a470;
      uVar16 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res8 = (int)lVar14 + -1 + uVar22;
    if ((int)uVar9 < (int)local_res8) {
      local_res8 = uVar9;
    }
  }
LAB_14325a470:
  do {
    if (*(int *)&(this->AddedStats).field_0x8 - *(int *)&(this->AddedStats).field_0x34 !=
        (int)uStack_d8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,__int64_volatile_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_f8.CurrentBitIndex == local_res8) &&
       (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->AddedStats).field_0x10))
    {
      pFVar11 = GetGlobalLogSingleton();
      FOutputDevice::Log((FOutputDevice *)pFVar11,
                         L"\\--------------------------------------------------");
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    lVar14 = *(longlong *)&this->AddedStats;
    lVar17 = (longlong)TStack_f8.CurrentBitIndex * 0x20;
    plVar5 = *(long64 **)(lVar17 + 0x10 + lVar14);
    pEVar12 = TMapBase<__int64_*,enum_BuildPatchServices::EStatFormat,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,enum_BuildPatchServices::EStatFormat,0>_>
              ::FindChecked(&this->AtomicFormatMap,plVar5);
    EVar3 = *pEVar12;
    if (EVar3 == Timer) {
      pFVar11 = GetGlobalLogSingleton();
      FGenericPlatformTime::PrettyTime
                (local_70,(double)**(ulonglong **)(lVar17 + 0x10 + lVar14) *
                          FGenericPlatformTime::SecondsPerCycle64);
      TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
      ::FindChecked((TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
                     *)&this->AtomicNameMap,plVar5);
      FOutputDevice::LogfImpl((FOutputDevice *)pFVar11,L"| %s%s");
      if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
      }
    }
    else {
      if (EVar3 == DataSize) {
        pFVar11 = GetGlobalLogSingleton();
        pFVar13 = FText::AsMemory(&local_80,**(ulong64 **)(lVar17 + 0x10 + lVar14),IEC);
        FText::ToString(pFVar13);
        pFVar13 = FText::AsMemory(&local_90,**(ulong64 **)(lVar17 + 0x10 + lVar14),SI);
        FText::ToString(pFVar13);
        TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
        ::FindChecked((TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
                       *)&this->AtomicNameMap,plVar5);
        FOutputDevice::LogfImpl((FOutputDevice *)pFVar11,L"| %s%s, %s");
        TVar15.Reference = local_80.TextData.Reference;
        if (local_90.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
          TVar15.Reference = local_80.TextData.Reference;
        }
      }
      else {
        if (EVar3 != DataSpeed) {
          if (EVar3 == Percentage) {
            pFVar11 = GetGlobalLogSingleton();
            local_d0.Object = (FCulture *)0x0;
            local_d0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            pFVar13 = FText::AsPercent(&local_c0,
                                       (double)**(longlong **)(lVar17 + 0x10 + lVar14) * dVar7,
                                       &this->PercentageFormattingOptions,&local_d0);
            FText::ToString(pFVar13);
            TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
            ::FindChecked((TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
                           *)&this->AtomicNameMap,plVar5);
            FOutputDevice::LogfImpl((FOutputDevice *)pFVar11,L"| %s%s");
            if (local_c0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_d0.SharedReferenceCount.ReferenceController);
          }
          else {
            pFVar11 = GetGlobalLogSingleton();
            TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
            ::FindChecked((TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
                           *)&this->AtomicNameMap,plVar5);
            FOutputDevice::LogfImpl((FOutputDevice *)pFVar11,L"| %s%lld");
          }
          goto LAB_14325a690;
        }
        pFVar11 = GetGlobalLogSingleton();
        pFVar13 = FText::AsMemory(&local_a0,**(ulong64 **)(lVar17 + 0x10 + lVar14),IEC);
        FText::ToString(pFVar13);
        pFVar13 = FText::AsMemory(&local_b0,**(ulong64 **)(lVar17 + 0x10 + lVar14),SI);
        FText::ToString(pFVar13);
        TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
        ::FindChecked((TMapBase<__int64_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>_>
                       *)&this->AtomicNameMap,plVar5);
        FOutputDevice::LogfImpl((FOutputDevice *)pFVar11,L"| %s%s/s, %s/s");
        TVar15.Reference = local_a0.TextData.Reference;
        if (local_b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
          TVar15.Reference = local_a0.TextData.Reference;
        }
      }
      if (TVar15.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar15.Reference + 0x10))();
      }
    }
LAB_14325a690:
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  } while( true );
}

