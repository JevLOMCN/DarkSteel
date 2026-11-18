// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// TCommands<FMultiBoxTestCommandList> @ 1430551a0

TCommands<FMultiBoxTestCommandList> * __thiscall
TCommands<FMultiBoxTestCommandList>::TCommands<FMultiBoxTestCommandList>
          (TCommands<FMultiBoxTestCommandList> *this,FName param_1,FText *param_2,FName param_3,
          FName param_4)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  TCommands<FMultiBoxTestCommandList> *pTVar4;
  undefined1 local_res8 [8];
  
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(uint *)&this->field_0x18 = param_1.ComparisonIndex.Value;
  *(uint *)&this->field_0x1c = param_1.Number;
  *(uint *)&this->field_0x20 = param_3.ComparisonIndex.Value;
  *(uint *)&this->field_0x24 = param_3.Number;
  *(undefined8 *)&this->field_0x28 = 0;
  pIVar1 = (param_2->TextData).Reference;
  *(ITextData **)&this->field_0x28 = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  *(uint *)&this->field_0x30 = param_2->Flags;
  *(uint *)&this->field_0x38 = param_4.ComparisonIndex.Value;
  *(uint *)&this->field_0x3c = param_4.Number;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x6c = 0x80;
  *(undefined4 *)&this->field_0x70 = 0xffffffff;
  *(undefined4 *)&this->field_0x74 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined4 *)&this->field_0x88 = 0;
  if (param_4 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InStyleSetName.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Commands\\UICommandInfo.h"
                       ,0x65,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TCommands<FMultiBoxTestCommandList> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)this = &___7__TCommands_VFMultiBoxTestCommandList____6B_;
  return this;
}

// ~TCommands<FMultiBoxTestCommandList> @ 14305e660

void __thiscall
TCommands<FMultiBoxTestCommandList>::~TCommands<FMultiBoxTestCommandList>
          (TCommands<FMultiBoxTestCommandList> *this)

{
  *(undefined ***)this = &___7__TCommands_VFMultiBoxTestCommandList____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->field_0x8);
  return;
}

// Get @ 1430c7340

FMultiBoxTestCommandList * __cdecl TCommands<FMultiBoxTestCommandList>::Get(void)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TWeakPtr<FMultiBoxTestCommandList,1> *pTVar4;
  FMultiBoxTestCommandList *pFVar5;
  FMultiBoxTestCommandList *pFVar6;
  FMultiBoxTestCommandList *pFVar7;
  bool bVar8;
  
  pTVar4 = GetInstance();
  pFVar7 = (FMultiBoxTestCommandList *)0x0;
  pFVar5 = (FMultiBoxTestCommandList *)(pTVar4->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar5;
  if (pFVar5 != (FMultiBoxTestCommandList *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar5->_padding_;
    do {
      pFVar6 = pFVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1430c7375;
      LOCK();
      aVar3 = *(atomic<int> *)&pFVar5->_padding_;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        *(atomic<int> *)&pFVar5->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pFVar7 = pTVar4->Object;
    pFVar6 = pFVar5;
    if (pFVar7 != (FMultiBoxTestCommandList *)0x0) goto LAB_1430c739b;
  }
LAB_1430c7375:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  pFVar5 = pFVar6;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FMultiBoxTestCommandList *)(*pcVar1)();
    return pFVar5;
  }
LAB_1430c739b:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar7;
}

// GetInstance @ 1430c9630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TWeakPtr<FMultiBoxTestCommandList,1> * __cdecl
TCommands<FMultiBoxTestCommandList>::GetInstance(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_static_class_TWeakPtr<FMultiBoxTestCommandList,1>&___ptr64___cdecl_TCommands<FMultiBoxTestCommandList>::GetInstance(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_TWeakPtr<FMultiBoxTestCommandList,1>&___ptr64___cdecl_TCommands<FMultiBoxTestCommandList>::GetInstance(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_static_class_TWeakPtr<FMultiBoxTestCommandList,1>&___ptr64___cdecl_TCommands<FMultiBoxTestCommandList>::GetInstance(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _Inst = 0;
      DAT_155063e70 = 0;
      atexit(`TCommands<FMultiBoxTestCommandList>::GetInstance'::__l2::
             _dynamic_atexit_destructor_for__Inst__);
      _Init_thread_footer(&`protected:_static_class_TWeakPtr<FMultiBoxTestCommandList,1>&___ptr64___cdecl_TCommands<FMultiBoxTestCommandList>::GetInstance(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return (TWeakPtr<FMultiBoxTestCommandList,1> *)
             &`protected:_static_class_TWeakPtr<FMultiBoxTestCommandList,1>&___ptr64___cdecl_TCommands<FMultiBoxTestCommandList>::GetInstance(void)'
              ::__l2::Inst;
    }
  }
  return (TWeakPtr<FMultiBoxTestCommandList,1> *)
         &`protected:_static_class_TWeakPtr<FMultiBoxTestCommandList,1>&___ptr64___cdecl_TCommands<FMultiBoxTestCommandList>::GetInstance(void)'
          ::__l2::Inst;
}

// Register @ 1430e8c70

/* WARNING: Removing unreachable block (ram,0x0001430e8d68) */

void __cdecl TCommands<FMultiBoxTestCommandList>::Register(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  TWeakPtr<FMultiBoxTestCommandList,1> *pTVar10;
  FMultiBoxTestCommandList *this;
  FInputBindingManager *this_00;
  uint uVar11;
  longlong lVar12;
  FSharedReferencer<1> FVar13;
  TRawPtrProxy<FMultiBoxTestCommandList> local_res8;
  FName local_res10;
  TSharedRef<FMultiBoxTestCommandList,1> local_68;
  TSharedPtr<FBindingContext,1> local_58;
  FDestructionSentinel local_48;
  
  pTVar10 = GetInstance();
  if (((pTVar10->Object == (FMultiBoxTestCommandList *)0x0) ||
      (pTVar3 = (pTVar10->WeakReferenceCount).ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    this = ::operator_new(0x110);
    if (this == (FMultiBoxTestCommandList *)0x0) {
      local_res8.Object = (FMultiBoxTestCommandList *)0x0;
    }
    else {
      local_res8.Object = FMultiBoxTestCommandList::FMultiBoxTestCommandList(this);
      if (((local_res8.Object != (FMultiBoxTestCommandList *)0x0) &&
          ((local_res8.Object)->_padding_ != 0)) &&
         (((local_res8.Object)->_padding_ != 0 &&
          ((0 < *(int *)((local_res8.Object)->_padding_ + 8) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar6)))))) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TSharedRef<FMultiBoxTestCommandList,1>::
    TSharedRef<FMultiBoxTestCommandList,1><FMultiBoxTestCommandList>(&local_68,&local_res8);
    this_00 = FInputBindingManager::Get();
    local_res10 = (FName)(local_68.Object)->_padding_;
    FInputBindingManager::GetContextByName(this_00,&local_58,&local_res10);
    FVar5.ReferenceController = local_58.SharedReferenceCount.ReferenceController;
    FVar13.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    if (local_58.Object == (FBindingContext *)0x0) {
      pTVar10->Object = local_68.Object;
      if (local_68.SharedReferenceCount.ReferenceController !=
          (pTVar10->WeakReferenceCount).ReferenceController) {
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar10->WeakReferenceCount).ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
        (pTVar10->WeakReferenceCount).ReferenceController = FVar13.ReferenceController;
      }
      (**(code **)((local_68.Object)->_padding_ + 8))(local_68.Object);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FBindingContext::CommandsChanged,(FWriteAccessScope *)&local_48);
      bVar6 = false;
      FBindingContext::CommandsChanged._28_4_ = FBindingContext::CommandsChanged._28_4_ + 1;
      uVar11 = FBindingContext::CommandsChanged._16_4_ - 1;
      if (-1 < (int)uVar11) {
        lVar12 = (longlong)(int)uVar11 << 4;
        bVar6 = false;
        do {
          uVar9 = 0;
          if ((int)uVar11 < (int)FBindingContext::CommandsChanged._16_4_) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (((*(int *)(lVar12 + 8 + FBindingContext::CommandsChanged._8_8_) == 0) ||
              (*(longlong **)(lVar12 + FBindingContext::CommandsChanged._8_8_) == (longlong *)0x0))
             || (cVar8 = (**(code **)(**(longlong **)
                                        (lVar12 + FBindingContext::CommandsChanged._8_8_) + 0x68))()
                , cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar12 = lVar12 + -0x10;
          uVar11 = uVar11 - 1;
          FVar13.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
        } while (-1 < (int)uVar11);
      }
      FBindingContext::CommandsChanged._28_4_ = FBindingContext::CommandsChanged._28_4_ + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FBindingContext::CommandsChanged,false);
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
    }
    else {
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar10->Object = (FMultiBoxTestCommandList *)&local_58.Object[-1].Bundles.field_0x48;
      if (local_58.SharedReferenceCount.ReferenceController !=
          (pTVar10->WeakReferenceCount).ReferenceController) {
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (pTVar10->WeakReferenceCount).ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
        (pTVar10->WeakReferenceCount).ReferenceController = FVar5.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      FVar13.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar13.ReferenceController);
  }
  return;
}

