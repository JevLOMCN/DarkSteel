// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 11

// FTestSharingInterface @ 14ecd86c0

/* WARNING: Enum "Type": Some values do not have unique names */

FTestSharingInterface * __thiscall
FTestSharingInterface::FTestSharingInterface(FTestSharingInterface *this,FString *param_1)

{
  FString local_18;
  
  (this->SubsystemName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsystemName).Data.ArrayNum = 0;
  (this->SubsystemName).Data.ArrayMax = 0;
  (this->SharingInterface).Object = (IOnlineSharing *)0x0;
  (this->SharingInterface).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  ::FString::FString(&(this->TestStatusUpdate).Type,L"Default");
  (this->TestStatusUpdate).Message.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestStatusUpdate).Message.Data.ArrayNum = 0;
  (this->TestStatusUpdate).Message.Data.ArrayMax = 0;
  (this->TestStatusUpdate).Image = (FImage *)0x0;
  (this->TestStatusUpdate).TaggedFriends.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TestStatusUpdate).TaggedFriends.ArrayNum = 0;
  (this->TestStatusUpdate).TaggedFriends.ArrayMax = 0;
  (this->TestStatusUpdate).PostPrivacy = OnlyMe;
  *(undefined8 *)&this->RequestPermissionsToPostToFeedDelegate = 0;
  *(undefined8 *)&(this->RequestPermissionsToPostToFeedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RequestPermissionsToPostToFeedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RequestPermissionsToPostToFeedDelegateHandles = 0;
  *(undefined8 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x34 = 0;
  *(undefined8 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x48 = 0;
  *(undefined8 *)&this->RequestPermissionsToReadFeedDelegate = 0;
  *(undefined8 *)&(this->RequestPermissionsToReadFeedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->RequestPermissionsToReadFeedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->RequestPermissionsToReadFeedDelegateHandles = 0;
  *(undefined8 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x34 = 0;
  *(undefined8 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x48 = 0;
  *(undefined8 *)&this->OnPostSharedDelegate = 0;
  *(undefined8 *)&(this->OnPostSharedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostSharedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnPostSharedDelegateHandles = 0;
  *(undefined8 *)&(this->OnPostSharedDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OnPostSharedDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OnPostSharedDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OnPostSharedDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnPostSharedDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnPostSharedDelegateHandles).field_0x34 = 0;
  *(undefined8 *)&(this->OnPostSharedDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OnPostSharedDelegateHandles).field_0x48 = 0;
  *(undefined8 *)&this->OnNewsFeedReadDelegate = 0;
  *(undefined8 *)&(this->OnNewsFeedReadDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnNewsFeedReadDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnNewsFeedReadDelegateHandles = 0;
  *(undefined8 *)&(this->OnNewsFeedReadDelegateHandles).field_0x8 = 0;
  *(undefined8 *)&(this->OnNewsFeedReadDelegateHandles).field_0x20 = 0;
  *(undefined4 *)&(this->OnNewsFeedReadDelegateHandles).field_0x28 = 0;
  *(undefined4 *)&(this->OnNewsFeedReadDelegateHandles).field_0x2c = 0x80;
  *(undefined4 *)&(this->OnNewsFeedReadDelegateHandles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnNewsFeedReadDelegateHandles).field_0x34 = 0;
  *(undefined8 *)&(this->OnNewsFeedReadDelegateHandles).field_0x40 = 0;
  *(undefined4 *)&(this->OnNewsFeedReadDelegateHandles).field_0x48 = 0;
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestSharingInterface::FTestSharingInterface");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::operator=(&this->SubsystemName,param_1);
  return this;
}

// ~FTestSharingInterface @ 14ecdb490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestSharingInterface::~FTestSharingInterface(FTestSharingInterface *this)

{
  FImage *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FString local_18;
  
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestSharingInterface::~FTestSharingInterface");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar1 = (this->TestStatusUpdate).Image;
  if (pFVar1 != (FImage *)0x0) {
    pFVar2 = (pFVar1->RawData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
    (this->TestStatusUpdate).Image = (FImage *)0x0;
  }
  *(undefined4 *)&(this->OnNewsFeedReadDelegateHandles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->OnNewsFeedReadDelegateHandles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnNewsFeedReadDelegateHandles);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNewsFeedReadDelegate);
  pvVar3 = *(void **)&(this->OnNewsFeedReadDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNewsFeedReadDelegate);
  *(undefined4 *)&(this->OnPostSharedDelegateHandles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->OnPostSharedDelegateHandles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OnPostSharedDelegateHandles);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostSharedDelegate);
  pvVar3 = *(void **)&(this->OnPostSharedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostSharedDelegate);
  *(undefined4 *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequestPermissionsToReadFeedDelegateHandles);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->RequestPermissionsToReadFeedDelegate);
  pvVar3 = *(void **)&(this->RequestPermissionsToReadFeedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestPermissionsToReadFeedDelegate);
  *(undefined4 *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDelegateHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequestPermissionsToPostToFeedDelegateHandles);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->RequestPermissionsToPostToFeedDelegate);
  pvVar3 = *(void **)&(this->RequestPermissionsToPostToFeedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RequestPermissionsToPostToFeedDelegate);
  DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>
            ((TSharedRef<FUniqueNetId_const_,1> *)
             (this->TestStatusUpdate).TaggedFriends.AllocatorInstance.Data,
             (this->TestStatusUpdate).TaggedFriends.ArrayNum);
  pFVar2 = (this->TestStatusUpdate).TaggedFriends.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TestStatusUpdate).Message.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TestStatusUpdate).Type.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharingInterface).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// OnNewsFeedRead @ 14ecedcf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestSharingInterface::OnNewsFeedRead(FTestSharingInterface *this,int param_1,bool param_2)

{
  longlong lVar1;
  IOnlineSharing *pIVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  FOnlineStatusUpdate *local_c8;
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  void *local_58;
  undefined8 local_50;
  undefined8 local_48;
  TSharedRef<FUniqueNetId_const_,1> *pTStack_40;
  undefined8 local_38;
  undefined1 local_30;
  
  if (3 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl
              (&local_b8,L"FTestSharingInterface::OnNewsFeedRead[PlayerIdx:%i - Successful:%i]");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
  }
  uVar10 = 0;
  if (param_2) {
    ::FString::FString(&local_68,L"Default");
    local_58 = (void *)0x0;
    local_48 = 0;
    pTStack_40 = (TSharedRef<FUniqueNetId_const_,1> *)0x0;
    local_50 = 0;
    local_38 = 0;
    local_30 = 0;
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (this->SharingInterface).Object;
    (**(code **)(pIVar2->_padding_ + 0x90))(pIVar2,param_1,0,&local_68);
    if (3 < (byte)LogOnlineSharing._0_1_) {
      ::FString::PrintfImpl(&local_a8,L"FTestSharingInterface first read update: %s");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    local_c8 = (FOnlineStatusUpdate *)0x0;
    local_c0 = 0;
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (this->SharingInterface).Object;
    (**(code **)(pIVar2->_padding_ + 0x98))(pIVar2,param_1,&local_c8);
    if (3 < (byte)LogOnlineSharing._0_1_) {
      ::FString::PrintfImpl(&local_98,L"FTestSharingInterface number of read updates: %d");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    uVar9 = uVar10;
    if (0 < (int)local_c0) {
      do {
        uVar8 = (uint)uVar9;
        uVar5 = 0;
        if ((int)uVar8 < (int)local_c0) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (3 < (byte)LogOnlineSharing._0_1_) {
          ::FString::PrintfImpl(&local_88,L"FTestSharingInterface status update [%d]: %s");
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        uVar9 = (ulonglong)(uVar8 + 1);
      } while ((int)(uVar8 + 1) < (int)local_c0);
    }
    DestructItems<FOnlineStatusUpdate,int>(local_c8,(int)local_c0);
    if (local_c8 != (FOnlineStatusUpdate *)0x0) {
      FMemory::Free(local_c8);
    }
    DestructItems<TSharedRef<FUniqueNetId_const_,1>,int>(pTStack_40,(int)local_38);
    if (pTStack_40 != (TSharedRef<FUniqueNetId_const_,1> *)0x0) {
      FMemory::Free(pTStack_40);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->OnNewsFeedReadDelegateHandles).field_0x8 !=
      *(int *)&(this->OnNewsFeedReadDelegateHandles).field_0x34) {
    puVar7 = *(undefined1 **)&(this->OnNewsFeedReadDelegateHandles).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->OnNewsFeedReadDelegateHandles).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->OnNewsFeedReadDelegateHandles).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)&this->OnNewsFeedReadDelegateHandles + (longlong)iVar6 * 0x18;
        if (*(int *)(*(longlong *)&this->OnNewsFeedReadDelegateHandles + (longlong)iVar6 * 0x18) ==
            param_1) {
          uVar10 = 0;
          if (lVar1 != 0) {
            uVar10 = *(ulonglong *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_res8 = uVar10;
  if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar2 = (this->SharingInterface).Object;
  (**(code **)(pIVar2->_padding_ + 0x70))(pIVar2,param_1,&local_res8);
  this->ResponsesReceived = this->ResponsesReceived + 1;
  if (this->ResponsesReceived == 4) {
    if (3 < (byte)LogOnlineSharing._0_1_) {
      ::FString::PrintfImpl(&local_78,L"FTestSharingInterface TESTS COMPLETED");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    ~FTestSharingInterface(this);
    ::operator_delete(this,0x208);
  }
  return;
}

// OnPostShared @ 14ecee270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestSharingInterface::OnPostShared(FTestSharingInterface *this,int param_1,bool param_2)

{
  longlong lVar1;
  longlong lVar2;
  IOnlineSharing *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 local_res8;
  int local_res10 [2];
  FString local_18;
  
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl
              (&local_18,L"FTestSharingInterface::OnPostShared[PlayerIdx:%i - Successful:%i]");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->OnPostSharedDelegateHandles).field_0x8 !=
      *(int *)&(this->OnPostSharedDelegateHandles).field_0x34) {
    puVar7 = *(undefined1 **)&(this->OnPostSharedDelegateHandles).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->OnPostSharedDelegateHandles).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->OnPostSharedDelegateHandles).field_0x48 - 1U &
                              param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->OnPostSharedDelegateHandles).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            local_res8 = *(undefined8 *)(lVar1 + 8);
            goto LAB_14ecee32e;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_res8 = 0;
LAB_14ecee32e:
  if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar3 = (this->SharingInterface).Object;
  (**(code **)(pIVar3->_padding_ + 0xa8))(pIVar3,param_1,&local_res8);
  local_res10[0] = param_1;
  if (*(int *)&(this->OnPostSharedDelegateHandles).field_0x8 !=
      *(int *)&(this->OnPostSharedDelegateHandles).field_0x34) {
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                       *)&this->OnPostSharedDelegateHandles,param_1,local_res10);
  }
  this->ResponsesReceived = this->ResponsesReceived + 1;
  if (this->ResponsesReceived == 4) {
    RequestPermissionsToReadNewsFeed(this);
  }
  return;
}

// OnReadFeedPermissionsUpdated @ 14ecf1fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestSharingInterface::OnReadFeedPermissionsUpdated
          (FTestSharingInterface *this,int param_1,bool param_2)

{
  longlong lVar1;
  longlong lVar2;
  IOnlineSharing *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 local_res8;
  int local_res10 [2];
  FString local_18;
  
  if (3 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestSharingInterface::OnReadFeedPermissionsUpdated() - %d");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x8 !=
      *(int *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x34) {
    puVar7 = *(undefined1 **)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RequestPermissionsToReadFeedDelegateHandles).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->RequestPermissionsToReadFeedDelegateHandles).
                                        field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            local_res8 = *(undefined8 *)(lVar1 + 8);
            goto LAB_14ecf206d;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_res8 = 0;
LAB_14ecf206d:
  if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar3 = (this->SharingInterface).Object;
  (**(code **)(pIVar3->_padding_ + 0x20))(pIVar3,param_1,&local_res8);
  local_res10[0] = param_1;
  if (*(int *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x8 !=
      *(int *)&(this->RequestPermissionsToReadFeedDelegateHandles).field_0x34) {
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                       *)&this->RequestPermissionsToReadFeedDelegateHandles,param_1,local_res10);
  }
  this->ResponsesReceived = this->ResponsesReceived + 1;
  if (this->ResponsesReceived == 4) {
    ReadNewsFeed(this);
  }
  return;
}

// OnStatusPostingPermissionsUpdated @ 14ecf36a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestSharingInterface::OnStatusPostingPermissionsUpdated
          (FTestSharingInterface *this,int param_1,bool param_2)

{
  longlong lVar1;
  longlong lVar2;
  IOnlineSharing *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 local_res8;
  int local_res10 [2];
  FString local_18;
  
  if (3 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl
              (&local_18,L"FTestSharingInterface::OnStatusPostingPermissionsUpdated() - %d");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (*(int *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x8 !=
      *(int *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x34) {
    puVar7 = *(undefined1 **)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x38;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->RequestPermissionsToPostToFeedDelegateHandles).
                                        field_0x48 - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            local_res8 = *(undefined8 *)(lVar1 + 8);
            goto LAB_14ecf375d;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  local_res8 = 0;
LAB_14ecf375d:
  if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pIVar3 = (this->SharingInterface).Object;
  (**(code **)(pIVar3->_padding_ + 0x48))(pIVar3,param_1,&local_res8);
  local_res10[0] = param_1;
  if (*(int *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x8 !=
      *(int *)&(this->RequestPermissionsToPostToFeedDelegateHandles).field_0x34) {
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                       *)&this->RequestPermissionsToPostToFeedDelegateHandles,param_1,local_res10);
  }
  this->ResponsesReceived = this->ResponsesReceived + 1;
  if (this->ResponsesReceived == 4) {
    SharePost(this);
  }
  return;
}

// ReadNewsFeed @ 14ecf7090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestSharingInterface::ReadNewsFeed(FTestSharingInterface *this)

{
  IOnlineSharing *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  int local_res8 [2];
  TPairInitializer<int_const_&,FDelegateHandle_&&> local_res10;
  FString local_98;
  int *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_98,L"FTestSharingInterface::ReadNewsFeed");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  this->ResponsesReceived = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestSharingInterface____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnNewsFeedRead;
    puVar4[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNewsFeedReadDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  local_res8[0] = 0;
  while( true ) {
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->SharingInterface).Object;
    local_88 = local_res8;
    local_80 = (**(code **)(pIVar1->_padding_ + 0x68))
                         (pIVar1,&local_res10.Value,local_res8[0],&this->OnNewsFeedReadDelegate);
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
              ((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                *)&this->OnNewsFeedReadDelegateHandles,&local_res10,(bool *)&local_88);
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    pIVar1 = (this->SharingInterface).Object;
    (**(code **)(pIVar1->_padding_ + 0x88))(pIVar1,local_res8[0],0x32);
    local_res8[0] = local_res8[0] + 1;
    if (3 < local_res8[0]) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RequestPermissionsToReadNewsFeed @ 14ecf8da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestSharingInterface::RequestPermissionsToReadNewsFeed(FTestSharingInterface *this)

{
  IOnlineSharing *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  int local_res8 [2];
  TPairInitializer<int_const_&,FDelegateHandle_&&> local_res10;
  FString local_98;
  int *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_98,L"FTestSharingInterface::RequestPermissionsToReadNewsFeed");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  this->ResponsesReceived = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestSharingInterface____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnReadFeedPermissionsUpdated;
    puVar4[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->RequestPermissionsToReadFeedDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  local_res8[0] = 0;
  while( true ) {
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->SharingInterface).Object;
    local_88 = local_res8;
    local_80 = (**(code **)(pIVar1->_padding_ + 0x18))
                         (pIVar1,&local_res10.Value,local_res8[0],
                          &this->RequestPermissionsToReadFeedDelegate);
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
              ((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                *)&this->RequestPermissionsToReadFeedDelegateHandles,&local_res10,(bool *)&local_88)
    ;
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    pIVar1 = (this->SharingInterface).Object;
    (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1,local_res8[0],1);
    local_res8[0] = local_res8[0] + 1;
    if (3 < local_res8[0]) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RequestPermissionsToSharePosts @ 14ecf8fd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestSharingInterface::RequestPermissionsToSharePosts(FTestSharingInterface *this)

{
  IOnlineSharing *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  int local_res8 [2];
  TPairInitializer<int_const_&,FDelegateHandle_&&> local_res10;
  FString local_98;
  int *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_98,L"FTestSharingInterface::RequestPermissionsToSharePosts");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  this->ResponsesReceived = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestSharingInterface____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnStatusPostingPermissionsUpdated;
    puVar4[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->RequestPermissionsToPostToFeedDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  local_res8[0] = 0;
  while( true ) {
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->SharingInterface).Object;
    local_88 = local_res8;
    local_80 = (**(code **)(pIVar1->_padding_ + 0x40))
                         (pIVar1,&local_res10.Value,local_res8[0],
                          &this->RequestPermissionsToPostToFeedDelegate);
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
              ((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                *)&this->RequestPermissionsToPostToFeedDelegateHandles,&local_res10,
               (bool *)&local_88);
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    pIVar1 = (this->SharingInterface).Object;
    (**(code **)(pIVar1->_padding_ + 0x60))
              (pIVar1,local_res8[0],0x10000,(this->TestStatusUpdate).PostPrivacy);
    local_res8[0] = local_res8[0] + 1;
    if (3 < local_res8[0]) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SharePost @ 14ecf9e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestSharingInterface::SharePost(FTestSharingInterface *this)

{
  IOnlineSharing *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  int local_res8 [2];
  TPairInitializer<int_const_&,FDelegateHandle_&&> local_res10;
  FString local_98;
  int *local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_98,L"FTestSharingInterface::SharePost");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  this->ResponsesReceived = 0;
  local_78 = (undefined1  [8])0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar4 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestSharingInterface____A6AXH_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar4[4] = OnPostShared;
    puVar4[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostSharedDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  local_res8[0] = 0;
  while( true ) {
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->SharingInterface).Object;
    local_88 = local_res8;
    local_80 = (**(code **)(pIVar1->_padding_ + 0xa0))
                         (pIVar1,&local_res10.Value,local_res8[0],&this->OnPostSharedDelegate);
    TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FDelegateHandle_&&>_>
              ((TSet<TTuple<int,FDelegateHandle>,TDefaultMapHashableKeyFuncs<int,FDelegateHandle,0>,FDefaultSetAllocator>
                *)&this->OnPostSharedDelegateHandles,&local_res10,(bool *)&local_88);
    if (((this->SharingInterface).Object == (IOnlineSharing *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) break;
    pIVar1 = (this->SharingInterface).Object;
    (**(code **)(pIVar1->_padding_ + 0xc0))(pIVar1,local_res8[0],&this->TestStatusUpdate);
    local_res8[0] = local_res8[0] + 1;
    if (3 < local_res8[0]) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// Test @ 14ed000a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestSharingInterface::Test(FTestSharingInterface *this,UWorld *param_1,bool param_2)

{
  TSharedPtr<IOnlineSharing,1> *pTVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  undefined8 *puVar8;
  FDateTime this_00;
  FImage *this_01;
  wchar_t *pwVar9;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  undefined1 local_38 [8];
  TReferenceControllerBase<1> *local_30;
  FString local_28;
  
  if (5 < (byte)LogOnlineSharing._0_1_) {
    ::FString::PrintfImpl(&local_58,L"FTestSharingInterface::Test");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if ((this->SubsystemName).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data;
  }
  pFVar6 = ::FName::FName(&local_res8,pwVar9);
  pIVar7 = IOnlineSubsystem::Get(pFVar6);
  if ((pIVar7 == (IOnlineSubsystem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OnlineSub",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestSharingInterface.cpp"
                         ,0x22,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar8 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0xb0))(pIVar7,local_38);
  pTVar1 = &this->SharingInterface;
  if (pTVar1 != (TSharedPtr<IOnlineSharing,1> *)puVar8) {
    pTVar1->Object = (IOnlineSharing *)*puVar8;
    *puVar8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SharingInterface).SharedReferenceCount,(FSharedReferencer<1> *)(puVar8 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  if (pTVar1->Object == (IOnlineSharing *)0x0) {
    if (3 < (byte)LogOnlineSharing._0_1_) {
      ::FString::PrintfImpl
                (&local_48,
                 L"FTestSharingInterface TESTS SKIPPED. Sharing Interface implementation not found")
      ;
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineSharing);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    ~FTestSharingInterface(this);
    ::operator_delete(this,0x208);
  }
  else {
    this_00 = FDateTime::Now();
    FDateTime::ToString((FDateTime *)this_00.Ticks,&local_28);
    ::FString::PrintfImpl(&local_68,L"This is a test post for UE Sharing support! Date = %s");
    pFVar2 = &(this->TestStatusUpdate).Message;
    if (pFVar2 != &local_68) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (pFVar2->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (this->TestStatusUpdate).Message.Data.ArrayNum = local_68.Data.ArrayNum;
      (this->TestStatusUpdate).Message.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    (this->TestStatusUpdate).PostPrivacy = OnlyMe;
    if (param_2) {
      this_01 = ::operator_new(0x28);
      if (this_01 != (FImage *)0x0) {
        FImage::FImage(this_01,0x100,0x100,1,BGRA8,Linear);
        (this->TestStatusUpdate).Image = this_01;
        RequestPermissionsToSharePosts(this);
        return;
      }
      (this->TestStatusUpdate).Image = (FImage *)0x0;
    }
    RequestPermissionsToSharePosts(this);
  }
  return;
}

