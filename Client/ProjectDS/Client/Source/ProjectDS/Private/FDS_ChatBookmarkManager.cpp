// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// Clear @ 14b9e2c70

void __thiscall FDS_ChatBookmarkManager::Clear(FDS_ChatBookmarkManager *this)

{
  int *piVar1;
  
  DestructItems<TSharedPtr<FDS_ChatBookmarkData,1>,int>
            ((TSharedPtr<FDS_ChatBookmarkData,1> *)(this->BookmarkDatas).AllocatorInstance.Data,
             (this->BookmarkDatas).ArrayNum);
  piVar1 = &(this->BookmarkDatas).ArrayMax;
  (this->BookmarkDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->BookmarkDatas).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetBookmarkCount @ 14b9eccc0

int __thiscall FDS_ChatBookmarkManager::GetBookmarkCount(FDS_ChatBookmarkManager *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BookmarkDatas).ArrayNum;
  iVar5 = 0;
  pFVar6 = (this->BookmarkDatas).AllocatorInstance.Data;
  pFVar4 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BookmarkDatas).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ChatBookmarkData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar4) break;
    piVar2 = *(int **)pFVar6;
    if ((((piVar2 != (int *)0x0) && ((char)piVar2[1] != '\0')) && (-1 < *piVar2)) &&
       (-1 < piVar2[2])) {
      iVar3 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
      if (*piVar2 < iVar3) {
        iVar5 = iVar5 + 1;
      }
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return iVar5;
}

// GetBookmarkData @ 14b9ece10

TSharedPtr<FDS_ChatBookmarkData,1> * __thiscall
FDS_ChatBookmarkManager::GetBookmarkData
          (FDS_ChatBookmarkManager *this,TSharedPtr<FDS_ChatBookmarkData,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ChatBookmarkData,1> *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1 < 0) || ((this->BookmarkDatas).ArrayNum <= param_1)) {
    __return_storage_ptr__->Object = (FDS_ChatBookmarkData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->BookmarkDatas).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FDS_ChatBookmarkData,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar6 = (this->BookmarkDatas).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    __return_storage_ptr__->Object = *(FDS_ChatBookmarkData **)pFVar6;
    pTVar1 = *(TReferenceControllerBase<1> **)(pFVar6 + 8);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetBookmarkData @ 14b9ecee0

TSharedPtr<FDS_ChatBookmarkData,1> * __thiscall
FDS_ChatBookmarkManager::GetBookmarkData
          (FDS_ChatBookmarkManager *this,TSharedPtr<FDS_ChatBookmarkData,1> *__return_storage_ptr__,
          EDS_ChattingTabType param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FDS_ChatBookmarkData,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->BookmarkDatas).ArrayNum;
  pFVar8 = (this->BookmarkDatas).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->BookmarkDatas).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FDS_ChatBookmarkData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    piVar2 = *(int **)pFVar8;
    if ((((piVar2 != (int *)0x0) && ((char)piVar2[1] != '\0')) && (-1 < *piVar2)) &&
       ((-1 < piVar2[2] &&
        (iVar6 = DS_CommonDataHelper::ChattingMaxFavoriteCount(), *piVar2 < iVar6)))) {
      if ((*(longlong *)pFVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSharedPtr<FDS_ChatBookmarkData,1> *)(*pcVar4)();
        return pTVar7;
      }
      if (*(EDS_ChattingTabType *)(*(longlong *)pFVar8 + 4) == param_1) {
        if ((*(longlong *)pFVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FDS_ChatBookmarkData,1> *)(*pcVar4)();
          return pTVar7;
        }
        if ((*(FDS_ChatBookmarkData **)pFVar8)->SubTabIndex == param_2) {
          __return_storage_ptr__->Object = *(FDS_ChatBookmarkData **)pFVar8;
          pTVar3 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          return __return_storage_ptr__;
        }
      }
    }
    pFVar8 = pFVar8 + 0x10;
  }
  __return_storage_ptr__->Object = (FDS_ChatBookmarkData *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEmptyBookmarkIndex @ 14b9efca0

int __thiscall FDS_ChatBookmarkManager::GetEmptyBookmarkIndex(FDS_ChatBookmarkManager *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->BookmarkDatas).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->BookmarkDatas).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      piVar1 = *(int **)((this->BookmarkDatas).AllocatorInstance.Data + lVar7);
      if (piVar1 != (int *)0x0) {
        if ((char)piVar1[1] == '\0') {
          return uVar6;
        }
        if (*piVar1 < 0) {
          return uVar6;
        }
        if (piVar1[2] < 0) {
          return uVar6;
        }
        iVar5 = DS_CommonDataHelper::ChattingMaxFavoriteCount();
        if (iVar5 <= *piVar1) {
          return uVar6;
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->BookmarkDatas).ArrayNum);
  }
  return -1;
}

// Init @ 14b9f36b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FDS_ChatBookmarkManager::Init(FDS_ChatBookmarkManager *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  TSharedPtr<FDS_ChatBookmarkData,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  int iVar10;
  
  this->MaxBookmarkCount = param_1;
  if ((param_1 < 1) &&
     (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3339747259196637192>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatBookmarkManager.cpp"
                         ,8,"MaxBookmarkCount > 0"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  piVar1 = &(this->BookmarkDatas).ArrayMax;
  pTVar3 = (TSharedPtr<FDS_ChatBookmarkData,1> *)(this->BookmarkDatas).AllocatorInstance.Data;
  iVar10 = (this->BookmarkDatas).ArrayNum;
  if ((this->BookmarkDatas).ArrayMax < 0) {
    DestructItems<TSharedPtr<FDS_ChatBookmarkData,1>,int>(pTVar3,iVar10);
    (this->BookmarkDatas).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->BookmarkDatas).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDS_ChatBookmarkData,1>,int>(pTVar3,iVar10);
    (this->BookmarkDatas).ArrayNum = 0;
  }
  uVar2 = this->MaxBookmarkCount;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&(this->BookmarkDatas).AllocatorInstance,(this->BookmarkDatas).ArrayNum,
               piVar1);
  }
  iVar10 = 0;
  if (0 < this->MaxBookmarkCount) {
    do {
      pTVar8 = ::operator_new(0x20);
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        pTVar9 = (TReferenceControllerBase<1> *)&DAT_00000010;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        DAT_00000014 = 0;
        _DAT_00000018 = 0xffffffff;
      }
      else {
        pTVar8->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_ChatBookmarkData___00_SharedPointerInternals__6B_
        ;
        pTVar8->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9 = pTVar8 + 1;
        pTVar8->WeakReferenceCount = (atomic<int>)0x1;
        pTVar8[1]._padding_ = 0;
        *(undefined4 *)&pTVar8[1]._padding_ = 0xffffffff;
        pTVar8[1].SharedReferenceCount = (atomic<int>)0xffffffff;
        if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(undefined1 *)((longlong)&pTVar8[1]._padding_ + 4) = 0;
        pTVar8[1].SharedReferenceCount = (atomic<int>)0xffffffff;
        if ((pTVar9 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(int *)&pTVar9->_padding_ = iVar10;
      iVar7 = (this->BookmarkDatas).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->BookmarkDatas).AllocatorInstance,piVar1);
      }
      (this->BookmarkDatas).ArrayNum = iVar7 + 1;
      pFVar4 = (this->BookmarkDatas).AllocatorInstance.Data;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar7 * 0x10) = pTVar9;
      *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar7 * 0x10 + 8) = pTVar8;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < this->MaxBookmarkCount);
  }
  return;
}

// IsBookmarked @ 14b9f90b0

bool __thiscall
FDS_ChatBookmarkManager::IsBookmarked
          (FDS_ChatBookmarkManager *this,EDS_ChattingTabType param_1,int param_2)

{
  FDS_ChatBookmarkData *pFVar1;
  TSharedPtr<FDS_ChatBookmarkData,1> *pTVar2;
  TSharedPtr<FDS_ChatBookmarkData,1> local_18;
  
  pTVar2 = GetBookmarkData(this,&local_18,param_1,param_2);
  pFVar1 = pTVar2->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar1 != (FDS_ChatBookmarkData *)0x0;
}

// UpdateBookmark @ 14ba23700

bool __thiscall
FDS_ChatBookmarkManager::UpdateBookmark
          (FDS_ChatBookmarkManager *this,EDS_ChattingTabType param_1,int param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  TSharedPtr<FDS_ChatBookmarkData,1> local_38;
  TSharedPtr<FDS_ChatBookmarkData,1> local_28;
  TSharedPtr<FDS_ChatBookmarkData,1> local_18;
  
  if (param_3) {
    GetBookmarkData(this,&local_18,param_1,param_2);
    if (local_18.Object == (FDS_ChatBookmarkData *)0x0) {
      iVar4 = GetEmptyBookmarkIndex(this);
      if (iVar4 == -1) {
        bVar2 = false;
      }
      else {
        GetBookmarkData(this,&local_28,iVar4);
        bVar2 = false;
        if (local_28.Object != (FDS_ChatBookmarkData *)0x0) {
          if (local_28.Object == (FDS_ChatBookmarkData *)0x0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
          }
          (local_28.Object)->ChattingTabType = param_1;
          (local_28.Object)->SubTabIndex = param_2;
          bVar2 = true;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
      }
    }
    else {
      bVar2 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return bVar2;
  }
  GetBookmarkData(this,&local_38,param_1,param_2);
  if (local_38.Object != (FDS_ChatBookmarkData *)0x0) {
    if (local_38.Object == (FDS_ChatBookmarkData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    (local_38.Object)->ChattingTabType = None;
    (local_38.Object)->SubTabIndex = -1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return true;
}

