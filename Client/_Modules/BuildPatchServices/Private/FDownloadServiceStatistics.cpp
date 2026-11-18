// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FDownloadServiceStatistics @ 14327f850

FDownloadServiceStatistics * __thiscall
BuildPatchServices::FDownloadServiceStatistics::FDownloadServiceStatistics
          (FDownloadServiceStatistics *this,ISpeedRecorder *param_1,IDataSizeProvider *param_2,
          IInstallerAnalytics *param_3)

{
  this->SpeedRecorder = param_1;
  this->TotalBytesReceived = (atomic<unsigned___int64>)0x0;
  this->_padding_ = (longlong)&___7FDownloadServiceStatistics_BuildPatchServices__6B_;
  this->NumSuccessfulDownloads = (atomic<int>)0x0;
  this->NumFailedDownloads = (atomic<int>)0x0;
  *(undefined8 *)&this->Downloads = 0;
  *(undefined8 *)&(this->Downloads).field_0x8 = 0;
  *(undefined8 *)&(this->Downloads).field_0x20 = 0;
  this->DataSizeProvider = param_2;
  this->InstallerAnalytics = param_3;
  *(undefined4 *)&(this->Downloads).field_0x28 = 0;
  *(undefined4 *)&(this->Downloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->Downloads).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Downloads).field_0x34 = 0;
  *(undefined8 *)&(this->Downloads).field_0x40 = 0;
  *(undefined4 *)&(this->Downloads).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DownloadsCriticalSection,4000);
  this->AccumulatedRequestSpeed = 0.0;
  this->AverageSpeedSampleCount = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AverageSpeedCriticalSection,4000)
  ;
  return this;
}

// GetBytesDownloaded @ 1432d3770

ulong64 __thiscall
BuildPatchServices::FDownloadServiceStatistics::GetBytesDownloaded(FDownloadServiceStatistics *this)

{
  return (ulong64)this->TotalBytesReceived;
}

// GetCurrentDownloads @ 1432d42a0

TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> * __thiscall
BuildPatchServices::FDownloadServiceStatistics::GetCurrentDownloads
          (FDownloadServiceStatistics *this,
          TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  IDataSizeProvider *pIVar4;
  code *pcVar5;
  LPCRITICAL_SECTION p_Var6;
  ForElementType<unsigned_int> FVar7;
  TMap<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
  *pTVar8;
  TMap<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
  *pTVar9;
  bool bVar10;
  TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  ForElementType<unsigned_int> FVar20;
  uint *puVar21;
  longlong lVar22;
  uint uVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  LPCRITICAL_SECTION local_f8;
  void *local_f0;
  undefined8 local_e8;
  ForElementType<unsigned_int> local_e0;
  TMap<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  TMap<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
  *local_a0;
  TMap<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  local_f8 = (LPCRITICAL_SECTION)&this->DownloadsCriticalSection;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  iVar19 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  local_f0 = (void *)0x0;
  local_e8 = 0;
  if (local_f8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_f8);
  uVar16 = *(int *)&(this->Downloads).field_0x8 - *(int *)&(this->Downloads).field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  DestructItems<FString,int>((FString *)local_108.Data,(int)local_100);
  if (local_100._4_4_ != uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar16,&local_108,0,(int *)((longlong)&local_100 + 4));
  }
  uVar16 = *(int *)&(this->Downloads).field_0x8 - *(int *)&(this->Downloads).field_0x34;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  DestructItems<BuildPatchServices::FDownload,int>
            ((FDownload *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum);
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar1 != uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Downloads).field_0x28;
  local_a0 = &this->Downloads;
  local_e0 = (ForElementType<unsigned_int>)&(this->Downloads).field_0x10;
  local_b8 = 0;
  uStack_cc = 1;
  iStack_bc = 0;
  if (iVar3 != 0) {
    puVar21 = *(uint **)&(this->Downloads).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_e0;
    }
    uVar16 = *puVar21;
    iVar19 = 0;
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar19;
      local_b8 = local_b8 + 0x20;
      iVar19 = iVar19 + 1;
      iStack_bc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1432d442e;
      uVar16 = (puVar21 + 1)[lVar13];
    }
    uStack_cc = -uVar16 & uVar16;
    uVar12 = (ulonglong)uStack_cc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iStack_bc = local_b8 + -1 + local_res20;
    if (iVar3 < iStack_bc) {
      iStack_bc = iVar3;
    }
  }
LAB_1432d442e:
  local_d8 = &this->Downloads;
  iStack_b0 = *(int *)&(this->Downloads).field_0x8 - *(int *)&(this->Downloads).field_0x34;
  uVar16 = *(uint *)&(this->Downloads).field_0x28;
  uStack_c0 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_bc;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uStack_cc,iVar19);
  uVar23 = uVar16 & 0xffffffe0;
  iVar17 = (int)uVar16 >> 5;
  TStack_90._28_4_ = iStack_bc;
  TStack_90.BaseBitIndex = local_b8;
  uStack_70 = CONCAT44(uStack_ac,iStack_b0);
  iStack_d0 = iVar19;
  local_c8 = (undefined1 *)local_e0;
  iStack_b4 = iStack_bc;
  local_98 = local_d8;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  pTVar8 = local_a0;
  FVar7 = local_e0;
  uVar14 = *(int *)((longlong)local_e0 + 0x18);
  if (uVar16 != uVar14) {
    FVar20 = *(ForElementType<unsigned_int> *)((longlong)local_e0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_e0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_e0;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar17;
      uVar23 = uVar23 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_1432d4550;
      uVar16 = *(uint *)((undefined1 *)((longlong)FVar20 + 4) + lVar13 * 4);
    }
    uVar12 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_a8 = (int)lVar13;
    uVar16 = local_a8 + -1 + uVar23;
    if ((int)uVar14 < (int)uVar16) {
      uVar16 = uVar14;
    }
  }
LAB_1432d4550:
  while( true ) {
    pTVar9 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TTuple<FString,unsigned___int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar16) &&
        ((ForElementType<unsigned_int>)TStack_90.Array == FVar7)) && (pTVar9 == pTVar8)) break;
    lVar13 = *(longlong *)pTVar9 + (longlong)TStack_90.CurrentBitIndex * 0x28;
    iVar19 = (int)local_100;
    if ((int)local_100 == local_100._4_4_) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_108,(int *)((longlong)&local_100 + 4));
    }
    local_100 = CONCAT44(local_100._4_4_,iVar19 + 1);
    ::FString::FString((FString *)(local_108.Data + (longlong)iVar19 * 0x10),(FString *)(lVar13 + 8)
                      );
    iVar19 = __return_storage_ptr__->ArrayNum;
    if (iVar19 == *piVar1) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar19 + 1;
    DefaultConstructItems<BuildPatchServices::FDownload,int>
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar19 * 0x20,1);
    uVar14 = __return_storage_ptr__->ArrayNum - 1;
    uVar23 = 0;
    if ((int)uVar14 < __return_storage_ptr__->ArrayNum) {
      uVar23 = ~uVar14 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
    *(undefined8 *)
     ((__return_storage_ptr__->AllocatorInstance).Data +
     (longlong)__return_storage_ptr__->ArrayNum * 0x20 + -8) = *(undefined8 *)(lVar13 + 0x18);
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  LeaveCriticalSection(local_f8);
  iStack_60 = (int)local_100;
  pIVar4 = this->DataSizeProvider;
  pcVar5 = *(code **)((longlong)*pIVar4 + 8);
  local_68 = local_108.Data;
  if (((int)local_100 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  iStack_50 = iStack_60;
  uStack_4c = uStack_5c;
  (*pcVar5)(pIVar4,&local_58,&local_f0);
  if (((int)local_e8 != __return_storage_ptr__->ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DownloadSizes.Num() == Result.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Statistics\\DownloadServiceStatistics.cpp"
                          ,0x9a,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  uVar16 = __return_storage_ptr__->ArrayNum;
  uVar12 = (ulonglong)(int)uVar16;
  uVar23 = 0;
  pFVar15 = (__return_storage_ptr__->AllocatorInstance).Data;
  lVar13 = 0;
  local_f8 = (LPCRITICAL_SECTION)(pFVar15 + uVar12 * 0x20);
  lVar22 = 0;
  while( true ) {
    p_Var6 = local_f8;
    if (__return_storage_ptr__->ArrayNum != (int)uVar12) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<BuildPatchServices::FDownload,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if ((LPCRITICAL_SECTION)pFVar15 == p_Var6) {
      if (local_f0 != (void *)0x0) {
        FMemory::Free(local_f0);
      }
      DestructItems<FString,int>((FString *)local_108.Data,(int)local_100);
      if (local_108.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data);
      }
      return __return_storage_ptr__;
    }
    uVar14 = 0;
    if ((int)uVar23 < (int)local_100) {
      uVar14 = ~uVar23 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    pFVar18 = local_108.Data + lVar22;
    if (pFVar15 != pFVar18) {
      if (*(void **)pFVar15 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar15);
      }
      *(undefined8 *)pFVar15 = *(undefined8 *)pFVar18;
      *(undefined8 *)pFVar18 = 0;
      *(undefined4 *)(pFVar15 + 8) = *(undefined4 *)(pFVar18 + 8);
      *(undefined4 *)(pFVar15 + 0xc) = *(undefined4 *)(pFVar18 + 0xc);
      *(undefined8 *)(pFVar18 + 8) = 0;
    }
    uVar14 = 0;
    if ((int)uVar23 < (int)local_e8) {
      uVar14 = ~uVar23 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar11 = (TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar11;
    }
    uVar23 = uVar23 + 1;
    lVar22 = lVar22 + 0x10;
    lVar2 = lVar13 * 8;
    lVar13 = lVar13 + 1;
    uVar12 = (ulonglong)uVar16;
    *(undefined8 *)(pFVar15 + 0x10) = *(undefined8 *)((longlong)local_f0 + lVar2);
    pFVar15 = pFVar15 + 0x20;
  }
  pcVar5 = (code *)swi(3);
  pTVar11 = (TArray<BuildPatchServices::FDownload,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
  return pTVar11;
}

// GetImmediateAverageSpeedPerRequest @ 1432d6fd0

TTuple<double,unsigned_int> * __thiscall
BuildPatchServices::FDownloadServiceStatistics::GetImmediateAverageSpeedPerRequest
          (FDownloadServiceStatistics *this,TTuple<double,unsigned_int> *__return_storage_ptr__,
          uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  lpCriticalSection = &this->AverageSpeedCriticalSection;
  dVar1 = 0.0;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = this->AverageSpeedSampleCount;
    uVar3 = 0;
    if (param_1 <= uVar2) {
      dVar1 = this->AccumulatedRequestSpeed;
      this->AccumulatedRequestSpeed = 0.0;
      this->AverageSpeedSampleCount = 0;
      dVar1 = dVar1 / (double)uVar2;
      uVar3 = uVar2;
    }
    *(double *)__return_storage_ptr__ = dVar1;
    *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumCurrentDownloads @ 1432d8490

int __thiscall
BuildPatchServices::FDownloadServiceStatistics::GetNumCurrentDownloads
          (FDownloadServiceStatistics *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  int iVar2;
  
  lpCriticalSection = &this->DownloadsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = *(int *)&(this->Downloads).field_0x8;
    iVar2 = *(int *)&(this->Downloads).field_0x34;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1 - iVar2;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetNumFailedChunkDownloads @ 1432d8540

int __thiscall
BuildPatchServices::FDownloadServiceStatistics::GetNumFailedChunkDownloads
          (FDownloadServiceStatistics *this)

{
  return (int)this->NumFailedDownloads;
}

// GetNumSuccessfulChunkDownloads @ 1432d8590

int __thiscall
BuildPatchServices::FDownloadServiceStatistics::GetNumSuccessfulChunkDownloads
          (FDownloadServiceStatistics *this)

{
  return (int)this->NumSuccessfulDownloads;
}

// OnDownloadComplete @ 1432decc0

void __thiscall
BuildPatchServices::FDownloadServiceStatistics::OnDownloadComplete
          (FDownloadServiceStatistics *this,FDownloadRecord *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  ulonglong uVar2;
  IInstallerAnalytics *pIVar3;
  code *pcVar4;
  ulong64 uVar5;
  double dVar6;
  uint local_res8 [2];
  FString local_28 [2];
  
  pFVar1 = &this->DownloadsCriticalSection;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    local_res8[0] = param_1->RequestId;
    if (*(int *)&(this->Downloads).field_0x8 != *(int *)&(this->Downloads).field_0x34) {
      TSet<TTuple<int,TTuple<FString,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,TTuple<FString,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>,FDefaultSetAllocator>
                         *)&this->Downloads,local_res8[0],(int *)local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if ((param_1->bSuccess == false) || (6 < param_1->ResponseCode - 200U)) {
      LOCK();
      this->NumFailedDownloads = (atomic<int>)((int)this->NumFailedDownloads + 1);
      UNLOCK();
      pIVar3 = this->InstallerAnalytics;
      pcVar4 = *(code **)((longlong)*pIVar3 + 8);
      ::FString::FString(local_28,L"DownloadFail");
      (*pcVar4)(pIVar3,&param_1->Uri,param_1->ResponseCode,local_28);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    else {
      LOCK();
      this->TotalBytesReceived =
           (atomic<unsigned___int64>)
           ((longlong)this->TotalBytesReceived + (param_1->SpeedRecord).Size);
      UNLOCK();
      LOCK();
      this->NumSuccessfulDownloads = (atomic<int>)((int)this->NumSuccessfulDownloads + 1);
      UNLOCK();
      (**(code **)((longlong)*this->SpeedRecorder + 8))(this->SpeedRecorder,&param_1->SpeedRecord);
      uVar5 = (param_1->SpeedRecord).CyclesEnd - (param_1->SpeedRecord).CyclesStart;
      if (uVar5 == 0) {
        dVar6 = 0.0;
      }
      else {
        dVar6 = FStatsCollector::CyclesToSeconds(uVar5);
        uVar2 = (param_1->SpeedRecord).Size;
        if ((longlong)uVar2 < 0) {
          dVar6 = (double)uVar2 / dVar6;
        }
        else {
          dVar6 = (double)(longlong)uVar2 / dVar6;
        }
      }
      pFVar1 = &this->AverageSpeedCriticalSection;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_1432dee22;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      this->AverageSpeedSampleCount = this->AverageSpeedSampleCount + 1;
      this->AccumulatedRequestSpeed = dVar6 + this->AccumulatedRequestSpeed;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    return;
  }
LAB_1432dee22:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnDownloadProgress @ 1432df360

void __thiscall
BuildPatchServices::FDownloadServiceStatistics::OnDownloadProgress
          (FDownloadServiceStatistics *this,int param_1,ulong64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTuple<FString,unsigned___int64> *pTVar1;
  uint local_res10 [2];
  
  lpCriticalSection = &this->DownloadsCriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = TMapBase<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
             ::FindOrAddImpl<int_const_&>
                       ((TMapBase<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
                         *)&this->Downloads,local_res10[0],(int *)local_res10);
    *(ulong64 *)&pTVar1->field_0x10 = param_2;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// OnDownloadStarted @ 1432df460

void __thiscall
BuildPatchServices::FDownloadServiceStatistics::OnDownloadStarted
          (FDownloadServiceStatistics *this,int param_1,FString *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TTuple<FString,unsigned___int64> *this_00;
  uint local_res10 [2];
  
  lpCriticalSection = &this->DownloadsCriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = TMapBase<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,TTuple<FString,unsigned___int64>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>_>
                          *)&this->Downloads,local_res10[0],(int *)local_res10);
    ::FString::operator=((FString *)this_00,param_2);
    *(undefined8 *)&this_00->field_0x10 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Reset @ 1432eae70

void __thiscall
BuildPatchServices::FDownloadServiceStatistics::Reset(FDownloadServiceStatistics *this)

{
  undefined1 *puVar1;
  FWindowsRecursiveMutex *pFVar2;
  int iVar3;
  bool bVar4;
  
  pFVar2 = &this->DownloadsCriticalSection;
  LOCK();
  this->TotalBytesReceived = (atomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  this->NumSuccessfulDownloads = (atomic<int>)0x0;
  UNLOCK();
  LOCK();
  this->NumFailedDownloads = (atomic<int>)0x0;
  UNLOCK();
  if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    bVar4 = 1 < *(int *)&(this->Downloads).field_0x48;
    if (!bVar4) {
      TSet<TTuple<int,TTuple<FString,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,TTuple<FString,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>,FDefaultSetAllocator>
                        *)&this->Downloads);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TTuple<FString,unsigned___int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TTuple<FString,unsigned___int64>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&this->Downloads,0,*(int *)&(this->Downloads).field_0x8);
    puVar1 = &(this->Downloads).field_0xc;
    *(undefined4 *)&(this->Downloads).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)&this->Downloads,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->Downloads).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Downloads).field_0x34 = 0;
    iVar3 = *(int *)&(this->Downloads).field_0x2c;
    *(undefined4 *)&(this->Downloads).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this->Downloads).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Downloads).field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->Downloads).field_0x48 = 1;
      TSet<TTuple<int,TTuple<FString,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,TTuple<FString,unsigned___int64>_>,TDefaultMapHashableKeyFuncs<int,TTuple<FString,unsigned___int64>,0>,FDefaultSetAllocator>
                *)&this->Downloads);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    pFVar2 = &this->AverageSpeedCriticalSection;
    if (pFVar2 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
      this->AccumulatedRequestSpeed = 0.0;
      this->AverageSpeedSampleCount = 0;
                    /* WARNING: Could not recover jumptable at 0x0001432eaf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

