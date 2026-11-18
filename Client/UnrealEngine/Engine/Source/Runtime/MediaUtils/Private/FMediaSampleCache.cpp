// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 8

// FMediaSampleCache @ 146bf2a70

FMediaSampleCache * __thiscall FMediaSampleCache::FMediaSampleCache(FMediaSampleCache *this)

{
  *(undefined8 *)&(this->AudioSamples).Elements = 0;
  *(undefined8 *)&(this->AudioSamples).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AudioSamples).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x34 = 0;
  (this->AudioSamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AudioSamples).HashSize = 0;
  *(undefined8 *)&(this->MetadataSamples).Elements = 0;
  *(undefined8 *)&(this->MetadataSamples).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MetadataSamples).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x34 = 0;
  (this->MetadataSamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MetadataSamples).HashSize = 0;
  *(undefined8 *)&(this->OverlaySamples).Elements = 0;
  *(undefined8 *)&(this->OverlaySamples).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OverlaySamples).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x34 = 0;
  (this->OverlaySamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OverlaySamples).HashSize = 0;
  *(undefined8 *)&(this->VideoSamples).Elements = 0;
  *(undefined8 *)&(this->VideoSamples).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VideoSamples).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x34 = 0;
  (this->VideoSamples).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VideoSamples).HashSize = 0;
  (this->CacheAhead).Ticks = 0;
  (this->CacheBehind).Ticks = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  return this;
}

// Empty @ 146bf8970

void __thiscall FMediaSampleCache::Empty(FMediaSampleCache *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TSet<TSharedPtr<IMediaOverlaySample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaOverlaySample>,FDefaultSetAllocator>
  *this_00;
  int iVar2;
  bool bVar3;
  TSet<TSharedPtr<IMediaTextureSample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaTextureSample>,FDefaultSetAllocator>
  *this_01;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar3 = 1 < (this->AudioSamples).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<IMediaAudioSample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaAudioSample>,FDefaultSetAllocator>
    ::UnhashElements(&this->AudioSamples);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)&(this->AudioSamples).Elements.field_0x8);
  puVar1 = &(this->AudioSamples).Elements.field_0xc;
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->AudioSamples).Elements.field_0x2c;
  *(undefined4 *)&(this->AudioSamples).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AudioSamples).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AudioSamples).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->AudioSamples).HashSize = 1;
    TSet<TSharedPtr<IMediaAudioSample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaAudioSample>,FDefaultSetAllocator>
    ::Rehash(&this->AudioSamples);
  }
  bVar3 = 1 < (this->MetadataSamples).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<IMediaBinarySample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaBinarySample>,FDefaultSetAllocator>
    ::UnhashElements(&this->MetadataSamples);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<IMediaBinarySample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&(this->MetadataSamples).Elements,0,
                    *(int *)&(this->MetadataSamples).Elements.field_0x8);
  puVar1 = &(this->MetadataSamples).Elements.field_0xc;
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->MetadataSamples,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->MetadataSamples).Elements.field_0x2c;
  *(undefined4 *)&(this->MetadataSamples).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->MetadataSamples).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->MetadataSamples).Elements.field_0x10,
               0);
  }
  if (bVar3) {
    (this->MetadataSamples).HashSize = 1;
    TSet<TSharedPtr<IMediaBinarySample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaBinarySample>,FDefaultSetAllocator>
    ::Rehash(&this->MetadataSamples);
  }
  this_00 = &this->OverlaySamples;
  bVar3 = 1 < (this->OverlaySamples).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<IMediaOverlaySample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaOverlaySample>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<IMediaOverlaySample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_00->Elements,0,*(int *)&(this->OverlaySamples).Elements.field_0x8);
  puVar1 = &(this->OverlaySamples).Elements.field_0xc;
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->OverlaySamples).Elements.field_0x2c;
  *(undefined4 *)&(this->OverlaySamples).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->OverlaySamples).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->OverlaySamples).Elements.field_0x10,0
              );
  }
  if (bVar3) {
    (this->OverlaySamples).HashSize = 1;
    TSet<TSharedPtr<IMediaOverlaySample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaOverlaySample>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  this_01 = &this->VideoSamples;
  bVar3 = 1 < (this->VideoSamples).HashSize;
  if (!bVar3) {
    TSet<TSharedPtr<IMediaTextureSample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaTextureSample>,FDefaultSetAllocator>
    ::UnhashElements(this_01);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<IMediaTextureSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this_01->Elements,0,*(int *)&(this->VideoSamples).Elements.field_0x8);
  puVar1 = &(this->VideoSamples).Elements.field_0xc;
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->VideoSamples).Elements.field_0x2c;
  *(undefined4 *)&(this->VideoSamples).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->VideoSamples).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->VideoSamples).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->VideoSamples).HashSize = 1;
    TSet<TSharedPtr<IMediaTextureSample,1>,FMediaSampleCache::TSampleKeyFuncs<IMediaTextureSample>,FDefaultSetAllocator>
    ::Rehash(this_01);
  }
                    /* WARNING: Could not recover jumptable at 0x000146bf8c2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetAudioSample @ 146bfd5b0

TSharedPtr<IMediaAudioSample,1> * __thiscall
FMediaSampleCache::GetAudioSample
          (FMediaSampleCache *this,TSharedPtr<IMediaAudioSample,1> *__return_storage_ptr__,
          FTimespan param_1)

{
  __return_storage_ptr__->Object = (IMediaAudioSample *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCachedAudioSampleRanges @ 146bfd9c0

void __thiscall
FMediaSampleCache::GetCachedAudioSampleRanges(FMediaSampleCache *this,TRangeSet<FTimespan> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  TRangeSet<FTimespan> *this_00;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  TRangeSet<FTimespan> *local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong lStack_a0;
  undefined1 local_98;
  uint7 uStack_97;
  longlong lStack_90;
  undefined1 local_88 [16];
  TRange<FTimespan> local_78;
  undefined1 local_58 [24];
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = *(int *)&(this->AudioSamples).Elements.field_0x28;
  puVar2 = &(this->AudioSamples).Elements.field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AudioSamples).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146bfda8d;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar7 = iVar14 + -1 + local_res18;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_146bfda8d:
  uVar11 = *(uint *)&(this->AudioSamples).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uVar6,iVar12);
  TStack_d0.CurrentBitIndex = iVar7;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_d0._28_4_ = iVar7;
  TStack_d0.BaseBitIndex = iVar14;
  uStack_b0 = CONCAT44(uStack_dc,
                       *(int *)&(this->AudioSamples).Elements.field_0x8 -
                       *(int *)&(this->AudioSamples).Elements.field_0x34);
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = local_res10;
  uVar6 = *(uint *)&(this->AudioSamples).Elements.field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->AudioSamples).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146bfdbb0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar11 = local_res20 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_146bfdbb0:
  while( true ) {
    if (*(int *)&(this->AudioSamples).Elements.field_0x8 -
        *(int *)&(this->AudioSamples).Elements.field_0x34 != (int)uStack_b0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<IMediaAudioSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_d0.CurrentBitIndex == uVar11) &&
       (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
                    /* WARNING: Could not recover jumptable at 0x000146bfdcea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    lVar10 = *(longlong *)&(this->AudioSamples).Elements;
    plVar9 = (longlong *)(lVar10 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
    if ((*(longlong *)(lVar10 + (longlong)TStack_d0.CurrentBitIndex * 0x18) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x30))((longlong *)*plVar9,local_58);
    lVar10 = *plVar8;
    if ((*plVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x10))((longlong *)*plVar9,local_88);
    local_a8 = 1;
    local_78.LowerBound._1_7_ = uStack_a7;
    local_78.LowerBound.Type.Value = '\x01';
    lStack_90 = *plVar9 + lVar10;
    local_98 = 0;
    local_78.UpperBound._0_8_ = (ulonglong)uStack_97 << 8;
    lStack_a0 = lVar10;
    local_78.LowerBound.Value.Ticks = lVar10;
    local_78.UpperBound.Value.Ticks = lStack_90;
    TRangeSet<FTimespan>::Add(this_00,&local_78);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetCachedVideoSampleRanges @ 146bfdd00

void __thiscall
FMediaSampleCache::GetCachedVideoSampleRanges(FMediaSampleCache *this,TRangeSet<FTimespan> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TRangeSet<FTimespan> *this_00;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  TRangeSet<FTimespan> *local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  longlong lStack_a0;
  undefined1 local_98;
  uint7 uStack_97;
  longlong lStack_90;
  undefined1 local_88 [16];
  TRange<FTimespan> local_78;
  undefined1 local_58 [24];
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar12 = 0;
  puVar1 = &(this->VideoSamples).Elements.field_0x10;
  iVar3 = *(int *)&(this->VideoSamples).Elements.field_0x28;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->VideoSamples).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146bfddcd;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar7 = iVar14 + -1 + local_res18;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_146bfddcd:
  uVar11 = *(uint *)&(this->VideoSamples).Elements.field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_d0._padding_ = CONCAT44(uVar6,iVar12);
  TStack_d0.CurrentBitIndex = iVar7;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_d0._28_4_ = iVar7;
  TStack_d0.BaseBitIndex = iVar14;
  uStack_b0 = CONCAT44(uStack_dc,
                       *(int *)&(this->VideoSamples).Elements.field_0x8 -
                       *(int *)&(this->VideoSamples).Elements.field_0x34);
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = local_res10;
  uVar6 = *(uint *)&(this->VideoSamples).Elements.field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&(this->VideoSamples).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146bfdef0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar11 = local_res20 + -1 + uVar16;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_146bfdef0:
  while( true ) {
    if (*(int *)&(this->VideoSamples).Elements.field_0x8 -
        *(int *)&(this->VideoSamples).Elements.field_0x34 != (int)uStack_b0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TSharedPtr<IMediaTextureSample,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_d0.CurrentBitIndex == uVar11) &&
       (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
                    /* WARNING: Could not recover jumptable at 0x000146bfe02a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    lVar10 = *(longlong *)&(this->VideoSamples).Elements;
    plVar9 = (longlong *)(lVar10 + (longlong)TStack_d0.CurrentBitIndex * 0x18);
    if ((*(longlong *)(lVar10 + (longlong)TStack_d0.CurrentBitIndex * 0x18) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    plVar8 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x60))((longlong *)*plVar9,local_58);
    lVar10 = *plVar8;
    if ((*plVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) break;
    plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar9 + 0x20))((longlong *)*plVar9,local_88);
    local_a8 = 1;
    local_78.LowerBound._1_7_ = uStack_a7;
    local_78.LowerBound.Type.Value = '\x01';
    lStack_90 = *plVar9 + lVar10;
    local_98 = 0;
    local_78.UpperBound._0_8_ = (ulonglong)uStack_97 << 8;
    lStack_a0 = lVar10;
    local_78.LowerBound.Value.Ticks = lVar10;
    local_78.UpperBound.Value.Ticks = lStack_90;
    TRangeSet<FTimespan>::Add(this_00,&local_78);
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// GetOverlaySamples @ 146bff110

void __thiscall
FMediaSampleCache::GetOverlaySamples
          (FMediaSampleCache *this,FTimespan param_1,
          TArray<TSharedPtr<IMediaOverlaySample,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// GetVideoSample @ 146c01500

TSharedPtr<IMediaTextureSample,1> * __thiscall
FMediaSampleCache::GetVideoSample
          (FMediaSampleCache *this,TSharedPtr<IMediaTextureSample,1> *__return_storage_ptr__,
          FTimespan param_1,bool param_2)

{
  __return_storage_ptr__->Object = (IMediaTextureSample *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// Tick @ 146c0e180

void __thiscall
FMediaSampleCache::Tick(FMediaSampleCache *this,FTimespan param_1,float param_2,FTimespan param_3)

{
  return;
}

