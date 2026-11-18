// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 14

// FActionRouterBindingCollection @ 14a7a8ed0

FActionRouterBindingCollection * __thiscall
FActionRouterBindingCollection::FActionRouterBindingCollection
          (FActionRouterBindingCollection *this,UCommonUIActionRouterBase *param_1)

{
  UCommonUIActionRouterBase *local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FActionRouterBindingCollection__6B_;
  (this->ActionBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActionBindings).ArrayNum = 0;
  (this->ActionBindings).ArrayMax = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonUIActionRouterBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ActionRouterPtr).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCommonUIActionRouterBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->ActionRouterPtr).WeakPtr,(FObjectPtr)&local_res8);
  (this->CurrentlyHeldBinding).CachedDebugActionName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CurrentlyHeldBinding).CachedDebugActionName.Data.ArrayNum = 0;
  (this->CurrentlyHeldBinding).CachedDebugActionName.Data.ArrayMax = 0;
  this->HoldBindingsCount = 0;
  (this->CurrentlyHeldBinding).RegistrationId = -1;
  return this;
}

// ~FActionRouterBindingCollection @ 14a7b0d40

void __thiscall
FActionRouterBindingCollection::~FActionRouterBindingCollection
          (FActionRouterBindingCollection *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FActionRouterBindingCollection__6B_;
  pFVar3 = (this->CurrentlyHeldBinding).CachedDebugActionName.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FUIActionBindingHandle,int>
            ((FUIActionBindingHandle *)(this->ActionBindings).AllocatorInstance.Data,
             (this->ActionBindings).ArrayNum);
  pFVar3 = (this->ActionBindings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a7b0da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// operator() @ 14a7b6850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`FActionRouterBindingCollection::ProcessNormalInput'::__l12::<lambda_1>::operator()
          (void *this,FKey *param_1,UInputAction *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  FUIActionBinding *pFVar9;
  UObject *pUVar10;
  UCommonUIActionRouterBase *pUVar11;
  ULocalPlayer *this_00;
  UEnhancedInputLocalPlayerSubsystem *pUVar12;
  longlong local_res8;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = *(longlong **)this;
  if ((*plVar1 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return (bool)uVar6;
  }
  if (*(char *)(*plVar1 + 0xd) != '\0') {
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (*(char *)(*plVar1 + 0x24) != '\0') {
      bVar5 = true;
      goto LAB_14a7b68e6;
    }
  }
  bVar5 = false;
LAB_14a7b68e6:
  if (param_1->KeyName == **(FName **)((longlong)this + 8)) {
    plVar1 = *(longlong **)this;
    if ((*plVar1 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    if (*(int *)(*plVar1 + 8) == **(int **)((longlong)this + 0x10)) {
      if (!bVar5) {
        plVar1 = *(longlong **)((longlong)this + 0x18);
        pcVar2 = *(code **)(*plVar1 + 0x20);
        pFVar9 = TSharedPtr<FUIActionBinding,1>::operator->
                           (*(TSharedPtr<FUIActionBinding,1> **)this);
        pUVar10 = FWeakObjectPtr::Get(&(pFVar9->BoundWidget).WeakPtr);
        cVar8 = (*pcVar2)(plVar1,pUVar10);
        if (cVar8 == '\0') {
          return false;
        }
      }
      plVar1 = *(longlong **)this;
      if ((*plVar1 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      *(undefined8 *)(*plVar1 + 0x160) = 0xbff0000000000000;
      if (((param_2 == (UInputAction *)0x0) ||
          (CommonUI::GetEnhancedInputActionMetadata((UInputAction *)&local_res8),
          uVar4 = _UNK_150689518, uVar3 = ___xmm_00000000000000003ff0000000000000, local_res8 == 0))
         || (*(char *)(local_res8 + 0x2c) != '\0')) {
        pFVar9 = TSharedPtr<FUIActionBinding,1>::operator->
                           (*(TSharedPtr<FUIActionBinding,1> **)this);
        TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                  (&pFVar9->OnExecuteAction);
      }
      else {
        local_48 = 0;
        uStack_40 = uStack_40 & 0xffffff00;
        pUVar11 = FActionRouterBindingCollection::GetActionRouter
                            (*(FActionRouterBindingCollection **)((longlong)this + 0x18));
        this_00 = CastChecked<ULocalPlayer,UObject>((UObject *)pUVar11->_padding_);
        if ((this_00 != (ULocalPlayer *)0x0) &&
           (pUVar12 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_00),
           pUVar12 != (UEnhancedInputLocalPlayerSubsystem *)0x0)) {
          local_38 = uVar3;
          uStack_30 = uVar4;
          local_68 = (void *)0x0;
          local_60 = 0;
          local_78 = (void *)0x0;
          local_70 = 0;
          local_28 = (undefined4)local_48;
          uStack_24 = local_48._4_4_;
          uStack_20 = uStack_40;
          uStack_1c = uStack_3c;
          (**(code **)(pUVar12->_padding_ + 0x40))
                    (&pUVar12->_padding_,param_2,&local_38,&local_78,&local_68);
          if (local_78 != (void *)0x0) {
            FMemory::Free(local_78);
          }
          if (local_68 != (void *)0x0) {
            FMemory::Free(local_68);
          }
        }
      }
      pFVar9 = TSharedPtr<FUIActionBinding,1>::operator->(*(TSharedPtr<FUIActionBinding,1> **)this);
      return pFVar9->bConsumesInput != false;
    }
  }
  return false;
}

// AddBinding @ 14a7bdb20

void __thiscall
FActionRouterBindingCollection::AddBinding
          (FActionRouterBindingCollection *this,FUIActionBinding *param_1)

{
  atomic<int> *paVar1;
  FUIActionBindingHandle *pFVar2;
  int *piVar3;
  atomic<int> aVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  TSharedRef<FActionRouterBindingCollection,1> *pTVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  TSharedRef<FActionRouterBindingCollection,1> local_58;
  FString local_48;
  uint local_38;
  
  uVar18 = (this->ActionBindings).ArrayNum;
  uVar19 = (ulonglong)(int)uVar18;
  pFVar17 = (this->ActionBindings).AllocatorInstance.Data;
  pFVar12 = pFVar17 + uVar19 * 0x18;
  if (pFVar17 != pFVar12) {
    do {
      if (*(int *)(pFVar17 + 0x10) == (param_1->Handle).RegistrationId) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8809435093299888980>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                           ,0x354,"!ActionBindings.Contains(Binding.Handle)");
        if (!bVar6) {
          return;
        }
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = pFVar17 + 0x18;
    } while (pFVar17 != pFVar12);
  }
  uVar16 = uVar18 - 1;
  if (-1 < (int)uVar16) {
    lVar20 = (longlong)(int)uVar16 * 0x18;
    do {
      uVar18 = uVar16;
      pTVar13 = (TReferenceControllerBase<1> *)0x0;
      uVar16 = 0;
      if ((int)uVar18 < (this->ActionBindings).ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->ActionBindings).AllocatorInstance.Data + lVar20;
      ::FString::FString(&local_48,(FString *)pFVar12);
      local_38 = *(uint *)&pFVar12[0x10].field_0x0;
      pTVar15 = pTVar13;
      if (FUIActionBinding::AllRegistrationsByHandle._8_4_ !=
          FUIActionBinding::AllRegistrationsByHandle._52_4_) {
        lVar9 = 0x154cb26b8;
        if (FUIActionBinding::AllRegistrationsByHandle._64_8_ != 0) {
          lVar9 = FUIActionBinding::AllRegistrationsByHandle._64_8_;
        }
        iVar8 = *(int *)(lVar9 + (ulonglong)
                                 (FUIActionBinding::AllRegistrationsByHandle._72_4_ - 1 & local_38)
                                 * 4);
        while (iVar8 != -1) {
          lVar9 = (longlong)iVar8 * 0x30 + FUIActionBinding::AllRegistrationsByHandle._0_8_;
          if (*(uint *)(lVar9 + 0x10) == local_38) {
            pTVar14 = (TReferenceControllerBase<1> *)(lVar9 + 0x18);
            if (lVar9 == 0) {
              pTVar14 = pTVar13;
            }
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              pTVar15 = (TReferenceControllerBase<1> *)pTVar14->_padding_;
              pTVar13 = *(TReferenceControllerBase<1> **)&pTVar14->SharedReferenceCount;
              if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar13->SharedReferenceCount =
                     (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
                UNLOCK();
              }
            }
            break;
          }
          iVar8 = *(int *)(lVar9 + 0x28);
        }
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      if ((pTVar15 == (TReferenceControllerBase<1> *)0x0) ||
         (param_1->PriorityWithinCollection <= (int)pTVar15[1]._padding_)) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        uVar18 = (uint)uVar19;
        break;
      }
      uVar19 = (ulonglong)uVar18;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
      lVar20 = lVar20 + -0x18;
      uVar16 = uVar18 - 1;
    } while (-1 < (int)(uVar18 - 1));
  }
  pFVar12 = (this->ActionBindings).AllocatorInstance.Data;
  pFVar2 = &param_1->Handle;
  if (((pFVar12 <= pFVar2) && (pFVar2 < pFVar12 + (longlong)(this->ActionBindings).ArrayMax * 0x18))
     && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->ActionBindings).ArrayNum;
  piVar3 = &(this->ActionBindings).ArrayMax;
  if (iVar8 == *piVar3) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->ActionBindings).AllocatorInstance,piVar3);
  }
  (this->ActionBindings).ArrayNum = iVar8 + 1;
  pFVar12 = (this->ActionBindings).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18;
  memmove(pFVar12 + 0x18,pFVar12,(longlong)(int)(iVar8 - uVar18) * 0x18);
  pFVar12 = (this->ActionBindings).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x18;
  ::FString::FString((FString *)pFVar12,&pFVar2->CachedDebugActionName);
  *(int *)&pFVar12[0x10].field_0x0 = (param_1->Handle).RegistrationId;
  pTVar10 = TSharedFromThis<FActionRouterBindingCollection,1>::AsShared
                      ((TSharedFromThis<FActionRouterBindingCollection,1> *)&this->_padding_,
                       &local_58);
  (param_1->OwningCollection).Object = pTVar10->Object;
  pTVar13 = (pTVar10->SharedReferenceCount).ReferenceController;
  if (pTVar13 != (param_1->OwningCollection).WeakReferenceCount.ReferenceController) {
    if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar15 = (param_1->OwningCollection).WeakReferenceCount.ReferenceController;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar15->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar15->_padding_ + 8))(pTVar15,1);
      }
    }
    (param_1->OwningCollection).WeakReferenceCount.ReferenceController = pTVar13;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if (0 < (param_1->HoldMappings).ArrayNum) {
    this->HoldBindingsCount = this->HoldBindingsCount + 1;
  }
  cVar7 = (**(code **)(this->_padding_ + 0x18))(this);
  if (cVar7 != '\0') {
    bVar6 = FWeakObjectPtr::IsValid(&(this->ActionRouterPtr).WeakPtr);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActionRouterPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                           ,0x48,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar11 = FWeakObjectPtr::Get(&(this->ActionRouterPtr).WeakPtr);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pUVar11 + 7));
  }
  return;
}

// DebugDumpActionBindings @ 14a7d2370

/* WARNING: Type propagation algorithm not settling */

void __thiscall
FActionRouterBindingCollection::DebugDumpActionBindings
          (FActionRouterBindingCollection *this,FString *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  FUIActionBinding *pFVar7;
  FUIActionBinding *pFVar8;
  FScriptContainerElement *pFVar9;
  FUIActionBinding *this_00;
  undefined1 local_res8 [8];
  FString local_68;
  FString local_58;
  uint local_48;
  FString local_40;
  uint local_30;
  
  iVar2 = (this->ActionBindings).ArrayNum;
  pFVar9 = (this->ActionBindings).AllocatorInstance.Data;
  pFVar1 = pFVar9 + (longlong)iVar2 * 0x18;
  do {
    pFVar7 = (FUIActionBinding *)0x0;
    if ((this->ActionBindings).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FUIActionBindingHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      return;
    }
    ::FString::FString(&local_58,(FString *)pFVar9);
    local_48 = *(uint *)&pFVar9[0x10].field_0x0;
    ::FString::FString(&local_40,&local_58);
    local_30 = local_48;
    this_00 = pFVar7;
    if (FUIActionBinding::AllRegistrationsByHandle._8_4_ !=
        FUIActionBinding::AllRegistrationsByHandle._52_4_) {
      lVar6 = 0x154cb26b8;
      if (FUIActionBinding::AllRegistrationsByHandle._64_8_ != 0) {
        lVar6 = FUIActionBinding::AllRegistrationsByHandle._64_8_;
      }
      iVar3 = *(int *)(lVar6 + (ulonglong)
                               (FUIActionBinding::AllRegistrationsByHandle._72_4_ - 1 & local_48) *
                               4);
      while (iVar3 != -1) {
        lVar6 = (longlong)iVar3 * 0x30 + FUIActionBinding::AllRegistrationsByHandle._0_8_;
        if (*(uint *)(lVar6 + 0x10) == local_48) {
          pFVar8 = (FUIActionBinding *)(lVar6 + 0x18);
          if (lVar6 == 0) {
            pFVar8 = pFVar7;
          }
          if (pFVar8 != (FUIActionBinding *)0x0) {
            this_00 = *(FUIActionBinding **)&pFVar8->ActionName;
            pFVar7 = *(FUIActionBinding **)&pFVar8->InputEvent;
            if (pFVar7 != (FUIActionBinding *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar7->InputEvent =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar7->InputEvent + 1);
              UNLOCK();
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x28);
      }
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (pFVar7 != (FUIActionBinding *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar7->InputEvent =
           (atomic<int>)((int)*(atomic<int> *)&pFVar7->InputEvent + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
    if (this_00 != (FUIActionBinding *)0x0) {
      FUIActionBinding::ToDebugString(this_00,&local_68);
      if ((0xff < (uint)param_2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                             ,0x272,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      ::FString::AppendfImpl(param_1,L"\n%s-%s");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar9 = pFVar9 + 0x18;
  } while( true );
}

// GetActionRouter @ 14a7e04b0

UCommonUIActionRouterBase * __thiscall
FActionRouterBindingCollection::GetActionRouter(FActionRouterBindingCollection *this)

{
  code *pcVar1;
  bool bVar2;
  UCommonUIActionRouterBase *pUVar3;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ActionRouterPtr).WeakPtr);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionRouterPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UCommonUIActionRouterBase *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->ActionRouterPtr).WeakPtr);
  return pUVar3;
}

// GetOwnerControllerId @ 14a7e4400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FActionRouterBindingCollection::GetOwnerControllerId(FActionRouterBindingCollection *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  ULocalPlayer *pUVar5;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ActionRouterPtr).WeakPtr);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionRouterPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->ActionRouterPtr).WeakPtr);
  pUVar5 = CastChecked<ULocalPlayer,UObject>(*(UObject **)&pUVar4->field_0x20);
  return pUVar5->ControllerId;
}

// GetOwnerUserIndex @ 14a7e44f0

int __thiscall
FActionRouterBindingCollection::GetOwnerUserIndex(FActionRouterBindingCollection *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UCommonUIActionRouterBase *this_00;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->ActionRouterPtr).WeakPtr);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActionRouterPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  this_00 = (UCommonUIActionRouterBase *)FWeakObjectPtr::Get(&(this->ActionRouterPtr).WeakPtr);
  iVar3 = UCommonUIActionRouterBase::GetLocalPlayerIndex(this_00);
  return iVar3;
}

// IsReceivingInput @ 14a7f6690

bool __thiscall
FActionRouterBindingCollection::IsReceivingInput(FActionRouterBindingCollection *this)

{
  return true;
}

// IsWidgetReachableForInput @ 14a7f7800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FActionRouterBindingCollection::IsWidgetReachableForInput
          (FActionRouterBindingCollection *this,UWidget *param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TSharedPtr<SWidget,1> *pTVar6;
  SWidget *pSVar7;
  SWidget *pSVar8;
  SWidget *pSVar9;
  FSharedReferencer<1> local_40;
  undefined8 local_38;
  FSharedReferencer<1> local_30;
  TSharedPtr<SWidget,1> local_28 [2];
  
  pSVar8 = (SWidget *)0x0;
  if (param_1 == (UWidget *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pSVar9 = pSVar8;
  }
  else {
    pTVar6 = UWidget::GetCachedWidget(param_1,local_28);
    pSVar7 = pTVar6->Object;
    pSVar9 = (SWidget *)(pTVar6->SharedReferenceCount).ReferenceController;
    (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar6->Object = (SWidget *)0x0;
    local_40.ReferenceController = (TReferenceControllerBase<1> *)pSVar9;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28[0].SharedReferenceCount.ReferenceController);
    if (pSVar7 != (SWidget *)0x0) {
      do {
        bVar3 = CanWidgetReceiveInput(pSVar7);
        if (!bVar3) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.ReferenceController);
          return false;
        }
        if ((pSVar7 == (SWidget *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        local_30.ReferenceController =
             (pSVar7->ParentWidgetPtr).WeakReferenceCount.ReferenceController;
        pSVar9 = pSVar8;
        if (local_30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          aVar2 = (local_30.ReferenceController)->SharedReferenceCount;
          do {
            if (aVar2 == (atomic<int>)0x0) {
              local_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              goto LAB_14a7f78c3;
            }
            LOCK();
            aVar5 = (local_30.ReferenceController)->SharedReferenceCount;
            bVar3 = aVar2 == aVar5;
            if (bVar3) {
              (local_30.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
              aVar5 = aVar2;
            }
            UNLOCK();
            aVar2 = aVar5;
          } while (!bVar3);
          pSVar9 = (pSVar7->ParentWidgetPtr).Object;
        }
LAB_14a7f78c3:
        pSVar7 = pSVar9;
        local_38 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_40,&local_30);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_30.ReferenceController);
        if (pSVar7 == (SWidget *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40.ReferenceController);
          return true;
        }
      } while( true );
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pSVar9);
  return false;
}

// ProcessHoldInput @ 14a803050

/* WARNING: Enum "Type": Some values do not have unique names */

EProcessHoldActionResult __thiscall
FActionRouterBindingCollection::ProcessHoldInput
          (FActionRouterBindingCollection *this,ECommonInputMode param_1,FKey *param_2,
          EInputEvent param_3,int param_4)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  int iVar4;
  FUIActionBinding *this_00;
  code *pcVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  EProcessHoldActionResult EVar11;
  longlong lVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  TReferenceControllerBase<1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  FScriptContainerElement *pFVar17;
  FName *pFVar18;
  FScriptContainerElement *pFVar19;
  FName *pFVar20;
  double dVar21;
  float fVar22;
  undefined1 local_158;
  undefined1 local_157 [7];
  FScriptContainerElement *local_150;
  TReferenceControllerBase<1> *local_148;
  uint local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  FScriptContainerElement *local_128;
  FString local_120;
  uint local_110;
  TWeakPtr<FTSTicker::FElement,1> local_108;
  FString local_f8;
  uint local_e8;
  FString local_e0;
  FString local_d0;
  FUIActionBindingHandle local_c0;
  undefined8 local_a8 [14];
  
  fVar8 = __real_3e800000;
  dVar7 = __real_4170000000000000;
  fVar6 = __real_322bcc77;
  pFVar17 = (this->ActionBindings).AllocatorInstance.Data;
  local_140 = (this->ActionBindings).ArrayNum;
  uVar14 = (ulonglong)(int)local_140;
  pFVar19 = pFVar17 + uVar14 * 0x18;
  local_128 = pFVar19;
  do {
    pTVar16 = (TReferenceControllerBase<1> *)0x0;
    local_150 = pFVar17;
    if ((this->ActionBindings).ArrayNum != (int)uVar14) {
      local_158 = 0;
      `TCheckedPointerIterator<FUIActionBindingHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_158);
    }
    if (pFVar17 == pFVar19) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return Unhandled;
    }
    ::FString::FString(&local_120,(FString *)pFVar17);
    local_110 = *(uint *)&pFVar17[0x10].field_0x0;
    ::FString::FString(&local_f8,&local_120);
    local_e8 = local_110;
    if (FUIActionBinding::AllRegistrationsByHandle._8_4_ !=
        FUIActionBinding::AllRegistrationsByHandle._52_4_) {
      lVar12 = 0x154cb26b8;
      if (FUIActionBinding::AllRegistrationsByHandle._64_8_ != 0) {
        lVar12 = FUIActionBinding::AllRegistrationsByHandle._64_8_;
      }
      iVar4 = *(int *)(lVar12 + (ulonglong)
                                (FUIActionBinding::AllRegistrationsByHandle._72_4_ - 1 & local_110)
                                * 4);
      while (iVar4 != -1) {
        lVar12 = (longlong)iVar4 * 0x30 + FUIActionBinding::AllRegistrationsByHandle._0_8_;
        if (*(uint *)(lVar12 + 0x10) == local_110) {
          pTVar15 = (TReferenceControllerBase<1> *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            pTVar15 = pTVar16;
          }
          if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
            local_148 = *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount;
            this_00 = (FUIActionBinding *)pTVar15->_padding_;
            if (local_148 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_148->SharedReferenceCount =
                   (atomic<int>)((int)local_148->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            }
            pTVar16 = local_148;
            pFVar17 = local_150;
            if (((this_00 == (FUIActionBinding *)0x0) || (this_00->UserIndex != param_4)) ||
               ((param_1 != All && (param_1 != this_00->InputMode)))) goto LAB_14a80356e;
            iVar4 = (this_00->HoldMappings).ArrayNum;
            pFVar18 = (FName *)(this_00->HoldMappings).AllocatorInstance.Data;
            pFVar20 = pFVar18 + (longlong)iVar4 * 4;
            goto LAB_14a803220;
          }
          break;
        }
        iVar4 = *(int *)(lVar12 + 0x28);
      }
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
LAB_14a80356e:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    pFVar17 = pFVar17 + 0x18;
    uVar14 = (ulonglong)local_140;
  } while( true );
LAB_14a803220:
  if ((this_00->HoldMappings).ArrayNum != iVar4) {
    local_157[0] = 0;
    `TCheckedPointerIterator<FUIActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_157);
  }
  pTVar16 = local_148;
  pFVar17 = local_150;
  pFVar19 = local_128;
  if (pFVar18 == pFVar20) goto LAB_14a80356e;
  EVar11 = Unhandled;
  if (((float)pFVar18[3].ComparisonIndex.Value <= 0.0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("HoldMapping.HoldTime > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                         ,0x2ad,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    EVar11 = (*pcVar5)();
    return EVar11;
  }
  if ((this_00->bIsPersistent == false) || (this_00->bDisplayInActionBar == false)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if (*pFVar18 == param_2->KeyName) {
    if (!bVar9) {
      pcVar5 = *(code **)(this->_padding_ + 0x20);
      pUVar13 = FWeakObjectPtr::Get(&(this_00->BoundWidget).WeakPtr);
      cVar10 = (*pcVar5)(this,pUVar13);
      if (cVar10 == '\0') goto LAB_14a80354c;
    }
    if (param_3 == IE_Pressed) {
      pTVar2 = &this_00->HoldProgressRollbackTickerHandle;
      if (((pTVar2->Object != (FElement *)0x0) &&
          (pTVar16 = (this_00->HoldProgressRollbackTickerHandle).WeakReferenceCount.
                     ReferenceController, pTVar16 != (TReferenceControllerBase<1> *)0x0)) &&
         (0 < (int)pTVar16->SharedReferenceCount)) {
        local_108.Object = pTVar2->Object;
        local_108.WeakReferenceCount.ReferenceController =
             (this_00->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController;
        if (local_108.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_108.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        FTSTicker::RemoveTicker(&local_108);
        if (pTVar2 != (TWeakPtr<FTSTicker::FElement,1> *)local_a8) {
          pTVar16 = (this_00->HoldProgressRollbackTickerHandle).WeakReferenceCount.
                    ReferenceController;
          pTVar2->Object = (FElement *)0x0;
          (this_00->HoldProgressRollbackTickerHandle).WeakReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar1 = &pTVar16->WeakReferenceCount;
            aVar3 = *paVar1;
            *paVar1 = (atomic<int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar3 == (atomic<int>)0x1) {
              (**(code **)(pTVar16->_padding_ + 8))(pTVar16,1);
            }
          }
        }
      }
      EVar11 = Handled;
      if (6 < (byte)LogUIActionRouter._0_1_) {
        ::FName::ToString((FName *)this_00,&local_e0);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      QueryPerformanceCounter(&local_138);
      this_00->HoldStartTime =
           (double)local_138.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7;
      if (this_00->HoldTime <= 0.0) {
        dVar21 = 0.0;
      }
      else {
        dVar21 = this_00->HoldStartSecond / this_00->HoldTime;
      }
      TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                (&this_00->OnHoldActionProgressed,(float)dVar21);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this_00->OnHoldActionPressed);
    }
    else if (0.0 < this_00->HoldStartTime || this_00->HoldStartTime == 0.0) {
      if (param_3 == IE_Repeat) {
        bVar9 = FUIActionBinding::UpdateHold(this_00,(float)pFVar18[3].ComparisonIndex.Value);
        EVar11 = (bVar9 ^ 1) * 2;
      }
      else if (param_3 == IE_Released) {
        QueryPerformanceCounter(&local_130);
        fVar22 = (float)(((double)local_130.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar7
                         ) - this_00->HoldStartTime);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this_00->OnHoldActionReleased);
        if (6 < (byte)LogUIActionRouter._0_1_) {
          ::FName::ToString((FName *)this_00,&local_d0);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
        }
        if (fVar6 < (float)pFVar18[3].Number) {
          this_00->HoldStartTime = -1.0;
          ::FString::FString(&local_c0.CachedDebugActionName,
                             &(this_00->Handle).CachedDebugActionName);
          local_c0.RegistrationId = (this_00->Handle).RegistrationId;
          FUIActionBinding::BeginRollback
                    (this_00,(float)pFVar18[3].Number,(float)pFVar18[3].ComparisonIndex.Value,
                     &local_c0);
        }
        else {
          TMulticastDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>::Broadcast
                    (&this_00->OnHoldActionProgressed,0.0);
          this_00->HoldStartTime = -1.0;
        }
        if ((fVar22 <= fVar8) &&
           (EVar11 = Unhandled, fVar22 < (float)pFVar18[3].ComparisonIndex.Value)) {
          EVar11 = GeneratePress;
        }
      }
    }
    if (this_00->bConsumesInput != false) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_148)
      ;
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return EVar11;
    }
  }
LAB_14a80354c:
  pFVar18 = pFVar18 + 4;
  goto LAB_14a803220;
}

// ProcessNormalInput @ 14a803e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FActionRouterBindingCollection::ProcessNormalInput
          (FActionRouterBindingCollection *this,ECommonInputMode param_1,FKey *param_2,
          EInputEvent param_3,int param_4)

{
  TSharedPtr<FKeyDetails,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  FUIActionBinding *pFVar4;
  FActionRouterBindingCollection *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  UInputAction *pUVar11;
  ULocalPlayer *this_00;
  UEnhancedInputLocalPlayerSubsystem *pUVar12;
  ulonglong *puVar13;
  FUIActionBinding *pFVar14;
  UObject *pUVar15;
  ulonglong uVar16;
  FKey *pFVar17;
  FKey *pFVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FKey *pFVar21;
  FName *pFVar22;
  FName *pFVar23;
  FScriptContainerElement *pFVar24;
  EInputEvent local_res20 [2];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  TSharedPtr<FUIActionBinding,1> local_e0;
  uint local_d0;
  TSharedPtr<FUIActionBinding,1> *local_c8;
  FKey *local_c0;
  EInputEvent *local_b8;
  FActionRouterBindingCollection *local_b0;
  FScriptContainerElement *local_a8;
  FUIActionBindingHandle local_a0;
  FScriptContainerElement *local_88;
  FKey *local_80;
  int local_78;
  FString local_70;
  uint local_60;
  ulonglong local_58 [3];
  
  pFVar19 = (this->ActionBindings).AllocatorInstance.Data;
  local_d0 = (this->ActionBindings).ArrayNum;
  uVar16 = (ulonglong)(int)local_d0;
  pFVar24 = pFVar19 + uVar16 * 0x18;
  local_res20[0] = param_3;
  local_88 = pFVar24;
  do {
    pFVar21 = (FKey *)0x0;
    local_a8 = pFVar19;
    if ((this->ActionBindings).ArrayNum != (int)uVar16) {
      local_e8 = 0;
      `TCheckedPointerIterator<FUIActionBindingHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_e8);
    }
    if (pFVar19 == pFVar24) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return false;
    }
    ::FString::FString(&local_a0.CachedDebugActionName,(FString *)pFVar19);
    local_a0.RegistrationId = *(int *)&pFVar19[0x10].field_0x0;
    ::FString::FString(&local_70,&local_a0.CachedDebugActionName);
    local_60 = local_a0.RegistrationId;
    if (FUIActionBinding::AllRegistrationsByHandle._8_4_ !=
        FUIActionBinding::AllRegistrationsByHandle._52_4_) {
      lVar10 = 0x154cb26b8;
      if (FUIActionBinding::AllRegistrationsByHandle._64_8_ != 0) {
        lVar10 = FUIActionBinding::AllRegistrationsByHandle._64_8_;
      }
      iVar2 = *(int *)(lVar10 + (ulonglong)
                                (FUIActionBinding::AllRegistrationsByHandle._72_4_ - 1 &
                                local_a0.RegistrationId) * 4);
      while (iVar2 != -1) {
        lVar10 = (longlong)iVar2 * 0x30 + FUIActionBinding::AllRegistrationsByHandle._0_8_;
        if (*(uint *)(lVar10 + 0x10) == local_a0.RegistrationId) {
          pFVar17 = (FKey *)(lVar10 + 0x18);
          if (lVar10 == 0) {
            pFVar17 = pFVar21;
          }
          if (pFVar17 != (FKey *)0x0) {
            local_e0.Object = *(FUIActionBinding **)&pFVar17->KeyName;
            local_e0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)(pFVar17->KeyDetails).Object;
            if ((FKeyDetails *)local_e0.SharedReferenceCount.ReferenceController !=
                (FKeyDetails *)0x0) {
              LOCK();
              pTVar1 = &(((FKeyDetails *)local_e0.SharedReferenceCount.ReferenceController)->Key).
                        KeyDetails;
              *(int *)&pTVar1->Object = *(int *)&pTVar1->Object + 1;
              UNLOCK();
            }
            goto LAB_14a803f6b;
          }
          break;
        }
        iVar2 = *(int *)(lVar10 + 0x28);
      }
    }
    local_e0.Object = (FUIActionBinding *)0x0;
    local_e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_14a803f6b:
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if ((FName)local_e0.Object != (FName)0x0) {
      if (((FName)local_e0.Object == (FName)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      if ((*(int *)((longlong)local_e0.Object + 0x20) == param_4) &&
         ((param_1 == All || (param_1 == *(ECommonInputMode *)((longlong)local_e0.Object + 0x1c)))))
      {
        local_b8 = local_res20;
        local_c8 = &local_e0;
        local_c0 = param_2;
        local_b0 = this;
        bVar6 = CommonUI::IsEnhancedInputSupportEnabled();
        if (bVar6) {
          if (((FName)local_e0.Object == (FName)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)local_e0.Object + 0x158));
          if (bVar6) {
            if (((FName)local_e0.Object == (FName)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            pUVar11 = (UInputAction *)
                      FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)local_e0.Object + 0x158));
            if (pUVar11 != (UInputAction *)0x0) {
              this_00 = FUIActionBindingHandle::GetBoundLocalPlayer(&local_a0);
              uVar20 = 0;
              pFVar17 = pFVar21;
              if ((this_00 != (ULocalPlayer *)0x0) &&
                 (pUVar12 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_00),
                 pUVar12 != (UEnhancedInputLocalPlayerSubsystem *)0x0)) {
                puVar13 = (ulonglong *)
                          (**(code **)(pUVar12->_padding_ + 0x100))
                                    (&pUVar12->_padding_,&local_80,pUVar11);
                if (local_58 != puVar13) {
                  DestructItems<FKey,int>((FKey *)0x0,0);
                  pFVar17 = (FKey *)*puVar13;
                  *puVar13 = 0;
                  uVar20 = (uint)puVar13[1];
                  pFVar21 = (FKey *)(ulonglong)uVar20;
                  puVar13[1] = 0;
                }
                DestructItems<FKey,int>(local_80,local_78);
                if (local_80 != (FKey *)0x0) {
                  FMemory::Free(local_80);
                }
              }
              for (pFVar18 = pFVar17; pFVar18 != pFVar17 + (int)uVar20; pFVar18 = pFVar18 + 1) {
                bVar6 = `FActionRouterBindingCollection::ProcessNormalInput'::__l12::<lambda_1>::
                        operator()(&local_c8,pFVar18,pUVar11);
                if (bVar6) {
                  DestructItems<FKey,int>(pFVar17,(int)pFVar21);
                  if (pFVar17 != (FKey *)0x0) {
                    FMemory::Free(pFVar17);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_e0.SharedReferenceCount.ReferenceController);
                  if (local_a0.CachedDebugActionName.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a0.CachedDebugActionName.Data.AllocatorInstance.Data);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
                  return true;
                }
              }
              DestructItems<FKey,int>(pFVar17,(int)pFVar21);
              if (pFVar17 != (FKey *)0x0) {
                FMemory::Free(pFVar17);
              }
            }
          }
        }
        if (((FName)local_e0.Object == (FName)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          uVar7 = (*pcVar3)();
          return (bool)uVar7;
        }
        pFVar4 = local_e0.Object;
        iVar2 = *(int *)((longlong)local_e0.Object + 0xd0);
        pFVar22 = *(FName **)((longlong)local_e0.Object + 200);
        pFVar23 = pFVar22 + (longlong)iVar2 * 4;
        while( true ) {
          if (*(int *)((longlong)pFVar4 + 0xd0) != iVar2) {
            local_e7[0] = 0;
            `TCheckedPointerIterator<FUIActionKeyMapping,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_e7);
          }
          pFVar19 = local_a8;
          pFVar24 = local_88;
          if (pFVar22 == pFVar23) break;
          if (((FName)local_e0.Object == (FName)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          if (*(char *)((longlong)local_e0.Object + 0xd) == '\0') {
LAB_14a80427f:
            bVar6 = false;
          }
          else {
            if (((FName)local_e0.Object == (FName)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            if (*(char *)((longlong)local_e0.Object + 0x24) == '\0') goto LAB_14a80427f;
            bVar6 = true;
          }
          if (*pFVar22 == local_c0->KeyName) {
            if (((FName)local_e0.Object == (FName)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            pFVar5 = local_b0;
            if (*(EInputEvent *)((longlong)local_e0.Object + 8) == *local_b8) {
              if (!bVar6) {
                pcVar3 = *(code **)(local_b0->_padding_ + 0x20);
                pFVar14 = TSharedPtr<FUIActionBinding,1>::operator->(&local_e0);
                pUVar15 = FWeakObjectPtr::Get(&(pFVar14->BoundWidget).WeakPtr);
                cVar9 = (*pcVar3)(pFVar5,pUVar15);
                if (cVar9 == '\0') goto LAB_14a80436f;
              }
              if (((FName)local_e0.Object == (FName)0x0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                uVar7 = (*pcVar3)();
                return (bool)uVar7;
              }
              *(undefined8 *)((longlong)local_e0.Object + 0x160) = 0xbff0000000000000;
              pFVar14 = TSharedPtr<FUIActionBinding,1>::operator->(&local_e0);
              TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                        (&pFVar14->OnExecuteAction);
              pFVar14 = TSharedPtr<FUIActionBinding,1>::operator->(&local_e0);
              if (pFVar14->bConsumesInput != false) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_e0.SharedReferenceCount.ReferenceController);
                if (local_a0.CachedDebugActionName.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a0.CachedDebugActionName.Data.AllocatorInstance.Data);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
                return true;
              }
            }
          }
LAB_14a80436f:
          pFVar22 = pFVar22 + 4;
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e0.SharedReferenceCount.ReferenceController);
    if (local_a0.CachedDebugActionName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_a0.CachedDebugActionName.Data.AllocatorInstance.Data);
    }
    uVar16 = (ulonglong)local_d0;
    pFVar19 = pFVar19 + 0x18;
  } while( true );
}

// RemoveBinding @ 14a8131d0

void __thiscall
FActionRouterBindingCollection::RemoveBinding
          (FActionRouterBindingCollection *this,FUIActionBindingHandle *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UObject *pUVar10;
  TSharedPtr<FUIActionBinding,1> local_48;
  undefined8 local_38 [2];
  FUIActionBindingHandle local_28;
  
  iVar9 = TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_>::Remove
                    (&this->ActionBindings,param_1);
  if (0 < iVar9) {
    ::FString::FString(&local_28.CachedDebugActionName,&param_1->CachedDebugActionName);
    local_28.RegistrationId = param_1->RegistrationId;
    FUIActionBinding::FindBinding(&local_48,&local_28);
    if (local_48.Object != (FUIActionBinding *)0x0) {
      if (local_48.Object == (FUIActionBinding *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (&(local_48.Object)->OwningCollection !=
          (TWeakPtr<FActionRouterBindingCollection,1> *)local_38) {
        pTVar4 = ((local_48.Object)->OwningCollection).WeakReferenceCount.ReferenceController;
        ((local_48.Object)->OwningCollection).Object = (FActionRouterBindingCollection *)0x0;
        ((local_48.Object)->OwningCollection).WeakReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))();
          }
        }
      }
      if (local_48.Object == (FUIActionBinding *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (0 < ((local_48.Object)->HoldMappings).ArrayNum) {
        piVar2 = &this->HoldBindingsCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 < 0) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<8809435093299889022>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.cpp"
                             ,0x37e,"HoldBindingsCount >= 0");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    cVar8 = (**(code **)(this->_padding_ + 0x18))(this);
    if (cVar8 != '\0') {
      bVar7 = FWeakObjectPtr::IsValid(&(this->ActionRouterPtr).WeakPtr);
      if (!bVar7) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActionRouterPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\UIActionRouterTypes.h"
                           ,0x48,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pUVar10 = FWeakObjectPtr::Get(&(this->ActionRouterPtr).WeakPtr);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pUVar10 + 7))
      ;
    }
  }
  pFVar5 = (param_1->CachedDebugActionName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
    return;
  }
  return;
}

// RemoveBindings @ 14a8135c0

void __thiscall
FActionRouterBindingCollection::RemoveBindings
          (FActionRouterBindingCollection *this,
          TArray<FUIActionBindingHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  FString local_48;
  int local_38;
  FUIActionBindingHandle local_30;
  
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<FUIActionBindingHandle_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    ::FString::FString(&local_48,(FString *)pFVar3);
    local_38 = *(int *)&pFVar3[0x10].field_0x0;
    ::FString::FString(&local_30.CachedDebugActionName,&local_48);
    local_30.RegistrationId = local_38;
    RemoveBinding(this,&local_30);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar3 = pFVar3 + 0x18;
  }
  return;
}

