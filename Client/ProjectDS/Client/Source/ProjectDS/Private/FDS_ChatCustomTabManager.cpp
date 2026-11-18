// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// Clear @ 14b9e2cc0

void __thiscall FDS_ChatCustomTabManager::Clear(FDS_ChatCustomTabManager *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  DestructItems<TSharedPtr<FDS_ChatCustomData,1>,int>
            ((TSharedPtr<FDS_ChatCustomData,1> *)(this->CustomDatas).AllocatorInstance.Data,
             (this->CustomDatas).ArrayNum);
  (this->CustomDatas).ArrayNum = 0;
  if ((this->CustomDatas).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CustomDatas).AllocatorInstance,0,&(this->CustomDatas).ArrayMax);
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CustomFilter != (TSharedPtr<FDS_ChatCustomFilter,1> *)&local_18) {
    (this->CustomFilter).Object = (FDS_ChatCustomFilter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CustomFilter).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// GetCustomData @ 14b9eec10

TSharedPtr<FDS_ChatCustomData,1> * __thiscall
FDS_ChatCustomTabManager::GetCustomData
          (FDS_ChatCustomTabManager *this,TSharedPtr<FDS_ChatCustomData,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ChatCustomData,1> *pTVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  
  if ((param_1 < 0) || ((this->CustomDatas).ArrayNum <= param_1)) {
    __return_storage_ptr__->Object = (FDS_ChatCustomData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->CustomDatas).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FDS_ChatCustomData,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar6 = (this->CustomDatas).AllocatorInstance.Data + (longlong)param_1 * 0x10;
    __return_storage_ptr__->Object = *(FDS_ChatCustomData **)pFVar6;
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

// GetCustomInfoStrings @ 14b9ef000

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FDS_ChatCustomTabManager::GetCustomInfoStrings
          (FDS_ChatCustomTabManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ForAnyElementType _Src;
  int iVar5;
  ulonglong uVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  uVar3 = (this->CustomDatas).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (0 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  local_res10 = (this->CustomDatas).ArrayNum;
  uVar6 = (ulonglong)(int)local_res10;
  pFVar9 = (this->CustomDatas).AllocatorInstance.Data;
  pFVar8 = pFVar9 + uVar6 * 0x10;
  local_res18 = pFVar8;
  while( true ) {
    if ((this->CustomDatas).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ChatCustomData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    lVar4 = *(longlong *)pFVar9;
    if (lVar4 != 0) {
      cVar2 = *(char *)(lVar4 + 0x10);
      pFVar7 = DS_Util::FromInt64(&local_48,*(long64 *)(lVar4 + 8));
      ::FString::PrintfImpl(&local_98,L"Custom%dFlag=");
      ::FString::ConcatFF(&local_58,&local_98,pFVar7);
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_b8,(uint)(cVar2 == '\x01'));
      ::FString::PrintfImpl(&local_88,L"Custom%dMark=");
      ::FString::ConcatFF(&local_68,&local_88,&local_b8);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      ::FString::ConcatFC(&local_78,&local_58,L" ");
      ::FString::ConcatFF(&local_a8,&local_78,&local_68);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      _Src.Data = local_a8.Data.AllocatorInstance.Data;
      pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      *(undefined8 *)&pFVar8->field_0x0 = 0;
      iVar5 = local_a8.Data.ArrayNum;
      *(int *)&pFVar8[8].field_0x0 = iVar5;
      if (iVar5 == 0) {
        *(int *)(pFVar8 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,(ForAnyElementType *)pFVar8,iVar5,(int *)(pFVar8 + 0xc));
        memcpy(*(void **)&pFVar8->field_0x0,_Src.Data,(longlong)iVar5 * 2);
      }
      pFVar8 = local_res18;
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        pFVar8 = local_res18;
      }
    }
    uVar6 = (ulonglong)local_res10;
    pFVar9 = pFVar9 + 0x10;
  }
  return __return_storage_ptr__;
}

// GetCustomTabCount @ 14b9ef2a0

int __thiscall FDS_ChatCustomTabManager::GetCustomTabCount(FDS_ChatCustomTabManager *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->CustomDatas).ArrayNum;
  iVar4 = 0;
  pFVar2 = (this->CustomDatas).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->CustomDatas).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<FDS_ChatCustomData,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if ((*(longlong *)pFVar2 != 0) && (*(longlong *)(*(longlong *)pFVar2 + 8) != 0)) {
      iVar4 = iVar4 + 1;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  return iVar4;
}

// GetEmptyCustomDataIndex @ 14b9efdb0

int __thiscall FDS_ChatCustomTabManager::GetEmptyCustomDataIndex(FDS_ChatCustomTabManager *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->CustomDatas).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->CustomDatas).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      lVar1 = *(longlong *)((this->CustomDatas).AllocatorInstance.Data + lVar7);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == 0)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->CustomDatas).ArrayNum);
  }
  return -1;
}

// Init @ 14b9f3ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FDS_ChatCustomTabManager::Init(FDS_ChatCustomTabManager *this,int param_1)

{
  int *piVar1;
  TSharedPtr<FDS_ChatCustomFilter,1> *pTVar2;
  uint uVar3;
  TSharedPtr<FDS_ChatCustomData,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  UDS_ChatEvent *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  int iVar12;
  TReferenceControllerBase<1> *pTVar13;
  FDS_ChatCustomFilter *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FDS_ChatCustomFilter *local_38;
  FSharedReferencer<1> FStack_30;
  
  this->MaxCustomTabCount = param_1;
  if ((param_1 < 1) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4137579439208792055>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Chat\\DS_ChatCustomTabManager.cpp"
                         ,9,"MaxCustomTabCount > 0"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar1 = &(this->CustomDatas).ArrayMax;
  pTVar4 = (TSharedPtr<FDS_ChatCustomData,1> *)(this->CustomDatas).AllocatorInstance.Data;
  iVar12 = (this->CustomDatas).ArrayNum;
  if ((this->CustomDatas).ArrayMax < 0) {
    DestructItems<TSharedPtr<FDS_ChatCustomData,1>,int>(pTVar4,iVar12);
    (this->CustomDatas).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->CustomDatas).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FDS_ChatCustomData,1>,int>(pTVar4,iVar12);
    (this->CustomDatas).ArrayNum = 0;
  }
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  uVar3 = this->MaxCustomTabCount;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&(this->CustomDatas).AllocatorInstance,(this->CustomDatas).ArrayNum,
               piVar1);
  }
  pTVar13 = pTVar15;
  if (0 < this->MaxCustomTabCount) {
    do {
      pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
      pTVar9 = ::operator_new(0x28);
      iVar12 = (int)pTVar13;
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        _DAT_00000018 = 0;
        pTVar9 = pTVar15;
        _DAT_00000010 = iVar12;
      }
      else {
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFDS_ChatCustomData___00_SharedPointerInternals__6B_
        ;
        pTVar11 = pTVar9 + 1;
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9[1]._padding_ = 0;
        pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9[2]._padding_ = 0;
        *(undefined4 *)&pTVar9[1]._padding_ = 0xffffffff;
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(int *)&pTVar11->_padding_ = iVar12;
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      *(undefined1 *)&pTVar11[1]._padding_ = 0;
      iVar8 = (this->CustomDatas).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->CustomDatas).AllocatorInstance,piVar1);
      }
      (this->CustomDatas).ArrayNum = iVar8 + 1;
      pFVar5 = (this->CustomDatas).AllocatorInstance.Data;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar8 * 0x10) = pTVar11;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar8 * 0x10 + 8) = pTVar9;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(iVar12 + 1U);
    } while ((int)(iVar12 + 1U) < this->MaxCustomTabCount);
  }
  FStack_30.ReferenceController = ::operator_new(0x48);
  if (FStack_30.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    pFVar14 = (FDS_ChatCustomFilter *)&DAT_00000010;
    FStack_30.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_30.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pFVar14 = (FDS_ChatCustomFilter *)(FStack_30.ReferenceController + 1);
    (FStack_30.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_30.ReferenceController)->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFDS_ChatCustomFilter___00_SharedPointerInternals__6B_
    ;
    FStack_30.ReferenceController[1]._padding_ = 0;
    FStack_30.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[2]._padding_ = 0;
    FStack_30.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[3]._padding_ = 0;
    FStack_30.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    FStack_30.ReferenceController[4]._padding_ = 0;
    if ((pFVar14 == (FDS_ChatCustomFilter *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    (FStack_30.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_30.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar15 = FStack_30.ReferenceController;
    local_38 = pFVar14;
  }
  pTVar2 = &this->CustomFilter;
  if (pTVar2 != (TSharedPtr<FDS_ChatCustomFilter,1> *)&local_38) {
    pTVar2->Object = pFVar14;
    local_38 = (FDS_ChatCustomFilter *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CustomFilter).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  if ((pTVar2->Object == (FDS_ChatCustomFilter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FDS_ChatCustomFilter::Init(pTVar2->Object);
  if ((pTVar2->Object == (FDS_ChatCustomFilter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = pTVar2->Object;
  pFVar14->ChatTypeFlags = pFVar14->ChatTypeFlags | pFVar14->AllNormalTypeFlags;
  pUVar10 = UDS_ChatEvent::GetEvent();
  if (pUVar10 != (UDS_ChatEvent *)0x0) {
    bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar10->OnChangedCustomFilter);
    if (bVar7) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar10->OnChangedCustomFilter).Delegate);
    }
  }
  pFVar14->ChatTypeFlags = pFVar14->ChatTypeFlags | pFVar14->AllSystemTypeFlags;
  pUVar10 = UDS_ChatEvent::GetEvent();
  if (pUVar10 != (UDS_ChatEvent *)0x0) {
    bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar10->OnChangedCustomFilter);
    if (bVar7) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar10->OnChangedCustomFilter).Delegate);
    }
  }
  return;
}

// IsValidCustomIndex @ 14b9fa3c0

bool __thiscall
FDS_ChatCustomTabManager::IsValidCustomIndex(FDS_ChatCustomTabManager *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < this->MaxCustomTabCount)) {
    return param_1 < (this->CustomDatas).ArrayNum;
  }
  return false;
}

// OnRecvCustomInfo @ 14ba03030

void __thiscall
FDS_ChatCustomTabManager::OnRecvCustomInfo
          (FDS_ChatCustomTabManager *this,int param_1,FString *param_2,FString *param_3)

{
  code *pcVar1;
  FDS_ChatCustomData *pFVar2;
  bool bVar3;
  int iVar4;
  ulong64 uVar5;
  TSharedPtr<FDS_ChatCustomData,1> local_18;
  
  GetCustomData(this,&local_18,param_1);
  pFVar2 = local_18.Object;
  if (local_18.Object != (FDS_ChatCustomData *)0x0) {
    if (local_18.Object == (FDS_ChatCustomData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_2->Data).ArrayNum < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = _wtoi64((wchar_t *)(param_2->Data).AllocatorInstance.Data);
    }
    pFVar2->ChatFilterFlags = uVar5;
    if (local_18.Object == (FDS_ChatCustomData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((param_3->Data).ArrayNum < 2) {
      (local_18.Object)->bIsBookmark = false;
    }
    else {
      iVar4 = _wtoi((wchar_t *)(param_3->Data).AllocatorInstance.Data);
      (local_18.Object)->bIsBookmark = 0 < iVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// SetCustomData @ 14ba1b1f0

void __thiscall
FDS_ChatCustomTabManager::SetCustomData
          (FDS_ChatCustomTabManager *this,int param_1,FDS_ChatCustomData *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong64 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((-1 < param_1) && (lVar9 = (longlong)param_1, param_1 < (this->CustomDatas).ArrayNum)) {
    uVar8 = 0;
    if (param_1 < (this->CustomDatas).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)((this->CustomDatas).AllocatorInstance.Data + lVar9 * 0x10) != 0) {
      uVar5 = *(undefined8 *)param_2;
      uVar6 = param_2->ChatFilterFlags;
      uVar8 = 0;
      if (param_1 < (this->CustomDatas).ArrayNum) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      uVar1 = *(undefined8 *)&param_2->bIsBookmark;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->CustomDatas).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar9 * 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar3 = *(undefined8 **)(pFVar2 + lVar9 * 0x10);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar1;
    }
  }
  return;
}

