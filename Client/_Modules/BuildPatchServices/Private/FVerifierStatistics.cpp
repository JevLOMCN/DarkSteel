// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 13

// FVerifierStatistics @ 143283140

FVerifierStatistics * __thiscall
BuildPatchServices::FVerifierStatistics::FVerifierStatistics
          (FVerifierStatistics *this,ISpeedRecorder *param_1,FBuildPatchProgress *param_2,
          IFileOperationTracker *param_3)

{
  int iVar1;
  int local_res8 [2];
  TPairInitializer<BuildPatchServices::EVerifyError_const_&,FThreadSafeCounter64_&&> local_res10;
  int *local_28;
  FThreadSafeCounter64 **local_20;
  
  iVar1 = 0;
  this->SpeedRecorder = param_1;
  this->BuildProgress = param_2;
  this->_padding_ = (longlong)&___7FVerifierStatistics_BuildPatchServices__6B_;
  this->FileOperationTracker = param_3;
  local_28 = local_res8;
  (this->TotalBytesProcessed).Counter = 0;
  (this->TotalBytesRequired).Counter = 0;
  (this->TotalBytesRead).Counter = 0;
  (this->NumSuccessfulFilesVerified).Counter = 0;
  (this->NumFailedFilesVerified).Counter = 0;
  *(undefined8 *)&this->NumFileVerifyErrors = 0;
  *(undefined8 *)&(this->NumFileVerifyErrors).field_0x8 = 0;
  *(undefined8 *)&(this->NumFileVerifyErrors).field_0x20 = 0;
  *(undefined4 *)&(this->NumFileVerifyErrors).field_0x28 = 0;
  *(undefined4 *)&(this->NumFileVerifyErrors).field_0x2c = 0x80;
  *(undefined4 *)&(this->NumFileVerifyErrors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NumFileVerifyErrors).field_0x34 = 0;
  *(undefined8 *)&(this->NumFileVerifyErrors).field_0x40 = 0;
  *(undefined4 *)&(this->NumFileVerifyErrors).field_0x48 = 0;
  local_20 = &local_res10.Value;
  this->bIsReading = (FThreadSafeBool)0x0;
  (this->LastReadCycles).Counter = 0;
  this->LastByteRangeStateUpdate = 0;
  do {
    local_res10.Value = (FThreadSafeCounter64 *)0x0;
    local_res8[0] = iVar1;
    TSet<TTuple<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64>,TDefaultMapHashableKeyFuncs<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_BuildPatchServices::EVerifyError_const_&,FThreadSafeCounter64_&&>_>
              (&this->NumFileVerifyErrors,&local_res10,(bool *)&local_28);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return this;
}

// ~FVerifierStatistics @ 1432892c0

void __thiscall
BuildPatchServices::FVerifierStatistics::~FVerifierStatistics(FVerifierStatistics *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FVerifierStatistics_BuildPatchServices__6B_;
  *(undefined4 *)&(this->NumFileVerifyErrors).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NumFileVerifyErrors).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->NumFileVerifyErrors);
  this->_padding_ = (longlong)&___7IVerifierStat_BuildPatchServices__6B_;
  return;
}

// GetBytesVerified @ 1432d3790

ulong64 __thiscall
BuildPatchServices::FVerifierStatistics::GetBytesVerified(FVerifierStatistics *this)

{
  return (this->TotalBytesRead).Counter;
}

// GetNumFailedFilesVerified @ 1432d8560

int __thiscall
BuildPatchServices::FVerifierStatistics::GetNumFailedFilesVerified(FVerifierStatistics *this)

{
  return (int)(this->NumFailedFilesVerified).Counter;
}

// GetNumSuccessfulFilesVerified @ 1432d85b0

int __thiscall
BuildPatchServices::FVerifierStatistics::GetNumSuccessfulFilesVerified(FVerifierStatistics *this)

{
  return (int)(this->NumSuccessfulFilesVerified).Counter;
}

// GetVerifyErrorCounts @ 1432d9a20

TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
* __thiscall
BuildPatchServices::FVerifierStatistics::GetVerifyErrorCounts
          (FVerifierStatistics *this,
          TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TMap<BuildPatchServices::EVerifyError,FThreadSafeCounter64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<BuildPatchServices::EVerifyError,FThreadSafeCounter64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>_>
  *pTVar8;
  bool bVar9;
  TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
  *pTVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  int local_res18;
  longlong local_b8;
  undefined4 *local_b0;
  TMap<BuildPatchServices::EVerifyError,FThreadSafeCounter64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<BuildPatchServices::EVerifyError,FThreadSafeCounter64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->NumFileVerifyErrors).field_0x10;
  *(undefined8 *)__return_storage_ptr__ = 0;
  pTVar2 = &this->NumFileVerifyErrors;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iStack_a0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  uStack_9c = 1;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  local_88 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  iVar4 = *(int *)&(this->NumFileVerifyErrors).field_0x28;
  iStack_8c = iStack_a0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->NumFileVerifyErrors).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_1432d9aed;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_8c = local_res18 + -1 + local_88;
    if (iVar4 < iStack_8c) {
      iStack_8c = iVar4;
    }
  }
LAB_1432d9aed:
  iStack_80 = *(int *)&(this->NumFileVerifyErrors).field_0x8 -
              *(int *)&(this->NumFileVerifyErrors).field_0x34;
  uVar13 = *(uint *)&(this->NumFileVerifyErrors).field_0x28;
  uStack_90 = 0xffffffff;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = pTVar2;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = pTVar2;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar10 = (TMap<BuildPatchServices::EVerifyError,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<BuildPatchServices::EVerifyError,int,0>_>
               *)(*pcVar7)();
    return pTVar10;
  }
  uVar5 = *(uint *)&(this->NumFileVerifyErrors).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->NumFileVerifyErrors).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1432d9bf0;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_1432d9bf0:
  while( true ) {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    lVar6 = *(longlong *)pTVar8;
    lVar11 = lVar6 + (longlong)TStack_70.CurrentBitIndex * 0x18;
    if (0 < *(longlong *)(lVar6 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18)) {
      local_res10[0] = (undefined4)*(undefined8 *)(lVar11 + 8);
      local_b0 = local_res10;
      local_b8 = lVar11;
      TSet<TTuple<enum_BuildPatchServices::EVerifyError,int>,TDefaultMapHashableKeyFuncs<enum_BuildPatchServices::EVerifyError,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_BuildPatchServices::EVerifyError_const_&,int_&&>_>
                (__return_storage_ptr__,
                 (TPairInitializer<BuildPatchServices::EVerifyError_const_&,int_&&> *)
                 &stack0x00000020,(bool *)&local_b8);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// IsCurrentlyReading @ 1432dbc10

bool __thiscall
BuildPatchServices::FVerifierStatistics::IsCurrentlyReading(FVerifierStatistics *this)

{
  longlong lVar1;
  ulong64 uVar2;
  double dVar3;
  
  lVar1 = (this->LastReadCycles).Counter;
  uVar2 = FStatsCollector::GetCycles();
  if (this->bIsReading == (FThreadSafeBool)0x0) {
    dVar3 = FStatsCollector::CyclesToSeconds(uVar2 - lVar1);
    if (__real_3fa999999999999a <= dVar3) {
      return false;
    }
  }
  return true;
}

// OnFileCompleted @ 1432df790

void __thiscall
BuildPatchServices::FVerifierStatistics::OnFileCompleted
          (FVerifierStatistics *this,FString *param_1,EVerifyResult param_2)

{
  FThreadSafeCounter64 *pFVar1;
  ulong64 uVar2;
  EVerifyError EVar3;
  ulong64 local_18 [2];
  
  EVar3 = FileMissing;
  if (param_2 == Success) {
    LOCK();
    (this->NumSuccessfulFilesVerified).Counter = (this->NumSuccessfulFilesVerified).Counter + 1;
    UNLOCK();
  }
  else {
    if (param_2 != FileMissing) {
      if (param_2 == OpenFileFailed) {
        EVar3 = OpenFileFailed;
      }
      else if (param_2 == HashCheckFailed) {
        EVar3 = HashCheckFailed;
      }
      else {
        if (param_2 != FileSizeFailed) goto LAB_1432df7fa;
        EVar3 = FileSizeFailed;
      }
    }
    LOCK();
    (this->NumFailedFilesVerified).Counter = (this->NumFailedFilesVerified).Counter + 1;
    UNLOCK();
    pFVar1 = TMapBase<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_BuildPatchServices::EVerifyError,FThreadSafeCounter64,0>_>
             ::FindChecked(&this->NumFileVerifyErrors,EVar3);
    LOCK();
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
  }
LAB_1432df7fa:
  (**(code **)((longlong)*this->FileOperationTracker + 0x40))
            (this->FileOperationTracker,param_1,0xe - (uint)(param_2 != Success));
  LOCK();
  this->bIsReading = (FThreadSafeBool)0x0;
  UNLOCK();
  uVar2 = FStatsCollector::GetCycles();
  if (&this->LastReadCycles != (FThreadSafeCounter64 *)local_18) {
    LOCK();
    (this->LastReadCycles).Counter = uVar2;
    UNLOCK();
  }
  return;
}

// OnFileProgress @ 1432df900

void __thiscall
BuildPatchServices::FVerifierStatistics::OnFileProgress
          (FVerifierStatistics *this,FString *param_1,long64 param_2)

{
  ulong64 local_18;
  long64 local_10;
  
  local_18 = this->LastByteRangeStateUpdate;
  local_10 = param_2;
  (**(code **)((longlong)*this->FileOperationTracker + 0x48))
            (this->FileOperationTracker,param_1,&local_18,0xc);
  this->LastByteRangeStateUpdate = param_2;
  return;
}

// OnFileRead @ 1432df950

void __thiscall
BuildPatchServices::FVerifierStatistics::OnFileRead(FVerifierStatistics *this,FRecord *param_1)

{
  (**(code **)((longlong)*this->SpeedRecorder + 8))();
  LOCK();
  (this->TotalBytesRead).Counter = (this->TotalBytesRead).Counter + param_1->Size;
  UNLOCK();
  return;
}

// OnFileStarted @ 1432dfa10

void __thiscall
BuildPatchServices::FVerifierStatistics::OnFileStarted
          (FVerifierStatistics *this,FString *param_1,long64 param_2)

{
  LOCK();
  this->bIsReading = (FThreadSafeBool)0x1;
  UNLOCK();
  this->LastByteRangeStateUpdate = 0;
  return;
}

// OnProcessedDataUpdated @ 1432e0f60

void __thiscall
BuildPatchServices::FVerifierStatistics::OnProcessedDataUpdated
          (FVerifierStatistics *this,long64 param_1)

{
  longlong lVar1;
  float local_res8 [4];
  undefined4 local_res18 [4];
  
  LOCK();
  (this->TotalBytesProcessed).Counter = param_1;
  UNLOCK();
  lVar1 = (this->TotalBytesRequired).Counter;
  if (0 < lVar1) {
    local_res18[0] = 7;
    local_res8[0] = (float)((double)param_1 / (double)lVar1);
    (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res18,local_res8)
    ;
  }
  return;
}

// OnTotalRequiredUpdated @ 1432e1330

void __thiscall
BuildPatchServices::FVerifierStatistics::OnTotalRequiredUpdated
          (FVerifierStatistics *this,long64 param_1)

{
  float local_res8 [2];
  undefined4 local_res10 [6];
  
  LOCK();
  (this->TotalBytesRequired).Counter = param_1;
  UNLOCK();
  if (0 < param_1) {
    local_res10[0] = 7;
    local_res8[0] = (float)((double)(this->TotalBytesProcessed).Counter / (double)param_1);
    (**(code **)(this->BuildProgress->_padding_ + 0x18))(this->BuildProgress,local_res10,local_res8)
    ;
  }
  return;
}

