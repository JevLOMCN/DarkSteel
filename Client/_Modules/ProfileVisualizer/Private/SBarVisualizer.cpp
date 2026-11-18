// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 28

// ~SBarVisualizer @ 148d58730

void __thiscall SBarVisualizer::~SBarVisualizer(SBarVisualizer *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBarGraphContextMenuDelegate);
  pvVar1 = *(void **)&(this->OnBarGraphContextMenuDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBarGraphContextMenuDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBarEventSelectionChangedDelegate)
  ;
  pvVar1 = *(void **)&(this->OnBarEventSelectionChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBarEventSelectionChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBarGraphExpansionChangedDelegate)
  ;
  pvVar1 = *(void **)&(this->OnBarGraphExpansionChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBarGraphExpansionChangedDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBarGraphSelectionChangedDelegate)
  ;
  pvVar1 = *(void **)&(this->OnBarGraphSelectionChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBarGraphSelectionChangedDelegate);
  TSharedPtr<STimeline,1>::~TSharedPtr<STimeline,1>(&this->Timeline);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ScrollBar).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ZoomLabel).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<SGraphBar,1>,int>
            ((TSharedPtr<SGraphBar,1> *)(this->Graphs).AllocatorInstance.Data,
             (this->Graphs).ArrayNum);
  pFVar2 = (this->Graphs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
            ((TSharedPtr<FVisualizerEvent,1> *)(this->ProfileDataView).AllocatorInstance.Data,
             (this->ProfileDataView).ArrayNum);
  pFVar2 = (this->ProfileDataView).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ProfileData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SelectedBarGraph).SharedReferenceCount.ReferenceController);
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>(&this->BarGraphsList);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// AdjustTimeline @ 148d5d4e0

void __thiscall
SBarVisualizer::AdjustTimeline(SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  double dVar1;
  double dVar2;
  FVisualizerEvent *pFVar3;
  STimeline *pSVar4;
  code *pcVar5;
  bool bVar6;
  
  if (param_1->Object == (FVisualizerEvent *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEvent.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x28e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_1->Object == (FVisualizerEvent *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  pFVar3 = param_1->Object;
  if (pFVar3 == (FVisualizerEvent *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar1 = pFVar3->DurationMs;
  dVar2 = param_1->Object->Duration;
  if (param_1->Object == (FVisualizerEvent *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar1 = (dVar1 / dVar2) * param_1->Object->Start;
  if ((this->Timeline).Object == (STimeline *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar4 = (this->Timeline).Object;
  if (param_1->Object == (FVisualizerEvent *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pSVar4->MaxValue = (float)(dVar1 + param_1->Object->DurationMs);
  pSVar4->MinValue = (float)dVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CheckViewMode @ 148d5d8e0

bool __thiscall SBarVisualizer::CheckViewMode(SBarVisualizer *this,uchar param_1)

{
  return this->ViewMode == param_1;
}

// ClearBarSelection @ 148d5d980

void __thiscall
SBarVisualizer::ClearBarSelection
          (SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1,
          TSharedPtr<FVisualizerEvent,1> *param_2)

{
  FVisualizerEvent *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  TSharedPtr<FVisualizerEvent,1> local_38;
  TSharedPtr<FVisualizerEvent,1> local_28;
  
  uVar7 = 0;
  lVar8 = 0;
  while( true ) {
    if (param_1->Object == (FVisualizerEvent *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_1->Object->Children).ArrayNum <= (int)uVar7) break;
    if (param_1->Object == (FVisualizerEvent *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = param_1->Object;
    uVar6 = ~uVar7 >> 0x1f;
    uVar5 = 0;
    if ((int)uVar7 < (pFVar1->Children).ArrayNum) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_2->Object != *(FVisualizerEvent **)((pFVar1->Children).AllocatorInstance.Data + lVar8)
       ) {
      if (param_1->Object == (FVisualizerEvent *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar1 = param_1->Object;
      uVar5 = 0;
      if ((int)uVar7 < (pFVar1->Children).ArrayNum) {
        uVar5 = uVar6;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (pFVar1->Children).AllocatorInstance.Data;
      if (*(longlong *)(pFVar2 + lVar8) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined1 *)(*(longlong *)(pFVar2 + lVar8) + 0x30) = 0;
    }
    local_38.Object = param_2->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1->Object == (FVisualizerEvent *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = param_1->Object;
    uVar5 = 0;
    if ((int)uVar7 < (pFVar1->Children).ArrayNum) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (pFVar1->Children).AllocatorInstance.Data;
    local_28.Object = *(FVisualizerEvent **)(pFVar2 + lVar8);
    local_28.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar2 + lVar8 + 8);
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    ClearBarSelection(this,&local_28,&local_38);
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Construct @ 148d5fba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x000148d604ee) */
/* WARNING: Removing unreachable block (ram,0x000148d60025) */
/* WARNING: Removing unreachable block (ram,0x000148d5fd2a) */
/* WARNING: Removing unreachable block (ram,0x000148d60138) */
/* WARNING: Removing unreachable block (ram,0x000148d60613) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SBarVisualizer::Construct(SBarVisualizer *this,FArguments *param_1)

{
  TSharedPtr<FVisualizerEvent,1> *pTVar1;
  FText *pFVar2;
  TSharedPtr<ISlateStyle,1> *pTVar3;
  FName *pFVar4;
  FSlotArguments *pFVar5;
  FSlateColor *pFVar6;
  FSlotArguments *pFVar7;
  FMargin *pFVar8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *pTVar9;
  TSharedRef<SImage,1> *pTVar10;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar11;
  TSharedRef<SButton,1> *pTVar12;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar13;
  TSharedRef<STextBlock,1> *pTVar14;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SComboButton,1> *pTVar15;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar16;
  TSharedRef<SHorizontalBox,1> *pTVar17;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SBorder,1> *pTVar18;
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar19;
  FVisualizerEvent *pFVar20;
  TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<STimeline,1> *pTVar21;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SScrollBar,1> *pTVar22;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SSlider,1> *pTVar23;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_06;
  TSharedRef<SVerticalBox,1> *pTVar24;
  longlong lVar25;
  code **ppcVar26;
  undefined1 *puVar27;
  pmf_0ca026aa *ppVar28;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar29;
  pmf_7905862e *ppVar30;
  pmf_f45150d9 *ppVar31;
  pmf_f85b6f02 *ppVar32;
  pmf_fb59e4ce *ppVar33;
  pmf_638d7d14 *ppVar34;
  pmf_e17c53d8 *ppVar35;
  pmf_a517a715 *ppVar36;
  pmf_4138e457 *ppVar37;
  T0RequiredArgs local_5c88;
  T0RequiredArgs local_5c87;
  T0RequiredArgs local_5c86;
  T0RequiredArgs local_5c85;
  T0RequiredArgs local_5c84;
  T0RequiredArgs local_5c83;
  T0RequiredArgs local_5c82;
  T0RequiredArgs local_5c81;
  T0RequiredArgs local_5c80;
  T0RequiredArgs local_5c7f;
  T0RequiredArgs local_5c7e;
  T0RequiredArgs local_5c7d;
  T0RequiredArgs local_5c7c;
  T0RequiredArgs local_5c7b;
  T0RequiredArgs local_5c7a;
  T0RequiredArgs local_5c79;
  T0RequiredArgs local_5c78;
  undefined1 local_5c77;
  FName *local_5c70;
  FName *local_5c68;
  FName *local_5c60;
  FName *local_5c58;
  FName *local_5c50;
  uint local_5c48;
  uint local_5c40;
  uint local_5c38;
  uint local_5c30;
  uint local_5c28;
  int local_5c20 [5];
  float local_5c0c;
  int local_5c08 [4];
  uint local_5bf8;
  uint local_5bf0;
  uint local_5be8;
  uint local_5be0;
  FNameEntryId *local_5bd8;
  ISlateStyle *local_5bd0;
  ISlateStyle *local_5bc8;
  ISlateStyle *local_5bc0;
  ISlateStyle *local_5bb8;
  SScrollBar *local_5bb0;
  ISlateStyle *local_5ba8;
  FNameEntryId *local_5ba0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5b98;
  FNameEntryId *local_5b90;
  FNameEntryId *local_5b88;
  FNameEntryId *local_5b80;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5b78;
  undefined4 local_5b70;
  FNameEntryId local_5b6c [2];
  FNameEntryId local_5b64 [2];
  FNameEntryId local_5b5c [2];
  FNameEntryId local_5b54 [2];
  FNameEntryId local_5b4c [3];
  FNameEntryId *local_5b40;
  FName *local_5b38;
  FName local_5b30;
  FName local_5b28;
  TSharedPtr<FExtender,1> *local_5b20;
  TSharedPtr<FUICommandList_const_,1> *local_5b18;
  FName local_5b10;
  ISlateStyle *local_5b08;
  TSharedPtr<FExtender,1> *local_5b00;
  TSharedPtr<FUICommandList_const_,1> *local_5af8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5af0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_5ae8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5ae0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5ad8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_5ad0;
  FNameEntryId *local_5ac8;
  FName *local_5ac0;
  FName local_5ab8;
  FName local_5ab0;
  FName local_5aa8;
  FName local_5aa0;
  FName local_5a98;
  FNameEntryId *local_5a90;
  FName *local_5a88;
  FName local_5a80;
  FName local_5a78;
  FName local_5a70;
  FName local_5a68;
  FName local_5a60;
  TAttribute<EVisibility> *local_5a58;
  TAttribute<FText> *local_5a50;
  FName local_5a48;
  FName local_5a40;
  FSlateIcon *local_5a38;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5a30;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_5a28;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5a20;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_5a18;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_5a10;
  FNameEntryId *local_5a08;
  FName *local_5a00;
  FName local_59f8;
  FName local_59f0;
  FName local_59e8;
  FName local_59e0;
  FName local_59d8;
  FNameEntryId *local_59d0;
  FName *local_59c8;
  FName local_59c0;
  FName local_59b8;
  FName local_59b0;
  FName local_59a8;
  FName local_59a0;
  TAttribute<EVisibility> *local_5998;
  TAttribute<FText> *local_5990;
  FName local_5988;
  FName local_5980;
  FSlateIcon *local_5978;
  FName *local_5970;
  FName local_5968;
  code *local_5960;
  FName *local_5958;
  FName local_5950;
  code *local_5948;
  undefined1 *local_5940;
  undefined1 *local_5938;
  FName *local_5930;
  FName local_5928;
  code *local_5920;
  FSlateBrush *local_5918;
  TAttribute<FSlateBrush_const_*> *local_5910;
  TAttribute<FSlateBrush_const_*> *local_5908;
  FArguments *local_5900;
  FName *local_58f8;
  FName local_58f0;
  FSlateColor *local_58e8;
  FName local_58e0;
  code *local_58d8;
  TAttribute<FSlateColor> *local_58d0;
  TAttribute<FSlateColor> *local_58c8;
  FArguments *local_58c0;
  undefined1 *local_58b8;
  undefined1 *local_58b0;
  FName local_58a8;
  ISlateStyle *local_58a0;
  FArguments *local_5898;
  TAttribute<FSlateColor> *local_5890;
  TAttribute<FSlateColor> *local_5888;
  FArguments *local_5880;
  TAttribute<FMargin> *local_5878;
  TAttribute<FMargin> *local_5870;
  FArguments *local_5868;
  FArguments *local_5860;
  FArguments *local_5858;
  FSlateBrush *local_5850;
  TAttribute<FSlateBrush_const_*> *local_5848;
  TAttribute<FSlateBrush_const_*> *local_5840;
  FArguments *local_5838;
  FArguments *local_5830;
  FArguments *local_5828;
  FArguments *local_5820;
  FSlotArguments *local_5818;
  FSlotArguments *local_5810;
  FArguments *local_5808;
  undefined1 *local_5800;
  undefined1 *local_57f8;
  FName local_57f0;
  ISlateStyle *local_57e8;
  FArguments *local_57e0;
  FArguments *local_57d8;
  FArguments *local_57d0;
  TAttribute<FSlateColor> *local_57c8;
  TAttribute<FSlateColor> *local_57c0;
  FArguments *local_57b8;
  TAttribute<FMargin> *local_57b0;
  TAttribute<FMargin> *local_57a8;
  FArguments *local_57a0;
  FArguments *local_5798;
  FArguments *local_5790;
  FSlateBrush *local_5788;
  TAttribute<FSlateBrush_const_*> *local_5780;
  TAttribute<FSlateBrush_const_*> *local_5778;
  FArguments *local_5770;
  FArguments *local_5768;
  FArguments *local_5760;
  FArguments *local_5758;
  FSlotArguments *local_5750;
  FSlotArguments *local_5748;
  FArguments *local_5740;
  undefined1 *local_5738;
  TAttribute<float> *local_5730;
  TAttribute<float> *local_5728;
  FSlotArguments *local_5720;
  undefined1 *local_5718;
  FArguments *local_5710;
  FArguments *local_5708;
  FSlotArguments *local_5700;
  FSlotArguments *local_56f8;
  FArguments *local_56f0;
  undefined1 *local_56e8;
  TAttribute<FMargin> *local_56e0;
  TAttribute<FMargin> *local_56d8;
  FSlotArgumentsMixin *local_56d0;
  FArguments *local_56c8;
  FName local_56c0;
  ISlateStyle *local_56b8;
  FArguments *local_56b0;
  TAttribute<FMargin> *local_56a8;
  TAttribute<FMargin> *local_56a0;
  FArguments *local_5698;
  FArguments *local_5690;
  FName *local_5688;
  FName local_5680;
  code *local_5678;
  FSlateBrush *local_5670;
  TAttribute<FSlateBrush_const_*> *local_5668;
  TAttribute<FSlateBrush_const_*> *local_5660;
  FArguments *local_5658;
  FArguments *local_5650;
  NamedSlotProperty<SComboButton::FArguments> *local_5648;
  FArguments *local_5640;
  TSharedRef<SWidget,1> *local_5638;
  NamedSlotProperty<SComboButton::FArguments> *local_5630;
  FArguments *local_5628;
  FSlotArguments *local_5620;
  FSlotArguments *local_5618;
  FArguments *local_5610;
  FArguments *local_5608;
  FArguments *local_5600;
  FArguments *local_55f8;
  FSlotArguments *local_55f0;
  FSlotArguments *local_55e8;
  FArguments *local_55e0;
  undefined1 *local_55d8;
  TAttribute<float> *local_55d0;
  TAttribute<float> *local_55c8;
  FSlotArguments *local_55c0;
  undefined1 *local_55b8;
  undefined1 *local_55b0;
  TAttribute<float> *local_55a8;
  TAttribute<float> *local_55a0;
  FSlotArguments *local_5598;
  undefined1 *local_5590;
  FArguments *local_5588;
  FArguments *local_5580;
  undefined1 *local_5578;
  TAttribute<ESelectionMode::Type> *local_5570;
  FArguments *local_5568;
  FArguments *local_5560;
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> *local_5558;
  FArguments *local_5550;
  FSlotArguments *local_5548;
  FSlotArguments *local_5540;
  FArguments *local_5538;
  FArguments *local_5530;
  FSlotArguments *local_5528;
  FSlotArguments *local_5520;
  FArguments *local_5518;
  undefined1 *local_5510;
  undefined1 *local_5508;
  FArguments *local_5500;
  FArguments *local_54f8;
  TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs> *local_54f0;
  FArguments *local_54e8;
  FSlotArguments *local_54e0;
  FSlotArguments *local_54d8;
  FArguments *local_54d0;
  undefined1 *local_54c8;
  undefined1 *local_54c0;
  FArguments *local_54b8;
  FArguments *local_54b0;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> *local_54a8;
  FArguments *local_54a0;
  FSlotArguments *local_5498;
  FSlotArguments *local_5490;
  FArguments *local_5488;
  undefined1 *local_5480;
  undefined1 *local_5478;
  undefined1 *local_5470;
  TAttribute<float> *local_5468;
  TAttribute<float> *local_5460;
  FSlotArguments *local_5458;
  undefined1 *local_5450;
  FArguments *local_5448;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *local_5440;
  FArguments *local_5438;
  FSlotArguments *local_5430;
  FSlotArguments *local_5428;
  FArguments *local_5420;
  undefined1 *local_5418;
  TAttribute<float> *local_5410;
  TAttribute<float> *local_5408;
  FSlotArguments *local_5400;
  undefined1 *local_53f8;
  FArguments *local_53f0;
  FArguments *local_53e8;
  FArguments *local_53e0;
  FSlotArguments *local_53d8;
  FSlotArguments *local_53d0;
  FArguments *local_53c8;
  FArguments *local_53c0;
  FSlotArguments *local_53b8;
  FSlotArguments *local_53b0;
  FArguments *local_53a8;
  FArguments *local_53a0;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_5398;
  code *local_5390;
  code *local_5388;
  undefined4 local_5380;
  TSharedRef<SWidget,1> local_5378;
  TSharedRef<SWidget,1> local_5368;
  TSharedRef<SWidget,1> local_5358;
  TSharedRef<SWidget,1> local_5348;
  TSharedRef<SWidget,1> local_5338;
  TSharedRef<SWidget,1> local_5328;
  TSharedRef<SWidget,1> local_5318;
  TSharedRef<SWidget,1> local_5308;
  TSharedRef<SWidget,1> local_52f8;
  code *local_52e8;
  undefined4 local_52e0;
  code *local_52d8;
  undefined4 local_52d0;
  code *local_52c8;
  undefined4 local_52c0;
  code *local_52b8;
  undefined4 local_52b0;
  code *local_52a8;
  undefined4 local_52a0;
  code *local_5298;
  undefined4 local_5290;
  code *local_5288;
  undefined4 local_5280;
  code *local_5278;
  undefined4 local_5270;
  code *local_5268;
  undefined4 local_5260;
  code *local_5258;
  undefined4 local_5250;
  code *local_5248;
  undefined4 local_5240;
  code *local_5238;
  undefined4 local_5230;
  code *local_5228;
  undefined4 local_5220;
  TSharedRef<SWidget,1> local_5218;
  code *local_5208;
  undefined4 local_5200;
  TSharedRef<SWidget,1> local_51f8;
  TSharedRef<SWidget,1> local_51e8;
  TSharedRef<SWidget,1> local_51d8;
  TSharedRef<SWidget,1> local_51c8;
  TSharedRef<SWidget,1> local_51b8;
  TSharedRef<SWidget,1> local_51a8;
  TSharedRef<SWidget,1> local_5198;
  FName local_5188;
  FName local_5180;
  FName local_5178;
  FName local_5170;
  FName local_5168;
  FName local_5160;
  FName local_5158;
  FName local_5150;
  FName local_5148;
  FName local_5140;
  pmf_0ca026aa local_5138;
  pmf_7905862e local_5128;
  FText local_5118;
  FText local_5108;
  pmf_0ca026aa local_50f8;
  pmf_7905862e local_50e8;
  FText local_50d8;
  FText local_50c8;
  TSharedPtr<ISlateStyle,1> local_50b8;
  TSharedPtr<ISlateStyle,1> local_50a8;
  undefined1 local_5098 [16];
  pmf_f45150d9 local_5088;
  undefined1 local_5078 [16];
  pmf_f85b6f02 local_5068;
  undefined1 local_5058 [16];
  pmf_f45150d9 local_5048;
  undefined1 local_5038 [16];
  pmf_f85b6f02 local_5028;
  undefined1 local_5018 [16];
  pmf_e17c53d8 local_5008;
  undefined1 local_4ff8 [16];
  pmf_fb59e4ce local_4fe8;
  undefined1 local_4fd8 [16];
  pmf_638d7d14 local_4fc8;
  undefined1 local_4fb8 [16];
  pmf_4138e457 local_4fa8;
  undefined1 local_4f98 [16];
  pmf_e17c53d8 local_4f88;
  undefined1 local_4f78 [16];
  pmf_a517a715 local_4f68;
  undefined1 local_4f58 [16];
  pmf_4138e457 local_4f48;
  TSharedRef<SVerticalBox,1> local_4f38;
  TSharedRef<SHorizontalBox,1> local_4f28;
  TSharedRef<SSlider,1> local_4f18;
  TSharedRef<STextBlock,1> local_4f08;
  TSharedRef<SScrollBar,1> local_4ef8;
  TSharedRef<STimeline,1> local_4ee8;
  TSharedRef<SHorizontalBox,1> local_4ed8;
  TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> local_4ec8;
  TSharedRef<SBorder,1> local_4eb8;
  TSharedRef<SHorizontalBox,1> local_4ea8;
  TSharedRef<SComboButton,1> local_4e98;
  TSharedRef<SWidget,1> local_4e88;
  TSharedRef<SImage,1> local_4e78;
  TSharedPtr<ISlateStyle,1> local_4e68;
  TSharedRef<STextBlock,1> local_4e58;
  TSharedRef<SButton,1> local_4e48;
  TSharedRef<SImage,1> local_4e38;
  TSharedRef<SButton,1> local_4e28;
  TSharedRef<SImage,1> local_4e18;
  TSharedPtr<ISlateStyle,1> local_4e08;
  TSharedPtr<ISlateStyle,1> local_4df8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4de8;
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs> local_4dd0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_4db8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4da0;
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs> local_4d88;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4d70;
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs> local_4d58;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4d40;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4d28;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_4d10;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_4cf8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4ce0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_4cc8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_4cb0;
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs> local_4c98;
  TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs> local_4c80;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_4c68;
  TSharedPtr<FUICommandList_const_,1> local_4c50;
  FMargin local_4c40;
  FMargin local_4c30;
  FMargin local_4c20;
  NamedSlotProperty<SComboButton::FArguments> local_4c10;
  TAttribute<FText> local_4c00;
  TAttribute<FText> local_4bd0;
  TAttribute<FText> local_4ba0;
  NamedSlotProperty<SComboButton::FArguments> local_4b70;
  TSharedPtr<FExtender,1> local_4b60;
  TAttribute<EVisibility> local_4b50;
  TAttribute<EVisibility> local_4b30;
  TAttribute<FText> local_4b10;
  undefined1 local_4ae0 [20];
  FSlateColor local_4acc;
  FSlateColor local_4ab8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4aa0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4a88;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_4a70;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4a58;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4a40;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_4a28;
  TAttribute<FText> local_4a10;
  TAttribute<FText> local_49e0;
  TAttribute<float> local_49b0;
  undefined1 local_4990 [32];
  TAttribute<float> local_4970;
  TAttribute<float> local_4950;
  FSlateIcon local_4930;
  TAttribute<float> local_4910;
  TAttribute<float> local_48f0;
  FSlateIcon local_48d0;
  FUIAction local_48b0;
  FUIAction local_4848;
  TAttribute<FSlateBrush_const_*> local_47e0;
  TAttribute<FSlateBrush_const_*> local_47b8;
  TAttribute<FSlateBrush_const_*> local_4790;
  TAttribute<FSlateBrush_const_*> local_4768;
  TAttribute<FMargin> local_4740;
  TAttribute<FSlateColor> local_4710;
  TAttribute<FMargin> local_46e0;
  TAttribute<FMargin> local_46b0;
  TAttribute<FMargin> local_4680;
  TAttribute<FSlateColor> local_4650;
  TAttribute<FSlateColor> local_4620;
  FMenuBuilder local_45f0;
  FSlotArguments local_4468;
  FSlotArguments local_4380;
  FSlotArguments local_4298;
  FSlotArguments local_41b0;
  FSlotArguments local_40c8;
  FSlotArguments local_3fe0;
  FSlotArguments local_3ef8;
  FSlotArguments local_3e10;
  FSlotArguments local_3d28;
  FSlotArguments local_3c40;
  FSlotArguments local_3b58;
  FSlotArguments local_3a70;
  FArguments local_3988;
  FArguments local_3780;
  FArguments local_3578;
  FArguments local_3370;
  FArguments local_3168;
  FArguments local_2f60;
  FArguments local_2cc0;
  FArguments local_2a18;
  FArguments local_2770;
  FArguments local_24c8;
  FArguments local_2190;
  FArguments local_1e10;
  FArguments local_1a30;
  FArguments local_1550;
  FArguments local_1010;
  FArguments local_ad0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x148d5fbb6;
  local_5b70 = 0;
  this->ZoomSliderValue = 0.0;
  this->ScrollbarOffset = 0.0;
  pTVar1 = TAttribute<TSharedPtr<FVisualizerEvent,1>_>::Get(&param_1->_ProfileData);
  TSharedPtr<FVisualizerEvent,1>::operator=(&this->ProfileData,pTVar1);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnBarGraphSelectionChangedDelegate,&param_1->_OnBarGraphSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnBarGraphExpansionChangedDelegate,&param_1->_OnBarGraphExpansionChanged);
  TDelegate<void___cdecl(int,TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->OnBarEventSelectionChangedDelegate,&param_1->_OnBarEventSelectionChanged);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,FPointerEvent_const_&),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnBarGraphContextMenuDelegate,&param_1->_OnBarGraphContextMenu);
  this->bSuppressBarGraphSelectionChangedDelegate = false;
  this->ViewMode = '\0';
  TSharedPtr<FVisualizerEvent,1>::operator=(&this->SelectedBarGraph,&this->ProfileData);
  CreateDataView(this);
  local_5c77 = 1;
  local_5c70 = &local_5140;
  local_5b80 = FNameEntryId::FNameEntryId(local_5b6c);
  local_5c08[2] = local_5b80->Value;
  local_5bf8 = local_5c08[2];
  local_5b40 = local_5b80;
  FNameEntryId::FNameEntryId(&local_5c70->ComparisonIndex);
  local_5c70->Number = 0;
  (local_5c70->ComparisonIndex).Value = local_5bf8;
  local_5c70->Number = 0;
  local_5b38 = local_5c70;
  local_5b30 = *local_5c70;
  local_5b28 = local_5b30;
  local_5b10 = local_5b30;
  local_5b08 = FCoreStyle::Get();
  local_5b20 = &local_4b60;
  local_5b00 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_5b20,(FNullTag *)0x0);
  local_5b18 = &local_4c50;
  local_5af8 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                         (local_5b18,(FNullTag *)0x0);
  FMenuBuilder::FMenuBuilder
            (&local_45f0,true,local_5af8,local_5b00,false,local_5b08,true,local_5b10,true);
  local_5af0 = &local_4aa0;
  local_52e8 = CheckViewMode;
  local_52e0 = 0;
  ppcVar26 = &local_52e8;
  ppVar28 = &local_5138;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar28 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    ppVar28 = (pmf_0ca026aa *)&ppVar28->field_0x1;
  }
  local_5ae0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SBarVisualizer,unsigned_char_const_&>(local_5af0,this,&local_5138,"");
  local_5b78 = &local_4a88;
  pTVar29 = local_5b78;
  for (lVar25 = 0x18; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)pTVar29 = 0;
    pTVar29 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar29->field_0x1;
  }
  local_5ad8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_5b78);
  local_5ae8 = &local_4a70;
  local_52d8 = SetViewMode;
  local_52d0 = 0;
  ppcVar26 = &local_52d8;
  ppVar30 = &local_5128;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar30 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    ppVar30 = (pmf_7905862e *)&ppVar30->field_0x1;
  }
  local_5ad0 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SBarVisualizer,unsigned_char_const_&>(local_5ae8,this,&local_5128,"");
  FUIAction::FUIAction(&local_48b0,local_5ad0,local_5ad8,local_5ae0,RepeatDisabled);
  local_5a58 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_4b50);
  local_5a50 = TAttribute<FText>::TAttribute<FText>(&local_4a10);
  local_5c68 = &local_5188;
  local_5bd8 = FNameEntryId::FNameEntryId(local_5b64);
  local_5bf0 = local_5bd8->Value;
  local_5be8 = local_5bf0;
  local_5ac8 = local_5bd8;
  FNameEntryId::FNameEntryId(&local_5c68->ComparisonIndex);
  local_5c68->Number = 0;
  (local_5c68->ComparisonIndex).Value = local_5be8;
  local_5c68->Number = 0;
  local_5ac0 = local_5c68;
  local_5ab8 = *local_5c68;
  local_5c60 = &local_5180;
  local_5ab0 = local_5ab8;
  local_5aa8 = local_5ab8;
  local_5aa0 = local_5ab8;
  local_5a98 = local_5ab8;
  local_5a48 = local_5ab8;
  local_5ba0 = FNameEntryId::FNameEntryId(local_5b5c);
  local_5c48 = local_5ba0->Value;
  local_5be0 = local_5c48;
  local_5a90 = local_5ba0;
  FNameEntryId::FNameEntryId(&local_5c60->ComparisonIndex);
  local_5c60->Number = 0;
  (local_5c60->ComparisonIndex).Value = local_5c48;
  local_5c60->Number = 0;
  local_5a88 = local_5c60;
  local_5a80 = *local_5c60;
  local_5a78 = local_5a80;
  local_5a70 = local_5a80;
  local_5a68 = local_5a80;
  local_5a60 = local_5a80;
  local_5a40 = local_5a80;
  local_5a38 = FSlateIcon::FSlateIcon(&local_48d0);
  pFVar2 = FText::FText(&local_5108);
  TAttribute<FText>::TAttribute<FText>(&local_4b10,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_5118,L"SBarVisualizer",L"Hierarchical",L"Hierarchical");
  TAttribute<FText>::TAttribute<FText>(&local_4c00,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_45f0,&local_4c00,&local_4b10,local_5a38,&local_48b0,
             local_5a40,Check,local_5a48,local_5a50,local_5a58);
  TAttribute<FText>::~TAttribute<FText>(&local_4c00);
  FText::~FText(&local_5118);
  TAttribute<FText>::~TAttribute<FText>(&local_4b10);
  FText::~FText(&local_5108);
  TAttribute<FText>::~TAttribute<FText>(&local_4a10);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_4b50);
  FUIAction::~FUIAction(&local_48b0);
  local_5a30 = &local_4a58;
  local_52c8 = CheckViewMode;
  local_52c0 = 0;
  ppcVar26 = &local_52c8;
  ppVar28 = &local_50f8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar28 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    ppVar28 = (pmf_0ca026aa *)&ppVar28->field_0x1;
  }
  local_5a20 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SBarVisualizer,unsigned_char_const_&>
                         (local_5a30,this,&local_50f8,"\x01\x02\x03");
  local_5b98 = &local_4a40;
  pTVar29 = local_5b98;
  for (lVar25 = 0x18; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)pTVar29 = 0;
    pTVar29 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar29->field_0x1;
  }
  local_5a18 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(local_5b98);
  local_5a28 = &local_4a28;
  local_52b8 = SetViewMode;
  local_52b0 = 0;
  ppcVar26 = &local_52b8;
  ppVar30 = &local_50e8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar30 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    ppVar30 = (pmf_7905862e *)&ppVar30->field_0x1;
  }
  local_5a10 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
               CreateSP<SBarVisualizer,unsigned_char_const_&>
                         (local_5a28,this,&local_50e8,"\x01\x02\x03");
  FUIAction::FUIAction(&local_4848,local_5a10,local_5a18,local_5a20,RepeatDisabled);
  local_5998 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_4b30);
  local_5990 = TAttribute<FText>::TAttribute<FText>(&local_49e0);
  local_5c58 = &local_5178;
  local_5b90 = FNameEntryId::FNameEntryId(local_5b54);
  local_5c40 = local_5b90->Value;
  local_5c38 = local_5c40;
  local_5a08 = local_5b90;
  FNameEntryId::FNameEntryId(&local_5c58->ComparisonIndex);
  local_5c58->Number = 0;
  (local_5c58->ComparisonIndex).Value = local_5c38;
  local_5c58->Number = 0;
  local_5a00 = local_5c58;
  local_59f8 = *local_5c58;
  local_5c50 = &local_5170;
  local_59f0 = local_59f8;
  local_59e8 = local_59f8;
  local_59e0 = local_59f8;
  local_59d8 = local_59f8;
  local_5988 = local_59f8;
  local_5b88 = FNameEntryId::FNameEntryId(local_5b4c);
  local_5c30 = local_5b88->Value;
  local_5c28 = local_5c30;
  local_59d0 = local_5b88;
  FNameEntryId::FNameEntryId(&local_5c50->ComparisonIndex);
  local_5c50->Number = 0;
  (local_5c50->ComparisonIndex).Value = local_5c28;
  local_5c50->Number = 0;
  local_59c8 = local_5c50;
  local_59c0 = *local_5c50;
  local_59b8 = local_59c0;
  local_59b0 = local_59c0;
  local_59a8 = local_59c0;
  local_59a0 = local_59c0;
  local_5980 = local_59c0;
  local_5978 = FSlateIcon::FSlateIcon(&local_4930);
  pFVar2 = FText::FText(&local_50c8);
  TAttribute<FText>::TAttribute<FText>(&local_4ba0,pFVar2);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_50d8,L"SBarVisualizer",L"Flat",L"Flat");
  TAttribute<FText>::TAttribute<FText>(&local_4bd0,pFVar2);
  FBaseMenuBuilder::AddMenuEntry
            ((FBaseMenuBuilder *)&local_45f0,&local_4bd0,&local_4ba0,local_5978,&local_4848,
             local_5980,Check,local_5988,local_5990,local_5998);
  TAttribute<FText>::~TAttribute<FText>(&local_4bd0);
  FText::~FText(&local_50d8);
  TAttribute<FText>::~TAttribute<FText>(&local_4ba0);
  FText::~FText(&local_50c8);
  TAttribute<FText>::~TAttribute<FText>(&local_49e0);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_4b30);
  FUIAction::~FUIAction(&local_4848);
  pTVar3 = FProfileVisualizerStyle::Get(&local_50b8);
  local_5ba8 = TSharedPtr<ISlateStyle,1>::operator->(pTVar3);
  local_5960 = *(code **)((longlong)*local_5ba8 + 0x50);
  local_5970 = &local_5168;
  pFVar4 = ::FName::FName(local_5970,"ProfileVisualizer.Home");
  local_5968 = *pFVar4;
  local_5788 = (FSlateBrush *)(*local_5960)(local_5ba8,local_5968,0);
  TSharedPtr<ISlateStyle,1>::~TSharedPtr<ISlateStyle,1>(&local_50b8);
  pTVar3 = FProfileVisualizerStyle::Get(&local_50a8);
  local_5bd0 = TSharedPtr<ISlateStyle,1>::operator->(pTVar3);
  local_5948 = *(code **)((longlong)*local_5bd0 + 0x50);
  local_5958 = &local_5160;
  pFVar4 = ::FName::FName(local_5958,"ProfileVisualizer.ToParent");
  local_5950 = *pFVar4;
  local_5850 = (FSlateBrush *)(*local_5948)(local_5bd0,local_5950,0);
  TSharedPtr<ISlateStyle,1>::~TSharedPtr<ISlateStyle,1>(&local_50a8);
  local_5398 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_55e0 = SVerticalBox::FArguments::FArguments(&local_3168);
  pFVar5 = SVerticalBox::Slot(&local_3b58);
  pFVar5 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar5);
  local_5940 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_5940,__real_40000000);
  local_5938 = &pFVar5->field_0x48;
  local_55f0 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_5938,VAlign_Fill);
  local_5900 = SBorder::FArguments::FArguments(&local_1e10);
  local_5910 = &local_47e0;
  pTVar3 = FProfileVisualizerStyle::Get(&local_4df8);
  local_5bc8 = TSharedPtr<ISlateStyle,1>::operator->(pTVar3);
  local_5920 = *(code **)((longlong)*local_5bc8 + 0x50);
  local_5930 = &local_5158;
  pFVar4 = ::FName::FName(local_5930,"StatsHeader");
  local_5928 = *pFVar4;
  local_5918 = (FSlateBrush *)(*local_5920)(local_5bc8,local_5928,0);
  local_5908 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_5910,&local_5918);
  local_58c0 = SBorder::FArguments::BorderImage(local_5900,local_5908);
  local_58d0 = &local_4650;
  pTVar3 = FProfileVisualizerStyle::Get(&local_4e08);
  local_5bc0 = TSharedPtr<ISlateStyle,1>::operator->(pTVar3);
  local_58d8 = *(code **)((longlong)*local_5bc0 + 0x40);
  local_58e8 = FStyleDefaults::GetSlateColor();
  local_58f8 = &local_5150;
  pFVar4 = ::FName::FName(local_58f8,"DefaultForeground");
  local_58f0 = *pFVar4;
  local_58e0 = local_58f0;
  pFVar6 = (FSlateColor *)(*local_58d8)(local_5bc0,local_4ae0,local_58f0,0,local_58e8,0);
  local_58c8 = TAttribute<FSlateColor>::TAttribute<FSlateColor><FSlateColor>(local_58d0,pFVar6);
  local_5600 = SBorder::FArguments::ForegroundColor(local_58c0,local_58c8);
  local_5808 = SHorizontalBox::FArguments::FArguments(&local_3370);
  pFVar7 = SHorizontalBox::Slot(&local_3c40);
  pFVar7 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar7);
  local_58b8 = &pFVar7->field_0x18;
  pFVar7 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_58b8,__real_40000000);
  local_58b0 = &pFVar7->field_0x48;
  local_5818 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_58b0,HAlign_Left);
  local_5898 = SButton::FArguments::FArguments(&local_1010);
  ::FName::FName(&local_58a8,"NoBorder");
  local_58a0 = FCoreStyle::Get();
  local_5880 = SButton::FArguments::ButtonStyle(local_5898,local_58a0,&local_58a8,(char *)0x0);
  local_5890 = &local_4620;
  pFVar6 = FSlateColor::UseForeground(&local_4acc);
  local_5888 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(local_5890,pFVar6);
  local_5868 = SButton::FArguments::ForegroundColor(local_5880,local_5888);
  local_5878 = &local_4740;
  pFVar8 = FMargin::FMargin(&local_4c40,0.0);
  local_5870 = TAttribute<FMargin>::TAttribute<FMargin>(local_5878,pFVar8);
  local_5860 = SButton::FArguments::ContentPadding(local_5868,local_5870);
  local_52a8 = GetToParentButtonVisibility;
  local_52a0 = 0;
  ppcVar26 = &local_52a8;
  puVar27 = local_5098;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_5098;
  ppVar31 = &local_5088;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar31 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar31 = (pmf_f45150d9 *)&ppVar31->field_0x1;
  }
  local_5858 = TSlateBaseNamedArgs<SButton>::Visibility<SBarVisualizer>
                         ((TSlateBaseNamedArgs<SButton> *)local_5860,this,&local_5088);
  local_5298 = OnToParentClicked;
  local_5290 = 0;
  ppcVar26 = &local_5298;
  puVar27 = local_5078;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_5078;
  ppVar32 = &local_5068;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar32 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar32 = (pmf_f85b6f02 *)&ppVar32->field_0x1;
  }
  local_5828 = SButton::FArguments::OnClicked<SBarVisualizer>(local_5858,this,&local_5068);
  local_5838 = SImage::FArguments::FArguments(&local_2770);
  local_5848 = &local_47b8;
  local_5840 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
                         (local_5848,&local_5850);
  local_5830 = SImage::FArguments::Image(local_5838,local_5840);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c88);
  pTVar9 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                     (&local_4d40,"SImage",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                      ,0x4c,&local_5c88);
  pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_4e18,local_5830);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_5218,pTVar10);
  local_5820 = SButton::FArguments::operator[](local_5828,&local_5218);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c87);
  pTVar11 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_4cc8,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x45,&local_5c87);
  pTVar12 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_4e28,local_5820);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_52f8,pTVar12);
  local_5810 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5818,&local_52f8);
  local_5740 = SHorizontalBox::FArguments::operator+(local_5808,local_5810);
  pFVar7 = SHorizontalBox::Slot(&local_3d28);
  pFVar7 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar7);
  local_5800 = &pFVar7->field_0x18;
  pFVar7 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_5800,__real_40000000);
  local_57f8 = &pFVar7->field_0x48;
  local_5750 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_57f8,HAlign_Left);
  local_57e0 = SButton::FArguments::FArguments(&local_1550);
  ::FName::FName(&local_57f0,"NoBorder");
  local_57e8 = FCoreStyle::Get();
  local_57d8 = SButton::FArguments::ButtonStyle(local_57e0,local_57e8,&local_57f0,(char *)0x0);
  local_57d0 = SButton::FArguments::HAlign(local_57d8,HAlign_Center);
  local_57b8 = SButton::FArguments::VAlign(local_57d0,VAlign_Center);
  local_57c8 = &local_4710;
  pFVar6 = FSlateColor::UseForeground(&local_4ab8);
  local_57c0 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(local_57c8,pFVar6);
  local_57a0 = SButton::FArguments::ForegroundColor(local_57b8,local_57c0);
  local_57b0 = &local_46e0;
  pFVar8 = FMargin::FMargin(&local_4c30,0.0);
  local_57a8 = TAttribute<FMargin>::TAttribute<FMargin>(local_57b0,pFVar8);
  local_5798 = SButton::FArguments::ContentPadding(local_57a0,local_57a8);
  local_5288 = GetHomeButtonVisibility;
  local_5280 = 0;
  ppcVar26 = &local_5288;
  puVar27 = local_5058;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_5058;
  ppVar31 = &local_5048;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar31 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar31 = (pmf_f45150d9 *)&ppVar31->field_0x1;
  }
  local_5790 = TSlateBaseNamedArgs<SButton>::Visibility<SBarVisualizer>
                         ((TSlateBaseNamedArgs<SButton> *)local_5798,this,&local_5048);
  local_5278 = OnHomeClicked;
  local_5270 = 0;
  ppcVar26 = &local_5278;
  puVar27 = local_5038;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_5038;
  ppVar32 = &local_5028;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar32 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar32 = (pmf_f85b6f02 *)&ppVar32->field_0x1;
  }
  local_5760 = SButton::FArguments::OnClicked<SBarVisualizer>(local_5790,this,&local_5028);
  local_5770 = SImage::FArguments::FArguments(&local_2a18);
  local_5780 = &local_4790;
  local_5778 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*><FSlateBrush_const_*>
                         (local_5780,&local_5788);
  local_5768 = SImage::FArguments::Image(local_5770,local_5778);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c86);
  pTVar9 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                     (&local_4d10,"SImage",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                      ,0x5b,&local_5c86);
  pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_4e38,local_5768);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_5308,pTVar10);
  local_5758 = SButton::FArguments::operator[](local_5760,&local_5308);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c85);
  pTVar11 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_4d28,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x52,&local_5c85);
  pTVar12 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar11,&local_4e48,local_5758);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_5318,pTVar12);
  local_5748 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5750,&local_5318);
  local_56f0 = SHorizontalBox::FArguments::operator+(local_5740,local_5748);
  pFVar7 = SHorizontalBox::Slot(&local_3e10);
  local_5738 = &pFVar7->field_0x18;
  local_5720 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_5738,__real_40000000);
  local_5730 = &local_48f0;
  local_5c20[0] = 0x14;
  local_5728 = TAttribute<float>::TAttribute<float><int>(local_5730,local_5c20);
  pFVar7 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5720,local_5728);
  local_5718 = &pFVar7->field_0x48;
  local_5700 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_5718,HAlign_Fill);
  local_5710 = STextBlock::FArguments::FArguments(&local_578);
  local_5268 = GetSelectedCategoryName;
  local_5260 = 0;
  ppcVar26 = &local_5268;
  puVar27 = local_5018;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_5018;
  ppVar35 = &local_5008;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar35 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar35 = (pmf_e17c53d8 *)&ppVar35->field_0x1;
  }
  local_5708 = STextBlock::FArguments::Text<SBarVisualizer>(local_5710,this,&local_5008);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c84);
  pTVar13 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_4ce0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x61,&local_5c84);
  pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_4e58,local_5708);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_5328,pTVar14);
  local_56f8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5700,&local_5328);
  local_5610 = SHorizontalBox::FArguments::operator+(local_56f0,local_56f8);
  pFVar7 = SHorizontalBox::Slot(&local_3ef8);
  pFVar7 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar7);
  local_56e8 = &pFVar7->field_0x48;
  pFVar7 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_56e8,HAlign_Right);
  local_56d0 = (FSlotArgumentsMixin *)&pFVar7->field_0x18;
  local_56e0 = &local_46b0;
  pFVar8 = FMargin::FMargin(&local_4c20,__real_3ff0000000000000,__real_4000000000000000,
                            __real_3ff0000000000000,__real_4000000000000000);
  local_56d8 = TAttribute<FMargin>::TAttribute<FMargin>(local_56e0,pFVar8);
  local_5620 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         (local_56d0,local_56d8);
  local_56c8 = SComboButton::FArguments::FArguments(&local_24c8);
  local_56b0 = SComboButton::FArguments::HasDownArrow(local_56c8,false);
  ::FName::FName(&local_56c0,"NoBorder");
  local_56b8 = FCoreStyle::Get();
  local_5698 = SComboButton::FArguments::ButtonStyle(local_56b0,local_56b8,&local_56c0,(char *)0x0);
  local_56a8 = &local_4680;
  local_5c20[1] = 0;
  local_56a0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_56a8,local_5c20 + 1);
  local_5690 = SComboButton::FArguments::ContentPadding(local_5698,local_56a0);
  local_5648 = SComboButton::FArguments::ButtonContent(local_5690,&local_4c10);
  local_5658 = SImage::FArguments::FArguments(&local_2cc0);
  local_5668 = &local_4768;
  pTVar3 = FProfileVisualizerStyle::Get(&local_4e68);
  local_5bb8 = TSharedPtr<ISlateStyle,1>::operator->(pTVar3);
  local_5678 = *(code **)((longlong)*local_5bb8 + 0x50);
  local_5688 = &local_5148;
  pFVar4 = ::FName::FName(local_5688,"ProfileVisualizer.MenuDropdown");
  local_5680 = *pFVar4;
  local_5670 = (FSlateBrush *)(*local_5678)(local_5bb8,local_5680,0,0);
  local_5660 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_5668,&local_5670);
  local_5650 = SImage::FArguments::Image(local_5658,local_5660);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c83);
  pTVar9 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                     (&local_4d70,"SImage",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                      ,0x6d,&local_5c83);
  pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar9,&local_4e78,local_5650);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_5338,pTVar10);
  local_5640 = NamedSlotProperty<SComboButton::FArguments>::operator[](local_5648,&local_5338);
  local_5630 = SComboButton::FArguments::MenuContent(local_5640,&local_4b70);
  local_5638 = FMenuBuilder::MakeWidget
                         (&local_45f0,&local_4e88,
                          (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                           *)0x0);
  local_5628 = NamedSlotProperty<SComboButton::FArguments>::operator[](local_5630,local_5638);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c82);
  this_00 = MakeTDecl<SComboButton,RequiredArgs::T0RequiredArgs>
                      (&local_4d88,"SComboButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x66,&local_5c82);
  pTVar15 = TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_00,&local_4e98,local_5628);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SComboButton>(&local_5348,pTVar15);
  local_5618 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5620,&local_5348);
  local_5608 = SHorizontalBox::FArguments::operator+(local_5610,local_5618);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c81);
  pTVar16 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4da0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x42,&local_5c81);
  pTVar17 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_4ea8,local_5608);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5358,pTVar17);
  local_55f8 = SBorder::FArguments::operator[](local_5600,&local_5358);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c80);
  this_01 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_4db8,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x3e,&local_5c80);
  pTVar18 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_4eb8,local_55f8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_5368,pTVar18);
  local_55e8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_55f0,&local_5368);
  local_5518 = SVerticalBox::FArguments::operator+(local_55e0,local_55e8);
  pFVar5 = SVerticalBox::Slot(&local_3fe0);
  local_55d8 = &pFVar5->field_0x18;
  local_55c0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_55d8,__real_40000000);
  local_55d0 = &local_4910;
  local_5c20[2] = 1;
  local_55c8 = TAttribute<float>::TAttribute<float><int>(local_55d0,local_5c20 + 2);
  pFVar5 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_55c0,local_55c8);
  local_55b8 = &pFVar5->field_0x48;
  local_5528 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_55b8,VAlign_Fill);
  local_5538 = SHorizontalBox::FArguments::FArguments(&local_3578);
  pFVar7 = SHorizontalBox::Slot(&local_40c8);
  local_55b0 = &pFVar7->field_0x18;
  local_5598 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_55b0,__real_40000000);
  local_55a8 = &local_49b0;
  local_5c20[3] = 1;
  local_55a0 = TAttribute<float>::TAttribute<float><int>(local_55a8,local_5c20 + 3);
  pFVar7 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5598,local_55a0);
  local_5590 = &pFVar7->field_0x48;
  local_5548 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_5590,HAlign_Fill);
  local_5588 = SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(&local_1a30);
  local_5580 = SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::ListItemsSource
                         (local_5588,&this->ProfileDataView);
  local_5258 = OnGenerateWidgetForList;
  local_5250 = 0;
  ppcVar26 = &local_5258;
  puVar27 = local_4ff8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_4ff8;
  ppVar33 = &local_4fe8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar33 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar33 = (pmf_fb59e4ce *)&ppVar33->field_0x1;
  }
  local_5568 = SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::OnGenerateRow<SBarVisualizer>
                         (local_5580,this,&local_4fe8);
  local_5578 = local_4990;
  local_5c20[4] = 1;
  local_5570 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                         (local_5578,(Type *)(local_5c20 + 4));
  local_5560 = SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::SelectionMode
                         (local_5568,local_5570);
  local_5248 = OnBarGraphSelectionChanged;
  local_5240 = 0;
  ppcVar26 = &local_5248;
  puVar27 = local_4fd8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_4fd8;
  ppVar34 = &local_4fc8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar34 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar34 = (pmf_638d7d14 *)&ppVar34->field_0x1;
  }
  local_5550 = SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::
               OnSelectionChanged<SBarVisualizer>(local_5560,this,&local_4fc8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c7f);
  local_5558 = MakeTDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>
                         (&local_4dd0,"SListView< TSharedPtr< FVisualizerEvent > >",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                          ,0x7d,&local_5c7f);
  this_02 = TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
            Expose<SListView<TSharedPtr<FVisualizerEvent,1>_>_>(local_5558,&this->BarGraphsList);
  pTVar19 = TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
            operator<<=(this_02,&local_4ec8,local_5550);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SListView<TSharedPtr<FVisualizerEvent,1>_>_>
            (&local_5378,pTVar19);
  local_5540 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5548,&local_5378);
  local_5530 = SHorizontalBox::FArguments::operator+(local_5538,local_5540);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c7e);
  pTVar16 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4c68,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x79,&local_5c7e);
  pTVar17 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_4ed8,local_5530);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_5198,pTVar17);
  local_5520 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5528,&local_5198);
  local_54d0 = SVerticalBox::FArguments::operator+(local_5518,local_5520);
  pFVar5 = SVerticalBox::Slot(&local_41b0);
  pFVar5 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar5);
  local_5510 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_5510,__real_40000000);
  local_5508 = &pFVar5->field_0x48;
  local_54e0 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_5508,VAlign_Fill);
  local_5500 = STimeline::FArguments::FArguments(&local_3780);
  local_54f8 = STimeline::FArguments::MinValue(local_5500,0.0);
  pFVar20 = TSharedPtr<FVisualizerEvent,1>::operator->(&this->SelectedBarGraph);
  local_5c0c = (float)pFVar20->DurationMs;
  local_54e8 = STimeline::FArguments::MaxValue(local_54f8,local_5c0c);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c7d);
  local_54f0 = MakeTDecl<STimeline,RequiredArgs::T0RequiredArgs>
                         (&local_4c80,"STimeline",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                          ,0x8a,&local_5c7d);
  this_03 = TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs>::Expose<STimeline>
                      (local_54f0,&this->Timeline);
  pTVar21 = TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_4ee8,local_54e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STimeline>(&local_51a8,pTVar21);
  local_54d8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_54e0,&local_51a8);
  local_5488 = SVerticalBox::FArguments::operator+(local_54d0,local_54d8);
  pFVar5 = SVerticalBox::Slot(&local_4298);
  pFVar5 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar5);
  local_54c8 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_54c8,__real_40000000);
  local_54c0 = &pFVar5->field_0x48;
  local_5498 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_54c0,VAlign_Fill);
  local_54b8 = SScrollBar::FArguments::FArguments(&local_2f60);
  local_54b0 = SScrollBar::FArguments::Orientation(local_54b8,Orient_Horizontal);
  local_5238 = ScrollBar_OnUserScrolled;
  local_5230 = 0;
  ppcVar26 = &local_5238;
  puVar27 = local_4fb8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_4fb8;
  ppVar37 = &local_4fa8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar37 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar37 = (pmf_4138e457 *)&ppVar37->field_0x1;
  }
  local_54a0 = SScrollBar::FArguments::OnUserScrolled<SBarVisualizer>(local_54b0,this,&local_4fa8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c7c);
  local_54a8 = MakeTDecl<SScrollBar,RequiredArgs::T0RequiredArgs>
                         (&local_4c98,"SScrollBar",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                          ,0x90,&local_5c7c);
  this_04 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::Expose<SScrollBar>
                      (local_54a8,&this->ScrollBar);
  pTVar22 = TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_4ef8,local_54a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SScrollBar>(&local_51b8,pTVar22);
  local_5490 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5498,&local_51b8);
  local_53a8 = SVerticalBox::FArguments::operator+(local_5488,local_5490);
  pFVar5 = SVerticalBox::Slot(&local_4380);
  pFVar5 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar5);
  local_5480 = &pFVar5->field_0x18;
  pFVar5 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                     ((FSlotArgumentsMixin *)local_5480,__real_40000000);
  local_5478 = &pFVar5->field_0x48;
  local_53b8 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_5478,VAlign_Fill);
  local_5420 = SHorizontalBox::FArguments::FArguments(&local_3988);
  pFVar7 = SHorizontalBox::Slot(&local_4468);
  local_5470 = &pFVar7->field_0x18;
  local_5458 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_5470,__real_40000000);
  local_5468 = &local_4970;
  local_5c08[0] = 1;
  local_5460 = TAttribute<float>::TAttribute<float><int>(local_5468,local_5c08);
  pFVar7 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5458,local_5460);
  local_5450 = &pFVar7->field_0x48;
  local_5430 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_5450,HAlign_Fill);
  local_5448 = STextBlock::FArguments::FArguments(&local_ad0);
  local_5228 = GetZoomLabel;
  local_5220 = 0;
  ppcVar26 = &local_5228;
  puVar27 = local_4f98;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_4f98;
  ppVar35 = &local_4f88;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar35 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar35 = (pmf_e17c53d8 *)&ppVar35->field_0x1;
  }
  local_5438 = STextBlock::FArguments::Text<SBarVisualizer>(local_5448,this,&local_4f88);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c7b);
  local_5440 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                         (&local_4cb0,"STextBlock",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                          ,0x9c,&local_5c7b);
  pTVar13 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::Expose<STextBlock>
                      (local_5440,&this->ZoomLabel);
  pTVar14 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_4f08,local_5438);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_51c8,pTVar14);
  local_5428 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_5430,&local_51c8);
  local_53c8 = SHorizontalBox::FArguments::operator+(local_5420,local_5428);
  pFVar7 = SHorizontalBox::Slot(&local_3a70);
  local_5418 = &pFVar7->field_0x18;
  local_5400 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_5418,__real_40000000);
  local_5410 = &local_4950;
  local_5c08[1] = 5;
  local_5408 = TAttribute<float>::TAttribute<float><int>(local_5410,local_5c08 + 1);
  pFVar7 = SHorizontalBox::FSlot::FSlotArguments::FillWidth(local_5400,local_5408);
  local_53f8 = &pFVar7->field_0x48;
  local_53d8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_53f8,HAlign_Fill);
  local_53f0 = SSlider::FArguments::FArguments(&local_2190);
  local_5388 = GetZoomValue;
  local_5380 = 0;
  ppcVar26 = &local_5388;
  puVar27 = local_4f78;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_4f78;
  ppVar36 = &local_4f68;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar36 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar36 = (pmf_a517a715 *)&ppVar36->field_0x1;
  }
  local_53e8 = SSlider::FArguments::Value<SBarVisualizer>(local_53f0,this,&local_4f68);
  local_5208 = OnSetZoomValue;
  local_5200 = 0;
  ppcVar26 = &local_5208;
  puVar27 = local_4f58;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *puVar27 = *(undefined1 *)ppcVar26;
    ppcVar26 = (code **)((longlong)ppcVar26 + 1);
    puVar27 = puVar27 + 1;
  }
  puVar27 = local_4f58;
  ppVar37 = &local_4f48;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined1 *)ppVar37 = *puVar27;
    puVar27 = puVar27 + 1;
    ppVar37 = (pmf_4138e457 *)&ppVar37->field_0x1;
  }
  local_53e0 = SSlider::FArguments::OnValueChanged<SBarVisualizer>(local_53e8,this,&local_4f48);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c7a);
  this_05 = MakeTDecl<SSlider,RequiredArgs::T0RequiredArgs>
                      (&local_4d58,"SSlider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0xa4,&local_5c7a);
  pTVar23 = TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_05,&local_4f18,local_53e0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSlider>(&local_51d8,pTVar23);
  local_53d0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_53d8,&local_51d8);
  local_53c0 = SHorizontalBox::FArguments::operator+(local_53c8,local_53d0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c79);
  pTVar16 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4de8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x96,&local_5c79);
  pTVar17 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar16,&local_4f28,local_53c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_51e8,pTVar17);
  local_53b0 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_53b8,&local_51e8);
  local_53a0 = SVerticalBox::FArguments::operator+(local_53a8,local_53b0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5c78);
  this_06 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_4cf8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x3b,&local_5c78);
  pTVar24 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_06,&local_4f38,local_53a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_51f8,pTVar24);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_5398,&local_51f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_51f8);
  TSharedRef<SVerticalBox,1>::~TSharedRef<SVerticalBox,1>(&local_4f38);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>(&local_4cf8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_51e8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_4f28);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_4de8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_51d8);
  TSharedRef<SSlider,1>::~TSharedRef<SSlider,1>(&local_4f18);
  TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSlider,RequiredArgs::T0RequiredArgs>(&local_4d58);
  SSlider::FArguments::~FArguments(&local_2190);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3a70);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_51c8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_4f08);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4cb0);
  STextBlock::FArguments::~FArguments(&local_ad0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4468);
  SHorizontalBox::FArguments::~FArguments(&local_3988);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4380);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_51b8);
  TSharedRef<SScrollBar,1>::~TSharedRef<SScrollBar,1>(&local_4ef8);
  TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SScrollBar,RequiredArgs::T0RequiredArgs>(&local_4c98);
  SScrollBar::FArguments::~FArguments(&local_2f60);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_4298);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_51a8);
  TSharedRef<STimeline,1>::~TSharedRef<STimeline,1>(&local_4ee8);
  TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STimeline,RequiredArgs::T0RequiredArgs>(&local_4c80);
  STimeline::FArguments::~FArguments(&local_3780);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_41b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5198);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_4ed8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_4c68);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5378);
  TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedRef<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_4ec8);
  TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SListView<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T0RequiredArgs>(&local_4dd0);
  SListView<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(&local_1a30);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_40c8);
  SHorizontalBox::FArguments::~FArguments(&local_3578);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3fe0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5368);
  TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_4eb8);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_4db8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5358);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_4ea8);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_4da0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5348);
  TSharedRef<SComboButton,1>::~TSharedRef<SComboButton,1>(&local_4e98);
  TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SComboButton,RequiredArgs::T0RequiredArgs>(&local_4d88);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4e88);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5338);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_4e78);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_4d70);
  TSharedPtr<ISlateStyle,1>::~TSharedPtr<ISlateStyle,1>(&local_4e68);
  SImage::FArguments::~FArguments(&local_2cc0);
  SComboButton::FArguments::~FArguments(&local_24c8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3ef8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5328);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_4e58);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_4ce0);
  STextBlock::FArguments::~FArguments(&local_578);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3e10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5318);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_4e48);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_4d28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5308);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_4e38);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_4d10);
  SImage::FArguments::~FArguments(&local_2a18);
  SButton::FArguments::~FArguments(&local_1550);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3d28);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_52f8);
  TSharedRef<SButton,1>::~TSharedRef<SButton,1>(&local_4e28);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>(&local_4cc8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_5218);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_4e18);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_4d40);
  SImage::FArguments::~FArguments(&local_2770);
  SButton::FArguments::~FArguments(&local_1010);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3c40);
  SHorizontalBox::FArguments::~FArguments(&local_3370);
  TSharedPtr<ISlateStyle,1>::~TSharedPtr<ISlateStyle,1>(&local_4e08);
  TSharedPtr<ISlateStyle,1>::~TSharedPtr<ISlateStyle,1>(&local_4df8);
  SBorder::FArguments::~FArguments(&local_1e10);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3b58);
  SVerticalBox::FArguments::~FArguments(&local_3168);
  local_5bb0 = TSharedPtr<SScrollBar,1>::operator->(&this->ScrollBar);
  local_5390 = *(code **)(local_5bb0->_padding_ + 0x250);
  (*local_5390)(local_5bb0,0,__real_3f800000,0);
  FMenuBuilder::~FMenuBuilder(&local_45f0);
  return;
}

// CreateDataView @ 148d6f3b0

void __thiscall SBarVisualizer::CreateDataView(SBarVisualizer *this)

{
  int *piVar1;
  int *piVar2;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *this_00;
  double dVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FVisualizerEvent *pFVar12;
  FVisualizerEvent *pFVar13;
  FVisualizerEvent *pFVar14;
  ForAnyElementType FVar15;
  TSharedPtr<FVisualizerEvent,1> *pTVar16;
  FVisualizerEvent *pFVar17;
  uint uVar18;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> local_b8;
  TSharedPtr<FVisualizerEvent,1> local_a8;
  FVisualizerEvent *local_98;
  FVisualizerEvent *local_90;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> local_88;
  TSharedPtr<FVisualizerEvent,1> local_78;
  FString local_68;
  FVisualizerEvent *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  
  pFVar14 = (FVisualizerEvent *)0x0;
  DestructItems<TSharedPtr<SGraphBar,1>,int>
            ((TSharedPtr<SGraphBar,1> *)(this->Graphs).AllocatorInstance.Data,
             (this->Graphs).ArrayNum);
  piVar2 = &(this->Graphs).ArrayMax;
  (this->Graphs).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Graphs).AllocatorInstance,0,piVar2);
  }
  this_00 = &this->ProfileDataView;
  if (this->ViewMode == '\x01') {
    piVar2 = &(this->ProfileDataView).ArrayNum;
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data,
               (this->ProfileDataView).ArrayNum);
    piVar1 = &(this->ProfileDataView).ArrayMax;
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&this_00->AllocatorInstance,0,piVar1);
    }
    local_78.Object = (this->ProfileData).Object;
    local_78.SharedReferenceCount.ReferenceController =
         (this->ProfileData).SharedReferenceCount.ReferenceController;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    CreateFlattenedData(this,&local_78,&local_88);
    if ((this_00 == &local_88) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = local_88.ArrayNum;
    iVar9 = 0;
    if (local_88.ArrayNum != 0) {
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,local_88.ArrayNum,&this_00->AllocatorInstance,piVar2,piVar1);
      ConstructItems<TSharedPtr<FVisualizerEvent,1>,TSharedPtr<FVisualizerEvent,1>,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar9 * 0x10,
                 (TSharedPtr<FVisualizerEvent,1> *)local_88.AllocatorInstance.Data,iVar10);
      iVar9 = local_88.ArrayNum;
    }
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)local_88.AllocatorInstance.Data,iVar9);
    FVar15.Data = local_88.AllocatorInstance.Data;
  }
  else {
    pFVar13 = (this->SelectedBarGraph).Object;
    if (pFVar13 == (FVisualizerEvent *)0x0) {
      DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
                ((TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data,
                 (this->ProfileDataView).ArrayNum);
      piVar2 = &(this->ProfileDataView).ArrayMax;
      (this->ProfileDataView).ArrayNum = 0;
      iVar10 = 1;
      if ((this->ProfileDataView).ArrayMax != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,1,&this_00->AllocatorInstance,0,piVar2);
        iVar10 = *piVar2;
      }
      pFVar5 = (this_00->AllocatorInstance).Data;
      pTVar16 = &this->ProfileData;
      if (((pFVar5 <= pTVar16) && (pTVar16 < pFVar5 + (longlong)iVar10 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->ProfileDataView).ArrayNum;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&this_00->AllocatorInstance,piVar2);
      }
      (this->ProfileDataView).ArrayNum = iVar10 + 1;
      pFVar5 = (this_00->AllocatorInstance).Data;
      *(FVisualizerEvent **)(pFVar5 + (longlong)iVar10 * 0x10) = pTVar16->Object;
      pTVar6 = (this->ProfileData).SharedReferenceCount.ReferenceController;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar10 * 0x10 + 8) = pTVar6;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
        return;
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      return;
    }
    TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::Empty
              (this_00,(pFVar13->Children).ArrayNum);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    pFVar13 = pFVar14;
    pFVar17 = pFVar14;
    while( true ) {
      if (((this->SelectedBarGraph).Object == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = (this->SelectedBarGraph).Object;
      uVar18 = (uint)pFVar17;
      if ((pFVar12->Children).ArrayNum <= (int)uVar18) break;
      if ((pFVar12 == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar17 = (this->SelectedBarGraph).Object;
      uVar11 = 0;
      if ((int)uVar18 < (pFVar17->Children).ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (pFVar17->Children).AllocatorInstance.Data;
      local_a8.Object = *(FVisualizerEvent **)((longlong)&pFVar13->Start + (longlong)pFVar5);
      local_a8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)&pFVar13->Duration + (longlong)pFVar5);
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_a8.Object == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((local_a8.Object)->Children).ArrayNum == 0) {
        if (((local_b8.AllocatorInstance.Data <= &local_a8) &&
            (&local_a8 <
             (TSharedPtr<FVisualizerEvent,1> *)
             (local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayMax * 0x10))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_b8.ArrayNum == local_b8.ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
          local_b8.ArrayNum = iVar10;
        }
        iVar10 = local_b8.ArrayNum;
        local_b8.ArrayNum = local_b8.ArrayNum + 1;
        FVar15.Data = local_b8.AllocatorInstance.Data;
      }
      else {
        pTVar16 = (TSharedPtr<FVisualizerEvent,1> *)(this_00->AllocatorInstance).Data;
        if (((pTVar16 <= &local_a8) && (&local_a8 < pTVar16 + (this->ProfileDataView).ArrayMax)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (this->ProfileDataView).ArrayNum;
        piVar2 = &(this->ProfileDataView).ArrayMax;
        if (iVar10 == *piVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&this_00->AllocatorInstance,piVar2);
        }
        (this->ProfileDataView).ArrayNum = iVar10 + 1;
        FVar15.Data = (this_00->AllocatorInstance).Data;
      }
      ((TSharedPtr<FVisualizerEvent,1> *)((longlong)FVar15.Data + (longlong)iVar10 * 0x10))->Object
           = local_a8.Object;
      (((TSharedPtr<FVisualizerEvent,1> *)((longlong)FVar15.Data + (longlong)iVar10 * 0x10))->
      SharedReferenceCount).ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      pFVar17 = (FVisualizerEvent *)(ulonglong)(uVar18 + 1);
      pFVar13 = (FVisualizerEvent *)&pFVar13->DurationMs;
    }
    if (0 < local_b8.ArrayNum) {
      pFVar12 = ::operator_new(0x58);
      pFVar13 = pFVar14;
      pFVar17 = pFVar14;
      if (pFVar12 != (FVisualizerEvent *)0x0) {
        if (((this->SelectedBarGraph).Object == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        ::FString::ConcatFC(&local_68,&((this->SelectedBarGraph).Object)->EventName,L" Leaf Events")
        ;
        if (((this->SelectedBarGraph).Object == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar13 = (this->SelectedBarGraph).Object;
        iVar10 = pFVar13->Category;
        if ((pFVar13 == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar13 = (this->SelectedBarGraph).Object;
        dVar3 = pFVar13->DurationMs;
        if ((pFVar13 == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar13 = (this->SelectedBarGraph).Object;
        dVar4 = pFVar13->Duration;
        if ((pFVar13 == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar13 = FVisualizerEvent::FVisualizerEvent
                            (pFVar12,((this->SelectedBarGraph).Object)->Start,dVar4,dVar3,iVar10,
                             &local_68);
        pFVar17 = (FVisualizerEvent *)&DAT_00000001;
      }
      local_98 = pFVar13;
      pFVar12 = ::operator_new(0x18);
      if (pFVar12 != (FVisualizerEvent *)0x0) {
        *(undefined4 *)&pFVar12->Duration = 1;
        pFVar12->Start =
             (double)&
                     ___7__TReferenceControllerWithDeleter_UFVisualizerEvent__U__DefaultDeleter_UFVisualizerEvent___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)((longlong)&pFVar12->Duration + 4) = 1;
        pFVar12->DurationMs = (double)pFVar13;
        pFVar14 = pFVar12;
      }
      local_90 = pFVar14;
      if ((pFVar17 != (FVisualizerEvent *)0x0) &&
         (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if ((local_98 == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar6 = (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
      pFVar14 = (this->SelectedBarGraph).Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58 = (local_98->ParentEvent).Object;
      pTStack_50 = (local_98->ParentEvent).SharedReferenceCount.ReferenceController;
      (local_98->ParentEvent).Object = pFVar14;
      (local_98->ParentEvent).SharedReferenceCount.ReferenceController = pTVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_50);
      if ((local_98 == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::operator=
                (&local_98->Children,&local_b8);
      pFVar5 = (this_00->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar5 + (longlong)(this->ProfileDataView).ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->ProfileDataView).ArrayNum;
      piVar2 = &(this->ProfileDataView).ArrayMax;
      if (iVar10 == *piVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&this_00->AllocatorInstance,piVar2);
      }
      (this->ProfileDataView).ArrayNum = iVar10 + 1;
      pFVar5 = (this_00->AllocatorInstance).Data;
      *(FVisualizerEvent **)(pFVar5 + (longlong)iVar10 * 0x10) = local_98;
      *(FVisualizerEvent **)(pFVar5 + (longlong)iVar10 * 0x10 + 8) = local_90;
      if (local_90 != (FVisualizerEvent *)0x0) {
        LOCK();
        *(int *)&local_90->Duration = *(int *)&local_90->Duration + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_90);
    }
    DestructItems<TSharedPtr<FVisualizerEvent,1>,int>
              ((TSharedPtr<FVisualizerEvent,1> *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    FVar15.Data = local_b8.AllocatorInstance.Data;
  }
  if ((TSharedPtr<FVisualizerEvent,1> *)FVar15.Data != (TSharedPtr<FVisualizerEvent,1> *)0x0) {
    FMemory::Free(FVar15.Data);
  }
  return;
}

// CreateFlattenedData @ 148d6fc50

void __thiscall
SBarVisualizer::CreateFlattenedData
          (SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FSharedReferencer<1> FVar4;
  TReferenceControllerBase<1> *pTVar5;
  FVisualizerEvent *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  FVisualizerEvent *pFVar13;
  FSharedReferencer<1> FVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  TRawPtrProxy<FVisualizerEvent> local_88;
  TReferenceControllerBase<1> *local_80;
  TSharedPtr<FVisualizerEvent,1> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  TSharedPtr<FVisualizerEvent,1> local_58;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  uVar17 = 0;
  uVar20 = uVar17;
  do {
    uVar16 = 0;
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar15 = (uint)uVar20;
    uVar20 = uVar16;
    if ((param_1->Object->Children).ArrayNum <= (int)uVar15) {
      while( true ) {
        if ((param_1->Object == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = (uint)uVar16;
        if ((param_1->Object->Children).ArrayNum <= (int)uVar15) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_1->SharedReferenceCount).ReferenceController);
          return;
        }
        if ((param_1->Object == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) break;
        pFVar13 = param_1->Object;
        uVar11 = 0;
        if ((int)uVar15 < (pFVar13->Children).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar2 = (pFVar13->Children).AllocatorInstance.Data;
        local_58.Object = *(FVisualizerEvent **)(pFVar2 + uVar20);
        local_58.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(pFVar2 + uVar20 + 8);
        if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        CreateFlattenedData(this,&local_58,param_2);
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar20 = uVar20 + 0x10;
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar13 = param_1->Object;
    uVar21 = ~uVar15 >> 0x1f;
    uVar11 = 0;
    if ((int)uVar15 < (pFVar13->Children).ArrayNum) {
      uVar11 = uVar21;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar2 = (pFVar13->Children).AllocatorInstance.Data;
    lVar3 = *(longlong *)(pFVar2 + uVar17 * 0x10);
    local_80 = *(TReferenceControllerBase<1> **)(pFVar2 + uVar17 * 0x10 + 8);
    if (local_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar12 = param_2->ArrayNum;
    local_78.Object = (FVisualizerEvent *)0x0;
    local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((lVar3 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar11 = *(uint *)(lVar3 + 0x18);
    if ((int)uVar11 < iVar12) {
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(longlong *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10) == 0)
      goto LAB_148d6fe84;
      uVar11 = *(uint *)(lVar3 + 0x18);
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      FVar4.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)(int)uVar11 * 0x10 + 8);
      local_78.Object = *(FVisualizerEvent **)(pFVar2 + (longlong)(int)uVar11 * 0x10);
      FVar14.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar4.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    else {
LAB_148d6fe84:
      for (iVar12 = param_2->ArrayNum; iVar12 <= *(int *)(lVar3 + 0x18); iVar12 = iVar12 + 1) {
        pFVar2 = (param_2->AllocatorInstance).Data;
        local_68 = 0;
        uStack_60 = 0;
        if (((pFVar2 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar2 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar10 + 1;
        pFVar2 = (param_2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar2 + (longlong)iVar10 * 0x10) = local_68;
        *(undefined8 *)(pFVar2 + (longlong)iVar10 * 0x10 + 8) = uStack_60;
        uStack_60 = 0;
        local_68 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      pFVar13 = ::operator_new(0x58);
      if (pFVar13 == (FVisualizerEvent *)0x0) {
        pFVar13 = (FVisualizerEvent *)0x0;
      }
      else {
        iVar12 = *(int *)(lVar3 + 0x18);
        pFVar13->Start = 0.0;
        pFVar13->Category = iVar12;
        pFVar13->Duration = 1.0;
        pFVar13->DurationMs = 0.0;
        ::FString::FString(&pFVar13->EventName,(FString *)(lVar3 + 0x20));
        pFVar13->IsSelected = false;
        pFVar13->ColorIndex = 0;
        (pFVar13->ParentEvent).Object = (FVisualizerEvent *)0x0;
        (pFVar13->ParentEvent).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar13->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar13->Children).ArrayNum = 0;
        (pFVar13->Children).ArrayMax = 0;
        if (*(int *)(lVar3 + 0x28) == 0) {
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>(0,L"");
          pFVar13->ColorIndex = uVar11;
        }
        else {
          uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>
                             (*(int *)(lVar3 + 0x28) + -1,*(wchar_t **)(lVar3 + 0x20));
          pFVar13->ColorIndex = uVar11;
        }
      }
      local_88.Object = pFVar13;
      TSharedPtr<FVisualizerEvent,1>::operator=<FVisualizerEvent>(&local_78,&local_88);
      pFVar13 = local_78.Object;
      iVar12 = *(int *)(lVar3 + 0x18);
      if ((local_78.Object == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13->Category = iVar12;
      uVar11 = *(uint *)(lVar3 + 0x18);
      lVar18 = (longlong)(int)uVar11;
      uVar9 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = *(undefined8 *)(pFVar2 + lVar18 * 0x10);
      pTStack_40 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar18 * 0x10 + 8);
      *(FVisualizerEvent **)(pFVar2 + lVar18 * 0x10) = pFVar13;
      *(TReferenceControllerBase<1> **)(pFVar2 + lVar18 * 0x10 + 8) =
           local_78.SharedReferenceCount.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_40);
      FVar14.ReferenceController = *(TReferenceControllerBase<1> **)(lVar3 + 0x40);
      lVar18 = *(longlong *)(lVar3 + 0x38);
      if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar14.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar4.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
      if (lVar18 != 0) {
        do {
          if ((local_78.Object == (FVisualizerEvent *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar4.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
          if (1 < ((local_78.Object)->EventName).Data.ArrayNum) break;
          if ((lVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(longlong *)(lVar18 + 0x38) == 0) ||
             (*(int *)(*(longlong *)(lVar18 + 0x38) + 0x18) != *(int *)(lVar3 + 0x18))) {
            if ((local_78.Object == (FVisualizerEvent *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar12 = *(int *)(lVar18 + 0x28) + -1;
            if (*(int *)(lVar18 + 0x28) == 0) {
              iVar12 = 0;
            }
            ::FString::AssignRange
                      (&(local_78.Object)->EventName,*(wchar_t **)(lVar18 + 0x20),iVar12);
          }
          pTVar5 = *(TReferenceControllerBase<1> **)(lVar18 + 0x40);
          lVar18 = *(longlong *)(lVar18 + 0x38);
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar14.ReferenceController);
          FVar14.ReferenceController = pTVar5;
          FVar4.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
        } while (lVar18 != 0);
      }
    }
    local_78.SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar13 = param_1->Object;
    uVar11 = 0;
    if ((int)uVar15 < (pFVar13->Children).ArrayNum) {
      uVar11 = uVar21;
    }
    if ((uVar11 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar2 = (pFVar13->Children).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar2 + uVar17 * 0x10) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(int *)(*(longlong *)(pFVar2 + uVar17 * 0x10) + 0x50) == 0) {
      if ((local_78.Object == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = local_78.Object;
      if ((param_1->Object == (FVisualizerEvent *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = param_1->Object;
      uVar11 = 0;
      if ((int)uVar15 < (pFVar6->Children).ArrayNum) {
        uVar11 = uVar21;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar19 = (pFVar6->Children).AllocatorInstance.Data + uVar17 * 0x10;
      pFVar2 = (pFVar13->Children).AllocatorInstance.Data;
      if (((pFVar2 <= pFVar19) && (pFVar19 < pFVar2 + (longlong)(pFVar13->Children).ArrayMax * 0x10)
          ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = (pFVar13->Children).ArrayNum;
      piVar1 = &(pFVar13->Children).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar13->Children).AllocatorInstance,piVar1);
      }
      pFVar2 = (pFVar13->Children).AllocatorInstance.Data;
      (pFVar13->Children).ArrayNum = iVar12 + 1;
      *(undefined8 *)(pFVar2 + (longlong)iVar12 * 0x10) = *(undefined8 *)pFVar19;
      lVar3 = *(longlong *)(pFVar19 + 8);
      *(longlong *)(pFVar2 + (longlong)iVar12 * 0x10 + 8) = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_80);
    uVar20 = (ulonglong)(uVar15 + 1);
    uVar17 = uVar17 + 1;
  } while( true );
}

// ExpandBar @ 148d76ec0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBarVisualizer::ExpandBar
          (SBarVisualizer *this,FReply *__return_storage_ptr__,
          TSharedPtr<FVisualizerEvent,1> *param_1)

{
  FVisualizerEvent *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FReply *pFVar5;
  TSharedPtr<FVisualizerEvent,1> local_38;
  TSharedPtr<FVisualizerEvent,1> local_28;
  FVisualizerEvent *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pFVar1 = param_1->Object;
  if ((pFVar1 != (FVisualizerEvent *)0x0) && (0 < (pFVar1->Children).ArrayNum)) {
    pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (this->SelectedBarGraph).Object;
    pTStack_10 = (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
    (this->SelectedBarGraph).Object = pFVar1;
    (this->SelectedBarGraph).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    CreateDataView(this);
    if ((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar3)();
        return pFVar5;
      }
    }
    (**(code **)(((this->BarGraphsList).Object)->_padding_ + 0x248))();
    local_38.Object = (this->SelectedBarGraph).Object;
    local_38.SharedReferenceCount.ReferenceController =
         (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->OnBarGraphExpansionChangedDelegate,&local_38);
    local_28.Object = param_1->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AdjustTimeline(this,&local_28);
  }
  FReply::FReply(__return_storage_ptr__,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindSelectedEventsParent @ 148d77400

TSharedPtr<FVisualizerEvent,1> * __thiscall
SBarVisualizer::FindSelectedEventsParent
          (SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *__return_storage_ptr__,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_1,
          TSharedPtr<FVisualizerEvent,1> *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FVisualizerEvent,1> *pTVar6;
  longlong *plVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  TSharedPtr<FVisualizerEvent,1> local_58;
  TSharedPtr<FVisualizerEvent,1> local_48;
  
  iVar13 = param_1->ArrayNum;
  uVar10 = 0;
  uVar14 = uVar10;
  if (0 < iVar13) {
    do {
      uVar11 = (uint)uVar10;
      uVar12 = ~uVar11 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar11 < iVar13) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar9 + uVar14) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar3)();
        return pTVar6;
      }
      lVar1 = *(longlong *)(pFVar9 + uVar14);
      plVar7 = *(longlong **)(lVar1 + 0x48);
      plVar8 = plVar7 + (longlong)*(int *)(lVar1 + 0x50) * 2;
      if (plVar7 != plVar8) {
        do {
          if ((FVisualizerEvent *)*plVar7 == param_2->Object) {
            uVar5 = 0;
            if ((int)uVar11 < param_1->ArrayNum) {
              uVar5 = uVar12;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pTVar6 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar3)();
              return pTVar6;
            }
            pFVar9 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10;
            __return_storage_ptr__->Object = *(FVisualizerEvent **)pFVar9;
            pTVar2 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
            (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            goto LAB_148d775d4;
          }
          plVar7 = plVar7 + 2;
        } while (plVar7 != plVar8);
      }
      local_48.Object = param_2->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar5 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar5 = uVar12;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar9 = (param_1->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar9 + uVar14) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FVisualizerEvent,1> *)(*pcVar3)();
        return pTVar6;
      }
      FindSelectedEventsParent
                (this,&local_58,
                 (TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)(pFVar9 + uVar14) + 0x48),&local_48);
      if (local_58.Object != (FVisualizerEvent *)0x0) {
        __return_storage_ptr__->Object = local_58.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_58.SharedReferenceCount.ReferenceController;
        local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_58.Object = (FVisualizerEvent *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_148d775d4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      iVar13 = param_1->ArrayNum;
      uVar10 = (ulonglong)(uVar11 + 1);
      uVar14 = uVar14 + 0x10;
    } while ((int)(uVar11 + 1) < iVar13);
  }
  __return_storage_ptr__->Object = (FVisualizerEvent *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_148d775d4:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetHomeButtonVisibility @ 148d7b4a0

EVisibility __thiscall SBarVisualizer::GetHomeButtonVisibility(SBarVisualizer *this)

{
  FVisualizerEvent *pFVar1;
  EVisibility EVar2;
  uchar *in_RDX;
  
  pFVar1 = (this->SelectedBarGraph).Object;
  if (((pFVar1 == (FVisualizerEvent *)0x0) ||
      ((pFVar1->ParentEvent).Object == (FVisualizerEvent *)0x0)) ||
     (EVar2.Value.Value = EVisibility::Visible.Value.Value,
     (((pFVar1->ParentEvent).Object)->ParentEvent).Object == (FVisualizerEvent *)0x0)) {
    EVar2.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetSelectedCategoryName @ 148d7c790

FText * __thiscall
SBarVisualizer::GetSelectedCategoryName(SBarVisualizer *this,FText *__return_storage_ptr__)

{
  FVisualizerEvent *pFVar1;
  FScriptContainerElement *_Src;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FText *pFVar6;
  longlong lVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = (this->SelectedBarGraph).Object;
  if (pFVar1 == (FVisualizerEvent *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"SBarVisualizer",L"Frame",L"Frame");
  }
  else {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar1->EventName).Data.ArrayNum;
    lVar7 = (longlong)local_38.Data.ArrayNum;
    _Src = (pFVar1->EventName).Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    if (((this->SelectedBarGraph).Object == (FVisualizerEvent *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar4)();
      return pFVar6;
    }
    pFVar1 = (this->SelectedBarGraph).Object;
    pTVar2 = (pFVar1->ParentEvent).SharedReferenceCount.ReferenceController;
    pFVar1 = (pFVar1->ParentEvent).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    while (pFVar1 != (FVisualizerEvent *)0x0) {
      ::FString::ConcatFC(&local_18,&pFVar1->EventName,L"\\");
      ::FString::ConcatFF(&local_28,&local_18,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      local_38.Data.ArrayNum = local_28.Data.ArrayNum;
      local_38.Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if ((pFVar1 == (FVisualizerEvent *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar4)();
        return pFVar6;
      }
      pTVar3 = (pFVar1->ParentEvent).SharedReferenceCount.ReferenceController;
      pFVar1 = (pFVar1->ParentEvent).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pTVar2 = pTVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FText::FromString(__return_storage_ptr__,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetToParentButtonVisibility @ 148d7d3b0

EVisibility __thiscall SBarVisualizer::GetToParentButtonVisibility(SBarVisualizer *this)

{
  FVisualizerEvent *pFVar1;
  EVisibility EVar2;
  uchar *in_RDX;
  
  pFVar1 = (this->SelectedBarGraph).Object;
  if ((pFVar1 == (FVisualizerEvent *)0x0) ||
     (EVar2.Value.Value = EVisibility::Visible.Value.Value,
     (pFVar1->ParentEvent).Object == (FVisualizerEvent *)0x0)) {
    EVar2.Value.Value = EVisibility::Collapsed.Value.Value;
  }
  *in_RDX = (uchar)EVar2.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetZoom @ 148d7d790

float __thiscall SBarVisualizer::GetZoom(SBarVisualizer *this)

{
  return this->ZoomSliderValue * __real_41980000 + __real_3f800000;
}

// GetZoomLabel @ 148d7d7b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall SBarVisualizer::GetZoomLabel(SBarVisualizer *this,FText *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FNumberFormattingOptions *pFVar4;
  TSharedPtr<FCulture,1> local_58;
  FText local_48;
  FText local_38;
  FNumberFormattingOptions local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = FNumberFormattingOptions::FNumberFormattingOptions(&local_28);
      pFVar4->MinimumFractionalDigits = 2;
      pFVar4->MaximumFractionalDigits = 2;
      ZoomFormatOptions.AlwaysSign = pFVar4->AlwaysSign;
      ZoomFormatOptions.UseGrouping = pFVar4->UseGrouping;
      ZoomFormatOptions.IndicateNearlyInteger = pFVar4->IndicateNearlyInteger;
      ZoomFormatOptions._3_1_ = pFVar4->field_0x3;
      ZoomFormatOptions.RoundingMode = pFVar4->RoundingMode;
      ZoomFormatOptions.MinimumIntegralDigits = pFVar4->MinimumIntegralDigits;
      ZoomFormatOptions.MaximumIntegralDigits = pFVar4->MaximumIntegralDigits;
      ZoomFormatOptions.MinimumFractionalDigits = pFVar4->MinimumFractionalDigits;
      ZoomFormatOptions.MaximumFractionalDigits = pFVar4->MaximumFractionalDigits;
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_58.Object = (FCulture *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = FText::AsNumber(&local_38,this->ZoomSliderValue * __real_41980000 + __real_3f800000,
                           &ZoomFormatOptions,&local_58);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"ProfileVisualizer",L"ZoomLabelFmt",L"Zoom: {0}x");
  pFVar3 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar2,Default);
  FText::Format<FText>(__return_storage_ptr__,pFVar3,pFVar1);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetZoomValue @ 148d7d8f0

float __thiscall SBarVisualizer::GetZoomValue(SBarVisualizer *this)

{
  return this->ZoomSliderValue;
}

// HandleEventSelectionChanged @ 148d7e050

void __thiscall
SBarVisualizer::HandleEventSelectionChanged
          (SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  int iVar1;
  FVisualizerEvent *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SListView<TSharedPtr<FVisualizerEvent,1>_> *pSVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  Type *pTVar11;
  FVisualizerEvent *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  longlong lVar14;
  uint uVar15;
  TSharedPtr<FVisualizerEvent,1> local_68;
  TSharedPtr<FVisualizerEvent,1> local_58;
  TSharedPtr<FVisualizerEvent,1> local_48;
  TSharedPtr<FVisualizerEvent,1> local_38;
  
  pTVar13 = (this->ProfileData).SharedReferenceCount.ReferenceController;
  pFVar12 = (this->ProfileData).Object;
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  while( true ) {
    if ((pFVar12 == (FVisualizerEvent *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar2 = (pFVar12->ParentEvent).Object;
    if (pFVar2 == (FVisualizerEvent *)0x0) break;
    pTVar3 = (pFVar12->ParentEvent).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    pFVar12 = pFVar2;
    pTVar13 = pTVar3;
  }
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Object = pFVar12;
  local_58.SharedReferenceCount.ReferenceController = pTVar13;
  ClearBarSelection(this,&local_58,&local_68);
  this->bSuppressBarGraphSelectionChangedDelegate = true;
  if (((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pSVar4 = (this->BarGraphsList).Object;
  pTVar11 = TAttribute<enum_ESelectionMode::Type>::Get(&pSVar4->_padding_);
  if ((*pTVar11 != None) &&
     (*(int *)&(pSVar4->SelectedItems).Elements.field_0x8 !=
      *(int *)&(pSVar4->SelectedItems).Elements.field_0x34)) {
    (**(code **)(pSVar4->_padding_ + 0x30))(&pSVar4->_padding_);
    (**(code **)(pSVar4->_padding_ + 0x40))(&pSVar4->_padding_,3);
  }
  if (param_1->Object != (FVisualizerEvent *)0x0) {
    bVar7 = false;
    uVar15 = 0;
    if (0 < (this->ProfileDataView).ArrayNum) {
      lVar14 = 0;
      do {
        if (bVar7) break;
        uVar9 = 0;
        if ((int)uVar15 < (this->ProfileDataView).ArrayNum) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->ProfileDataView).AllocatorInstance.Data;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar5 + lVar14 + 8);
        pFVar12 = *(FVisualizerEvent **)(pFVar5 + lVar14);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((param_1->Object == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = param_1->Object;
        if ((pFVar12 == (FVisualizerEvent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (pFVar12->EventName).Data.ArrayNum;
        iVar1 = (pFVar2->EventName).Data.ArrayNum;
        if (iVar10 == iVar1) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               ((wchar_t *)(pFVar12->EventName).Data.AllocatorInstance.Data,
                                (wchar_t *)(pFVar2->EventName).Data.AllocatorInstance.Data);
            bVar8 = iVar10 == 0;
            goto LAB_148d7e2d1;
          }
LAB_148d7e2dc:
          if (((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pSVar4 = (this->BarGraphsList).Object;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_48.Object = pFVar12;
          local_48.SharedReferenceCount.ReferenceController = pTVar3;
          SListView<TSharedPtr<FVisualizerEvent,1>_>::SetSelection(pSVar4,&local_48,Direct);
          if (((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pSVar4 = (this->BarGraphsList).Object;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_38.Object = pFVar12;
          local_38.SharedReferenceCount.ReferenceController = pTVar3;
          SListView<TSharedPtr<FVisualizerEvent,1>_>::RequestScrollIntoView(pSVar4,&local_38,0);
          bVar7 = true;
        }
        else {
          bVar8 = iVar10 + iVar1 == 1;
LAB_148d7e2d1:
          if (bVar8) goto LAB_148d7e2dc;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + 0x10;
      } while ((int)uVar15 < (this->ProfileDataView).ArrayNum);
    }
  }
  this->bSuppressBarGraphSelectionChangedDelegate = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IsExpandable @ 148d7f420

bool __thiscall
SBarVisualizer::IsExpandable(SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1)

{
  FVisualizerEvent *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar7 = 0;
  lVar8 = 0;
  while( true ) {
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if ((param_1->Object->Children).ArrayNum <= (int)uVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return false;
    }
    if ((param_1->Object == (FVisualizerEvent *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) break;
    pFVar1 = param_1->Object;
    uVar6 = 0;
    if ((int)uVar7 < (pFVar1->Children).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar2 = (pFVar1->Children).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar2 + lVar8) == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (0 < *(int *)(*(longlong *)(pFVar2 + lVar8) + 0x50)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x10;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

// OnBarEventSelectionChanged @ 148d82ca0

void __thiscall
SBarVisualizer::OnBarEventSelectionChanged
          (SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2,int param_3)

{
  FVisualizerEvent *pFVar1;
  longlong *plVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FVisualizerEvent,1> local_38;
  FReadAccessScope local_28;
  
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  HandleEventSelectionChanged(this,&local_38);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar1 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnBarEventSelectionChangedDelegate,&local_28);
  if ((*(int *)&(this->OnBarEventSelectionChangedDelegate).field_0x10 == 0) ||
     (plVar2 = *(longlong **)&(this->OnBarEventSelectionChangedDelegate).field_0x8,
     plVar2 == (longlong *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  else {
    local_38.Object = pFVar1;
    local_38.SharedReferenceCount.ReferenceController = pTVar3;
    (**(code **)(*plVar2 + 0x68))(plVar2,param_3,&local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnBarGeometryChanged @ 148d82d80

void __thiscall SBarVisualizer::OnBarGeometryChanged(SBarVisualizer *this,FGeometry *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Timeline).Object == (STimeline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FGeometry::operator=(&((this->Timeline).Object)->DrawingGeometry,param_1);
  return;
}

// OnBarGraphSelectionChanged @ 148d830c0

void __thiscall
SBarVisualizer::OnBarGraphSelectionChanged
          (SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1,Type param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FVisualizerEvent,1> local_18;
  
  if (param_1->Object != (FVisualizerEvent *)0x0) {
    if ((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(((this->BarGraphsList).Object)->_padding_ + 0x248))();
  }
  if (this->bSuppressBarGraphSelectionChangedDelegate == false) {
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->OnBarGraphSelectionChangedDelegate,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnBarRightClicked @ 148d83170

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBarVisualizer::OnBarRightClicked
          (SBarVisualizer *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2,TSharedPtr<FVisualizerEvent,1> *param_3)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  FReadAccessScope local_28;
  
  FVar1 = (param_2->EffectingButton).KeyName;
  pTVar2 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = FVar1 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnBarGraphContextMenuDelegate,&local_28);
    if ((*(int *)&(this->OnBarGraphContextMenuDelegate).field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->OnBarGraphContextMenuDelegate).field_0x8,
       plVar3 != (longlong *)0x0)) {
      cVar4 = (**(code **)(*plVar3 + 0x38))();
      if (cVar4 != '\0') {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_28);
        bVar5 = true;
        goto LAB_148d831f3;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  bVar5 = false;
LAB_148d831f3:
  FReply::FReply(__return_storage_ptr__,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// OnGenerateWidgetForList @ 148d83fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SBarVisualizer::OnGenerateWidgetForList
          (SBarVisualizer *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedPtr<FVisualizerEvent,1> *param_1,TSharedRef<STableViewBase,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FVisualizerEvent *pFVar4;
  TSlateDecl<SGraphBar,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SGraphBar,1> *pTVar5;
  TSharedRef<ITableRow,1> *pTVar6;
  TSharedPtr<FVisualizerEvent,1> *pTVar7;
  FSlotArguments *pFVar8;
  FSlateColor *pFVar9;
  FMargin *pFVar10;
  FName *pFVar11;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SImage,1> *pTVar12;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar13;
  TSharedRef<SBorder,1> *pTVar14;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SButton,1> *pTVar15;
  FText *pFVar16;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar17;
  TSharedRef<STextBlock,1> *pTVar18;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SHorizontalBox,1> *pTVar19;
  FSlotArguments *pFVar20;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar21;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> TVar22;
  TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_05;
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> *pTVar23;
  longlong lVar24;
  code **ppcVar25;
  undefined1 *puVar26;
  pmf_2b730662 *ppVar27;
  pmf_6f6f182e *ppVar28;
  pmf_13e63e3d *ppVar29;
  undefined1 *puVar30;
  pmf_413261ac *ppVar31;
  T0RequiredArgs local_2fe6;
  undefined1 local_2fe5;
  undefined1 local_2fe4;
  T0RequiredArgs local_2fe3;
  T0RequiredArgs local_2fe2;
  T0RequiredArgs local_2fe1;
  T0RequiredArgs local_2fe0;
  T0RequiredArgs local_2fdf;
  T0RequiredArgs local_2fde;
  T0RequiredArgs local_2fdd;
  T0RequiredArgs local_2fdc [4];
  TArray<TSharedPtr<SGraphBar,1>,TSizedDefaultAllocator<32>_> *local_2fd8;
  int local_2fd0;
  int local_2fcc;
  float local_2fc8;
  float local_2fc4;
  TSharedPtr<SGraphBar,1> *local_2fc0;
  TSharedPtr<SGraphBar,1> local_2fb8;
  ISlateStyle *local_2fa8;
  double local_2fa0;
  double local_2f98;
  ISlateStyle *local_2f90;
  ISlateStyle *local_2f88;
  TSharedPtr<SWidget,1> local_2f80;
  FArguments *local_2f70;
  FArguments *local_2f68;
  TSharedPtr<FVisualizerEvent,1> *local_2f60;
  TSharedPtr<FVisualizerEvent,1> *local_2f58;
  double local_2f50;
  double local_2f48;
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *local_2f40;
  SGraphBar *local_2f38;
  TSharedPtr<SGraphBar,1> *local_2f30;
  TSharedPtr<SGraphBar,1> *local_2f28;
  TSharedPtr<SGraphBar,1> *local_2f20;
  FScriptContainerElement *local_2f18;
  FScriptContainerElement *local_2f10;
  FScriptContainerElement *local_2f08;
  undefined4 local_2f00;
  undefined4 local_2efc;
  FScriptContainerElement *local_2ef8;
  FScriptContainerElement *local_2ef0;
  FScriptContainerElement *local_2ee8;
  longlong local_2ee0;
  longlong local_2ed8;
  FScriptContainerElement *local_2ed0;
  FScriptContainerElement *local_2ec8;
  FScriptContainerElement *local_2ec0;
  TSharedPtr<SGraphBar,1> *local_2eb8;
  SGraphBar *local_2eb0;
  SGraphBar *local_2ea8;
  TSharedPtr<FVisualizerEvent,1> *local_2ea0;
  FName local_2e98;
  ISlateStyle *local_2e90;
  FArguments *local_2e88;
  TAttribute<FSlateColor> *local_2e80;
  TAttribute<FSlateColor> *local_2e78;
  FArguments *local_2e70;
  TAttribute<FMargin> *local_2e68;
  TAttribute<FMargin> *local_2e60;
  FArguments *local_2e58;
  TSharedPtr<FVisualizerEvent,1> *local_2e50;
  TSharedPtr<FVisualizerEvent,1> *local_2e48;
  FArguments *local_2e40;
  FSharedReferencer<1> *local_2e38;
  FName local_2e30;
  code *local_2e28;
  FSlateBrush *local_2e20;
  TAttribute<FSlateBrush_const_*> *local_2e18;
  TAttribute<FSlateBrush_const_*> *local_2e10;
  FArguments *local_2e08;
  FArguments *local_2e00;
  FArguments *local_2df8;
  FArguments *local_2df0;
  FName *local_2de8;
  FName local_2de0;
  code *local_2dd8;
  FSlateBrush *local_2dd0;
  TAttribute<FSlateBrush_const_*> *local_2dc8;
  TAttribute<FSlateBrush_const_*> *local_2dc0;
  FArguments *local_2db8;
  FArguments *local_2db0;
  FArguments *local_2da8;
  FArguments *local_2da0;
  FArguments *local_2d98;
  FArguments *local_2d90;
  FSlotArguments *local_2d88;
  FSlotArguments *local_2d80;
  FArguments *local_2d78;
  TAttribute<FText> *local_2d70;
  TAttribute<FText> *local_2d68;
  FArguments *local_2d60;
  FArguments *local_2d58;
  FSlotArguments *local_2d50;
  FSlotArguments *local_2d48;
  FArguments *local_2d40;
  FArguments *local_2d38;
  TAttribute<FText> *local_2d30;
  TAttribute<FText> *local_2d28;
  FArguments *local_2d20;
  FArguments *local_2d18;
  FArguments *local_2d10;
  FName *local_2d08;
  FName local_2d00;
  code *local_2cf8;
  FSlateBrush *local_2cf0;
  TAttribute<FSlateBrush_const_*> *local_2ce8;
  TAttribute<FSlateBrush_const_*> *local_2ce0;
  FArguments *local_2cd8;
  TSharedPtr<FVisualizerEvent,1> *local_2cd0;
  TSharedPtr<FVisualizerEvent,1> *local_2cc8;
  FArguments *local_2cc0;
  TSharedRef<SWidget,1> *local_2cb8;
  FSlotArguments *local_2cb0;
  FSlotArguments *local_2ca8;
  FArguments *local_2ca0;
  FSlotArguments *local_2c98;
  FSlotArguments *local_2c90;
  FArguments *local_2c88;
  FArguments *local_2c80;
  FArguments *local_2c78;
  FArguments *local_2c70;
  FArguments *local_2c68;
  FArguments *local_2c60;
  int local_2c58;
  FArguments *local_2c50;
  TSharedRef<SWidget,1> local_2c48;
  code *local_2c38;
  undefined4 local_2c30;
  TSharedRef<SWidget,1> local_2c28;
  TSharedRef<SWidget,1> local_2c18;
  code *local_2c08;
  undefined4 local_2c00;
  code *local_2bf8;
  undefined4 local_2bf0;
  code *local_2be8;
  undefined4 local_2be0;
  TSharedPtr<SWidget,1> local_2bd8;
  TSharedRef<SWidget,1> local_2bc8;
  TSharedRef<SWidget,1> local_2bb8;
  TSharedRef<SWidget,1> local_2ba8;
  TSharedRef<SWidget,1> local_2b98;
  TSharedPtr<SWidget,1> local_2b88;
  TSharedRef<STableViewBase,1> local_2b78;
  FName local_2b68;
  FName local_2b60;
  undefined1 local_2b58 [16];
  undefined1 local_2b48 [16];
  pmf_2b730662 local_2b38;
  undefined1 local_2b28 [16];
  pmf_6f6f182e local_2b18;
  TSharedRef<SGraphBar,1> local_2b08;
  undefined1 local_2af8 [16];
  undefined1 local_2ae8 [16];
  pmf_13e63e3d local_2ad8;
  TSharedRef<SHorizontalBox,1> local_2ac8;
  TSharedRef<STextBlock,1> local_2ab8;
  FText local_2aa8;
  TSharedRef<SButton,1> local_2a98;
  TSharedRef<SBorder,1> local_2a88;
  TSharedRef<SImage,1> local_2a78;
  TSharedRef<STextBlock,1> local_2a68;
  FText local_2a58;
  undefined1 local_2a48 [16];
  undefined1 local_2a38 [16];
  pmf_413261ac local_2a28;
  TSharedRef<STableRow<TSharedPtr<FVisualizerEvent,1>_>,1> local_2a18;
  TSharedRef<SBorder,1> local_2a08;
  TSharedRef<SVerticalBox,1> local_29f8;
  TSharedRef<SGraphBar,1> local_29e8;
  TSharedRef<SWidget,1> local_29d8;
  TSlateDecl<SGraphBar,RequiredArgs::T0RequiredArgs> local_29c8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_29b0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2998;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_2980;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2968;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2950;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_2938;
  TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_2920;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_2908;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_28f0;
  TSharedPtr<FVisualizerEvent,1> local_28d8;
  FMargin local_28c8;
  TSharedPtr<FVisualizerEvent,1> local_28b8;
  TSharedPtr<FVisualizerEvent,1> local_28a8;
  FSlateColor local_2898;
  TAttribute<FSlateBrush_const_*> local_2880;
  TAttribute<FSlateBrush_const_*> local_2858;
  TAttribute<FSlateBrush_const_*> local_2830;
  TAttribute<FSlateColor> local_2808;
  TAttribute<FMargin> local_27d8;
  TAttribute<FText> local_27a8;
  TAttribute<FText> local_2778;
  FSlotArguments local_2748;
  FSlotArguments local_2660;
  FSlotArguments local_2578;
  FSlotArguments local_2490;
  FArguments local_23a8;
  FArguments local_2180;
  FArguments local_1f78;
  FArguments local_1d70;
  FArguments local_1ac8;
  FArguments local_17d0;
  FArguments local_13f0;
  FArguments local_1010;
  FArguments local_ad0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x148d83fc0;
  local_2c50 = SGraphBar::FArguments::FArguments(&local_23a8);
  pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
  local_2fcc = pFVar4->Category;
  local_2c08 = OnBarEventSelectionChanged;
  local_2c00 = 0;
  ppcVar25 = &local_2c08;
  puVar26 = local_2b58;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar26 = *(undefined1 *)ppcVar25;
    ppcVar25 = (code **)((longlong)ppcVar25 + 1);
    puVar26 = puVar26 + 1;
  }
  puVar26 = local_2b58;
  puVar30 = local_2b48;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar30 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar30 = puVar30 + 1;
  }
  puVar26 = local_2b48;
  ppVar27 = &local_2b38;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *(undefined1 *)ppVar27 = *puVar26;
    puVar26 = puVar26 + 1;
    ppVar27 = (pmf_2b730662 *)&ppVar27->field_0x1;
  }
  local_2f70 = SGraphBar::FArguments::OnSelectionChanged<SBarVisualizer,int>
                         (local_2c50,this,&local_2b38,local_2fcc);
  local_2bf8 = OnBarGeometryChanged;
  local_2bf0 = 0;
  ppcVar25 = &local_2bf8;
  puVar26 = local_2b28;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar26 = *(undefined1 *)ppcVar25;
    ppcVar25 = (code **)((longlong)ppcVar25 + 1);
    puVar26 = puVar26 + 1;
  }
  puVar26 = local_2b28;
  ppVar28 = &local_2b18;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *(undefined1 *)ppVar28 = *puVar26;
    puVar26 = puVar26 + 1;
    ppVar28 = (pmf_6f6f182e *)&ppVar28->field_0x1;
  }
  local_2f68 = SGraphBar::FArguments::OnGeometryChanged<SBarVisualizer>(local_2f70,this,&local_2b18)
  ;
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fe6);
  this_00 = MakeTDecl<SGraphBar,RequiredArgs::T0RequiredArgs>
                      (&local_29c8,"SGraphBar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x159,&local_2fe6);
  pTVar5 = TSlateDecl<SGraphBar,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_2b08,local_2f68);
  TSharedPtr<SGraphBar,1>::TSharedPtr<SGraphBar,1><SGraphBar>(&local_2fb8,pTVar5);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2b08.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_29c8._Widget.SharedReferenceCount);
  TDelegate<void___cdecl(FGeometry),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FGeometry),FDefaultDelegateUserPolicy>(&local_23a8._OnGeometryChanged);
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
  ::
  ~TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
            (&local_23a8._OnSelectionChanged);
  TSlateBaseNamedArgs<SGraphBar>::~TSlateBaseNamedArgs<SGraphBar>
            ((TSlateBaseNamedArgs<SGraphBar> *)&local_23a8);
  pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
  local_2f60 = &pFVar4->ParentEvent;
  local_2fe5 = local_2f60->Object != (FVisualizerEvent *)0x0;
  if ((bool)local_2fe5) {
    pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
    pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(&pFVar4->ParentEvent);
    local_2fa0 = pFVar4->Start;
  }
  else {
    local_2fa0 = 0.0;
  }
  local_2f48 = local_2fa0;
  pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
  local_2f58 = &pFVar4->ParentEvent;
  local_2fe4 = local_2f58->Object != (FVisualizerEvent *)0x0;
  if ((bool)local_2fe4) {
    pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
    pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(&pFVar4->ParentEvent);
    local_2f98 = pFVar4->Duration;
  }
  else {
    local_2f98 = __real_3ff0000000000000;
  }
  local_2f50 = local_2f98;
  local_2f38 = TSharedPtr<SGraphBar,1>::operator->(&local_2fb8);
  pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
  local_2f40 = &pFVar4->Children;
  SGraphBar::SetEvents(local_2f38,local_2f40,local_2f48,local_2f50);
  local_2fd8 = &this->Graphs;
  local_2fc0 = &local_2fb8;
  local_2f30 = (TSharedPtr<SGraphBar,1> *)(local_2fd8->AllocatorInstance).Data;
  local_2f28 = local_2f30;
  local_2f20 = local_2f30;
  if ((local_2f30 <= local_2fc0) &&
     (local_2f18 = (local_2fd8->AllocatorInstance).Data, local_2f10 = local_2f18,
     local_2f08 = local_2f18,
     local_2fc0 < (TSharedPtr<SGraphBar,1> *)(local_2f18 + (longlong)(this->Graphs).ArrayMax * 0x10)
     )) {
    local_2f00 = 0;
    local_2efc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_2ee0 = (longlong)local_2fd8->ArrayNum;
    local_2ed8 = (longlong)local_2fd8->ArrayMax;
    local_2ef8 = (local_2fd8->AllocatorInstance).Data;
    local_2ef0 = local_2ef8;
    local_2ee8 = local_2ef8;
    local_2ed0 = local_2ef8;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedRef<ITableRow,1> *)(*pcVar1)();
      return pTVar6;
    }
  }
  if (local_2fd8->ArrayNum == local_2fd8->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_2fd8->AllocatorInstance,&local_2fd8->ArrayMax);
    local_2fd8->ArrayNum = iVar3;
  }
  local_2fd0 = local_2fd8->ArrayNum;
  local_2fd8->ArrayNum = local_2fd8->ArrayNum + 1;
  local_2ec8 = (local_2fd8->AllocatorInstance).Data;
  local_2ec0 = local_2ec8 + (longlong)local_2fd0 * 0x10;
  local_2eb8 = ::operator_new(0x10,local_2ec0);
  TSharedPtr<SGraphBar,1>::TSharedPtr<SGraphBar,1>(local_2eb8,&local_2fb8);
  local_2c58 = local_2fd0;
  local_2eb0 = TSharedPtr<SGraphBar,1>::operator->(&local_2fb8);
  local_2fc8 = GetZoom(this);
  SGraphBar::SetZoom(local_2eb0,local_2fc8);
  local_2ea8 = TSharedPtr<SGraphBar,1>::operator->(&local_2fb8);
  local_2fc4 = this->ScrollbarOffset;
  SGraphBar::SetOffset(local_2ea8,local_2fc4);
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1>(&local_2f80,(FNullTag *)0x0);
  local_2ea0 = &local_28d8;
  pTVar7 = TSharedPtr<FVisualizerEvent,1>::TSharedPtr<FVisualizerEvent,1>(local_2ea0,param_1);
  bVar2 = IsExpandable(this,pTVar7);
  if (bVar2) {
    local_2d78 = SHorizontalBox::FArguments::FArguments(&local_2180);
    pFVar8 = SHorizontalBox::Slot(&local_2660);
    local_2d88 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar8);
    local_2e88 = SButton::FArguments::FArguments(&local_1010);
    ::FName::FName(&local_2e98,"NoBorder");
    local_2e90 = FCoreStyle::Get();
    local_2e70 = SButton::FArguments::ButtonStyle(local_2e88,local_2e90,&local_2e98,(char *)0x0);
    local_2e80 = &local_2808;
    pFVar9 = FSlateColor::UseForeground(&local_2898);
    local_2e78 = TAttribute<FSlateColor>::TAttribute<FSlateColor>(local_2e80,pFVar9);
    local_2e58 = SButton::FArguments::ForegroundColor(local_2e70,local_2e78);
    local_2e68 = &local_27d8;
    pFVar10 = FMargin::FMargin(&local_28c8,0.0);
    local_2e60 = TAttribute<FMargin>::TAttribute<FMargin>(local_2e68,pFVar10);
    local_2e40 = SButton::FArguments::ContentPadding(local_2e58,local_2e60);
    local_2e50 = &local_28b8;
    local_2e48 = TSharedPtr<FVisualizerEvent,1>::TSharedPtr<FVisualizerEvent,1>(local_2e50,param_1);
    local_2be8 = ExpandBar;
    local_2be0 = 0;
    ppcVar25 = &local_2be8;
    puVar26 = local_2af8;
    for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
      *puVar26 = *(undefined1 *)ppcVar25;
      ppcVar25 = (code **)((longlong)ppcVar25 + 1);
      puVar26 = puVar26 + 1;
    }
    puVar26 = local_2af8;
    puVar30 = local_2ae8;
    for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
      *puVar30 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar30 = puVar30 + 1;
    }
    puVar26 = local_2ae8;
    ppVar29 = &local_2ad8;
    for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
      *(undefined1 *)ppVar29 = *puVar26;
      puVar26 = puVar26 + 1;
      ppVar29 = (pmf_13e63e3d *)&ppVar29->field_0x1;
    }
    local_2d98 = SButton::FArguments::OnClicked<SBarVisualizer,TSharedPtr<FVisualizerEvent,1>_>
                           (local_2e40,this,&local_2ad8,local_2e48);
    local_2e08 = SBorder::FArguments::FArguments(&local_17d0);
    local_2e18 = &local_2880;
    local_2f90 = FCoreStyle::Get();
    local_2e28 = *(code **)((longlong)*local_2f90 + 0x50);
    local_2e38 = &local_2b78.SharedReferenceCount;
    pFVar11 = ::FName::FName((FName *)local_2e38,"NoBorder");
    local_2e30 = *pFVar11;
    local_2e20 = (FSlateBrush *)(*local_2e28)(local_2f90,local_2e30,0,0);
    local_2e10 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                           (local_2e18,&local_2e20);
    local_2e00 = SBorder::FArguments::BorderImage(local_2e08,local_2e10);
    local_2df8 = SBorder::FArguments::HAlign(local_2e00,HAlign_Center);
    local_2df0 = SBorder::FArguments::VAlign(local_2df8,VAlign_Center);
    local_2da8 = SBorder::FArguments::Padding(local_2df0,0.0);
    local_2db8 = SImage::FArguments::FArguments(&local_1d70);
    local_2dc8 = &local_2858;
    local_2f88 = FCoreStyle::Get();
    local_2dd8 = *(code **)((longlong)*local_2f88 + 0x50);
    local_2de8 = &local_2b68;
    pFVar11 = ::FName::FName(local_2de8,"TreeArrow_Collapsed");
    local_2de0 = *pFVar11;
    local_2dd0 = (FSlateBrush *)(*local_2dd8)(local_2f88,local_2de0,0,0);
    local_2dc0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                           (local_2dc8,&local_2dd0);
    local_2db0 = SImage::FArguments::Image(local_2db8,local_2dc0);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fe3);
    this_01 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                        (&local_2950,"SImage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                         ,0x178,&local_2fe3);
    pTVar12 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,&local_2a78,local_2db0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_2b98,pTVar12);
    local_2da0 = SBorder::FArguments::operator[](local_2da8,&local_2b98);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fe2);
    pTVar13 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                        (&local_2968,"SBorder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                         ,0x172,&local_2fe2);
    pTVar14 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar13,&local_2a88,local_2da0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_2ba8,pTVar14);
    local_2d90 = SButton::FArguments::operator[](local_2d98,&local_2ba8);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fe1);
    this_02 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                        (&local_2980,"SButton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                         ,0x16c,&local_2fe1);
    pTVar15 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_02,&local_2a98,local_2d90);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_2c48,pTVar15);
    local_2d80 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_2d88,&local_2c48);
    local_2d40 = SHorizontalBox::FArguments::operator+(local_2d78,local_2d80);
    pFVar8 = SHorizontalBox::Slot(&local_2748);
    local_2d50 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar8);
    local_2d60 = STextBlock::FArguments::FArguments(&local_ad0);
    local_2d70 = &local_27a8;
    pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
    pFVar16 = FText::FromString(&local_2aa8,&pFVar4->EventName);
    local_2d68 = TAttribute<FText>::TAttribute<FText>(local_2d70,pFVar16);
    local_2d58 = STextBlock::FArguments::Text(local_2d60,local_2d68);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fe0);
    pTVar17 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_2998,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                         ,0x180,&local_2fe0);
    pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar17,&local_2ab8,local_2d58);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_2bc8,pTVar18);
    local_2d48 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_2d50,&local_2bc8);
    local_2d38 = SHorizontalBox::FArguments::operator+(local_2d40,local_2d48);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fdf);
    this_03 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_29b0,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                         ,0x168,&local_2fdf);
    pTVar19 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_2ac8,local_2d38);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SHorizontalBox>(&local_2bd8,pTVar19);
    TSharedPtr<SWidget,1>::operator=(&local_2f80,&local_2bd8);
    TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_2bd8);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_2ac8.SharedReferenceCount);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_29b0);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2bc8);
    TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_2ab8);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_2998);
    FText::~FText(&local_2aa8);
    STextBlock::FArguments::~FArguments(&local_ad0);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2748);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2c48);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_2a98.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_2980._Widget.SharedReferenceCount);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2ba8);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_2a88.SharedReferenceCount);
    TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_2968);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2b98);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_2a78.SharedReferenceCount);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>(&local_2950);
    SImage::FArguments::~FArguments(&local_1d70);
    SBorder::FArguments::~FArguments(&local_17d0);
    SButton::FArguments::~FArguments(&local_1010);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2660);
    TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_2180._Slots);
    TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
              ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_2180);
  }
  else {
    local_2d20 = STextBlock::FArguments::FArguments(&local_578);
    local_2d30 = &local_2778;
    pFVar4 = TSharedPtr<FVisualizerEvent,1>::operator->(param_1);
    pFVar16 = FText::FromString(&local_2a58,&pFVar4->EventName);
    local_2d28 = TAttribute<FText>::TAttribute<FText>(local_2d30,pFVar16);
    local_2d18 = STextBlock::FArguments::Text(local_2d20,local_2d28);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fde);
    pTVar17 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_2938,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                         ,0x185,&local_2fde);
    pTVar18 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar17,&local_2a68,local_2d18);
    TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><STextBlock>(&local_2b88,pTVar18);
    TSharedPtr<SWidget,1>::operator=(&local_2f80,&local_2b88);
    TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_2b88);
    TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_2a68);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_2938);
    FText::~FText(&local_2a58);
    STextBlock::FArguments::~FArguments(&local_578);
  }
  local_2c68 = STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::FArguments(&local_1ac8);
  local_2d10 = SBorder::FArguments::FArguments(&local_13f0);
  local_2cd8 = SBorder::FArguments::Padding(local_2d10,0.0);
  local_2ce8 = &local_2830;
  local_2fa8 = FCoreStyle::Get();
  local_2cf8 = *(code **)((longlong)*local_2fa8 + 0x50);
  local_2d08 = &local_2b60;
  pFVar11 = ::FName::FName(local_2d08,"NoBorder");
  local_2d00 = *pFVar11;
  local_2cf0 = (FSlateBrush *)(*local_2cf8)(local_2fa8,local_2d00,0,0);
  local_2ce0 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_2ce8,&local_2cf0);
  local_2cc0 = SBorder::FArguments::BorderImage(local_2cd8,local_2ce0);
  local_2cd0 = &local_28a8;
  local_2cc8 = TSharedPtr<FVisualizerEvent,1>::TSharedPtr<FVisualizerEvent,1>(local_2cd0,param_1);
  local_2c38 = OnBarRightClicked;
  local_2c30 = 0;
  ppcVar25 = &local_2c38;
  puVar26 = local_2a48;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar26 = *(undefined1 *)ppcVar25;
    ppcVar25 = (code **)((longlong)ppcVar25 + 1);
    puVar26 = puVar26 + 1;
  }
  puVar26 = local_2a48;
  puVar30 = local_2a38;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *puVar30 = *puVar26;
    puVar26 = puVar26 + 1;
    puVar30 = puVar30 + 1;
  }
  puVar26 = local_2a38;
  ppVar31 = &local_2a28;
  for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
    *(undefined1 *)ppVar31 = *puVar26;
    puVar26 = puVar26 + 1;
    ppVar31 = (pmf_413261ac *)&ppVar31->field_0x1;
  }
  local_2c78 = SBorder::FArguments::
               OnMouseButtonDown<SBarVisualizer,TSharedPtr<FVisualizerEvent,1>_>
                         (local_2cc0,this,&local_2a28,local_2cc8);
  local_2ca0 = SVerticalBox::FArguments::FArguments(&local_1f78);
  pFVar20 = SVerticalBox::Slot(&local_2490);
  local_2cb0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  local_2cb8 = TSharedPtr<SWidget,1>::ToSharedRef(&local_2f80,&local_29d8);
  local_2ca8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2cb0,local_2cb8);
  local_2c88 = SVerticalBox::FArguments::operator+(local_2ca0,local_2ca8);
  pFVar20 = SVerticalBox::Slot(&local_2578);
  local_2c98 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar20);
  pTVar5 = TSharedPtr<SGraphBar,1>::ToSharedRef(&local_2fb8,&local_29e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGraphBar>(&local_2bb8,pTVar5);
  local_2c90 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_2c98,&local_2bb8);
  local_2c80 = SVerticalBox::FArguments::operator+(local_2c88,local_2c90);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_2fdd);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_28f0,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,400,&local_2fdd);
  pTVar21 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_04,&local_29f8,local_2c80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_2c18,pTVar21);
  local_2c70 = SBorder::FArguments::operator[](local_2c78,&local_2c18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_2fdc);
  pTVar13 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_2908,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x18a,local_2fdc);
  pTVar14 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,&local_2a08,local_2c70);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_2c28,pTVar14);
  local_2c60 = STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::operator[]
                         (local_2c68,&local_2c28);
  TVar22 = RequiredArgs::MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&>(&local_2b78);
  this_05 = MakeTDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_2920,"STableRow< TSharedPtr< FVisualizerEvent > >",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ProfileVisualizer\\Private\\SBarVisualizer.cpp"
                       ,0x188,(T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *)TVar22.Arg0);
  pTVar23 = TSlateDecl<STableRow<TSharedPtr<FVisualizerEvent,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
            ::operator<<=(this_05,&local_2a18,local_2c60);
  TSharedRef<ITableRow,1>::TSharedRef<ITableRow,1><STableRow<TSharedPtr<FVisualizerEvent,1>_>_>
            (__return_storage_ptr__,pTVar23);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2a18.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2920._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2c28);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2a08.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_2908);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2c18);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_29f8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_28f0._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_2bb8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_29e8.SharedReferenceCount);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2578);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_29d8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_2490);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_1f78._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_1f78);
  SBorder::FArguments::~FArguments(&local_13f0);
  STableRow<TSharedPtr<FVisualizerEvent,1>_>::FArguments::~FArguments(&local_1ac8);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_2f80);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_2fb8.SharedReferenceCount);
  TSharedPtr<FVisualizerEvent,1>::~TSharedPtr<FVisualizerEvent,1>(param_1);
  return __return_storage_ptr__;
}

// OnGetChildrenForList @ 148d855e0

void __thiscall
SBarVisualizer::OnGetChildrenForList
          (SBarVisualizer *this,TSharedPtr<FVisualizerEvent,1> *param_1,
          TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->Object == (FVisualizerEvent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TSharedPtr<FVisualizerEvent,1>,TSizedDefaultAllocator<32>_>::operator=
            (param_2,&param_1->Object->Children);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnHomeClicked @ 148d85650

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBarVisualizer::OnHomeClicked(SBarVisualizer *this,FReply *__return_storage_ptr__)

{
  FVisualizerEvent *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FReply *pFVar5;
  TSharedPtr<FVisualizerEvent,1> local_38;
  TSharedPtr<FVisualizerEvent,1> local_28;
  FVisualizerEvent *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pFVar1 = (this->ProfileData).Object;
  pTVar2 = (this->ProfileData).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (this->SelectedBarGraph).Object;
  pTStack_10 = (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
  (this->SelectedBarGraph).Object = pFVar1;
  (this->SelectedBarGraph).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  CreateDataView(this);
  if ((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FReply *)(*pcVar3)();
      return pFVar5;
    }
  }
  (**(code **)(((this->BarGraphsList).Object)->_padding_ + 0x248))();
  local_38.Object = (this->SelectedBarGraph).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnBarGraphExpansionChangedDelegate,&local_38);
  local_28.Object = (this->SelectedBarGraph).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  AdjustTimeline(this,&local_28);
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnSetZoomValue @ 148d89b40

void __thiscall SBarVisualizer::OnSetZoomValue(SBarVisualizer *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  SScrollBar *pSVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = __real_41980000;
  uVar16 = __xmm_80000000800000008000000080000000;
  fVar11 = 0.0;
  fVar12 = this->ZoomSliderValue;
  fVar17 = 0.0;
  iVar1 = (this->Graphs).ArrayNum;
  this->ZoomSliderValue = param_1;
  fVar5 = __real_3f800000;
  fVar13 = param_1 * fVar6;
  fVar18 = fVar13 + __real_3f800000;
  fVar14 = fVar12 * fVar6 + __real_3f800000;
  fVar12 = __real_3f800000 / fVar18;
  if (iVar1 != 0) {
    fVar15 = __real_3f800000 - fVar12;
    if ((iVar1 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Graphs).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar17 = *(float *)(*(longlong *)pFVar2 + 0x26c);
    if (((this->Graphs).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Graphs).AllocatorInstance.Data;
    if ((*(longlong *)pFVar2 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar11 = (float)(*(uint *)(*(longlong *)pFVar2 + 0x26c) ^ __xmm_80000000800000008000000080000000
                    );
    if (fVar13 <= fVar11) {
      fVar11 = fVar13;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar11 = ((__real_3f000000 - fVar17) / fVar14 -
             (__real_3f000000 / (this->ZoomSliderValue * fVar6 + fVar5) + fVar11 * fVar12)) * fVar18
             + fVar11;
    if (fVar13 <= fVar11) {
      fVar11 = fVar13;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    fVar17 = (fVar11 * fVar15) / fVar13;
    if (fVar15 <= fVar17) {
      fVar17 = fVar15;
    }
    uVar16 = __xmm_80000000800000008000000080000000;
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
  }
  if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pSVar3 = (this->ScrollBar).Object;
  (**(code **)(pSVar3->_padding_ + 0x250))(pSVar3,fVar17,fVar12,0);
  uVar9 = 0;
  if (0 < (this->Graphs).ArrayNum) {
    fVar12 = fVar18;
    if (fVar18 <= fVar5) {
      fVar12 = fVar5;
    }
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->Graphs).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
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
      pFVar2 = (this->Graphs).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(float *)(*(longlong *)(pFVar2 + lVar10) + 0x268) = fVar12;
      uVar8 = 0;
      if ((int)uVar9 < (this->Graphs).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
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
      pFVar2 = (this->Graphs).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = pFVar2 + lVar10;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
      *(uint *)(*(longlong *)pFVar2 + 0x26c) = (uint)fVar11 ^ uVar16;
    } while ((int)uVar9 < (this->Graphs).ArrayNum);
  }
  if (((this->Timeline).Object == (STimeline *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (fVar18 <= fVar5) {
    fVar18 = fVar5;
  }
  ((this->Timeline).Object)->Zoom = fVar18;
  if (((this->Timeline).Object == (STimeline *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ((this->Timeline).Object)->Offset = (float)((uint)fVar11 ^ uVar16);
  this->ScrollbarOffset = (float)((uint)fVar11 ^ uVar16);
  return;
}

// OnToParentClicked @ 148d8a090

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SBarVisualizer::OnToParentClicked(SBarVisualizer *this,FReply *__return_storage_ptr__)

{
  FVisualizerEvent *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FReply *pFVar5;
  TSharedPtr<FVisualizerEvent,1> local_38;
  TSharedPtr<FVisualizerEvent,1> local_28;
  FVisualizerEvent *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pFVar1 = (this->SelectedBarGraph).Object;
  if ((pFVar1 != (FVisualizerEvent *)0x0) &&
     ((pFVar1->ParentEvent).Object != (FVisualizerEvent *)0x0)) {
    pTVar2 = (pFVar1->ParentEvent).SharedReferenceCount.ReferenceController;
    pFVar1 = (pFVar1->ParentEvent).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18 = (this->SelectedBarGraph).Object;
    pTStack_10 = (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
    (this->SelectedBarGraph).Object = pFVar1;
    (this->SelectedBarGraph).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    CreateDataView(this);
    if ((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar3)();
        return pFVar5;
      }
    }
    (**(code **)(((this->BarGraphsList).Object)->_padding_ + 0x248))();
    local_38.Object = (this->SelectedBarGraph).Object;
    local_38.SharedReferenceCount.ReferenceController =
         (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::
    ExecuteIfBound(&this->OnBarGraphExpansionChangedDelegate,&local_38);
    local_28.Object = (this->SelectedBarGraph).Object;
    local_28.SharedReferenceCount.ReferenceController =
         (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    AdjustTimeline(this,&local_28);
  }
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// ScrollBar_OnUserScrolled @ 148d8fc00

void __thiscall SBarVisualizer::ScrollBar_OnUserScrolled(SBarVisualizer *this,float param_1)

{
  SScrollBar *pSVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar5 = __real_41980000;
  fVar4 = __real_3f800000;
  if (0.0 < this->ZoomSliderValue) {
    fVar11 = this->ZoomSliderValue * __real_41980000 + __real_3f800000;
    fVar10 = __real_3f800000 - __real_3f800000 / fVar11;
    fVar12 = fVar10;
    if (param_1 <= fVar10) {
      fVar12 = param_1;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar10 = (fVar12 / fVar10) * (__real_3f800000 - fVar11);
    if (((this->ScrollBar).Object == (SScrollBar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pSVar1 = (this->ScrollBar).Object;
    (**(code **)(pSVar1->_padding_ + 0x250))
              (pSVar1,fVar12,fVar4 / (this->ZoomSliderValue * fVar5 + fVar4),0);
    uVar9 = 0;
    if (0 < (this->Graphs).ArrayNum) {
      lVar8 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->Graphs).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->Graphs).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar2 + lVar8) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = pFVar2 + lVar8;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x10;
        *(float *)(*(longlong *)pFVar2 + 0x26c) = fVar10;
      } while ((int)uVar9 < (this->Graphs).ArrayNum);
    }
    if (((this->Timeline).Object == (STimeline *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ((this->Timeline).Object)->Offset = fVar10;
    this->ScrollbarOffset = fVar10;
  }
  return;
}

// SetViewMode @ 148d91750

void __thiscall SBarVisualizer::SetViewMode(SBarVisualizer *this,uchar param_1)

{
  FVisualizerEvent *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<FVisualizerEvent,1> local_28;
  FVisualizerEvent *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  this->ViewMode = param_1;
  pFVar1 = (this->ProfileData).Object;
  pTVar2 = (this->ProfileData).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (this->SelectedBarGraph).Object;
  pTStack_10 = (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
  (this->SelectedBarGraph).Object = pFVar1;
  (this->SelectedBarGraph).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  CreateDataView(this);
  if ((this->BarGraphsList).Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (**(code **)(((this->BarGraphsList).Object)->_padding_ + 0x248))();
  local_28.Object = (this->SelectedBarGraph).Object;
  local_28.SharedReferenceCount.ReferenceController =
       (this->SelectedBarGraph).SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegate<void___cdecl(TSharedPtr<FVisualizerEvent,1>),FDefaultDelegateUserPolicy>::ExecuteIfBound
            (&this->OnBarGraphExpansionChangedDelegate,&local_28);
  return;
}

