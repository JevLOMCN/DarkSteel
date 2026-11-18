// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 9

// FVerifier @ 143282f90

FVerifier * __thiscall
BuildPatchServices::FVerifier::FVerifier
          (FVerifier *this,IFileSystem *param_1,IVerifierStat *param_2,EVerifyMode param_3,
          TSharedPtr<IBuildInstallerSharedContext,1> *param_4,IBuildManifestSet *param_5,
          FString *param_6,FString *param_7)

{
  TReferenceControllerBase<1> *pTVar1;
  IBuildManifestSet *pIVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7FVerifier_BuildPatchServices__6B_;
  (this->VerifyDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VerifyDirectory).Data.AllocatorInstance.Data = (param_6->Data).AllocatorInstance.Data;
  (param_6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VerifyDirectory).Data.ArrayNum = (param_6->Data).ArrayNum;
  (this->VerifyDirectory).Data.ArrayMax = (param_6->Data).ArrayMax;
  (param_6->Data).ArrayNum = 0;
  (param_6->Data).ArrayMax = 0;
  (this->StagedFileDirectory).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagedFileDirectory).Data.AllocatorInstance.Data = (param_7->Data).AllocatorInstance.Data;
  (param_7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StagedFileDirectory).Data.ArrayNum = (param_7->Data).ArrayNum;
  (this->StagedFileDirectory).Data.ArrayMax = (param_7->Data).ArrayMax;
  (param_7->Data).ArrayNum = 0;
  (param_7->Data).ArrayMax = 0;
  this->ManifestSet = param_5;
  this->FileSystem = param_1;
  this->VerifierStat = param_2;
  (this->SharedContext).Object = param_4->Object;
  pTVar1 = (param_4->SharedReferenceCount).ReferenceController;
  (this->SharedContext).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(undefined8 *)&(this->FilesToVerify).Elements = 0;
  *(undefined8 *)&(this->FilesToVerify).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FilesToVerify).Elements.field_0x20 = 0;
  this->VerifyMode = param_3;
  *(undefined4 *)&(this->FilesToVerify).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FilesToVerify).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FilesToVerify).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilesToVerify).Elements.field_0x34 = 0;
  (this->FilesToVerify).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FilesToVerify).HashSize = 0;
  *(undefined8 *)&(this->FilesPassedVerify).Elements = 0;
  *(undefined8 *)&(this->FilesPassedVerify).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FilesPassedVerify).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FilesPassedVerify).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FilesPassedVerify).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FilesPassedVerify).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilesPassedVerify).Elements.field_0x34 = 0;
  (this->FilesPassedVerify).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FilesPassedVerify).HashSize = 0;
  this->bIsPaused = (FThreadSafeBool)0x0;
  this->bShouldAbort = (FThreadSafeBool)0x0;
  this->ThreadProcessedBytes = (atomic<__int64>)0x0;
  (this->ThreadJobResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadJobResults).ArrayNum = 0;
  (this->ThreadJobResults).ArrayMax = 0;
  this->NextThreadJobListIndex = 0;
  (this->ThreadJobList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadJobList).ArrayNum = 0;
  (this->ThreadJobList).ArrayMax = 0;
  (this->SecondaryProcessThreads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SecondaryProcessThreads).ArrayNum = 0;
  (this->SecondaryProcessThreads).ArrayMax = 0;
  pIVar2 = this->ManifestSet;
  (this->ThreadJobListLock).State = (atomic<unsigned_char>)0x0;
  (**(code **)((longlong)*pIVar2 + 0x90))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  pFVar3 = (param_6->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_7->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return this;
}

// Abort @ 1432bea80

void __thiscall BuildPatchServices::FVerifier::Abort(FVerifier *this)

{
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x1;
  UNLOCK();
  return;
}

// AddTouchedFiles @ 1432becb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
BuildPatchServices::FVerifier::AddTouchedFiles
          (FVerifier *this,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_1)

{
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar1;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  undefined1 auStack_88 [32];
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
            (&this->FilesToVerify,param_1);
  this_00 = &this->FilesPassedVerify;
  pTVar1 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
                     (this_00,&local_68,param_1);
  if (this_00 != pTVar1) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
    Move<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>(this_00,pTVar1);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// ProcessVerifyJobs @ 1432e1eb0

void __thiscall
BuildPatchServices::FVerifier::ProcessVerifyJobs(FVerifier *this,FWindowsSemaphore *param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FThreadSafeBool FVar2;
  FScriptContainerElement *pFVar3;
  FFileManifest *pFVar4;
  IFileSystem *pIVar5;
  code *pcVar6;
  float fVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  EVerifyResult EVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  bool bVar19;
  ulong64 local_res18;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_68;
  FString local_58 [2];
  
  fVar7 = __real_3dcccccd;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  if (this->bShouldAbort == (FThreadSafeBool)0x0) {
    this_00 = &this->ThreadJobListLock;
    do {
      LOCK();
      bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar19) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar19) {
        UE::FMutex::LockSlow(this_00);
      }
      uVar10 = this->NextThreadJobListIndex;
      uVar18 = 0xffffffff;
      if ((int)uVar10 < (this->ThreadJobList).ArrayNum) {
        this->NextThreadJobListIndex = uVar10 + 1;
        uVar18 = uVar10;
      }
      LOCK();
      aVar1 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar1 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
      if (uVar18 == 0xffffffff) break;
      if (local_68.ArrayNum < 0x400000) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0x400000 - local_68.ArrayNum,&local_68.AllocatorInstance,&local_68.ArrayNum,
                   &local_68.ArrayMax);
      }
      else if (0x400000 < local_68.ArrayNum) {
        iVar15 = local_68.ArrayNum + -0x400000;
        if (iVar15 < 0) {
          bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             );
          if (bVar19) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else if (iVar15 == 0) goto LAB_1432e204e;
        iVar9 = (local_68.ArrayNum - iVar15) + -0x400000;
        iVar16 = local_68.ArrayNum;
        if (iVar9 != 0) {
          memmove(local_68.AllocatorInstance.Data + 0x400000,
                  local_68.AllocatorInstance.Data + 0x400000 + iVar15,(longlong)iVar9);
          iVar16 = local_68.ArrayNum;
        }
        local_68.ArrayNum = iVar16 - iVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&local_68.AllocatorInstance,iVar16 - iVar15,&local_68.ArrayMax);
      }
LAB_1432e204e:
      uVar10 = 0;
      if ((int)uVar18 < (this->ThreadJobList).ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->ThreadJobList).AllocatorInstance.Data;
      lVar14 = (longlong)(int)uVar18 * 0x20;
      pFVar17 = pFVar3 + lVar14 + 0x10;
      (**(code **)((longlong)*this->VerifierStat + 8))
                (this->VerifierStat,pFVar17,*(undefined8 *)(*(longlong *)(pFVar3 + lVar14) + 0x58));
      pFVar4 = *(FFileManifest **)(pFVar3 + lVar14);
      if (pFVar3[lVar14 + 8] == (FScriptContainerElement)0x0) {
        FVar2 = this->bIsPaused;
        while ((FVar2 != (FThreadSafeBool)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))) {
          FWindowsPlatformProcess::Sleep(fVar7);
          FVar2 = this->bIsPaused;
        }
        (**(code **)((longlong)*this->VerifierStat + 0x10))(this->VerifierStat,pFVar17,0);
        pIVar5 = this->FileSystem;
        pcVar6 = *(code **)((longlong)*pIVar5 + 0x18);
        pFVar12 = SelectFullFilePath(this,local_58,(FString *)pFVar17);
        if ((pFVar12->Data).ArrayNum == 0) {
          pwVar13 = L"";
        }
        else {
          pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
        }
        cVar8 = (*pcVar6)(pIVar5,pwVar13,&local_res18);
        if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
        }
        if (cVar8 == '\0') {
          EVar11 = FileMissing;
        }
        else {
          EVar11 = FileSizeFailed;
          if (local_res18 == pFVar4->FileSize) {
            EVar11 = Success;
          }
        }
        (**(code **)((longlong)*this->VerifierStat + 0x10))
                  (this->VerifierStat,pFVar17,pFVar4->FileSize);
        LOCK();
        this->ThreadProcessedBytes =
             (atomic<__int64>)((longlong)this->ThreadProcessedBytes + pFVar4->FileSize);
        UNLOCK();
      }
      else {
        EVar11 = VerfiyFileSha(this,&local_68,(FString *)pFVar17,pFVar4);
      }
      (**(code **)((longlong)*this->VerifierStat + 0x18))(this->VerifierStat,pFVar17,EVar11);
      uVar10 = 0;
      if ((int)uVar18 < (this->ThreadJobResults).ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(EVerifyResult *)
       ((this->ThreadJobResults).AllocatorInstance.Data + (longlong)(int)uVar18 * 4) = EVar11;
    } while (this->bShouldAbort == (FThreadSafeBool)0x0);
  }
  if (param_1 != (FWindowsSemaphore *)0x0) {
    ReleaseSemaphore(param_1->Semaphore,1,(LPLONG)0x0);
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// SelectFullFilePath @ 1432ec820

FString * __thiscall
BuildPatchServices::FVerifier::SelectFullFilePath
          (FVerifier *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  undefined1 local_res8 [8];
  FString local_28;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (1 < (this->StagedFileDirectory).Data.ArrayNum) {
    pFVar3 = ::operator/(&local_28,&this->StagedFileDirectory,param_1);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if ((__return_storage_ptr__->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    }
    cVar2 = (**(code **)((longlong)*this->FileSystem + 0x18))(this->FileSystem,pwVar4,local_res8);
    if (cVar2 != '\0') {
      return __return_storage_ptr__;
    }
  }
  pFVar3 = ::operator/(&local_28,&this->VerifyDirectory,param_1);
  if (__return_storage_ptr__ != pFVar3) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetPaused @ 1432eddb0

void __thiscall BuildPatchServices::FVerifier::SetPaused(FVerifier *this,bool param_1)

{
  FThreadSafeBool FVar1;
  
  LOCK();
  FVar1._1_3_ = 0;
  FVar1._0_1_ = param_1;
  this->bIsPaused = FVar1;
  UNLOCK();
  return;
}

// VerfiyFileSha @ 1432f6590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EVerifyResult __thiscall
BuildPatchServices::FVerifier::VerfiyFileSha
          (FVerifier *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2,FFileManifest *param_3)

{
  FThreadSafeBool FVar1;
  IVerifierStat *pIVar2;
  code *pcVar3;
  float fVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  char cVar7;
  ulong64 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  EVerifyResult EVar11;
  ForAnyElementType FVar12;
  bool bVar13;
  undefined1 auStack_178 [32];
  longlong *local_158;
  FString *local_150;
  FRecord local_148;
  FFileManifest *local_130;
  FString local_128;
  longlong local_118;
  longlong lStack_110;
  int local_108;
  FSHA1 local_f8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar13 = -1 < CpuChannel->Enabled;
  local_150 = param_2;
  local_130 = param_3;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId303,"VerifyFileSha",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Verifier.cpp"
               ,0x12f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId303);
  }
  ISpeedRecorder::FRecord::FRecord(&local_148);
  SelectFullFilePath(this,&local_128,param_2);
  FVar6.Data = local_128.Data.AllocatorInstance.Data;
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar12.Data = local_128.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*this->FileSystem + 0x48))(this->FileSystem,&local_158,FVar12.Data,0);
  (**(code **)((longlong)*this->VerifierStat + 0x10))(this->VerifierStat,local_150,0);
  if (local_158 == (longlong *)0x0) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_128.Data.ArrayNum != 0) {
      FVar12.Data = FVar6.Data;
    }
    cVar7 = (**(code **)((longlong)*this->FileSystem + 0x80))(this->FileSystem,FVar12.Data);
    EVar11 = (cVar7 != '\0') + FileMissing;
  }
  else {
    uVar8 = (**(code **)(*local_158 + 0x30))();
    if (uVar8 == param_3->FileSize) {
      FSHA1::FSHA1(&local_f8);
      local_108 = 0;
      local_118 = 0;
      lStack_110 = 0;
      cVar7 = (**(code **)(*local_158 + 0x38))();
      pFVar5 = local_150;
      fVar4 = __real_3dcccccd;
      while ((cVar7 == '\0' && (param_3 = local_130, this->bShouldAbort == (FThreadSafeBool)0x0))) {
        FVar1 = this->bIsPaused;
        while ((FVar1 != (FThreadSafeBool)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))) {
          FWindowsPlatformProcess::Sleep(fVar4);
          FVar1 = this->bIsPaused;
        }
        local_148.CyclesStart = FStatsCollector::GetCycles();
        lVar9 = (**(code **)(*local_158 + 0x28))();
        local_148.Size = uVar8 - lVar9;
        if ((longlong)param_1->ArrayNum < (longlong)(uVar8 - lVar9)) {
          local_148.Size = (longlong)param_1->ArrayNum;
        }
        if (CpuChannel->Enabled < 0) {
          (**(code **)(*local_158 + 0x188))
                    (local_158,(param_1->AllocatorInstance).Data,local_148.Size);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId334,"VerifyFileSha_Serialize",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Verifier.cpp"
                     ,0x14e);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId334);
          (**(code **)(*local_158 + 0x188))
                    (local_158,(param_1->AllocatorInstance).Data,local_148.Size);
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (CpuChannel->Enabled < 0) {
          FSHA1::Update(&local_f8,(uchar *)(param_1->AllocatorInstance).Data,local_148.Size);
        }
        else {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId338,"VerifyFileSha_Hash",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Verifier.cpp"
                     ,0x152);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId338);
          FSHA1::Update(&local_f8,(uchar *)(param_1->AllocatorInstance).Data,local_148.Size);
          FCpuProfilerTrace::OutputEndEvent();
        }
        local_148.CyclesEnd = FStatsCollector::GetCycles();
        (**(code **)((longlong)*this->VerifierStat + 0x20))(this->VerifierStat,&local_148);
        pIVar2 = this->VerifierStat;
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x10);
        uVar10 = (**(code **)(*local_158 + 0x28))();
        (*pcVar3)(pIVar2,pFVar5,uVar10);
        LOCK();
        this->ThreadProcessedBytes =
             (atomic<__int64>)((longlong)this->ThreadProcessedBytes + local_148.Size);
        UNLOCK();
        cVar7 = (**(code **)(*local_158 + 0x38))();
        param_3 = local_130;
      }
      FSHA1::Final(&local_f8);
      FSHA1::GetHash(&local_f8,(uchar *)&local_118);
      if (((local_118 == *(longlong *)(param_3->FileHash).Hash) &&
          (lStack_110 == *(longlong *)((param_3->FileHash).Hash + 8))) &&
         (local_108 == *(int *)((param_3->FileHash).Hash + 0x10))) {
        EVar11 = Success;
      }
      else {
        EVar11 = Aborted;
        if (this->bShouldAbort == (FThreadSafeBool)0x0) {
          EVar11 = HashCheckFailed;
        }
      }
      FSHA1::~FSHA1(&local_f8);
    }
    else {
      EVar11 = FileSizeFailed;
    }
    (**(code **)(*local_158 + 0x210))();
    if (EVar11 == Success) goto LAB_1432f6929;
  }
  (**(code **)((longlong)*this->VerifierStat + 0x10))
            (this->VerifierStat,local_150,param_3->FileSize);
LAB_1432f6929:
  if (local_158 != (longlong *)0x0) {
    (**(code **)*local_158)(local_158,1);
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return EVar11;
}

// VerfiyFileSize @ 1432f69b0

EVerifyResult __thiscall
BuildPatchServices::FVerifier::VerfiyFileSize
          (FVerifier *this,FString *param_1,FFileManifest *param_2)

{
  FThreadSafeBool FVar1;
  IFileSystem *pIVar2;
  code *pcVar3;
  float fVar4;
  char cVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  EVerifyResult EVar8;
  ulong64 local_res8;
  FString local_38 [2];
  
  fVar4 = __real_3dcccccd;
  FVar1 = this->bIsPaused;
  while ((FVar1 != (FThreadSafeBool)0x0 && (this->bShouldAbort == (FThreadSafeBool)0x0))) {
    FWindowsPlatformProcess::Sleep(fVar4);
    FVar1 = this->bIsPaused;
  }
  (**(code **)((longlong)*this->VerifierStat + 0x10))(this->VerifierStat,param_1,0);
  pIVar2 = this->FileSystem;
  pcVar3 = *(code **)((longlong)*pIVar2 + 0x18);
  pFVar6 = SelectFullFilePath(this,local_38,param_1);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  cVar5 = (*pcVar3)(pIVar2,pwVar7,&local_res8);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (cVar5 == '\0') {
    EVar8 = FileMissing;
  }
  else {
    EVar8 = FileSizeFailed;
    if (local_res8 == param_2->FileSize) {
      EVar8 = Success;
    }
  }
  (**(code **)((longlong)*this->VerifierStat + 0x10))(this->VerifierStat,param_1,param_2->FileSize);
  LOCK();
  this->ThreadProcessedBytes =
       (atomic<__int64>)((longlong)this->ThreadProcessedBytes + param_2->FileSize);
  UNLOCK();
  return EVar8;
}

// Verify @ 1432f6ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EVerifyResult __thiscall
BuildPatchServices::FVerifier::Verify
          (FVerifier *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<BuildPatchServices::EVerifyResult,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<BuildPatchServices::FVerifier::FThreadVerifyJob,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<BuildPatchServices::IBuildInstallerThread_*,TSizedDefaultAllocator<32>_> *pTVar3;
  ForAnyElementType *pFVar4;
  IVerifierStat *pIVar5;
  code *pcVar6;
  FThreadVerifyJob *pFVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  IBuildInstallerSharedContext *pIVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  bool bVar12;
  char cVar13;
  bool bVar14;
  EVerifyResult EVar15;
  DWORD DVar16;
  undefined8 uVar17;
  byte bVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  int *piVar30;
  ulonglong uVar31;
  bool bVar32;
  undefined1 auStackY_1f8 [32];
  uint local_1a4;
  undefined1 local_1a0 [4];
  int local_19c;
  undefined4 local_198;
  EVerifyResult local_194;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_190;
  undefined8 local_188;
  FScriptContainerElement local_180;
  ForAnyElementType local_178;
  undefined8 local_170;
  undefined8 local_168;
  HANDLE local_160;
  int local_158;
  int local_154;
  undefined1 local_150 [16];
  int iStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FVerifier *local_d0;
  HANDLE *local_c8;
  undefined8 local_c0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar32 = -1 < CpuChannel->Enabled;
  local_190 = param_1;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId173,"Verify",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Online\\BuildPatchServices\\Private\\Installer\\Verifier.cpp"
               ,0xad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId173);
  }
  iVar25 = 0;
  local_194 = Success;
  LOCK();
  this->bShouldAbort = (FThreadSafeBool)0x0;
  UNLOCK();
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  if ((this->VerifyMode == FileSizeCheckAllFiles) || (this->VerifyMode == ShaVerifyAllFiles)) {
    (**(code **)((longlong)*this->ManifestSet + 0x50))(this->ManifestSet,&this->FilesToVerify);
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Difference
            (&this->FilesToVerify,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_98,
             &this->FilesPassedVerify);
  (**(code **)((longlong)*this->VerifierStat + 0x28))(this->VerifierStat,0);
  pIVar5 = this->VerifierStat;
  pcVar6 = *(code **)((longlong)*pIVar5 + 0x30);
  uVar17 = (**(code **)((longlong)*this->ManifestSet + 0x78))(this->ManifestSet,local_98);
  (*pcVar6)(pIVar5,uVar17);
  if ((this->VerifyMode == ShaVerifyAllFiles) ||
     (bVar14 = false, this->VerifyMode == ShaVerifyTouchedFiles)) {
    bVar14 = true;
  }
  piVar30 = &(this->ThreadJobList).ArrayMax;
  pFVar7 = (FThreadVerifyJob *)(this->ThreadJobList).AllocatorInstance.Data;
  iVar24 = (this->ThreadJobList).ArrayNum;
  if (*piVar30 < 0) {
    DestructItems<BuildPatchServices::FVerifier::FThreadVerifyJob,int>(pFVar7,iVar24);
    (this->ThreadJobList).ArrayNum = 0;
    if (*piVar30 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->ThreadJobList).AllocatorInstance,0,piVar30);
    }
  }
  else {
    DestructItems<BuildPatchServices::FVerifier::FThreadVerifyJob,int>(pFVar7,iVar24);
    (this->ThreadJobList).ArrayNum = 0;
  }
  (this->ThreadJobResults).ArrayNum = 0;
  if ((this->ThreadJobResults).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ThreadJobResults).AllocatorInstance,0,
               &(this->ThreadJobResults).ArrayMax);
  }
  uVar20 = local_70;
  LOCK();
  this->ThreadProcessedBytes = (atomic<__int64>)0x0;
  UNLOCK();
  uStack_13c = 1;
  this->NextThreadJobListIndex = 0;
  local_128 = 0;
  uStack_12c = 0;
  if (local_70 != 0) {
    puVar26 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar26 = local_78;
    }
    uVar29 = *puVar26;
    local_128 = 0;
    while (uVar29 == 0) {
      lVar19 = (longlong)iVar25;
      local_128 = local_128 + 0x20;
      iVar25 = iVar25 + 1;
      uStack_12c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_1432f6d12;
      uVar29 = puVar26[lVar19 + 1];
    }
    uStack_13c = -uVar29 & uVar29;
    uVar22 = (ulonglong)uStack_13c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_158 = (int)lVar19;
    uStack_12c = local_128 + -1 + local_158;
    if ((int)local_70 < (int)uStack_12c) {
      uStack_12c = local_70;
    }
  }
LAB_1432f6d12:
  local_150._8_8_ = local_98;
  uStack_124 = local_9c;
  uVar29 = local_70 & 0xffffffe0;
  iStack_120 = local_98._8_4_ - local_64;
  local_138 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uStack_130 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_12c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  TStack_110._padding_ = CONCAT44(uStack_13c,iVar25);
  iVar24 = (int)local_70 >> 5;
  bVar18 = (byte)local_70;
  local_1a4 = local_70;
  TStack_110._28_4_ = local_9c;
  TStack_110.BaseBitIndex = local_128;
  uStack_f0 = CONCAT44(uStack_11c,iStack_120);
  iStack_140 = iVar25;
  local_118 = (longlong *)local_150._8_8_;
  TStack_110.Array = local_138;
  if (((int)local_70 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    EVar15 = (*pcVar6)();
    return EVar15;
  }
  if (uVar20 != local_70) {
    puVar26 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar26 = local_78;
    }
    uVar20 = -1 << (bVar18 & 0x1f) & puVar26[iVar24];
    while (uVar20 == 0) {
      lVar19 = (longlong)iVar24;
      uVar29 = uVar29 + 0x20;
      iVar24 = iVar24 + 1;
      local_1a4 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_1432f6e3a;
      uVar20 = puVar26[lVar19 + 1];
    }
    uVar22 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_154 = (int)lVar19;
    local_1a4 = local_154 + -1 + uVar29;
    if ((int)local_70 < (int)local_1a4) {
      local_1a4 = local_70;
    }
  }
LAB_1432f6e3a:
  pTVar1 = &this->ThreadJobResults;
  pTVar2 = &this->ThreadJobList;
  do {
    plVar9 = local_118;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      local_1a0[0] = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a0);
    }
    if (((TStack_110.CurrentBitIndex == local_1a4) &&
        (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar9 == (longlong *)local_98)) {
      if ((this->SharedContext).Object == (IBuildInstallerSharedContext *)0x0) {
        ProcessVerifyJobs(this,(FWindowsSemaphore *)0x0);
      }
      else {
        local_19c = 1;
        FConfigCacheIni::GetInt
                  (GConfig,L"BuildPatchTool",L"VerificationThreadCount",&local_19c,&GEngineIni);
        iVar25 = local_19c;
        local_160 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,local_19c,(LPCWSTR)0x0);
        uVar22 = 0;
        if (0 < local_19c) {
          pTVar3 = &this->SecondaryProcessThreads;
          uVar27 = uVar22;
          uVar31 = uVar22;
          do {
            if (((this->SharedContext).Object == (IBuildInstallerSharedContext *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            local_168 = (**(code **)((longlong)*(this->SharedContext).Object + 8))();
            pFVar8 = (pTVar3->AllocatorInstance).Data;
            if (((pFVar8 <= (FScriptContainerElement *)&local_168) &&
                ((FScriptContainerElement *)&local_168 <
                 pFVar8 + (longlong)(this->SecondaryProcessThreads).ArrayMax * 8)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            iVar24 = (this->SecondaryProcessThreads).ArrayNum;
            if (iVar24 == (this->SecondaryProcessThreads).ArrayMax) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar3->AllocatorInstance,
                                  &(this->SecondaryProcessThreads).ArrayMax);
            }
            (this->SecondaryProcessThreads).ArrayNum = iVar24 + 1;
            *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar24 * 8) = local_168;
            uVar29 = (uint)uVar31;
            uVar20 = 0;
            if ((int)uVar29 < (this->SecondaryProcessThreads).ArrayNum) {
              uVar20 = ~uVar29 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            local_c8 = &local_160;
            plVar9 = *(longlong **)((pTVar3->AllocatorInstance).Data + uVar27);
            local_e8[0] = UE::Core::Private::Function::
                          TFunctionRefCaller<`BuildPatchServices::FVerifier::Verify'::__l14::<lambda_1>,void>
                          ::Call;
            local_c0 = 0;
            local_d8 = &UE::Core::Private::Function::
                        TFunction_OwnedObject<`BuildPatchServices::FVerifier::Verify'::`14'::<lambda_1>,1,0>
                        ::_vftable_;
            local_d0 = this;
            (**(code **)(*plVar9 + 8))(plVar9,local_e8);
            uVar31 = (ulonglong)(uVar29 + 1);
            uVar27 = uVar27 + 8;
          } while ((int)(uVar29 + 1) < local_19c);
        }
        while ((DVar16 = WaitForSingleObject(local_160,0), DVar16 != 0 ||
               (iVar25 = iVar25 + -1, iVar25 != 0))) {
          (**(code **)((longlong)*this->VerifierStat + 0x28))();
        }
        uVar27 = uVar22;
        if (0 < local_19c) {
          do {
            if (((this->SharedContext).Object == (IBuildInstallerSharedContext *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            pIVar10 = (this->SharedContext).Object;
            uVar29 = (uint)uVar27;
            pcVar6 = *(code **)((longlong)*pIVar10 + 0x10);
            uVar20 = 0;
            if ((int)uVar29 < (this->SecondaryProcessThreads).ArrayNum) {
              uVar20 = ~uVar29 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            (*pcVar6)(pIVar10,*(undefined8 *)
                               ((this->SecondaryProcessThreads).AllocatorInstance.Data + uVar22));
            uVar22 = uVar22 + 8;
            uVar27 = (ulonglong)(uVar29 + 1);
          } while ((int)(uVar29 + 1) < local_19c);
        }
        piVar30 = &(this->SecondaryProcessThreads).ArrayMax;
        (this->SecondaryProcessThreads).ArrayNum = 0;
        if (*piVar30 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->SecondaryProcessThreads).AllocatorInstance,0,piVar30);
        }
        CloseHandle(local_160);
      }
      pTVar11 = local_190;
      uVar20 = 0;
      if (0 < (this->ThreadJobList).ArrayNum) {
        lVar19 = 0;
        lVar28 = 0;
        do {
          uVar21 = ~uVar20 >> 0x1f;
          uVar29 = 0;
          if ((int)uVar20 < (this->ThreadJobResults).ArrayNum) {
            uVar29 = uVar21;
          }
          if ((uVar29 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            EVar15 = (*pcVar6)();
            return EVar15;
          }
          iVar25 = (this->ThreadJobList).ArrayNum;
          EVar15 = *(EVerifyResult *)((this->ThreadJobResults).AllocatorInstance.Data + lVar28);
          if (EVar15 == Success) {
            uVar29 = 0;
            if ((int)uVar20 < iVar25) {
              uVar29 = uVar21;
            }
            if ((uVar29 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            if ((this->ThreadJobList).AllocatorInstance.Data[lVar19 + 8] !=
                (FScriptContainerElement)0x0) {
              uVar29 = 0;
              if ((int)uVar20 < (this->ThreadJobList).ArrayNum) {
                uVar29 = ~uVar20 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                EVar15 = (*pcVar6)();
                return EVar15;
              }
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
              Emplace<FString_const_&>
                        (&this->FilesPassedVerify,(FString *)local_150,
                         (bool *)((this->ThreadJobList).AllocatorInstance.Data +
                                 (longlong)(int)uVar20 * 0x20 + 0x10));
            }
          }
          else {
            uVar29 = 0;
            if ((int)uVar20 < iVar25) {
              uVar29 = uVar21;
            }
            if ((uVar29 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            pFVar23 = (this->ThreadJobList).AllocatorInstance.Data +
                      (longlong)(int)uVar20 * 0x20 + 0x10;
            pFVar8 = (pTVar11->AllocatorInstance).Data;
            if (((pFVar8 <= pFVar23) && (pFVar23 < pFVar8 + (longlong)pTVar11->ArrayMax * 0x10)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar6 = (code *)swi(3);
              EVar15 = (*pcVar6)();
              return EVar15;
            }
            iVar25 = pTVar11->ArrayNum;
            if (iVar25 == pTVar11->ArrayMax) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
            }
            pTVar11->ArrayNum = iVar25 + 1;
            ::FString::FString((FString *)
                               ((pTVar11->AllocatorInstance).Data + (longlong)iVar25 * 0x10),
                               (FString *)pFVar23);
            if (2 < (byte)LogVerifier._0_1_) {
              uVar29 = 0;
              if ((int)uVar20 < (this->ThreadJobList).ArrayNum) {
                uVar29 = ~uVar20 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar6 = (code *)swi(3);
                EVar15 = (*pcVar6)();
                return EVar15;
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVerifier);
            }
            if (local_194 == Success) {
              local_194 = EVar15;
            }
          }
          uVar20 = uVar20 + 1;
          lVar28 = lVar28 + 4;
          lVar19 = lVar19 + 0x20;
        } while ((int)uVar20 < (this->ThreadJobList).ArrayNum);
      }
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      if (bVar32) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return local_194;
    }
    pFVar4 = (ForAnyElementType *)(*plVar9 + (longlong)TStack_110.CurrentBitIndex * 0x18);
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    if (&local_178 != pFVar4) {
      uVar20 = *(uint *)&pFVar4[1].Data;
      pFVar8 = pFVar4->Data;
      local_170 = (ulonglong)uVar20;
      if (uVar20 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar20,0,&local_178,uVar20,(int *)((longlong)&local_170 + 4));
        memcpy(local_178.Data,pFVar8,(longlong)(int)uVar20 * 2);
      }
    }
    piVar30 = &(this->ThreadJobResults).ArrayMax;
    local_188 = (**(code **)((longlong)*this->ManifestSet + 0x70))(this->ManifestSet,pFVar4);
    if (bVar14) {
LAB_1432f6f2e:
      local_180 = (FScriptContainerElement)0x1;
    }
    else {
      cVar13 = (**(code **)((longlong)*this->ManifestSet + 0x98))(this->ManifestSet,pFVar4);
      local_180 = (FScriptContainerElement)0x0;
      if (cVar13 != '\0') goto LAB_1432f6f2e;
    }
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_188) &&
        ((FScriptContainerElement *)&local_188 <
         pFVar8 + (longlong)(this->ThreadJobList).ArrayMax * 0x20)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      EVar15 = (*pcVar6)();
      return EVar15;
    }
    iVar25 = (this->ThreadJobList).ArrayNum;
    if (iVar25 == (this->ThreadJobList).ArrayMax) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar2->AllocatorInstance,&(this->ThreadJobList).ArrayMax);
    }
    (this->ThreadJobList).ArrayNum = iVar25 + 1;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    lVar19 = (longlong)iVar25 * 0x20;
    local_198 = 1;
    *(undefined8 *)(pFVar8 + lVar19) = local_188;
    pFVar8[lVar19 + 8] = local_180;
    *(undefined8 *)(pFVar8 + lVar19 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar8 + lVar19 + 0x10) = local_178.Data;
    local_178.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(pFVar8 + lVar19 + 0x18) = (undefined4)local_170;
    *(undefined4 *)(pFVar8 + lVar19 + 0x1c) = local_170._4_4_;
    pFVar8 = (pTVar1->AllocatorInstance).Data;
    local_170 = 0;
    if (((pFVar8 <= (FScriptContainerElement *)&local_198) &&
        ((FScriptContainerElement *)&local_198 < pFVar8 + (longlong)*piVar30 * 4)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar6 = (code *)swi(3);
      EVar15 = (*pcVar6)();
      return EVar15;
    }
    iVar25 = (this->ThreadJobResults).ArrayNum;
    if (iVar25 == *piVar30) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar1->AllocatorInstance,piVar30);
    }
    (this->ThreadJobResults).ArrayNum = iVar25 + 1;
    *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar25 * 4) = local_198;
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  } while( true );
}

