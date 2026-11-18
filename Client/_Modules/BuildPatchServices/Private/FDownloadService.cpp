// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// RequestAbandon @ 1432e9a20

void __thiscall
BuildPatchServices::FDownloadService::RequestAbandon(FDownloadService *this,int param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FDownloadServiceImpl *this_00;
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  
  this_00 = (this->Impl).Object;
  lpCriticalSection = &this_00->RequestDelegatesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this_00->RequestDelegates).field_0x8 !=
      *(int *)&(this_00->RequestDelegates).field_0x34) {
    puVar3 = *(undefined1 **)&(this_00->RequestDelegates).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this_00->RequestDelegates).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + ((longlong)*(int *)&(this_00->RequestDelegates).field_0x48 - 1U &
                              (longlong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this_00->RequestDelegates).field_0x0;
      do {
        if (*(int *)((longlong)iVar2 * 0x40 + lVar1) == param_1) {
          TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<int,BuildPatchServices::FDownloadDelegates>,TDefaultMapHashableKeyFuncs<int,BuildPatchServices::FDownloadDelegates,0>,FDefaultSetAllocator>
                           *)&this_00->RequestDelegates,iVar2);
          break;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x40 + 0x38 + lVar1);
      } while (iVar2 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FDownloadServiceImpl::RequestCancel(this_00,param_1);
  return;
}

// RequestCancel @ 1432e9c60

void __thiscall
BuildPatchServices::FDownloadService::RequestCancel(FDownloadService *this,int param_1)

{
  FDownloadServiceImpl::RequestCancel((this->Impl).Object,param_1);
  return;
}

// RequestFile @ 1432e9ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
BuildPatchServices::FDownloadService::RequestFile
          (FDownloadService *this,FString *param_1,
          TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *param_3
          )

{
  int iVar1;
  int iVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  iVar2 = FDownloadServiceImpl::RequestFileWithHeaders
                    ((this->Impl).Object,param_1,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_78,param_2,param_3);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return iVar2;
}

// RequestFileWithHeaders @ 1432ea0e0

int __thiscall
BuildPatchServices::FDownloadService::RequestFileWithHeaders
          (FDownloadService *this,FString *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,TDelegate<void___cdecl(int,TSharedRef<BuildPatchServices::IDownload,1>_const_&),FDefaultDelegateUserPolicy>
                   *param_3,
          TDelegate<void___cdecl(int,unsigned___int64),FDefaultDelegateUserPolicy> *param_4)

{
  int iVar1;
  
  iVar1 = FDownloadServiceImpl::RequestFileWithHeaders
                    ((this->Impl).Object,param_1,param_2,param_3,param_4);
  return iVar1;
}

