// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 24

// ~SThemeColorBlocksBar @ 142f400b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::~SThemeColorBlocksBar(SThemeColorBlocksBar *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ThemesViewer).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AddDeleteOverlay).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DragShadow).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bUseAlpha).Getter);
  pvVar1 = *(void **)&(this->bUseAlpha).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bUseAlpha).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bUseSRGB).Getter);
  pvVar1 = *(void **)&(this->bUseSRGB).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bUseSRGB).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RefreshCallback);
  pvVar1 = *(void **)&(this->RefreshCallback).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->RefreshCallback);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetActiveColor);
  pvVar1 = *(void **)&(this->OnGetActiveColor).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetActiveColor);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectColor);
  pvVar1 = *(void **)&(this->OnSelectColor).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectColor);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ColorTheme).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<SThemeColorBlock,1>,int>
            ((TSharedPtr<SThemeColorBlock,1> *)(this->ColorBlocks).AllocatorInstance.Data,
             (this->ColorBlocks).ArrayNum);
  pFVar2 = (this->ColorBlocks).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TSharedRef<SWidget,1>,int>
            ((TSharedRef<SWidget,1> *)(this->Children).Children.AllocatorInstance.Data,
             (this->Children).Children.ArrayNum);
  pFVar2 = (this->Children).Children.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FChildren::~FChildren((FChildren *)&this->Children);
  SPanel::~SPanel((SPanel *)this);
  return;
}

// SThemeColorBlocksBar @ 14301aca0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

SThemeColorBlocksBar * __thiscall
SThemeColorBlocksBar::SThemeColorBlocksBar(SThemeColorBlocksBar *this)

{
  SPanel::SPanel((SPanel *)this);
  this->_padding_ = (longlong)&___7SThemeColorBlocksBar__6B_;
  (this->Children)._padding_ = (longlong)this;
  (this->Children)._padding_ = (longlong)&___7FChildren__6B_;
  ::FName::FName((FName *)&(this->Children)._padding_,"Children");
  *(undefined2 *)&(this->Children)._padding_ = 0xdc00;
  (this->Children)._padding_ = (longlong)&___7__TSlotlessChildren_VSWidget____6B_;
  (this->Children).Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Children).Children.ArrayNum = 0;
  (this->Children).Children.ArrayMax = 0;
  (this->Children).bChangesInvalidatePrepass = true;
  (this->ColorBlocks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorBlocks).ArrayNum = 0;
  (this->ColorBlocks).ArrayMax = 0;
  (this->ColorTheme).Object = (FColorTheme *)0x0;
  (this->ColorTheme).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnSelectColor = 0;
  *(undefined8 *)&(this->OnSelectColor).field_0x8 = 0;
  *(undefined4 *)&(this->OnSelectColor).field_0x10 = 0;
  *(undefined8 *)&this->OnGetActiveColor = 0;
  *(undefined8 *)&(this->OnGetActiveColor).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetActiveColor).field_0x10 = 0;
  *(undefined8 *)&this->RefreshCallback = 0;
  *(undefined8 *)&(this->RefreshCallback).field_0x8 = 0;
  *(undefined4 *)&(this->RefreshCallback).field_0x10 = 0;
  (this->RefreshCallbackHandle).ID = 0;
  (this->bUseSRGB).Value = false;
  (this->bUseSRGB).bIsSet = false;
  *(undefined8 *)&(this->bUseSRGB).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bUseSRGB).Getter = 0;
  *(undefined8 *)&(this->bUseSRGB).Getter.field_0x8 = 0;
  (this->bUseAlpha).Value = false;
  (this->bUseAlpha).bIsSet = false;
  *(undefined8 *)&(this->bUseAlpha).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bUseAlpha).Getter = 0;
  *(undefined8 *)&(this->bUseAlpha).Getter.field_0x8 = 0;
  this->bShowDeleteButton = false;
  (this->DragShadow).Object = (SBorder *)0x0;
  (this->DragShadow).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->AddDeleteOverlay).Object = (SOverlay *)0x0;
  (this->AddDeleteOverlay).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ThemesViewer).Object = (SColorThemesViewer *)0x0;
  (this->ThemesViewer).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->PlaceholderIndex).bIsSet = false;
  return this;
}

// AddNewColorBlock @ 14301cd20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SThemeColorBlocksBar::AddNewColorBlock
          (SThemeColorBlocksBar *this,FLinearColor *param_1,int param_2,bool param_3)

{
  FColorTheme *pFVar1;
  FColorTheme *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  float *pfVar6;
  code *pcVar7;
  undefined8 uVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  TSharedPtr<FLinearColor,1> *pTVar11;
  TRawPtrProxy<FLinearColor> local_res8;
  TSharedPtr<FLinearColor,1> local_28;
  
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar9.ReferenceController = SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController;
  pFVar2 = SColorThemesViewer::Recents.Object;
  if (SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = (this->ColorTheme).Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  if (pFVar1 != pFVar2) {
    if (((this->ColorTheme).Object == (FColorTheme *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar2 = (this->ColorTheme).Object;
    if (0 < (pFVar2->Colors).ArrayNum) {
      pFVar3 = (pFVar2->Colors).AllocatorInstance.Data;
      pTVar4 = *(TReferenceControllerBase<1> **)(pFVar3 + 8);
      plVar5 = *(longlong **)pFVar3;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((plVar5 == (longlong *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*plVar5 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pfVar6 = (float *)*plVar5;
      if ((((__real_38d1b717 <=
             (float)((uint)(*pfVar6 - (param_1->field0_0x0)._s_0.R) &
                    __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
           (__real_38d1b717 <=
            (float)((uint)(pfVar6[1] - (param_1->field0_0x0)._s_0.G) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
          (__real_38d1b717 <=
           (float)((uint)(pfVar6[2] - (param_1->field0_0x0)._s_0.B) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff))) ||
         (__real_38d1b717 <=
          (float)((uint)(pfVar6[3] - (param_1->field0_0x0)._s_0.A) &
                 __xmm_7fffffff7fffffff7fffffff7fffffff))) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      }
      else {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (!param_3) {
          return;
        }
      }
    }
    if (((this->ColorTheme).Object == (FColorTheme *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar2 = (this->ColorTheme).Object;
    local_res8.Object = ::operator_new(0x10);
    if (local_res8.Object != (FLinearColor *)0x0) {
      uVar8 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      *(undefined8 *)&(local_res8.Object)->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
      *(undefined8 *)((longlong)&(local_res8.Object)->field0_0x0 + 8) = uVar8;
    }
    pTVar11 = TSharedPtr<FLinearColor,1>::TSharedPtr<FLinearColor,1><FLinearColor>
                        (&local_28,&local_res8);
    FColorTheme::InsertNewColor(pFVar2,pTVar11,param_2);
    SColorThemesViewer::SaveColorThemesToIni();
  }
  return;
}

// AddRefreshCallback @ 14301cf60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::AddRefreshCallback(SThemeColorBlocksBar *this)

{
  return;
}

// AddToRecents @ 14301cf70

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::AddToRecents(SThemeColorBlocksBar *this,FLinearColor *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  FColorTheme *this_00;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  TSharedPtr<FLinearColor,1> *pTVar10;
  longlong lVar11;
  uint uVar12;
  TRawPtrProxy<FLinearColor> local_res8;
  TSharedPtr<FLinearColor,1> local_38;
  TSharedPtr<FLinearColor,1> local_28;
  
  if ((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FVar7.ReferenceController = SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController;
  this_00 = SColorThemesViewer::Recents.Object;
  if (SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 != (FColorTheme *)0x0) {
    if ((this_00->Colors).ArrayNum == 0x2e) {
      iVar1 = (this_00->Colors).ArrayNum;
      uVar12 = iVar1 - 1;
      uVar9 = 0;
      if ((int)uVar12 < iVar1) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar2 = (this_00->Colors).AllocatorInstance.Data;
      lVar11 = (longlong)(this_00->Colors).ArrayNum;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + lVar11 * 0x10 + -8);
      puVar4 = *(undefined8 **)(pFVar2 + lVar11 * 0x10 + -0x10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (puVar4 == (undefined8 *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_38.Object = (FLinearColor *)*puVar4;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar4[1];
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FColorTheme::RemoveColor(this_00,&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    local_res8.Object = ::operator_new(0x10);
    if (local_res8.Object != (FLinearColor *)0x0) {
      uVar6 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
      *(undefined8 *)&(local_res8.Object)->field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
      *(undefined8 *)((longlong)&(local_res8.Object)->field0_0x0 + 8) = uVar6;
    }
    pTVar10 = TSharedPtr<FLinearColor,1>::TSharedPtr<FLinearColor,1><FLinearColor>
                        (&local_28,&local_res8);
    FColorTheme::InsertNewColor(this_00,pTVar10,0);
    SColorThemesViewer::SaveColorThemesToIni();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return;
}

// ComputeDesiredSize @ 14301fb60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
SThemeColorBlocksBar::ComputeDesiredSize
          (SThemeColorBlocksBar *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  bool bVar1;
  code *pcVar2;
  atomic<int> aVar3;
  FWeakReferencer<1> FVar4;
  bool bVar5;
  atomic<int> aVar6;
  int iVar7;
  TVector2<double> *pTVar8;
  int iVar9;
  FWeakReferencer<1> FVar10;
  FColorTheme *pFVar11;
  FColorTheme *pFVar12;
  
  bVar1 = (this->PlaceholderIndex).bIsSet;
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TVector2<double> *)(*pcVar2)();
    return pTVar8;
  }
  FVar4.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar11 = (FColorTheme *)0x0;
  FVar10.ReferenceController = FVar4.ReferenceController;
  pFVar12 = pFVar11;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar10.ReferenceController = (TReferenceControllerBase<1> *)pFVar11;
      pFVar12 = pFVar11;
      if (aVar3 == (atomic<int>)0x0) break;
      LOCK();
      aVar6 = (FVar4.ReferenceController)->SharedReferenceCount;
      bVar5 = aVar3 == aVar6;
      if (bVar5) {
        (FVar4.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      FVar10.ReferenceController = FVar4.ReferenceController;
      pFVar12 = SColorThemesViewer::CurrentlySelectedThemePtr.Object;
      aVar3 = aVar6;
    } while (!bVar5);
  }
  bVar5 = SColorThemesViewer::Recents.Object == pFVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  iVar7 = (this->ColorBlocks).ArrayNum;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 414.0;
  iVar9 = iVar7 + 1;
  if (bVar1 == false) {
    iVar9 = iVar7;
  }
  iVar7 = (bVar5 ^ 1) + iVar9 + 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(float)((double)(((int)(iVar7 + (iVar7 >> 0x1f & 0xfU)) >> 4) + 1) *
                       __real_403a000000000000 - __real_4000000000000000);
  return __return_storage_ptr__;
}

// Construct @ 1430272a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::Construct(SThemeColorBlocksBar *this,FArguments *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  TSharedPtr<SColorThemesViewer,1> *pTVar3;
  TSharedPtr<FColorTheme,1> *pTVar4;
  longlong *plVar5;
  SColorThemesViewer *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  SWidget *pSVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  FSharedReferencer<1> FVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  bool bVar23;
  char cVar24;
  byte bVar25;
  FArguments *pFVar26;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar27;
  TSharedPtr<FColorTheme,1> *pTVar28;
  FDelegateHandle FVar29;
  FArguments *pFVar30;
  ISlateStyle *pIVar31;
  FName *pFVar32;
  FArguments *pFVar33;
  TSharedRef<SBox,1> *pTVar34;
  TSharedRef<SBorder,1> *pTVar35;
  FArguments *pFVar36;
  FButtonStyle *pFVar37;
  FText *pFVar38;
  undefined8 *puVar39;
  TSharedRef<SWidget,1> *pTVar40;
  ulong64 uVar41;
  FArguments *pFVar42;
  TSharedRef<SImage,1> *pTVar43;
  TSharedRef<SButton,1> *pTVar44;
  FSlotArguments *pFVar45;
  FArguments *pFVar46;
  TSharedRef<SOverlay,1> *pTVar47;
  FArguments *pFVar48;
  FArguments *local_res8;
  FArguments *local_res10;
  FArguments *local_res18;
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2248;
  T0RequiredArgs local_2247;
  T0RequiredArgs local_2246;
  T0RequiredArgs local_2245 [13];
  code *local_2238;
  undefined8 uStack_2230;
  FLLMScope local_2228;
  FLLMScope local_2224;
  FLLMScope local_2220;
  FLLMScope local_221c;
  FLLMScope local_2218;
  FLLMScope local_2214;
  FLLMScope local_2210;
  FLLMScope local_220c;
  undefined1 local_2208 [8];
  ForAnyElementType local_2200;
  int local_21f8;
  SBox *local_21f0;
  TReferenceControllerBase<1> *pTStack_21e8;
  undefined4 local_21e0;
  undefined1 local_21dc;
  undefined1 local_21d8 [8];
  ForAnyElementType FStack_21d0;
  ulonglong local_21c8;
  undefined4 local_21c0;
  undefined1 local_21bc;
  undefined1 local_21b8 [8];
  ForAnyElementType FStack_21b0;
  ulonglong local_21a8;
  SButton *local_21a0;
  FSharedReferencer<1> local_2198;
  FSlateBrush *local_2190;
  undefined1 local_2188;
  undefined1 local_2180 [8];
  ForAnyElementType FStack_2178;
  ulonglong local_2170;
  undefined1 local_2168 [8];
  ForAnyElementType local_2160;
  int local_2158;
  TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs> local_2150;
  undefined1 local_2138 [8];
  ForAnyElementType local_2130;
  int local_2128;
  FText local_2120;
  undefined1 local_2110;
  undefined1 local_2108 [8];
  ForAnyElementType FStack_2100;
  ulonglong local_20f8;
  SOverlay *local_20f0;
  FSharedReferencer<1> local_20e8;
  SColorThemesViewer *local_20e0;
  FSharedReferencer<1> local_20d8;
  SBorder *local_20d0;
  FSharedReferencer<1> local_20c8;
  undefined8 local_20c0;
  undefined8 uStack_20b8;
  undefined1 local_20b0;
  undefined1 local_20a8 [8];
  ForAnyElementType FStack_20a0;
  ulonglong local_2098;
  FMargin local_2090;
  undefined1 local_2080;
  undefined1 local_2078 [8];
  ForAnyElementType FStack_2070;
  ulonglong local_2068;
  SImage *local_2060;
  TReferenceControllerBase<1> *pTStack_2058;
  SImage *local_2050;
  TReferenceControllerBase<1> *pTStack_2048;
  FMemScope local_2040;
  FName local_2038;
  FMemScope local_2030;
  FName local_2028;
  FMemScope local_2020;
  FName local_2018;
  FMemScope local_2010;
  FName local_2008;
  FMemScope local_2000;
  FName local_1ff8;
  FMemScope local_1ff0;
  FName local_1fe8;
  FMemScope local_1fe0;
  FName local_1fd8;
  FMemScope local_1fd0;
  FName local_1fc8;
  FText local_1fc0;
  TSharedRef<SWidget,1> local_1fb0;
  TAttribute<FSlateBrush_const_*> local_1fa0;
  TAttribute<FSlateBrush_const_*> local_1f78;
  FDestructionSentinel local_1f50;
  FDestructionSentinel local_1f38;
  FDestructionSentinel local_1f20;
  FDestructionSentinel local_1f08;
  FDestructionSentinel local_1ef0;
  FDestructionSentinel local_1ed8;
  FDestructionSentinel local_1ec0;
  FDestructionSentinel local_1ea8;
  FDestructionSentinel local_1e90;
  FDestructionSentinel local_1e78;
  undefined1 *local_1e60;
  TAttribute<FMargin> local_1e58;
  TAttribute<FText> local_1e28;
  TSharedRef<SButton,1> local_1df8;
  TSharedRef<SImage,1> local_1de8;
  FText local_1dd8;
  TSharedRef<SButton,1> local_1dc8;
  TSharedRef<SImage,1> local_1db8;
  TSharedRef<SOverlay,1> local_1da8;
  code *local_1d98;
  ulonglong uStack_1d90;
  TSharedRef<SBox,1> local_1d88;
  TSharedRef<SBorder,1> local_1d78;
  TSharedRef<SWidget,1> local_1d68;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1d58;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_1d40;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1d28;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1d10;
  SWidget *local_1cf8;
  TReferenceControllerBase<1> *pTStack_1cf0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_1ce8;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1cd0;
  TSharedPtr<FColorTheme,1> local_1cb8;
  code *local_1ca8;
  ulonglong uStack_1ca0;
  undefined1 local_1c98 [16];
  FName local_1c88;
  FName local_1c80;
  FName local_1c78;
  FName local_1c70;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1c68;
  code *local_1c48;
  ulonglong uStack_1c40;
  undefined1 local_1c38 [32];
  undefined1 local_1c18 [96];
  undefined1 local_1bb8 [96];
  FArguments local_1b58;
  FArguments local_1818;
  FArguments local_1610;
  FArguments local_1368;
  FArguments local_10c0;
  FArguments local_ea8;
  FArguments local_ac8;
  FArguments local_588;
  undefined8 uStack_48;
  
  uStack_48 = 0x1430272bf;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  local_res8 = (FArguments *)((ulonglong)local_res8 & 0xffffffff00000000);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
            (&this->OnSelectColor,&param_1->_OnSelectColor);
  if (&param_1->_OnGetActiveColor != &this->OnGetActiveColor) {
    local_2208 = (undefined1  [8])0x0;
    local_2200.Data = (FScriptContainerElement *)0x0;
    local_21f8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->_OnGetActiveColor
               ,(FReadAccessScope *)(local_1c38 + 8));
    if ((*(int *)&(param_1->_OnGetActiveColor).field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(param_1->_OnGetActiveColor).field_0x8, plVar5 != (longlong *)0x0))
    {
      (**(code **)(*plVar5 + 0x50))(plVar5,local_2208);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_1c38 + 8));
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetActiveColor,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2208);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2208,
               (FWriteAccessScope *)&local_1ea8);
    if ((local_21f8 != 0) && (local_2200.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_2200.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2200,0,0,0x10);
      local_21f8 = 0;
    }
    if (local_1ea8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ea8.Accessor,&local_1ea8);
    }
    if (local_2200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2200.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_2208);
  }
  (this->bUseSRGB).Value = (param_1->_UseSRGB).Value;
  (this->bUseSRGB).bIsSet = (param_1->_UseSRGB).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseSRGB).Getter,&(param_1->_UseSRGB).Getter);
  (this->bUseAlpha).Value = (param_1->_UseAlpha).Value;
  (this->bUseAlpha).bIsSet = (param_1->_UseAlpha).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&(this->bUseAlpha).Getter,&(param_1->_UseAlpha).Getter);
  pFVar26 = SColorThemesViewer::FArguments::FArguments(&local_10c0);
  FLLMScope::FLLMScope(&local_2228,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1fc8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2040,&local_1fc8,true);
  TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorThemesViewer,RequiredArgs::T0RequiredArgs>
            (&local_2150,"SColorThemesViewer",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x317,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_2040);
  FLLMScope::~FLLMScope(&local_2228);
  pSVar6 = local_2150._Widget.Object;
  if ((local_2150._Widget.Object == (SColorThemesViewer *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  SWidget::SWidgetConstruct((SWidget *)local_2150._Widget.Object,(FSlateBaseNamedArgs *)pFVar26);
  SColorThemesViewer::Construct(local_2150._Widget.Object,pFVar26);
  if ((local_2150._Widget.Object == (SColorThemesViewer *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((local_2150._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar24 = (**(code **)((local_2150._Widget.Object)->_padding_ + 0x228))
                       (local_2150._Widget.Object);
    bVar25 = 0;
    if (cVar24 == '\0') goto LAB_14302754a;
  }
  bVar25 = 0x20;
LAB_14302754a:
  *(byte *)&(local_2150._Widget.Object)->_padding_ =
       (byte)(local_2150._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2150._Widget.Object)->_padding_ =
       (byte)(local_2150._Widget.Object)->_padding_ | bVar25;
  if ((local_2150._Widget.Object == (SColorThemesViewer *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pbVar1 = (byte *)((longlong)&(local_2150._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_2150._Widget.Object == (SColorThemesViewer *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FVar20.ReferenceController = local_2150._Widget.SharedReferenceCount.ReferenceController;
  local_2150._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2150._Widget.Object = (SColorThemesViewer *)0x0;
  if ((pSVar6 == (SColorThemesViewer *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_20e0 = pSVar6;
  local_20d8.ReferenceController = FVar20.ReferenceController;
  if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = &this->ThemesViewer;
  if (pTVar3 != (TSharedPtr<SColorThemesViewer,1> *)&local_20e0) {
    pTVar3->Object = pSVar6;
    local_20e0 = (SColorThemesViewer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ThemesViewer).SharedReferenceCount,&local_20d8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20d8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_10c0._UseAlpha.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_10c0);
  if ((pTVar3->Object == (SColorThemesViewer *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pSVar6 = pTVar3->Object;
  local_2238 = OnThemeChanged;
  uStack_2230 = (ulonglong)uStack_2230._4_4_ << 0x20;
  local_1ca8 = OnThemeChanged;
  uStack_1ca0 = uStack_2230;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SThemeColorBlocksBar>
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2168,this,
             (pmf_1d766ebc *)&local_1ca8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pSVar6->CurrentThemeChangedEvent
             ,(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2168,
             (FWriteAccessScope *)&local_1e90);
  if ((local_2158 != 0) && (local_2160.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_2160.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2160,0,0,0x10);
    local_2158 = 0;
  }
  if (local_1e90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e90.Accessor,&local_1e90);
  }
  if (local_2160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2160.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2168);
  uStack_2230 = uStack_2230 & 0xffffffff00000000;
  local_2238 = Refresh;
  pTVar27 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CreateSP<SThemeColorBlocksBar>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_2138,this,
                       (pmf_1d766ebc *)&local_2238);
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RefreshCallback,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar27);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2138,
             (FWriteAccessScope *)&local_1f50);
  if ((local_2128 != 0) && (local_2130.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_2130.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_2130,0,0,0x10);
    local_2128 = 0;
  }
  if (local_1f50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f50.Accessor,&local_1f50);
  }
  if (local_2130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2130.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2138);
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar28 = SColorThemesViewer::GetCurrentColorTheme((this->ThemesViewer).Object,&local_1cb8);
  pTVar4 = &this->ColorTheme;
  if (pTVar4 != pTVar28) {
    pTVar4->Object = pTVar28->Object;
    pTVar28->Object = (FColorTheme *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ColorTheme).SharedReferenceCount,&pTVar28->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cb8.SharedReferenceCount.ReferenceController);
  if ((pTVar4->Object == (FColorTheme *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar23)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FVar29 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)&pTVar4->Object->RefreshEvent,
                      (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1c98);
                    /* WARNING: Load size is inaccurate */
  (this->RefreshCallbackHandle).ID = *FVar29.ID;
  pFVar30 = SBorder::FArguments::FArguments(&local_ea8);
  pIVar31 = FAppStyle::Get();
  pcVar12 = *(code **)((longlong)*pIVar31 + 0x50);
  pFVar32 = ::FName::FName((FName *)(local_1c98 + 8),"ColorPicker.RoundedInputBorderHovered");
  local_2190 = (FSlateBrush *)(*pcVar12)(pIVar31,*pFVar32);
  local_2188 = 1;
  local_2170 = 0;
  local_2180 = (undefined1  [8])0x0;
  FStack_2178.Data = (FScriptContainerElement *)0x0;
  (pFVar30->_BorderImage).Value = local_2190;
  (pFVar30->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2180);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2180,
             (FWriteAccessScope *)&local_1f38);
  if (((int)local_2170 != 0) && (FStack_2178.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2178.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2178,0,0,0x10);
    local_2170 = local_2170 & 0xffffffff00000000;
  }
  if (local_1f38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f38.Accessor,&local_1f38);
  }
  if (FStack_2178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2178.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2180);
  uVar22 = _UNK_15076b1f8;
  local_20b0 = 1;
  local_2098 = 0;
  local_20c0 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_20b8 = _UNK_15076b1f8;
  local_20a8 = (undefined1  [8])0x0;
  FStack_20a0.Data = (FScriptContainerElement *)0x0;
  uVar16 = _UNK_15076b1f4;
  (pFVar30->_Padding).Value.Left = (float)___xmm_3f8000003f8000003f8000003f800000;
  uVar21 = _UNK_15076b1f8;
  (pFVar30->_Padding).Value.Top = (float)uVar16;
  _UNK_15076b1f8 = (undefined4)uVar22;
  _UNK_15076b1fc = SUB84(uVar22,4);
  uVar16 = _UNK_15076b1fc;
  (pFVar30->_Padding).Value.Right = (float)_UNK_15076b1f8;
  _UNK_15076b1f8 = uVar21;
  (pFVar30->_Padding).Value.Bottom = (float)uVar16;
  (pFVar30->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20a8,
             (FWriteAccessScope *)&local_1f20);
  if (((int)local_2098 != 0) && (FStack_20a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20a0,0,0,0x10);
    local_2098 = local_2098 & 0xffffffff00000000;
  }
  if (local_1f20.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f20.Accessor,&local_1f20);
  }
  if (FStack_20a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20a8);
  pFVar33 = SBox::FArguments::FArguments(&local_1b58);
  local_21c0 = 0x41b00000;
  local_21bc = 1;
  local_21b8 = (undefined1  [8])0x0;
  FStack_21b0.Data = (FScriptContainerElement *)0x0;
  local_21a8 = 0;
  (pFVar33->_WidthOverride).Value.Size = 22.0;
  (pFVar33->_WidthOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->_WidthOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_21b8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_21b8,
             (FWriteAccessScope *)&local_1f08);
  if (((int)local_21a8 != 0) && (FStack_21b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_21b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_21b0,0,0,0x10);
    local_21a8 = local_21a8 & 0xffffffff00000000;
  }
  if (local_1f08.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1f08.Accessor,&local_1f08);
  }
  if (FStack_21b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_21b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_21b8);
  local_21e0 = 0x41b00000;
  local_21dc = 1;
  local_21c8 = 0;
  local_21d8 = (undefined1  [8])0x0;
  FStack_21d0.Data = (FScriptContainerElement *)0x0;
  (pFVar33->_HeightOverride).Value.Size = 22.0;
  (pFVar33->_HeightOverride).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar33->_HeightOverride).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_21d8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_21d8,
             (FWriteAccessScope *)&local_1ef0);
  if (((int)local_21c8 != 0) && (FStack_21d0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_21d0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_21d0,0,0,0x10);
    local_21c8 = local_21c8 & 0xffffffff00000000;
  }
  if (local_1ef0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ef0.Accessor,&local_1ef0);
  }
  if (FStack_21d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_21d0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_21d8);
  FVar20 = SNullWidget::NullWidget.SharedReferenceCount;
  pSVar8 = SNullWidget::NullWidget.Object;
  if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1cf8 = (pFVar33->_Content).Widget.Object;
  pTStack_1cf0 = (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar33->_Content).Widget.Object = pSVar8;
  (pFVar33->_Content).Widget.SharedReferenceCount.ReferenceController = FVar20.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1cf0);
  FLLMScope::FLLMScope(&local_2224,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2038 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2030,&local_2038,true);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_1d40,"SBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x323,(T0RequiredArgs *)&local_res10);
  FMemScope::~FMemScope(&local_2030);
  FLLMScope::~FLLMScope(&local_2224);
  pTVar34 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d40,&local_1d88,pFVar33);
  pTVar7 = (pTVar34->SharedReferenceCount).ReferenceController;
  local_21f0 = pTVar34->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)local_21f0;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  pTStack_21e8 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FLLMScope::FLLMScope(&local_2220,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2028 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2020,&local_2028,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1d58,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,799,(T0RequiredArgs *)&local_res18);
  FMemScope::~FMemScope(&local_2020);
  FLLMScope::~FLLMScope(&local_2220);
  pTVar35 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d58,&local_1d78,pFVar30);
  local_20c8.ReferenceController = (pTVar35->SharedReferenceCount).ReferenceController;
  local_20d0 = pTVar35->Object;
  if (local_20c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20c8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20c8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->DragShadow != (TSharedPtr<SBorder,1> *)&local_20d0) {
    (this->DragShadow).Object = local_20d0;
    local_20d0 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->DragShadow).SharedReferenceCount,&local_20c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20c8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d58._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d40._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._MaxAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._MinAspectRatio.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._MaxDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._MaxDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._MinDesiredHeight.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._MinDesiredWidth.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._HeightOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._WidthOverride.Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b58._Content.Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1b58._Padding.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1b58);
  SBorder::FArguments::~FArguments(&local_ea8);
  local_res10 = SOverlay::FArguments::FArguments(&local_1818);
  local_res8 = (FArguments *)SOverlay::Slot((FSlotArguments *)local_1bb8,0);
  pFVar36 = SButton::FArguments::FArguments(&local_588);
  pIVar31 = FAppStyle::Get();
  pFVar32 = ::FName::FName(&local_1c88,"ColorPicker.AddButton");
  pFVar37 = (FButtonStyle *)
            (**(code **)((longlong)*pIVar31 + 0xa0))(pIVar31,FButtonStyle::TypeName,*pFVar32,0,1);
  if (pFVar37 == (FButtonStyle *)0x0) {
    pFVar37 = FButtonStyle::GetDefault();
  }
  uVar18 = _UNK_1509253f8;
  uVar22 = ___xmm_40800000408000004080000040800000;
  pFVar36->_ButtonStyle = pFVar37;
  uVar19 = _UNK_1509253f8;
  uVar21 = ___xmm_40800000408000004080000040800000;
  local_2080 = 1;
  local_2068 = 0;
  ___xmm_40800000408000004080000040800000 = (float)uVar22;
  _UNK_1509253f4 = SUB84(uVar22,4);
  local_2090.Left = ___xmm_40800000408000004080000040800000;
  local_2090.Top = _UNK_1509253f4;
  _UNK_1509253f8 = (float)uVar18;
  _UNK_1509253fc = SUB84(uVar18,4);
  local_2090.Right = _UNK_1509253f8;
  local_2090.Bottom = _UNK_1509253fc;
  local_2078 = (undefined1  [8])0x0;
  FStack_2070.Data = (FScriptContainerElement *)0x0;
  ___xmm_40800000408000004080000040800000 = (float)uVar22;
  _UNK_1509253f4 = SUB84(uVar22,4);
  fVar17 = _UNK_1509253f4;
  _UNK_1509253f8 = uVar19;
  (pFVar36->_ContentPadding).Value.Left = ___xmm_40800000408000004080000040800000;
  ___xmm_40800000408000004080000040800000 = uVar21;
  uVar22 = _UNK_1509253f8;
  (pFVar36->_ContentPadding).Value.Top = fVar17;
  _UNK_1509253f8 = (float)uVar18;
  _UNK_1509253fc = SUB84(uVar18,4);
  fVar17 = _UNK_1509253fc;
  (pFVar36->_ContentPadding).Value.Right = _UNK_1509253f8;
  _UNK_1509253f8 = uVar22;
  (pFVar36->_ContentPadding).Value.Bottom = fVar17;
  (pFVar36->_ContentPadding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar36->_ContentPadding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2078);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2078,
             (FWriteAccessScope *)&local_1ed8);
  if (((int)local_2068 != 0) && (FStack_2070.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2070.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2070,0,0,0x10);
    local_2068 = local_2068 & 0xffffffff00000000;
  }
  if (local_1ed8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ed8.Accessor,&local_1ed8);
  }
  if (FStack_2070.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2070.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2078);
  uStack_2230 = uStack_2230 & 0xffffffff00000000;
  local_2238 = GetAddButtonVisibility;
  local_1d98 = GetAddButtonVisibility;
  uStack_1d90 = uStack_2230;
  pFVar36 = TSlateBaseNamedArgs<SButton>::Visibility<SThemeColorBlocksBar>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar36,this,(pmf_7590b47b *)&local_1d98);
  pFVar38 = FText::AsLocalizable_Advanced_LocText
                      (&local_1fc0,L"SColorThemes",L"AddToThemeTooltip",
                       L"Add the currently selected color to the current color theme");
  FText::FText(&local_2120,pFVar38);
  local_2110 = 1;
  local_20f8 = 0;
  local_2108 = (undefined1  [8])0x0;
  FStack_2100.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)pFVar36,&local_2120);
  *(undefined1 *)&pFVar36->_padding_ = local_2110;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar36->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2108);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2108,
             (FWriteAccessScope *)&local_1ec0);
  if (((int)local_20f8 != 0) && (FStack_2100.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2100.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2100,0,0,0x10);
    local_20f8 = local_20f8 & 0xffffffff00000000;
  }
  if (local_1ec0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1ec0.Accessor,&local_1ec0);
  }
  if (FStack_2100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2100.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2108);
  if (local_2120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_2120.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar36->_OnClicked,
             (FWriteAccessScope *)&local_1e78);
  local_1e60 = &(pFVar36->_OnClicked).field_0x8;
  puVar39 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1e60);
  pFVar48 = local_res8;
  if (puVar39 != (undefined8 *)0x0) {
    local_21f0 = (SBox *)OnAddButtonClicked;
    pTStack_21e8 = (TReferenceControllerBase<1> *)((ulonglong)(uint)local_1fc0._12_4_ << 0x20);
    pTVar40 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1d68);
    pFVar48 = (FArguments *)(pTVar40->SharedReferenceCount).ReferenceController;
    pSVar8 = pTVar40->Object;
    if (pFVar48 != (FArguments *)0x0) {
      LOCK();
      *(int *)&((FSlotArguments *)pFVar48)->_padding_ =
           (int)((FSlotArguments *)pFVar48)->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&((FSlotArguments *)pFVar48)->_padding_ =
           (int)((FSlotArguments *)pFVar48)->_padding_ + 1;
      UNLOCK();
    }
    *puVar39 = &
               ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar41 = FDelegateHandle::GenerateNewID();
    puVar39[2] = uVar41;
    *puVar39 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSThemeColorBlocksBar___00__A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar39[3] = pSVar8;
    puVar39[4] = pFVar48;
    if (pFVar48 != (FArguments *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)&((FSlotArguments *)pFVar48)->_padding_ + 4);
      *(int *)puVar2 = *(int *)puVar2 + 1;
      UNLOCK();
    }
    bVar15 = true;
    bVar14 = true;
    bVar13 = true;
    puVar39[5] = local_21f0;
    puVar39[6] = pTStack_21e8;
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar48);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar48);
  }
  if (bVar15) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1d68.SharedReferenceCount.ReferenceController);
  }
  if (local_1e78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e78.Accessor,&local_1e78);
  }
  pFVar42 = SImage::FArguments::FArguments(&local_1368);
  pIVar31 = FAppStyle::Get();
  pcVar12 = *(code **)((longlong)*pIVar31 + 0x50);
  pFVar32 = ::FName::FName(&local_1c80,"Icons.Plus");
  local_1fa0.Value = (FSlateBrush *)(*pcVar12)(pIVar31,*pFVar32);
  local_1fa0.bIsSet = true;
  local_1fa0.Getter._16_8_ = 0;
  local_1fa0.Getter._0_8_ = 0;
  local_1fa0.Getter._8_8_ = 0;
  pFVar42 = SImage::FArguments::Image(pFVar42,&local_1fa0);
  FLLMScope::FLLMScope(&local_221c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2018 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2010,&local_2018,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1cd0,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x336,local_res20);
  FMemScope::~FMemScope(&local_2010);
  FLLMScope::~FLLMScope(&local_221c);
  pTVar43 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1cd0,&local_1db8,pFVar42);
  pTVar7 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_2060 = pTVar43->Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_Content).Widget.Object = (SWidget *)local_2060;
  (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar7;
  pTStack_2058 = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FLLMScope::FLLMScope(&local_2218,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2008 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2000,&local_2008,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1ce8,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x32e,&local_2248);
  FMemScope::~FMemScope(&local_2000);
  FLLMScope::~FLLMScope(&local_2218);
  pTVar44 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1ce8,&local_1dc8,pFVar36);
  pFVar36 = local_res8;
  pTVar9 = (pTVar44->SharedReferenceCount).ReferenceController;
  local_21a0 = pTVar44->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2198.ReferenceController = pTVar9;
  if ((SButton **)&local_res8->_padding_ != &local_21a0) {
    local_res8->_padding_ = (longlong)local_21a0;
    local_21a0 = (SButton *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_res8->_padding_,&local_2198);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2198.ReferenceController);
  local_res18 = SOverlay::FArguments::operator+(local_res10,(FSlotArguments *)pFVar36);
  local_res10 = (FArguments *)SOverlay::Slot((FSlotArguments *)local_1c18,0);
  pFVar36 = SButton::FArguments::FArguments(&local_ac8);
  pIVar31 = FAppStyle::Get();
  pFVar32 = ::FName::FName(&local_1c70,"ColorPicker.DeleteButton");
  pFVar37 = ISlateStyle::GetWidgetStyle<FButtonStyle>
                      (pIVar31,*pFVar32,(char *)0x0,(FButtonStyle *)0x0);
  uVar18 = _UNK_1509253f8;
  uVar22 = ___xmm_40800000408000004080000040800000;
  pFVar36->_ButtonStyle = pFVar37;
  uVar19 = _UNK_1509253f8;
  uVar21 = ___xmm_40800000408000004080000040800000;
  local_1e58.bIsSet = true;
  local_1e58.Getter._16_8_ = 0;
  ___xmm_40800000408000004080000040800000 = (float)uVar22;
  _UNK_1509253f4 = SUB84(uVar22,4);
  local_1e58.Value.Left = ___xmm_40800000408000004080000040800000;
  local_1e58.Value.Top = _UNK_1509253f4;
  _UNK_1509253f8 = (float)uVar18;
  _UNK_1509253fc = SUB84(uVar18,4);
  local_1e58.Value.Right = _UNK_1509253f8;
  local_1e58.Value.Bottom = _UNK_1509253fc;
  local_1e58.Getter._0_8_ = 0;
  local_1e58.Getter._8_8_ = 0;
  ___xmm_40800000408000004080000040800000 = uVar21;
  _UNK_1509253f8 = uVar19;
  pFVar36 = SButton::FArguments::ContentPadding(pFVar36,&local_1e58);
  uStack_2230 = uStack_2230 & 0xffffffff00000000;
  local_2238 = GetDeleteButtonVisibility;
  local_1c48 = GetDeleteButtonVisibility;
  uStack_1c40 = uStack_2230;
  pFVar36 = TSlateBaseNamedArgs<SButton>::Visibility<SThemeColorBlocksBar>
                      ((TSlateBaseNamedArgs<SButton> *)pFVar36,this,(pmf_7590b47b *)&local_1c48);
  pFVar38 = FText::AsLocalizable_Advanced_LocText
                      (&local_1dd8,L"SColorThemes",L"DeleteFromThemeTooltip",
                       L"Delete this color from the current color theme");
  FText::FText(&local_1e28.Value,pFVar38);
  local_1e28.bIsSet = true;
  local_1e28.Getter._16_8_ = 0;
  local_1e28.Getter._0_8_ = 0;
  local_1e28.Getter._8_8_ = 0;
  pFVar36 = TSlateBaseNamedArgs<SButton>::ToolTipText
                      ((TSlateBaseNamedArgs<SButton> *)pFVar36,&local_1e28);
  local_res8 = pFVar36;
  pFVar42 = SImage::FArguments::FArguments(&local_1610);
  pIVar31 = FAppStyle::Get();
  pcVar12 = *(code **)((longlong)*pIVar31 + 0x50);
  pFVar32 = ::FName::FName(&local_1c78,"Icons.Delete");
  local_1f78.Value = (FSlateBrush *)(*pcVar12)(pIVar31,*pFVar32);
  local_1f78.bIsSet = true;
  local_1f78.Getter._16_8_ = 0;
  local_1f78.Getter._0_8_ = 0;
  local_1f78.Getter._8_8_ = 0;
  pFVar42 = SImage::FArguments::Image(pFVar42,&local_1f78);
  FLLMScope::FLLMScope(&local_2214,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1ff8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1ff0,&local_1ff8,true);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_1c68,"SImage",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x343,&local_2247);
  FMemScope::~FMemScope(&local_1ff0);
  FLLMScope::~FLLMScope(&local_2214);
  pTVar43 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1c68,&local_1de8,pFVar42);
  pTVar10 = (pTVar43->SharedReferenceCount).ReferenceController;
  local_2050 = pTVar43->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar11 = (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar36->_Content).Widget.Object = (SWidget *)local_2050;
  (pFVar36->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar10;
  pTStack_2048 = pTVar10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  FLLMScope::FLLMScope(&local_2210,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1fe8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1fe0,&local_1fe8,true);
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>
            (&local_1d10,"SButton",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x33c,&local_2246);
  FMemScope::~FMemScope(&local_1fe0);
  FLLMScope::~FLLMScope(&local_2210);
  pTVar44 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d10,&local_1df8,local_res8);
  pTVar11 = (pTVar44->SharedReferenceCount).ReferenceController;
  local_1fb0.Object = (SWidget *)pTVar44->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1fb0.SharedReferenceCount.ReferenceController = pTVar11;
  pFVar45 = TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                      ((FSlotArguments *)local_res10,&local_1fb0);
  pFVar46 = SOverlay::FArguments::operator+(local_res18,pFVar45);
  FLLMScope::FLLMScope(&local_220c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1fd8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1fd0,&local_1fd8,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1d28,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
             ,0x32b,local_2245);
  FMemScope::~FMemScope(&local_1fd0);
  FLLMScope::~FLLMScope(&local_220c);
  pTVar47 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1d28,&local_1da8,pFVar46);
  local_20e8.ReferenceController = (pTVar47->SharedReferenceCount).ReferenceController;
  local_20f0 = pTVar47->Object;
  if (local_20e8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20e8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20e8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->AddDeleteOverlay != (TSharedPtr<SOverlay,1> *)&local_20f0) {
    (this->AddDeleteOverlay).Object = local_20f0;
    local_20f0 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->AddDeleteOverlay).SharedReferenceCount,&local_20e8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20e8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1da8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d28._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1df8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d10._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1de8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c68._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1610._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1610._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1610._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1610._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1610);
  if (local_1dd8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1dd8.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_ac8);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1c18 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1c18._16_8_);
  if ((undefined8 *)local_1c18._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1c18._0_8_)(local_1c18._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1dc8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ce8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1db8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cd0._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1368._OnMouseButtonDown);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1368._DesiredSizeOverride.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1368._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_1368._Image.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1368);
  if (local_1fc0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1fc0.TextData.Reference + 0x10))();
  }
  SButton::FArguments::~FArguments(&local_588);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1bb8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1bb8._16_8_);
  if ((undefined8 *)local_1bb8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1bb8._0_8_)(local_1bb8._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_1818._Slots.AllocatorInstance.Data,local_1818._Slots.ArrayNum);
  if ((FSlotArguments *)local_1818._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1818._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1818);
  Refresh(this);
  return;
}

// GetAddButtonVisibility @ 143032e00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SThemeColorBlocksBar::GetAddButtonVisibility(SThemeColorBlocksBar *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Visible.Value.Value;
  if (this->bShowDeleteButton != false) {
    EVar1.Value.Value = EVisibility::Hidden.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// GetChildren @ 1430334f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FChildren * __thiscall SThemeColorBlocksBar::GetChildren(SThemeColorBlocksBar *this)

{
  return (FChildren *)&this->Children;
}

// GetDeleteButtonVisibility @ 1430342a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SThemeColorBlocksBar::GetDeleteButtonVisibility(SThemeColorBlocksBar *this)

{
  EVisibility EVar1;
  uchar *in_RDX;
  
  EVar1.Value.Value = EVisibility::Hidden.Value.Value;
  if (this->bShowDeleteButton != false) {
    EVar1.Value.Value = EVisibility::Visible.Value.Value;
  }
  *in_RDX = (uchar)EVar1.Value.Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// HideDeleteButton @ 143037590

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::HideDeleteButton(SThemeColorBlocksBar *this)

{
  this->bShowDeleteButton = false;
  return;
}

// IsRecentsThemeActive @ 143037ba0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall SThemeColorBlocksBar::IsRecentsThemeActive(SThemeColorBlocksBar *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  bool bVar4;
  undefined1 uVar5;
  atomic<int> aVar6;
  FWeakReferencer<1> FVar7;
  FColorTheme *pFVar8;
  FColorTheme *pFVar9;
  
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  FVar3.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar8 = (FColorTheme *)0x0;
  FVar7.ReferenceController = FVar3.ReferenceController;
  pFVar9 = pFVar8;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar2 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar7.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
      pFVar9 = pFVar8;
      if (aVar2 == (atomic<int>)0x0) break;
      LOCK();
      aVar6 = (FVar3.ReferenceController)->SharedReferenceCount;
      bVar4 = aVar2 == aVar6;
      if (bVar4) {
        (FVar3.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar6 = aVar2;
      }
      UNLOCK();
      FVar7.ReferenceController = FVar3.ReferenceController;
      pFVar9 = SColorThemesViewer::CurrentlySelectedThemePtr.Object;
      aVar2 = aVar6;
    } while (!bVar4);
  }
  bVar4 = SColorThemesViewer::Recents.Object == pFVar9;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  return bVar4;
}

// OnAddButtonClicked @ 143039160

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SThemeColorBlocksBar::OnAddButtonClicked(SThemeColorBlocksBar *this,FReply *__return_storage_ptr__)

{
  char cVar1;
  longlong *plVar2;
  undefined1 local_38 [16];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetActiveColor,
             &local_28);
  if ((*(int *)&(this->OnGetActiveColor).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnGetActiveColor).field_0x8, plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnGetActiveColor,
                 &local_28);
      if (*(int *)&(this->OnGetActiveColor).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnGetActiveColor).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      local_28.DestructionSentinel._0_8_ = local_38._0_8_;
      local_28.DestructionSentinel.Accessor = (FMRSWRecursiveAccessDetector *)local_38._8_8_;
      AddNewColorBlock(this,(FLinearColor *)&local_28,0,false);
      goto LAB_143039206;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_143039206:
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnArrangeChildren @ 143039230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SThemeColorBlocksBar::OnArrangeChildren
          (SThemeColorBlocksBar *this,FGeometry *param_1,FArrangedChildren *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  SColorThemesViewer *pSVar2;
  SOverlay *pSVar3;
  SBorder *pSVar4;
  FScriptContainerElement *pFVar5;
  SWidget *pSVar6;
  code *pcVar7;
  atomic<int> aVar8;
  double dVar9;
  FWeakReferencer<1> FVar10;
  bool bVar11;
  bool bVar12;
  atomic<int> aVar13;
  uint uVar14;
  uint uVar15;
  FWeakReferencer<1> FVar16;
  FColorTheme *pFVar17;
  int iVar18;
  FColorTheme *pFVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  undefined1 auStackY_298 [32];
  FSlateLayoutTransform local_248;
  FSlateLayoutTransform local_23c;
  FSlateLayoutTransform local_230;
  FSlateLayoutTransform local_224;
  FDeprecateVector2DParameter local_218;
  FDeprecateVector2DParameter local_210;
  FDeprecateVector2DParameter local_208;
  FDeprecateVector2DParameter local_200;
  TSharedRef<SWidget,1> local_1f8;
  TSharedRef<SWidget,1> local_1e8;
  TSharedRef<SWidget,1> local_1d8;
  TSharedRef<SWidget,1> local_1c8;
  FArrangedWidget local_1b8;
  FArrangedWidget local_168;
  FArrangedWidget local_118;
  FArrangedWidget local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar12 = (this->PlaceholderIndex).bIsSet;
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar1 = (this->ThemesViewer).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->ThemesViewer).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SColorThemesViewer *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_218 = (FDeprecateVector2DParameter)0x41c0000042480000;
  local_248._0_8_ = 0x3f800000;
  local_248.Translation.field0_0x0._s_0.Y = 0.0;
  local_1f8.Object = (SWidget *)pSVar2;
  local_1f8.SharedReferenceCount.ReferenceController = pTVar1;
  FGeometry::MakeChild(param_1,&local_1b8,&local_1f8,&local_218,&local_248);
  FArrangedChildren::AddWidget(param_2,&local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar21 = 2;
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar10.ReferenceController =
       SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController;
  pFVar19 = (FColorTheme *)0x0;
  FVar16.ReferenceController = FVar10.ReferenceController;
  pFVar17 = pFVar19;
  if (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    aVar8 = (SColorThemesViewer::CurrentlySelectedThemePtr.WeakReferenceCount.ReferenceController)->
            SharedReferenceCount;
    do {
      FVar16.ReferenceController = (TReferenceControllerBase<1> *)pFVar19;
      pFVar17 = (FColorTheme *)0x0;
      if (aVar8 == (atomic<int>)0x0) break;
      LOCK();
      aVar13 = (FVar10.ReferenceController)->SharedReferenceCount;
      bVar11 = aVar8 == aVar13;
      if (bVar11) {
        (FVar10.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar13 = aVar8;
      }
      UNLOCK();
      FVar16.ReferenceController = FVar10.ReferenceController;
      pFVar17 = SColorThemesViewer::CurrentlySelectedThemePtr.Object;
      aVar8 = aVar13;
    } while (!bVar11);
  }
  bVar11 = SColorThemesViewer::Recents.Object != pFVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar16.ReferenceController);
  if (bVar11) {
    if (((this->AddDeleteOverlay).Object == (SOverlay *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar1 = (this->AddDeleteOverlay).SharedReferenceCount.ReferenceController;
    pSVar3 = (this->AddDeleteOverlay).Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pSVar3 == (SOverlay *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_210 = (FDeprecateVector2DParameter)0x41c0000041c00000;
    local_23c.Scale = 1.0;
    local_23c.Translation.field0_0x0 = (TVector2<float>_u_0)0x42500000;
    local_1e8.Object = (SWidget *)pSVar3;
    local_1e8.SharedReferenceCount.ReferenceController = pTVar1;
    FGeometry::MakeChild(param_1,&local_168,&local_1e8,&local_210,&local_23c);
    FArrangedChildren::AddWidget(param_2,&local_168);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.Widget.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    iVar21 = 3;
  }
  dVar9 = __real_403a000000000000;
  iVar18 = (this->ColorBlocks).ArrayNum;
  iVar20 = iVar18 + 1;
  if (bVar12 == false) {
    iVar20 = iVar18;
  }
  iVar20 = iVar20 + iVar21;
  pFVar17 = pFVar19;
  do {
    if (iVar20 <= iVar21) {
      return;
    }
    uVar15 = iVar21 >> 0x1f & 0xf;
    uVar14 = iVar21 + uVar15;
    bVar12 = (this->PlaceholderIndex).bIsSet;
    fVar22 = (float)((double)(int)((uVar14 & 0xf) - uVar15) * dVar9);
    fVar23 = (float)((double)((int)uVar14 >> 4) * dVar9);
    if (((bVar12 == false) || (bVar12 != true)) || (iVar21 != (this->PlaceholderIndex).TypedValue))
    {
      iVar18 = (int)pFVar19;
      if (iVar18 < (this->ColorBlocks).ArrayNum) {
        if ((iVar18 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->ColorBlocks).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar5 + (longlong)&(pFVar17->Name).Data) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x408,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar6 = *(SWidget **)(pFVar5 + (longlong)&(pFVar17->Name).Data);
        pTVar1 = *(TReferenceControllerBase<1> **)(pFVar5 + 8 + (longlong)&(pFVar17->Name).Data);
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pSVar6 == (SWidget *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x25d,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_200 = (FDeprecateVector2DParameter)0x41c0000041c00000;
        local_224.Scale = 1.0;
        local_224.Translation.field0_0x0._s_0.X = fVar22;
        local_224.Translation.field0_0x0._s_0.Y = fVar23;
        local_1c8.Object = pSVar6;
        local_1c8.SharedReferenceCount.ReferenceController = pTVar1;
        FGeometry::MakeChild(param_1,&local_c8,&local_1c8,&local_200,&local_224);
        FArrangedChildren::AddWidget(param_2,&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.Widget.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        pFVar19 = (FColorTheme *)(ulonglong)(iVar18 + 1);
        pFVar17 = (FColorTheme *)&pFVar17->Colors;
      }
    }
    else {
      if (((this->DragShadow).Object == (SBorder *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar1 = (this->DragShadow).SharedReferenceCount.ReferenceController;
      pSVar4 = (this->DragShadow).Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar4 == (SBorder *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_208 = (FDeprecateVector2DParameter)0x41c0000041c00000;
      local_230.Scale = 1.0;
      local_230.Translation.field0_0x0._s_0.X = fVar22;
      local_230.Translation.field0_0x0._s_0.Y = fVar23;
      local_1d8.Object = (SWidget *)pSVar4;
      local_1d8.SharedReferenceCount.ReferenceController = pTVar1;
      FGeometry::MakeChild(param_1,&local_118,&local_1d8,&local_208,&local_230);
      FArrangedChildren::AddWidget(param_2,&local_118);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    }
    iVar21 = iVar21 + 1;
  } while( true );
}

// OnDragEnter @ 14303a370

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SThemeColorBlocksBar::OnDragEnter
          (SThemeColorBlocksBar *this,FGeometry *param_1,FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FColorDragDrop::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar3 != '\0') {
      pTVar6 = (param_2->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_2->Content).Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 != (FDragDropOperation *)0x0) {
        if ((pFVar1->CursorDecoratorWindow).Object == (SWindow *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        SWindow::SetOpacity((pFVar1->CursorDecoratorWindow).Object,__real_3f800000);
      }
      goto LAB_14303a404;
    }
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
LAB_14303a404:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// OnDragLeave @ 14303a4c0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SThemeColorBlocksBar::OnDragLeave(SThemeColorBlocksBar *this,FDragDropEvent *param_1)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FString *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  pFVar1 = (param_1->Content).Object;
  if (pFVar1 != (FDragDropOperation *)0x0) {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    pFVar5 = FColorDragDrop::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1,pFVar5);
    if (cVar3 != '\0') {
      pTVar6 = (param_1->Content).SharedReferenceCount.ReferenceController;
      pFVar1 = (param_1->Content).Object;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 != (FDragDropOperation *)0x0) {
        if ((pFVar1->CursorDecoratorWindow).Object == (SWindow *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        SWindow::SetOpacity((pFVar1->CursorDecoratorWindow).Object,__real_3ecccccd);
        if ((this->PlaceholderIndex).bIsSet != false) {
          (this->PlaceholderIndex).bIsSet = false;
        }
      }
      goto LAB_14303a570;
    }
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
LAB_14303a570:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// OnDragOver @ 14303a5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SThemeColorBlocksBar::OnDragOver
          (SThemeColorBlocksBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  FColorDragDrop *this_00;
  char cVar3;
  bool bVar4;
  int iVar5;
  TTransform2<float> *pTVar6;
  FReply *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  int iVar9;
  int iVar10;
  float local_68;
  float fStack_64;
  undefined4 local_60;
  int local_5c;
  TTransform2<float> local_58;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_14303a76b:
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FColorDragDrop::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 == '\0') goto LAB_14303a76b;
    pTVar8 = (param_2->Content).SharedReferenceCount.ReferenceController;
    this_00 = (FColorDragDrop *)(param_2->Content).Object;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 != (FColorDragDrop *)0x0) {
      pTVar6 = Inverse<TTransform2<float>_>(&local_58,&param_1->AccumulatedRenderTransform);
      fStack_64 = (float)((ulonglong)param_2->_padding_ >> 0x20);
      local_68 = (float)param_2->_padding_;
      iVar10 = (int)((double)(local_68 * (pTVar6->M).M[0][1] + fStack_64 * (pTVar6->M).M[1][1] +
                             (pTVar6->Trans).field0_0x0._s_0.Y) * ___real_3fa3b13b13b13b14);
      iVar9 = (int)((double)(fStack_64 * (pTVar6->M).M[1][0] + local_68 * (pTVar6->M).M[0][0] +
                            (pTVar6->Trans).field0_0x0._s_0.X) * ___real_3fa3b13b13b13b14);
      if (iVar10 == 0) {
        if (iVar9 < 2) {
          FColorDragDrop::MarkForAdd(this_00);
          if ((TOptional<int> *)&local_60 != &this->PlaceholderIndex) {
            (this->PlaceholderIndex).TypedValue = 3;
            bVar4 = true;
            (this->PlaceholderIndex).bIsSet = true;
            goto LAB_14303a76f;
          }
        }
        else {
          if (iVar9 != 2) goto LAB_14303a6f0;
          FColorDragDrop::MarkForDelete(this_00);
          if ((this->PlaceholderIndex).bIsSet != false) {
            (this->PlaceholderIndex).bIsSet = false;
            bVar4 = true;
            goto LAB_14303a76f;
          }
        }
      }
      else {
LAB_14303a6f0:
        if (this_00->_padding_ == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            pFVar7 = (FReply *)(*pcVar2)();
            return pFVar7;
          }
        }
        SWindow::SetOpacity((SWindow *)this_00->_padding_,__real_3f800000);
        iVar5 = (this->ColorBlocks).ArrayNum + 3;
        iVar9 = iVar9 + iVar10 * 0x10;
        if (iVar9 < iVar5) {
          iVar5 = iVar9;
        }
        iVar9 = 3;
        if (3 < iVar5) {
          iVar9 = iVar5;
        }
        if ((TOptional<int> *)&local_5c != &this->PlaceholderIndex) {
          (this->PlaceholderIndex).TypedValue = iVar9;
          (this->PlaceholderIndex).bIsSet = true;
        }
      }
      bVar4 = true;
      goto LAB_14303a76f;
    }
  }
  bVar4 = false;
LAB_14303a76f:
  FReply::FReply(__return_storage_ptr__,bVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return __return_storage_ptr__;
}

// OnDrop @ 14303a970

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SThemeColorBlocksBar::OnDrop
          (SThemeColorBlocksBar *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FDragDropEvent *param_2)

{
  FDragDropOperation *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FReply *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLinearColor_u_0 local_18;
  
  pFVar1 = (param_2->Content).Object;
  if (pFVar1 == (FDragDropOperation *)0x0) {
LAB_14303aa96:
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x50);
    FColorDragDrop::GetTypeId();
    cVar3 = (*pcVar2)(pFVar1);
    if (cVar3 == '\0') goto LAB_14303aa96;
    pTVar6 = (param_2->Content).SharedReferenceCount.ReferenceController;
    pFVar1 = (param_2->Content).Object;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar1 != (FDragDropOperation *)0x0) {
      if ((this->PlaceholderIndex).bIsSet != false) {
        if (2 < (this->PlaceholderIndex).TypedValue) {
          if ((this->PlaceholderIndex).bIsSet == false) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              );
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              pFVar5 = (FReply *)(*pcVar2)();
              return pFVar5;
            }
          }
          local_18._0_8_ = pFVar1[1]._padding_;
          local_18._8_8_ = pFVar1[1]._padding_;
          AddNewColorBlock(this,(FLinearColor *)&local_18._s_0,
                           (this->PlaceholderIndex).TypedValue + -3,true);
        }
        if ((this->PlaceholderIndex).bIsSet != false) {
          (this->PlaceholderIndex).bIsSet = false;
        }
      }
      if ((pFVar1->CursorDecoratorWindow).Object == (SWindow *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FReply *)(*pcVar2)();
          return pFVar5;
        }
      }
      SWindow::SetOpacity((pFVar1->CursorDecoratorWindow).Object,__real_3ecccccd);
      bVar4 = true;
      goto LAB_14303aa9a;
    }
  }
  bVar4 = false;
LAB_14303aa9a:
  FReply::FReply(__return_storage_ptr__,bVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// OnThemeChanged @ 14303c540

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::OnThemeChanged(SThemeColorBlocksBar *this)

{
  TSharedPtr<FColorTheme,1> *pTVar1;
  ulong64 uVar2;
  FColorTheme *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulong64 *puVar7;
  TSharedPtr<FColorTheme,1> *pTVar8;
  FDelegateHandle FVar9;
  uint uVar10;
  ForAnyElementType *this_00;
  longlong lVar11;
  TSharedPtr<FColorTheme,1> local_68;
  FDestructionSentinel local_58;
  
  pTVar1 = &this->ColorTheme;
  if ((pTVar1->Object == (FColorTheme *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = (this->RefreshCallbackHandle).ID;
  pFVar3 = pTVar1->Object;
  if (uVar2 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->RefreshEvent,
               (FWriteAccessScope *)&local_58);
    uVar10 = 0;
    if (0 < *(int *)&(pFVar3->RefreshEvent).field_0x10) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)&(pFVar3->RefreshEvent).field_0x10) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (ForAnyElementType *)(*(longlong *)&(pFVar3->RefreshEvent).field_0x8 + lVar11);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar7 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar7 == uVar2)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pFVar3->RefreshEvent,
                     false);
          break;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar10 < *(int *)&(pFVar3->RefreshEvent).field_0x10);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar8 = SColorThemesViewer::GetCurrentColorTheme((this->ThemesViewer).Object,&local_68);
  if (pTVar1 != pTVar8) {
    pTVar1->Object = pTVar8->Object;
    pTVar8->Object = (FColorTheme *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ColorTheme).SharedReferenceCount,&pTVar8->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  if ((pTVar1->Object == (FColorTheme *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&pTVar1->Object->RefreshEvent,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
  (this->RefreshCallbackHandle).ID = *FVar9.ID;
  Refresh(this);
  return;
}

// Refresh @ 14303c850

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::Refresh(SThemeColorBlocksBar *this)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TSharedPtr<SThemeColorBlock,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  SColorThemesViewer *pSVar6;
  SOverlay *pSVar7;
  undefined8 *puVar8;
  SThemeColorBlocksBar *pSVar9;
  SWidget *pSVar10;
  code *pcVar11;
  FColorTheme *pFVar12;
  FSharedReferencer<1> FVar13;
  SThemeColorBlock *this_00;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  FArguments *pFVar21;
  TSharedRef<SWidget,1> *pTVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  TSharedPtr<FColorTheme,1> *pTVar25;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  uint local_res18;
  longlong local_res20;
  SWidget *local_558;
  TReferenceControllerBase<1> *local_550;
  SThemeColorBlock *local_548;
  TReferenceControllerBase<1> *local_540;
  longlong local_538;
  TSharedPtr<FColorTheme,1> *local_530;
  TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs> local_528;
  TArray<TSharedPtr<FColorInfo,1>,TSizedDefaultAllocator<32>_> *local_510;
  SThemeColorBlocksBar *local_508;
  FSharedReferencer<1> local_500;
  bool local_4f8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4f0;
  FLinearColor *local_4d8;
  FSharedReferencer<1> local_4d0;
  bool local_4c8;
  TDelegateBase<FNotThreadSafeDelegateMode> local_4c0;
  FColorInfo *local_4a8;
  FSharedReferencer<1> local_4a0;
  bool local_498;
  TDelegateBase<FNotThreadSafeDelegateMode> local_490;
  bool local_478;
  bool local_477;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_470;
  bool local_458;
  bool local_457;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_450;
  undefined1 local_438;
  undefined1 local_437;
  TDelegateBase<FNotThreadSafeDelegateMode> local_430;
  FName local_418;
  FMemScope local_410;
  TSharedRef<SWidget,1> local_408;
  TSharedRef<SWidget,1> local_3f8;
  TSharedRef<SWidget,1> local_3e8;
  code *local_3d8;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  code *local_3c8;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  TSharedPtr<SWidget,1> local_3b8;
  code *local_3a8;
  longlong lStack_3a0;
  code *local_398;
  longlong lStack_390;
  TSharedRef<SWidget,1> local_388;
  FArguments local_378;
  
  TSlotlessChildren<SWidget>::Empty(&this->Children,0);
  if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar5 = (this->ThemesViewer).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->ThemesViewer).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar6 == (SColorThemesViewer *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_408.Object = (SWidget *)pSVar6;
  local_408.SharedReferenceCount.ReferenceController = pTVar5;
  TSlotlessChildren<SWidget>::Add(&this->Children,&local_408);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_408.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (((this->AddDeleteOverlay).Object == (SOverlay *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x408,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar5 = (this->AddDeleteOverlay).SharedReferenceCount.ReferenceController;
  pSVar7 = (this->AddDeleteOverlay).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar7 == (SOverlay *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3f8.Object = (SWidget *)pSVar7;
  local_3f8.SharedReferenceCount.ReferenceController = pTVar5;
  TSlotlessChildren<SWidget>::Add(&this->Children,&local_3f8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3f8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  DestructItems<TSharedPtr<SThemeColorBlock,1>,int>
            ((TSharedPtr<SThemeColorBlock,1> *)(this->ColorBlocks).AllocatorInstance.Data,
             (this->ColorBlocks).ArrayNum);
  piVar2 = &(this->ColorBlocks).ArrayMax;
  (this->ColorBlocks).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->ColorBlocks).AllocatorInstance,0,piVar2);
  }
  pTVar25 = &this->ColorTheme;
  local_530 = pTVar25;
  if (pTVar25->Object == (FColorTheme *)0x0) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("ColorTheme.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                        ,0x2e9,L"");
    if (bVar15) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pTVar25->Object == (FColorTheme *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  local_510 = &pTVar25->Object->Colors;
  local_res18 = 0;
  if (0 < (pTVar25->Object->Colors).ArrayNum) {
    pTVar3 = &this->ColorBlocks;
    local_538 = 0;
    local_res20 = 0;
    do {
      pTVar14 = local_510;
      uVar20 = local_res18;
      if (((this->ThemesViewer).Object == (SColorThemesViewer *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar13.ReferenceController =
           SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController;
      pFVar12 = SColorThemesViewer::Recents.Object;
      if (SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             = (atomic<int>)
               ((int)(SColorThemesViewer::Recents.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar15 = pTVar25->Object != pFVar12;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
      pFVar21 = SThemeColorBlock::FArguments::FArguments(&local_378);
      uVar23 = 0;
      if ((int)uVar20 < pTVar14->ArrayNum) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar24 = (pTVar14->AllocatorInstance).Data + local_res20;
      if ((*(longlong *)pFVar24 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar8 = *(undefined8 **)pFVar24;
      local_4d8 = (FLinearColor *)*puVar8;
      local_4d0.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
      if (local_4d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_4d0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_4d0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_4c0._16_8_ = 0;
      local_4c8 = true;
      local_4c0._0_8_ = 0;
      local_4c0._8_8_ = 0;
      if (&pFVar21->_Color != (TAttribute<TSharedPtr<FLinearColor,1>_> *)&local_4d8) {
        (pFVar21->_Color).Value.Object = local_4d8;
        local_4d8 = (FLinearColor *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar21->_Color).Value.SharedReferenceCount,&local_4d0);
      }
      (pFVar21->_Color).bIsSet = local_4c8;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Color).Getter,&local_4c0);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_4c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4d0.ReferenceController);
      pTVar14 = local_510;
      uVar23 = 0;
      if ((int)uVar20 < local_510->ArrayNum) {
        uVar23 = ~uVar20 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar24 = (pTVar14->AllocatorInstance).Data;
      local_4a8 = *(FColorInfo **)(pFVar24 + local_res20);
      local_4a0.ReferenceController = *(TReferenceControllerBase<1> **)(pFVar24 + local_res20 + 8);
      if (local_4a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_4a0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_4a0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_490._16_8_ = 0;
      local_498 = true;
      local_490._0_8_ = 0;
      local_490._8_8_ = 0;
      if (&pFVar21->_ColorInfo != (TAttribute<TSharedPtr<FColorInfo,1>_> *)&local_4a8) {
        (pFVar21->_ColorInfo).Value.Object = local_4a8;
        local_4a8 = (FColorInfo *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar21->_ColorInfo).Value.SharedReferenceCount,&local_4a0);
      }
      (pFVar21->_ColorInfo).bIsSet = local_498;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_ColorInfo).Getter,
                 &local_490);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_490);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a0.ReferenceController);
      TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::operator=
                (&pFVar21->_OnSelectColor,&this->OnSelectColor);
      pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_3e8);
      pTVar5 = (pTVar22->SharedReferenceCount).ReferenceController;
      pSVar9 = (SThemeColorBlocksBar *)pTVar22->Object;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3e8.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3e8.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_4f0._16_8_ = 0;
      local_4f8 = true;
      local_4f0._0_8_ = 0;
      local_4f0._8_8_ = 0;
      local_508 = pSVar9;
      local_500.ReferenceController = pTVar5;
      if (&pFVar21->_Parent != (TAttribute<TSharedPtr<SThemeColorBlocksBar,1>_> *)&local_508) {
        (pFVar21->_Parent).Value.Object = pSVar9;
        local_508 = (SThemeColorBlocksBar *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar21->_Parent).Value.SharedReferenceCount,&local_500);
      }
      (pFVar21->_Parent).bIsSet = local_4f8;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_Parent).Getter,&local_4f0)
      ;
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_4f0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_500.ReferenceController);
      uStack_3d0 = 0;
      local_3d8 = ShowDeleteButton;
      lStack_3a0 = (ulonglong)uStack_3cc << 0x20;
      local_3a8 = ShowDeleteButton;
      TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      BindSP<SThemeColorBlocksBar>
                ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar21->_ShowTrashCallback,this,(pmf_1d766ebc *)&local_3a8);
      uStack_3c0 = 0;
      local_3c8 = HideDeleteButton;
      lStack_390 = (ulonglong)uStack_3bc << 0x20;
      local_398 = HideDeleteButton;
      TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      BindSP<SThemeColorBlocksBar>
                ((TDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pFVar21->_HideTrashCallback,this,(pmf_1d766ebc *)&local_398);
      local_478 = (this->bUseSRGB).Value;
      local_477 = (this->bUseSRGB).bIsSet;
      local_470._0_8_ = 0;
      local_470._8_8_ = 0;
      local_470._16_4_ = 0;
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&local_470,&(this->bUseSRGB).Getter);
      (pFVar21->_UseSRGB).Value = local_478;
      (pFVar21->_UseSRGB).bIsSet = local_477;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_UseSRGB).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_470);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_470);
      local_458 = (this->bUseAlpha).Value;
      local_457 = (this->bUseAlpha).bIsSet;
      local_450._0_8_ = 0;
      local_450._8_8_ = 0;
      local_450._16_4_ = 0;
      TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                (&local_450,&(this->bUseAlpha).Getter);
      (pFVar21->_UseAlpha).Value = local_458;
      (pFVar21->_UseAlpha).bIsSet = local_457;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_UseAlpha).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&local_450);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_450);
      local_437 = 1;
      local_430._16_8_ = 0;
      local_430._0_8_ = 0;
      local_430._8_8_ = 0;
      (pFVar21->_SupportsDrag).Value = bVar15;
      (pFVar21->_SupportsDrag).bIsSet = true;
      local_438 = bVar15;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar21->_SupportsDrag).Getter,
                 &local_430);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                (&local_430);
      FLLMScope::FLLMScope
                (local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_418 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_410,&local_418,true);
      TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SThemeColorBlock,RequiredArgs::T0RequiredArgs>
                (&local_528,"SThemeColorBlock",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Colors\\SColorThemes.cpp"
                 ,0x2f1,local_res8);
      FMemScope::~FMemScope(&local_410);
      FLLMScope::~FLLMScope(local_res10);
      this_00 = local_528._Widget.Object;
      if ((local_528._Widget.Object == (SThemeColorBlock *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar21);
      SThemeColorBlock::Construct(this_00,pFVar21);
      if ((this_00 == (SThemeColorBlock *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((this_00->_padding_ & 0x10) == 0) {
        cVar17 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
        bVar18 = 0;
        if (cVar17 != '\0') goto LAB_14303d075;
      }
      else {
LAB_14303d075:
        bVar18 = 0x20;
      }
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar18;
      if ((this_00 == (SThemeColorBlock *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((this_00 == (SThemeColorBlock *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FVar13.ReferenceController = local_528._Widget.SharedReferenceCount.ReferenceController;
      local_528._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_528._Widget.Object = (SThemeColorBlock *)0x0;
      if ((this_00 == (SThemeColorBlock *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_548 = this_00;
      local_540 = FVar13.ReferenceController;
      if (FVar13.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar13.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar13.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar24 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_548) &&
          ((FScriptContainerElement *)&local_548 <
           pFVar24 + (longlong)(this->ColorBlocks).ArrayMax * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->ColorBlocks).ArrayNum;
      if (iVar19 == (this->ColorBlocks).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar3->AllocatorInstance,&(this->ColorBlocks).ArrayMax);
      }
      (this->ColorBlocks).ArrayNum = iVar19 + 1;
      pFVar24 = (pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
      *(SThemeColorBlock **)pFVar24 = local_548;
      *(TReferenceControllerBase<1> **)(pFVar24 + 8) = local_540;
      local_540 = (TReferenceControllerBase<1> *)0x0;
      local_548 = (SThemeColorBlock *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar13.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_528._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._SupportsDrag.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._UseAlpha.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._UseSRGB.Getter);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._HideTrashCallback);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._ShowTrashCallback);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._Parent.Getter);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378._Parent.Value.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._OnSelectColor);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._ColorInfo.Getter);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378._ColorInfo.Value.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_378._Color.Getter);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_378._Color.Value.SharedReferenceCount.ReferenceController);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_378);
      iVar19 = (this->ColorBlocks).ArrayNum;
      uVar23 = iVar19 - 1;
      uVar20 = 0;
      if ((int)uVar23 < iVar19) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->ColorBlocks).ArrayNum;
      pFVar24 = (pTVar3->AllocatorInstance).Data;
      if ((*(longlong *)(pFVar24 + (longlong)iVar19 * 0x10 + -0x10) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pSVar10 = *(SWidget **)(pFVar24 + (longlong)iVar19 * 0x10 + -0x10);
      pTVar5 = *(TReferenceControllerBase<1> **)(pFVar24 + (longlong)iVar19 * 0x10 + -8);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar10 == (SWidget *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_558 = pSVar10;
      local_550 = pTVar5;
      if ((this->Children).bChangesInvalidatePrepass != false) {
        if (*(char *)((longlong)&(this->Children)._padding_ + 1) != -0x24) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                      __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        SWidget::Invalidate((SWidget *)(this->Children)._padding_,ChildOrder);
      }
      pTVar4 = &(this->Children).Children;
      pFVar24 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar24 <= (FScriptContainerElement *)&local_558) &&
          ((FScriptContainerElement *)&local_558 <
           pFVar24 + (longlong)(this->Children).Children.ArrayMax * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      iVar19 = (this->Children).Children.ArrayNum;
      if (iVar19 == (this->Children).Children.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,&(this->Children).Children.ArrayMax);
      }
      pSVar10 = local_558;
      (this->Children).Children.ArrayNum = iVar19 + 1;
      pFVar24 = (pTVar4->AllocatorInstance).Data + (longlong)iVar19 * 0x10;
      *(SWidget **)pFVar24 = local_558;
      *(TReferenceControllerBase<1> **)(pFVar24 + 8) = local_550;
      if (local_550 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_550->SharedReferenceCount = (atomic<int>)((int)local_550->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_558 != SNullWidget::NullWidget.Object) {
        if (*(char *)((longlong)&(this->Children)._padding_ + 1) != -0x24) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::
                      __l3::LOG_Static,(FLogCategoryBase *)&LogSlate);
        }
        pTVar22 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)((this->Children)._padding_ + 8),
                             &local_388);
        local_3b8.Object = pTVar22->Object;
        local_3b8.SharedReferenceCount.ReferenceController =
             (pTVar22->SharedReferenceCount).ReferenceController;
        if (local_3b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SWidget::AssignParentWidget(pSVar10,&local_3b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_388.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_550)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      local_res18 = local_res18 + 1;
      local_538 = local_538 + 1;
      local_res20 = local_res20 + 0x10;
      pTVar25 = local_530;
    } while ((int)local_res18 < local_510->ArrayNum);
  }
  return;
}

// RemoveColorBlock @ 14303d9b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SThemeColorBlocksBar::RemoveColorBlock
          (SThemeColorBlocksBar *this,TSharedPtr<FLinearColor,1> *param_1)

{
  FColorTheme *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FLinearColor,1> local_18;
  
  if ((this->ColorTheme).Object == (FColorTheme *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  local_18.Object = param_1->Object;
  this_00 = (this->ColorTheme).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar3 = FColorTheme::RemoveColor(this_00,&local_18);
  SColorThemesViewer::SaveColorThemesToIni();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar3;
}

// RemoveRefreshCallback @ 14303da40

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::RemoveRefreshCallback(SThemeColorBlocksBar *this)

{
  return;
}

// SetPlaceholderGrabOffset @ 14303e6d0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SThemeColorBlocksBar::SetPlaceholderGrabOffset(SThemeColorBlocksBar *this,TVector2<double> *param_1)

{
  return;
}

// ShowDeleteButton @ 14303e6f0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall SThemeColorBlocksBar::ShowDeleteButton(SThemeColorBlocksBar *this)

{
  this->bShowDeleteButton = true;
  return;
}

