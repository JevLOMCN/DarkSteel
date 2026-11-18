// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 18

// FNullVirtualizationSystem @ 141a71aa0

/* WARNING: Enum "Type": Some values do not have unique names */

FNullVirtualizationSystem * __thiscall
UE::Virtualization::FNullVirtualizationSystem::FNullVirtualizationSystem
          (FNullVirtualizationSystem *this)

{
  this->_padding_ = (longlong)&___7FNullVirtualizationSystem_Virtualization_UE__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->NotificationEvent,4000);
  *(undefined8 *)&(this->NotificationEvent).field_0x38 = 2;
  *(undefined8 *)&(this->NotificationEvent).field_0x28 = 0;
  *(undefined8 *)&(this->NotificationEvent).field_0x30 = 0;
  if (3 < (byte)LogVirtualization._0_1_) {
    Logging::Private::BasicLog<4>
              (&`public:___cdecl_UE::Virtualization::FNullVirtualizationSystem::FNullVirtualizationSystem(void)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogVirtualization);
  }
  return this;
}

// ~FNullVirtualizationSystem @ 141a72ce0

void __thiscall
UE::Virtualization::FNullVirtualizationSystem::~FNullVirtualizationSystem
          (FNullVirtualizationSystem *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->NotificationEvent).field_0x28,*(int *)&(this->NotificationEvent).field_0x30);
  pvVar1 = *(void **)&(this->NotificationEvent).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000141a72d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->NotificationEvent);
  return;
}

// AllowSubmitIfVirtualizationFailed @ 141a75890

bool __thiscall
UE::Virtualization::FNullVirtualizationSystem::AllowSubmitIfVirtualizationFailed
          (FNullVirtualizationSystem *this)

{
  return false;
}

// DumpStats @ 141a7e3c0

void __thiscall
UE::Virtualization::FNullVirtualizationSystem::DumpStats(FNullVirtualizationSystem *this)

{
  return;
}

// FilterPayload @ 141a7eb40

EPayloadFilterReason __thiscall
UE::Virtualization::FNullVirtualizationSystem::FilterPayload
          (FNullVirtualizationSystem *this,UObject *param_1)

{
  return None;
}

// GatherAnalytics @ 141a80490

void __thiscall
UE::Virtualization::FNullVirtualizationSystem::GatherAnalytics
          (FNullVirtualizationSystem *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// GetBackendStatistics @ 141a80830

TArray<UE::Virtualization::FBackendStats,TSizedDefaultAllocator<32>_> * __thiscall
UE::Virtualization::FNullVirtualizationSystem::GetBackendStatistics
          (FNullVirtualizationSystem *this,
          TArray<UE::Virtualization::FBackendStats,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetNotificationEvent @ 141a80eb0

TMulticastDelegate<void___cdecl(UE::Virtualization::IVirtualizationSystem::ENotification,FIoHash_const_&),FDefaultTSDelegateUserPolicy>
* __thiscall
UE::Virtualization::FNullVirtualizationSystem::GetNotificationEvent(FNullVirtualizationSystem *this)

{
  return &this->NotificationEvent;
}

// GetSystemStatistics @ 141a829d0

FPayloadActivityInfo * __thiscall
UE::Virtualization::FNullVirtualizationSystem::GetSystemStatistics
          (FNullVirtualizationSystem *this,FPayloadActivityInfo *__return_storage_ptr__)

{
  (__return_storage_ptr__->Pull).PayloadCount = 0;
  (__return_storage_ptr__->Pull).TotalBytes = 0;
  (__return_storage_ptr__->Pull).CyclesSpent = 0;
  (__return_storage_ptr__->Push).PayloadCount = 0;
  (__return_storage_ptr__->Push).TotalBytes = 0;
  (__return_storage_ptr__->Push).CyclesSpent = 0;
  (__return_storage_ptr__->Cache).PayloadCount = 0;
  (__return_storage_ptr__->Cache).TotalBytes = 0;
  (__return_storage_ptr__->Cache).CyclesSpent = 0;
  return __return_storage_ptr__;
}

// Initialize @ 141a834e0

bool __thiscall
UE::Virtualization::FNullVirtualizationSystem::Initialize
          (FNullVirtualizationSystem *this,FInitParams *param_1)

{
  return true;
}

// IsEnabled @ 141a84860

bool __thiscall
UE::Virtualization::FNullVirtualizationSystem::IsEnabled(FNullVirtualizationSystem *this)

{
  return false;
}

// IsPushingEnabled @ 141a84c80

bool __thiscall
UE::Virtualization::FNullVirtualizationSystem::IsPushingEnabled
          (FNullVirtualizationSystem *this,EStorageType param_1)

{
  return false;
}

// PullData @ 141a8dff0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Virtualization::FNullVirtualizationSystem::PullData
          (FNullVirtualizationSystem *this,TArrayView<UE::Virtualization::FPullRequest,int> *param_1
          )

{
  FPullRequest *pFVar1;
  FPullRequest *pFVar2;
  FString local_18;
  
  pFVar1 = param_1->DataPtr;
  pFVar2 = pFVar1 + param_1->ArrayNum;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
    if (1 < (byte)LogVirtualization._0_1_) {
      ::LexToString(&local_18,&pFVar1->Identifier);
      Logging::Private::BasicLog<2>
                (&`public:_virtual_bool___cdecl_UE::Virtualization::FNullVirtualizationSystem::PullData(TArrayView<UE::Virtualization::FPullRequest,int>)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogVirtualization);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return false;
}

// PushData @ 141a8e300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Virtualization::FNullVirtualizationSystem::PushData
          (FNullVirtualizationSystem *this,TArrayView<UE::Virtualization::FPushRequest,int> *param_1
          ,EStorageType param_2)

{
  if (1 < (byte)LogVirtualization._0_1_) {
    Logging::Private::BasicLog<2>
              (&`public:_virtual_bool___cdecl_UE::Virtualization::FNullVirtualizationSystem::PushData(TArrayView<UE::Virtualization::FPushRequest,int>,UE::Virtualization::EStorageType)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogVirtualization);
  }
  return false;
}

// QueryPayloadStatuses @ 141a8e3d0

EQueryResult __thiscall
UE::Virtualization::FNullVirtualizationSystem::QueryPayloadStatuses
          (FNullVirtualizationSystem *this,TArrayView<FIoHash_const_,int> *param_1,
          EStorageType param_2,
          TArray<UE::Virtualization::EPayloadStatus,TSizedDefaultAllocator<32>_> *param_3)

{
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  return Failure_NotImplemented;
}

// TryRehydratePackages @ 141a98410

FRehydrationResult * __thiscall
UE::Virtualization::FNullVirtualizationSystem::TryRehydratePackages
          (FNullVirtualizationSystem *this,FRehydrationResult *__return_storage_ptr__,
          TArrayView<FString_const_,int> *param_1,ERehydrationOptions param_2)

{
  FText *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FRehydrationResult *pFVar6;
  FText local_18;
  
  (__return_storage_ptr__->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Errors).ArrayNum = 0;
  (__return_storage_ptr__->Errors).ArrayMax = 0;
  (__return_storage_ptr__->RehydratedPackages).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RehydratedPackages).ArrayNum = 0;
  (__return_storage_ptr__->RehydratedPackages).ArrayMax = 0;
  (__return_storage_ptr__->CheckedOutPackages).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CheckedOutPackages).ArrayNum = 0;
  (__return_storage_ptr__->CheckedOutPackages).ArrayMax = 0;
  __return_storage_ptr__->TimeTaken = 0.0;
  __return_storage_ptr__->PreOperationSize = 0;
  __return_storage_ptr__->PostOperationSize = 0;
  pFVar5 = FText::FromString(&local_18,
                             L"Calling ::TryRehydratePackages on FNullVirtualizationSystem");
  pFVar1 = (FText *)(__return_storage_ptr__->Errors).AllocatorInstance.Data;
  if ((pFVar1 <= pFVar5) && (pFVar5 < pFVar1 + (__return_storage_ptr__->Errors).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRehydrationResult *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (__return_storage_ptr__->Errors).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Errors).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->Errors).ArrayMax);
  }
  (__return_storage_ptr__->Errors).ArrayNum = iVar4 + 1;
  FText::FText((FText *)((__return_storage_ptr__->Errors).AllocatorInstance.Data +
                        (longlong)iVar4 * 0x10),pFVar5);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryRehydratePackages @ 141a98520

ERehydrationResult __thiscall
UE::Virtualization::FNullVirtualizationSystem::TryRehydratePackages
          (FNullVirtualizationSystem *this,TArrayView<FString_const_,int> *param_1,ulong64 param_2,
          TArray<FText,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FSharedBuffer,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Virtualization::FRehydrationInfo,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  FText *pFVar2;
  code *pcVar3;
  bool bVar4;
  ERehydrationResult EVar5;
  int iVar6;
  FText *pFVar7;
  FText local_18;
  
  piVar1 = &param_3->ArrayMax;
  pFVar2 = (FText *)(param_3->AllocatorInstance).Data;
  if (param_3->ArrayMax < 0) {
    DestructItems<FText,int>(pFVar2,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_3->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FText,int>(pFVar2,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  pFVar7 = FText::FromString(&local_18,
                             L"Calling ::TryRehydratePackages on FNullVirtualizationSystem");
  pFVar2 = (FText *)(param_3->AllocatorInstance).Data;
  if ((pFVar2 <= pFVar7) && (pFVar7 < pFVar2 + *piVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  iVar6 = param_3->ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,piVar1);
  }
  param_3->ArrayNum = iVar6 + 1;
  FText::FText((FText *)((param_3->AllocatorInstance).Data + (longlong)iVar6 * 0x10),pFVar7);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return Failed;
}

// TryVirtualizePackages @ 141a98df0

FVirtualizationResult * __thiscall
UE::Virtualization::FNullVirtualizationSystem::TryVirtualizePackages
          (FNullVirtualizationSystem *this,FVirtualizationResult *__return_storage_ptr__,
          TArrayView<FString_const_,int> *param_1,EVirtualizationOptions param_2)

{
  FText *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FVirtualizationResult *pFVar6;
  FText local_18;
  
  (__return_storage_ptr__->Errors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Errors).ArrayNum = 0;
  (__return_storage_ptr__->Errors).ArrayMax = 0;
  (__return_storage_ptr__->DescriptionTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DescriptionTags).ArrayNum = 0;
  (__return_storage_ptr__->DescriptionTags).ArrayMax = 0;
  (__return_storage_ptr__->VirtualizedPackages).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->VirtualizedPackages).ArrayNum = 0;
  (__return_storage_ptr__->VirtualizedPackages).ArrayMax = 0;
  (__return_storage_ptr__->CheckedOutPackages).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->CheckedOutPackages).ArrayNum = 0;
  (__return_storage_ptr__->CheckedOutPackages).ArrayMax = 0;
  __return_storage_ptr__->TimeTaken = 0.0;
  __return_storage_ptr__->PreOperationSize = 0;
  __return_storage_ptr__->PostOperationSize = 0;
  pFVar5 = FText::FromString(&local_18,
                             L"Calling ::TryVirtualizePackages on FNullVirtualizationSystem");
  pFVar1 = (FText *)(__return_storage_ptr__->Errors).AllocatorInstance.Data;
  if ((pFVar1 <= pFVar5) && (pFVar5 < pFVar1 + (__return_storage_ptr__->Errors).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVirtualizationResult *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (__return_storage_ptr__->Errors).ArrayNum;
  if (iVar4 == (__return_storage_ptr__->Errors).ArrayMax) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->Errors).ArrayMax);
  }
  (__return_storage_ptr__->Errors).ArrayNum = iVar4 + 1;
  FText::FText((FText *)((__return_storage_ptr__->Errors).AllocatorInstance.Data +
                        (longlong)iVar4 * 0x10),pFVar5);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

