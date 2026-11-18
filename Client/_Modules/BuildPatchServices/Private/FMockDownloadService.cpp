// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 5

// ~FMockDownloadService @ 143288b80

void __thiscall
BuildPatchServices::FMockDownloadService::~FMockDownloadService(FMockDownloadService *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->RequestCancelFunc != 0) {
    plVar1 = *(longlong **)&(this->RequestCancelFunc).field_0x28;
    plVar3 = (longlong *)&(this->RequestCancelFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->RequestFileFunc != 0) {
    plVar1 = *(longlong **)&(this->RequestFileFunc).field_0x28;
    plVar3 = (longlong *)&(this->RequestFileFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->RxRequestCancel).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>,int>
            ((TTuple<double,int,FString,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>_>
              *)(this->RxRequestFile).AllocatorInstance.Data,(this->RxRequestFile).ArrayNum);
  pFVar2 = (this->RxRequestFile).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ThreadLock);
  this->_padding_ = (longlong)&___7IDownloadService_BuildPatchServices__6B_;
  return;
}

// RequestAbandon @ 1432e9b80

void __thiscall
BuildPatchServices::FMockDownloadService::RequestAbandon(FMockDownloadService *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double dVar8;
  int local_res8 [2];
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(void **)&this->RequestCancelFunc != (void *)0x0) {
      local_res8[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->RequestCancelFunc);
      pcVar2 = *(code **)&this->RequestCancelFunc;
      plVar3 = *(longlong **)&(this->RequestCancelFunc).field_0x28;
      plVar7 = (longlong *)&(this->RequestCancelFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar7 = plVar3;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar6,local_res8);
    }
    dVar8 = FStatsCollector::GetSeconds();
    iVar5 = (this->RxRequestCancel).ArrayNum;
    piVar1 = &(this->RxRequestCancel).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->RxRequestCancel).AllocatorInstance,piVar1);
    }
    (this->RxRequestCancel).ArrayNum = iVar5 + 1;
    pFVar4 = (this->RxRequestCancel).AllocatorInstance.Data;
    *(double *)(pFVar4 + (longlong)iVar5 * 0x10) = dVar8;
    *(int *)(pFVar4 + (longlong)iVar5 * 0x10 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001432e9c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestCancel @ 1432e9dc0

void __thiscall
BuildPatchServices::FMockDownloadService::RequestCancel(FMockDownloadService *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double dVar8;
  int local_res8 [2];
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(void **)&this->RequestCancelFunc != (void *)0x0) {
      local_res8[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->RequestCancelFunc);
      pcVar2 = *(code **)&this->RequestCancelFunc;
      plVar3 = *(longlong **)&(this->RequestCancelFunc).field_0x28;
      plVar7 = (longlong *)&(this->RequestCancelFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar7 = plVar3;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(uVar6,local_res8);
    }
    dVar8 = FStatsCollector::GetSeconds();
    iVar5 = (this->RxRequestCancel).ArrayNum;
    piVar1 = &(this->RxRequestCancel).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->RxRequestCancel).AllocatorInstance,piVar1);
    }
    (this->RxRequestCancel).ArrayNum = iVar5 + 1;
    pFVar4 = (this->RxRequestCancel).AllocatorInstance.Data;
    *(double *)(pFVar4 + (longlong)iVar5 * 0x10) = dVar8;
    *(int *)(pFVar4 + (longlong)iVar5 * 0x10 + 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001432e9e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestFile @ 1432e9fb0

int __thiscall
BuildPatchServices::FMockDownloadService::RequestFile
          (FMockDownloadService *this,FString *param_1,
          TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *param_3
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  
  lpCriticalSection = &this->ThreadLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (*(void **)&this->RequestFileFunc == (void *)0x0) {
      this->Count = this->Count + 1;
      iVar5 = this->Count;
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->RequestFileFunc);
      pcVar2 = *(code **)&this->RequestFileFunc;
      plVar3 = *(longlong **)&(this->RequestFileFunc).field_0x28;
      plVar8 = (longlong *)&(this->RequestFileFunc).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar8 = plVar3;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      iVar5 = (*pcVar2)(uVar7,param_1,param_2,param_3);
    }
    dVar10 = FStatsCollector::GetSeconds();
    iVar6 = (this->RxRequestFile).ArrayNum;
    piVar1 = &(this->RxRequestFile).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(this->RxRequestFile).AllocatorInstance,piVar1);
    }
    (this->RxRequestFile).ArrayNum = iVar6 + 1;
    pFVar4 = (this->RxRequestFile).AllocatorInstance.Data;
    lVar9 = (longlong)iVar6 * 0x50;
    *(double *)(pFVar4 + lVar9) = dVar10;
    *(int *)(pFVar4 + lVar9 + 8) = iVar5;
    ::FString::FString((FString *)(pFVar4 + lVar9 + 0x10),param_1);
    TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
    ::
    TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                *)(pFVar4 + lVar9 + 0x20),param_2);
    TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>::
    TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *)
               (pFVar4 + lVar9 + 0x38),param_3);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestFileWithHeaders @ 1432eaa10

int __thiscall
BuildPatchServices::FMockDownloadService::RequestFileWithHeaders
          (FMockDownloadService *this,FString *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                   *param_3,
          TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001432eaa1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 8))(this,param_1,param_3,param_4);
  return iVar1;
}

