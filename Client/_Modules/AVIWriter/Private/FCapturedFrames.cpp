// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVIWriter
// Functions: 9

// FCapturedFrames @ 14464ea30

FCapturedFrames * __thiscall
FCapturedFrames::FCapturedFrames(FCapturedFrames *this,FString *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  FEvent *pFVar3;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar4;
  wchar_t *pwVar5;
  
  ::FString::FString(&this->ArchiveDirectory,param_1);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ArchiveFrameMutex,4000);
  (this->ArchivedFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchivedFrames).ArrayNum = 0;
  (this->ArchivedFrames).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->InMemoryFrameMutex,4000);
  (this->InMemoryFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InMemoryFrames).ArrayMax;
  *piVar1 = 0;
  (this->InMemoryFrames).ArrayNum = 0;
  this->MaxInMemoryFrames = param_2;
  (this->UnarchiveTask).bIsSet = false;
  pFVar3 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->FrameReady = pFVar3;
  this_00 = FPlatformFileManager::Get();
  pIVar4 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((this->ArchiveDirectory).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->ArchiveDirectory).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar4 + 0x1f8))(pIVar4,pwVar5);
  uVar2 = this->MaxInMemoryFrames;
  this->TotalArchivedFrames = 0;
  if (-1 < (int)uVar2) {
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar2,&(this->InMemoryFrames).AllocatorInstance,
                 (this->InMemoryFrames).ArrayNum,piVar1);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ~FCapturedFrames @ 14464ed20

void __thiscall FCapturedFrames::~FCapturedFrames(FCapturedFrames *this)

{
  FScriptContainerElement *pFVar1;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar2;
  wchar_t *pwVar3;
  
  FGenericPlatformProcess::ReturnSynchEventToPool(this->FrameReady);
  this_00 = FPlatformFileManager::Get();
  pIVar2 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((this->ArchiveDirectory).Data.ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(this->ArchiveDirectory).Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar2 + 0x1f8))(pIVar2,pwVar3);
  if ((this->UnarchiveTask).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&(this->UnarchiveTask).TypedValue.field_0x8);
  }
  DestructItems<FCapturedFrame,int>
            ((FCapturedFrame *)(this->InMemoryFrames).AllocatorInstance.Data,
             (this->InMemoryFrames).ArrayNum);
  pFVar1 = (this->InMemoryFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->InMemoryFrameMutex);
  pFVar1 = (this->ArchivedFrames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ArchiveFrameMutex);
  pFVar1 = (this->ArchiveDirectory).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14464eef0

void __thiscall `FCapturedFrames::StartUnArchiving'::__l2::<lambda_1>::operator()(void *this)

{
  void *_Src;
  FCapturedFrames *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  LPCRITICAL_SECTION p_Var8;
  ForAnyElementType *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType local_78;
  uint local_70;
  int local_6c;
  TOptional<FCapturedFrame> local_68;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)this + 0x10));
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = *(uint *)(*(longlong *)this + 0x40);
  lVar7 = (longlong)(int)local_70;
  _Src = *(void **)(*(longlong *)this + 0x38);
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_70,0,&local_78,local_70,&local_6c);
    memcpy(local_78.Data,_Src,lVar7 << 2);
  }
  uVar10 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)this + 0x10));
  uVar11 = *(uint *)(*(longlong *)this + 0x90);
  if ((int)local_70 < (int)*(uint *)(*(longlong *)this + 0x90)) {
    uVar11 = local_70;
  }
  if ((int)uVar11 < 1) {
    if (uVar11 == 0) goto LAB_14464f235;
  }
  else {
    uVar13 = uVar10;
    do {
      this_00 = *(FCapturedFrames **)this;
      uVar12 = (uint)uVar13;
      uVar4 = 0;
      if ((int)uVar12 < (int)local_70) {
        uVar4 = ~uVar12 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FCapturedFrames::UnArchiveFrame(this_00,&local_68,*(uint *)(local_78.Data + uVar10 * 4));
      if (local_68.bIsSet != false) {
        p_Var8 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x58);
        if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection(p_Var8);
        lVar7 = *(longlong *)this;
        pFVar9 = (ForAnyElementType *)(lVar7 + 0x80);
        if ((local_68.bIsSet == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((((TOptional<FCapturedFrame> *)pFVar9->Data <= &local_68) &&
            (&local_68 <
             (TOptional<FCapturedFrame> *)
             (&((TOptional<FCapturedFrame> *)pFVar9->Data)->TypedValue + *(int *)(lVar7 + 0x8c))))
           && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = *(int *)(lVar7 + 0x88);
        if (iVar5 == *(int *)(lVar7 + 0x8c)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,pFVar9,(int *)(lVar7 + 0x8c));
        }
        lVar6 = (longlong)iVar5;
        *(int *)(lVar7 + 0x88) = iVar5 + 1;
        pFVar1 = pFVar9->Data;
        *(double *)(pFVar1 + lVar6 * 0x30) = local_68.TypedValue.StartTimeSeconds;
        *(double *)(pFVar1 + lVar6 * 0x30 + 8) = local_68.TypedValue.EndTimeSeconds;
        *(uint *)(pFVar1 + lVar6 * 0x30 + 0x10) = local_68.TypedValue.FrameIndex;
        *(undefined8 *)(pFVar1 + lVar6 * 0x30 + 0x18) = 0;
        *(FScriptContainerElement **)(pFVar1 + lVar6 * 0x30 + 0x18) =
             local_68.TypedValue.FrameData.AllocatorInstance.Data;
        local_68.TypedValue.FrameData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar1 + lVar6 * 0x30 + 0x20) = local_68.TypedValue.FrameData.ArrayNum;
        *(int *)(pFVar1 + lVar6 * 0x30 + 0x24) = local_68.TypedValue.FrameData.ArrayMax;
        local_68.TypedValue.FrameData.ArrayNum = 0;
        local_68.TypedValue.FrameData.ArrayMax = 0;
        *(FEvent **)(pFVar1 + lVar6 * 0x30 + 0x28) = local_68.TypedValue.FrameProcessedEvent;
        LeaveCriticalSection(p_Var8);
        if ((local_68.bIsSet != false) &&
           (local_68.TypedValue.FrameData.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_68.TypedValue.FrameData.AllocatorInstance.Data);
        }
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar10 = uVar10 + 1;
    } while ((longlong)uVar10 < (longlong)(int)uVar11);
  }
  p_Var8 = (LPCRITICAL_SECTION)(*(longlong *)this + 0x10);
  if (p_Var8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(p_Var8);
  lVar7 = *(longlong *)this;
  uVar4 = 0;
  if ((int)uVar11 <= *(int *)(lVar7 + 0x40)) {
    uVar4 = ~uVar11 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)(lVar7 + 0x40) - uVar11;
  if (iVar5 != 0) {
    memmove(*(void **)(lVar7 + 0x38),
            (void *)((longlong)*(void **)(lVar7 + 0x38) + (longlong)(int)uVar11 * 4),
            (longlong)iVar5 << 2);
  }
  *(int *)(lVar7 + 0x40) = *(int *)(lVar7 + 0x40) - uVar11;
  LeaveCriticalSection(p_Var8);
  (**(code **)(**(longlong **)(*(longlong *)this + 0x50) + 0x10))();
LAB_14464f235:
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return;
}

// Add @ 14464f5c0

void __thiscall FCapturedFrames::Add(FCapturedFrames *this,FCapturedFrame *param_1)

{
  FWindowsRecursiveMutex *pFVar1;
  int *piVar2;
  TArray<FCapturedFrame,TSizedDefaultAllocator<32>_> *pTVar3;
  FCapturedFrame *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  FCapturedFrame local_48;
  
  pFVar1 = &this->ArchiveFrameMutex;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    iVar8 = (this->ArchivedFrames).ArrayNum;
    bVar10 = iVar8 != 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    if (iVar8 == 0) {
      pFVar1 = &this->InMemoryFrameMutex;
      if (pFVar1 == (FWindowsRecursiveMutex *)0x0) goto LAB_14464f7a1;
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      if ((this->InMemoryFrames).ArrayNum < this->MaxInMemoryFrames) {
        pTVar3 = &this->InMemoryFrames;
        pFVar4 = (FCapturedFrame *)(pTVar3->AllocatorInstance).Data;
        if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->InMemoryFrames).ArrayMax)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = (this->InMemoryFrames).ArrayNum;
        piVar2 = &(this->InMemoryFrames).ArrayMax;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&pTVar3->AllocatorInstance,piVar2);
        }
        lVar9 = (longlong)iVar8;
        (this->InMemoryFrames).ArrayNum = iVar8 + 1;
        pFVar5 = (pTVar3->AllocatorInstance).Data;
        *(double *)(pFVar5 + lVar9 * 0x30) = param_1->StartTimeSeconds;
        *(double *)(pFVar5 + lVar9 * 0x30 + 8) = param_1->EndTimeSeconds;
        *(uint *)(pFVar5 + lVar9 * 0x30 + 0x10) = param_1->FrameIndex;
        *(undefined8 *)(pFVar5 + lVar9 * 0x30 + 0x18) = 0;
        *(FScriptContainerElement **)(pFVar5 + lVar9 * 0x30 + 0x18) =
             (param_1->FrameData).AllocatorInstance.Data;
        (param_1->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(pFVar5 + lVar9 * 0x30 + 0x20) = (param_1->FrameData).ArrayNum;
        *(int *)(pFVar5 + lVar9 * 0x30 + 0x24) = (param_1->FrameData).ArrayMax;
        (param_1->FrameData).ArrayNum = 0;
        (param_1->FrameData).ArrayMax = 0;
        *(FEvent **)(pFVar5 + lVar9 * 0x30 + 0x28) = param_1->FrameProcessedEvent;
      }
      else {
        bVar10 = true;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    }
    if (bVar10) {
      local_48.FrameIndex = param_1->FrameIndex;
      local_48.StartTimeSeconds = param_1->StartTimeSeconds;
      local_48.EndTimeSeconds = param_1->EndTimeSeconds;
      local_48.FrameData.AllocatorInstance.Data = (param_1->FrameData).AllocatorInstance.Data;
      (param_1->FrameData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.FrameData.ArrayNum = (param_1->FrameData).ArrayNum;
      local_48.FrameData.ArrayMax = (param_1->FrameData).ArrayMax;
      (param_1->FrameData).ArrayNum = 0;
      (param_1->FrameData).ArrayMax = 0;
      local_48.FrameProcessedEvent = param_1->FrameProcessedEvent;
      ArchiveFrame(this,&local_48);
    }
    else {
      (**(code **)(this->FrameReady->_padding_ + 0x10))();
    }
    pFVar5 = (param_1->FrameData).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    return;
  }
LAB_14464f7a1:
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ArchiveFrame @ 14464f810

void __thiscall FCapturedFrames::ArchiveFrame(FCapturedFrames *this,FCapturedFrame *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  IFileManager *pIVar8;
  FArchive *pFVar9;
  wchar_t *pwVar10;
  ForAnyElementType FVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint local_48 [2];
  FString local_40;
  FString local_30;
  
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  if ((this->ArchiveDirectory).Data.ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(this->ArchiveDirectory).Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar7 + 0x118))(pIVar7,pwVar10);
  if (cVar3 == '\0') {
    if ((this->ArchiveDirectory).Data.ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(this->ArchiveDirectory).Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar7 + 0x120))(pIVar7,pwVar10);
  }
  this->TotalArchivedFrames = this->TotalArchivedFrames + 1;
  local_48[0] = this->TotalArchivedFrames;
  ::FString::PrintfImpl(&local_30,L"%d.frame");
  iVar6 = (this->ArchiveDirectory).Data.ArrayNum;
  iVar12 = local_30.Data.ArrayNum + -1;
  if (local_30.Data.ArrayNum == 0) {
    iVar12 = 0;
  }
  local_40.Data.ArrayNum = iVar6;
  if ((iVar6 == 0) && (iVar12 != -1)) {
    pFVar14 = (this->ArchiveDirectory).Data.AllocatorInstance.Data;
    iVar5 = iVar12 + 2;
LAB_14464f8e2:
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar5 == 0) {
      local_40.Data.ArrayMax = 0;
      goto LAB_14464f937;
    }
  }
  else {
    pFVar14 = (this->ArchiveDirectory).Data.AllocatorInstance.Data;
    iVar5 = iVar12 + 1;
    if (iVar6 == 0) goto LAB_14464f8e2;
  }
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar13 = iVar6 + iVar5;
  if ((int)uVar13 < iVar6) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar13,0,(ForAnyElementType *)&local_40,iVar6,&local_40.Data.ArrayMax);
  if (iVar6 != 0) {
    memcpy(local_40.Data.AllocatorInstance.Data,pFVar14,(longlong)iVar6 * 2);
  }
LAB_14464f937:
  ::FString::PathAppend(&local_40,(wchar_t *)local_30.Data.AllocatorInstance.Data,iVar12);
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  pIVar8 = IFileManager::Get();
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar11.Data = local_40.Data.AllocatorInstance.Data;
  }
  pFVar9 = (FArchive *)(**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,FVar11.Data,0);
  if (pFVar9 == (FArchive *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2302468878610989758>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVIWriter\\Private\\AVIWriter.cpp"
                       ,0x2be,"Archive.IsValid()");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    ::operator<<(pFVar9,param_1);
    (**(code **)(*(longlong *)pFVar9 + 0x210))(pFVar9);
    lpCriticalSection = &this->ArchiveFrameMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar14 = (this->ArchivedFrames).AllocatorInstance.Data;
    if ((pFVar14 <= (FScriptContainerElement *)local_48) &&
       ((FScriptContainerElement *)local_48 <
        pFVar14 + (longlong)(this->ArchivedFrames).ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = (this->ArchivedFrames).ArrayNum;
    piVar1 = &(this->ArchivedFrames).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->ArchivedFrames).AllocatorInstance,piVar1);
    }
    (this->ArchivedFrames).ArrayNum = iVar6 + 1;
    *(uint *)((this->ArchivedFrames).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_48[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
  }
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  pFVar14 = (param_1->FrameData).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  return;
}

// GetNumOutstandingFrames @ 144650780

int __thiscall FCapturedFrames::GetNumOutstandingFrames(FCapturedFrames *this)

{
  FWindowsRecursiveMutex *pFVar1;
  int iVar2;
  int iVar3;
  
  pFVar1 = &this->InMemoryFrameMutex;
  if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
    iVar2 = (this->InMemoryFrames).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
    pFVar1 = &this->ArchiveFrameMutex;
    if (pFVar1 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar1);
      iVar3 = (this->ArchivedFrames).ArrayNum;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar1);
      return iVar3 + iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReadFrames @ 1446514e0

TArray<FCapturedFrame,TSizedDefaultAllocator<32>_> * __thiscall
FCapturedFrames::ReadFrames
          (FCapturedFrames *this,
          TArray<FCapturedFrame,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  char cVar5;
  ForAnyElementType local_38;
  undefined8 uStack_30;
  undefined1 local_28 [32];
  
  cVar5 = (**(code **)(this->FrameReady->_padding_ + 0x20))(this->FrameReady,param_1,0);
  if (cVar5 == '\0') {
    StartUnArchiving(this);
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    if (((TOptional<TFuture<void>_> *)local_28 != &this->UnarchiveTask) &&
       ((this->UnarchiveTask).bIsSet != false)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&(this->UnarchiveTask).TypedValue.field_0x8);
      (this->UnarchiveTask).bIsSet = false;
    }
    uVar1 = this->MaxInMemoryFrames;
    local_38.Data = (FScriptContainerElement *)0x0;
    uStack_30 = 0;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar1,&local_38,0,(int *)((longlong)&uStack_30 + 4));
    }
    lpCriticalSection = &this->InMemoryFrameMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->InMemoryFrames).AllocatorInstance.Data;
    iVar2 = (this->InMemoryFrames).ArrayNum;
    iVar3 = (this->InMemoryFrames).ArrayMax;
    *(undefined4 *)&(this->InMemoryFrames).AllocatorInstance.Data = local_38.Data._0_4_;
    *(undefined4 *)((longlong)&(this->InMemoryFrames).AllocatorInstance.Data + 4) =
         local_38.Data._4_4_;
    (this->InMemoryFrames).ArrayNum = (int)uStack_30;
    (this->InMemoryFrames).ArrayMax = uStack_30._4_4_;
    local_38.Data = pFVar4;
    uStack_30._0_4_ = iVar2;
    uStack_30._4_4_ = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    StartUnArchiving(this);
    (__return_storage_ptr__->AllocatorInstance).Data = local_38.Data;
    __return_storage_ptr__->ArrayNum = (int)uStack_30;
    __return_storage_ptr__->ArrayMax = uStack_30._4_4_;
    uStack_30 = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    DestructItems<FCapturedFrame,int>((FCapturedFrame *)0x0,0);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return __return_storage_ptr__;
}

// StartUnArchiving @ 144651750

void __thiscall FCapturedFrames::StartUnArchiving(FCapturedFrames *this)

{
  TFuture<void> *pTVar1;
  <lambda_1> local_res8;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  if ((this->UnarchiveTask).bIsSet == false) {
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    local_res8.__this = this;
    pTVar1 = Async<_FCapturedFrames::StartUnArchiving_::__l2::<lambda_1>_>
                       ((TFuture<void> *)local_48,Thread,&local_res8,&local_38);
    if ((TOptional<TFuture<void>_> *)pTVar1 != &this->UnarchiveTask) {
      if ((this->UnarchiveTask).bIsSet != false) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)&(this->UnarchiveTask).TypedValue.field_0x8);
      }
      *(undefined8 *)&(this->UnarchiveTask).TypedValue = *(undefined8 *)pTVar1;
      *(undefined8 *)&(this->UnarchiveTask).TypedValue.field_0x8 = *(undefined8 *)&pTVar1->field_0x8
      ;
      *(undefined8 *)&pTVar1->field_0x8 = 0;
      *(undefined8 *)pTVar1 = 0;
      (this->UnarchiveTask).bIsSet = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._8_8_);
  }
  return;
}

// UnArchiveFrame @ 144651830

TOptional<FCapturedFrame> * __thiscall
FCapturedFrames::UnArchiveFrame
          (FCapturedFrames *this,TOptional<FCapturedFrame> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  IFileManager *pIVar5;
  FArchive *pFVar6;
  TOptional<FCapturedFrame> *pTVar7;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar8;
  ForAnyElementType FVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *_Src;
  FString local_68;
  FString local_58;
  FCapturedFrame local_48;
  
  ::FString::PrintfImpl(&local_58,L"%d.frame");
  iVar1 = (this->ArchiveDirectory).Data.ArrayNum;
  iVar10 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar10 = 0;
  }
  local_68.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar10 != -1)) {
    _Src = (this->ArchiveDirectory).Data.AllocatorInstance.Data;
    iVar4 = iVar10 + 2;
LAB_1446518a5:
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar4 == 0) {
      local_68.Data.ArrayMax = 0;
      goto LAB_1446518f7;
    }
  }
  else {
    _Src = (this->ArchiveDirectory).Data.AllocatorInstance.Data;
    iVar4 = iVar10 + 1;
    if (iVar1 == 0) goto LAB_1446518a5;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar11 = iVar1 + iVar4;
  if ((int)uVar11 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar11,0,(ForAnyElementType *)&local_68,iVar1,&local_68.Data.ArrayMax);
  if (iVar1 != 0) {
    memcpy(local_68.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
  }
LAB_1446518f7:
  ::FString::PathAppend(&local_68,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar10);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pIVar5 = IFileManager::Get();
  FVar9.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
  }
  pFVar6 = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,FVar9.Data,0);
  if (pFVar6 == (FArchive *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2302468878610989773>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AVIWriter\\Private\\AVIWriter.cpp"
                       ,0x2cd,"Archive.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TOptional<FCapturedFrame> *)(*pcVar2)();
      return pTVar7;
    }
    __return_storage_ptr__->bIsSet = false;
  }
  else {
    local_48.FrameIndex = 0;
    local_48.FrameData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.FrameData.ArrayNum = 0;
    local_48.FrameData.ArrayMax = 0;
    local_48.StartTimeSeconds = 0.0;
    local_48.EndTimeSeconds = 0.0;
    local_48.FrameProcessedEvent = (FEvent *)0x0;
    ::operator<<(pFVar6,&local_48);
    (**(code **)(*(longlong *)pFVar6 + 0x210))(pFVar6);
    this_00 = FPlatformFileManager::Get();
    pIVar8 = FPlatformFileManager::GetPlatformFile(this_00);
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar9.Data = local_68.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar8 + 0x88))(pIVar8,FVar9.Data);
    (__return_storage_ptr__->TypedValue).FrameIndex = local_48.FrameIndex;
    (__return_storage_ptr__->TypedValue).FrameData.AllocatorInstance.Data =
         local_48.FrameData.AllocatorInstance.Data;
    *(undefined4 *)&(__return_storage_ptr__->TypedValue).StartTimeSeconds =
         local_48.StartTimeSeconds._0_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).StartTimeSeconds + 4) =
         local_48.StartTimeSeconds._4_4_;
    *(undefined4 *)&(__return_storage_ptr__->TypedValue).EndTimeSeconds =
         local_48.EndTimeSeconds._0_4_;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).EndTimeSeconds + 4) =
         local_48.EndTimeSeconds._4_4_;
    (__return_storage_ptr__->TypedValue).FrameData.ArrayNum = local_48.FrameData.ArrayNum;
    (__return_storage_ptr__->TypedValue).FrameData.ArrayMax = local_48.FrameData.ArrayMax;
    (__return_storage_ptr__->TypedValue).FrameProcessedEvent = local_48.FrameProcessedEvent;
    __return_storage_ptr__->bIsSet = true;
    local_48.FrameData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.FrameData.ArrayNum = 0;
    local_48.FrameData.ArrayMax = 0;
    (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

