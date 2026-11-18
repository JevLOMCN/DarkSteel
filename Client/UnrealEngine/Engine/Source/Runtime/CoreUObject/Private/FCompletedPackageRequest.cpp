// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FCompletedPackageRequest @ 142308730

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FCompletedPackageRequest * __thiscall
FAsyncLoadingThread2::FCompletedPackageRequest::FCompletedPackageRequest
          (FCompletedPackageRequest *this,FCompletedPackageRequest *param_1)

{
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  FVar1;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar2;
  
  this->PackageName = param_1->PackageName;
  this->Result = param_1->Result;
  this->UPackage = param_1->UPackage;
  this->AsyncPackage = param_1->AsyncPackage;
  (this->CompletionCallbacks).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
        )0x0;
  if ((param_1->CompletionCallbacks).AllocatorInstance.SecondaryData ==
      (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
       )0x0) {
    memmove(&this->CompletionCallbacks,&param_1->CompletionCallbacks,0x10);
  }
  FVar1 = (this->CompletionCallbacks).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->CompletionCallbacks).AllocatorInstance.SecondaryData =
       (param_1->CompletionCallbacks).AllocatorInstance.SecondaryData;
  (param_1->CompletionCallbacks).AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
        )0x0;
  (this->CompletionCallbacks).ArrayNum = (param_1->CompletionCallbacks).ArrayNum;
  (this->CompletionCallbacks).ArrayMax = (param_1->CompletionCallbacks).ArrayMax;
  (param_1->CompletionCallbacks).ArrayNum = 0;
  (param_1->CompletionCallbacks).ArrayMax = 2;
  (this->ProgressCallbacks).AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0;
  if ((param_1->ProgressCallbacks).AllocatorInstance.SecondaryData ==
      (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    memmove(&this->ProgressCallbacks,&param_1->ProgressCallbacks,0x20);
  }
  FVar2 = (this->ProgressCallbacks).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->ProgressCallbacks).AllocatorInstance.SecondaryData =
       (param_1->ProgressCallbacks).AllocatorInstance.SecondaryData;
  (param_1->ProgressCallbacks).AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0;
  (this->ProgressCallbacks).ArrayNum = (param_1->ProgressCallbacks).ArrayNum;
  (this->ProgressCallbacks).ArrayMax = (param_1->ProgressCallbacks).ArrayMax;
  (param_1->ProgressCallbacks).ArrayNum = 0;
  (param_1->ProgressCallbacks).ArrayMax = 2;
  (this->RequestIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  if ((param_1->RequestIDs).AllocatorInstance.SecondaryData == (ForElementType<int>)0x0) {
    *(undefined8 *)(this->RequestIDs).AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->RequestIDs).AllocatorInstance.InlineData;
  }
  (this->RequestIDs).AllocatorInstance.SecondaryData =
       (param_1->RequestIDs).AllocatorInstance.SecondaryData;
  (param_1->RequestIDs).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  (this->RequestIDs).ArrayNum = (param_1->RequestIDs).ArrayNum;
  (this->RequestIDs).ArrayMax = (param_1->RequestIDs).ArrayMax;
  (param_1->RequestIDs).ArrayNum = 0;
  (param_1->RequestIDs).ArrayMax = 2;
  return this;
}

// ~FCompletedPackageRequest @ 14230a690

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAsyncLoadingThread2::FCompletedPackageRequest::~FCompletedPackageRequest
          (FCompletedPackageRequest *this)

{
  ForElementType<int> FVar1;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar2;
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  FVar3;
  
  FVar1 = (this->RequestIDs).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar2 = (this->ProgressCallbacks).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FVar2 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
            &this->ProgressCallbacks;
  }
  DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
            ((TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)FVar2,
             (this->ProgressCallbacks).ArrayNum);
  FVar2 = (this->ProgressCallbacks).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar3 = (this->CompletionCallbacks).AllocatorInstance.SecondaryData;
  if (FVar3 == (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                )0x0) {
    FVar3 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
             )&this->CompletionCallbacks;
  }
  DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
            ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
              *)FVar3,(this->CompletionCallbacks).ArrayNum);
  FVar3 = (this->CompletionCallbacks).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  return;
}

// FromUnreslovedPackage @ 1423260c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FCompletedPackageRequest * __cdecl
FAsyncLoadingThread2::FCompletedPackageRequest::FromUnreslovedPackage
          (FCompletedPackageRequest *__return_storage_ptr__,FAsyncPackageDesc2 *param_1,Type param_2
          ,TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
           *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FCompletedPackageRequest *pFVar4;
  ForElementType<int> FVar5;
  longlong lVar6;
  ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_> FVar7;
  ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
  FVar8;
  undefined1 auStack_108 [32];
  FAsyncPackageDesc2 *local_e8;
  ForElementType<int> local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  FCompletedPackageRequest local_b8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b8.PackageName = param_1->UPackageName;
  local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData =
       (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
        )0x0;
  local_b8.CompletionCallbacks.ArrayMax = 2;
  local_b8.CompletionCallbacks.ArrayNum = 0;
  local_b8.ProgressCallbacks.AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0;
  local_b8.ProgressCallbacks.ArrayNum = 0;
  local_b8.ProgressCallbacks.ArrayMax = 2;
  local_b8.RequestIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_b8.RequestIDs.ArrayNum = 0;
  local_b8.RequestIDs.ArrayMax = 2;
  local_b8.UPackage = (UPackage *)0x0;
  local_b8.AsyncPackage = (FAsyncPackage2 *)0x0;
  iVar3 = 0;
  local_b8.Result = param_2;
  if ((&local_b8.CompletionCallbacks <= param_3) &&
     (iVar3 = 0, param_3 < &local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData)) {
    local_c8 = 8;
    local_e0 = (ForElementType<int>)&local_b8.CompletionCallbacks;
    local_d0 = 0;
    local_d8 = 2;
    local_e8 = (FAsyncPackageDesc2 *)param_3;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FCompletedPackageRequest *)(*pcVar1)();
      return pFVar4;
    }
    iVar3 = local_b8.CompletionCallbacks.ArrayNum;
    if (local_b8.CompletionCallbacks.ArrayNum == local_b8.CompletionCallbacks.ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>_>
                        (0x808,&local_b8.CompletionCallbacks.AllocatorInstance,
                         &local_b8.CompletionCallbacks.ArrayMax);
    }
  }
  local_b8.CompletionCallbacks.ArrayNum = iVar3 + 1;
  FVar8 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
           )&local_b8.CompletionCallbacks;
  if (local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
       )0x0) {
    FVar8 = local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData;
  }
  ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
    *)((longlong)FVar8 + (longlong)iVar3 * 8))->Ptr = param_3->Ptr;
  param_3->Ptr = (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                  *)0x0;
  FVar5 = (ForElementType<int>)&local_b8.RequestIDs;
  if (local_b8.RequestIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar5 = local_b8.RequestIDs.AllocatorInstance.SecondaryData;
  }
  if ((ulonglong)FVar5 <= param_1) {
    FVar5 = (ForElementType<int>)&local_b8.RequestIDs;
    if (local_b8.RequestIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FVar5 = local_b8.RequestIDs.AllocatorInstance.SecondaryData;
    }
    if (param_1 < (FAsyncPackageDesc2 *)
                  ((longlong)FVar5 + (longlong)local_b8.RequestIDs.ArrayMax * 4)) {
      local_d0 = (longlong)local_b8.RequestIDs.ArrayNum;
      local_c8 = 4;
      local_e0 = (ForElementType<int>)&local_b8.RequestIDs;
      if (local_b8.RequestIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        local_e0 = local_b8.RequestIDs.AllocatorInstance.SecondaryData;
      }
      local_e8 = param_1;
      local_d8 = (longlong)local_b8.RequestIDs.ArrayMax;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCompletedPackageRequest *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  if (local_b8.RequestIDs.ArrayNum == local_b8.RequestIDs.ArrayMax) {
    local_b8.RequestIDs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                   (0x404,&local_b8.RequestIDs.AllocatorInstance,&local_b8.RequestIDs.ArrayMax);
  }
  lVar6 = (longlong)local_b8.RequestIDs.ArrayNum;
  FVar5 = (ForElementType<int>)&local_b8.RequestIDs;
  if (local_b8.RequestIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar5 = local_b8.RequestIDs.AllocatorInstance.SecondaryData;
  }
  local_b8.RequestIDs.ArrayNum = local_b8.RequestIDs.ArrayNum + 1;
  *(int *)((longlong)FVar5 + lVar6 * 4) = param_1->RequestID;
  FCompletedPackageRequest(__return_storage_ptr__,&local_b8);
  if (local_b8.RequestIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_b8.RequestIDs.AllocatorInstance.SecondaryData);
  }
  FVar7 = (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)
          &local_b8.ProgressCallbacks;
  if (local_b8.ProgressCallbacks.AllocatorInstance.SecondaryData !=
      (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FVar7 = local_b8.ProgressCallbacks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>,int>
            ((TSharedPtr<FLoadPackageAsyncProgressDelegate,1> *)FVar7,
             local_b8.ProgressCallbacks.ArrayNum);
  if (local_b8.ProgressCallbacks.AllocatorInstance.SecondaryData !=
      (ForElementType<TSharedPtr<FLoadPackageAsyncProgressDelegate,1>_>)0x0) {
    FMemory::Free((void *)local_b8.ProgressCallbacks.AllocatorInstance.SecondaryData);
  }
  FVar8 = (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
           )&local_b8.CompletionCallbacks;
  if (local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
       )0x0) {
    FVar8 = local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData;
  }
  DestructItems<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>,int>
            ((TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>
              *)FVar8,local_b8.CompletionCallbacks.ArrayNum);
  if (local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData !=
      (ForElementType<TUniquePtr<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>,TDefaultDelete<TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>_>_>_>
       )0x0) {
    FMemory::Free((void *)local_b8.CompletionCallbacks.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

