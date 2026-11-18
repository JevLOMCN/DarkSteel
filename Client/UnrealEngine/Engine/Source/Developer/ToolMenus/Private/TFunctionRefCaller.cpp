// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 10

// Call @ 142c4f0f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_128 [32];
  FToolMenuAutomationTestAdapter FStack_e8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> TStack_d8;
  FString FStack_c8;
  FName FStack_b8;
  FName FStack_b0;
  FName FStack_a8;
  FName FStack_a0;
  FMenu FStack_98;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_60;
  FMenuSection *pFStack_50;
  TReferenceControllerBase<1> *pTStack_48;
  FMenuSection *pFStack_40;
  TReferenceControllerBase<1> *pTStack_38;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar7 = ::FName::FName(&FStack_b8,"FirstSection");
  FVar3 = *pFVar7;
  TStack_60.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (TStack_60.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    TStack_60.Object = ___xmm_00000000000000000000000000000010;
    TStack_60.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c3f0ca:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    (TStack_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (TStack_60.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (TStack_60.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    TStack_60.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    TStack_60.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(TStack_60.SharedReferenceCount.ReferenceController + 1);
    TStack_60.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&TStack_60.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&TStack_60.SharedReferenceCount.ReferenceController[3]._padding_ + 4)
         = 0xffffffff;
    TStack_60.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar11 = TStack_60.SharedReferenceCount.ReferenceController;
    TStack_60.Object = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c3f0ca;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&FStack_b0,"MiddleSection");
  FVar3 = *pFVar7;
  pTStack_48 = ::operator_new(0x48);
  if (pTStack_48 == (TReferenceControllerBase<1> *)0x0) {
    pFStack_50 = ___xmm_00000000000000000000000000000010;
    pTStack_48 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c3f1cb:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTStack_48->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_48->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_48->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_48[1]._padding_ = 0;
    pTStack_48[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_48 + 1);
    pTStack_48[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_48[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_48[3]._padding_ + 4) = 0xffffffff;
    pTStack_48[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[4]._padding_ = 0;
    pTVar11 = pTStack_48;
    pFStack_50 = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c3f1cb;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&FStack_a8,"LastSection");
  FVar3 = *pFVar7;
  pTStack_38 = ::operator_new(0x48);
  if (pTStack_38 == (TReferenceControllerBase<1> *)0x0) {
    pFStack_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    pTStack_38->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_38->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_38->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_38[1]._padding_ = 0;
    pTStack_38[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_38 + 1);
    pTStack_38[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_38[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_38[3]._padding_ + 4) = 0xffffffff;
    pTStack_38[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[4]._padding_ = 0;
    pTVar10 = pTStack_38;
    pFStack_40 = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c3f32a;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c3f32a:
  TStack_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d8.ArrayNum = 3;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&TStack_d8.AllocatorInstance,3,&TStack_d8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (TStack_d8.AllocatorInstance.Data,&TStack_60,3);
  pFVar7 = ::FName::FName(&FStack_a0,"TestMenu");
  ToolMenus::FMenu::FMenu(&FStack_98,*pFVar7,&TStack_d8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_d8.AllocatorInstance.Data,
             TStack_d8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_d8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(TStack_d8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_60.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)param_1);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_c8,"Actual menu sections to (exactly) match the expected sections");
  FStack_e8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  FStack_e8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  FStack_e8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  FStack_e8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_e8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = true;
  FStack_e8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  FStack_e8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  FStack_e8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_e8.TestInstance = this;
  bVar6 = ToolMenus::FToolMenuAutomationTestAdapter::Matches(&FStack_e8,&FStack_98,pUVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (FStack_c8.Data.ArrayNum != 0) {
    FVar12.Data = FStack_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this,(wchar_t *)FVar12.Data,bVar6);
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_98.Sections.AllocatorInstance.Data,
             FStack_98.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_98.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_98.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)FStack_98._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(FStack_98._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)FStack_98._padding_ + 8))(FStack_98._padding_,1);
    }
  }
  return;
}

// Call @ 142c4f100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  FName FStackX_8;
  FName FStackX_10;
  FName FStackX_18;
  ForAnyElementType FStack_c8;
  int iStack_c0;
  int iStack_bc;
  FToolMenuAutomationTestAdapter FStack_b8;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_a8;
  FMenuSection *pFStack_98;
  TReferenceControllerBase<1> *pTStack_90;
  FMenu FStack_88;
  FString FStack_50;
  
  pFVar7 = ::FName::FName(&FStackX_8,"MiddleSection");
  FVar3 = *pFVar7;
  TStack_a8.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (TStack_a8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    TStack_a8.Object = ___xmm_00000000000000000000000000000010;
    TStack_a8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c3f594:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    (TStack_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (TStack_a8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (TStack_a8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    TStack_a8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    TStack_a8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    TStack_a8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    TStack_a8.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(TStack_a8.SharedReferenceCount.ReferenceController + 1);
    TStack_a8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    TStack_a8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&TStack_a8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&TStack_a8.SharedReferenceCount.ReferenceController[3]._padding_ + 4)
         = 0xffffffff;
    TStack_a8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    TStack_a8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    TStack_a8.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar11 = TStack_a8.SharedReferenceCount.ReferenceController;
    TStack_a8.Object = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c3f594;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&FStackX_10,"SectionThatDoesntExist");
  FVar3 = *pFVar7;
  pTStack_90 = ::operator_new(0x48);
  if (pTStack_90 == (TReferenceControllerBase<1> *)0x0) {
    pFStack_98 = ___xmm_00000000000000000000000000000010;
    pTStack_90 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    pTStack_90->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_90->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_90->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_90[1]._padding_ = 0;
    pTStack_90[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_90 + 1);
    pTStack_90[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_90[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_90[3]._padding_ + 4) = 0xffffffff;
    pTStack_90[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_90[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_90[4]._padding_ = 0;
    pTVar10 = pTStack_90;
    pFStack_98 = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c3f6f3;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c3f6f3:
  FStack_c8.Data = (FScriptContainerElement *)0x0;
  iStack_c0 = 2;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&FStack_c8,2,&iStack_bc);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (FStack_c8.Data,&TStack_a8,2);
  pFVar7 = ::FName::FName(&FStackX_18,"TestMenu");
  iVar2 = iStack_c0;
  FVar12.Data = FStack_c8.Data;
  FStack_88._padding_ = *(longlong *)pFVar7;
  FStack_88._padding_ = (longlong)&___7FMenu_ToolMenus_UE__6B_;
  FStack_88._padding_._0_1_ = 3;
  FStack_88.Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_88.Sections.ArrayNum = iStack_c0;
  FStack_88._padding_ = 0;
  FStack_88._padding_ = 0;
  if (iStack_c0 == 0) {
    FStack_88.Sections.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iStack_c0,0,&FStack_88.Sections.AllocatorInstance,iStack_c0,
               &FStack_88.Sections.ArrayMax);
    ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
              (FStack_88.Sections.AllocatorInstance.Data,
               (TSharedRef<UE::ToolMenus::FMenuSection,1> *)FVar12.Data,iVar2);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_c8.Data,iStack_c0);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_c8.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_c8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_a8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)param_1);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_50,"Actual menu sections to (partially) match the expected section(s)")
  ;
  FStack_b8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = false;
  FStack_b8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  FStack_b8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  FStack_b8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_b8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  FStack_b8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  FStack_b8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  FStack_b8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_b8.TestInstance = this;
  bVar6 = ToolMenus::FToolMenuAutomationTestAdapter::Matches(&FStack_b8,&FStack_88,pUVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (FStack_50.Data.ArrayNum != 0) {
    FVar12.Data = FStack_50.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this,(wchar_t *)FVar12.Data,bVar6);
  if (FStack_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_88.Sections.AllocatorInstance.Data,
             FStack_88.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_88.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_88.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)FStack_88._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(FStack_88._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)FStack_88._padding_ + 8))(FStack_88._padding_,1);
    }
  }
  return;
}

// Call @ 142c4f110

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_68;
  FSourceLocation FStack_58;
  code *apcStack_38 [2];
  undefined **ppuStack_28;
  FAutomationSpecBase *pFStack_20;
  undefined8 uStack_10;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,"Should match the exact sections");
  FStack_58.Impl._Line = 0x1a;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  FStack_58.Impl._Column = 4;
  FAutomationSpecBase::It(pFVar1,&FStack_68,(TFunction<void___cdecl(void)> *)apcStack_38,&FStack_58)
  ;
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_28 = &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_10 = 0;
  apcStack_38[0] =
       TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_20 = pFVar1;
  ::FString::FString(&FStack_68,"Should match the exact entries");
  FStack_58.Impl._Line = 0x31;
  FStack_58.Impl._Column = 4;
  FStack_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  FStack_58.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_1>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&FStack_68,(TFunction<void___cdecl(void)> *)apcStack_38,&FStack_58)
  ;
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142c4f120

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UToolMenuWidgetCollectionContext::FindWidgetByClassType'::__l2::<lambda_1>,bool,TSharedPtr<SWidget,1>_const_&>
::Call(void *param_1,TSharedPtr<SWidget,1> *param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 *puVar3;
  SWidget *pSVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  longlong lVar9;
  
  plVar1 = *(longlong **)((longlong)param_1 + 8);
  if (param_2->Object == (SWidget *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
  }
  lVar9 = (**(code **)(param_2->Object->_padding_ + 8))();
  if (*(longlong *)(lVar9 + 0x30) == *plVar1) {
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    puVar3 = *(undefined8 **)param_1;
    pSVar4 = param_2->Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (TReferenceControllerBase<1> *)puVar3[1];
    *puVar3 = pSVar4;
    puVar3[1] = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    return false;
  }
  return true;
}

// Call @ 142c4f130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  ForAnyElementType FVar11;
  FName FStackX_8;
  FName FStackX_10;
  ForAnyElementType FStack_a8;
  int iStack_a0;
  int iStack_9c;
  FToolMenuAutomationTestAdapter FStack_98;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_88;
  FString FStack_78;
  FMenu FStack_68;
  
  pFVar7 = ::FName::FName(&FStackX_8,"MiddleSection");
  FVar3 = *pFVar7;
  TStack_88.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (TStack_88.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    TStack_88.Object = ___xmm_00000000000000000000000000000010;
    TStack_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    (TStack_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (TStack_88.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (TStack_88.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    TStack_88.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    TStack_88.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    TStack_88.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    TStack_88.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(TStack_88.SharedReferenceCount.ReferenceController + 1);
    TStack_88.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    TStack_88.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&TStack_88.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&TStack_88.SharedReferenceCount.ReferenceController[3]._padding_ + 4)
         = 0xffffffff;
    TStack_88.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    TStack_88.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    TStack_88.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar10 = TStack_88.SharedReferenceCount.ReferenceController;
    TStack_88.Object = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c40d64;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c40d64:
  FStack_a8.Data = (FScriptContainerElement *)0x0;
  iStack_a0 = 1;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&FStack_a8,1,&iStack_9c);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (FStack_a8.Data,&TStack_88,1);
  pFVar7 = ::FName::FName(&FStackX_10,"TestMenu");
  iVar2 = iStack_a0;
  FVar11.Data = FStack_a8.Data;
  FStack_68._padding_ = *(longlong *)pFVar7;
  FStack_68._padding_ = (longlong)&___7FMenu_ToolMenus_UE__6B_;
  FStack_68._padding_._0_1_ = 3;
  FStack_68.Sections.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_68.Sections.ArrayNum = iStack_a0;
  FStack_68._padding_ = 0;
  FStack_68._padding_ = 0;
  if (iStack_a0 == 0) {
    FStack_68.Sections.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iStack_a0,0,&FStack_68.Sections.AllocatorInstance,iStack_a0,
               &FStack_68.Sections.ArrayMax);
    ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
              (FStack_68.Sections.AllocatorInstance.Data,
               (TSharedRef<UE::ToolMenus::FMenuSection,1> *)FVar11.Data,iVar2);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_a8.Data,iStack_a0);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_a8.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_a8.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_88.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)param_1);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_78,"Actual menu sections to (partially) match the expected section(s)")
  ;
  FStack_98.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  FStack_98.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  FStack_98.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  FStack_98.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_98.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  FStack_98.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  FStack_98.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  FStack_98.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_98.TestInstance = this;
  bVar6 = ToolMenus::FToolMenuAutomationTestAdapter::Matches(&FStack_98,&FStack_68,pUVar8);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (FStack_78.Data.ArrayNum != 0) {
    FVar11.Data = FStack_78.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this,(wchar_t *)FVar11.Data,bVar6);
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_68.Sections.AllocatorInstance.Data,
             FStack_68.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_68.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_68.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)FStack_68._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(FStack_68._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)FStack_68._padding_ + 8))(FStack_68._padding_,1);
    }
  }
  return;
}

// Call @ 142c4f140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  FName FVar6;
  FAutomationTestBase *this;
  code *pcVar7;
  FNameEntryId FVar8;
  uint uVar9;
  undefined8 *puVar10;
  bool bVar11;
  FName *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  TSharedRef<UE::ToolMenus::FMenuEntry,1> *pTVar16;
  TReferenceControllerBase<1> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  UToolMenu *pUVar19;
  ForAnyElementType FVar20;
  FMenuEntryBase *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  undefined1 auStackY_1c8 [32];
  undefined8 uStack_188;
  FToolMenuAutomationTestAdapter FStack_180;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> TStack_170;
  TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> TStack_160;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  FString FStack_140;
  FName FStack_130;
  FName FStack_128;
  FName FStack_120;
  FName FStack_118;
  FName FStack_110;
  FName FStack_108;
  FName FStack_100;
  TSharedRef<UE::ToolMenus::FMenuEntry,1> TStack_f8;
  FMenu FStack_e8;
  TSharedRef<UE::ToolMenus::FMenuEntryBase,1> TStack_a8;
  TReferenceControllerBase<1> *pTStack_98;
  TReferenceControllerBase<1> *pTStack_90;
  TReferenceControllerBase<1> *pTStack_88;
  TReferenceControllerBase<1> *pTStack_80;
  FMenuEntry *pFStack_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_68;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_58;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  puStack_148 = param_1;
  pFVar12 = ::FName::FName(&FStack_130,"FirstEntry");
  FVar8.Value = (pFVar12->ComparisonIndex).Value;
  uVar9 = pFVar12->Number;
  pTVar13 = ::operator_new(0x50);
  pTVar22 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
    pFVar21 = (FMenuEntryBase *)&DAT_00000010;
    pTVar13 = pTVar22;
LAB_142c41022:
    if (((pFVar21[1]._padding_ == 0) ||
        (lVar3 = *(longlong *)&pFVar21[1].Name.ComparisonIndex, lVar3 == 0)) ||
       (*(int *)(lVar3 + 8) < 1)) {
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar21[1]._padding_ = (longlong)pFVar21;
      if (pTVar13 != *(TReferenceControllerBase<1> **)&pFVar21[1].Name.ComparisonIndex) {
        if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar13->WeakReferenceCount = (atomic<int>)((int)pTVar13->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar21[1].Name.ComparisonIndex;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar21[1].Name.ComparisonIndex = pTVar13;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
  }
  else {
    pTVar13->SharedReferenceCount = (atomic<int>)0x1;
    pTVar13->WeakReferenceCount = (atomic<int>)0x1;
    pTVar13->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar13[1].SharedReferenceCount = (atomic<int>)FVar8.Value;
    pTVar13[1].WeakReferenceCount = (atomic<int>)uVar9;
    pFVar21 = (FMenuEntryBase *)(pTVar13 + 1);
    *(undefined1 *)&pTVar13[2]._padding_ = 3;
    pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar13[3]._padding_ = 0;
    pTVar13[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar13[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar13[4]._padding_ + 4) = 0xffffffff;
    pTVar13[4].SharedReferenceCount.field_0x1 = 0;
    if (pFVar21 != (FMenuEntryBase *)0x0) goto LAB_142c41022;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_a8.Object = pFVar21;
  TStack_a8.SharedReferenceCount.ReferenceController = pTVar13;
  pFVar12 = ::FName::FName(&FStack_128,"MiddleEntry");
  FVar8.Value = (pFVar12->ComparisonIndex).Value;
  uVar9 = pFVar12->Number;
  pTVar14 = ::operator_new(0x50);
  if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar14 = pTVar22;
LAB_142c41139:
    lVar3._0_4_ = pTVar15[1].SharedReferenceCount;
    lVar3._4_4_ = pTVar15[1].WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar15[2]._padding_ == 0)) || (*(int *)(pTVar15[2]._padding_ + 8) < 1)) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar15[1].SharedReferenceCount = pTVar15;
      if (pTVar14 != (TReferenceControllerBase<1> *)pTVar15[2]._padding_) {
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pTVar15[2]._padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        pTVar15[2]._padding_ = (longlong)pTVar14;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
  }
  else {
    pTVar14->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar14->SharedReferenceCount = (atomic<int>)0x1;
    pTVar14->WeakReferenceCount = (atomic<int>)0x1;
    pTVar14[1].SharedReferenceCount = (atomic<int>)FVar8.Value;
    pTVar14[1].WeakReferenceCount = (atomic<int>)uVar9;
    pTVar15 = pTVar14 + 1;
    pTVar14[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar14[3]._padding_ = 0;
    *(undefined1 *)&pTVar14[2]._padding_ = 3;
    pTVar14[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar14[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar14[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar14[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar14[4]._padding_ + 4) = 0xffffffff;
    pTVar14[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_142c41139;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTStack_98 = pTVar15;
  pTStack_90 = pTVar14;
  pTVar15 = ::operator_new(0x50);
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    pTVar18 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar15 = pTVar22;
  }
  else {
    pTVar15->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18 = pTVar15 + 1;
    pTVar15->WeakReferenceCount = (atomic<int>)0x1;
    pTVar15->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    uStack_150 = 0;
    pTVar15[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    *(undefined1 *)&pTVar15[2]._padding_ = 3;
    pTVar15[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar15[3]._padding_ = 0;
    pTVar15[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar15[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar15[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar15[4]._padding_ + 4) = 0xffffffff;
    pTVar15[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_142c412b0;
    }
  }
  lVar4._0_4_ = pTVar18[1].SharedReferenceCount;
  lVar4._4_4_ = pTVar18[1].WeakReferenceCount;
  if (((lVar4 == 0) || (pTVar18[2]._padding_ == 0)) || (*(int *)(pTVar18[2]._padding_ + 8) < 1)) {
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(TReferenceControllerBase<1> **)&pTVar18[1].SharedReferenceCount = pTVar18;
    if (pTVar15 != (TReferenceControllerBase<1> *)pTVar18[2]._padding_) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)pTVar18[2]._padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      pTVar18[2]._padding_ = (longlong)pTVar15;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
LAB_142c412b0:
  if ((atomic<int> *)&uStack_188 != &pTVar18[3].SharedReferenceCount) {
    *(undefined2 *)&pTVar18[3].SharedReferenceCount = 0x105;
  }
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTStack_88 = pTVar18;
  pTStack_80 = pTVar15;
  pFVar12 = ::FName::FName(&FStack_120,"LastEntry");
  pTVar16 = ToolMenus::Entry(&TStack_f8,*pFVar12);
  pFStack_78 = pTVar16->Object;
  pTStack_70 = (pTVar16->SharedReferenceCount).ReferenceController;
  if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_160.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_160.ArrayNum = 4;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,4,0,&TStack_160.AllocatorInstance,4,&TStack_160.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            (TStack_160.AllocatorInstance.Data,&TStack_a8,4);
  pFVar12 = ::FName::FName(&FStack_118,"FirstSection");
  FVar6 = *pFVar12;
  pTVar17 = ::operator_new(0x48);
  pTVar18 = pTVar22;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    ToolMenus::FMenuSection::FMenuSection((FMenuSection *)(pTVar17 + 1),FVar6,&TStack_160);
    pTVar18 = pTVar17;
  }
  TSharedRef<UE::ToolMenus::FMenuSection,1>::TSharedRef<UE::ToolMenus::FMenuSection,1>
            (&TStack_68,(FMenuSection *)(pTVar18 + 1),pTVar18);
  pFVar12 = ::FName::FName(&FStack_110,"MiddleSection");
  FVar6 = *pFVar12;
  pTVar17 = ::operator_new(0x48);
  pTVar18 = pTVar22;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar17[1]._padding_ = 0;
    pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[2]._padding_ = (longlong)FVar6;
    pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar17[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar17[3]._padding_ + 4) = 0xffffffff;
    *(undefined8 *)&pTVar17[3].SharedReferenceCount.field_0x0 = 0;
    TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
              ((TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> *)
               &pTVar17[3].SharedReferenceCount,(TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0
               ,0);
    pTVar18 = pTVar17;
  }
  TSharedRef<UE::ToolMenus::FMenuSection,1>::TSharedRef<UE::ToolMenus::FMenuSection,1>
            (&TStack_58,(FMenuSection *)(pTVar18 + 1),pTVar18);
  pFVar12 = ::FName::FName(&FStack_108,"LastSection");
  FVar6 = *pFVar12;
  pTVar18 = ::operator_new(0x48);
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    pTVar18->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18->WeakReferenceCount = (atomic<int>)0x1;
    pTVar18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar18[1]._padding_ = 0;
    pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar18[2]._padding_ = (longlong)FVar6;
    pTVar18[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar18[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar18[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar18[3]._padding_ + 4) = 0xffffffff;
    *(undefined8 *)&pTVar18[3].SharedReferenceCount.field_0x0 = 0;
    TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
              ((TArray<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSizedDefaultAllocator<32>_> *)
               &pTVar18[3].SharedReferenceCount,(TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0
               ,0);
    pTVar22 = pTVar18;
  }
  TSharedRef<UE::ToolMenus::FMenuSection,1>::TSharedRef<UE::ToolMenus::FMenuSection,1>
            (&TStack_48,(FMenuSection *)(pTVar22 + 1),pTVar22);
  TStack_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_170.ArrayNum = 3;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&TStack_170.AllocatorInstance,3,&TStack_170.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (TStack_170.AllocatorInstance.Data,&TStack_68,3);
  pFVar12 = ::FName::FName(&FStack_100,"TestMenu");
  ToolMenus::FMenu::FMenu(&FStack_e8,*pFVar12,&TStack_170);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_170.AllocatorInstance.Data,
             TStack_170.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_170.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(TStack_170.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_58.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_68.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)TStack_160.AllocatorInstance.Data,
             TStack_160.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)TStack_160.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0) {
    FMemory::Free(TStack_160.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  puVar10 = puStack_148;
  pUVar19 = ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                      ((FToolMenusTestUtiltiesSpec *)*puStack_148);
  this = (FAutomationTestBase *)*puVar10;
  ::FString::FString(&FStack_140,
                     "Actual section entries to (exactly) match the expected section entries");
  FStack_180.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = false;
  FStack_180.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  FStack_180.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  FStack_180.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_180.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = true;
  FStack_180.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  FStack_180.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  FStack_180.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_180.TestInstance = this;
  bVar11 = ToolMenus::FToolMenuAutomationTestAdapter::Matches(&FStack_180,&FStack_e8,pUVar19);
  FVar20.Data = (FScriptContainerElement *)L"";
  if (FStack_140.Data.ArrayNum != 0) {
    FVar20.Data = FStack_140.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this,(wchar_t *)FVar20.Data,bVar11);
  if (FStack_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_140.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_e8.Sections.AllocatorInstance.Data,
             FStack_e8.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_e8.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_e8.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)FStack_e8._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(FStack_e8._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)FStack_e8._padding_ + 8))(FStack_e8._padding_,1);
    }
  }
  return;
}

// Call @ 142c4f150

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>,void>
::Call(void *param_1)

{
  FAutomationSpecBase *pFVar1;
  FString FStack_78;
  FSourceLocation FStack_68;
  code *apcStack_48 [2];
  undefined **ppuStack_38;
  FAutomationSpecBase *pFStack_30;
  undefined8 uStack_20;
  
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
                 ::_vftable_;
  apcStack_48[0] =
       TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
       ::Call;
  uStack_20 = 0;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Should match any existing section");
  FStack_68.Impl._Line = 0x50;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FStack_68.Impl._Column = 4;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Should allow extra sections");
  FStack_68.Impl._Line = 0x66;
  FStack_68.Impl._Column = 4;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Shouldn\'t match out-of-order sections");
  FStack_68.Impl._Line = 0x7b;
  FStack_68.Impl._Column = 4;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Should match any existing entry");
  FStack_68.Impl._Line = 0x92;
  FStack_68.Impl._Column = 4;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)param_1;
  ppuStack_38 = &TFunction_OwnedObject<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_5>,0,0>
                 ::_vftable_;
  uStack_20 = 0;
  apcStack_48[0] =
       TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,void>
       ::Call;
  pFStack_30 = pFVar1;
  ::FString::FString(&FStack_78,"Shouldn\'t match out-of-order entries");
  FStack_68.Impl._Line = 0xaa;
  FStack_68.Impl._Column = 4;
  FStack_68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ToolMenus\\Private\\Tests\\ToolMenusTestUtilities.spec.cpp"
  ;
  FStack_68.Impl._Function =
       "auto __cdecl UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define::<lambda_2>::operator ()(void) const"
  ;
  FAutomationSpecBase::It(pFVar1,&FStack_78,(TFunction<void___cdecl(void)> *)apcStack_48,&FStack_68)
  ;
  if (FStack_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_78.Data.AllocatorInstance.Data);
  }
  return;
}

// Call @ 142c4f160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  longlong *plVar4;
  FAutomationTestBase *this;
  code *pcVar5;
  bool bVar6;
  FName *pFVar7;
  UToolMenu *pUVar8;
  FMenuSection *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_128 [32];
  FToolMenuAutomationTestAdapter FStack_e8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> TStack_d8;
  FString FStack_c8;
  FName FStack_b8;
  FName FStack_b0;
  FName FStack_a8;
  FName FStack_a0;
  FMenu FStack_98;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_60;
  FMenuSection *pFStack_50;
  TReferenceControllerBase<1> *pTStack_48;
  FMenuSection *pFStack_40;
  TReferenceControllerBase<1> *pTStack_38;
  ulonglong uStack_30;
  
  uStack_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar7 = ::FName::FName(&FStack_b8,"FirstSection");
  FVar3 = *pFVar7;
  TStack_60.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (TStack_60.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    TStack_60.Object = ___xmm_00000000000000000000000000000010;
    TStack_60.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c4214a:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    (TStack_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (TStack_60.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (TStack_60.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    TStack_60.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    TStack_60.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(TStack_60.SharedReferenceCount.ReferenceController + 1);
    TStack_60.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&TStack_60.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&TStack_60.SharedReferenceCount.ReferenceController[3]._padding_ + 4)
         = 0xffffffff;
    TStack_60.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    TStack_60.SharedReferenceCount.ReferenceController[4]._padding_ = 0;
    pTVar11 = TStack_60.SharedReferenceCount.ReferenceController;
    TStack_60.Object = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c4214a;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&FStack_b0,"LastSection");
  FVar3 = *pFVar7;
  pTStack_48 = ::operator_new(0x48);
  if (pTStack_48 == (TReferenceControllerBase<1> *)0x0) {
    pFStack_50 = ___xmm_00000000000000000000000000000010;
    pTStack_48 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
    pTVar11 = pTVar10;
LAB_142c4224b:
    if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
       (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9->_padding_ = (longlong)pFVar9;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pFVar9->_padding_;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTStack_48->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_48->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_48->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_48[1]._padding_ = 0;
    pTStack_48[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_48 + 1);
    pTStack_48[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_48[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_48[3]._padding_ + 4) = 0xffffffff;
    pTStack_48[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_48[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_48[4]._padding_ = 0;
    pTVar11 = pTStack_48;
    pFStack_50 = pFVar9;
    if (pFVar9 != (FMenuSection *)0x0) goto LAB_142c4224b;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = ::FName::FName(&FStack_a8,"MiddleSection");
  FVar3 = *pFVar7;
  pTStack_38 = ::operator_new(0x48);
  if (pTStack_38 == (TReferenceControllerBase<1> *)0x0) {
    pFStack_40 = ___xmm_00000000000000000000000000000010;
    pTStack_38 = _UNK_150651568;
    pFVar9 = (FMenuSection *)&DAT_00000010;
  }
  else {
    pTStack_38->SharedReferenceCount = (atomic<int>)0x1;
    pTStack_38->WeakReferenceCount = (atomic<int>)0x1;
    pTStack_38->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTStack_38[1]._padding_ = 0;
    pTStack_38[1].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[1].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[2]._padding_ = (longlong)FVar3;
    pFVar9 = (FMenuSection *)(pTStack_38 + 1);
    pTStack_38[2].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTStack_38[3]._padding_ = 0;
    *(undefined4 *)((longlong)&pTStack_38[3]._padding_ + 4) = 0xffffffff;
    pTStack_38[3].SharedReferenceCount = (atomic<int>)0x0;
    pTStack_38[3].WeakReferenceCount = (atomic<int>)0x0;
    pTStack_38[4]._padding_ = 0;
    pTVar10 = pTStack_38;
    pFStack_40 = pFVar9;
    if (pFVar9 == (FMenuSection *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      goto LAB_142c423aa;
    }
  }
  if (((pFVar9->_padding_ == 0) || (*(longlong *)&pFVar9->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar9->_padding_ + 8) < 1)) {
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar9->_padding_ = (longlong)pFVar9;
    if (pTVar10 != *(TReferenceControllerBase<1> **)&pFVar9->_padding_) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar4 = *(longlong **)&pFVar9->_padding_;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar9->_padding_ = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
LAB_142c423aa:
  TStack_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d8.ArrayNum = 3;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,3,0,&TStack_d8.AllocatorInstance,3,&TStack_d8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (TStack_d8.AllocatorInstance.Data,&TStack_60,3);
  pFVar7 = ::FName::FName(&FStack_a0,"TestMenu");
  ToolMenus::FMenu::FMenu(&FStack_98,*pFVar7,&TStack_d8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_d8.AllocatorInstance.Data,
             TStack_d8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_d8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(TStack_d8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_60.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0,0);
  pUVar8 = ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                     (*(FToolMenusTestUtiltiesSpec **)param_1);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_c8,"Menu sections shouldn\'t match wrongly ordered sections");
  FStack_e8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  FStack_e8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  FStack_e8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  FStack_e8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_e8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  FStack_e8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  FStack_e8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  FStack_e8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_e8.TestInstance = this;
  bVar6 = ToolMenus::FToolMenuAutomationTestAdapter::Matches(&FStack_e8,&FStack_98,pUVar8);
  FVar12.Data = (FScriptContainerElement *)L"";
  if (FStack_c8.Data.ArrayNum != 0) {
    FVar12.Data = FStack_c8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this,(wchar_t *)FVar12.Data,bVar6);
  if (FStack_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_98.Sections.AllocatorInstance.Data,
             FStack_98.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_98.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_98.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)FStack_98._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(FStack_98._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)FStack_98._padding_ + 8))(FStack_98._padding_,1);
    }
  }
  return;
}

// Call @ 142c4f170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FName FVar4;
  longlong *plVar5;
  FAutomationTestBase *this;
  code *pcVar6;
  FNameEntryId FVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UToolMenu *pUVar13;
  FMenuEntryBase *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMenuSection *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForAnyElementType FVar18;
  FName FStackX_18;
  FName FStackX_20;
  ForAnyElementType FStack_108;
  int iStack_100;
  int iStack_fc;
  FToolMenuAutomationTestAdapter FStack_f8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> TStack_e8;
  TSharedRef<UE::ToolMenus::FMenuEntryBase,1> TStack_d8;
  TReferenceControllerBase<1> *pTStack_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_b8;
  FString FStack_a8;
  FName FStack_98;
  FName FStack_90;
  FMenu FStack_88;
  
  pFVar10 = ::FName::FName(&FStackX_18,"MiddleEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar11 = ::operator_new(0x50);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FMenuEntryBase *)&DAT_00000010;
    pTVar11 = pTVar17;
LAB_142c42927:
    if (((pFVar14[1]._padding_ == 0) ||
        (lVar3 = *(longlong *)&pFVar14[1].Name.ComparisonIndex, lVar3 == 0)) ||
       (*(int *)(lVar3 + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar14[1]._padding_ = (longlong)pFVar14;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar14[1].Name.ComparisonIndex;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar11[1].WeakReferenceCount = (atomic<int>)uVar8;
    pFVar14 = (FMenuEntryBase *)(pTVar11 + 1);
    *(undefined1 *)&pTVar11[2]._padding_ = 3;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[4]._padding_ + 4) = 0xffffffff;
    pTVar11[4].SharedReferenceCount.field_0x1 = 0;
    if (pFVar14 != (FMenuEntryBase *)0x0) goto LAB_142c42927;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_d8.Object = pFVar14;
  TStack_d8.SharedReferenceCount.ReferenceController = pTVar11;
  pFVar10 = ::FName::FName(&FStackX_20,"LastEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar12 = ::operator_new(0x50);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar12 = pTVar17;
LAB_142c42a3e:
    lVar3._0_4_ = pTVar15[1].SharedReferenceCount;
    lVar3._4_4_ = pTVar15[1].WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar15[2]._padding_ == 0)) || (*(int *)(pTVar15[2]._padding_ + 8) < 1)) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar15[1].SharedReferenceCount = pTVar15;
      if (pTVar12 != (TReferenceControllerBase<1> *)pTVar15[2]._padding_) {
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pTVar15[2]._padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        pTVar15[2]._padding_ = (longlong)pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  else {
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar12[1].WeakReferenceCount = (atomic<int>)uVar8;
    pTVar15 = pTVar12 + 1;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    *(undefined1 *)&pTVar12[2]._padding_ = 3;
    pTVar12[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar12[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar12[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar12[4]._padding_ + 4) = 0xffffffff;
    pTVar12[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_142c42a3e;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  FStack_108.Data = (FScriptContainerElement *)0x0;
  iStack_100 = 2;
  pTStack_c8 = pTVar15;
  pTStack_c0 = pTVar12;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&FStack_108,2,&iStack_fc);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            (FStack_108.Data,&TStack_d8,2);
  pFVar10 = ::FName::FName(&FStack_98,"FirstSection");
  FVar4 = *pFVar10;
  TStack_b8.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  iVar2 = iStack_100;
  FVar18.Data = FStack_108.Data;
  if (TStack_b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    TStack_b8.Object = ___xmm_00000000000000000000000000000010;
    TStack_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar16 = (FMenuSection *)&DAT_00000010;
  }
  else {
    (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (TStack_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (TStack_b8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    TStack_b8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    TStack_b8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar4;
    TStack_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&TStack_b8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&TStack_b8.SharedReferenceCount.ReferenceController[3]._padding_ + 4)
         = 0xffffffff;
    piVar1 = (int *)((longlong)&TStack_b8.SharedReferenceCount.ReferenceController[4]._padding_ + 4)
    ;
    *(int *)&TStack_b8.SharedReferenceCount.ReferenceController[4]._padding_ = iStack_100;
    if (iStack_100 == 0) {
      *piVar1 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iStack_100,0,
                 (ForAnyElementType *)
                 &TStack_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount,
                 iStack_100,piVar1);
      ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
                (*(void **)&TStack_b8.SharedReferenceCount.ReferenceController[3].
                            SharedReferenceCount,
                 (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FVar18.Data,iVar2);
    }
    pFVar16 = (FMenuSection *)(TStack_b8.SharedReferenceCount.ReferenceController + 1);
    pTVar17 = TStack_b8.SharedReferenceCount.ReferenceController;
    TStack_b8.Object = pFVar16;
    if (pFVar16 == (FMenuSection *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_142c42c67;
    }
  }
  if (((pFVar16->_padding_ == 0) || (*(longlong *)&pFVar16->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar16->_padding_ + 8) < 1)) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16->_padding_ = (longlong)pFVar16;
    if (pTVar17 != *(TReferenceControllerBase<1> **)&pFVar16->_padding_) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar16->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar16->_padding_ = pTVar17;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
LAB_142c42c67:
  TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_e8.ArrayNum = 1;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&TStack_e8.AllocatorInstance,1,&TStack_e8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (TStack_e8.AllocatorInstance.Data,&TStack_b8,1);
  pFVar10 = ::FName::FName(&FStack_90,"TestMenu");
  ToolMenus::FMenu::FMenu(&FStack_88,*pFVar10,&TStack_e8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_e8.AllocatorInstance.Data,
             TStack_e8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_e8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(TStack_e8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_b8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FStack_108.Data,iStack_100);
  if ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FStack_108.Data !=
      (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pUVar13 = ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                      (*(FToolMenusTestUtiltiesSpec **)param_1);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_a8,"Actual menu entries to (partially) match the expected entries(s)");
  FStack_f8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = false;
  FStack_f8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  FStack_f8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  FStack_f8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_f8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  FStack_f8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  FStack_f8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  FStack_f8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_f8.TestInstance = this;
  bVar9 = ToolMenus::FToolMenuAutomationTestAdapter::Matches(&FStack_f8,&FStack_88,pUVar13);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (FStack_a8.Data.ArrayNum != 0) {
    FVar18.Data = FStack_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestTrue(this,(wchar_t *)FVar18.Data,bVar9);
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_88.Sections.AllocatorInstance.Data,
             FStack_88.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_88.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_88.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)FStack_88._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(FStack_88._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)FStack_88._padding_ + 8))(FStack_88._padding_,1);
    }
  }
  return;
}

// Call @ 142c4f180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UE::ToolMenus::Private::FToolMenusTestUtiltiesSpec::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_5>,void>
::Call(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FName FVar4;
  longlong *plVar5;
  FAutomationTestBase *this;
  code *pcVar6;
  FNameEntryId FVar7;
  uint uVar8;
  bool bVar9;
  FName *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  UToolMenu *pUVar13;
  FMenuEntryBase *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FMenuSection *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  ForAnyElementType FVar18;
  FName FStackX_18;
  FName FStackX_20;
  ForAnyElementType FStack_108;
  int iStack_100;
  int iStack_fc;
  FToolMenuAutomationTestAdapter FStack_f8;
  TArray<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSizedDefaultAllocator<32>_> TStack_e8;
  TSharedRef<UE::ToolMenus::FMenuEntryBase,1> TStack_d8;
  TReferenceControllerBase<1> *pTStack_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  TSharedRef<UE::ToolMenus::FMenuSection,1> TStack_b8;
  FString FStack_a8;
  FName FStack_98;
  FName FStack_90;
  FMenu FStack_88;
  
  pFVar10 = ::FName::FName(&FStackX_18,"LastEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar11 = ::operator_new(0x50);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pFVar14 = (FMenuEntryBase *)&DAT_00000010;
    pTVar11 = pTVar17;
LAB_142c43047:
    if (((pFVar14[1]._padding_ == 0) ||
        (lVar3 = *(longlong *)&pFVar14[1].Name.ComparisonIndex, lVar3 == 0)) ||
       (*(int *)(lVar3 + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar14[1]._padding_ = (longlong)pFVar14;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = *(longlong **)&pFVar14[1].Name.ComparisonIndex;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar14[1].Name.ComparisonIndex = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar11[1].WeakReferenceCount = (atomic<int>)uVar8;
    pFVar14 = (FMenuEntryBase *)(pTVar11 + 1);
    *(undefined1 *)&pTVar11[2]._padding_ = 3;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar11[4]._padding_ + 4) = 0xffffffff;
    pTVar11[4].SharedReferenceCount.field_0x1 = 0;
    if (pFVar14 != (FMenuEntryBase *)0x0) goto LAB_142c43047;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  TStack_d8.Object = pFVar14;
  TStack_d8.SharedReferenceCount.ReferenceController = pTVar11;
  pFVar10 = ::FName::FName(&FStackX_20,"MiddleEntry");
  FVar7.Value = (pFVar10->ComparisonIndex).Value;
  uVar8 = pFVar10->Number;
  pTVar12 = ::operator_new(0x50);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar12 = pTVar17;
LAB_142c4315e:
    lVar3._0_4_ = pTVar15[1].SharedReferenceCount;
    lVar3._4_4_ = pTVar15[1].WeakReferenceCount;
    if (((lVar3 == 0) || (pTVar15[2]._padding_ == 0)) || (*(int *)(pTVar15[2]._padding_ + 8) < 1)) {
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(TReferenceControllerBase<1> **)&pTVar15[1].SharedReferenceCount = pTVar15;
      if (pTVar12 != (TReferenceControllerBase<1> *)pTVar15[2]._padding_) {
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->WeakReferenceCount = (atomic<int>)((int)pTVar12->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)pTVar15[2]._padding_;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        pTVar15[2]._padding_ = (longlong)pTVar12;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
  }
  else {
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuEntry_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12[1].SharedReferenceCount = (atomic<int>)FVar7.Value;
    pTVar12[1].WeakReferenceCount = (atomic<int>)uVar8;
    pTVar15 = pTVar12 + 1;
    pTVar12[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12[3]._padding_ = 0;
    *(undefined1 *)&pTVar12[2]._padding_ = 3;
    pTVar12[1]._padding_ = (longlong)&___7FMenuEntry_ToolMenus_UE__6B_;
    pTVar12[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar12[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar12[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar12[4]._padding_ + 4) = 0xffffffff;
    pTVar12[4].SharedReferenceCount.field_0x1 = 0;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_142c4315e;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
  }
  FStack_108.Data = (FScriptContainerElement *)0x0;
  iStack_100 = 2;
  pTStack_c8 = pTVar15;
  pTStack_c0 = pTVar12;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&FStack_108,2,&iStack_fc);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            (FStack_108.Data,&TStack_d8,2);
  pFVar10 = ::FName::FName(&FStack_98,"FirstSection");
  FVar4 = *pFVar10;
  TStack_b8.SharedReferenceCount.ReferenceController = ::operator_new(0x48);
  iVar2 = iStack_100;
  FVar18.Data = FStack_108.Data;
  if (TStack_b8.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    TStack_b8.Object = ___xmm_00000000000000000000000000000010;
    TStack_b8.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pFVar16 = (FMenuSection *)&DAT_00000010;
  }
  else {
    (TStack_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (TStack_b8.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (TStack_b8.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFMenuSection_ToolMenus_UE___00_SharedPointerInternals__6B_
    ;
    TStack_b8.SharedReferenceCount.ReferenceController[1]._padding_ = 0;
    TStack_b8.SharedReferenceCount.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[2]._padding_ = (longlong)FVar4;
    TStack_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    TStack_b8.SharedReferenceCount.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&TStack_b8.SharedReferenceCount.ReferenceController[3]._padding_ = 0;
    *(undefined4 *)((longlong)&TStack_b8.SharedReferenceCount.ReferenceController[3]._padding_ + 4)
         = 0xffffffff;
    piVar1 = (int *)((longlong)&TStack_b8.SharedReferenceCount.ReferenceController[4]._padding_ + 4)
    ;
    *(int *)&TStack_b8.SharedReferenceCount.ReferenceController[4]._padding_ = iStack_100;
    if (iStack_100 == 0) {
      *piVar1 = 0;
    }
    else {
      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iStack_100,0,
                 (ForAnyElementType *)
                 &TStack_b8.SharedReferenceCount.ReferenceController[3].SharedReferenceCount,
                 iStack_100,piVar1);
      ConstructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
                (*(void **)&TStack_b8.SharedReferenceCount.ReferenceController[3].
                            SharedReferenceCount,
                 (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FVar18.Data,iVar2);
    }
    pFVar16 = (FMenuSection *)(TStack_b8.SharedReferenceCount.ReferenceController + 1);
    pTVar17 = TStack_b8.SharedReferenceCount.ReferenceController;
    TStack_b8.Object = pFVar16;
    if (pFVar16 == (FMenuSection *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_142c43387;
    }
  }
  if (((pFVar16->_padding_ == 0) || (*(longlong *)&pFVar16->_padding_ == 0)) ||
     (*(int *)(*(longlong *)&pFVar16->_padding_ + 8) < 1)) {
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16->_padding_ = (longlong)pFVar16;
    if (pTVar17 != *(TReferenceControllerBase<1> **)&pFVar16->_padding_) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = *(longlong **)&pFVar16->_padding_;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar16->_padding_ = pTVar17;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  }
LAB_142c43387:
  TStack_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_e8.ArrayNum = 1;
  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&TStack_e8.AllocatorInstance,1,&TStack_e8.ArrayMax);
  ConstructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            (TStack_e8.AllocatorInstance.Data,&TStack_b8,1);
  pFVar10 = ::FName::FName(&FStack_90,"TestMenu");
  ToolMenus::FMenu::FMenu(&FStack_88,*pFVar10,&TStack_e8);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_e8.AllocatorInstance.Data,
             TStack_e8.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)TStack_e8.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(TStack_e8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_b8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::ToolMenus::FMenuEntryBase,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FStack_108.Data,iStack_100);
  if ((TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)FStack_108.Data !=
      (TSharedRef<UE::ToolMenus::FMenuEntryBase,1> *)0x0) {
    FMemory::Free(FStack_108.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_d8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  pUVar13 = ToolMenus::Private::FToolMenusTestUtiltiesSpec::GenerateTestMenu
                      (*(FToolMenusTestUtiltiesSpec **)param_1);
  this = *(FAutomationTestBase **)param_1;
  ::FString::FString(&FStack_a8,"Menu entries shouldn\'t match wrongly ordered entries");
  FStack_f8.Parameters.SectionMatchParameters.bActualHasAllExpectedItems = true;
  FStack_f8.Parameters.SectionMatchParameters.bActualHasExpectedOrder = true;
  FStack_f8.Parameters.SectionMatchParameters.bExpectedHasAllActualItems = false;
  FStack_f8.Parameters.SectionMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_f8.Parameters.EntryMatchParameters.bActualHasAllExpectedItems = false;
  FStack_f8.Parameters.EntryMatchParameters.bActualHasExpectedOrder = true;
  FStack_f8.Parameters.EntryMatchParameters.bExpectedHasAllActualItems = false;
  FStack_f8.Parameters.EntryMatchParameters.bMatchChildrenIfAnyExpected = true;
  FStack_f8.TestInstance = this;
  bVar9 = ToolMenus::FToolMenuAutomationTestAdapter::Matches(&FStack_f8,&FStack_88,pUVar13);
  FVar18.Data = (FScriptContainerElement *)L"";
  if (FStack_a8.Data.ArrayNum != 0) {
    FVar18.Data = FStack_a8.Data.AllocatorInstance.Data;
  }
  FAutomationTestBase::TestFalse(this,(wchar_t *)FVar18.Data,bVar9);
  if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
  }
  DestructItems<TSharedRef<UE::ToolMenus::FMenuSection,1>,int>
            ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_88.Sections.AllocatorInstance.Data,
             FStack_88.Sections.ArrayNum);
  if ((TSharedRef<UE::ToolMenus::FMenuSection,1> *)FStack_88.Sections.AllocatorInstance.Data !=
      (TSharedRef<UE::ToolMenus::FMenuSection,1> *)0x0) {
    FMemory::Free(FStack_88.Sections.AllocatorInstance.Data);
  }
  if ((longlong *)FStack_88._padding_ != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)(FStack_88._padding_ + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)FStack_88._padding_ + 8))(FStack_88._padding_,1);
    }
  }
  return;
}

